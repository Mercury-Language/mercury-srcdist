/*
** Automatically generated from `rbmm.condition_renaming.m'
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


/* :- module transform_hlds.rbmm.condition_renaming. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__condition_renaming__init
ENDINIT
*/

#include "transform_hlds.rbmm.condition_renaming.mih"


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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_path.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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




#line 154 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

#line 157 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 160 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 163 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 166 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1builtin__type_ctor_info_string_0;

#line 169 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 172 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 175 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 178 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 181 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 184 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 187 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 190 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 193 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 196 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 199 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 202 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 205 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 208 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 211 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 214 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 217 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 220 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 223 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

#line 226 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__pti_list_1__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 229 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 232 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 235 "transform_hlds.rbmm.condition_renaming.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming____Unify____goal_path_regions_table_0_0_10001(
#line 238 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 240 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2);

#line 243 "transform_hlds.rbmm.condition_renaming.c"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming____Compare____goal_path_regions_table_0_0_10001(
#line 246 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 248 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 250 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 253 "transform_hlds.rbmm.condition_renaming.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming____Unify____proc_goal_path_regions_table_0_0_10001(
#line 256 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 258 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2);

#line 261 "transform_hlds.rbmm.condition_renaming.c"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming____Compare____proc_goal_path_regions_table_0_0_10001(
#line 264 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 266 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 268 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 1126 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0_1(
#line 1126 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 1126 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1126 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1126 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 1092 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0(
#line 1092 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPathToThen_2,
#line 1092 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_3,
#line 1092 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_4,
#line 1092 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PrevPoint_5,
#line 1092 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__6_6,
#line 1092 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7,
#line 1092 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_8,
#line 1092 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_9,
#line 1092 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_10);

#line 1073 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_95_91_49_93_95_48_9_p_0(
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PathToThen_2,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_3,
#line 1073 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_4,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__5_5,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_6,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_7,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_8,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_9);

#line 915 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_116_101_95_114_101_110_97_109_105_110_103_95_95_91_51_93_95_48_6_p_0(
#line 915 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_7,
#line 915 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_8,
#line 915 "rbmm.condition_renaming.m"
  MR_String transform_hlds__rbmm__condition_renaming__RegName_10,
#line 915 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_15,
#line 915 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_16);

#line 1060 "rbmm.condition_renaming.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming__IntroducedFrom__pred__collect_ite_annotation_region_names__1060__1_2_p_0(
#line 1060 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LastStep_16,
#line 1060 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__2_31);

#line 1150 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_6_p_0(
#line 1150 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_7,
#line 1150 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamingProc_8,
#line 1150 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_9,
#line 1150 "rbmm.condition_renaming.m"
  MR_String transform_hlds__rbmm__condition_renaming__RegName_10,
#line 1150 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_17,
#line 1150 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_18);

#line 1136 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__reverse_goal_path_to_steps_2_p_0(
#line 1136 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__1_1,
#line 1136 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__HeadVar__2_2);

#line 1073 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_9_p_0(
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_1,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PathToThen_2,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_3,
#line 1073 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_4,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__5_5,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_6,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_7,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_8,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_9);

#line 1065 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_2(
#line 1065 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 1065 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1065 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1065 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 1065 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 1065 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5);

#line 1060 "rbmm.condition_renaming.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_1(
#line 1060 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg);

#line 1050 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0(
#line 1050 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ExecPaths_9,
#line 1050 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_10,
#line 1050 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPathToCond_11,
#line 1050 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_12,
#line 1050 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_20,
#line 1050 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_21,
#line 1050 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_22,
#line 1050 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_23);

#line 1044 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0_1(
#line 1044 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 1044 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1044 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1044 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 1044 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 1044 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_5,
#line 1044 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_6);

#line 1032 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0(
#line 1032 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ExecPathTable_9,
#line 1032 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_10,
#line 1032 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PPId_11,
#line 1032 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_12,
#line 1032 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_22,
#line 1032 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_23,
#line 1032 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationTable_0_24,
#line 1032 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationTable_25);

#line 1002 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(
#line 1002 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPath_5,
#line 1002 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__RevPathToCond_6,
#line 1002 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_0_11,
#line 1002 "rbmm.condition_renaming.m"
  MR_Integer * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_12);

#line 980 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_case_5_p_0(
#line 980 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 980 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 980 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_8,
#line 980 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_13,
#line 980 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_14);

#line 947 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_3(
#line 947 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 947 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 947 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 947 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 942 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_2(
#line 942 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 942 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 942 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 942 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 937 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_1(
#line 937 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 937 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 937 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 937 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 927 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0(
#line 927 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 927 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 927 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__GoalInCond_8,
#line 927 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_51,
#line 927 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_52);

#line 915 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_p_0(
#line 915 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_7,
#line 915 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_8,
#line 915 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming___Graph_9,
#line 915 "rbmm.condition_renaming.m"
  MR_String transform_hlds__rbmm__condition_renaming__RegName_10,
#line 915 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_15,
#line 915 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_16);

#line 900 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0_1(
#line 900 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 900 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 900 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 900 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 878 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(
#line 878 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 878 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 878 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Cond_8,
#line 878 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_19,
#line 878 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_20);

#line 867 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_case_5_p_0(
#line 867 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 867 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 867 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_8,
#line 867 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_13,
#line 867 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_14);

#line 840 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_3(
#line 840 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 840 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 840 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 840 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 836 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_2(
#line 836 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 836 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 836 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 836 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 832 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_1(
#line 832 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 832 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 832 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 832 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 818 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(
#line 818 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 818 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 818 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Goal_8,
#line 818 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48,
#line 818 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49);

#line 803 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_p_0(
#line 803 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ModuleInfo_7,
#line 803 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_8,
#line 803 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PPId_9,
#line 803 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_10,
#line 803 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_19,
#line 803 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_20);

#line 776 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_p_0(
#line 776 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_6,
#line 776 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PathToCond_7,
#line 776 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__InCondRegions_8,
#line 776 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_0_12,
#line 776 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_13);

#line 765 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0_1(
#line 765 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 765 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 765 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 765 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 765 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4);

#line 757 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0(
#line 757 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegionsTable_6,
#line 757 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PPId_7,
#line 757 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__InCondRegionsProc_8,
#line 757 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_0_12,
#line 757 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_13);

#line 731 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_case_8_p_0(
#line 731 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 731 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 731 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 731 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 731 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 731 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_14,
#line 731 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_19,
#line 731 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_20);

#line 687 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_3(
#line 687 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 687 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 687 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 687 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 680 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_2(
#line 680 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 680 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 680 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 680 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 673 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_1(
#line 673 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 673 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 673 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 673 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 661 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0(
#line 661 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 661 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 661 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 661 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 661 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 661 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__GoalInIte_14,
#line 661 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_57,
#line 661 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_58);

#line 632 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_p_0(
#line 632 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPath_5,
#line 632 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Created_6,
#line 632 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_12,
#line 632 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_13);

#line 611 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_2(
#line 611 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 611 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 611 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 611 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 611 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 611 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5);

#line 603 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_1(
#line 603 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 603 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 603 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 603 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 578 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(
#line 578 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 578 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 578 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 578 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 578 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 578 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Cond_14,
#line 578 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_33,
#line 578 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_34);

#line 554 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_case_8_p_0(
#line 554 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 554 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 554 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 554 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 554 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 554 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_14,
#line 554 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_19,
#line 554 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_20);

#line 510 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_3(
#line 510 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 510 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 510 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 510 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 503 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_2(
#line 503 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 503 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 503 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 503 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 496 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_1(
#line 496 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 496 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 496 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 496 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 484 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0(
#line 484 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 484 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 484 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 484 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 484 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 484 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__GoalInIte_14,
#line 484 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_57,
#line 484 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_58);

#line 446 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_p_0(
#line 446 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPath_6,
#line 446 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Created_7,
#line 446 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Removed_8,
#line 446 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_16,
#line 446 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_17);

#line 409 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__renaming_annotation_to_regions_5_p_0(
#line 409 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenameAnnotation_6,
#line 409 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_LeftRegions_0_13,
#line 409 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_LeftRegions_14,
#line 409 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_RightRegions_0_15,
#line 409 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_RightRegions_16);

#line 397 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__apply_region_renaming_5_p_0(
#line 397 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_6,
#line 397 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Renaming_7,
#line 397 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Node_8,
#line 397 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_Regions_0_13,
#line 397 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_Regions_14);

#line 383 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_2(
#line 383 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 383 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 383 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 383 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 383 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 383 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5);

#line 373 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_1(
#line 373 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 373 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 373 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 373 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 342 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(
#line 342 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 342 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 342 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 342 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 342 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 342 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__GoalInIte_14,
#line 342 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_36,
#line 342 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_37);

#line 328 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_case_10_p_0(
#line 328 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_11,
#line 328 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_12,
#line 328 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_13,
#line 328 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_14,
#line 328 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_15,
#line 328 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_16,
#line 328 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_22,
#line 328 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_23,
#line 328 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_24,
#line 328 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_25);

#line 273 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_3(
#line 273 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 273 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 273 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 273 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 273 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 273 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5);

#line 281 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_2(
#line 281 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 281 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 281 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 281 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 281 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 281 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5);

#line 256 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_1(
#line 256 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 256 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 256 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 256 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 256 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 256 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5);

#line 245 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0(
#line 245 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_1,
#line 245 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_2,
#line 245 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_3,
#line 245 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4,
#line 245 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5,
#line 245 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__6_6,
#line 245 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__7_7,
#line 245 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__HeadVar__8_8,
#line 245 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9,
#line 245 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10);

#line 231 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(
#line 231 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_11,
#line 231 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_12,
#line 231 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_13,
#line 231 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_14,
#line 231 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_15,
#line 231 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Goal_16,
#line 231 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsProc_0_21,
#line 231 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsProc_22,
#line 231 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_23,
#line 231 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_24);

#line 182 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_12_p_0(
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ModuleInfo_13,
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PredId_14,
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_15,
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeTable_16,
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterTable_17,
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingTable_18,
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoTable_19,
#line 182 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__ProcId_20,
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_0_37,
#line 182 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_38,
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_0_39,
#line 182 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_40);

#line 177 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0_1(
#line 177 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 177 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 177 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 177 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 177 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 177 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5);

#line 163 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0(
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ModuleInfo_12,
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_13,
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeTable_14,
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterTable_15,
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingTable_16,
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoTable_17,
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PredId_18,
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_0_23,
#line 163 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_24,
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_0_25,
#line 163 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_26);

#line 1028 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_6_p_0_1(
#line 1028 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 1028 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1028 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1028 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 1028 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 1028 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_5,
#line 1028 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_6);

#line 800 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_p_0_1(
#line 800 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 800 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 800 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 800 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 800 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4);

#line 754 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_p_0_1(
#line 754 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 754 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 754 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 754 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 754 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4);

#line 158 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_8_p_0_1(
#line 158 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 158 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 158 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 158 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 158 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 158 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_1[6][2];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_2[11][3];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_3[1][14];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_4[6][8];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_5[3][9];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_6[4][11];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_7[1][15];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_8[2][13];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_9[1][5];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_10[1][12];




static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[8]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[4]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_2[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[3]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_3[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_4[6][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_5[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_6[4][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__list__pti_list_1__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_7[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_8[2][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_9[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_10[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1676 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

#line 1685 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1693 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1702 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1711 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1719 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &transform_hlds__rbmm__condition_renaming__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1728 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1737 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1746 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1754 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__condition_renaming__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1763 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1772 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1780 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_TypeInfo) &transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
  }
};

#line 1789 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
  }
};

#line 1798 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
  }
};

#line 1807 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1816 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__condition_renaming__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1824 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__condition_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1832 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1841 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1850 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1859 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1868 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1877 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1885 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__pti_list_1__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1893 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1901 "transform_hlds.rbmm.condition_renaming.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__condition_renaming__transform_hlds__rbmm__condition_renaming__type_ctor_info_goal_path_regions_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__condition_renaming____Unify____goal_path_regions_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__condition_renaming____Compare____goal_path_regions_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.condition_renaming",
  (MR_String) "goal_path_regions_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1918 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
  }
};

#line 1927 "transform_hlds.rbmm.condition_renaming.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__condition_renaming__transform_hlds__rbmm__condition_renaming__type_ctor_info_proc_goal_path_regions_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__condition_renaming____Unify____proc_goal_path_regions_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__condition_renaming____Compare____proc_goal_path_regions_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.condition_renaming",
  (MR_String) "proc_goal_path_regions_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1944 "transform_hlds.rbmm.condition_renaming.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming____Unify____goal_path_regions_table_0_0_10001(
#line 1947 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1949 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2)
#line 1951 "transform_hlds.rbmm.condition_renaming.c"
{
#line 1953 "transform_hlds.rbmm.condition_renaming.c"
  {
#line 1955 "transform_hlds.rbmm.condition_renaming.c"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 1958 "transform_hlds.rbmm.condition_renaming.c"
    {
#line 1960 "transform_hlds.rbmm.condition_renaming.c"
      transform_hlds__rbmm__condition_renaming__succeeded = transform_hlds__rbmm__condition_renaming____Unify____goal_path_regions_table_0_0(((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2));
    }
#line 1963 "transform_hlds.rbmm.condition_renaming.c"
    return transform_hlds__rbmm__condition_renaming__succeeded;
#line 1965 "transform_hlds.rbmm.condition_renaming.c"
  }
#line 1967 "transform_hlds.rbmm.condition_renaming.c"
}

#line 1970 "transform_hlds.rbmm.condition_renaming.c"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming____Compare____goal_path_regions_table_0_0_10001(
#line 1973 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1975 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1977 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 1979 "transform_hlds.rbmm.condition_renaming.c"
{
#line 1981 "transform_hlds.rbmm.condition_renaming.c"
  {
#line 1983 "transform_hlds.rbmm.condition_renaming.c"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_HeadVar__1_1;

#line 1986 "transform_hlds.rbmm.condition_renaming.c"
    {
#line 1988 "transform_hlds.rbmm.condition_renaming.c"
      transform_hlds__rbmm__condition_renaming____Compare____goal_path_regions_table_0_0(&transform_hlds__rbmm__condition_renaming__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_3));
    }
#line 1991 "transform_hlds.rbmm.condition_renaming.c"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_HeadVar__1_1));
#line 1993 "transform_hlds.rbmm.condition_renaming.c"
  }
#line 1995 "transform_hlds.rbmm.condition_renaming.c"
}

#line 1998 "transform_hlds.rbmm.condition_renaming.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming____Unify____proc_goal_path_regions_table_0_0_10001(
#line 2001 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 2003 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2)
#line 2005 "transform_hlds.rbmm.condition_renaming.c"
{
#line 2007 "transform_hlds.rbmm.condition_renaming.c"
  {
#line 2009 "transform_hlds.rbmm.condition_renaming.c"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 2012 "transform_hlds.rbmm.condition_renaming.c"
    {
#line 2014 "transform_hlds.rbmm.condition_renaming.c"
      transform_hlds__rbmm__condition_renaming__succeeded = transform_hlds__rbmm__condition_renaming____Unify____proc_goal_path_regions_table_0_0(((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2));
    }
#line 2017 "transform_hlds.rbmm.condition_renaming.c"
    return transform_hlds__rbmm__condition_renaming__succeeded;
#line 2019 "transform_hlds.rbmm.condition_renaming.c"
  }
#line 2021 "transform_hlds.rbmm.condition_renaming.c"
}

#line 2024 "transform_hlds.rbmm.condition_renaming.c"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming____Compare____proc_goal_path_regions_table_0_0_10001(
#line 2027 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 2029 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 2031 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 2033 "transform_hlds.rbmm.condition_renaming.c"
{
#line 2035 "transform_hlds.rbmm.condition_renaming.c"
  {
#line 2037 "transform_hlds.rbmm.condition_renaming.c"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_HeadVar__1_1;

#line 2040 "transform_hlds.rbmm.condition_renaming.c"
    {
#line 2042 "transform_hlds.rbmm.condition_renaming.c"
      transform_hlds__rbmm__condition_renaming____Compare____proc_goal_path_regions_table_0_0(&transform_hlds__rbmm__condition_renaming__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_3));
    }
#line 2045 "transform_hlds.rbmm.condition_renaming.c"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_HeadVar__1_1));
#line 2047 "transform_hlds.rbmm.condition_renaming.c"
  }
#line 2049 "transform_hlds.rbmm.condition_renaming.c"
}

#line 1126 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0_1(
#line 1126 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 1126 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1126 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1126 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 1126 "rbmm.condition_renaming.m"
{
#line 1126 "rbmm.condition_renaming.m"
  {
#line 1126 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 1126 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteAnnotationProc_18;

#line 1126 "rbmm.condition_renaming.m"
    {
#line 1126 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_String) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteAnnotationProc_18);
    }
#line 1126 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteAnnotationProc_18));
#line 1126 "rbmm.condition_renaming.m"
  }
#line 1126 "rbmm.condition_renaming.m"
}

#line 1092 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0(
#line 1092 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPathToThen_2,
#line 1092 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_3,
#line 1092 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_4,
#line 1092 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PrevPoint_5,
#line 1092 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__6_6,
#line 1092 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7,
#line 1092 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_8,
#line 1092 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_9,
#line 1092 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_10)
#line 1092 "rbmm.condition_renaming.m"
{
#line 1098 "rbmm.condition_renaming.m"
  while (MR_TRUE)
#line 1098 "rbmm.condition_renaming.m"
    {
#line 1098 "rbmm.condition_renaming.m"
      /* tailcall optimized into a loop */
#line 1098 "rbmm.condition_renaming.m"
      {
#line 1098 "rbmm.condition_renaming.m"
        MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 1098 "rbmm.condition_renaming.m"
        if ((transform_hlds__rbmm__condition_renaming__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1098 "rbmm.condition_renaming.m"
          {
#line 1099 "rbmm.condition_renaming.m"
            *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_10 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_9;
#line 1098 "rbmm.condition_renaming.m"
            *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_8 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7;
#line 1098 "rbmm.condition_renaming.m"
          }
#line 1098 "rbmm.condition_renaming.m"
        else
#line 1102 "rbmm.condition_renaming.m"
          {
#line 1102 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_53_53;
#line 1102 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_27;
#line 1102 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__ProgPointGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 1)));
#line 1102 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__RevGoalPath_33;
#line 1102 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__RevGoalPathSteps_34;
#line 1102 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__GoalPathSteps_35;
#line 1102 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__RevPathToThenSteps_36;
#line 1102 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__PathToThenSteps_37;
#line 1102 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 0)));
#line 1101 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__V_28_28;
#line 1103 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__V_32_32;
#line 1130 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__FromThenSteps_38;

#line 1101 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ProgPoint_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_44_44, (MR_Integer) 0)));
#line 1101 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_44_44, (MR_Integer) 1)));
#line 1103 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__ProgPoint_27, (MR_Integer) 0)));
#line 1103 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__RevGoalPath_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__ProgPoint_27, (MR_Integer) 1)));
#line 1104 "rbmm.condition_renaming.m"
            {
#line 1104 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__reverse_goal_path_to_steps_2_p_0(transform_hlds__rbmm__condition_renaming__RevGoalPath_33, &transform_hlds__rbmm__condition_renaming__RevGoalPathSteps_34);
            }
#line 2170 "transform_hlds.rbmm.condition_renaming.c"
            transform_hlds__rbmm__condition_renaming__TypeCtorInfo_53_53 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0;
#line 1105 "rbmm.condition_renaming.m"
            {
#line 1105 "rbmm.condition_renaming.m"
              mercury__list__reverse_2_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_53_53, transform_hlds__rbmm__condition_renaming__RevGoalPathSteps_34, &transform_hlds__rbmm__condition_renaming__GoalPathSteps_35);
            }
#line 1106 "rbmm.condition_renaming.m"
            {
#line 1106 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__reverse_goal_path_to_steps_2_p_0(transform_hlds__rbmm__condition_renaming__RevPathToThen_2, &transform_hlds__rbmm__condition_renaming__RevPathToThenSteps_36);
            }
#line 1107 "rbmm.condition_renaming.m"
            {
#line 1107 "rbmm.condition_renaming.m"
              mercury__list__reverse_2_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_53_53, transform_hlds__rbmm__condition_renaming__RevPathToThenSteps_36, &transform_hlds__rbmm__condition_renaming__PathToThenSteps_37);
            }
#line 1108 "rbmm.condition_renaming.m"
            {
#line 1108 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__succeeded = mercury__list__append_3_p_3(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_53_53, transform_hlds__rbmm__condition_renaming__PathToThenSteps_37, &transform_hlds__rbmm__condition_renaming__FromThenSteps_38, transform_hlds__rbmm__condition_renaming__GoalPathSteps_35);
            }
#line 1130 "rbmm.condition_renaming.m"
            if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1121 "rbmm.condition_renaming.m"
              {
#line 1109 "rbmm.condition_renaming.m"
                {
#line 1109 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__succeeded = mercury__list__member_2_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_53_53, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__rbmm__condition_renaming__FromThenSteps_38);
                }
#line 1121 "rbmm.condition_renaming.m"
                if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1117 "rbmm.condition_renaming.m"
                  {
#line 1117 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_46_46;
#line 1115 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__PrevIteRenaming_39;
#line 1113 "rbmm.condition_renaming.m"
                    MR_Box transform_hlds__rbmm__condition_renaming__conv0_PrevIteRenaming_39;

#line 1113 "rbmm.condition_renaming.m"
                    {
#line 1113 "rbmm.condition_renaming.m"
                      transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2], transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PrevPoint_5)), &transform_hlds__rbmm__condition_renaming__conv0_PrevIteRenaming_39);
                    }
#line 1113 "rbmm.condition_renaming.m"
                    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1113 "rbmm.condition_renaming.m"
                      {
#line 1113 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__PrevIteRenaming_39 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_PrevIteRenaming_39);
#line 1113 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 1113 "rbmm.condition_renaming.m"
                      }
#line 1115 "rbmm.condition_renaming.m"
                    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1114 "rbmm.condition_renaming.m"
                      {
#line 1114 "rbmm.condition_renaming.m"
                        {
#line 1114 "rbmm.condition_renaming.m"
                          mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2], ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_27)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__PrevIteRenaming_39)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_46_46);
                        }
#line 1114 "rbmm.condition_renaming.m"
                      }
#line 1115 "rbmm.condition_renaming.m"
                    else
#line 1115 "rbmm.condition_renaming.m"
                      transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_46_46 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7;
#line 1118 "rbmm.condition_renaming.m"
                    /* direct tailcall eliminated */
#line 1118 "rbmm.condition_renaming.m"
                    {
#line 1118 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__PrevPoint__tmp_copy_5 = transform_hlds__rbmm__condition_renaming__ProgPoint_27;
#line 1118 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__6__tmp_copy_6 = transform_hlds__rbmm__condition_renaming__ProgPointGoals_29;
#line 1118 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0__tmp_copy_7 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_46_46;

#line 1118 "rbmm.condition_renaming.m"
                      transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0__tmp_copy_7;
#line 1118 "rbmm.condition_renaming.m"
                      transform_hlds__rbmm__condition_renaming__HeadVar__6_6 = transform_hlds__rbmm__condition_renaming__HeadVar__6__tmp_copy_6;
#line 1118 "rbmm.condition_renaming.m"
                      transform_hlds__rbmm__condition_renaming__PrevPoint_5 = transform_hlds__rbmm__condition_renaming__PrevPoint__tmp_copy_5;
#line 1118 "rbmm.condition_renaming.m"
                    }
#line 1118 "rbmm.condition_renaming.m"
                    continue;
#line 1117 "rbmm.condition_renaming.m"
                  }
#line 1121 "rbmm.condition_renaming.m"
                else
#line 1125 "rbmm.condition_renaming.m"
                  {
#line 1125 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__V_49_49;
#line 1125 "rbmm.condition_renaming.m"
                    MR_Box transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteAnnotationProc_10;

#line 1126 "rbmm.condition_renaming.m"
                    {
#line 1126 "rbmm.condition_renaming.m"
                      transform_hlds__rbmm__condition_renaming__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1126 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_49_49, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_5[2]));
#line 1126 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_49_49, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0_1));
#line 1126 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1126 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_49_49, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_27));
#line 1126 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_49_49, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7));
#line 1126 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_49_49, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__HowMany_4));
#line 1126 "rbmm.condition_renaming.m"
                    }
#line 1125 "rbmm.condition_renaming.m"
                    {
#line 1125 "rbmm.condition_renaming.m"
                      mercury__set__fold_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[5], transform_hlds__rbmm__condition_renaming__V_49_49, transform_hlds__rbmm__condition_renaming__RenamedRegions_3, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_9)), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteAnnotationProc_10);
                    }
#line 1125 "rbmm.condition_renaming.m"
                    *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_10 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteAnnotationProc_10);
#line 1125 "rbmm.condition_renaming.m"
                    *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_8 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7;
#line 1125 "rbmm.condition_renaming.m"
                  }
#line 1121 "rbmm.condition_renaming.m"
              }
#line 1130 "rbmm.condition_renaming.m"
            else
#line 1131 "rbmm.condition_renaming.m"
              {
#line 1131 "rbmm.condition_renaming.m"
                /* direct tailcall eliminated */
#line 1131 "rbmm.condition_renaming.m"
                {
#line 1131 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__PrevPoint__tmp_copy_5 = transform_hlds__rbmm__condition_renaming__ProgPoint_27;
#line 1131 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__6__tmp_copy_6 = transform_hlds__rbmm__condition_renaming__ProgPointGoals_29;

#line 1131 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__HeadVar__6_6 = transform_hlds__rbmm__condition_renaming__HeadVar__6__tmp_copy_6;
#line 1131 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__PrevPoint_5 = transform_hlds__rbmm__condition_renaming__PrevPoint__tmp_copy_5;
#line 1131 "rbmm.condition_renaming.m"
                }
#line 1131 "rbmm.condition_renaming.m"
                continue;
#line 1131 "rbmm.condition_renaming.m"
              }
#line 1102 "rbmm.condition_renaming.m"
          }
#line 1098 "rbmm.condition_renaming.m"
      }
#line 1098 "rbmm.condition_renaming.m"
      break;
#line 1098 "rbmm.condition_renaming.m"
    }
#line 1092 "rbmm.condition_renaming.m"
}

#line 1073 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_95_91_49_93_95_48_9_p_0(
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PathToThen_2,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_3,
#line 1073 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_4,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__5_5,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_6,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_7,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_8,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_9)
#line 1073 "rbmm.condition_renaming.m"
{
#line 1079 "rbmm.condition_renaming.m"
  {
#line 1079 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 1079 "rbmm.condition_renaming.m"
    if ((transform_hlds__rbmm__condition_renaming__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1079 "rbmm.condition_renaming.m"
      {
#line 1080 "rbmm.condition_renaming.m"
        *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_9 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_8;
#line 1079 "rbmm.condition_renaming.m"
        *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_7 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_6;
#line 1079 "rbmm.condition_renaming.m"
      }
#line 1079 "rbmm.condition_renaming.m"
    else
#line 1083 "rbmm.condition_renaming.m"
      {
#line 1083 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_24;
#line 1083 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ProgPointGoals_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__HeadVar__5_5, (MR_Integer) 1)));
#line 1083 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__HeadVar__5_5, (MR_Integer) 0)));
#line 1082 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_25_25;

#line 1082 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__ProgPoint_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_33_33, (MR_Integer) 0)));
#line 1082 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_33_33, (MR_Integer) 1)));
#line 1086 "rbmm.condition_renaming.m"
        {
#line 1086 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0(transform_hlds__rbmm__condition_renaming__PathToThen_2, transform_hlds__rbmm__condition_renaming__RenamedRegions_3, transform_hlds__rbmm__condition_renaming__HowMany_4, transform_hlds__rbmm__condition_renaming__ProgPoint_24, transform_hlds__rbmm__condition_renaming__ProgPointGoals_26, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_6, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_7, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_8, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_9);
#line 1086 "rbmm.condition_renaming.m"
          return;
        }
#line 1083 "rbmm.condition_renaming.m"
      }
#line 1079 "rbmm.condition_renaming.m"
  }
#line 1073 "rbmm.condition_renaming.m"
}

#line 915 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_116_101_95_114_101_110_97_109_105_110_103_95_95_91_51_93_95_48_6_p_0(
#line 915 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_7,
#line 915 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_8,
#line 915 "rbmm.condition_renaming.m"
  MR_String transform_hlds__rbmm__condition_renaming__RegName_10,
#line 915 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_15,
#line 915 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_16)
#line 915 "rbmm.condition_renaming.m"
{
#line 918 "rbmm.condition_renaming.m"
  {
#line 918 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 918 "rbmm.condition_renaming.m"
    MR_String transform_hlds__rbmm__condition_renaming__NewName_12;
#line 918 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__IteRenaming_14;
#line 918 "rbmm.condition_renaming.m"
    MR_String transform_hlds__rbmm__condition_renaming__V_17_17;
#line 918 "rbmm.condition_renaming.m"
    MR_String transform_hlds__rbmm__condition_renaming__V_19_19;
#line 922 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__IteRenaming0_13;
#line 920 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv0_IteRenaming0_13;

#line 919 "rbmm.condition_renaming.m"
    {
#line 919 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_19_19 = mercury__string__int_to_string_1_f_0(transform_hlds__rbmm__condition_renaming__HowMany_8);
    }
#line 919 "rbmm.condition_renaming.m"
    {
#line 919 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "_ite_", transform_hlds__rbmm__condition_renaming__V_19_19);
    }
#line 919 "rbmm.condition_renaming.m"
    {
#line 919 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__NewName_12 = mercury__string__f_43_43_2_f_0(transform_hlds__rbmm__condition_renaming__RegName_10, transform_hlds__rbmm__condition_renaming__V_17_17);
    }
#line 920 "rbmm.condition_renaming.m"
    {
#line 920 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2], transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_15, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_7)), &transform_hlds__rbmm__condition_renaming__conv0_IteRenaming0_13);
    }
#line 920 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 920 "rbmm.condition_renaming.m"
      {
#line 920 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__IteRenaming0_13 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_IteRenaming0_13);
#line 920 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 920 "rbmm.condition_renaming.m"
      }
#line 922 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 921 "rbmm.condition_renaming.m"
      {
#line 921 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_20_20;

#line 921 "rbmm.condition_renaming.m"
        {
#line 921 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__V_20_20, 0) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__NewName_12));
#line 921 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 921 "rbmm.condition_renaming.m"
        }
#line 921 "rbmm.condition_renaming.m"
        {
#line 921 "rbmm.condition_renaming.m"
          mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__condition_renaming__RegName_10)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_20_20)), transform_hlds__rbmm__condition_renaming__IteRenaming0_13, &transform_hlds__rbmm__condition_renaming__IteRenaming_14);
        }
#line 921 "rbmm.condition_renaming.m"
      }
#line 922 "rbmm.condition_renaming.m"
    else
#line 923 "rbmm.condition_renaming.m"
      {
#line 923 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30;
#line 923 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_31_31;
#line 923 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_22_22;
#line 923 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_23_23;

#line 923 "rbmm.condition_renaming.m"
        {
#line 923 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 923 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__V_22_22, 0) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__NewName_12));
#line 923 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 923 "rbmm.condition_renaming.m"
        }
#line 2515 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2517 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeInfo_31_31 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[1];
#line 923 "rbmm.condition_renaming.m"
        {
#line 923 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_23_23 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30, transform_hlds__rbmm__condition_renaming__TypeInfo_31_31);
        }
#line 923 "rbmm.condition_renaming.m"
        {
#line 923 "rbmm.condition_renaming.m"
          mercury__map__set_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30, transform_hlds__rbmm__condition_renaming__TypeInfo_31_31, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RegName_10)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_22_22)), transform_hlds__rbmm__condition_renaming__V_23_23, &transform_hlds__rbmm__condition_renaming__IteRenaming_14);
        }
#line 923 "rbmm.condition_renaming.m"
      }
#line 925 "rbmm.condition_renaming.m"
    {
#line 925 "rbmm.condition_renaming.m"
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2], ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_7)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenaming_14)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_15, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_16);
#line 925 "rbmm.condition_renaming.m"
      return;
    }
#line 918 "rbmm.condition_renaming.m"
  }
#line 915 "rbmm.condition_renaming.m"
}

#line 1060 "rbmm.condition_renaming.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming__IntroducedFrom__pred__collect_ite_annotation_region_names__1060__1_2_p_0(
#line 1060 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LastStep_16,
#line 1060 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__2_31)
#line 1060 "rbmm.condition_renaming.m"
{
#line 1060 "rbmm.condition_renaming.m"
  {
#line 1060 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 1060 "rbmm.condition_renaming.m"
    {
#line 1060 "rbmm.condition_renaming.m"
      return transform_hlds__rbmm__condition_renaming__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(transform_hlds__rbmm__condition_renaming__LastStep_16, transform_hlds__rbmm__condition_renaming__HeadVar__2_31);
    }
#line 1060 "rbmm.condition_renaming.m"
    return transform_hlds__rbmm__condition_renaming__succeeded;
#line 1060 "rbmm.condition_renaming.m"
  }
#line 1060 "rbmm.condition_renaming.m"
}

#line 55 "rbmm.condition_renaming.m"
void MR_CALL 
transform_hlds__rbmm__condition_renaming____Compare____proc_goal_path_regions_table_0_0(
#line 55 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__HeadVar__1_1,
#line 55 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__2_2,
#line 55 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__3_3)
#line 55 "rbmm.condition_renaming.m"
{
#line 55 "rbmm.condition_renaming.m"
  {
#line 55 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 55 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Cast_HeadVar1_4 = transform_hlds__rbmm__condition_renaming__HeadVar__2_2;
#line 55 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Cast_HeadVar2_5 = transform_hlds__rbmm__condition_renaming__HeadVar__3_3;

#line 55 "rbmm.condition_renaming.m"
    {
#line 55 "rbmm.condition_renaming.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[1], transform_hlds__rbmm__condition_renaming__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__condition_renaming__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__Cast_HeadVar2_5)));
#line 55 "rbmm.condition_renaming.m"
      return;
    }
#line 55 "rbmm.condition_renaming.m"
  }
#line 55 "rbmm.condition_renaming.m"
}

#line 55 "rbmm.condition_renaming.m"
MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming____Unify____proc_goal_path_regions_table_0_0(
#line 55 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__1_1,
#line 55 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__2_2)
#line 55 "rbmm.condition_renaming.m"
{
#line 55 "rbmm.condition_renaming.m"
  {
#line 55 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 55 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Cast_HeadVar1_3 = transform_hlds__rbmm__condition_renaming__HeadVar__1_1;
#line 55 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Cast_HeadVar2_4 = transform_hlds__rbmm__condition_renaming__HeadVar__2_2;

#line 55 "rbmm.condition_renaming.m"
    {
#line 55 "rbmm.condition_renaming.m"
      return transform_hlds__rbmm__condition_renaming__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__condition_renaming__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__Cast_HeadVar2_4)));
    }
#line 55 "rbmm.condition_renaming.m"
    return transform_hlds__rbmm__condition_renaming__succeeded;
#line 55 "rbmm.condition_renaming.m"
  }
#line 55 "rbmm.condition_renaming.m"
}

#line 57 "rbmm.condition_renaming.m"
void MR_CALL 
transform_hlds__rbmm__condition_renaming____Compare____goal_path_regions_table_0_0(
#line 57 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__HeadVar__1_1,
#line 57 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__2_2,
#line 57 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__3_3)
#line 57 "rbmm.condition_renaming.m"
{
#line 57 "rbmm.condition_renaming.m"
  {
#line 57 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 57 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Cast_HeadVar1_4 = transform_hlds__rbmm__condition_renaming__HeadVar__2_2;
#line 57 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Cast_HeadVar2_5 = transform_hlds__rbmm__condition_renaming__HeadVar__3_3;

#line 57 "rbmm.condition_renaming.m"
    {
#line 57 "rbmm.condition_renaming.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], transform_hlds__rbmm__condition_renaming__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__condition_renaming__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__Cast_HeadVar2_5)));
#line 57 "rbmm.condition_renaming.m"
      return;
    }
#line 57 "rbmm.condition_renaming.m"
  }
#line 57 "rbmm.condition_renaming.m"
}

#line 57 "rbmm.condition_renaming.m"
MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming____Unify____goal_path_regions_table_0_0(
#line 57 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__1_1,
#line 57 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__2_2)
#line 57 "rbmm.condition_renaming.m"
{
#line 57 "rbmm.condition_renaming.m"
  {
#line 57 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 57 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Cast_HeadVar1_3 = transform_hlds__rbmm__condition_renaming__HeadVar__1_1;
#line 57 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Cast_HeadVar2_4 = transform_hlds__rbmm__condition_renaming__HeadVar__2_2;

#line 57 "rbmm.condition_renaming.m"
    {
#line 57 "rbmm.condition_renaming.m"
      return transform_hlds__rbmm__condition_renaming__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__condition_renaming__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__Cast_HeadVar2_4)));
    }
#line 57 "rbmm.condition_renaming.m"
    return transform_hlds__rbmm__condition_renaming__succeeded;
#line 57 "rbmm.condition_renaming.m"
  }
#line 57 "rbmm.condition_renaming.m"
}

#line 1150 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_6_p_0(
#line 1150 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_7,
#line 1150 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamingProc_8,
#line 1150 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_9,
#line 1150 "rbmm.condition_renaming.m"
  MR_String transform_hlds__rbmm__condition_renaming__RegName_10,
#line 1150 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_17,
#line 1150 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_18)
#line 1150 "rbmm.condition_renaming.m"
{
#line 1156 "rbmm.condition_renaming.m"
  {
#line 1156 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 1156 "rbmm.condition_renaming.m"
    MR_String transform_hlds__rbmm__condition_renaming__CurrentName_12;
#line 1156 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Annotation_16;
#line 1156 "rbmm.condition_renaming.m"
    MR_String transform_hlds__rbmm__condition_renaming__V_19_19;
#line 1156 "rbmm.condition_renaming.m"
    MR_String transform_hlds__rbmm__condition_renaming__V_21_21;
#line 1169 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Renaming_13;
#line 1158 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv0_Renaming_13;

#line 1157 "rbmm.condition_renaming.m"
    {
#line 1157 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_21_21 = mercury__string__int_to_string_1_f_0(transform_hlds__rbmm__condition_renaming__HowMany_9);
    }
#line 1157 "rbmm.condition_renaming.m"
    {
#line 1157 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "_ite_", transform_hlds__rbmm__condition_renaming__V_21_21);
    }
#line 1157 "rbmm.condition_renaming.m"
    {
#line 1157 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__CurrentName_12 = mercury__string__f_43_43_2_f_0(transform_hlds__rbmm__condition_renaming__RegName_10, transform_hlds__rbmm__condition_renaming__V_19_19);
    }
#line 1158 "rbmm.condition_renaming.m"
    {
#line 1158 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2], transform_hlds__rbmm__condition_renaming__IteRenamingProc_8, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_7)), &transform_hlds__rbmm__condition_renaming__conv0_Renaming_13);
    }
#line 1158 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1158 "rbmm.condition_renaming.m"
      {
#line 1158 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__Renaming_13 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_Renaming_13);
#line 1158 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 1158 "rbmm.condition_renaming.m"
      }
#line 1169 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1166 "rbmm.condition_renaming.m"
      {
#line 1166 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RenameToList_14;
#line 1159 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv1_RenameToList_14;

#line 1159 "rbmm.condition_renaming.m"
        {
#line 1159 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[1], transform_hlds__rbmm__condition_renaming__Renaming_13, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RegName_10)), &transform_hlds__rbmm__condition_renaming__conv1_RenameToList_14);
        }
#line 1159 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1159 "rbmm.condition_renaming.m"
          {
#line 1159 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__RenameToList_14 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_RenameToList_14);
#line 1159 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 1159 "rbmm.condition_renaming.m"
          }
#line 1166 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1163 "rbmm.condition_renaming.m"
          {
#line 1160 "rbmm.condition_renaming.m"
            MR_Integer transform_hlds__rbmm__condition_renaming__V_22_22;

#line 1160 "rbmm.condition_renaming.m"
            {
#line 1160 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__V_22_22 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__condition_renaming__RenameToList_14);
            }
#line 1160 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = (transform_hlds__rbmm__condition_renaming__V_22_22 == (MR_Integer) 1);
#line 1163 "rbmm.condition_renaming.m"
            if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1161 "rbmm.condition_renaming.m"
              {
#line 1161 "rbmm.condition_renaming.m"
                MR_String transform_hlds__rbmm__condition_renaming__RenameTo_15;
#line 1161 "rbmm.condition_renaming.m"
                MR_Box transform_hlds__rbmm__condition_renaming__conv2_RenameTo_15;

#line 1161 "rbmm.condition_renaming.m"
                {
#line 1161 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__conv2_RenameTo_15 = mercury__list__det_last_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__condition_renaming__RenameToList_14);
                }
#line 1161 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__RenameTo_15 = ((MR_String) transform_hlds__rbmm__condition_renaming__conv2_RenameTo_15);
#line 1162 "rbmm.condition_renaming.m"
                {
#line 1162 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__region_resurrection_renaming__make_renaming_instruction_3_p_0(transform_hlds__rbmm__condition_renaming__CurrentName_12, transform_hlds__rbmm__condition_renaming__RenameTo_15, &transform_hlds__rbmm__condition_renaming__Annotation_16);
                }
#line 1161 "rbmm.condition_renaming.m"
              }
#line 1163 "rbmm.condition_renaming.m"
            else
#line 1164 "rbmm.condition_renaming.m"
              {
#line 1164 "rbmm.condition_renaming.m"
                {
#line 1164 "rbmm.condition_renaming.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.introduce_reverse_renaming\'/6", (MR_String) "more than one renaming");
#line 1164 "rbmm.condition_renaming.m"
                  return;
                }
#line 1164 "rbmm.condition_renaming.m"
              }
#line 1163 "rbmm.condition_renaming.m"
          }
#line 1166 "rbmm.condition_renaming.m"
        else
#line 1167 "rbmm.condition_renaming.m"
          {
#line 1167 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__region_resurrection_renaming__make_renaming_instruction_3_p_0(transform_hlds__rbmm__condition_renaming__CurrentName_12, transform_hlds__rbmm__condition_renaming__RegName_10, &transform_hlds__rbmm__condition_renaming__Annotation_16);
          }
#line 1166 "rbmm.condition_renaming.m"
      }
#line 1169 "rbmm.condition_renaming.m"
    else
#line 1171 "rbmm.condition_renaming.m"
      {
#line 1171 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__region_resurrection_renaming__make_renaming_instruction_3_p_0(transform_hlds__rbmm__condition_renaming__CurrentName_12, transform_hlds__rbmm__condition_renaming__RegName_10, &transform_hlds__rbmm__condition_renaming__Annotation_16);
      }
#line 1173 "rbmm.condition_renaming.m"
    {
#line 1173 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__region_resurrection_renaming__record_annotation_4_p_0(transform_hlds__rbmm__condition_renaming__ProgPoint_7, transform_hlds__rbmm__condition_renaming__Annotation_16, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_17, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_18);
#line 1173 "rbmm.condition_renaming.m"
      return;
    }
#line 1156 "rbmm.condition_renaming.m"
  }
#line 1150 "rbmm.condition_renaming.m"
}

#line 1136 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__reverse_goal_path_to_steps_2_p_0(
#line 1136 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__1_1,
#line 1136 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__HeadVar__2_2)
#line 1136 "rbmm.condition_renaming.m"
{
#line 1139 "rbmm.condition_renaming.m"
  {
#line 1139 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 1139 "rbmm.condition_renaming.m"
    if ((transform_hlds__rbmm__condition_renaming__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1139 "rbmm.condition_renaming.m"
      *transform_hlds__rbmm__condition_renaming__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1139 "rbmm.condition_renaming.m"
    else
#line 1141 "rbmm.condition_renaming.m"
      {
#line 1141 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__EarlierPath_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__HeadVar__1_1, (MR_Integer) 0)));
#line 1141 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__LaterStep_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__HeadVar__1_1, (MR_Integer) 1)));
#line 1141 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__EarlierSteps_5;

#line 1142 "rbmm.condition_renaming.m"
        {
#line 1142 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__reverse_goal_path_to_steps_2_p_0(transform_hlds__rbmm__condition_renaming__EarlierPath_3, &transform_hlds__rbmm__condition_renaming__EarlierSteps_5);
        }
#line 1141 "rbmm.condition_renaming.m"
        {
#line 1141 "rbmm.condition_renaming.m"
          MR_Word base;
#line 1141 "rbmm.condition_renaming.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__HeadVar__2_2 = base;
#line 1141 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LaterStep_4));
#line 1141 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__EarlierSteps_5));
#line 1141 "rbmm.condition_renaming.m"
        }
#line 1141 "rbmm.condition_renaming.m"
      }
#line 1139 "rbmm.condition_renaming.m"
  }
#line 1136 "rbmm.condition_renaming.m"
}

#line 1073 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_9_p_0(
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_1,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PathToThen_2,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_3,
#line 1073 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_4,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__5_5,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_6,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_7,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_8,
#line 1073 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_9)
#line 1073 "rbmm.condition_renaming.m"
{
#line 1079 "rbmm.condition_renaming.m"
  {
#line 1079 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 1079 "rbmm.condition_renaming.m"
    {
#line 1079 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_95_91_49_93_95_48_9_p_0(transform_hlds__rbmm__condition_renaming__PathToThen_2, transform_hlds__rbmm__condition_renaming__RenamedRegions_3, transform_hlds__rbmm__condition_renaming__HowMany_4, transform_hlds__rbmm__condition_renaming__HeadVar__5_5, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_6, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_7, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_8, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_9);
#line 1079 "rbmm.condition_renaming.m"
      return;
    }
#line 1079 "rbmm.condition_renaming.m"
  }
#line 1073 "rbmm.condition_renaming.m"
}

#line 1065 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_2(
#line 1065 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 1065 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1065 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1065 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 1065 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 1065 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5)
#line 1065 "rbmm.condition_renaming.m"
{
#line 1065 "rbmm.condition_renaming.m"
  {
#line 1065 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 1065 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_7;
#line 1065 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteAnnotationProc_9;

#line 1065 "rbmm.condition_renaming.m"
    {
#line 1065 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_7, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_4), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteAnnotationProc_9);
    }
#line 1065 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_7));
#line 1065 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteAnnotationProc_9));
#line 1065 "rbmm.condition_renaming.m"
  }
#line 1065 "rbmm.condition_renaming.m"
}

#line 1060 "rbmm.condition_renaming.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_1(
#line 1060 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg)
#line 1060 "rbmm.condition_renaming.m"
{
#line 1060 "rbmm.condition_renaming.m"
  {
#line 1060 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 1060 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;

#line 1060 "rbmm.condition_renaming.m"
    {
#line 1060 "rbmm.condition_renaming.m"
      return transform_hlds__rbmm__condition_renaming__succeeded = transform_hlds__rbmm__condition_renaming__IntroducedFrom__pred__collect_ite_annotation_region_names__1060__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))));
    }
#line 1060 "rbmm.condition_renaming.m"
    return transform_hlds__rbmm__condition_renaming__succeeded;
#line 1060 "rbmm.condition_renaming.m"
  }
#line 1060 "rbmm.condition_renaming.m"
}

#line 1050 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0(
#line 1050 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ExecPaths_9,
#line 1050 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_10,
#line 1050 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPathToCond_11,
#line 1050 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_12,
#line 1050 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_20,
#line 1050 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_21,
#line 1050 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_22,
#line 1050 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_23)
#line 1050 "rbmm.condition_renaming.m"
{
#line 1059 "rbmm.condition_renaming.m"
  {
#line 1059 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 1059 "rbmm.condition_renaming.m"
    if ((transform_hlds__rbmm__condition_renaming__RevPathToCond_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1069 "rbmm.condition_renaming.m"
      {
#line 1070 "rbmm.condition_renaming.m"
        {
#line 1070 "rbmm.condition_renaming.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_annotation_region_names\'/8", (MR_String) "empty path to condition");
#line 1070 "rbmm.condition_renaming.m"
          return;
        }
#line 1069 "rbmm.condition_renaming.m"
      }
#line 1059 "rbmm.condition_renaming.m"
    else
#line 1059 "rbmm.condition_renaming.m"
      {
#line 1059 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RevInitialPath_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPathToCond_11, (MR_Integer) 0)));
#line 1059 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__LastStep_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPathToCond_11, (MR_Integer) 1)));
#line 1059 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RevPathToThen_17;
#line 1059 "rbmm.condition_renaming.m"
        MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_19;
#line 1059 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_27_27;
#line 1059 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_34_34;
#line 1059 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RevInitialPath_51;
#line 1059 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__LastStep_52;
#line 1064 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_21;
#line 1064 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteAnnotationProc_23;

#line 1060 "rbmm.condition_renaming.m"
        {
#line 1060 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1060 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_9[0]));
#line 1060 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_1));
#line 1060 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1060 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LastStep_16));
#line 1060 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1060 "rbmm.condition_renaming.m"
        }
#line 1060 "rbmm.condition_renaming.m"
        {
#line 1060 "rbmm.condition_renaming.m"
          mercury__require__expect_4_p_0(transform_hlds__rbmm__condition_renaming__V_27_27, (MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_annotation_region_names\'/8", (MR_String) "not step_ite_cond");
        }
#line 1062 "rbmm.condition_renaming.m"
        {
#line 1062 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__RevPathToThen_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPathToThen_17, 0) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__RevInitialPath_15));
#line 1062 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPathToThen_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1062 "rbmm.condition_renaming.m"
        }
#line 1007 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__RevInitialPath_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPathToCond_11, (MR_Integer) 0)));
#line 1007 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__LastStep_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPathToCond_11, (MR_Integer) 1)));
#line 1008 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = (transform_hlds__rbmm__condition_renaming__LastStep_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1009 "rbmm.condition_renaming.m"
          {
#line 1009 "rbmm.condition_renaming.m"
            MR_Integer transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_13_54;
#line 1010 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__V_53_53;

#line 1010 "rbmm.condition_renaming.m"
            {
#line 1010 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(transform_hlds__rbmm__condition_renaming__RevInitialPath_51, &transform_hlds__rbmm__condition_renaming__V_53_53, (MR_Integer) 0, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_13_54);
            }
#line 1011 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__HowMany_19 = (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_13_54 + (MR_Integer) 1);
#line 1009 "rbmm.condition_renaming.m"
          }
#line 1012 "rbmm.condition_renaming.m"
        else
#line 1013 "rbmm.condition_renaming.m"
          {
#line 1013 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__V_58_58;

#line 1013 "rbmm.condition_renaming.m"
            {
#line 1013 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(transform_hlds__rbmm__condition_renaming__RevInitialPath_51, &transform_hlds__rbmm__condition_renaming__V_58_58, (MR_Integer) 0, &transform_hlds__rbmm__condition_renaming__HowMany_19);
            }
#line 1013 "rbmm.condition_renaming.m"
          }
#line 1065 "rbmm.condition_renaming.m"
        {
#line 1065 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1065 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_34_34, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_10[0]));
#line 1065 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_34_34, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_2));
#line 1065 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1065 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_34_34, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_10));
#line 1065 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_34_34, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__RevPathToThen_17));
#line 1065 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_34_34, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__RenamedRegions_12));
#line 1065 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_34_34, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__HowMany_19));
#line 1065 "rbmm.condition_renaming.m"
        }
#line 1064 "rbmm.condition_renaming.m"
        {
#line 1064 "rbmm.condition_renaming.m"
          mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[4], (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[5], transform_hlds__rbmm__condition_renaming__V_34_34, transform_hlds__rbmm__condition_renaming__ExecPaths_9, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_20)), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_21, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_22)), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteAnnotationProc_23);
        }
#line 1064 "rbmm.condition_renaming.m"
        *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_21 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_21);
#line 1064 "rbmm.condition_renaming.m"
        *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_23 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteAnnotationProc_23);
#line 1059 "rbmm.condition_renaming.m"
      }
#line 1059 "rbmm.condition_renaming.m"
  }
#line 1050 "rbmm.condition_renaming.m"
}

#line 1044 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0_1(
#line 1044 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 1044 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1044 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1044 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 1044 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 1044 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_5,
#line 1044 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_6)
#line 1044 "rbmm.condition_renaming.m"
{
#line 1044 "rbmm.condition_renaming.m"
  {
#line 1044 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 1044 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_21;
#line 1044 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteAnnotationProc_23;

#line 1044 "rbmm.condition_renaming.m"
    {
#line 1044 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_3), &transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_21, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_5), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteAnnotationProc_23);
    }
#line 1044 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_21));
#line 1044 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteAnnotationProc_23));
#line 1044 "rbmm.condition_renaming.m"
  }
#line 1044 "rbmm.condition_renaming.m"
}

#line 1032 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0(
#line 1032 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ExecPathTable_9,
#line 1032 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_10,
#line 1032 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PPId_11,
#line 1032 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_12,
#line 1032 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_22,
#line 1032 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_23,
#line 1032 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationTable_0_24,
#line 1032 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationTable_25)
#line 1032 "rbmm.condition_renaming.m"
{
#line 1039 "rbmm.condition_renaming.m"
  {
#line 1039 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 1039 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 1039 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_33_33;
#line 1039 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_44_44;
#line 1039 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__ExecPaths_15;
#line 1039 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__RptaInfo_16;
#line 1039 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__IteRenamingProc0_17;
#line 1039 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Graph_18;
#line 1039 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__IteRenamingProc_20;
#line 1039 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__IteAnnotationProc_21;
#line 1039 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_26_26;
#line 1039 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_27_27;
#line 1040 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv0_ExecPaths_15;
#line 1041 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv1_RptaInfo_16;
#line 1042 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv2_IteRenamingProc0_17;
#line 1043 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_19_19;
#line 1044 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv6_IteRenamingProc_20;
#line 1044 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv5_IteAnnotationProc_21;

#line 1040 "rbmm.condition_renaming.m"
    {
#line 1040 "rbmm.condition_renaming.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[5], transform_hlds__rbmm__condition_renaming__ExecPathTable_9, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_11)), &transform_hlds__rbmm__condition_renaming__conv0_ExecPaths_15);
    }
#line 1040 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__ExecPaths_15 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_ExecPaths_15);
#line 1041 "rbmm.condition_renaming.m"
    {
#line 1041 "rbmm.condition_renaming.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__condition_renaming__RptaInfoTable_10, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_11)), &transform_hlds__rbmm__condition_renaming__conv1_RptaInfo_16);
    }
#line 1041 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__RptaInfo_16 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_RptaInfo_16);
#line 3307 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeInfo_33_33 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3];
#line 1042 "rbmm.condition_renaming.m"
    {
#line 1042 "rbmm.condition_renaming.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30, transform_hlds__rbmm__condition_renaming__TypeInfo_33_33, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_22, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_11)), &transform_hlds__rbmm__condition_renaming__conv2_IteRenamingProc0_17);
    }
#line 1042 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__IteRenamingProc0_17 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_IteRenamingProc0_17);
#line 1043 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__Graph_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__RptaInfo_16, (MR_Integer) 0)));
#line 1043 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__RptaInfo_16, (MR_Integer) 1)));
#line 1044 "rbmm.condition_renaming.m"
    {
#line 1044 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1044 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_26_26, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[3]));
#line 1044 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_26_26, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0_1));
#line 1044 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1044 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_26_26, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ExecPaths_15));
#line 1044 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_26_26, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_18));
#line 1044 "rbmm.condition_renaming.m"
    }
#line 1046 "rbmm.condition_renaming.m"
    {
#line 1046 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_27_27 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[2]);
    }
#line 3341 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeInfo_44_44 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[5];
#line 1044 "rbmm.condition_renaming.m"
    {
#line 1044 "rbmm.condition_renaming.m"
      mercury__map__foldl2_6_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0], transform_hlds__rbmm__condition_renaming__TypeInfo_33_33, transform_hlds__rbmm__condition_renaming__TypeInfo_44_44, transform_hlds__rbmm__condition_renaming__V_26_26, transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_12, ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamingProc0_17)), &transform_hlds__rbmm__condition_renaming__conv6_IteRenamingProc_20, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_27_27)), &transform_hlds__rbmm__condition_renaming__conv5_IteAnnotationProc_21);
    }
#line 1044 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__IteRenamingProc_20 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv6_IteRenamingProc_20);
#line 1044 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__IteAnnotationProc_21 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv5_IteAnnotationProc_21);
#line 1047 "rbmm.condition_renaming.m"
    {
#line 1047 "rbmm.condition_renaming.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30, transform_hlds__rbmm__condition_renaming__TypeInfo_44_44, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_11)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteAnnotationProc_21)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationTable_0_24, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationTable_25);
    }
#line 1048 "rbmm.condition_renaming.m"
    {
#line 1048 "rbmm.condition_renaming.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30, transform_hlds__rbmm__condition_renaming__TypeInfo_33_33, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_11)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamingProc_20)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_22, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_23);
#line 1048 "rbmm.condition_renaming.m"
      return;
    }
#line 1039 "rbmm.condition_renaming.m"
  }
#line 1032 "rbmm.condition_renaming.m"
}

#line 1002 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(
#line 1002 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPath_5,
#line 1002 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__RevPathToCond_6,
#line 1002 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_0_11,
#line 1002 "rbmm.condition_renaming.m"
  MR_Integer * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_12)
#line 1002 "rbmm.condition_renaming.m"
{
#line 1007 "rbmm.condition_renaming.m"
  while (MR_TRUE)
#line 1007 "rbmm.condition_renaming.m"
    {
#line 1007 "rbmm.condition_renaming.m"
      /* tailcall optimized into a loop */
#line 1007 "rbmm.condition_renaming.m"
      {
#line 1007 "rbmm.condition_renaming.m"
        MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 1007 "rbmm.condition_renaming.m"
        if ((transform_hlds__rbmm__condition_renaming__RevPath_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1017 "rbmm.condition_renaming.m"
          {
#line 1018 "rbmm.condition_renaming.m"
            *transform_hlds__rbmm__condition_renaming__RevPathToCond_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1017 "rbmm.condition_renaming.m"
            *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_12 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_0_11;
#line 1017 "rbmm.condition_renaming.m"
          }
#line 1007 "rbmm.condition_renaming.m"
        else
#line 1007 "rbmm.condition_renaming.m"
          {
#line 1007 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__RevInitialPath_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPath_5, (MR_Integer) 0)));
#line 1007 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__LastStep_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPath_5, (MR_Integer) 1)));

#line 1008 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = (transform_hlds__rbmm__condition_renaming__LastStep_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "rbmm.condition_renaming.m"
            if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1009 "rbmm.condition_renaming.m"
              {
#line 1009 "rbmm.condition_renaming.m"
                MR_Integer transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_13_13;
#line 1010 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__V_10_10;

#line 1009 "rbmm.condition_renaming.m"
                *transform_hlds__rbmm__condition_renaming__RevPathToCond_6 = transform_hlds__rbmm__condition_renaming__RevPath_5;
#line 1010 "rbmm.condition_renaming.m"
                {
#line 1010 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(transform_hlds__rbmm__condition_renaming__RevInitialPath_8, &transform_hlds__rbmm__condition_renaming__V_10_10, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_0_11, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_13_13);
                }
#line 1011 "rbmm.condition_renaming.m"
                *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_12 = (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_13_13 + (MR_Integer) 1);
#line 1009 "rbmm.condition_renaming.m"
              }
#line 1012 "rbmm.condition_renaming.m"
            else
#line 1013 "rbmm.condition_renaming.m"
              {
#line 1013 "rbmm.condition_renaming.m"
                /* direct tailcall eliminated */
#line 1013 "rbmm.condition_renaming.m"
                {
#line 1013 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__RevPath__tmp_copy_5 = transform_hlds__rbmm__condition_renaming__RevInitialPath_8;

#line 1013 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__RevPath_5 = transform_hlds__rbmm__condition_renaming__RevPath__tmp_copy_5;
#line 1013 "rbmm.condition_renaming.m"
                }
#line 1013 "rbmm.condition_renaming.m"
                continue;
#line 1013 "rbmm.condition_renaming.m"
              }
#line 1007 "rbmm.condition_renaming.m"
          }
#line 1007 "rbmm.condition_renaming.m"
      }
#line 1007 "rbmm.condition_renaming.m"
      break;
#line 1007 "rbmm.condition_renaming.m"
    }
#line 1002 "rbmm.condition_renaming.m"
}

#line 980 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_case_5_p_0(
#line 980 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 980 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 980 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_8,
#line 980 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_13,
#line 980 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_14)
#line 980 "rbmm.condition_renaming.m"
{
#line 985 "rbmm.condition_renaming.m"
  {
#line 985 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 985 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_8, (MR_Integer) 2)));
#line 986 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_8, (MR_Integer) 0)));
#line 986 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_8, (MR_Integer) 1)));

#line 987 "rbmm.condition_renaming.m"
    {
#line 987 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Goal_12, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_13, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_14);
#line 987 "rbmm.condition_renaming.m"
      return;
    }
#line 985 "rbmm.condition_renaming.m"
  }
#line 980 "rbmm.condition_renaming.m"
}

#line 947 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_3(
#line 947 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 947 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 947 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 947 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 947 "rbmm.condition_renaming.m"
{
#line 947 "rbmm.condition_renaming.m"
  {
#line 947 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 947 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_14;

#line 947 "rbmm.condition_renaming.m"
    {
#line 947 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_case_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_14);
    }
#line 947 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_14));
#line 947 "rbmm.condition_renaming.m"
  }
#line 947 "rbmm.condition_renaming.m"
}

#line 942 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_2(
#line 942 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 942 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 942 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 942 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 942 "rbmm.condition_renaming.m"
{
#line 942 "rbmm.condition_renaming.m"
  {
#line 942 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 942 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_20;

#line 942 "rbmm.condition_renaming.m"
    {
#line 942 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_20);
    }
#line 942 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_20));
#line 942 "rbmm.condition_renaming.m"
  }
#line 942 "rbmm.condition_renaming.m"
}

#line 937 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_1(
#line 937 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 937 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 937 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 937 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 937 "rbmm.condition_renaming.m"
{
#line 937 "rbmm.condition_renaming.m"
  {
#line 937 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 937 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingProc_20;

#line 937 "rbmm.condition_renaming.m"
    {
#line 937 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingProc_20);
    }
#line 937 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingProc_20));
#line 937 "rbmm.condition_renaming.m"
  }
#line 937 "rbmm.condition_renaming.m"
}

#line 927 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0(
#line 927 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 927 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 927 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__GoalInCond_8,
#line 927 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_51,
#line 927 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_52)
#line 927 "rbmm.condition_renaming.m"
{
#line 932 "rbmm.condition_renaming.m"
  {
#line 932 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 932 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Expr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__GoalInCond_8, (MR_Integer) 0)));
#line 933 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__GoalInCond_8, (MR_Integer) 1)));

#line 939 "rbmm.condition_renaming.m"
#line 939 "rbmm.condition_renaming.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_10)) {
#line 939 "rbmm.condition_renaming.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 939 "rbmm.condition_renaming.m"
      case (MR_Integer) 0:
#line 951 "rbmm.condition_renaming.m"
        {
#line 951 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__Goal_20 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_10), (MR_Integer) 0);

#line 952 "rbmm.condition_renaming.m"
          {
#line 952 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Goal_20, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_51, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_52);
#line 952 "rbmm.condition_renaming.m"
            return;
          }
#line 951 "rbmm.condition_renaming.m"
        }
#line 939 "rbmm.condition_renaming.m"
        break;
#line 939 "rbmm.condition_renaming.m"
      case (MR_Integer) 1:
#line 976 "rbmm.condition_renaming.m"
        {
#line 977 "rbmm.condition_renaming.m"
          {
#line 977 "rbmm.condition_renaming.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
#line 977 "rbmm.condition_renaming.m"
            return;
          }
#line 976 "rbmm.condition_renaming.m"
        }
#line 939 "rbmm.condition_renaming.m"
        break;
#line 939 "rbmm.condition_renaming.m"
      case (MR_Integer) 2:
#line 976 "rbmm.condition_renaming.m"
        {
#line 977 "rbmm.condition_renaming.m"
          {
#line 977 "rbmm.condition_renaming.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
#line 977 "rbmm.condition_renaming.m"
            return;
          }
#line 976 "rbmm.condition_renaming.m"
        }
#line 939 "rbmm.condition_renaming.m"
        break;
#line 939 "rbmm.condition_renaming.m"
      case (MR_Integer) 3:
#line 939 "rbmm.condition_renaming.m"
#line 939 "rbmm.condition_renaming.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 0)))) {
#line 939 "rbmm.condition_renaming.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 939 "rbmm.condition_renaming.m"
          case (MR_Integer) 0:
#line 976 "rbmm.condition_renaming.m"
            {
#line 977 "rbmm.condition_renaming.m"
              {
#line 977 "rbmm.condition_renaming.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
#line 977 "rbmm.condition_renaming.m"
                return;
              }
#line 976 "rbmm.condition_renaming.m"
            }
#line 939 "rbmm.condition_renaming.m"
            break;
#line 939 "rbmm.condition_renaming.m"
          case (MR_Integer) 1:
#line 976 "rbmm.condition_renaming.m"
            {
#line 977 "rbmm.condition_renaming.m"
              {
#line 977 "rbmm.condition_renaming.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
#line 977 "rbmm.condition_renaming.m"
                return;
              }
#line 976 "rbmm.condition_renaming.m"
            }
#line 939 "rbmm.condition_renaming.m"
            break;
#line 939 "rbmm.condition_renaming.m"
          case (MR_Integer) 2:
#line 939 "rbmm.condition_renaming.m"
            {
#line 939 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 2)));
#line 935 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 1)));

#line 939 "rbmm.condition_renaming.m"
              if ((transform_hlds__rbmm__condition_renaming__V_113_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 976 "rbmm.condition_renaming.m"
                {
#line 977 "rbmm.condition_renaming.m"
                  {
#line 977 "rbmm.condition_renaming.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
#line 977 "rbmm.condition_renaming.m"
                    return;
                  }
#line 976 "rbmm.condition_renaming.m"
                }
#line 939 "rbmm.condition_renaming.m"
              else
#line 935 "rbmm.condition_renaming.m"
                {
#line 935 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_70_70;
#line 936 "rbmm.condition_renaming.m"
                  MR_Box transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_52;

#line 937 "rbmm.condition_renaming.m"
                  {
#line 937 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 937 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_70_70, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[4]));
#line 937 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_70_70, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_1));
#line 937 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 937 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_70_70, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6));
#line 937 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_70_70, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_7));
#line 937 "rbmm.condition_renaming.m"
                  }
#line 936 "rbmm.condition_renaming.m"
                  {
#line 936 "rbmm.condition_renaming.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], transform_hlds__rbmm__condition_renaming__V_70_70, transform_hlds__rbmm__condition_renaming__V_113_113, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_51)), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_52);
                  }
#line 936 "rbmm.condition_renaming.m"
                  *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_52 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_52);
#line 935 "rbmm.condition_renaming.m"
                }
#line 939 "rbmm.condition_renaming.m"
            }
#line 939 "rbmm.condition_renaming.m"
            break;
#line 939 "rbmm.condition_renaming.m"
          case (MR_Integer) 3:
#line 939 "rbmm.condition_renaming.m"
            {
#line 939 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 1)));

#line 939 "rbmm.condition_renaming.m"
              if ((transform_hlds__rbmm__condition_renaming__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 976 "rbmm.condition_renaming.m"
                {
#line 977 "rbmm.condition_renaming.m"
                  {
#line 977 "rbmm.condition_renaming.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
#line 977 "rbmm.condition_renaming.m"
                    return;
                  }
#line 976 "rbmm.condition_renaming.m"
                }
#line 939 "rbmm.condition_renaming.m"
              else
#line 940 "rbmm.condition_renaming.m"
                {
#line 940 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_66_66;
#line 941 "rbmm.condition_renaming.m"
                  MR_Box transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_52;

#line 942 "rbmm.condition_renaming.m"
                  {
#line 942 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 942 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_66_66, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[4]));
#line 942 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_66_66, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_2));
#line 942 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 942 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_66_66, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6));
#line 942 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_66_66, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_7));
#line 942 "rbmm.condition_renaming.m"
                  }
#line 941 "rbmm.condition_renaming.m"
                  {
#line 941 "rbmm.condition_renaming.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], transform_hlds__rbmm__condition_renaming__V_66_66, transform_hlds__rbmm__condition_renaming__V_115_115, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_51)), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_52);
                  }
#line 941 "rbmm.condition_renaming.m"
                  *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_52 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_52);
#line 940 "rbmm.condition_renaming.m"
                }
#line 939 "rbmm.condition_renaming.m"
            }
#line 939 "rbmm.condition_renaming.m"
            break;
#line 939 "rbmm.condition_renaming.m"
          case (MR_Integer) 4:
#line 945 "rbmm.condition_renaming.m"
            {
#line 945 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 3)));
#line 945 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_63_63;
#line 945 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 1)));
#line 945 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 2)));
#line 946 "rbmm.condition_renaming.m"
              MR_Box transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_IteRenamingProc_52;

#line 947 "rbmm.condition_renaming.m"
              {
#line 947 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 947 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_63_63, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[5]));
#line 947 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_63_63, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_3));
#line 947 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 947 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_63_63, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6));
#line 947 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_63_63, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_7));
#line 947 "rbmm.condition_renaming.m"
              }
#line 946 "rbmm.condition_renaming.m"
              {
#line 946 "rbmm.condition_renaming.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], transform_hlds__rbmm__condition_renaming__V_63_63, transform_hlds__rbmm__condition_renaming__Cases_19, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_51)), &transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_IteRenamingProc_52);
              }
#line 946 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_52 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_IteRenamingProc_52);
#line 945 "rbmm.condition_renaming.m"
            }
#line 939 "rbmm.condition_renaming.m"
            break;
#line 939 "rbmm.condition_renaming.m"
          case (MR_Integer) 5:
#line 955 "rbmm.condition_renaming.m"
            {
#line 955 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Goal_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 2)));
#line 955 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 1)));

#line 958 "rbmm.condition_renaming.m"
              {
#line 958 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Goal_73, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_51, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_52);
#line 958 "rbmm.condition_renaming.m"
                return;
              }
#line 955 "rbmm.condition_renaming.m"
            }
#line 939 "rbmm.condition_renaming.m"
            break;
#line 939 "rbmm.condition_renaming.m"
          case (MR_Integer) 6:
#line 961 "rbmm.condition_renaming.m"
            {
#line 961 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Cond_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 2)));
#line 961 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Then_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 3)));
#line 961 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Else_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 4)));
#line 961 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_58_58;
#line 961 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_59_59;
#line 961 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 1)));

#line 962 "rbmm.condition_renaming.m"
              {
#line 962 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Cond_23, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_51, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_58_58);
              }
#line 964 "rbmm.condition_renaming.m"
              {
#line 964 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Then_24, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_58_58, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_59_59);
              }
#line 966 "rbmm.condition_renaming.m"
              {
#line 966 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Else_25, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_59_59, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_52);
#line 966 "rbmm.condition_renaming.m"
                return;
              }
#line 961 "rbmm.condition_renaming.m"
            }
#line 939 "rbmm.condition_renaming.m"
            break;
#line 939 "rbmm.condition_renaming.m"
          case (MR_Integer) 7:
#line 976 "rbmm.condition_renaming.m"
            {
#line 977 "rbmm.condition_renaming.m"
              {
#line 977 "rbmm.condition_renaming.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
#line 977 "rbmm.condition_renaming.m"
                return;
              }
#line 976 "rbmm.condition_renaming.m"
            }
#line 939 "rbmm.condition_renaming.m"
            break;
#line 939 "rbmm.condition_renaming.m"
        }
#line 939 "rbmm.condition_renaming.m"
        break;
#line 939 "rbmm.condition_renaming.m"
    }
#line 932 "rbmm.condition_renaming.m"
  }
#line 927 "rbmm.condition_renaming.m"
}

#line 915 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_p_0(
#line 915 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_7,
#line 915 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_8,
#line 915 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming___Graph_9,
#line 915 "rbmm.condition_renaming.m"
  MR_String transform_hlds__rbmm__condition_renaming__RegName_10,
#line 915 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_15,
#line 915 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_16)
#line 915 "rbmm.condition_renaming.m"
{
#line 918 "rbmm.condition_renaming.m"
  {
#line 918 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 918 "rbmm.condition_renaming.m"
    {
#line 918 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_116_101_95_114_101_110_97_109_105_110_103_95_95_91_51_93_95_48_6_p_0(transform_hlds__rbmm__condition_renaming__ProgPoint_7, transform_hlds__rbmm__condition_renaming__HowMany_8, transform_hlds__rbmm__condition_renaming__RegName_10, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_15, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_16);
#line 918 "rbmm.condition_renaming.m"
      return;
    }
#line 918 "rbmm.condition_renaming.m"
  }
#line 915 "rbmm.condition_renaming.m"
}

#line 900 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0_1(
#line 900 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 900 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 900 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 900 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 900 "rbmm.condition_renaming.m"
{
#line 900 "rbmm.condition_renaming.m"
  {
#line 900 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 900 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_16;

#line 900 "rbmm.condition_renaming.m"
    {
#line 900 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_String) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_16);
    }
#line 900 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_16));
#line 900 "rbmm.condition_renaming.m"
  }
#line 900 "rbmm.condition_renaming.m"
}

#line 878 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(
#line 878 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 878 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 878 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Cond_8,
#line 878 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_19,
#line 878 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_20)
#line 878 "rbmm.condition_renaming.m"
{
#line 883 "rbmm.condition_renaming.m"
  {
#line 883 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 883 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__CondExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Cond_8, (MR_Integer) 0)));
#line 883 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__CondInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Cond_8, (MR_Integer) 1)));
#line 883 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__HasSubGoals_12;

#line 885 "rbmm.condition_renaming.m"
    {
#line 885 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__HasSubGoals_12 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__rbmm__condition_renaming__CondExpr_10);
    }
#line 907 "rbmm.condition_renaming.m"
#line 907 "rbmm.condition_renaming.m"
    switch (transform_hlds__rbmm__condition_renaming__HasSubGoals_12) {
#line 907 "rbmm.condition_renaming.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 907 "rbmm.condition_renaming.m"
      case (MR_Integer) 1:
#line 887 "rbmm.condition_renaming.m"
        {
#line 887 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_13;
#line 887 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__RevGoalPath_15;
#line 887 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__RevPathToClosestCond_16;
#line 887 "rbmm.condition_renaming.m"
          MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_17;
#line 893 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__V_14_14;
#line 902 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_18;
#line 897 "rbmm.condition_renaming.m"
          MR_Box transform_hlds__rbmm__condition_renaming__conv0_RenamedRegions_18;

#line 888 "rbmm.condition_renaming.m"
          {
#line 888 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ProgPoint_13 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__condition_renaming__CondInfo_11);
          }
#line 893 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__ProgPoint_13, (MR_Integer) 0)));
#line 893 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__RevGoalPath_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__ProgPoint_13, (MR_Integer) 1)));
#line 894 "rbmm.condition_renaming.m"
          {
#line 894 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(transform_hlds__rbmm__condition_renaming__RevGoalPath_15, &transform_hlds__rbmm__condition_renaming__RevPathToClosestCond_16, (MR_Integer) 0, &transform_hlds__rbmm__condition_renaming__HowMany_17);
          }
#line 897 "rbmm.condition_renaming.m"
          {
#line 897 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0], transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RevPathToClosestCond_16)), &transform_hlds__rbmm__condition_renaming__conv0_RenamedRegions_18);
          }
#line 897 "rbmm.condition_renaming.m"
          if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 897 "rbmm.condition_renaming.m"
            {
#line 897 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__RenamedRegions_18 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_RenamedRegions_18);
#line 897 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 897 "rbmm.condition_renaming.m"
            }
#line 902 "rbmm.condition_renaming.m"
          if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 900 "rbmm.condition_renaming.m"
            {
#line 900 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_23_23;
#line 900 "rbmm.condition_renaming.m"
              MR_Box transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_20;

#line 900 "rbmm.condition_renaming.m"
              {
#line 900 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 900 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_23_23, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_5[1]));
#line 900 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_23_23, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0_1));
#line 900 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 900 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_23_23, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_13));
#line 900 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_23_23, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__HowMany_17));
#line 900 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_23_23, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_7));
#line 900 "rbmm.condition_renaming.m"
              }
#line 900 "rbmm.condition_renaming.m"
              {
#line 900 "rbmm.condition_renaming.m"
                mercury__set__fold_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], transform_hlds__rbmm__condition_renaming__V_23_23, transform_hlds__rbmm__condition_renaming__RenamedRegions_18, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_19)), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_20);
              }
#line 900 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_20 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_20);
#line 900 "rbmm.condition_renaming.m"
            }
#line 902 "rbmm.condition_renaming.m"
          else
#line 902 "rbmm.condition_renaming.m"
            *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_20 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_19;
#line 887 "rbmm.condition_renaming.m"
        }
#line 907 "rbmm.condition_renaming.m"
        break;
#line 907 "rbmm.condition_renaming.m"
      case (MR_Integer) 0:
#line 909 "rbmm.condition_renaming.m"
        {
#line 909 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Cond_8, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_19, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_20);
#line 909 "rbmm.condition_renaming.m"
          return;
        }
#line 907 "rbmm.condition_renaming.m"
        break;
#line 907 "rbmm.condition_renaming.m"
    }
#line 883 "rbmm.condition_renaming.m"
  }
#line 878 "rbmm.condition_renaming.m"
}

#line 867 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_case_5_p_0(
#line 867 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 867 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 867 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_8,
#line 867 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_13,
#line 867 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_14)
#line 867 "rbmm.condition_renaming.m"
{
#line 871 "rbmm.condition_renaming.m"
  {
#line 871 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 871 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_8, (MR_Integer) 2)));
#line 872 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_8, (MR_Integer) 0)));
#line 872 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_8, (MR_Integer) 1)));

#line 873 "rbmm.condition_renaming.m"
    {
#line 873 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Goal_12, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_13, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_14);
#line 873 "rbmm.condition_renaming.m"
      return;
    }
#line 871 "rbmm.condition_renaming.m"
  }
#line 867 "rbmm.condition_renaming.m"
}

#line 840 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_3(
#line 840 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 840 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 840 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 840 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 840 "rbmm.condition_renaming.m"
{
#line 840 "rbmm.condition_renaming.m"
  {
#line 840 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 840 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_14;

#line 840 "rbmm.condition_renaming.m"
    {
#line 840 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_case_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_14);
    }
#line 840 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_14));
#line 840 "rbmm.condition_renaming.m"
  }
#line 840 "rbmm.condition_renaming.m"
}

#line 836 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_2(
#line 836 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 836 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 836 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 836 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 836 "rbmm.condition_renaming.m"
{
#line 836 "rbmm.condition_renaming.m"
  {
#line 836 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 836 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_49;

#line 836 "rbmm.condition_renaming.m"
    {
#line 836 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_49);
    }
#line 836 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_49));
#line 836 "rbmm.condition_renaming.m"
  }
#line 836 "rbmm.condition_renaming.m"
}

#line 832 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_1(
#line 832 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 832 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 832 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 832 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 832 "rbmm.condition_renaming.m"
{
#line 832 "rbmm.condition_renaming.m"
  {
#line 832 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 832 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingProc_49;

#line 832 "rbmm.condition_renaming.m"
    {
#line 832 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingProc_49);
    }
#line 832 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingProc_49));
#line 832 "rbmm.condition_renaming.m"
  }
#line 832 "rbmm.condition_renaming.m"
}

#line 818 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(
#line 818 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 818 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 818 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Goal_8,
#line 818 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48,
#line 818 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49)
#line 818 "rbmm.condition_renaming.m"
{
#line 822 "rbmm.condition_renaming.m"
  while (MR_TRUE)
#line 822 "rbmm.condition_renaming.m"
    {
#line 822 "rbmm.condition_renaming.m"
      /* tailcall optimized into a loop */
#line 822 "rbmm.condition_renaming.m"
      {
#line 822 "rbmm.condition_renaming.m"
        MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 822 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Goal_8, (MR_Integer) 0)));
#line 823 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Goal_8, (MR_Integer) 1)));

#line 830 "rbmm.condition_renaming.m"
#line 830 "rbmm.condition_renaming.m"
        switch (MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__GoalExpr_10)) {
#line 830 "rbmm.condition_renaming.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 830 "rbmm.condition_renaming.m"
          case (MR_Integer) 0:
#line 843 "rbmm.condition_renaming.m"
            {
#line 843 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__SubGoal_41 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__condition_renaming__GoalExpr_10), (MR_Integer) 0);

#line 844 "rbmm.condition_renaming.m"
              /* direct tailcall eliminated */
#line 844 "rbmm.condition_renaming.m"
              {
#line 844 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__Goal__tmp_copy_8 = transform_hlds__rbmm__condition_renaming__SubGoal_41;

#line 844 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__Goal_8 = transform_hlds__rbmm__condition_renaming__Goal__tmp_copy_8;
#line 844 "rbmm.condition_renaming.m"
              }
#line 844 "rbmm.condition_renaming.m"
              continue;
#line 843 "rbmm.condition_renaming.m"
            }
#line 830 "rbmm.condition_renaming.m"
            break;
#line 830 "rbmm.condition_renaming.m"
          case (MR_Integer) 1:
#line 825 "rbmm.condition_renaming.m"
            *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48;
#line 830 "rbmm.condition_renaming.m"
            break;
#line 830 "rbmm.condition_renaming.m"
          case (MR_Integer) 2:
#line 826 "rbmm.condition_renaming.m"
            *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48;
#line 830 "rbmm.condition_renaming.m"
            break;
#line 830 "rbmm.condition_renaming.m"
          case (MR_Integer) 3:
#line 830 "rbmm.condition_renaming.m"
#line 830 "rbmm.condition_renaming.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 0)))) {
#line 830 "rbmm.condition_renaming.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 830 "rbmm.condition_renaming.m"
              case (MR_Integer) 0:
#line 827 "rbmm.condition_renaming.m"
                *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48;
#line 830 "rbmm.condition_renaming.m"
                break;
#line 830 "rbmm.condition_renaming.m"
              case (MR_Integer) 1:
#line 828 "rbmm.condition_renaming.m"
                *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48;
#line 830 "rbmm.condition_renaming.m"
                break;
#line 830 "rbmm.condition_renaming.m"
              case (MR_Integer) 2:
#line 831 "rbmm.condition_renaming.m"
                {
#line 831 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__Conjs_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 2)));
#line 831 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_62_62;
#line 831 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 1)));
#line 832 "rbmm.condition_renaming.m"
                  MR_Box transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_49;

#line 832 "rbmm.condition_renaming.m"
                  {
#line 832 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 832 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_62_62, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[4]));
#line 832 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_62_62, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_1));
#line 832 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 832 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_62_62, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6));
#line 832 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_62_62, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_7));
#line 832 "rbmm.condition_renaming.m"
                  }
#line 832 "rbmm.condition_renaming.m"
                  {
#line 832 "rbmm.condition_renaming.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], transform_hlds__rbmm__condition_renaming__V_62_62, transform_hlds__rbmm__condition_renaming__Conjs_36, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48)), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_49);
                  }
#line 832 "rbmm.condition_renaming.m"
                  *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_49);
#line 831 "rbmm.condition_renaming.m"
                }
#line 830 "rbmm.condition_renaming.m"
                break;
#line 830 "rbmm.condition_renaming.m"
              case (MR_Integer) 3:
#line 835 "rbmm.condition_renaming.m"
                {
#line 835 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__Disjs_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 1)));
#line 835 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_60_60;
#line 836 "rbmm.condition_renaming.m"
                  MR_Box transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_49;

#line 836 "rbmm.condition_renaming.m"
                  {
#line 836 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 836 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_60_60, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[4]));
#line 836 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_60_60, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_2));
#line 836 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 836 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_60_60, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6));
#line 836 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_60_60, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_7));
#line 836 "rbmm.condition_renaming.m"
                  }
#line 836 "rbmm.condition_renaming.m"
                  {
#line 836 "rbmm.condition_renaming.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], transform_hlds__rbmm__condition_renaming__V_60_60, transform_hlds__rbmm__condition_renaming__Disjs_37, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48)), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_49);
                  }
#line 836 "rbmm.condition_renaming.m"
                  *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_49);
#line 835 "rbmm.condition_renaming.m"
                }
#line 830 "rbmm.condition_renaming.m"
                break;
#line 830 "rbmm.condition_renaming.m"
              case (MR_Integer) 4:
#line 839 "rbmm.condition_renaming.m"
                {
#line 839 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__Cases_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 3)));
#line 839 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_58_58;
#line 839 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 1)));
#line 839 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 2)));
#line 840 "rbmm.condition_renaming.m"
                  MR_Box transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_IteRenamingProc_49;

#line 840 "rbmm.condition_renaming.m"
                  {
#line 840 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 840 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_58_58, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[5]));
#line 840 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_58_58, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_3));
#line 840 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 840 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_58_58, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6));
#line 840 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_58_58, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_7));
#line 840 "rbmm.condition_renaming.m"
                  }
#line 840 "rbmm.condition_renaming.m"
                  {
#line 840 "rbmm.condition_renaming.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], transform_hlds__rbmm__condition_renaming__V_58_58, transform_hlds__rbmm__condition_renaming__Cases_40, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48)), &transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_IteRenamingProc_49);
                  }
#line 840 "rbmm.condition_renaming.m"
                  *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_IteRenamingProc_49);
#line 839 "rbmm.condition_renaming.m"
                }
#line 830 "rbmm.condition_renaming.m"
                break;
#line 830 "rbmm.condition_renaming.m"
              case (MR_Integer) 5:
#line 847 "rbmm.condition_renaming.m"
                {
#line 847 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__SubGoal_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 2)));
#line 847 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 1)));

#line 850 "rbmm.condition_renaming.m"
                  /* direct tailcall eliminated */
#line 850 "rbmm.condition_renaming.m"
                  {
#line 850 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__Goal__tmp_copy_8 = transform_hlds__rbmm__condition_renaming__SubGoal_64;

#line 850 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__Goal_8 = transform_hlds__rbmm__condition_renaming__Goal__tmp_copy_8;
#line 850 "rbmm.condition_renaming.m"
                  }
#line 850 "rbmm.condition_renaming.m"
                  continue;
#line 847 "rbmm.condition_renaming.m"
                }
#line 830 "rbmm.condition_renaming.m"
                break;
#line 830 "rbmm.condition_renaming.m"
              case (MR_Integer) 6:
#line 853 "rbmm.condition_renaming.m"
                {
#line 853 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__Cond_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 2)));
#line 853 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__Then_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 3)));
#line 853 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__Else_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 4)));
#line 853 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_53_53;
#line 853 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_54_54;
#line 853 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 1)));

#line 855 "rbmm.condition_renaming.m"
                  {
#line 855 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Cond_44, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_53_53);
                  }
#line 858 "rbmm.condition_renaming.m"
                  {
#line 858 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Then_45, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_53_53, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_54_54);
                  }
#line 860 "rbmm.condition_renaming.m"
                  /* direct tailcall eliminated */
#line 860 "rbmm.condition_renaming.m"
                  {
#line 860 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__Goal__tmp_copy_8 = transform_hlds__rbmm__condition_renaming__Else_46;
#line 860 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0__tmp_copy_48 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_54_54;

#line 860 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0__tmp_copy_48;
#line 860 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__Goal_8 = transform_hlds__rbmm__condition_renaming__Goal__tmp_copy_8;
#line 860 "rbmm.condition_renaming.m"
                  }
#line 860 "rbmm.condition_renaming.m"
                  continue;
#line 853 "rbmm.condition_renaming.m"
                }
#line 830 "rbmm.condition_renaming.m"
                break;
#line 830 "rbmm.condition_renaming.m"
              case (MR_Integer) 7:
#line 863 "rbmm.condition_renaming.m"
                {
#line 864 "rbmm.condition_renaming.m"
                  {
#line 864 "rbmm.condition_renaming.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_goal\'/5", (MR_String) "shorthand");
#line 864 "rbmm.condition_renaming.m"
                    return;
                  }
#line 863 "rbmm.condition_renaming.m"
                }
#line 830 "rbmm.condition_renaming.m"
                break;
#line 830 "rbmm.condition_renaming.m"
            }
#line 830 "rbmm.condition_renaming.m"
            break;
#line 830 "rbmm.condition_renaming.m"
        }
#line 822 "rbmm.condition_renaming.m"
      }
#line 822 "rbmm.condition_renaming.m"
      break;
#line 822 "rbmm.condition_renaming.m"
    }
#line 818 "rbmm.condition_renaming.m"
}

#line 803 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_p_0(
#line 803 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ModuleInfo_7,
#line 803 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_8,
#line 803 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PPId_9,
#line 803 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_10,
#line 803 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_19,
#line 803 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_20)
#line 803 "rbmm.condition_renaming.m"
{
#line 808 "rbmm.condition_renaming.m"
  {
#line 808 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 808 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23;
#line 808 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__ProcInfo0_12;
#line 808 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__ProcInfo_13;
#line 808 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Goal_14;
#line 808 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__RptaInfo_15;
#line 808 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Graph_16;
#line 808 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__IteRenamingProc_18;
#line 808 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_21_21;
#line 812 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv0_RptaInfo_15;
#line 813 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_17_17;

#line 809 "rbmm.condition_renaming.m"
    {
#line 809 "rbmm.condition_renaming.m"
      hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__condition_renaming__ModuleInfo_7, transform_hlds__rbmm__condition_renaming__PPId_9, &transform_hlds__rbmm__condition_renaming__ProcInfo0_12);
    }
#line 810 "rbmm.condition_renaming.m"
    {
#line 810 "rbmm.condition_renaming.m"
      hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(transform_hlds__rbmm__condition_renaming__ModuleInfo_7, transform_hlds__rbmm__condition_renaming__ProcInfo0_12, &transform_hlds__rbmm__condition_renaming__ProcInfo_13);
    }
#line 811 "rbmm.condition_renaming.m"
    {
#line 811 "rbmm.condition_renaming.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__condition_renaming__ProcInfo_13, &transform_hlds__rbmm__condition_renaming__Goal_14);
    }
#line 4673 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 812 "rbmm.condition_renaming.m"
    {
#line 812 "rbmm.condition_renaming.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__condition_renaming__RptaInfoTable_8, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_9)), &transform_hlds__rbmm__condition_renaming__conv0_RptaInfo_15);
    }
#line 812 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__RptaInfo_15 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_RptaInfo_15);
#line 813 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__Graph_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__RptaInfo_15, (MR_Integer) 0)));
#line 813 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__RptaInfo_15, (MR_Integer) 1)));
#line 815 "rbmm.condition_renaming.m"
    {
#line 815 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_21_21 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2]);
    }
#line 814 "rbmm.condition_renaming.m"
    {
#line 814 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_10, transform_hlds__rbmm__condition_renaming__Graph_16, transform_hlds__rbmm__condition_renaming__Goal_14, transform_hlds__rbmm__condition_renaming__V_21_21, &transform_hlds__rbmm__condition_renaming__IteRenamingProc_18);
    }
#line 816 "rbmm.condition_renaming.m"
    {
#line 816 "rbmm.condition_renaming.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_9)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamingProc_18)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_19, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_20);
#line 816 "rbmm.condition_renaming.m"
      return;
    }
#line 808 "rbmm.condition_renaming.m"
  }
#line 803 "rbmm.condition_renaming.m"
}

#line 776 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_p_0(
#line 776 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_6,
#line 776 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PathToCond_7,
#line 776 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__InCondRegions_8,
#line 776 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_0_12,
#line 776 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_13)
#line 776 "rbmm.condition_renaming.m"
{
#line 789 "rbmm.condition_renaming.m"
  {
#line 789 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 789 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegions_10;
#line 782 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegions_10;

#line 782 "rbmm.condition_renaming.m"
    {
#line 782 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0], transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_6, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PathToCond_7)), &transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegions_10);
    }
#line 782 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 782 "rbmm.condition_renaming.m"
      {
#line 782 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__NonLocalRegions_10 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegions_10);
#line 782 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 782 "rbmm.condition_renaming.m"
      }
#line 789 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 783 "rbmm.condition_renaming.m"
      {
#line 783 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 783 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_11;

#line 783 "rbmm.condition_renaming.m"
        {
#line 783 "rbmm.condition_renaming.m"
          mercury__set__intersect_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_17_17, transform_hlds__rbmm__condition_renaming__NonLocalRegions_10, transform_hlds__rbmm__condition_renaming__InCondRegions_8, &transform_hlds__rbmm__condition_renaming__RenamedRegions_11);
        }
#line 784 "rbmm.condition_renaming.m"
        {
#line 784 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__succeeded = mercury__set__is_empty_1_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_17_17, transform_hlds__rbmm__condition_renaming__RenamedRegions_11);
        }
#line 786 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 786 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_13 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_0_12;
#line 786 "rbmm.condition_renaming.m"
        else
#line 787 "rbmm.condition_renaming.m"
          {
#line 787 "rbmm.condition_renaming.m"
            {
#line 787 "rbmm.condition_renaming.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__condition_renaming__PathToCond_7)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__RenamedRegions_11)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_0_12, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_13);
#line 787 "rbmm.condition_renaming.m"
              return;
            }
#line 787 "rbmm.condition_renaming.m"
          }
#line 783 "rbmm.condition_renaming.m"
      }
#line 789 "rbmm.condition_renaming.m"
    else
#line 789 "rbmm.condition_renaming.m"
      *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_13 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_0_12;
#line 789 "rbmm.condition_renaming.m"
  }
#line 776 "rbmm.condition_renaming.m"
}

#line 765 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0_1(
#line 765 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 765 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 765 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 765 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 765 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4)
#line 765 "rbmm.condition_renaming.m"
{
#line 765 "rbmm.condition_renaming.m"
  {
#line 765 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 765 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamedRegionProc_13;

#line 765 "rbmm.condition_renaming.m"
    {
#line 765 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_3), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamedRegionProc_13);
    }
#line 765 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamedRegionProc_13));
#line 765 "rbmm.condition_renaming.m"
  }
#line 765 "rbmm.condition_renaming.m"
}

#line 757 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0(
#line 757 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegionsTable_6,
#line 757 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PPId_7,
#line 757 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__InCondRegionsProc_8,
#line 757 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_0_12,
#line 757 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_13)
#line 757 "rbmm.condition_renaming.m"
{
#line 772 "rbmm.condition_renaming.m"
  {
#line 772 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 772 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_10;
#line 764 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegionsProc_10;

#line 764 "rbmm.condition_renaming.m"
    {
#line 764 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], transform_hlds__rbmm__condition_renaming__NonLocalRegionsTable_6, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_7)), &transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegionsProc_10);
    }
#line 764 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 764 "rbmm.condition_renaming.m"
      {
#line 764 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_10 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegionsProc_10);
#line 764 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 764 "rbmm.condition_renaming.m"
      }
#line 772 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 766 "rbmm.condition_renaming.m"
      {
#line 766 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_24_24;
#line 766 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_25_25;
#line 766 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_26_26;
#line 766 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_11;
#line 766 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_14_14;
#line 766 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_15_15;
#line 765 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv2_IteRenamedRegionProc_11;
#line 767 "rbmm.condition_renaming.m"
        MR_Integer transform_hlds__rbmm__condition_renaming__V_16_16;

#line 765 "rbmm.condition_renaming.m"
        {
#line 765 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 765 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[3]));
#line 765 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0_1));
#line 765 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 765 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_10));
#line 765 "rbmm.condition_renaming.m"
        }
#line 4902 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeCtorInfo_24_24 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
#line 4904 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeInfo_25_25 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0];
#line 766 "rbmm.condition_renaming.m"
        {
#line 766 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_15_15 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_24_24, transform_hlds__rbmm__condition_renaming__TypeInfo_25_25);
        }
#line 4911 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeInfo_26_26 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0];
#line 765 "rbmm.condition_renaming.m"
        {
#line 765 "rbmm.condition_renaming.m"
          mercury__map__foldl_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_24_24, transform_hlds__rbmm__condition_renaming__TypeInfo_25_25, transform_hlds__rbmm__condition_renaming__TypeInfo_26_26, transform_hlds__rbmm__condition_renaming__V_14_14, transform_hlds__rbmm__condition_renaming__InCondRegionsProc_8, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_15_15)), &transform_hlds__rbmm__condition_renaming__conv2_IteRenamedRegionProc_11);
        }
#line 765 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_11 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_IteRenamedRegionProc_11);
#line 767 "rbmm.condition_renaming.m"
        {
#line 767 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_16_16 = mercury__map__count_1_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_24_24, transform_hlds__rbmm__condition_renaming__TypeInfo_25_25, transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_11);
        }
#line 767 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = (transform_hlds__rbmm__condition_renaming__V_16_16 == (MR_Integer) 0);
#line 769 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 769 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_13 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_0_12;
#line 769 "rbmm.condition_renaming.m"
        else
#line 770 "rbmm.condition_renaming.m"
          {
#line 770 "rbmm.condition_renaming.m"
            {
#line 770 "rbmm.condition_renaming.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__rbmm__condition_renaming__TypeInfo_26_26, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_7)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_11)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_0_12, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_13);
#line 770 "rbmm.condition_renaming.m"
              return;
            }
#line 770 "rbmm.condition_renaming.m"
          }
#line 766 "rbmm.condition_renaming.m"
      }
#line 772 "rbmm.condition_renaming.m"
    else
#line 772 "rbmm.condition_renaming.m"
      *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_13 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_0_12;
#line 772 "rbmm.condition_renaming.m"
  }
#line 757 "rbmm.condition_renaming.m"
}

#line 731 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_case_8_p_0(
#line 731 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 731 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 731 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 731 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 731 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 731 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_14,
#line 731 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_19,
#line 731 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_20)
#line 731 "rbmm.condition_renaming.m"
{
#line 738 "rbmm.condition_renaming.m"
  {
#line 738 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 738 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_14, (MR_Integer) 2)));
#line 739 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_14, (MR_Integer) 0)));
#line 739 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_14, (MR_Integer) 1)));

#line 740 "rbmm.condition_renaming.m"
    {
#line 740 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Goal_18, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_19, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_20);
#line 740 "rbmm.condition_renaming.m"
      return;
    }
#line 738 "rbmm.condition_renaming.m"
  }
#line 731 "rbmm.condition_renaming.m"
}

#line 687 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_3(
#line 687 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 687 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 687 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 687 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 687 "rbmm.condition_renaming.m"
{
#line 687 "rbmm.condition_renaming.m"
  {
#line 687 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 687 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_InCondRegionsProc_20;

#line 687 "rbmm.condition_renaming.m"
    {
#line 687 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_case_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_InCondRegionsProc_20);
    }
#line 687 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_InCondRegionsProc_20));
#line 687 "rbmm.condition_renaming.m"
  }
#line 687 "rbmm.condition_renaming.m"
}

#line 680 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_2(
#line 680 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 680 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 680 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 680 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 680 "rbmm.condition_renaming.m"
{
#line 680 "rbmm.condition_renaming.m"
  {
#line 680 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 680 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsProc_34;

#line 680 "rbmm.condition_renaming.m"
    {
#line 680 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsProc_34);
    }
#line 680 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsProc_34));
#line 680 "rbmm.condition_renaming.m"
  }
#line 680 "rbmm.condition_renaming.m"
}

#line 673 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_1(
#line 673 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 673 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 673 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 673 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 673 "rbmm.condition_renaming.m"
{
#line 673 "rbmm.condition_renaming.m"
  {
#line 673 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 673 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsProc_34;

#line 673 "rbmm.condition_renaming.m"
    {
#line 673 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsProc_34);
    }
#line 673 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsProc_34));
#line 673 "rbmm.condition_renaming.m"
  }
#line 673 "rbmm.condition_renaming.m"
}

#line 661 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0(
#line 661 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 661 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 661 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 661 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 661 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 661 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__GoalInIte_14,
#line 661 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_57,
#line 661 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_58)
#line 661 "rbmm.condition_renaming.m"
{
#line 668 "rbmm.condition_renaming.m"
  {
#line 668 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 668 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Expr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__GoalInIte_14, (MR_Integer) 0)));
#line 669 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__GoalInIte_14, (MR_Integer) 1)));

#line 677 "rbmm.condition_renaming.m"
#line 677 "rbmm.condition_renaming.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) {
#line 677 "rbmm.condition_renaming.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 677 "rbmm.condition_renaming.m"
      case (MR_Integer) 0:
#line 692 "rbmm.condition_renaming.m"
        {
#line 692 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__Goal_26 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16), (MR_Integer) 0);

#line 693 "rbmm.condition_renaming.m"
          {
#line 693 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Goal_26, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_57, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_58);
#line 693 "rbmm.condition_renaming.m"
            return;
          }
#line 692 "rbmm.condition_renaming.m"
        }
#line 677 "rbmm.condition_renaming.m"
        break;
#line 677 "rbmm.condition_renaming.m"
      case (MR_Integer) 1:
#line 727 "rbmm.condition_renaming.m"
        {
#line 728 "rbmm.condition_renaming.m"
          {
#line 728 "rbmm.condition_renaming.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 728 "rbmm.condition_renaming.m"
            return;
          }
#line 727 "rbmm.condition_renaming.m"
        }
#line 677 "rbmm.condition_renaming.m"
        break;
#line 677 "rbmm.condition_renaming.m"
      case (MR_Integer) 2:
#line 727 "rbmm.condition_renaming.m"
        {
#line 728 "rbmm.condition_renaming.m"
          {
#line 728 "rbmm.condition_renaming.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 728 "rbmm.condition_renaming.m"
            return;
          }
#line 727 "rbmm.condition_renaming.m"
        }
#line 677 "rbmm.condition_renaming.m"
        break;
#line 677 "rbmm.condition_renaming.m"
      case (MR_Integer) 3:
#line 677 "rbmm.condition_renaming.m"
#line 677 "rbmm.condition_renaming.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 0)))) {
#line 677 "rbmm.condition_renaming.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 677 "rbmm.condition_renaming.m"
          case (MR_Integer) 0:
#line 727 "rbmm.condition_renaming.m"
            {
#line 728 "rbmm.condition_renaming.m"
              {
#line 728 "rbmm.condition_renaming.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 728 "rbmm.condition_renaming.m"
                return;
              }
#line 727 "rbmm.condition_renaming.m"
            }
#line 677 "rbmm.condition_renaming.m"
            break;
#line 677 "rbmm.condition_renaming.m"
          case (MR_Integer) 1:
#line 727 "rbmm.condition_renaming.m"
            {
#line 728 "rbmm.condition_renaming.m"
              {
#line 728 "rbmm.condition_renaming.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 728 "rbmm.condition_renaming.m"
                return;
              }
#line 727 "rbmm.condition_renaming.m"
            }
#line 677 "rbmm.condition_renaming.m"
            break;
#line 677 "rbmm.condition_renaming.m"
          case (MR_Integer) 2:
#line 677 "rbmm.condition_renaming.m"
            {
#line 677 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 2)));
#line 671 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));

#line 677 "rbmm.condition_renaming.m"
              if ((transform_hlds__rbmm__condition_renaming__V_119_119 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 727 "rbmm.condition_renaming.m"
                {
#line 728 "rbmm.condition_renaming.m"
                  {
#line 728 "rbmm.condition_renaming.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 728 "rbmm.condition_renaming.m"
                    return;
                  }
#line 727 "rbmm.condition_renaming.m"
                }
#line 677 "rbmm.condition_renaming.m"
              else
#line 671 "rbmm.condition_renaming.m"
                {
#line 671 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_76_76;
#line 672 "rbmm.condition_renaming.m"
                  MR_Box transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_InCondRegionsProc_58;

#line 673 "rbmm.condition_renaming.m"
                  {
#line 673 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 673 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[1]));
#line 673 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_1));
#line 673 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 673 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_9));
#line 673 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_10));
#line 673 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_11));
#line 673 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12));
#line 673 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13));
#line 673 "rbmm.condition_renaming.m"
                  }
#line 672 "rbmm.condition_renaming.m"
                  {
#line 672 "rbmm.condition_renaming.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], transform_hlds__rbmm__condition_renaming__V_76_76, transform_hlds__rbmm__condition_renaming__V_119_119, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_57)), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_InCondRegionsProc_58);
                  }
#line 672 "rbmm.condition_renaming.m"
                  *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_58 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_InCondRegionsProc_58);
#line 671 "rbmm.condition_renaming.m"
                }
#line 677 "rbmm.condition_renaming.m"
            }
#line 677 "rbmm.condition_renaming.m"
            break;
#line 677 "rbmm.condition_renaming.m"
          case (MR_Integer) 3:
#line 677 "rbmm.condition_renaming.m"
            {
#line 677 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));

#line 677 "rbmm.condition_renaming.m"
              if ((transform_hlds__rbmm__condition_renaming__V_121_121 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 727 "rbmm.condition_renaming.m"
                {
#line 728 "rbmm.condition_renaming.m"
                  {
#line 728 "rbmm.condition_renaming.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 728 "rbmm.condition_renaming.m"
                    return;
                  }
#line 727 "rbmm.condition_renaming.m"
                }
#line 677 "rbmm.condition_renaming.m"
              else
#line 678 "rbmm.condition_renaming.m"
                {
#line 678 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_72_72;
#line 679 "rbmm.condition_renaming.m"
                  MR_Box transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_InCondRegionsProc_58;

#line 680 "rbmm.condition_renaming.m"
                  {
#line 680 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 680 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[1]));
#line 680 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_2));
#line 680 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 680 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_9));
#line 680 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_10));
#line 680 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_11));
#line 680 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12));
#line 680 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13));
#line 680 "rbmm.condition_renaming.m"
                  }
#line 679 "rbmm.condition_renaming.m"
                  {
#line 679 "rbmm.condition_renaming.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], transform_hlds__rbmm__condition_renaming__V_72_72, transform_hlds__rbmm__condition_renaming__V_121_121, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_57)), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_InCondRegionsProc_58);
                  }
#line 679 "rbmm.condition_renaming.m"
                  *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_58 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_InCondRegionsProc_58);
#line 678 "rbmm.condition_renaming.m"
                }
#line 677 "rbmm.condition_renaming.m"
            }
#line 677 "rbmm.condition_renaming.m"
            break;
#line 677 "rbmm.condition_renaming.m"
          case (MR_Integer) 4:
#line 685 "rbmm.condition_renaming.m"
            {
#line 685 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Cases_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 3)));
#line 685 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_69_69;
#line 685 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));
#line 685 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 2)));
#line 686 "rbmm.condition_renaming.m"
              MR_Box transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_InCondRegionsProc_58;

#line 687 "rbmm.condition_renaming.m"
              {
#line 687 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 687 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[2]));
#line 687 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_3));
#line 687 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 687 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_9));
#line 687 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_10));
#line 687 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_11));
#line 687 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12));
#line 687 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13));
#line 687 "rbmm.condition_renaming.m"
              }
#line 686 "rbmm.condition_renaming.m"
              {
#line 686 "rbmm.condition_renaming.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], transform_hlds__rbmm__condition_renaming__V_69_69, transform_hlds__rbmm__condition_renaming__Cases_25, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_57)), &transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_InCondRegionsProc_58);
              }
#line 686 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_58 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_InCondRegionsProc_58);
#line 685 "rbmm.condition_renaming.m"
            }
#line 677 "rbmm.condition_renaming.m"
            break;
#line 677 "rbmm.condition_renaming.m"
          case (MR_Integer) 5:
#line 698 "rbmm.condition_renaming.m"
            {
#line 698 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Goal_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 2)));
#line 698 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));

#line 701 "rbmm.condition_renaming.m"
              {
#line 701 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Goal_79, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_57, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_58);
#line 701 "rbmm.condition_renaming.m"
                return;
              }
#line 698 "rbmm.condition_renaming.m"
            }
#line 677 "rbmm.condition_renaming.m"
            break;
#line 677 "rbmm.condition_renaming.m"
          case (MR_Integer) 6:
#line 706 "rbmm.condition_renaming.m"
            {
#line 706 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Cond_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 2)));
#line 706 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Then_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 3)));
#line 706 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Else_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 4)));
#line 706 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_64_64;
#line 706 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_65_65;
#line 706 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));

#line 707 "rbmm.condition_renaming.m"
              {
#line 707 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Cond_29, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_57, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_64_64);
              }
#line 711 "rbmm.condition_renaming.m"
              {
#line 711 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Then_30, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_64_64, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_65_65);
              }
#line 715 "rbmm.condition_renaming.m"
              {
#line 715 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Else_31, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_65_65, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_58);
#line 715 "rbmm.condition_renaming.m"
                return;
              }
#line 706 "rbmm.condition_renaming.m"
            }
#line 677 "rbmm.condition_renaming.m"
            break;
#line 677 "rbmm.condition_renaming.m"
          case (MR_Integer) 7:
#line 727 "rbmm.condition_renaming.m"
            {
#line 728 "rbmm.condition_renaming.m"
              {
#line 728 "rbmm.condition_renaming.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 728 "rbmm.condition_renaming.m"
                return;
              }
#line 727 "rbmm.condition_renaming.m"
            }
#line 677 "rbmm.condition_renaming.m"
            break;
#line 677 "rbmm.condition_renaming.m"
        }
#line 677 "rbmm.condition_renaming.m"
        break;
#line 677 "rbmm.condition_renaming.m"
    }
#line 668 "rbmm.condition_renaming.m"
  }
#line 661 "rbmm.condition_renaming.m"
}

#line 632 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_p_0(
#line 632 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPath_5,
#line 632 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Created_6,
#line 632 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_12,
#line 632 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_13)
#line 632 "rbmm.condition_renaming.m"
{
#line 638 "rbmm.condition_renaming.m"
  while (MR_TRUE)
#line 638 "rbmm.condition_renaming.m"
    {
#line 638 "rbmm.condition_renaming.m"
      /* tailcall optimized into a loop */
#line 638 "rbmm.condition_renaming.m"
      {
#line 638 "rbmm.condition_renaming.m"
        MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 638 "rbmm.condition_renaming.m"
        if ((transform_hlds__rbmm__condition_renaming__RevPath_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 658 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_13 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_12;
#line 638 "rbmm.condition_renaming.m"
        else
#line 638 "rbmm.condition_renaming.m"
          {
#line 638 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__RevInitialPath_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPath_5, (MR_Integer) 0)));
#line 638 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__LastStep_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPath_5, (MR_Integer) 1)));
#line 638 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_14_14;

#line 639 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = (transform_hlds__rbmm__condition_renaming__LastStep_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "rbmm.condition_renaming.m"
            if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 644 "rbmm.condition_renaming.m"
              {
#line 644 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__InCondRegions_11;
#line 642 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__InCondRegions0_10;
#line 640 "rbmm.condition_renaming.m"
                MR_Box transform_hlds__rbmm__condition_renaming__conv0_InCondRegions0_10;

#line 640 "rbmm.condition_renaming.m"
                {
#line 640 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0], transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_12, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RevPath_5)), &transform_hlds__rbmm__condition_renaming__conv0_InCondRegions0_10);
                }
#line 640 "rbmm.condition_renaming.m"
                if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 640 "rbmm.condition_renaming.m"
                  {
#line 640 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__InCondRegions0_10 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_InCondRegions0_10);
#line 640 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 640 "rbmm.condition_renaming.m"
                  }
#line 642 "rbmm.condition_renaming.m"
                if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 641 "rbmm.condition_renaming.m"
                  {
#line 641 "rbmm.condition_renaming.m"
                    {
#line 641 "rbmm.condition_renaming.m"
                      mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__condition_renaming__InCondRegions0_10, transform_hlds__rbmm__condition_renaming__Created_6, &transform_hlds__rbmm__condition_renaming__InCondRegions_11);
                    }
#line 641 "rbmm.condition_renaming.m"
                  }
#line 642 "rbmm.condition_renaming.m"
                else
#line 643 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__InCondRegions_11 = transform_hlds__rbmm__condition_renaming__Created_6;
#line 647 "rbmm.condition_renaming.m"
                {
#line 647 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__condition_renaming__InCondRegions_11);
                }
#line 649 "rbmm.condition_renaming.m"
                if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 649 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_14_14 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_12;
#line 649 "rbmm.condition_renaming.m"
                else
#line 650 "rbmm.condition_renaming.m"
                  {
#line 650 "rbmm.condition_renaming.m"
                    {
#line 650 "rbmm.condition_renaming.m"
                      mercury__map__set_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__condition_renaming__RevPath_5)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__InCondRegions_11)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_12, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_14_14);
                    }
#line 650 "rbmm.condition_renaming.m"
                  }
#line 644 "rbmm.condition_renaming.m"
              }
#line 652 "rbmm.condition_renaming.m"
            else
#line 652 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_14_14 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_12;
#line 655 "rbmm.condition_renaming.m"
            /* direct tailcall eliminated */
#line 655 "rbmm.condition_renaming.m"
            {
#line 655 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__RevPath__tmp_copy_5 = transform_hlds__rbmm__condition_renaming__RevInitialPath_8;
#line 655 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0__tmp_copy_12 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_14_14;

#line 655 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_12 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0__tmp_copy_12;
#line 655 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__RevPath_5 = transform_hlds__rbmm__condition_renaming__RevPath__tmp_copy_5;
#line 655 "rbmm.condition_renaming.m"
            }
#line 655 "rbmm.condition_renaming.m"
            continue;
#line 638 "rbmm.condition_renaming.m"
          }
#line 638 "rbmm.condition_renaming.m"
      }
#line 638 "rbmm.condition_renaming.m"
      break;
#line 638 "rbmm.condition_renaming.m"
    }
#line 632 "rbmm.condition_renaming.m"
}

#line 611 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_2(
#line 611 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 611 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 611 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 611 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 611 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 611 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5)
#line 611 "rbmm.condition_renaming.m"
{
#line 611 "rbmm.condition_renaming.m"
  {
#line 611 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 611 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv7_STATE_VARIABLE_LeftRegions_14;
#line 611 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv6_STATE_VARIABLE_RightRegions_16;

#line 611 "rbmm.condition_renaming.m"
    {
#line 611 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__renaming_annotation_to_regions_5_p_0(((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv7_STATE_VARIABLE_LeftRegions_14, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_4), &transform_hlds__rbmm__condition_renaming__conv6_STATE_VARIABLE_RightRegions_16);
    }
#line 611 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv7_STATE_VARIABLE_LeftRegions_14));
#line 611 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv6_STATE_VARIABLE_RightRegions_16));
#line 611 "rbmm.condition_renaming.m"
  }
#line 611 "rbmm.condition_renaming.m"
}

#line 603 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_1(
#line 603 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 603 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 603 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 603 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 603 "rbmm.condition_renaming.m"
{
#line 603 "rbmm.condition_renaming.m"
  {
#line 603 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 603 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_Regions_14;

#line 603 "rbmm.condition_renaming.m"
    {
#line 603 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__apply_region_renaming_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_Regions_14);
    }
#line 603 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_Regions_14));
#line 603 "rbmm.condition_renaming.m"
  }
#line 603 "rbmm.condition_renaming.m"
}

#line 578 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(
#line 578 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 578 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 578 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 578 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 578 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 578 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Cond_14,
#line 578 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_33,
#line 578 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_34)
#line 578 "rbmm.condition_renaming.m"
{
#line 584 "rbmm.condition_renaming.m"
  {
#line 584 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 584 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__CondExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Cond_14, (MR_Integer) 0)));
#line 584 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__CondInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Cond_14, (MR_Integer) 1)));
#line 584 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__HasSubGoals_18;

#line 586 "rbmm.condition_renaming.m"
    {
#line 586 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__HasSubGoals_18 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__rbmm__condition_renaming__CondExpr_16);
    }
#line 618 "rbmm.condition_renaming.m"
#line 618 "rbmm.condition_renaming.m"
    switch (transform_hlds__rbmm__condition_renaming__HasSubGoals_18) {
#line 618 "rbmm.condition_renaming.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 618 "rbmm.condition_renaming.m"
      case (MR_Integer) 1:
#line 588 "rbmm.condition_renaming.m"
        {
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_42_42;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_43_43;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_44_44;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_51_51;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_52_52;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_19;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__RevGoalPath_21;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__LRBefore_22;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__LRAfter_23;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__CreatedNodes_24;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__ResurRenaming_26;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__CreatedRegions0_27;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos_29;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__LeftRegions_30;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__CreatedRegions_32;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__V_36_36;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__V_37_37;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__V_39_39;
#line 588 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__V_40_40;
#line 590 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__V_20_20;
#line 591 "rbmm.condition_renaming.m"
          MR_Box transform_hlds__rbmm__condition_renaming__conv0_LRBefore_22;
#line 592 "rbmm.condition_renaming.m"
          MR_Box transform_hlds__rbmm__condition_renaming__conv1_LRAfter_23;
#line 600 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__ResurRenaming0_25;
#line 598 "rbmm.condition_renaming.m"
          MR_Box transform_hlds__rbmm__condition_renaming__conv2_ResurRenaming0_25;
#line 603 "rbmm.condition_renaming.m"
          MR_Box transform_hlds__rbmm__condition_renaming__conv4_CreatedRegions0_27;
#line 608 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos0_28;
#line 606 "rbmm.condition_renaming.m"
          MR_Box transform_hlds__rbmm__condition_renaming__conv5_ResurRenamingAnnos0_28;
#line 611 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming___RightRegions_31;
#line 611 "rbmm.condition_renaming.m"
          MR_Box transform_hlds__rbmm__condition_renaming__conv9_LeftRegions_30;
#line 611 "rbmm.condition_renaming.m"
          MR_Box transform_hlds__rbmm__condition_renaming__conv8__RightRegions_31;

#line 589 "rbmm.condition_renaming.m"
          {
#line 589 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ProgPoint_19 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__condition_renaming__CondInfo_17);
          }
#line 590 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__ProgPoint_19, (MR_Integer) 0)));
#line 590 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__RevGoalPath_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__ProgPoint_19, (MR_Integer) 1)));
#line 5801 "transform_hlds.rbmm.condition_renaming.c"
          transform_hlds__rbmm__condition_renaming__TypeCtorInfo_42_42 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 5803 "transform_hlds.rbmm.condition_renaming.c"
          transform_hlds__rbmm__condition_renaming__TypeInfo_43_43 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[3];
#line 591 "rbmm.condition_renaming.m"
          {
#line 591 "rbmm.condition_renaming.m"
            mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_42_42, transform_hlds__rbmm__condition_renaming__TypeInfo_43_43, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_19)), &transform_hlds__rbmm__condition_renaming__conv0_LRBefore_22);
          }
#line 591 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__LRBefore_22 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_LRBefore_22);
#line 592 "rbmm.condition_renaming.m"
          {
#line 592 "rbmm.condition_renaming.m"
            mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_42_42, transform_hlds__rbmm__condition_renaming__TypeInfo_43_43, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_19)), &transform_hlds__rbmm__condition_renaming__conv1_LRAfter_23);
          }
#line 592 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__LRAfter_23 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_LRAfter_23);
#line 5819 "transform_hlds.rbmm.condition_renaming.c"
          transform_hlds__rbmm__condition_renaming__TypeCtorInfo_44_44 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 594 "rbmm.condition_renaming.m"
          {
#line 594 "rbmm.condition_renaming.m"
            mercury__set__difference_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_44_44, transform_hlds__rbmm__condition_renaming__LRAfter_23, transform_hlds__rbmm__condition_renaming__LRBefore_22, &transform_hlds__rbmm__condition_renaming__CreatedNodes_24);
          }
#line 598 "rbmm.condition_renaming.m"
          {
#line 598 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_42_42, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2], transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_19)), &transform_hlds__rbmm__condition_renaming__conv2_ResurRenaming0_25);
          }
#line 598 "rbmm.condition_renaming.m"
          if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 598 "rbmm.condition_renaming.m"
            {
#line 598 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__ResurRenaming0_25 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_ResurRenaming0_25);
#line 598 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 598 "rbmm.condition_renaming.m"
            }
#line 600 "rbmm.condition_renaming.m"
          if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 599 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ResurRenaming_26 = transform_hlds__rbmm__condition_renaming__ResurRenaming0_25;
#line 600 "rbmm.condition_renaming.m"
          else
#line 601 "rbmm.condition_renaming.m"
            {
#line 601 "rbmm.condition_renaming.m"
              {
#line 601 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__ResurRenaming_26 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[1]);
              }
#line 601 "rbmm.condition_renaming.m"
            }
#line 603 "rbmm.condition_renaming.m"
          {
#line 603 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 603 "rbmm.condition_renaming.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_36_36, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[1]));
#line 603 "rbmm.condition_renaming.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_36_36, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_1));
#line 603 "rbmm.condition_renaming.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 603 "rbmm.condition_renaming.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_36_36, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_9));
#line 603 "rbmm.condition_renaming.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_36_36, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenaming_26));
#line 603 "rbmm.condition_renaming.m"
          }
#line 5872 "transform_hlds.rbmm.condition_renaming.c"
          transform_hlds__rbmm__condition_renaming__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 604 "rbmm.condition_renaming.m"
          {
#line 604 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__V_37_37 = mercury__set__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_51_51);
          }
#line 5879 "transform_hlds.rbmm.condition_renaming.c"
          transform_hlds__rbmm__condition_renaming__TypeInfo_52_52 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0];
#line 603 "rbmm.condition_renaming.m"
          {
#line 603 "rbmm.condition_renaming.m"
            mercury__set__fold_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_44_44, transform_hlds__rbmm__condition_renaming__TypeInfo_52_52, transform_hlds__rbmm__condition_renaming__V_36_36, transform_hlds__rbmm__condition_renaming__CreatedNodes_24, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_37_37)), &transform_hlds__rbmm__condition_renaming__conv4_CreatedRegions0_27);
          }
#line 603 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__CreatedRegions0_27 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv4_CreatedRegions0_27);
#line 606 "rbmm.condition_renaming.m"
          {
#line 606 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_42_42, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[2], transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_19)), &transform_hlds__rbmm__condition_renaming__conv5_ResurRenamingAnnos0_28);
          }
#line 606 "rbmm.condition_renaming.m"
          if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 606 "rbmm.condition_renaming.m"
            {
#line 606 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos0_28 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv5_ResurRenamingAnnos0_28);
#line 606 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 606 "rbmm.condition_renaming.m"
            }
#line 608 "rbmm.condition_renaming.m"
          if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 607 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos_29 = transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos0_28;
#line 608 "rbmm.condition_renaming.m"
          else
#line 609 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "rbmm.condition_renaming.m"
          {
#line 612 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__V_39_39 = mercury__set__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_51_51);
          }
#line 613 "rbmm.condition_renaming.m"
          {
#line 613 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__V_40_40 = mercury__set__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_51_51);
          }
#line 611 "rbmm.condition_renaming.m"
          {
#line 611 "rbmm.condition_renaming.m"
            mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0, transform_hlds__rbmm__condition_renaming__TypeInfo_52_52, transform_hlds__rbmm__condition_renaming__TypeInfo_52_52, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[10], transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos_29, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_39_39)), &transform_hlds__rbmm__condition_renaming__conv9_LeftRegions_30, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_40_40)), &transform_hlds__rbmm__condition_renaming__conv8__RightRegions_31);
          }
#line 611 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__LeftRegions_30 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv9_LeftRegions_30);
#line 611 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming___RightRegions_31 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv8__RightRegions_31);
#line 614 "rbmm.condition_renaming.m"
          {
#line 614 "rbmm.condition_renaming.m"
            mercury__set__union_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_51_51, transform_hlds__rbmm__condition_renaming__CreatedRegions0_27, transform_hlds__rbmm__condition_renaming__LeftRegions_30, &transform_hlds__rbmm__condition_renaming__CreatedRegions_32);
          }
#line 616 "rbmm.condition_renaming.m"
          {
#line 616 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_p_0(transform_hlds__rbmm__condition_renaming__RevGoalPath_21, transform_hlds__rbmm__condition_renaming__CreatedRegions_32, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_33, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_34);
#line 616 "rbmm.condition_renaming.m"
            return;
          }
#line 588 "rbmm.condition_renaming.m"
        }
#line 618 "rbmm.condition_renaming.m"
        break;
#line 618 "rbmm.condition_renaming.m"
      case (MR_Integer) 0:
#line 620 "rbmm.condition_renaming.m"
        {
#line 620 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Cond_14, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_33, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_34);
#line 620 "rbmm.condition_renaming.m"
          return;
        }
#line 618 "rbmm.condition_renaming.m"
        break;
#line 618 "rbmm.condition_renaming.m"
    }
#line 584 "rbmm.condition_renaming.m"
  }
#line 578 "rbmm.condition_renaming.m"
}

#line 554 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_case_8_p_0(
#line 554 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 554 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 554 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 554 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 554 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 554 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_14,
#line 554 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_19,
#line 554 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_20)
#line 554 "rbmm.condition_renaming.m"
{
#line 560 "rbmm.condition_renaming.m"
  {
#line 560 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 560 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_14, (MR_Integer) 2)));
#line 561 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_14, (MR_Integer) 0)));
#line 561 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_14, (MR_Integer) 1)));

#line 562 "rbmm.condition_renaming.m"
    {
#line 562 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Goal_18, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_19, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_20);
#line 562 "rbmm.condition_renaming.m"
      return;
    }
#line 560 "rbmm.condition_renaming.m"
  }
#line 554 "rbmm.condition_renaming.m"
}

#line 510 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_3(
#line 510 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 510 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 510 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 510 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 510 "rbmm.condition_renaming.m"
{
#line 510 "rbmm.condition_renaming.m"
  {
#line 510 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 510 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_NonLocalRegionProc_20;

#line 510 "rbmm.condition_renaming.m"
    {
#line 510 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_case_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_NonLocalRegionProc_20);
    }
#line 510 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_NonLocalRegionProc_20));
#line 510 "rbmm.condition_renaming.m"
  }
#line 510 "rbmm.condition_renaming.m"
}

#line 503 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_2(
#line 503 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 503 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 503 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 503 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 503 "rbmm.condition_renaming.m"
{
#line 503 "rbmm.condition_renaming.m"
  {
#line 503 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 503 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_NonLocalRegionProc_37;

#line 503 "rbmm.condition_renaming.m"
    {
#line 503 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_NonLocalRegionProc_37);
    }
#line 503 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_NonLocalRegionProc_37));
#line 503 "rbmm.condition_renaming.m"
  }
#line 503 "rbmm.condition_renaming.m"
}

#line 496 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_1(
#line 496 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 496 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 496 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 496 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 496 "rbmm.condition_renaming.m"
{
#line 496 "rbmm.condition_renaming.m"
  {
#line 496 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 496 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_NonLocalRegionProc_37;

#line 496 "rbmm.condition_renaming.m"
    {
#line 496 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_NonLocalRegionProc_37);
    }
#line 496 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_NonLocalRegionProc_37));
#line 496 "rbmm.condition_renaming.m"
  }
#line 496 "rbmm.condition_renaming.m"
}

#line 484 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0(
#line 484 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 484 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 484 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 484 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 484 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 484 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__GoalInIte_14,
#line 484 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_57,
#line 484 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_58)
#line 484 "rbmm.condition_renaming.m"
{
#line 491 "rbmm.condition_renaming.m"
  {
#line 491 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 491 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Expr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__GoalInIte_14, (MR_Integer) 0)));
#line 492 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__GoalInIte_14, (MR_Integer) 1)));

#line 500 "rbmm.condition_renaming.m"
#line 500 "rbmm.condition_renaming.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) {
#line 500 "rbmm.condition_renaming.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 500 "rbmm.condition_renaming.m"
      case (MR_Integer) 0:
#line 515 "rbmm.condition_renaming.m"
        {
#line 515 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__Goal_26 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16), (MR_Integer) 0);

#line 516 "rbmm.condition_renaming.m"
          {
#line 516 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Goal_26, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_57, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_58);
#line 516 "rbmm.condition_renaming.m"
            return;
          }
#line 515 "rbmm.condition_renaming.m"
        }
#line 500 "rbmm.condition_renaming.m"
        break;
#line 500 "rbmm.condition_renaming.m"
      case (MR_Integer) 1:
#line 550 "rbmm.condition_renaming.m"
        {
#line 551 "rbmm.condition_renaming.m"
          {
#line 551 "rbmm.condition_renaming.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 551 "rbmm.condition_renaming.m"
            return;
          }
#line 550 "rbmm.condition_renaming.m"
        }
#line 500 "rbmm.condition_renaming.m"
        break;
#line 500 "rbmm.condition_renaming.m"
      case (MR_Integer) 2:
#line 550 "rbmm.condition_renaming.m"
        {
#line 551 "rbmm.condition_renaming.m"
          {
#line 551 "rbmm.condition_renaming.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 551 "rbmm.condition_renaming.m"
            return;
          }
#line 550 "rbmm.condition_renaming.m"
        }
#line 500 "rbmm.condition_renaming.m"
        break;
#line 500 "rbmm.condition_renaming.m"
      case (MR_Integer) 3:
#line 500 "rbmm.condition_renaming.m"
#line 500 "rbmm.condition_renaming.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 0)))) {
#line 500 "rbmm.condition_renaming.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 500 "rbmm.condition_renaming.m"
          case (MR_Integer) 0:
#line 550 "rbmm.condition_renaming.m"
            {
#line 551 "rbmm.condition_renaming.m"
              {
#line 551 "rbmm.condition_renaming.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 551 "rbmm.condition_renaming.m"
                return;
              }
#line 550 "rbmm.condition_renaming.m"
            }
#line 500 "rbmm.condition_renaming.m"
            break;
#line 500 "rbmm.condition_renaming.m"
          case (MR_Integer) 1:
#line 550 "rbmm.condition_renaming.m"
            {
#line 551 "rbmm.condition_renaming.m"
              {
#line 551 "rbmm.condition_renaming.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 551 "rbmm.condition_renaming.m"
                return;
              }
#line 550 "rbmm.condition_renaming.m"
            }
#line 500 "rbmm.condition_renaming.m"
            break;
#line 500 "rbmm.condition_renaming.m"
          case (MR_Integer) 2:
#line 500 "rbmm.condition_renaming.m"
            {
#line 500 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 2)));
#line 494 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));

#line 500 "rbmm.condition_renaming.m"
              if ((transform_hlds__rbmm__condition_renaming__V_119_119 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "rbmm.condition_renaming.m"
                {
#line 551 "rbmm.condition_renaming.m"
                  {
#line 551 "rbmm.condition_renaming.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 551 "rbmm.condition_renaming.m"
                    return;
                  }
#line 550 "rbmm.condition_renaming.m"
                }
#line 500 "rbmm.condition_renaming.m"
              else
#line 494 "rbmm.condition_renaming.m"
                {
#line 494 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_76_76;
#line 495 "rbmm.condition_renaming.m"
                  MR_Box transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionProc_58;

#line 496 "rbmm.condition_renaming.m"
                  {
#line 496 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 496 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[1]));
#line 496 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_1));
#line 496 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 496 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_9));
#line 496 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_10));
#line 496 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_11));
#line 496 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12));
#line 496 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13));
#line 496 "rbmm.condition_renaming.m"
                  }
#line 495 "rbmm.condition_renaming.m"
                  {
#line 495 "rbmm.condition_renaming.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], transform_hlds__rbmm__condition_renaming__V_76_76, transform_hlds__rbmm__condition_renaming__V_119_119, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_57)), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionProc_58);
                  }
#line 495 "rbmm.condition_renaming.m"
                  *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_58 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionProc_58);
#line 494 "rbmm.condition_renaming.m"
                }
#line 500 "rbmm.condition_renaming.m"
            }
#line 500 "rbmm.condition_renaming.m"
            break;
#line 500 "rbmm.condition_renaming.m"
          case (MR_Integer) 3:
#line 500 "rbmm.condition_renaming.m"
            {
#line 500 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));

#line 500 "rbmm.condition_renaming.m"
              if ((transform_hlds__rbmm__condition_renaming__V_121_121 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "rbmm.condition_renaming.m"
                {
#line 551 "rbmm.condition_renaming.m"
                  {
#line 551 "rbmm.condition_renaming.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 551 "rbmm.condition_renaming.m"
                    return;
                  }
#line 550 "rbmm.condition_renaming.m"
                }
#line 500 "rbmm.condition_renaming.m"
              else
#line 501 "rbmm.condition_renaming.m"
                {
#line 501 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_72_72;
#line 502 "rbmm.condition_renaming.m"
                  MR_Box transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_NonLocalRegionProc_58;

#line 503 "rbmm.condition_renaming.m"
                  {
#line 503 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 503 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[1]));
#line 503 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_2));
#line 503 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 503 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_9));
#line 503 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_10));
#line 503 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_11));
#line 503 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12));
#line 503 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13));
#line 503 "rbmm.condition_renaming.m"
                  }
#line 502 "rbmm.condition_renaming.m"
                  {
#line 502 "rbmm.condition_renaming.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], transform_hlds__rbmm__condition_renaming__V_72_72, transform_hlds__rbmm__condition_renaming__V_121_121, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_57)), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_NonLocalRegionProc_58);
                  }
#line 502 "rbmm.condition_renaming.m"
                  *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_58 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_NonLocalRegionProc_58);
#line 501 "rbmm.condition_renaming.m"
                }
#line 500 "rbmm.condition_renaming.m"
            }
#line 500 "rbmm.condition_renaming.m"
            break;
#line 500 "rbmm.condition_renaming.m"
          case (MR_Integer) 4:
#line 508 "rbmm.condition_renaming.m"
            {
#line 508 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Cases_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 3)));
#line 508 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_69_69;
#line 508 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));
#line 508 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 2)));
#line 509 "rbmm.condition_renaming.m"
              MR_Box transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_NonLocalRegionProc_58;

#line 510 "rbmm.condition_renaming.m"
              {
#line 510 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 510 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[2]));
#line 510 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_3));
#line 510 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 510 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_9));
#line 510 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_10));
#line 510 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_11));
#line 510 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12));
#line 510 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13));
#line 510 "rbmm.condition_renaming.m"
              }
#line 509 "rbmm.condition_renaming.m"
              {
#line 509 "rbmm.condition_renaming.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], transform_hlds__rbmm__condition_renaming__V_69_69, transform_hlds__rbmm__condition_renaming__Cases_25, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_57)), &transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_NonLocalRegionProc_58);
              }
#line 509 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_58 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_NonLocalRegionProc_58);
#line 508 "rbmm.condition_renaming.m"
            }
#line 500 "rbmm.condition_renaming.m"
            break;
#line 500 "rbmm.condition_renaming.m"
          case (MR_Integer) 5:
#line 521 "rbmm.condition_renaming.m"
            {
#line 521 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Goal_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 2)));
#line 521 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));

#line 524 "rbmm.condition_renaming.m"
              {
#line 524 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Goal_79, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_57, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_58);
#line 524 "rbmm.condition_renaming.m"
                return;
              }
#line 521 "rbmm.condition_renaming.m"
            }
#line 500 "rbmm.condition_renaming.m"
            break;
#line 500 "rbmm.condition_renaming.m"
          case (MR_Integer) 6:
#line 529 "rbmm.condition_renaming.m"
            {
#line 529 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Cond_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 2)));
#line 529 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Then_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 3)));
#line 529 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Else_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 4)));
#line 529 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_64_64;
#line 529 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_65_65;
#line 529 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));

#line 530 "rbmm.condition_renaming.m"
              {
#line 530 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Cond_29, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_57, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_64_64);
              }
#line 534 "rbmm.condition_renaming.m"
              {
#line 534 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Then_30, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_64_64, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_65_65);
              }
#line 538 "rbmm.condition_renaming.m"
              {
#line 538 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Else_31, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_65_65, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_58);
#line 538 "rbmm.condition_renaming.m"
                return;
              }
#line 529 "rbmm.condition_renaming.m"
            }
#line 500 "rbmm.condition_renaming.m"
            break;
#line 500 "rbmm.condition_renaming.m"
          case (MR_Integer) 7:
#line 550 "rbmm.condition_renaming.m"
            {
#line 551 "rbmm.condition_renaming.m"
              {
#line 551 "rbmm.condition_renaming.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 551 "rbmm.condition_renaming.m"
                return;
              }
#line 550 "rbmm.condition_renaming.m"
            }
#line 500 "rbmm.condition_renaming.m"
            break;
#line 500 "rbmm.condition_renaming.m"
        }
#line 500 "rbmm.condition_renaming.m"
        break;
#line 500 "rbmm.condition_renaming.m"
    }
#line 491 "rbmm.condition_renaming.m"
  }
#line 484 "rbmm.condition_renaming.m"
}

#line 446 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_p_0(
#line 446 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPath_6,
#line 446 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Created_7,
#line 446 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Removed_8,
#line 446 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_16,
#line 446 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_17)
#line 446 "rbmm.condition_renaming.m"
{
#line 452 "rbmm.condition_renaming.m"
  while (MR_TRUE)
#line 452 "rbmm.condition_renaming.m"
    {
#line 452 "rbmm.condition_renaming.m"
      /* tailcall optimized into a loop */
#line 452 "rbmm.condition_renaming.m"
      {
#line 452 "rbmm.condition_renaming.m"
        MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 452 "rbmm.condition_renaming.m"
        if ((transform_hlds__rbmm__condition_renaming__RevPath_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_17 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_16;
#line 452 "rbmm.condition_renaming.m"
        else
#line 452 "rbmm.condition_renaming.m"
          {
#line 452 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__RevInitialPath_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPath_6, (MR_Integer) 0)));
#line 452 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__LastStep_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPath_6, (MR_Integer) 1)));
#line 452 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_19_19;

#line 453 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = (transform_hlds__rbmm__condition_renaming__LastStep_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 472 "rbmm.condition_renaming.m"
            if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 456 "rbmm.condition_renaming.m"
              {
#line 456 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__RevPathToCond_12;
#line 456 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegions_15;
#line 463 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegions0_13;
#line 458 "rbmm.condition_renaming.m"
                MR_Box transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegions0_13;

#line 456 "rbmm.condition_renaming.m"
                {
#line 456 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__RevPathToCond_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "rbmm.condition_renaming.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPathToCond_12, 0) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__RevInitialPath_10));
#line 456 "rbmm.condition_renaming.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPathToCond_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 456 "rbmm.condition_renaming.m"
                }
#line 458 "rbmm.condition_renaming.m"
                {
#line 458 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0], transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_16, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RevPathToCond_12)), &transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegions0_13);
                }
#line 458 "rbmm.condition_renaming.m"
                if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 458 "rbmm.condition_renaming.m"
                  {
#line 458 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__NonLocalRegions0_13 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegions0_13);
#line 458 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 458 "rbmm.condition_renaming.m"
                  }
#line 463 "rbmm.condition_renaming.m"
                if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 461 "rbmm.condition_renaming.m"
                  {
#line 461 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 461 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegions1_14;

#line 461 "rbmm.condition_renaming.m"
                    {
#line 461 "rbmm.condition_renaming.m"
                      mercury__set__union_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23, transform_hlds__rbmm__condition_renaming__NonLocalRegions0_13, transform_hlds__rbmm__condition_renaming__Created_7, &transform_hlds__rbmm__condition_renaming__NonLocalRegions1_14);
                    }
#line 462 "rbmm.condition_renaming.m"
                    {
#line 462 "rbmm.condition_renaming.m"
                      mercury__set__difference_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23, transform_hlds__rbmm__condition_renaming__NonLocalRegions1_14, transform_hlds__rbmm__condition_renaming__Removed_8, &transform_hlds__rbmm__condition_renaming__NonLocalRegions_15);
                    }
#line 461 "rbmm.condition_renaming.m"
                  }
#line 463 "rbmm.condition_renaming.m"
                else
#line 464 "rbmm.condition_renaming.m"
                  {
#line 464 "rbmm.condition_renaming.m"
                    {
#line 464 "rbmm.condition_renaming.m"
                      mercury__set__difference_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__condition_renaming__Created_7, transform_hlds__rbmm__condition_renaming__Removed_8, &transform_hlds__rbmm__condition_renaming__NonLocalRegions_15);
                    }
#line 464 "rbmm.condition_renaming.m"
                  }
#line 467 "rbmm.condition_renaming.m"
                {
#line 467 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__condition_renaming__NonLocalRegions_15);
                }
#line 469 "rbmm.condition_renaming.m"
                if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 469 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_19_19 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_16;
#line 469 "rbmm.condition_renaming.m"
                else
#line 470 "rbmm.condition_renaming.m"
                  {
#line 470 "rbmm.condition_renaming.m"
                    {
#line 470 "rbmm.condition_renaming.m"
                      mercury__map__set_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__condition_renaming__RevPathToCond_12)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__NonLocalRegions_15)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_16, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_19_19);
                    }
#line 470 "rbmm.condition_renaming.m"
                  }
#line 456 "rbmm.condition_renaming.m"
              }
#line 472 "rbmm.condition_renaming.m"
            else
#line 472 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_19_19 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_16;
#line 478 "rbmm.condition_renaming.m"
            /* direct tailcall eliminated */
#line 478 "rbmm.condition_renaming.m"
            {
#line 478 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__RevPath__tmp_copy_6 = transform_hlds__rbmm__condition_renaming__RevInitialPath_10;
#line 478 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0__tmp_copy_16 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_19_19;

#line 478 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_16 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0__tmp_copy_16;
#line 478 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__RevPath_6 = transform_hlds__rbmm__condition_renaming__RevPath__tmp_copy_6;
#line 478 "rbmm.condition_renaming.m"
            }
#line 478 "rbmm.condition_renaming.m"
            continue;
#line 452 "rbmm.condition_renaming.m"
          }
#line 452 "rbmm.condition_renaming.m"
      }
#line 452 "rbmm.condition_renaming.m"
      break;
#line 452 "rbmm.condition_renaming.m"
    }
#line 446 "rbmm.condition_renaming.m"
}

#line 409 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__renaming_annotation_to_regions_5_p_0(
#line 409 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenameAnnotation_6,
#line 409 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_LeftRegions_0_13,
#line 409 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_LeftRegions_14,
#line 409 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_RightRegions_0_15,
#line 409 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_RightRegions_16)
#line 409 "rbmm.condition_renaming.m"
{
#line 418 "rbmm.condition_renaming.m"
  {
#line 418 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 418 "rbmm.condition_renaming.m"
#line 418 "rbmm.condition_renaming.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__RenameAnnotation_6)) {
#line 418 "rbmm.condition_renaming.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 418 "rbmm.condition_renaming.m"
      case (MR_Integer) 0:
#line 418 "rbmm.condition_renaming.m"
      case (MR_Integer) 1:
#line 418 "rbmm.condition_renaming.m"
        {
#line 419 "rbmm.condition_renaming.m"
          {
#line 419 "rbmm.condition_renaming.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.renaming_annotation_to_regions\'/5", (MR_String) "annotation is not assignment");
#line 419 "rbmm.condition_renaming.m"
            return;
          }
#line 418 "rbmm.condition_renaming.m"
        }
#line 418 "rbmm.condition_renaming.m"
        break;
#line 418 "rbmm.condition_renaming.m"
      case (MR_Integer) 2:
#line 421 "rbmm.condition_renaming.m"
        {
#line 421 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 421 "rbmm.condition_renaming.m"
          MR_String transform_hlds__rbmm__condition_renaming__RightRegion_11 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__condition_renaming__RenameAnnotation_6, (MR_Integer) 0)));
#line 421 "rbmm.condition_renaming.m"
          MR_String transform_hlds__rbmm__condition_renaming__LeftRegion_12 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__condition_renaming__RenameAnnotation_6, (MR_Integer) 1)));

#line 422 "rbmm.condition_renaming.m"
          {
#line 422 "rbmm.condition_renaming.m"
            mercury__set__insert_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_22_22, ((MR_Box) (transform_hlds__rbmm__condition_renaming__LeftRegion_12)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_LeftRegions_0_13, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_LeftRegions_14);
          }
#line 423 "rbmm.condition_renaming.m"
          {
#line 423 "rbmm.condition_renaming.m"
            mercury__set__insert_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_22_22, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RightRegion_11)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_RightRegions_0_15, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_RightRegions_16);
#line 423 "rbmm.condition_renaming.m"
            return;
          }
#line 421 "rbmm.condition_renaming.m"
        }
#line 418 "rbmm.condition_renaming.m"
        break;
#line 418 "rbmm.condition_renaming.m"
    }
#line 418 "rbmm.condition_renaming.m"
  }
#line 409 "rbmm.condition_renaming.m"
}

#line 397 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__apply_region_renaming_5_p_0(
#line 397 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_6,
#line 397 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Renaming_7,
#line 397 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Node_8,
#line 397 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_Regions_0_13,
#line 397 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_Regions_14)
#line 397 "rbmm.condition_renaming.m"
{
#line 400 "rbmm.condition_renaming.m"
  {
#line 400 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 400 "rbmm.condition_renaming.m"
    MR_String transform_hlds__rbmm__condition_renaming__RegionName_10;
#line 405 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegionNameList_11;
#line 402 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv0_RenamedRegionNameList_11;

#line 401 "rbmm.condition_renaming.m"
    {
#line 401 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__RegionName_10 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__condition_renaming__Graph_6, transform_hlds__rbmm__condition_renaming__Node_8);
    }
#line 402 "rbmm.condition_renaming.m"
    {
#line 402 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[1], transform_hlds__rbmm__condition_renaming__Renaming_7, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RegionName_10)), &transform_hlds__rbmm__condition_renaming__conv0_RenamedRegionNameList_11);
    }
#line 402 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 402 "rbmm.condition_renaming.m"
      {
#line 402 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__RenamedRegionNameList_11 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_RenamedRegionNameList_11);
#line 402 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 402 "rbmm.condition_renaming.m"
      }
#line 405 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 403 "rbmm.condition_renaming.m"
      {
#line 403 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 403 "rbmm.condition_renaming.m"
        MR_String transform_hlds__rbmm__condition_renaming__RenamedRegionName_12;
#line 403 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv1_RenamedRegionName_12;

#line 403 "rbmm.condition_renaming.m"
        {
#line 403 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__conv1_RenamedRegionName_12 = mercury__list__det_last_1_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_19_19, transform_hlds__rbmm__condition_renaming__RenamedRegionNameList_11);
        }
#line 403 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__RenamedRegionName_12 = ((MR_String) transform_hlds__rbmm__condition_renaming__conv1_RenamedRegionName_12);
#line 404 "rbmm.condition_renaming.m"
        {
#line 404 "rbmm.condition_renaming.m"
          mercury__set__insert_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_19_19, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RenamedRegionName_12)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_Regions_0_13, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_Regions_14);
#line 404 "rbmm.condition_renaming.m"
          return;
        }
#line 403 "rbmm.condition_renaming.m"
      }
#line 405 "rbmm.condition_renaming.m"
    else
#line 406 "rbmm.condition_renaming.m"
      {
#line 406 "rbmm.condition_renaming.m"
        {
#line 406 "rbmm.condition_renaming.m"
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RegionName_10)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_Regions_0_13, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_Regions_14);
#line 406 "rbmm.condition_renaming.m"
          return;
        }
#line 406 "rbmm.condition_renaming.m"
      }
#line 400 "rbmm.condition_renaming.m"
  }
#line 397 "rbmm.condition_renaming.m"
}

#line 383 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_2(
#line 383 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 383 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 383 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 383 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 383 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 383 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5)
#line 383 "rbmm.condition_renaming.m"
{
#line 383 "rbmm.condition_renaming.m"
  {
#line 383 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 383 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv8_STATE_VARIABLE_LeftRegions_14;
#line 383 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv7_STATE_VARIABLE_RightRegions_16;

#line 383 "rbmm.condition_renaming.m"
    {
#line 383 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__renaming_annotation_to_regions_5_p_0(((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv8_STATE_VARIABLE_LeftRegions_14, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_4), &transform_hlds__rbmm__condition_renaming__conv7_STATE_VARIABLE_RightRegions_16);
    }
#line 383 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv8_STATE_VARIABLE_LeftRegions_14));
#line 383 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv7_STATE_VARIABLE_RightRegions_16));
#line 383 "rbmm.condition_renaming.m"
  }
#line 383 "rbmm.condition_renaming.m"
}

#line 373 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_1(
#line 373 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 373 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 373 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 373 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 373 "rbmm.condition_renaming.m"
{
#line 373 "rbmm.condition_renaming.m"
  {
#line 373 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 373 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_Regions_14;

#line 373 "rbmm.condition_renaming.m"
    {
#line 373 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__apply_region_renaming_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_Regions_14);
    }
#line 373 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_Regions_14));
#line 373 "rbmm.condition_renaming.m"
  }
#line 373 "rbmm.condition_renaming.m"
}

#line 342 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(
#line 342 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 342 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 342 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 342 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 342 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 342 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__GoalInIte_14,
#line 342 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_36,
#line 342 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_37)
#line 342 "rbmm.condition_renaming.m"
{
#line 349 "rbmm.condition_renaming.m"
  {
#line 349 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 349 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Expr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__GoalInIte_14, (MR_Integer) 0)));
#line 349 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Info_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__GoalInIte_14, (MR_Integer) 1)));
#line 349 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__HasSubGoals_18;

#line 351 "rbmm.condition_renaming.m"
    {
#line 351 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__HasSubGoals_18 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__rbmm__condition_renaming__Expr_16);
    }
#line 389 "rbmm.condition_renaming.m"
#line 389 "rbmm.condition_renaming.m"
    switch (transform_hlds__rbmm__condition_renaming__HasSubGoals_18) {
#line 389 "rbmm.condition_renaming.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 389 "rbmm.condition_renaming.m"
      case (MR_Integer) 1:
#line 353 "rbmm.condition_renaming.m"
        {
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_47_47;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_48_48;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_49_49;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_56_56;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_57_57;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_19;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__RevGoalPath_21;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__LRBefore_22;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__LRAfter_23;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__RemovedAfterNodes_24;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__CreatedBeforeNodes_25;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__ResurRenaming_27;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__RemovedAfterRegions0_28;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__CreatedBeforeRegions0_29;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos_31;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__LeftRegions_32;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__RightRegions_33;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__RemovedAfterRegions_34;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__CreatedBeforeRegions_35;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__V_39_39;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__V_40_40;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__V_42_42;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__V_44_44;
#line 353 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__V_45_45;
#line 355 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__V_20_20;
#line 356 "rbmm.condition_renaming.m"
          MR_Box transform_hlds__rbmm__condition_renaming__conv0_LRBefore_22;
#line 357 "rbmm.condition_renaming.m"
          MR_Box transform_hlds__rbmm__condition_renaming__conv1_LRAfter_23;
#line 370 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__ResurRenaming0_26;
#line 368 "rbmm.condition_renaming.m"
          MR_Box transform_hlds__rbmm__condition_renaming__conv2_ResurRenaming0_26;
#line 373 "rbmm.condition_renaming.m"
          MR_Box transform_hlds__rbmm__condition_renaming__conv4_RemovedAfterRegions0_28;
#line 375 "rbmm.condition_renaming.m"
          MR_Box transform_hlds__rbmm__condition_renaming__conv5_CreatedBeforeRegions0_29;
#line 380 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos0_30;
#line 378 "rbmm.condition_renaming.m"
          MR_Box transform_hlds__rbmm__condition_renaming__conv6_ResurRenamingAnnos0_30;
#line 383 "rbmm.condition_renaming.m"
          MR_Box transform_hlds__rbmm__condition_renaming__conv10_LeftRegions_32;
#line 383 "rbmm.condition_renaming.m"
          MR_Box transform_hlds__rbmm__condition_renaming__conv9_RightRegions_33;

#line 354 "rbmm.condition_renaming.m"
          {
#line 354 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ProgPoint_19 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__condition_renaming__Info_17);
          }
#line 355 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__ProgPoint_19, (MR_Integer) 0)));
#line 355 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__RevGoalPath_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__ProgPoint_19, (MR_Integer) 1)));
#line 7018 "transform_hlds.rbmm.condition_renaming.c"
          transform_hlds__rbmm__condition_renaming__TypeCtorInfo_47_47 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 7020 "transform_hlds.rbmm.condition_renaming.c"
          transform_hlds__rbmm__condition_renaming__TypeInfo_48_48 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[3];
#line 356 "rbmm.condition_renaming.m"
          {
#line 356 "rbmm.condition_renaming.m"
            mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_47_47, transform_hlds__rbmm__condition_renaming__TypeInfo_48_48, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_19)), &transform_hlds__rbmm__condition_renaming__conv0_LRBefore_22);
          }
#line 356 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__LRBefore_22 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_LRBefore_22);
#line 357 "rbmm.condition_renaming.m"
          {
#line 357 "rbmm.condition_renaming.m"
            mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_47_47, transform_hlds__rbmm__condition_renaming__TypeInfo_48_48, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_19)), &transform_hlds__rbmm__condition_renaming__conv1_LRAfter_23);
          }
#line 357 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__LRAfter_23 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_LRAfter_23);
#line 7036 "transform_hlds.rbmm.condition_renaming.c"
          transform_hlds__rbmm__condition_renaming__TypeCtorInfo_49_49 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 361 "rbmm.condition_renaming.m"
          {
#line 361 "rbmm.condition_renaming.m"
            mercury__set__difference_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_49_49, transform_hlds__rbmm__condition_renaming__LRBefore_22, transform_hlds__rbmm__condition_renaming__LRAfter_23, &transform_hlds__rbmm__condition_renaming__RemovedAfterNodes_24);
          }
#line 362 "rbmm.condition_renaming.m"
          {
#line 362 "rbmm.condition_renaming.m"
            mercury__set__difference_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_49_49, transform_hlds__rbmm__condition_renaming__LRAfter_23, transform_hlds__rbmm__condition_renaming__LRBefore_22, &transform_hlds__rbmm__condition_renaming__CreatedBeforeNodes_25);
          }
#line 368 "rbmm.condition_renaming.m"
          {
#line 368 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_47_47, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2], transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_19)), &transform_hlds__rbmm__condition_renaming__conv2_ResurRenaming0_26);
          }
#line 368 "rbmm.condition_renaming.m"
          if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 368 "rbmm.condition_renaming.m"
            {
#line 368 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__ResurRenaming0_26 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_ResurRenaming0_26);
#line 368 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 368 "rbmm.condition_renaming.m"
            }
#line 370 "rbmm.condition_renaming.m"
          if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 369 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ResurRenaming_27 = transform_hlds__rbmm__condition_renaming__ResurRenaming0_26;
#line 370 "rbmm.condition_renaming.m"
          else
#line 371 "rbmm.condition_renaming.m"
            {
#line 371 "rbmm.condition_renaming.m"
              {
#line 371 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__ResurRenaming_27 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[1]);
              }
#line 371 "rbmm.condition_renaming.m"
            }
#line 373 "rbmm.condition_renaming.m"
          {
#line 373 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 373 "rbmm.condition_renaming.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_39_39, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[1]));
#line 373 "rbmm.condition_renaming.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_39_39, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_1));
#line 373 "rbmm.condition_renaming.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 373 "rbmm.condition_renaming.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_39_39, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_9));
#line 373 "rbmm.condition_renaming.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_39_39, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenaming_27));
#line 373 "rbmm.condition_renaming.m"
          }
#line 7094 "transform_hlds.rbmm.condition_renaming.c"
          transform_hlds__rbmm__condition_renaming__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 374 "rbmm.condition_renaming.m"
          {
#line 374 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__V_40_40 = mercury__set__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_56_56);
          }
#line 7101 "transform_hlds.rbmm.condition_renaming.c"
          transform_hlds__rbmm__condition_renaming__TypeInfo_57_57 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0];
#line 373 "rbmm.condition_renaming.m"
          {
#line 373 "rbmm.condition_renaming.m"
            mercury__set__fold_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_49_49, transform_hlds__rbmm__condition_renaming__TypeInfo_57_57, transform_hlds__rbmm__condition_renaming__V_39_39, transform_hlds__rbmm__condition_renaming__RemovedAfterNodes_24, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_40_40)), &transform_hlds__rbmm__condition_renaming__conv4_RemovedAfterRegions0_28);
          }
#line 373 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__RemovedAfterRegions0_28 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv4_RemovedAfterRegions0_28);
#line 376 "rbmm.condition_renaming.m"
          {
#line 376 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__V_42_42 = mercury__set__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_56_56);
          }
#line 375 "rbmm.condition_renaming.m"
          {
#line 375 "rbmm.condition_renaming.m"
            mercury__set__fold_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_49_49, transform_hlds__rbmm__condition_renaming__TypeInfo_57_57, transform_hlds__rbmm__condition_renaming__V_39_39, transform_hlds__rbmm__condition_renaming__CreatedBeforeNodes_25, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_42_42)), &transform_hlds__rbmm__condition_renaming__conv5_CreatedBeforeRegions0_29);
          }
#line 375 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__CreatedBeforeRegions0_29 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv5_CreatedBeforeRegions0_29);
#line 378 "rbmm.condition_renaming.m"
          {
#line 378 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_47_47, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[2], transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_19)), &transform_hlds__rbmm__condition_renaming__conv6_ResurRenamingAnnos0_30);
          }
#line 378 "rbmm.condition_renaming.m"
          if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 378 "rbmm.condition_renaming.m"
            {
#line 378 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos0_30 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv6_ResurRenamingAnnos0_30);
#line 378 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 378 "rbmm.condition_renaming.m"
            }
#line 380 "rbmm.condition_renaming.m"
          if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 379 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos_31 = transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos0_30;
#line 380 "rbmm.condition_renaming.m"
          else
#line 381 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 384 "rbmm.condition_renaming.m"
          {
#line 384 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__V_44_44 = mercury__set__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_56_56);
          }
#line 384 "rbmm.condition_renaming.m"
          {
#line 384 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__V_45_45 = mercury__set__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_56_56);
          }
#line 383 "rbmm.condition_renaming.m"
          {
#line 383 "rbmm.condition_renaming.m"
            mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0, transform_hlds__rbmm__condition_renaming__TypeInfo_57_57, transform_hlds__rbmm__condition_renaming__TypeInfo_57_57, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[9], transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos_31, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_44_44)), &transform_hlds__rbmm__condition_renaming__conv10_LeftRegions_32, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_45_45)), &transform_hlds__rbmm__condition_renaming__conv9_RightRegions_33);
          }
#line 383 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__LeftRegions_32 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv10_LeftRegions_32);
#line 383 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__RightRegions_33 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv9_RightRegions_33);
#line 385 "rbmm.condition_renaming.m"
          {
#line 385 "rbmm.condition_renaming.m"
            mercury__set__union_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_56_56, transform_hlds__rbmm__condition_renaming__RemovedAfterRegions0_28, transform_hlds__rbmm__condition_renaming__RightRegions_33, &transform_hlds__rbmm__condition_renaming__RemovedAfterRegions_34);
          }
#line 386 "rbmm.condition_renaming.m"
          {
#line 386 "rbmm.condition_renaming.m"
            mercury__set__union_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_56_56, transform_hlds__rbmm__condition_renaming__CreatedBeforeRegions0_29, transform_hlds__rbmm__condition_renaming__LeftRegions_32, &transform_hlds__rbmm__condition_renaming__CreatedBeforeRegions_35);
          }
#line 387 "rbmm.condition_renaming.m"
          {
#line 387 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_p_0(transform_hlds__rbmm__condition_renaming__RevGoalPath_21, transform_hlds__rbmm__condition_renaming__CreatedBeforeRegions_35, transform_hlds__rbmm__condition_renaming__RemovedAfterRegions_34, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_36, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_37);
#line 387 "rbmm.condition_renaming.m"
            return;
          }
#line 353 "rbmm.condition_renaming.m"
        }
#line 389 "rbmm.condition_renaming.m"
        break;
#line 389 "rbmm.condition_renaming.m"
      case (MR_Integer) 0:
#line 391 "rbmm.condition_renaming.m"
        {
#line 391 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__GoalInIte_14, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_36, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_37);
#line 391 "rbmm.condition_renaming.m"
          return;
        }
#line 389 "rbmm.condition_renaming.m"
        break;
#line 389 "rbmm.condition_renaming.m"
    }
#line 349 "rbmm.condition_renaming.m"
  }
#line 342 "rbmm.condition_renaming.m"
}

#line 328 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_case_10_p_0(
#line 328 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_11,
#line 328 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_12,
#line 328 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_13,
#line 328 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_14,
#line 328 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_15,
#line 328 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_16,
#line 328 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_22,
#line 328 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_23,
#line 328 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_24,
#line 328 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_25)
#line 328 "rbmm.condition_renaming.m"
{
#line 336 "rbmm.condition_renaming.m"
  {
#line 336 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 336 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_16, (MR_Integer) 2)));
#line 336 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Expr_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Goal_21, (MR_Integer) 0)));
#line 337 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_16, (MR_Integer) 0)));
#line 337 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_16, (MR_Integer) 1)));
#line 240 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Goal_21, (MR_Integer) 1)));

#line 241 "rbmm.condition_renaming.m"
    {
#line 241 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0(transform_hlds__rbmm__condition_renaming__Graph_11, transform_hlds__rbmm__condition_renaming__LRBeforeProc_12, transform_hlds__rbmm__condition_renaming__LRAfterProc_13, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_14, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_15, transform_hlds__rbmm__condition_renaming__Expr_40, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_22, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_23, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_24, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_25);
#line 241 "rbmm.condition_renaming.m"
      return;
    }
#line 336 "rbmm.condition_renaming.m"
  }
#line 328 "rbmm.condition_renaming.m"
}

#line 273 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_3(
#line 273 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 273 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 273 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 273 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 273 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 273 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5)
#line 273 "rbmm.condition_renaming.m"
{
#line 273 "rbmm.condition_renaming.m"
  {
#line 273 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 273 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv9_STATE_VARIABLE_NonLocalRegionProc_23;
#line 273 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv8_STATE_VARIABLE_InCondRegionsProc_25;

#line 273 "rbmm.condition_renaming.m"
    {
#line 273 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_case_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv9_STATE_VARIABLE_NonLocalRegionProc_23, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_4), &transform_hlds__rbmm__condition_renaming__conv8_STATE_VARIABLE_InCondRegionsProc_25);
    }
#line 273 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv9_STATE_VARIABLE_NonLocalRegionProc_23));
#line 273 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv8_STATE_VARIABLE_InCondRegionsProc_25));
#line 273 "rbmm.condition_renaming.m"
  }
#line 273 "rbmm.condition_renaming.m"
}

#line 281 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_2(
#line 281 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 281 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 281 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 281 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 281 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 281 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5)
#line 281 "rbmm.condition_renaming.m"
{
#line 281 "rbmm.condition_renaming.m"
  {
#line 281 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 281 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_NonLocalRegionsProc_22;
#line 281 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_InCondRegionsProc_24;

#line 281 "rbmm.condition_renaming.m"
    {
#line 281 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_NonLocalRegionsProc_22, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_4), &transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_InCondRegionsProc_24);
    }
#line 281 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_NonLocalRegionsProc_22));
#line 281 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_InCondRegionsProc_24));
#line 281 "rbmm.condition_renaming.m"
  }
#line 281 "rbmm.condition_renaming.m"
}

#line 256 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_1(
#line 256 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 256 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 256 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 256 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 256 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 256 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5)
#line 256 "rbmm.condition_renaming.m"
{
#line 256 "rbmm.condition_renaming.m"
  {
#line 256 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 256 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsProc_22;
#line 256 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsProc_24;

#line 256 "rbmm.condition_renaming.m"
    {
#line 256 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsProc_22, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_4), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsProc_24);
    }
#line 256 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsProc_22));
#line 256 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsProc_24));
#line 256 "rbmm.condition_renaming.m"
  }
#line 256 "rbmm.condition_renaming.m"
}

#line 245 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0(
#line 245 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_1,
#line 245 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_2,
#line 245 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_3,
#line 245 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4,
#line 245 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5,
#line 245 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__6_6,
#line 245 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__7_7,
#line 245 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__HeadVar__8_8,
#line 245 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9,
#line 245 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10)
#line 245 "rbmm.condition_renaming.m"
{
#line 254 "rbmm.condition_renaming.m"
  {
#line 254 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 254 "rbmm.condition_renaming.m"
#line 254 "rbmm.condition_renaming.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__HeadVar__6_6)) {
#line 254 "rbmm.condition_renaming.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 254 "rbmm.condition_renaming.m"
      case (MR_Integer) 0:
#line 287 "rbmm.condition_renaming.m"
        {
#line 287 "rbmm.condition_renaming.m"
          MR_Word transform_hlds__rbmm__condition_renaming__Goal_115 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__condition_renaming__HeadVar__6_6), (MR_Integer) 0);

#line 288 "rbmm.condition_renaming.m"
          {
#line 288 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(transform_hlds__rbmm__condition_renaming__Graph_1, transform_hlds__rbmm__condition_renaming__LRBeforeProc_2, transform_hlds__rbmm__condition_renaming__LRAfterProc_3, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5, transform_hlds__rbmm__condition_renaming__Goal_115, transform_hlds__rbmm__condition_renaming__HeadVar__7_7, transform_hlds__rbmm__condition_renaming__HeadVar__8_8, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10);
#line 288 "rbmm.condition_renaming.m"
            return;
          }
#line 287 "rbmm.condition_renaming.m"
        }
#line 254 "rbmm.condition_renaming.m"
        break;
#line 254 "rbmm.condition_renaming.m"
      case (MR_Integer) 1:
#line 291 "rbmm.condition_renaming.m"
        {
#line 292 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9;
#line 292 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__HeadVar__8_8 = transform_hlds__rbmm__condition_renaming__HeadVar__7_7;
#line 291 "rbmm.condition_renaming.m"
        }
#line 254 "rbmm.condition_renaming.m"
        break;
#line 254 "rbmm.condition_renaming.m"
      case (MR_Integer) 2:
#line 260 "rbmm.condition_renaming.m"
        {
#line 262 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9;
#line 262 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__HeadVar__8_8 = transform_hlds__rbmm__condition_renaming__HeadVar__7_7;
#line 260 "rbmm.condition_renaming.m"
        }
#line 254 "rbmm.condition_renaming.m"
        break;
#line 254 "rbmm.condition_renaming.m"
      case (MR_Integer) 3:
#line 254 "rbmm.condition_renaming.m"
#line 254 "rbmm.condition_renaming.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 0)))) {
#line 254 "rbmm.condition_renaming.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 254 "rbmm.condition_renaming.m"
          case (MR_Integer) 0:
#line 263 "rbmm.condition_renaming.m"
            {
#line 265 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9;
#line 265 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__HeadVar__8_8 = transform_hlds__rbmm__condition_renaming__HeadVar__7_7;
#line 263 "rbmm.condition_renaming.m"
            }
#line 254 "rbmm.condition_renaming.m"
            break;
#line 254 "rbmm.condition_renaming.m"
          case (MR_Integer) 1:
#line 266 "rbmm.condition_renaming.m"
            {
#line 268 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9;
#line 268 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__HeadVar__8_8 = transform_hlds__rbmm__condition_renaming__HeadVar__7_7;
#line 266 "rbmm.condition_renaming.m"
            }
#line 254 "rbmm.condition_renaming.m"
            break;
#line 254 "rbmm.condition_renaming.m"
          case (MR_Integer) 2:
#line 254 "rbmm.condition_renaming.m"
            {
#line 254 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_198_198;
#line 254 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Conjs_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 2)));
#line 254 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_24_24;
#line 253 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 1)));
#line 255 "rbmm.condition_renaming.m"
              MR_Box transform_hlds__rbmm__condition_renaming__conv3_HeadVar__8_8;
#line 255 "rbmm.condition_renaming.m"
              MR_Box transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsProc_10;

#line 256 "rbmm.condition_renaming.m"
              {
#line 256 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 256 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_24_24, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_8[0]));
#line 256 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_24_24, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_1));
#line 256 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 256 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_24_24, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_1));
#line 256 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_24_24, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_2));
#line 256 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_24_24, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_3));
#line 256 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_24_24, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4));
#line 256 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_24_24, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5));
#line 256 "rbmm.condition_renaming.m"
              }
#line 7522 "transform_hlds.rbmm.condition_renaming.c"
              transform_hlds__rbmm__condition_renaming__TypeInfo_198_198 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0];
#line 255 "rbmm.condition_renaming.m"
              {
#line 255 "rbmm.condition_renaming.m"
                mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__condition_renaming__TypeInfo_198_198, transform_hlds__rbmm__condition_renaming__TypeInfo_198_198, transform_hlds__rbmm__condition_renaming__V_24_24, transform_hlds__rbmm__condition_renaming__Conjs_17, ((MR_Box) (transform_hlds__rbmm__condition_renaming__HeadVar__7_7)), &transform_hlds__rbmm__condition_renaming__conv3_HeadVar__8_8, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9)), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsProc_10);
              }
#line 255 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__HeadVar__8_8 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_HeadVar__8_8);
#line 255 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsProc_10);
#line 254 "rbmm.condition_renaming.m"
            }
#line 254 "rbmm.condition_renaming.m"
            break;
#line 254 "rbmm.condition_renaming.m"
          case (MR_Integer) 3:
#line 279 "rbmm.condition_renaming.m"
            {
#line 279 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_212_212;
#line 279 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Disjs_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 1)));
#line 279 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_107_107;
#line 280 "rbmm.condition_renaming.m"
              MR_Box transform_hlds__rbmm__condition_renaming__conv7_HeadVar__8_8;
#line 280 "rbmm.condition_renaming.m"
              MR_Box transform_hlds__rbmm__condition_renaming__conv6_STATE_VARIABLE_InCondRegionsProc_10;

#line 281 "rbmm.condition_renaming.m"
              {
#line 281 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 281 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_107_107, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_8[0]));
#line 281 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_107_107, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_2));
#line 281 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_107_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 281 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_107_107, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_1));
#line 281 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_107_107, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_2));
#line 281 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_107_107, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_3));
#line 281 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_107_107, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4));
#line 281 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_107_107, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5));
#line 281 "rbmm.condition_renaming.m"
              }
#line 7574 "transform_hlds.rbmm.condition_renaming.c"
              transform_hlds__rbmm__condition_renaming__TypeInfo_212_212 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0];
#line 280 "rbmm.condition_renaming.m"
              {
#line 280 "rbmm.condition_renaming.m"
                mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__condition_renaming__TypeInfo_212_212, transform_hlds__rbmm__condition_renaming__TypeInfo_212_212, transform_hlds__rbmm__condition_renaming__V_107_107, transform_hlds__rbmm__condition_renaming__Disjs_100, ((MR_Box) (transform_hlds__rbmm__condition_renaming__HeadVar__7_7)), &transform_hlds__rbmm__condition_renaming__conv7_HeadVar__8_8, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9)), &transform_hlds__rbmm__condition_renaming__conv6_STATE_VARIABLE_InCondRegionsProc_10);
              }
#line 280 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__HeadVar__8_8 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv7_HeadVar__8_8);
#line 280 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv6_STATE_VARIABLE_InCondRegionsProc_10);
#line 279 "rbmm.condition_renaming.m"
            }
#line 254 "rbmm.condition_renaming.m"
            break;
#line 254 "rbmm.condition_renaming.m"
          case (MR_Integer) 4:
#line 271 "rbmm.condition_renaming.m"
            {
#line 271 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_205_205;
#line 271 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Cases_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 3)));
#line 271 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_92_92;
#line 270 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 1)));
#line 270 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 2)));
#line 272 "rbmm.condition_renaming.m"
              MR_Box transform_hlds__rbmm__condition_renaming__conv11_HeadVar__8_8;
#line 272 "rbmm.condition_renaming.m"
              MR_Box transform_hlds__rbmm__condition_renaming__conv10_STATE_VARIABLE_InCondRegionsProc_10;

#line 273 "rbmm.condition_renaming.m"
              {
#line 273 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 273 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_92_92, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_8[1]));
#line 273 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_92_92, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_3));
#line 273 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_92_92, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 273 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_92_92, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_1));
#line 273 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_92_92, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_2));
#line 273 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_92_92, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_3));
#line 273 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_92_92, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4));
#line 273 "rbmm.condition_renaming.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_92_92, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5));
#line 273 "rbmm.condition_renaming.m"
              }
#line 7630 "transform_hlds.rbmm.condition_renaming.c"
              transform_hlds__rbmm__condition_renaming__TypeInfo_205_205 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0];
#line 272 "rbmm.condition_renaming.m"
              {
#line 272 "rbmm.condition_renaming.m"
                mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, transform_hlds__rbmm__condition_renaming__TypeInfo_205_205, transform_hlds__rbmm__condition_renaming__TypeInfo_205_205, transform_hlds__rbmm__condition_renaming__V_92_92, transform_hlds__rbmm__condition_renaming__Cases_85, ((MR_Box) (transform_hlds__rbmm__condition_renaming__HeadVar__7_7)), &transform_hlds__rbmm__condition_renaming__conv11_HeadVar__8_8, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9)), &transform_hlds__rbmm__condition_renaming__conv10_STATE_VARIABLE_InCondRegionsProc_10);
              }
#line 272 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__HeadVar__8_8 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv11_HeadVar__8_8);
#line 272 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv10_STATE_VARIABLE_InCondRegionsProc_10);
#line 271 "rbmm.condition_renaming.m"
            }
#line 254 "rbmm.condition_renaming.m"
            break;
#line 254 "rbmm.condition_renaming.m"
          case (MR_Integer) 5:
#line 295 "rbmm.condition_renaming.m"
            {
#line 295 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Goal_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 2)));
#line 294 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 1)));

#line 298 "rbmm.condition_renaming.m"
              {
#line 298 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(transform_hlds__rbmm__condition_renaming__Graph_1, transform_hlds__rbmm__condition_renaming__LRBeforeProc_2, transform_hlds__rbmm__condition_renaming__LRAfterProc_3, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5, transform_hlds__rbmm__condition_renaming__Goal_146, transform_hlds__rbmm__condition_renaming__HeadVar__7_7, transform_hlds__rbmm__condition_renaming__HeadVar__8_8, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10);
#line 298 "rbmm.condition_renaming.m"
                return;
              }
#line 295 "rbmm.condition_renaming.m"
            }
#line 254 "rbmm.condition_renaming.m"
            break;
#line 254 "rbmm.condition_renaming.m"
          case (MR_Integer) 6:
#line 303 "rbmm.condition_renaming.m"
            {
#line 303 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Cond_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 2)));
#line 303 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Then_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 3)));
#line 303 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Else_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 4)));
#line 303 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_171_171;
#line 303 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_172_172;
#line 303 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_173_173;
#line 303 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_174_174;
#line 304 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 1)));

#line 307 "rbmm.condition_renaming.m"
              {
#line 307 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_1, transform_hlds__rbmm__condition_renaming__LRBeforeProc_2, transform_hlds__rbmm__condition_renaming__LRAfterProc_3, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5, transform_hlds__rbmm__condition_renaming__Cond_164, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_171_171);
              }
#line 314 "rbmm.condition_renaming.m"
              {
#line 314 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(transform_hlds__rbmm__condition_renaming__Graph_1, transform_hlds__rbmm__condition_renaming__LRBeforeProc_2, transform_hlds__rbmm__condition_renaming__LRAfterProc_3, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5, transform_hlds__rbmm__condition_renaming__Cond_164, transform_hlds__rbmm__condition_renaming__HeadVar__7_7, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_172_172, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_171_171, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_173_173);
              }
#line 317 "rbmm.condition_renaming.m"
              {
#line 317 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(transform_hlds__rbmm__condition_renaming__Graph_1, transform_hlds__rbmm__condition_renaming__LRBeforeProc_2, transform_hlds__rbmm__condition_renaming__LRAfterProc_3, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5, transform_hlds__rbmm__condition_renaming__Then_165, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_172_172, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_174_174, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_173_173, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10);
              }
#line 320 "rbmm.condition_renaming.m"
              {
#line 320 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_1, transform_hlds__rbmm__condition_renaming__LRBeforeProc_2, transform_hlds__rbmm__condition_renaming__LRAfterProc_3, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5, transform_hlds__rbmm__condition_renaming__Else_166, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_174_174, transform_hlds__rbmm__condition_renaming__HeadVar__8_8);
#line 320 "rbmm.condition_renaming.m"
                return;
              }
#line 303 "rbmm.condition_renaming.m"
            }
#line 254 "rbmm.condition_renaming.m"
            break;
#line 254 "rbmm.condition_renaming.m"
          case (MR_Integer) 7:
#line 324 "rbmm.condition_renaming.m"
            {
#line 326 "rbmm.condition_renaming.m"
              {
#line 326 "rbmm.condition_renaming.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_and_in_cond_regions_expr\'/10", (MR_String) "shorthand");
#line 326 "rbmm.condition_renaming.m"
                return;
              }
#line 324 "rbmm.condition_renaming.m"
            }
#line 254 "rbmm.condition_renaming.m"
            break;
#line 254 "rbmm.condition_renaming.m"
        }
#line 254 "rbmm.condition_renaming.m"
        break;
#line 254 "rbmm.condition_renaming.m"
    }
#line 254 "rbmm.condition_renaming.m"
  }
#line 245 "rbmm.condition_renaming.m"
}

#line 231 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(
#line 231 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_11,
#line 231 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_12,
#line 231 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_13,
#line 231 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_14,
#line 231 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_15,
#line 231 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Goal_16,
#line 231 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsProc_0_21,
#line 231 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsProc_22,
#line 231 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_23,
#line 231 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_24)
#line 231 "rbmm.condition_renaming.m"
{
#line 239 "rbmm.condition_renaming.m"
  {
#line 239 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 239 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Expr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Goal_16, (MR_Integer) 0)));
#line 240 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Goal_16, (MR_Integer) 1)));

#line 241 "rbmm.condition_renaming.m"
    {
#line 241 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0(transform_hlds__rbmm__condition_renaming__Graph_11, transform_hlds__rbmm__condition_renaming__LRBeforeProc_12, transform_hlds__rbmm__condition_renaming__LRAfterProc_13, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_14, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_15, transform_hlds__rbmm__condition_renaming__Expr_19, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsProc_0_21, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsProc_22, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_23, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_24);
#line 241 "rbmm.condition_renaming.m"
      return;
    }
#line 239 "rbmm.condition_renaming.m"
  }
#line 231 "rbmm.condition_renaming.m"
}

#line 182 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_12_p_0(
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ModuleInfo_13,
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PredId_14,
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_15,
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeTable_16,
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterTable_17,
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingTable_18,
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoTable_19,
#line 182 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__ProcId_20,
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_0_37,
#line 182 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_38,
#line 182 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_0_39,
#line 182 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_40)
#line 182 "rbmm.condition_renaming.m"
{
#line 193 "rbmm.condition_renaming.m"
  {
#line 193 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 193 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__PPId_23;
#line 195 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_41_41;

#line 194 "rbmm.condition_renaming.m"
    {
#line 194 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__PPId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 194 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__PPId_23, 0) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__PredId_14));
#line 194 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__PPId_23, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProcId_20));
#line 194 "rbmm.condition_renaming.m"
    }
#line 195 "rbmm.condition_renaming.m"
    {
#line 195 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__V_41_41, 0) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_23));
#line 195 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 195 "rbmm.condition_renaming.m"
    }
#line 195 "rbmm.condition_renaming.m"
    {
#line 195 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__condition_renaming__V_41_41, transform_hlds__rbmm__condition_renaming__ModuleInfo_13);
    }
#line 197 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 196 "rbmm.condition_renaming.m"
      {
#line 196 "rbmm.condition_renaming.m"
        *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_40 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_0_39;
#line 196 "rbmm.condition_renaming.m"
        *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_38 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_0_37;
#line 196 "rbmm.condition_renaming.m"
      }
#line 197 "rbmm.condition_renaming.m"
    else
#line 198 "rbmm.condition_renaming.m"
      {
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_52_52;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_59_59;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_60_60;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ProcInfo0_24;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ProcInfo_25;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__Goal_26;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__Graph_27;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_29;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_30;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_32;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_34;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_35;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__InCondRegionsProc_36;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_43_43;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_44_44;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_45_45;
#line 198 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__Expr_75;
#line 201 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv0_V_43_43;
#line 201 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_28_28;
#line 202 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv1_LRBeforeProc_29;
#line 203 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv2_LRAfterProc_30;
#line 206 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc0_31;
#line 204 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv3_ResurRenamingProc0_31;
#line 211 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc0_33;
#line 209 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv4_ResurRenamingAnnoProc0_33;
#line 240 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_76_76;
#line 219 "rbmm.condition_renaming.m"
        MR_Integer transform_hlds__rbmm__condition_renaming__V_46_46;
#line 224 "rbmm.condition_renaming.m"
        MR_Integer transform_hlds__rbmm__condition_renaming__V_48_48;

#line 198 "rbmm.condition_renaming.m"
        {
#line 198 "rbmm.condition_renaming.m"
          hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__condition_renaming__ModuleInfo_13, transform_hlds__rbmm__condition_renaming__PPId_23, &transform_hlds__rbmm__condition_renaming__ProcInfo0_24);
        }
#line 199 "rbmm.condition_renaming.m"
        {
#line 199 "rbmm.condition_renaming.m"
          hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(transform_hlds__rbmm__condition_renaming__ModuleInfo_13, transform_hlds__rbmm__condition_renaming__ProcInfo0_24, &transform_hlds__rbmm__condition_renaming__ProcInfo_25);
        }
#line 200 "rbmm.condition_renaming.m"
        {
#line 200 "rbmm.condition_renaming.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__condition_renaming__ProcInfo_25, &transform_hlds__rbmm__condition_renaming__Goal_26);
        }
#line 7935 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 201 "rbmm.condition_renaming.m"
        {
#line 201 "rbmm.condition_renaming.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__condition_renaming__RptaInfoTable_15, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_23)), &transform_hlds__rbmm__condition_renaming__conv0_V_43_43);
        }
#line 201 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__V_43_43 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_V_43_43);
#line 201 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__Graph_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_43_43, (MR_Integer) 0)));
#line 201 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_43_43, (MR_Integer) 1)));
#line 7948 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeInfo_52_52 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[7];
#line 202 "rbmm.condition_renaming.m"
        {
#line 202 "rbmm.condition_renaming.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50, transform_hlds__rbmm__condition_renaming__TypeInfo_52_52, transform_hlds__rbmm__condition_renaming__LRBeforeTable_16, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_23)), &transform_hlds__rbmm__condition_renaming__conv1_LRBeforeProc_29);
        }
#line 202 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__LRBeforeProc_29 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_LRBeforeProc_29);
#line 203 "rbmm.condition_renaming.m"
        {
#line 203 "rbmm.condition_renaming.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50, transform_hlds__rbmm__condition_renaming__TypeInfo_52_52, transform_hlds__rbmm__condition_renaming__LRAfterTable_17, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_23)), &transform_hlds__rbmm__condition_renaming__conv2_LRAfterProc_30);
        }
#line 203 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__LRAfterProc_30 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_LRAfterProc_30);
#line 204 "rbmm.condition_renaming.m"
        {
#line 204 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], transform_hlds__rbmm__condition_renaming__ResurRenamingTable_18, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_23)), &transform_hlds__rbmm__condition_renaming__conv3_ResurRenamingProc0_31);
        }
#line 204 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 204 "rbmm.condition_renaming.m"
          {
#line 204 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ResurRenamingProc0_31 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_ResurRenamingProc0_31);
#line 204 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 204 "rbmm.condition_renaming.m"
          }
#line 206 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 205 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__ResurRenamingProc_32 = transform_hlds__rbmm__condition_renaming__ResurRenamingProc0_31;
#line 206 "rbmm.condition_renaming.m"
        else
#line 207 "rbmm.condition_renaming.m"
          {
#line 207 "rbmm.condition_renaming.m"
            {
#line 207 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__ResurRenamingProc_32 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2]);
            }
#line 207 "rbmm.condition_renaming.m"
          }
#line 209 "rbmm.condition_renaming.m"
        {
#line 209 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[5], transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoTable_19, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_23)), &transform_hlds__rbmm__condition_renaming__conv4_ResurRenamingAnnoProc0_33);
        }
#line 209 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 209 "rbmm.condition_renaming.m"
          {
#line 209 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc0_33 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv4_ResurRenamingAnnoProc0_33);
#line 209 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 209 "rbmm.condition_renaming.m"
          }
#line 211 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 210 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_34 = transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc0_33;
#line 211 "rbmm.condition_renaming.m"
        else
#line 212 "rbmm.condition_renaming.m"
          {
#line 212 "rbmm.condition_renaming.m"
            {
#line 212 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_34 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[2]);
            }
#line 212 "rbmm.condition_renaming.m"
          }
#line 8024 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeCtorInfo_59_59 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
#line 8026 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeInfo_60_60 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0];
#line 217 "rbmm.condition_renaming.m"
        {
#line 217 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_44_44 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_59_59, transform_hlds__rbmm__condition_renaming__TypeInfo_60_60);
        }
#line 218 "rbmm.condition_renaming.m"
        {
#line 218 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_45_45 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_59_59, transform_hlds__rbmm__condition_renaming__TypeInfo_60_60);
        }
#line 240 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__Expr_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Goal_26, (MR_Integer) 0)));
#line 240 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Goal_26, (MR_Integer) 1)));
#line 241 "rbmm.condition_renaming.m"
        {
#line 241 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0(transform_hlds__rbmm__condition_renaming__Graph_27, transform_hlds__rbmm__condition_renaming__LRBeforeProc_29, transform_hlds__rbmm__condition_renaming__LRAfterProc_30, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_32, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_34, transform_hlds__rbmm__condition_renaming__Expr_75, transform_hlds__rbmm__condition_renaming__V_44_44, &transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_35, transform_hlds__rbmm__condition_renaming__V_45_45, &transform_hlds__rbmm__condition_renaming__InCondRegionsProc_36);
        }
#line 219 "rbmm.condition_renaming.m"
        {
#line 219 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_46_46 = mercury__map__count_1_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_59_59, transform_hlds__rbmm__condition_renaming__TypeInfo_60_60, transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_35);
        }
#line 219 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = (transform_hlds__rbmm__condition_renaming__V_46_46 == (MR_Integer) 0);
#line 221 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 221 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_38 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_0_37;
#line 221 "rbmm.condition_renaming.m"
        else
#line 222 "rbmm.condition_renaming.m"
          {
#line 222 "rbmm.condition_renaming.m"
            {
#line 222 "rbmm.condition_renaming.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_23)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_35)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_0_37, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_38);
            }
#line 222 "rbmm.condition_renaming.m"
          }
#line 224 "rbmm.condition_renaming.m"
        {
#line 224 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_48_48 = mercury__map__count_1_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_59_59, transform_hlds__rbmm__condition_renaming__TypeInfo_60_60, transform_hlds__rbmm__condition_renaming__InCondRegionsProc_36);
        }
#line 224 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = (transform_hlds__rbmm__condition_renaming__V_48_48 == (MR_Integer) 0);
#line 226 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 226 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_40 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_0_39;
#line 226 "rbmm.condition_renaming.m"
        else
#line 227 "rbmm.condition_renaming.m"
          {
#line 227 "rbmm.condition_renaming.m"
            {
#line 227 "rbmm.condition_renaming.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_23)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__InCondRegionsProc_36)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_0_39, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_40);
#line 227 "rbmm.condition_renaming.m"
              return;
            }
#line 227 "rbmm.condition_renaming.m"
          }
#line 198 "rbmm.condition_renaming.m"
      }
#line 193 "rbmm.condition_renaming.m"
  }
#line 182 "rbmm.condition_renaming.m"
}

#line 177 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0_1(
#line 177 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 177 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 177 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 177 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 177 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 177 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5)
#line 177 "rbmm.condition_renaming.m"
{
#line 177 "rbmm.condition_renaming.m"
  {
#line 177 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 177 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsTable_38;
#line 177 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsTable_40;

#line 177 "rbmm.condition_renaming.m"
    {
#line 177 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 9))), ((MR_Integer) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsTable_38, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_4), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsTable_40);
    }
#line 177 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsTable_38));
#line 177 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsTable_40));
#line 177 "rbmm.condition_renaming.m"
  }
#line 177 "rbmm.condition_renaming.m"
}

#line 163 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0(
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ModuleInfo_12,
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_13,
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeTable_14,
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterTable_15,
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingTable_16,
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoTable_17,
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PredId_18,
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_0_23,
#line 163 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_24,
#line 163 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_0_25,
#line 163 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_26)
#line 163 "rbmm.condition_renaming.m"
{
#line 174 "rbmm.condition_renaming.m"
  {
#line 174 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 174 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_36_36;
#line 174 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__PredInfo_21;
#line 174 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__ProcIds_22;
#line 174 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_27_27;
#line 177 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_NonLocalRegionsTable_24;
#line 177 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsTable_26;

#line 175 "rbmm.condition_renaming.m"
    {
#line 175 "rbmm.condition_renaming.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__condition_renaming__ModuleInfo_12, transform_hlds__rbmm__condition_renaming__PredId_18, &transform_hlds__rbmm__condition_renaming__PredInfo_21);
    }
#line 176 "rbmm.condition_renaming.m"
    {
#line 176 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__ProcIds_22 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__condition_renaming__PredInfo_21);
    }
#line 177 "rbmm.condition_renaming.m"
    {
#line 177 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 177 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_7[0]));
#line 177 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0_1));
#line 177 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 177 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ModuleInfo_12));
#line 177 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__PredId_18));
#line 177 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__RptaInfoTable_13));
#line 177 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeTable_14));
#line 177 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterTable_15));
#line 177 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 8) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingTable_16));
#line 177 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 9) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoTable_17));
#line 177 "rbmm.condition_renaming.m"
    }
#line 8220 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeInfo_36_36 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[1];
#line 177 "rbmm.condition_renaming.m"
    {
#line 177 "rbmm.condition_renaming.m"
      mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__rbmm__condition_renaming__TypeInfo_36_36, transform_hlds__rbmm__condition_renaming__TypeInfo_36_36, transform_hlds__rbmm__condition_renaming__V_27_27, transform_hlds__rbmm__condition_renaming__ProcIds_22, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_0_23)), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_NonLocalRegionsTable_24, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_0_25)), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsTable_26);
    }
#line 177 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_24 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_NonLocalRegionsTable_24);
#line 177 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_26 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsTable_26);
#line 174 "rbmm.condition_renaming.m"
  }
#line 163 "rbmm.condition_renaming.m"
}

#line 1028 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_6_p_0_1(
#line 1028 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 1028 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1028 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1028 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 1028 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 1028 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_5,
#line 1028 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_6)
#line 1028 "rbmm.condition_renaming.m"
{
#line 1028 "rbmm.condition_renaming.m"
  {
#line 1028 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 1028 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingTable_23;
#line 1028 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteAnnotationTable_25;

#line 1028 "rbmm.condition_renaming.m"
    {
#line 1028 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_3), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingTable_23, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_5), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteAnnotationTable_25);
    }
#line 1028 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingTable_23));
#line 1028 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteAnnotationTable_25));
#line 1028 "rbmm.condition_renaming.m"
  }
#line 1028 "rbmm.condition_renaming.m"
}

#line 129 "rbmm.condition_renaming.m"
void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_6_p_0(
#line 129 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionTable_7,
#line 129 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ExecPathTable_8,
#line 129 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_9,
#line 129 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_12,
#line 129 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_13,
#line 129 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__IteAnnotationTable_11)
#line 129 "rbmm.condition_renaming.m"
{
#line 1027 "rbmm.condition_renaming.m"
  {
#line 1027 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 1027 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23;
#line 1027 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_14_14;
#line 1027 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_16_16;
#line 1028 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingTable_13;
#line 1028 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv2_IteAnnotationTable_11;

#line 1028 "rbmm.condition_renaming.m"
    {
#line 1028 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1028 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[0]));
#line 1028 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_annotation_6_p_0_1));
#line 1028 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1028 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ExecPathTable_8));
#line 1028 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__RptaInfoTable_9));
#line 1028 "rbmm.condition_renaming.m"
    }
#line 8326 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 1030 "rbmm.condition_renaming.m"
    {
#line 1030 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_16_16 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[5]);
    }
#line 1028 "rbmm.condition_renaming.m"
    {
#line 1028 "rbmm.condition_renaming.m"
      mercury__map__foldl2_6_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[4], (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[6], transform_hlds__rbmm__condition_renaming__V_14_14, transform_hlds__rbmm__condition_renaming__IteRenamedRegionTable_7, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_12)), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingTable_13, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_16_16)), &transform_hlds__rbmm__condition_renaming__conv2_IteAnnotationTable_11);
    }
#line 1028 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_13 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingTable_13);
#line 1028 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__IteAnnotationTable_11 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_IteAnnotationTable_11);
#line 1027 "rbmm.condition_renaming.m"
  }
#line 129 "rbmm.condition_renaming.m"
}

#line 800 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_p_0_1(
#line 800 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 800 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 800 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 800 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 800 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4)
#line 800 "rbmm.condition_renaming.m"
{
#line 800 "rbmm.condition_renaming.m"
  {
#line 800 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 800 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingTable_20;

#line 800 "rbmm.condition_renaming.m"
    {
#line 800 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_3), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingTable_20);
    }
#line 800 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingTable_20));
#line 800 "rbmm.condition_renaming.m"
  }
#line 800 "rbmm.condition_renaming.m"
}

#line 101 "rbmm.condition_renaming.m"
void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_p_0(
#line 101 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ModuleInfo_5,
#line 101 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_6,
#line 101 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionTable_7,
#line 101 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__IteRenamingTable_8)
#line 101 "rbmm.condition_renaming.m"
{
#line 799 "rbmm.condition_renaming.m"
  {
#line 799 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 799 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_15_15;
#line 799 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_9_9;
#line 799 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_10_10;
#line 800 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv1_IteRenamingTable_8;

#line 800 "rbmm.condition_renaming.m"
    {
#line 800 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 800 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_9_9, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_5[0]));
#line 800 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_9_9, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_p_0_1));
#line 800 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 800 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_9_9, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ModuleInfo_5));
#line 800 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_9_9, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__RptaInfoTable_6));
#line 800 "rbmm.condition_renaming.m"
    }
#line 8423 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeCtorInfo_15_15 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 801 "rbmm.condition_renaming.m"
    {
#line 801 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_10_10 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_15_15, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3]);
    }
#line 800 "rbmm.condition_renaming.m"
    {
#line 800 "rbmm.condition_renaming.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_15_15, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[4], transform_hlds__rbmm__condition_renaming__V_9_9, transform_hlds__rbmm__condition_renaming__IteRenamedRegionTable_7, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_10_10)), &transform_hlds__rbmm__condition_renaming__conv1_IteRenamingTable_8);
    }
#line 800 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__IteRenamingTable_8 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_IteRenamingTable_8);
#line 799 "rbmm.condition_renaming.m"
  }
#line 101 "rbmm.condition_renaming.m"
}

#line 754 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_p_0_1(
#line 754 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 754 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 754 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 754 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 754 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4)
#line 754 "rbmm.condition_renaming.m"
{
#line 754 "rbmm.condition_renaming.m"
  {
#line 754 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 754 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamedRegionTable_13;

#line 754 "rbmm.condition_renaming.m"
    {
#line 754 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_3), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamedRegionTable_13);
    }
#line 754 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamedRegionTable_13));
#line 754 "rbmm.condition_renaming.m"
  }
#line 754 "rbmm.condition_renaming.m"
}

#line 87 "rbmm.condition_renaming.m"
void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_p_0(
#line 87 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__InCondRegionsTable_4,
#line 87 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegionsTable_5,
#line 87 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__IteRenamedRegionsTable_6)
#line 87 "rbmm.condition_renaming.m"
{
#line 753 "rbmm.condition_renaming.m"
  {
#line 753 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 753 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_13_13;
#line 753 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_14_14;
#line 753 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_7_7;
#line 753 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_8_8;
#line 754 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv1_IteRenamedRegionsTable_6;

#line 754 "rbmm.condition_renaming.m"
    {
#line 754 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 754 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_7_7, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[0]));
#line 754 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_7_7, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_p_0_1));
#line 754 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 754 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_7_7, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__NonLocalRegionsTable_5));
#line 754 "rbmm.condition_renaming.m"
    }
#line 8516 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 8518 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeInfo_14_14 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0];
#line 755 "rbmm.condition_renaming.m"
    {
#line 755 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_8_8 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_13_13, transform_hlds__rbmm__condition_renaming__TypeInfo_14_14);
    }
#line 754 "rbmm.condition_renaming.m"
    {
#line 754 "rbmm.condition_renaming.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_13_13, transform_hlds__rbmm__condition_renaming__TypeInfo_14_14, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[1], transform_hlds__rbmm__condition_renaming__V_7_7, transform_hlds__rbmm__condition_renaming__InCondRegionsTable_4, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_8_8)), &transform_hlds__rbmm__condition_renaming__conv1_IteRenamedRegionsTable_6);
    }
#line 754 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__IteRenamedRegionsTable_6 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_IteRenamedRegionsTable_6);
#line 753 "rbmm.condition_renaming.m"
  }
#line 87 "rbmm.condition_renaming.m"
}

#line 158 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_8_p_0_1(
#line 158 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 158 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 158 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 158 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 158 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 158 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5)
#line 158 "rbmm.condition_renaming.m"
{
#line 158 "rbmm.condition_renaming.m"
  {
#line 158 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 158 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsTable_24;
#line 158 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsTable_26;

#line 158 "rbmm.condition_renaming.m"
    {
#line 158 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 8))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsTable_24, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_4), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsTable_26);
    }
#line 158 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsTable_24));
#line 158 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsTable_26));
#line 158 "rbmm.condition_renaming.m"
  }
#line 158 "rbmm.condition_renaming.m"
}

#line 75 "rbmm.condition_renaming.m"
void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_8_p_0(
#line 75 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ModuleInfo_9,
#line 75 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_10,
#line 75 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeTable_11,
#line 75 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterTable_12,
#line 75 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingTable_13,
#line 75 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoTable_14,
#line 75 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__NonLocalRegionsTable_15,
#line 75 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__InCondRegionsTable_16)
#line 75 "rbmm.condition_renaming.m"
{
#line 156 "rbmm.condition_renaming.m"
  {
#line 156 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 156 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_26_26;
#line 156 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_27_27;
#line 156 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_29_29;
#line 156 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__PredIds_17;
#line 156 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_18_18;
#line 156 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_19_19;
#line 156 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_20_20;
#line 158 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv3_NonLocalRegionsTable_15;
#line 158 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv2_InCondRegionsTable_16;

#line 157 "rbmm.condition_renaming.m"
    {
#line 157 "rbmm.condition_renaming.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__rbmm__condition_renaming__ModuleInfo_9, &transform_hlds__rbmm__condition_renaming__PredIds_17);
    }
#line 158 "rbmm.condition_renaming.m"
    {
#line 158 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 158 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_18_18, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_3[0]));
#line 158 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_18_18, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_8_p_0_1));
#line 158 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 158 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_18_18, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ModuleInfo_9));
#line 158 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_18_18, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__RptaInfoTable_10));
#line 158 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_18_18, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeTable_11));
#line 158 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_18_18, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterTable_12));
#line 158 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_18_18, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingTable_13));
#line 158 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_18_18, 8) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoTable_14));
#line 158 "rbmm.condition_renaming.m"
    }
#line 8650 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 8652 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeInfo_27_27 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0];
#line 161 "rbmm.condition_renaming.m"
    {
#line 161 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_19_19 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_26_26, transform_hlds__rbmm__condition_renaming__TypeInfo_27_27);
    }
#line 161 "rbmm.condition_renaming.m"
    {
#line 161 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_20_20 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_26_26, transform_hlds__rbmm__condition_renaming__TypeInfo_27_27);
    }
#line 8664 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeInfo_29_29 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[1];
#line 158 "rbmm.condition_renaming.m"
    {
#line 158 "rbmm.condition_renaming.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__rbmm__condition_renaming__TypeInfo_29_29, transform_hlds__rbmm__condition_renaming__TypeInfo_29_29, transform_hlds__rbmm__condition_renaming__V_18_18, transform_hlds__rbmm__condition_renaming__PredIds_17, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_19_19)), &transform_hlds__rbmm__condition_renaming__conv3_NonLocalRegionsTable_15, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_20_20)), &transform_hlds__rbmm__condition_renaming__conv2_InCondRegionsTable_16);
    }
#line 158 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__NonLocalRegionsTable_15 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_NonLocalRegionsTable_15);
#line 158 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__InCondRegionsTable_16 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_InCondRegionsTable_16);
#line 156 "rbmm.condition_renaming.m"
  }
#line 75 "rbmm.condition_renaming.m"
}

void mercury__transform_hlds__rbmm__condition_renaming__init(void)
{
}

void mercury__transform_hlds__rbmm__condition_renaming__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__rbmm__condition_renaming__transform_hlds__rbmm__condition_renaming__type_ctor_info_goal_path_regions_table_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__condition_renaming__transform_hlds__rbmm__condition_renaming__type_ctor_info_proc_goal_path_regions_table_0);
}

void mercury__transform_hlds__rbmm__condition_renaming__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.rbmm.condition_renaming. */
