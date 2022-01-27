/*
** Automatically generated from `rbmm.condition_renaming.m'
** by the Mercury compiler,
** version 14.01-beta-2014-02-06, configured for x86_64-apple-darwin13.0.0.
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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
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




#line 147 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

#line 150 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 153 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 156 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 159 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1builtin__type_ctor_info_string_0;

#line 162 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 165 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 168 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 171 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 174 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 177 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 180 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 183 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 186 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 189 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 192 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 195 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 198 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 201 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 204 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 207 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

#line 210 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

#line 213 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 216 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

#line 219 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__pti_list_1__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 222 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 225 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 228 "transform_hlds.rbmm.condition_renaming.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming____Unify____goal_path_regions_table_0_0_10001(
#line 231 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 233 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2);

#line 236 "transform_hlds.rbmm.condition_renaming.c"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming____Compare____goal_path_regions_table_0_0_10001(
#line 239 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 241 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 243 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 246 "transform_hlds.rbmm.condition_renaming.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming____Unify____proc_goal_path_regions_table_0_0_10001(
#line 249 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 251 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2);

#line 254 "transform_hlds.rbmm.condition_renaming.c"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming____Compare____proc_goal_path_regions_table_0_0_10001(
#line 257 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 259 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 261 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 1119 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0_1(
#line 1119 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 1119 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1119 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1119 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 1087 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0(
#line 1087 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPathToThen_2,
#line 1087 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_3,
#line 1087 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_4,
#line 1087 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PrevPoint_5,
#line 1087 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__6_6,
#line 1087 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7,
#line 1087 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_8,
#line 1087 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_9,
#line 1087 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_10);

#line 1069 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_95_91_49_93_95_48_9_p_0(
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PathToThen_2,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_3,
#line 1069 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_4,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__5_5,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_6,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_7,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_8,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_9);

#line 913 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_116_101_95_114_101_110_97_109_105_110_103_95_95_91_51_93_95_48_6_p_0(
#line 913 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_7,
#line 913 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_8,
#line 913 "rbmm.condition_renaming.m"
  MR_String transform_hlds__rbmm__condition_renaming__RegName_10,
#line 913 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_15,
#line 913 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_16);

#line 1056 "rbmm.condition_renaming.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming__IntroducedFrom__pred__collect_ite_annotation_region_names__1056__1_2_p_0(
#line 1056 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LastStep_16,
#line 1056 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__2_31);

#line 1144 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_6_p_0(
#line 1144 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_7,
#line 1144 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamingProc_8,
#line 1144 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_9,
#line 1144 "rbmm.condition_renaming.m"
  MR_String transform_hlds__rbmm__condition_renaming__RegName_10,
#line 1144 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_17,
#line 1144 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_18);

#line 1130 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__reverse_goal_path_to_steps_2_p_0(
#line 1130 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__1_1,
#line 1130 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__HeadVar__2_2);

#line 1069 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_9_p_0(
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_1,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PathToThen_2,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_3,
#line 1069 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_4,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__5_5,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_6,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_7,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_8,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_9);

#line 1060 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_2(
#line 1060 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 1060 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1060 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1060 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 1060 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 1060 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5);

#line 1056 "rbmm.condition_renaming.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_1(
#line 1056 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg);

#line 1047 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0(
#line 1047 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ExecPaths_9,
#line 1047 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_10,
#line 1047 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPathToCond_11,
#line 1047 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_12,
#line 1047 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_20,
#line 1047 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_21,
#line 1047 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_22,
#line 1047 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_23);

#line 1041 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0_1(
#line 1041 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 1041 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1041 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1041 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 1041 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 1041 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_5,
#line 1041 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_6);

#line 1030 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0(
#line 1030 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ExecPathTable_9,
#line 1030 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_10,
#line 1030 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PPId_11,
#line 1030 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_12,
#line 1030 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_22,
#line 1030 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_23,
#line 1030 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationTable_0_24,
#line 1030 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationTable_25);

#line 1000 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(
#line 1000 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPath_5,
#line 1000 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__RevPathToCond_6,
#line 1000 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_0_11,
#line 1000 "rbmm.condition_renaming.m"
  MR_Integer * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_12);

#line 978 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_case_5_p_0(
#line 978 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 978 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 978 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_8,
#line 978 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_13,
#line 978 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_14);

#line 944 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_3(
#line 944 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 944 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 944 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 944 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 939 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_2(
#line 939 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 939 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 939 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 939 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 934 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_1(
#line 934 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 934 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 934 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 934 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 925 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0(
#line 925 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 925 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 925 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__GoalInCond_8,
#line 925 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_51,
#line 925 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_52);

#line 913 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_p_0(
#line 913 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_7,
#line 913 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_8,
#line 913 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming___Graph_9,
#line 913 "rbmm.condition_renaming.m"
  MR_String transform_hlds__rbmm__condition_renaming__RegName_10,
#line 913 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_15,
#line 913 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_16);

#line 898 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0_1(
#line 898 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 898 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 898 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 898 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 876 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(
#line 876 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 876 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 876 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Cond_8,
#line 876 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_19,
#line 876 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_20);

#line 865 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_case_5_p_0(
#line 865 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 865 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 865 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_8,
#line 865 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_13,
#line 865 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_14);

#line 838 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_3(
#line 838 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 838 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 838 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 838 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 834 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_2(
#line 834 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 834 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 834 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 834 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 830 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_1(
#line 830 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 830 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 830 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 830 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 816 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(
#line 816 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 816 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 816 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Goal_8,
#line 816 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48,
#line 816 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49);

#line 801 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_p_0(
#line 801 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ModuleInfo_7,
#line 801 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_8,
#line 801 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PPId_9,
#line 801 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_10,
#line 801 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_19,
#line 801 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_20);

#line 774 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_p_0(
#line 774 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_6,
#line 774 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PathToCond_7,
#line 774 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__InCondRegions_8,
#line 774 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_0_12,
#line 774 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_13);

#line 763 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0_1(
#line 763 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 763 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 763 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 763 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 763 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4);

#line 755 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0(
#line 755 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegionsTable_6,
#line 755 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PPId_7,
#line 755 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__InCondRegionsProc_8,
#line 755 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_0_12,
#line 755 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_13);

#line 729 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_case_8_p_0(
#line 729 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 729 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 729 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 729 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 729 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 729 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_14,
#line 729 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_19,
#line 729 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_20);

#line 684 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_3(
#line 684 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 684 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 684 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 684 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 677 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_2(
#line 677 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 677 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 677 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 677 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 670 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_1(
#line 670 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 670 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 670 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 670 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 659 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0(
#line 659 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 659 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 659 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 659 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 659 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 659 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__GoalInIte_14,
#line 659 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_57,
#line 659 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_58);

#line 630 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_p_0(
#line 630 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPath_5,
#line 630 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Created_6,
#line 630 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_12,
#line 630 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_13);

#line 609 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_2(
#line 609 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 609 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 609 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 609 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 609 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 609 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5);

#line 601 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_1(
#line 601 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 601 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 601 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 601 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 576 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(
#line 576 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 576 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 576 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 576 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 576 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 576 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Cond_14,
#line 576 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_33,
#line 576 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_34);

#line 552 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_case_8_p_0(
#line 552 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 552 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 552 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 552 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 552 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 552 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_14,
#line 552 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_19,
#line 552 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_20);

#line 507 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_3(
#line 507 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 507 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 507 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 507 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 500 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_2(
#line 500 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 500 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 500 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 500 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 493 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_1(
#line 493 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 493 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 493 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 493 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 482 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0(
#line 482 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 482 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 482 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 482 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 482 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 482 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__GoalInIte_14,
#line 482 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_57,
#line 482 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_58);

#line 444 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_p_0(
#line 444 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPath_6,
#line 444 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Created_7,
#line 444 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Removed_8,
#line 444 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_16,
#line 444 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_17);

#line 407 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__renaming_annotation_to_regions_5_p_0(
#line 407 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenameAnnotation_6,
#line 407 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_LeftRegions_0_13,
#line 407 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_LeftRegions_14,
#line 407 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_RightRegions_0_15,
#line 407 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_RightRegions_16);

#line 395 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__apply_region_renaming_5_p_0(
#line 395 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_6,
#line 395 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Renaming_7,
#line 395 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Node_8,
#line 395 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_Regions_0_13,
#line 395 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_Regions_14);

#line 381 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_2(
#line 381 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 381 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 381 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 381 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 381 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 381 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5);

#line 371 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_1(
#line 371 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 371 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 371 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 371 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3);

#line 340 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(
#line 340 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 340 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 340 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 340 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 340 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 340 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__GoalInIte_14,
#line 340 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_36,
#line 340 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_37);

#line 326 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_case_10_p_0(
#line 326 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_11,
#line 326 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_12,
#line 326 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_13,
#line 326 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_14,
#line 326 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_15,
#line 326 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_16,
#line 326 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_22,
#line 326 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_23,
#line 326 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_24,
#line 326 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_25);

#line 270 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_3(
#line 270 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 270 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 270 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 270 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 270 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 270 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5);

#line 278 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_2(
#line 278 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 278 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 278 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 278 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 278 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 278 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5);

#line 253 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_1(
#line 253 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 253 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 253 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 253 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 253 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 253 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5);

#line 244 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0(
#line 244 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_1,
#line 244 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_2,
#line 244 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_3,
#line 244 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4,
#line 244 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5,
#line 244 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__6_6,
#line 244 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__7_7,
#line 244 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__HeadVar__8_8,
#line 244 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9,
#line 244 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10);

#line 230 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(
#line 230 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_11,
#line 230 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_12,
#line 230 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_13,
#line 230 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_14,
#line 230 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_15,
#line 230 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Goal_16,
#line 230 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsProc_0_21,
#line 230 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsProc_22,
#line 230 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_23,
#line 230 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_24);

#line 181 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_12_p_0(
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ModuleInfo_13,
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PredId_14,
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_15,
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeTable_16,
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterTable_17,
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingTable_18,
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoTable_19,
#line 181 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__ProcId_20,
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_0_37,
#line 181 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_38,
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_0_39,
#line 181 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_40);

#line 176 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0_1(
#line 176 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 176 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 176 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 176 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 176 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 176 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5);

#line 162 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0(
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ModuleInfo_12,
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_13,
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeTable_14,
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterTable_15,
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingTable_16,
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoTable_17,
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PredId_18,
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_0_23,
#line 162 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_24,
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_0_25,
#line 162 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_26);

#line 1026 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_6_p_0_1(
#line 1026 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 1026 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1026 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1026 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 1026 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 1026 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_5,
#line 1026 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_6);

#line 798 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_p_0_1(
#line 798 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 798 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 798 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 798 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 798 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4);

#line 752 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_p_0_1(
#line 752 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 752 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 752 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 752 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 752 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4);

#line 157 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_8_p_0_1(
#line 157 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 157 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 157 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 157 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 157 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 157 "rbmm.condition_renaming.m"
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
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1675 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

#line 1684 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1692 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1701 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1710 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1718 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &transform_hlds__rbmm__condition_renaming__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1727 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1736 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1745 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1753 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__condition_renaming__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1762 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1771 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1779 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_TypeInfo) &transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
  }
};

#line 1788 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
  }
};

#line 1797 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
  }
};

#line 1806 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1815 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__condition_renaming__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1823 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__condition_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1831 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1840 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1849 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1858 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
  }
};

#line 1867 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1876 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1884 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__pti_list_1__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1892 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1900 "transform_hlds.rbmm.condition_renaming.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__condition_renaming__transform_hlds__rbmm__condition_renaming__type_ctor_info_goal_path_regions_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__condition_renaming____Unify____goal_path_regions_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__condition_renaming____Compare____goal_path_regions_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.condition_renaming",
  (MR_String) "goal_path_regions_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1921 "transform_hlds.rbmm.condition_renaming.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
  }
};

#line 1930 "transform_hlds.rbmm.condition_renaming.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__condition_renaming__transform_hlds__rbmm__condition_renaming__type_ctor_info_proc_goal_path_regions_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__condition_renaming____Unify____proc_goal_path_regions_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__condition_renaming____Compare____proc_goal_path_regions_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.condition_renaming",
  (MR_String) "proc_goal_path_regions_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1951 "transform_hlds.rbmm.condition_renaming.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming____Unify____goal_path_regions_table_0_0_10001(
#line 1954 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1956 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2)
#line 1958 "transform_hlds.rbmm.condition_renaming.c"
{
#line 1960 "transform_hlds.rbmm.condition_renaming.c"
  {
#line 1962 "transform_hlds.rbmm.condition_renaming.c"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 1965 "transform_hlds.rbmm.condition_renaming.c"
    {
#line 1967 "transform_hlds.rbmm.condition_renaming.c"
      transform_hlds__rbmm__condition_renaming__succeeded = transform_hlds__rbmm__condition_renaming____Unify____goal_path_regions_table_0_0(((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2));
    }
#line 1970 "transform_hlds.rbmm.condition_renaming.c"
    return transform_hlds__rbmm__condition_renaming__succeeded;
#line 1972 "transform_hlds.rbmm.condition_renaming.c"
  }
#line 1974 "transform_hlds.rbmm.condition_renaming.c"
}

#line 1977 "transform_hlds.rbmm.condition_renaming.c"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming____Compare____goal_path_regions_table_0_0_10001(
#line 1980 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1982 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1984 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 1986 "transform_hlds.rbmm.condition_renaming.c"
{
#line 1988 "transform_hlds.rbmm.condition_renaming.c"
  {
#line 1990 "transform_hlds.rbmm.condition_renaming.c"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_HeadVar__1_1;

#line 1993 "transform_hlds.rbmm.condition_renaming.c"
    {
#line 1995 "transform_hlds.rbmm.condition_renaming.c"
      transform_hlds__rbmm__condition_renaming____Compare____goal_path_regions_table_0_0(&transform_hlds__rbmm__condition_renaming__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_3));
    }
#line 1998 "transform_hlds.rbmm.condition_renaming.c"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_HeadVar__1_1));
#line 2000 "transform_hlds.rbmm.condition_renaming.c"
  }
#line 2002 "transform_hlds.rbmm.condition_renaming.c"
}

#line 2005 "transform_hlds.rbmm.condition_renaming.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming____Unify____proc_goal_path_regions_table_0_0_10001(
#line 2008 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 2010 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2)
#line 2012 "transform_hlds.rbmm.condition_renaming.c"
{
#line 2014 "transform_hlds.rbmm.condition_renaming.c"
  {
#line 2016 "transform_hlds.rbmm.condition_renaming.c"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 2019 "transform_hlds.rbmm.condition_renaming.c"
    {
#line 2021 "transform_hlds.rbmm.condition_renaming.c"
      transform_hlds__rbmm__condition_renaming__succeeded = transform_hlds__rbmm__condition_renaming____Unify____proc_goal_path_regions_table_0_0(((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2));
    }
#line 2024 "transform_hlds.rbmm.condition_renaming.c"
    return transform_hlds__rbmm__condition_renaming__succeeded;
#line 2026 "transform_hlds.rbmm.condition_renaming.c"
  }
#line 2028 "transform_hlds.rbmm.condition_renaming.c"
}

#line 2031 "transform_hlds.rbmm.condition_renaming.c"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming____Compare____proc_goal_path_regions_table_0_0_10001(
#line 2034 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 2036 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 2038 "transform_hlds.rbmm.condition_renaming.c"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 2040 "transform_hlds.rbmm.condition_renaming.c"
{
#line 2042 "transform_hlds.rbmm.condition_renaming.c"
  {
#line 2044 "transform_hlds.rbmm.condition_renaming.c"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_HeadVar__1_1;

#line 2047 "transform_hlds.rbmm.condition_renaming.c"
    {
#line 2049 "transform_hlds.rbmm.condition_renaming.c"
      transform_hlds__rbmm__condition_renaming____Compare____proc_goal_path_regions_table_0_0(&transform_hlds__rbmm__condition_renaming__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_3));
    }
#line 2052 "transform_hlds.rbmm.condition_renaming.c"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_HeadVar__1_1));
#line 2054 "transform_hlds.rbmm.condition_renaming.c"
  }
#line 2056 "transform_hlds.rbmm.condition_renaming.c"
}

#line 1119 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0_1(
#line 1119 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 1119 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1119 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1119 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 1119 "rbmm.condition_renaming.m"
{
#line 1119 "rbmm.condition_renaming.m"
  {
#line 1119 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 1119 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteAnnotationProc_18;

#line 1119 "rbmm.condition_renaming.m"
    {
#line 1119 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_String) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteAnnotationProc_18);
    }
#line 1119 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteAnnotationProc_18));
#line 1119 "rbmm.condition_renaming.m"
  }
#line 1119 "rbmm.condition_renaming.m"
}

#line 1087 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0(
#line 1087 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPathToThen_2,
#line 1087 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_3,
#line 1087 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_4,
#line 1087 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PrevPoint_5,
#line 1087 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__6_6,
#line 1087 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7,
#line 1087 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_8,
#line 1087 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_9,
#line 1087 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_10)
#line 1087 "rbmm.condition_renaming.m"
{
#line 1092 "rbmm.condition_renaming.m"
  while (MR_TRUE)
#line 1092 "rbmm.condition_renaming.m"
    {
#line 1092 "rbmm.condition_renaming.m"
      /* tailcall optimized into a loop */
#line 1092 "rbmm.condition_renaming.m"
      {
#line 1092 "rbmm.condition_renaming.m"
        MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 1092 "rbmm.condition_renaming.m"
        if ((transform_hlds__rbmm__condition_renaming__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1092 "rbmm.condition_renaming.m"
          {
#line 1092 "rbmm.condition_renaming.m"
            *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_10 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_9;
#line 1092 "rbmm.condition_renaming.m"
            *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_8 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7;
#line 1092 "rbmm.condition_renaming.m"
          }
#line 1092 "rbmm.condition_renaming.m"
        else
#line 1096 "rbmm.condition_renaming.m"
          {
#line 1096 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_53_53;
#line 1096 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_27;
#line 1096 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__ProgPointGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 1)));
#line 1096 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__RevGoalPath_33;
#line 1096 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__RevGoalPathSteps_34;
#line 1096 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__GoalPathSteps_35;
#line 1096 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__RevPathToThenSteps_36;
#line 1096 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__PathToThenSteps_37;
#line 1096 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 0)));
#line 1095 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__V_28_28;
#line 1097 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__V_32_32;
#line 1124 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__FromThenSteps_38;

#line 1095 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ProgPoint_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_44_44, (MR_Integer) 0)));
#line 1095 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_44_44, (MR_Integer) 1)));
#line 1097 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__ProgPoint_27, (MR_Integer) 0)));
#line 1097 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__RevGoalPath_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__ProgPoint_27, (MR_Integer) 1)));
#line 1098 "rbmm.condition_renaming.m"
            {
#line 1098 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__reverse_goal_path_to_steps_2_p_0(transform_hlds__rbmm__condition_renaming__RevGoalPath_33, &transform_hlds__rbmm__condition_renaming__RevGoalPathSteps_34);
            }
#line 2177 "transform_hlds.rbmm.condition_renaming.c"
            transform_hlds__rbmm__condition_renaming__TypeCtorInfo_53_53 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0;
#line 1099 "rbmm.condition_renaming.m"
            {
#line 1099 "rbmm.condition_renaming.m"
              mercury__list__reverse_2_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_53_53, transform_hlds__rbmm__condition_renaming__RevGoalPathSteps_34, &transform_hlds__rbmm__condition_renaming__GoalPathSteps_35);
            }
#line 1100 "rbmm.condition_renaming.m"
            {
#line 1100 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__reverse_goal_path_to_steps_2_p_0(transform_hlds__rbmm__condition_renaming__RevPathToThen_2, &transform_hlds__rbmm__condition_renaming__RevPathToThenSteps_36);
            }
#line 1101 "rbmm.condition_renaming.m"
            {
#line 1101 "rbmm.condition_renaming.m"
              mercury__list__reverse_2_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_53_53, transform_hlds__rbmm__condition_renaming__RevPathToThenSteps_36, &transform_hlds__rbmm__condition_renaming__PathToThenSteps_37);
            }
#line 1102 "rbmm.condition_renaming.m"
            {
#line 1102 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__succeeded = mercury__list__append_3_p_3(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_53_53, transform_hlds__rbmm__condition_renaming__PathToThenSteps_37, &transform_hlds__rbmm__condition_renaming__FromThenSteps_38, transform_hlds__rbmm__condition_renaming__GoalPathSteps_35);
            }
#line 1124 "rbmm.condition_renaming.m"
            if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1115 "rbmm.condition_renaming.m"
              {
#line 1103 "rbmm.condition_renaming.m"
                {
#line 1103 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__succeeded = mercury__list__member_2_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_53_53, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), transform_hlds__rbmm__condition_renaming__FromThenSteps_38);
                }
#line 1115 "rbmm.condition_renaming.m"
                if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1111 "rbmm.condition_renaming.m"
                  {
#line 1111 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_46_46;
#line 1109 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__PrevIteRenaming_39;
#line 1107 "rbmm.condition_renaming.m"
                    MR_Box transform_hlds__rbmm__condition_renaming__conv0_PrevIteRenaming_39;

#line 1107 "rbmm.condition_renaming.m"
                    {
#line 1107 "rbmm.condition_renaming.m"
                      transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2], transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PrevPoint_5)), &transform_hlds__rbmm__condition_renaming__conv0_PrevIteRenaming_39);
                    }
#line 1107 "rbmm.condition_renaming.m"
                    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1107 "rbmm.condition_renaming.m"
                      {
#line 1107 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__PrevIteRenaming_39 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_PrevIteRenaming_39);
#line 1107 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 1107 "rbmm.condition_renaming.m"
                      }
#line 1109 "rbmm.condition_renaming.m"
                    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1108 "rbmm.condition_renaming.m"
                      {
#line 1108 "rbmm.condition_renaming.m"
                        {
#line 1108 "rbmm.condition_renaming.m"
                          mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2], ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_27)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__PrevIteRenaming_39)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_46_46);
                        }
#line 1108 "rbmm.condition_renaming.m"
                      }
#line 1109 "rbmm.condition_renaming.m"
                    else
#line 1108 "rbmm.condition_renaming.m"
                      transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_46_46 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7;
#line 1112 "rbmm.condition_renaming.m"
                    /* direct tailcall eliminated */
#line 1112 "rbmm.condition_renaming.m"
                    {
#line 1112 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__PrevPoint__tmp_copy_5 = transform_hlds__rbmm__condition_renaming__ProgPoint_27;
#line 1112 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__6__tmp_copy_6 = transform_hlds__rbmm__condition_renaming__ProgPointGoals_29;
#line 1112 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0__tmp_copy_7 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_46_46;

#line 1112 "rbmm.condition_renaming.m"
                      transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0__tmp_copy_7;
#line 1112 "rbmm.condition_renaming.m"
                      transform_hlds__rbmm__condition_renaming__HeadVar__6_6 = transform_hlds__rbmm__condition_renaming__HeadVar__6__tmp_copy_6;
#line 1112 "rbmm.condition_renaming.m"
                      transform_hlds__rbmm__condition_renaming__PrevPoint_5 = transform_hlds__rbmm__condition_renaming__PrevPoint__tmp_copy_5;
#line 1112 "rbmm.condition_renaming.m"
                    }
#line 1112 "rbmm.condition_renaming.m"
                    continue;
#line 1111 "rbmm.condition_renaming.m"
                  }
#line 1115 "rbmm.condition_renaming.m"
                else
#line 1119 "rbmm.condition_renaming.m"
                  {
#line 1119 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__V_49_49;
#line 1119 "rbmm.condition_renaming.m"
                    MR_Box transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteAnnotationProc_10;

#line 1119 "rbmm.condition_renaming.m"
                    {
#line 1119 "rbmm.condition_renaming.m"
                      transform_hlds__rbmm__condition_renaming__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1119 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_49_49, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_5[2]));
#line 1119 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_49_49, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0_1));
#line 1119 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1119 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_49_49, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_27));
#line 1119 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_49_49, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7));
#line 1119 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_49_49, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__HowMany_4));
#line 1119 "rbmm.condition_renaming.m"
                    }
#line 1119 "rbmm.condition_renaming.m"
                    {
#line 1119 "rbmm.condition_renaming.m"
                      mercury__set__fold_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[5], transform_hlds__rbmm__condition_renaming__V_49_49, transform_hlds__rbmm__condition_renaming__RenamedRegions_3, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_9)), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteAnnotationProc_10);
                    }
#line 1119 "rbmm.condition_renaming.m"
                    *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_10 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteAnnotationProc_10);
#line 1119 "rbmm.condition_renaming.m"
                    *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_8 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_7;
#line 1119 "rbmm.condition_renaming.m"
                  }
#line 1115 "rbmm.condition_renaming.m"
              }
#line 1124 "rbmm.condition_renaming.m"
            else
#line 1125 "rbmm.condition_renaming.m"
              {
#line 1125 "rbmm.condition_renaming.m"
                /* direct tailcall eliminated */
#line 1125 "rbmm.condition_renaming.m"
                {
#line 1125 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__PrevPoint__tmp_copy_5 = transform_hlds__rbmm__condition_renaming__ProgPoint_27;
#line 1125 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__6__tmp_copy_6 = transform_hlds__rbmm__condition_renaming__ProgPointGoals_29;

#line 1125 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__HeadVar__6_6 = transform_hlds__rbmm__condition_renaming__HeadVar__6__tmp_copy_6;
#line 1125 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__PrevPoint_5 = transform_hlds__rbmm__condition_renaming__PrevPoint__tmp_copy_5;
#line 1125 "rbmm.condition_renaming.m"
                }
#line 1125 "rbmm.condition_renaming.m"
                continue;
#line 1125 "rbmm.condition_renaming.m"
              }
#line 1096 "rbmm.condition_renaming.m"
          }
#line 1092 "rbmm.condition_renaming.m"
      }
#line 1092 "rbmm.condition_renaming.m"
      break;
#line 1092 "rbmm.condition_renaming.m"
    }
#line 1087 "rbmm.condition_renaming.m"
}

#line 1069 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_95_91_49_93_95_48_9_p_0(
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PathToThen_2,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_3,
#line 1069 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_4,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__5_5,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_6,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_7,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_8,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_9)
#line 1069 "rbmm.condition_renaming.m"
{
#line 1074 "rbmm.condition_renaming.m"
  {
#line 1074 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 1074 "rbmm.condition_renaming.m"
    if ((transform_hlds__rbmm__condition_renaming__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1074 "rbmm.condition_renaming.m"
      {
#line 1074 "rbmm.condition_renaming.m"
        *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_9 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_8;
#line 1074 "rbmm.condition_renaming.m"
        *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_7 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_6;
#line 1074 "rbmm.condition_renaming.m"
      }
#line 1074 "rbmm.condition_renaming.m"
    else
#line 1078 "rbmm.condition_renaming.m"
      {
#line 1078 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_24;
#line 1078 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ProgPointGoals_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__HeadVar__5_5, (MR_Integer) 1)));
#line 1078 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__HeadVar__5_5, (MR_Integer) 0)));
#line 1077 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_25_25;

#line 1077 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__ProgPoint_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_33_33, (MR_Integer) 0)));
#line 1077 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_33_33, (MR_Integer) 1)));
#line 1081 "rbmm.condition_renaming.m"
        {
#line 1081 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0(transform_hlds__rbmm__condition_renaming__PathToThen_2, transform_hlds__rbmm__condition_renaming__RenamedRegions_3, transform_hlds__rbmm__condition_renaming__HowMany_4, transform_hlds__rbmm__condition_renaming__ProgPoint_24, transform_hlds__rbmm__condition_renaming__ProgPointGoals_26, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_6, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_7, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_8, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_9);
#line 1081 "rbmm.condition_renaming.m"
          return;
        }
#line 1078 "rbmm.condition_renaming.m"
      }
#line 1074 "rbmm.condition_renaming.m"
  }
#line 1069 "rbmm.condition_renaming.m"
}

#line 913 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_116_101_95_114_101_110_97_109_105_110_103_95_95_91_51_93_95_48_6_p_0(
#line 913 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_7,
#line 913 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_8,
#line 913 "rbmm.condition_renaming.m"
  MR_String transform_hlds__rbmm__condition_renaming__RegName_10,
#line 913 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_15,
#line 913 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_16)
#line 913 "rbmm.condition_renaming.m"
{
#line 916 "rbmm.condition_renaming.m"
  {
#line 916 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 916 "rbmm.condition_renaming.m"
    MR_String transform_hlds__rbmm__condition_renaming__NewName_12;
#line 916 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__IteRenaming_14;
#line 916 "rbmm.condition_renaming.m"
    MR_String transform_hlds__rbmm__condition_renaming__V_17_17;
#line 916 "rbmm.condition_renaming.m"
    MR_String transform_hlds__rbmm__condition_renaming__V_19_19;
#line 920 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__IteRenaming0_13;
#line 918 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv0_IteRenaming0_13;

#line 917 "rbmm.condition_renaming.m"
    {
#line 917 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_19_19 = mercury__string__int_to_string_1_f_0(transform_hlds__rbmm__condition_renaming__HowMany_8);
    }
#line 917 "rbmm.condition_renaming.m"
    {
#line 917 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "_ite_", transform_hlds__rbmm__condition_renaming__V_19_19);
    }
#line 917 "rbmm.condition_renaming.m"
    {
#line 917 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__NewName_12 = mercury__string__f_43_43_2_f_0(transform_hlds__rbmm__condition_renaming__RegName_10, transform_hlds__rbmm__condition_renaming__V_17_17);
    }
#line 918 "rbmm.condition_renaming.m"
    {
#line 918 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2], transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_15, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_7)), &transform_hlds__rbmm__condition_renaming__conv0_IteRenaming0_13);
    }
#line 918 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 918 "rbmm.condition_renaming.m"
      {
#line 918 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__IteRenaming0_13 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_IteRenaming0_13);
#line 918 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 918 "rbmm.condition_renaming.m"
      }
#line 920 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 919 "rbmm.condition_renaming.m"
      {
#line 919 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_20_20;

#line 919 "rbmm.condition_renaming.m"
        {
#line 919 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__V_20_20, 0) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__NewName_12));
#line 919 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 919 "rbmm.condition_renaming.m"
        }
#line 919 "rbmm.condition_renaming.m"
        {
#line 919 "rbmm.condition_renaming.m"
          mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__condition_renaming__RegName_10)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_20_20)), transform_hlds__rbmm__condition_renaming__IteRenaming0_13, &transform_hlds__rbmm__condition_renaming__IteRenaming_14);
        }
#line 919 "rbmm.condition_renaming.m"
      }
#line 920 "rbmm.condition_renaming.m"
    else
#line 921 "rbmm.condition_renaming.m"
      {
#line 921 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30;
#line 921 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_31_31;
#line 921 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_22_22;
#line 921 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_23_23;

#line 921 "rbmm.condition_renaming.m"
        {
#line 921 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__V_22_22, 0) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__NewName_12));
#line 921 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 921 "rbmm.condition_renaming.m"
        }
#line 2522 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2524 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeInfo_31_31 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[1];
#line 921 "rbmm.condition_renaming.m"
        {
#line 921 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_23_23 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30, transform_hlds__rbmm__condition_renaming__TypeInfo_31_31);
        }
#line 921 "rbmm.condition_renaming.m"
        {
#line 921 "rbmm.condition_renaming.m"
          mercury__map__set_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30, transform_hlds__rbmm__condition_renaming__TypeInfo_31_31, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RegName_10)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_22_22)), transform_hlds__rbmm__condition_renaming__V_23_23, &transform_hlds__rbmm__condition_renaming__IteRenaming_14);
        }
#line 921 "rbmm.condition_renaming.m"
      }
#line 923 "rbmm.condition_renaming.m"
    {
#line 923 "rbmm.condition_renaming.m"
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2], ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_7)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenaming_14)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_15, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_16);
#line 923 "rbmm.condition_renaming.m"
      return;
    }
#line 916 "rbmm.condition_renaming.m"
  }
#line 913 "rbmm.condition_renaming.m"
}

#line 1056 "rbmm.condition_renaming.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming__IntroducedFrom__pred__collect_ite_annotation_region_names__1056__1_2_p_0(
#line 1056 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LastStep_16,
#line 1056 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__2_31)
#line 1056 "rbmm.condition_renaming.m"
{
#line 1056 "rbmm.condition_renaming.m"
  {
#line 1056 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 1056 "rbmm.condition_renaming.m"
    {
#line 1056 "rbmm.condition_renaming.m"
      return transform_hlds__rbmm__condition_renaming__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(transform_hlds__rbmm__condition_renaming__LastStep_16, transform_hlds__rbmm__condition_renaming__HeadVar__2_31);
    }
#line 1056 "rbmm.condition_renaming.m"
    return transform_hlds__rbmm__condition_renaming__succeeded;
#line 1056 "rbmm.condition_renaming.m"
  }
#line 1056 "rbmm.condition_renaming.m"
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

#line 1144 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_6_p_0(
#line 1144 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_7,
#line 1144 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamingProc_8,
#line 1144 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_9,
#line 1144 "rbmm.condition_renaming.m"
  MR_String transform_hlds__rbmm__condition_renaming__RegName_10,
#line 1144 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_17,
#line 1144 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_18)
#line 1144 "rbmm.condition_renaming.m"
{
#line 1149 "rbmm.condition_renaming.m"
  {
#line 1149 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 1149 "rbmm.condition_renaming.m"
    MR_String transform_hlds__rbmm__condition_renaming__CurrentName_12;
#line 1149 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Annotation_16;
#line 1149 "rbmm.condition_renaming.m"
    MR_String transform_hlds__rbmm__condition_renaming__V_19_19;
#line 1149 "rbmm.condition_renaming.m"
    MR_String transform_hlds__rbmm__condition_renaming__V_21_21;
#line 1162 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Renaming_13;
#line 1151 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv0_Renaming_13;

#line 1150 "rbmm.condition_renaming.m"
    {
#line 1150 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_21_21 = mercury__string__int_to_string_1_f_0(transform_hlds__rbmm__condition_renaming__HowMany_9);
    }
#line 1150 "rbmm.condition_renaming.m"
    {
#line 1150 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "_ite_", transform_hlds__rbmm__condition_renaming__V_21_21);
    }
#line 1150 "rbmm.condition_renaming.m"
    {
#line 1150 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__CurrentName_12 = mercury__string__f_43_43_2_f_0(transform_hlds__rbmm__condition_renaming__RegName_10, transform_hlds__rbmm__condition_renaming__V_19_19);
    }
#line 1151 "rbmm.condition_renaming.m"
    {
#line 1151 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2], transform_hlds__rbmm__condition_renaming__IteRenamingProc_8, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_7)), &transform_hlds__rbmm__condition_renaming__conv0_Renaming_13);
    }
#line 1151 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1151 "rbmm.condition_renaming.m"
      {
#line 1151 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__Renaming_13 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_Renaming_13);
#line 1151 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 1151 "rbmm.condition_renaming.m"
      }
#line 1162 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1159 "rbmm.condition_renaming.m"
      {
#line 1159 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RenameToList_14;
#line 1152 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv1_RenameToList_14;

#line 1152 "rbmm.condition_renaming.m"
        {
#line 1152 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[1], transform_hlds__rbmm__condition_renaming__Renaming_13, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RegName_10)), &transform_hlds__rbmm__condition_renaming__conv1_RenameToList_14);
        }
#line 1152 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1152 "rbmm.condition_renaming.m"
          {
#line 1152 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__RenameToList_14 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_RenameToList_14);
#line 1152 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 1152 "rbmm.condition_renaming.m"
          }
#line 1159 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1156 "rbmm.condition_renaming.m"
          {
#line 1153 "rbmm.condition_renaming.m"
            MR_Integer transform_hlds__rbmm__condition_renaming__V_22_22;

#line 1153 "rbmm.condition_renaming.m"
            {
#line 1153 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__V_22_22 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__condition_renaming__RenameToList_14);
            }
#line 1153 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = (transform_hlds__rbmm__condition_renaming__V_22_22 == (MR_Integer) 1);
#line 1156 "rbmm.condition_renaming.m"
            if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1154 "rbmm.condition_renaming.m"
              {
#line 1154 "rbmm.condition_renaming.m"
                MR_String transform_hlds__rbmm__condition_renaming__RenameTo_15;
#line 1154 "rbmm.condition_renaming.m"
                MR_Box transform_hlds__rbmm__condition_renaming__conv2_RenameTo_15;

#line 1154 "rbmm.condition_renaming.m"
                {
#line 1154 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__conv2_RenameTo_15 = mercury__list__det_last_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__condition_renaming__RenameToList_14);
                }
#line 1154 "rbmm.condition_renaming.m"
                transform_hlds__rbmm__condition_renaming__RenameTo_15 = ((MR_String) transform_hlds__rbmm__condition_renaming__conv2_RenameTo_15);
#line 1155 "rbmm.condition_renaming.m"
                {
#line 1155 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__region_resurrection_renaming__make_renaming_instruction_3_p_0(transform_hlds__rbmm__condition_renaming__CurrentName_12, transform_hlds__rbmm__condition_renaming__RenameTo_15, &transform_hlds__rbmm__condition_renaming__Annotation_16);
                }
#line 1154 "rbmm.condition_renaming.m"
              }
#line 1156 "rbmm.condition_renaming.m"
            else
#line 1157 "rbmm.condition_renaming.m"
              {
#line 1157 "rbmm.condition_renaming.m"
                {
#line 1157 "rbmm.condition_renaming.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.introduce_reverse_renaming\'/6", (MR_String) "more than one renaming");
#line 1157 "rbmm.condition_renaming.m"
                  return;
                }
#line 1157 "rbmm.condition_renaming.m"
              }
#line 1156 "rbmm.condition_renaming.m"
          }
#line 1159 "rbmm.condition_renaming.m"
        else
#line 1160 "rbmm.condition_renaming.m"
          {
#line 1160 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__region_resurrection_renaming__make_renaming_instruction_3_p_0(transform_hlds__rbmm__condition_renaming__CurrentName_12, transform_hlds__rbmm__condition_renaming__RegName_10, &transform_hlds__rbmm__condition_renaming__Annotation_16);
          }
#line 1159 "rbmm.condition_renaming.m"
      }
#line 1162 "rbmm.condition_renaming.m"
    else
#line 1164 "rbmm.condition_renaming.m"
      {
#line 1164 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__region_resurrection_renaming__make_renaming_instruction_3_p_0(transform_hlds__rbmm__condition_renaming__CurrentName_12, transform_hlds__rbmm__condition_renaming__RegName_10, &transform_hlds__rbmm__condition_renaming__Annotation_16);
      }
#line 1166 "rbmm.condition_renaming.m"
    {
#line 1166 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__region_resurrection_renaming__record_annotation_4_p_0(transform_hlds__rbmm__condition_renaming__ProgPoint_7, transform_hlds__rbmm__condition_renaming__Annotation_16, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_17, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_18);
#line 1166 "rbmm.condition_renaming.m"
      return;
    }
#line 1149 "rbmm.condition_renaming.m"
  }
#line 1144 "rbmm.condition_renaming.m"
}

#line 1130 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__reverse_goal_path_to_steps_2_p_0(
#line 1130 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__1_1,
#line 1130 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__HeadVar__2_2)
#line 1130 "rbmm.condition_renaming.m"
{
#line 1133 "rbmm.condition_renaming.m"
  {
#line 1133 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 1133 "rbmm.condition_renaming.m"
    if ((transform_hlds__rbmm__condition_renaming__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1133 "rbmm.condition_renaming.m"
      *transform_hlds__rbmm__condition_renaming__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1133 "rbmm.condition_renaming.m"
    else
#line 1135 "rbmm.condition_renaming.m"
      {
#line 1135 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__EarlierPath_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__HeadVar__1_1, (MR_Integer) 0)));
#line 1135 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__LaterStep_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__HeadVar__1_1, (MR_Integer) 1)));
#line 1135 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__EarlierSteps_5;

#line 1136 "rbmm.condition_renaming.m"
        {
#line 1136 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__reverse_goal_path_to_steps_2_p_0(transform_hlds__rbmm__condition_renaming__EarlierPath_3, &transform_hlds__rbmm__condition_renaming__EarlierSteps_5);
        }
#line 1135 "rbmm.condition_renaming.m"
        {
#line 1135 "rbmm.condition_renaming.m"
          MR_Word base;
#line 1135 "rbmm.condition_renaming.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__HeadVar__2_2 = base;
#line 1135 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LaterStep_4));
#line 1135 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__EarlierSteps_5));
#line 1135 "rbmm.condition_renaming.m"
        }
#line 1135 "rbmm.condition_renaming.m"
      }
#line 1133 "rbmm.condition_renaming.m"
  }
#line 1130 "rbmm.condition_renaming.m"
}

#line 1069 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_9_p_0(
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_1,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PathToThen_2,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_3,
#line 1069 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_4,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__5_5,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_6,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_7,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_8,
#line 1069 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_9)
#line 1069 "rbmm.condition_renaming.m"
{
#line 1074 "rbmm.condition_renaming.m"
  {
#line 1074 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 1074 "rbmm.condition_renaming.m"
    {
#line 1074 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_95_91_49_93_95_48_9_p_0(transform_hlds__rbmm__condition_renaming__PathToThen_2, transform_hlds__rbmm__condition_renaming__RenamedRegions_3, transform_hlds__rbmm__condition_renaming__HowMany_4, transform_hlds__rbmm__condition_renaming__HeadVar__5_5, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_6, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_7, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_8, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_9);
#line 1074 "rbmm.condition_renaming.m"
      return;
    }
#line 1074 "rbmm.condition_renaming.m"
  }
#line 1069 "rbmm.condition_renaming.m"
}

#line 1060 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_2(
#line 1060 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 1060 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1060 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1060 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 1060 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 1060 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5)
#line 1060 "rbmm.condition_renaming.m"
{
#line 1060 "rbmm.condition_renaming.m"
  {
#line 1060 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 1060 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_7;
#line 1060 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteAnnotationProc_9;

#line 1060 "rbmm.condition_renaming.m"
    {
#line 1060 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_7, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_4), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteAnnotationProc_9);
    }
#line 1060 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_7));
#line 1060 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteAnnotationProc_9));
#line 1060 "rbmm.condition_renaming.m"
  }
#line 1060 "rbmm.condition_renaming.m"
}

#line 1056 "rbmm.condition_renaming.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_1(
#line 1056 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg)
#line 1056 "rbmm.condition_renaming.m"
{
#line 1056 "rbmm.condition_renaming.m"
  {
#line 1056 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 1056 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;

#line 1056 "rbmm.condition_renaming.m"
    {
#line 1056 "rbmm.condition_renaming.m"
      return transform_hlds__rbmm__condition_renaming__succeeded = transform_hlds__rbmm__condition_renaming__IntroducedFrom__pred__collect_ite_annotation_region_names__1056__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))));
    }
#line 1056 "rbmm.condition_renaming.m"
    return transform_hlds__rbmm__condition_renaming__succeeded;
#line 1056 "rbmm.condition_renaming.m"
  }
#line 1056 "rbmm.condition_renaming.m"
}

#line 1047 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0(
#line 1047 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ExecPaths_9,
#line 1047 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_10,
#line 1047 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPathToCond_11,
#line 1047 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_12,
#line 1047 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_20,
#line 1047 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_21,
#line 1047 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_22,
#line 1047 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_23)
#line 1047 "rbmm.condition_renaming.m"
{
#line 1055 "rbmm.condition_renaming.m"
  {
#line 1055 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 1055 "rbmm.condition_renaming.m"
    if ((transform_hlds__rbmm__condition_renaming__RevPathToCond_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1065 "rbmm.condition_renaming.m"
      {
#line 1066 "rbmm.condition_renaming.m"
        {
#line 1066 "rbmm.condition_renaming.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_annotation_region_names\'/8", (MR_String) "empty path to condition");
#line 1066 "rbmm.condition_renaming.m"
          return;
        }
#line 1065 "rbmm.condition_renaming.m"
      }
#line 1055 "rbmm.condition_renaming.m"
    else
#line 1055 "rbmm.condition_renaming.m"
      {
#line 1055 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RevInitialPath_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPathToCond_11, (MR_Integer) 0)));
#line 1055 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__LastStep_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPathToCond_11, (MR_Integer) 1)));
#line 1055 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RevPathToThen_17;
#line 1055 "rbmm.condition_renaming.m"
        MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_19;
#line 1055 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_27_27;
#line 1055 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_34_34;
#line 1055 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RevInitialPath_51;
#line 1055 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__LastStep_52;
#line 1060 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_21;
#line 1060 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteAnnotationProc_23;

#line 1056 "rbmm.condition_renaming.m"
        {
#line 1056 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1056 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_9[0]));
#line 1056 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_1));
#line 1056 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1056 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LastStep_16));
#line 1056 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1056 "rbmm.condition_renaming.m"
        }
#line 1056 "rbmm.condition_renaming.m"
        {
#line 1056 "rbmm.condition_renaming.m"
          mercury__require__expect_4_p_0(transform_hlds__rbmm__condition_renaming__V_27_27, (MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_annotation_region_names\'/8", (MR_String) "not step_ite_cond");
        }
#line 1058 "rbmm.condition_renaming.m"
        {
#line 1058 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__RevPathToThen_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPathToThen_17, 0) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__RevInitialPath_15));
#line 1058 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPathToThen_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1058 "rbmm.condition_renaming.m"
        }
#line 1005 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__RevInitialPath_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPathToCond_11, (MR_Integer) 0)));
#line 1005 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__LastStep_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPathToCond_11, (MR_Integer) 1)));
#line 1006 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = (transform_hlds__rbmm__condition_renaming__LastStep_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1010 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1007 "rbmm.condition_renaming.m"
          {
#line 1007 "rbmm.condition_renaming.m"
            MR_Integer transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_13_54;
#line 1008 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__V_53_53;

#line 1008 "rbmm.condition_renaming.m"
            {
#line 1008 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(transform_hlds__rbmm__condition_renaming__RevInitialPath_51, &transform_hlds__rbmm__condition_renaming__V_53_53, (MR_Integer) 0, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_13_54);
            }
#line 1009 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__HowMany_19 = (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_13_54 + (MR_Integer) 1);
#line 1007 "rbmm.condition_renaming.m"
          }
#line 1010 "rbmm.condition_renaming.m"
        else
#line 1011 "rbmm.condition_renaming.m"
          {
#line 1011 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__V_58_58;

#line 1011 "rbmm.condition_renaming.m"
            {
#line 1011 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(transform_hlds__rbmm__condition_renaming__RevInitialPath_51, &transform_hlds__rbmm__condition_renaming__V_58_58, (MR_Integer) 0, &transform_hlds__rbmm__condition_renaming__HowMany_19);
            }
#line 1011 "rbmm.condition_renaming.m"
          }
#line 1060 "rbmm.condition_renaming.m"
        {
#line 1060 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1060 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_34_34, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_10[0]));
#line 1060 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_34_34, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_2));
#line 1060 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1060 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_34_34, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_10));
#line 1060 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_34_34, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__RevPathToThen_17));
#line 1060 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_34_34, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__RenamedRegions_12));
#line 1060 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_34_34, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__HowMany_19));
#line 1060 "rbmm.condition_renaming.m"
        }
#line 1060 "rbmm.condition_renaming.m"
        {
#line 1060 "rbmm.condition_renaming.m"
          mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[4], (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[5], transform_hlds__rbmm__condition_renaming__V_34_34, transform_hlds__rbmm__condition_renaming__ExecPaths_9, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_20)), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_21, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_0_22)), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteAnnotationProc_23);
        }
#line 1060 "rbmm.condition_renaming.m"
        *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_21 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_21);
#line 1060 "rbmm.condition_renaming.m"
        *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationProc_23 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteAnnotationProc_23);
#line 1055 "rbmm.condition_renaming.m"
      }
#line 1055 "rbmm.condition_renaming.m"
  }
#line 1047 "rbmm.condition_renaming.m"
}

#line 1041 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0_1(
#line 1041 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 1041 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1041 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1041 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 1041 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 1041 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_5,
#line 1041 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_6)
#line 1041 "rbmm.condition_renaming.m"
{
#line 1041 "rbmm.condition_renaming.m"
  {
#line 1041 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 1041 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_21;
#line 1041 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteAnnotationProc_23;

#line 1041 "rbmm.condition_renaming.m"
    {
#line 1041 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_3), &transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_21, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_5), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteAnnotationProc_23);
    }
#line 1041 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_21));
#line 1041 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteAnnotationProc_23));
#line 1041 "rbmm.condition_renaming.m"
  }
#line 1041 "rbmm.condition_renaming.m"
}

#line 1030 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0(
#line 1030 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ExecPathTable_9,
#line 1030 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_10,
#line 1030 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PPId_11,
#line 1030 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_12,
#line 1030 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_22,
#line 1030 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_23,
#line 1030 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationTable_0_24,
#line 1030 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationTable_25)
#line 1030 "rbmm.condition_renaming.m"
{
#line 1036 "rbmm.condition_renaming.m"
  {
#line 1036 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 1036 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 1036 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_33_33;
#line 1036 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_44_44;
#line 1036 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__ExecPaths_15;
#line 1036 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__RptaInfo_16;
#line 1036 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__IteRenamingProc0_17;
#line 1036 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Graph_18;
#line 1036 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__IteRenamingProc_20;
#line 1036 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__IteAnnotationProc_21;
#line 1036 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_26_26;
#line 1036 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_27_27;
#line 1037 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv0_ExecPaths_15;
#line 1038 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv1_RptaInfo_16;
#line 1039 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv2_IteRenamingProc0_17;
#line 1040 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_19_19;
#line 1041 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv6_IteRenamingProc_20;
#line 1041 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv5_IteAnnotationProc_21;

#line 1037 "rbmm.condition_renaming.m"
    {
#line 1037 "rbmm.condition_renaming.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[5], transform_hlds__rbmm__condition_renaming__ExecPathTable_9, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_11)), &transform_hlds__rbmm__condition_renaming__conv0_ExecPaths_15);
    }
#line 1037 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__ExecPaths_15 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_ExecPaths_15);
#line 1038 "rbmm.condition_renaming.m"
    {
#line 1038 "rbmm.condition_renaming.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__condition_renaming__RptaInfoTable_10, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_11)), &transform_hlds__rbmm__condition_renaming__conv1_RptaInfo_16);
    }
#line 1038 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__RptaInfo_16 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_RptaInfo_16);
#line 3314 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeInfo_33_33 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3];
#line 1039 "rbmm.condition_renaming.m"
    {
#line 1039 "rbmm.condition_renaming.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30, transform_hlds__rbmm__condition_renaming__TypeInfo_33_33, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_22, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_11)), &transform_hlds__rbmm__condition_renaming__conv2_IteRenamingProc0_17);
    }
#line 1039 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__IteRenamingProc0_17 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_IteRenamingProc0_17);
#line 1040 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__Graph_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__RptaInfo_16, (MR_Integer) 0)));
#line 1040 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__RptaInfo_16, (MR_Integer) 1)));
#line 1041 "rbmm.condition_renaming.m"
    {
#line 1041 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1041 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_26_26, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[3]));
#line 1041 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_26_26, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0_1));
#line 1041 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1041 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_26_26, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ExecPaths_15));
#line 1041 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_26_26, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_18));
#line 1041 "rbmm.condition_renaming.m"
    }
#line 1041 "rbmm.condition_renaming.m"
    {
#line 1041 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_27_27 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[2]);
    }
#line 3348 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeInfo_44_44 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[5];
#line 1041 "rbmm.condition_renaming.m"
    {
#line 1041 "rbmm.condition_renaming.m"
      mercury__map__foldl2_6_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0], transform_hlds__rbmm__condition_renaming__TypeInfo_33_33, transform_hlds__rbmm__condition_renaming__TypeInfo_44_44, transform_hlds__rbmm__condition_renaming__V_26_26, transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_12, ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamingProc0_17)), &transform_hlds__rbmm__condition_renaming__conv6_IteRenamingProc_20, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_27_27)), &transform_hlds__rbmm__condition_renaming__conv5_IteAnnotationProc_21);
    }
#line 1041 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__IteRenamingProc_20 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv6_IteRenamingProc_20);
#line 1041 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__IteAnnotationProc_21 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv5_IteAnnotationProc_21);
#line 1044 "rbmm.condition_renaming.m"
    {
#line 1044 "rbmm.condition_renaming.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30, transform_hlds__rbmm__condition_renaming__TypeInfo_44_44, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_11)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteAnnotationProc_21)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationTable_0_24, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteAnnotationTable_25);
    }
#line 1045 "rbmm.condition_renaming.m"
    {
#line 1045 "rbmm.condition_renaming.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_30_30, transform_hlds__rbmm__condition_renaming__TypeInfo_33_33, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_11)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamingProc_20)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_22, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_23);
#line 1045 "rbmm.condition_renaming.m"
      return;
    }
#line 1036 "rbmm.condition_renaming.m"
  }
#line 1030 "rbmm.condition_renaming.m"
}

#line 1000 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(
#line 1000 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPath_5,
#line 1000 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__RevPathToCond_6,
#line 1000 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_0_11,
#line 1000 "rbmm.condition_renaming.m"
  MR_Integer * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_12)
#line 1000 "rbmm.condition_renaming.m"
{
#line 1005 "rbmm.condition_renaming.m"
  while (MR_TRUE)
#line 1005 "rbmm.condition_renaming.m"
    {
#line 1005 "rbmm.condition_renaming.m"
      /* tailcall optimized into a loop */
#line 1005 "rbmm.condition_renaming.m"
      {
#line 1005 "rbmm.condition_renaming.m"
        MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 1005 "rbmm.condition_renaming.m"
        if ((transform_hlds__rbmm__condition_renaming__RevPath_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1015 "rbmm.condition_renaming.m"
          {
#line 1016 "rbmm.condition_renaming.m"
            *transform_hlds__rbmm__condition_renaming__RevPathToCond_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1016 "rbmm.condition_renaming.m"
            *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_12 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_0_11;
#line 1015 "rbmm.condition_renaming.m"
          }
#line 1005 "rbmm.condition_renaming.m"
        else
#line 1005 "rbmm.condition_renaming.m"
          {
#line 1005 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__RevInitialPath_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPath_5, (MR_Integer) 0)));
#line 1005 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__LastStep_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPath_5, (MR_Integer) 1)));

#line 1006 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = (transform_hlds__rbmm__condition_renaming__LastStep_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1010 "rbmm.condition_renaming.m"
            if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 1007 "rbmm.condition_renaming.m"
              {
#line 1007 "rbmm.condition_renaming.m"
                MR_Integer transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_13_13;
#line 1008 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__V_10_10;

#line 1007 "rbmm.condition_renaming.m"
                *transform_hlds__rbmm__condition_renaming__RevPathToCond_6 = transform_hlds__rbmm__condition_renaming__RevPath_5;
#line 1008 "rbmm.condition_renaming.m"
                {
#line 1008 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(transform_hlds__rbmm__condition_renaming__RevInitialPath_8, &transform_hlds__rbmm__condition_renaming__V_10_10, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_0_11, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_13_13);
                }
#line 1009 "rbmm.condition_renaming.m"
                *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_12 = (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_HowMany_13_13 + (MR_Integer) 1);
#line 1007 "rbmm.condition_renaming.m"
              }
#line 1010 "rbmm.condition_renaming.m"
            else
#line 1011 "rbmm.condition_renaming.m"
              {
#line 1011 "rbmm.condition_renaming.m"
                /* direct tailcall eliminated */
#line 1011 "rbmm.condition_renaming.m"
                {
#line 1011 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__RevPath__tmp_copy_5 = transform_hlds__rbmm__condition_renaming__RevInitialPath_8;

#line 1011 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__RevPath_5 = transform_hlds__rbmm__condition_renaming__RevPath__tmp_copy_5;
#line 1011 "rbmm.condition_renaming.m"
                }
#line 1011 "rbmm.condition_renaming.m"
                continue;
#line 1011 "rbmm.condition_renaming.m"
              }
#line 1005 "rbmm.condition_renaming.m"
          }
#line 1005 "rbmm.condition_renaming.m"
      }
#line 1005 "rbmm.condition_renaming.m"
      break;
#line 1005 "rbmm.condition_renaming.m"
    }
#line 1000 "rbmm.condition_renaming.m"
}

#line 978 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_case_5_p_0(
#line 978 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 978 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 978 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_8,
#line 978 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_13,
#line 978 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_14)
#line 978 "rbmm.condition_renaming.m"
{
#line 983 "rbmm.condition_renaming.m"
  {
#line 983 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 983 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_8, (MR_Integer) 2)));
#line 984 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_8, (MR_Integer) 0)));
#line 984 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_8, (MR_Integer) 1)));

#line 985 "rbmm.condition_renaming.m"
    {
#line 985 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Goal_12, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_13, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_14);
#line 985 "rbmm.condition_renaming.m"
      return;
    }
#line 983 "rbmm.condition_renaming.m"
  }
#line 978 "rbmm.condition_renaming.m"
}

#line 944 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_3(
#line 944 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 944 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 944 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 944 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 944 "rbmm.condition_renaming.m"
{
#line 944 "rbmm.condition_renaming.m"
  {
#line 944 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 944 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_14;

#line 944 "rbmm.condition_renaming.m"
    {
#line 944 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_case_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_14);
    }
#line 944 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_14));
#line 944 "rbmm.condition_renaming.m"
  }
#line 944 "rbmm.condition_renaming.m"
}

#line 939 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_2(
#line 939 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 939 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 939 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 939 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 939 "rbmm.condition_renaming.m"
{
#line 939 "rbmm.condition_renaming.m"
  {
#line 939 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 939 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_20;

#line 939 "rbmm.condition_renaming.m"
    {
#line 939 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_20);
    }
#line 939 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_20));
#line 939 "rbmm.condition_renaming.m"
  }
#line 939 "rbmm.condition_renaming.m"
}

#line 934 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_1(
#line 934 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 934 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 934 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 934 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 934 "rbmm.condition_renaming.m"
{
#line 934 "rbmm.condition_renaming.m"
  {
#line 934 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 934 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingProc_20;

#line 934 "rbmm.condition_renaming.m"
    {
#line 934 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingProc_20);
    }
#line 934 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingProc_20));
#line 934 "rbmm.condition_renaming.m"
  }
#line 934 "rbmm.condition_renaming.m"
}

#line 925 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0(
#line 925 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 925 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 925 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__GoalInCond_8,
#line 925 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_51,
#line 925 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_52)
#line 925 "rbmm.condition_renaming.m"
{
#line 930 "rbmm.condition_renaming.m"
  {
#line 930 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 930 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Expr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__GoalInCond_8, (MR_Integer) 0)));
#line 931 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__GoalInCond_8, (MR_Integer) 1)));

#line 937 "rbmm.condition_renaming.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_10)) == (MR_mktag((MR_Integer) 0))))
#line 949 "rbmm.condition_renaming.m"
      {
#line 949 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__Goal_20 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_10), (MR_Integer) 0);

#line 950 "rbmm.condition_renaming.m"
        {
#line 950 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Goal_20, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_51, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_52);
#line 950 "rbmm.condition_renaming.m"
          return;
        }
#line 949 "rbmm.condition_renaming.m"
      }
#line 937 "rbmm.condition_renaming.m"
    else
#line 937 "rbmm.condition_renaming.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_10)) == (MR_mktag((MR_Integer) 2))))
#line 974 "rbmm.condition_renaming.m"
        {
#line 975 "rbmm.condition_renaming.m"
          {
#line 975 "rbmm.condition_renaming.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
#line 975 "rbmm.condition_renaming.m"
            return;
          }
#line 974 "rbmm.condition_renaming.m"
        }
#line 937 "rbmm.condition_renaming.m"
      else
#line 937 "rbmm.condition_renaming.m"
        if (((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_10)) == (MR_mktag((MR_Integer) 1))))
#line 974 "rbmm.condition_renaming.m"
          {
#line 975 "rbmm.condition_renaming.m"
            {
#line 975 "rbmm.condition_renaming.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
#line 975 "rbmm.condition_renaming.m"
              return;
            }
#line 974 "rbmm.condition_renaming.m"
          }
#line 937 "rbmm.condition_renaming.m"
        else
#line 937 "rbmm.condition_renaming.m"
          if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 974 "rbmm.condition_renaming.m"
            {
#line 975 "rbmm.condition_renaming.m"
              {
#line 975 "rbmm.condition_renaming.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
#line 975 "rbmm.condition_renaming.m"
                return;
              }
#line 974 "rbmm.condition_renaming.m"
            }
#line 937 "rbmm.condition_renaming.m"
          else
#line 937 "rbmm.condition_renaming.m"
            if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 937 "rbmm.condition_renaming.m"
              {
#line 937 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 2)));
#line 933 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 1)));

#line 937 "rbmm.condition_renaming.m"
                if ((transform_hlds__rbmm__condition_renaming__V_113_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 974 "rbmm.condition_renaming.m"
                  {
#line 975 "rbmm.condition_renaming.m"
                    {
#line 975 "rbmm.condition_renaming.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
#line 975 "rbmm.condition_renaming.m"
                      return;
                    }
#line 974 "rbmm.condition_renaming.m"
                  }
#line 937 "rbmm.condition_renaming.m"
                else
#line 933 "rbmm.condition_renaming.m"
                  {
#line 933 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__V_70_70;
#line 934 "rbmm.condition_renaming.m"
                    MR_Box transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_52;

#line 934 "rbmm.condition_renaming.m"
                    {
#line 934 "rbmm.condition_renaming.m"
                      transform_hlds__rbmm__condition_renaming__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 934 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_70_70, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[4]));
#line 934 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_70_70, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_1));
#line 934 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 934 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_70_70, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6));
#line 934 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_70_70, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_7));
#line 934 "rbmm.condition_renaming.m"
                    }
#line 934 "rbmm.condition_renaming.m"
                    {
#line 934 "rbmm.condition_renaming.m"
                      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], transform_hlds__rbmm__condition_renaming__V_70_70, transform_hlds__rbmm__condition_renaming__V_113_113, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_51)), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_52);
                    }
#line 934 "rbmm.condition_renaming.m"
                    *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_52 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_52);
#line 933 "rbmm.condition_renaming.m"
                  }
#line 937 "rbmm.condition_renaming.m"
              }
#line 937 "rbmm.condition_renaming.m"
            else
#line 937 "rbmm.condition_renaming.m"
              if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 937 "rbmm.condition_renaming.m"
                {
#line 937 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 1)));

#line 937 "rbmm.condition_renaming.m"
                  if ((transform_hlds__rbmm__condition_renaming__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 974 "rbmm.condition_renaming.m"
                    {
#line 975 "rbmm.condition_renaming.m"
                      {
#line 975 "rbmm.condition_renaming.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
#line 975 "rbmm.condition_renaming.m"
                        return;
                      }
#line 974 "rbmm.condition_renaming.m"
                    }
#line 937 "rbmm.condition_renaming.m"
                  else
#line 938 "rbmm.condition_renaming.m"
                    {
#line 938 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__V_66_66;
#line 939 "rbmm.condition_renaming.m"
                      MR_Box transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_52;

#line 939 "rbmm.condition_renaming.m"
                      {
#line 939 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 939 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_66_66, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[4]));
#line 939 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_66_66, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_2));
#line 939 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 939 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_66_66, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6));
#line 939 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_66_66, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_7));
#line 939 "rbmm.condition_renaming.m"
                      }
#line 939 "rbmm.condition_renaming.m"
                      {
#line 939 "rbmm.condition_renaming.m"
                        mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], transform_hlds__rbmm__condition_renaming__V_66_66, transform_hlds__rbmm__condition_renaming__V_115_115, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_51)), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_52);
                      }
#line 939 "rbmm.condition_renaming.m"
                      *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_52 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_52);
#line 938 "rbmm.condition_renaming.m"
                    }
#line 937 "rbmm.condition_renaming.m"
                }
#line 937 "rbmm.condition_renaming.m"
              else
#line 937 "rbmm.condition_renaming.m"
                if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 974 "rbmm.condition_renaming.m"
                  {
#line 975 "rbmm.condition_renaming.m"
                    {
#line 975 "rbmm.condition_renaming.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
#line 975 "rbmm.condition_renaming.m"
                      return;
                    }
#line 974 "rbmm.condition_renaming.m"
                  }
#line 937 "rbmm.condition_renaming.m"
                else
#line 937 "rbmm.condition_renaming.m"
                  if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 959 "rbmm.condition_renaming.m"
                    {
#line 959 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__Cond_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 2)));
#line 959 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__Then_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 3)));
#line 959 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__Else_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 4)));
#line 959 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_58_58;
#line 959 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_59_59;
#line 959 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 1)));

#line 960 "rbmm.condition_renaming.m"
                      {
#line 960 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Cond_23, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_51, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_58_58);
                      }
#line 962 "rbmm.condition_renaming.m"
                      {
#line 962 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Then_24, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_58_58, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_59_59);
                      }
#line 964 "rbmm.condition_renaming.m"
                      {
#line 964 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Else_25, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_59_59, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_52);
#line 964 "rbmm.condition_renaming.m"
                        return;
                      }
#line 959 "rbmm.condition_renaming.m"
                    }
#line 937 "rbmm.condition_renaming.m"
                  else
#line 937 "rbmm.condition_renaming.m"
                    if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 953 "rbmm.condition_renaming.m"
                      {
#line 953 "rbmm.condition_renaming.m"
                        MR_Word transform_hlds__rbmm__condition_renaming__Goal_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 2)));
#line 953 "rbmm.condition_renaming.m"
                        MR_Word transform_hlds__rbmm__condition_renaming__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 1)));

#line 956 "rbmm.condition_renaming.m"
                        {
#line 956 "rbmm.condition_renaming.m"
                          transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Goal_73, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_51, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_52);
#line 956 "rbmm.condition_renaming.m"
                          return;
                        }
#line 953 "rbmm.condition_renaming.m"
                      }
#line 937 "rbmm.condition_renaming.m"
                    else
#line 937 "rbmm.condition_renaming.m"
                      if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 974 "rbmm.condition_renaming.m"
                        {
#line 975 "rbmm.condition_renaming.m"
                          {
#line 975 "rbmm.condition_renaming.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
#line 975 "rbmm.condition_renaming.m"
                            return;
                          }
#line 974 "rbmm.condition_renaming.m"
                        }
#line 937 "rbmm.condition_renaming.m"
                      else
#line 943 "rbmm.condition_renaming.m"
                        {
#line 943 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 3)));
#line 943 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__V_63_63;
#line 943 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 1)));
#line 943 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_10, (MR_Integer) 2)));
#line 944 "rbmm.condition_renaming.m"
                          MR_Box transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_IteRenamingProc_52;

#line 944 "rbmm.condition_renaming.m"
                          {
#line 944 "rbmm.condition_renaming.m"
                            transform_hlds__rbmm__condition_renaming__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 944 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_63_63, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[5]));
#line 944 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_63_63, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_3));
#line 944 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 944 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_63_63, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6));
#line 944 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_63_63, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_7));
#line 944 "rbmm.condition_renaming.m"
                          }
#line 944 "rbmm.condition_renaming.m"
                          {
#line 944 "rbmm.condition_renaming.m"
                            mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], transform_hlds__rbmm__condition_renaming__V_63_63, transform_hlds__rbmm__condition_renaming__Cases_19, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_51)), &transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_IteRenamingProc_52);
                          }
#line 944 "rbmm.condition_renaming.m"
                          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_52 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_IteRenamingProc_52);
#line 943 "rbmm.condition_renaming.m"
                        }
#line 930 "rbmm.condition_renaming.m"
  }
#line 925 "rbmm.condition_renaming.m"
}

#line 913 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_p_0(
#line 913 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_7,
#line 913 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_8,
#line 913 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming___Graph_9,
#line 913 "rbmm.condition_renaming.m"
  MR_String transform_hlds__rbmm__condition_renaming__RegName_10,
#line 913 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_15,
#line 913 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_16)
#line 913 "rbmm.condition_renaming.m"
{
#line 916 "rbmm.condition_renaming.m"
  {
#line 916 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 916 "rbmm.condition_renaming.m"
    {
#line 916 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_116_101_95_114_101_110_97_109_105_110_103_95_95_91_51_93_95_48_6_p_0(transform_hlds__rbmm__condition_renaming__ProgPoint_7, transform_hlds__rbmm__condition_renaming__HowMany_8, transform_hlds__rbmm__condition_renaming__RegName_10, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_15, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_16);
#line 916 "rbmm.condition_renaming.m"
      return;
    }
#line 916 "rbmm.condition_renaming.m"
  }
#line 913 "rbmm.condition_renaming.m"
}

#line 898 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0_1(
#line 898 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 898 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 898 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 898 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 898 "rbmm.condition_renaming.m"
{
#line 898 "rbmm.condition_renaming.m"
  {
#line 898 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 898 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_16;

#line 898 "rbmm.condition_renaming.m"
    {
#line 898 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_String) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_16);
    }
#line 898 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_16));
#line 898 "rbmm.condition_renaming.m"
  }
#line 898 "rbmm.condition_renaming.m"
}

#line 876 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(
#line 876 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 876 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 876 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Cond_8,
#line 876 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_19,
#line 876 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_20)
#line 876 "rbmm.condition_renaming.m"
{
#line 881 "rbmm.condition_renaming.m"
  {
#line 881 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 881 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__CondExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Cond_8, (MR_Integer) 0)));
#line 881 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__CondInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Cond_8, (MR_Integer) 1)));
#line 881 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__HasSubGoals_12;

#line 883 "rbmm.condition_renaming.m"
    {
#line 883 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__HasSubGoals_12 = hlds__hlds_goal__goal_expr_has_subgoals_1_f_0(transform_hlds__rbmm__condition_renaming__CondExpr_10);
    }
#line 905 "rbmm.condition_renaming.m"
    if ((transform_hlds__rbmm__condition_renaming__HasSubGoals_12 == (MR_Integer) 1))
#line 885 "rbmm.condition_renaming.m"
      {
#line 885 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_13;
#line 885 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RevGoalPath_15;
#line 885 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RevPathToClosestCond_16;
#line 885 "rbmm.condition_renaming.m"
        MR_Integer transform_hlds__rbmm__condition_renaming__HowMany_17;
#line 891 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_14_14;
#line 900 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_18;
#line 895 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv0_RenamedRegions_18;

#line 886 "rbmm.condition_renaming.m"
        {
#line 886 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__ProgPoint_13 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__condition_renaming__CondInfo_11);
        }
#line 891 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__ProgPoint_13, (MR_Integer) 0)));
#line 891 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__RevGoalPath_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__ProgPoint_13, (MR_Integer) 1)));
#line 892 "rbmm.condition_renaming.m"
        {
#line 892 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(transform_hlds__rbmm__condition_renaming__RevGoalPath_15, &transform_hlds__rbmm__condition_renaming__RevPathToClosestCond_16, (MR_Integer) 0, &transform_hlds__rbmm__condition_renaming__HowMany_17);
        }
#line 895 "rbmm.condition_renaming.m"
        {
#line 895 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0], transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RevPathToClosestCond_16)), &transform_hlds__rbmm__condition_renaming__conv0_RenamedRegions_18);
        }
#line 895 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 895 "rbmm.condition_renaming.m"
          {
#line 895 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__RenamedRegions_18 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_RenamedRegions_18);
#line 895 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 895 "rbmm.condition_renaming.m"
          }
#line 900 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 898 "rbmm.condition_renaming.m"
          {
#line 898 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__V_23_23;
#line 898 "rbmm.condition_renaming.m"
            MR_Box transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_20;

#line 898 "rbmm.condition_renaming.m"
            {
#line 898 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 898 "rbmm.condition_renaming.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_23_23, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_5[1]));
#line 898 "rbmm.condition_renaming.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_23_23, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0_1));
#line 898 "rbmm.condition_renaming.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 898 "rbmm.condition_renaming.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_23_23, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_13));
#line 898 "rbmm.condition_renaming.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_23_23, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__HowMany_17));
#line 898 "rbmm.condition_renaming.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_23_23, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_7));
#line 898 "rbmm.condition_renaming.m"
            }
#line 898 "rbmm.condition_renaming.m"
            {
#line 898 "rbmm.condition_renaming.m"
              mercury__set__fold_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], transform_hlds__rbmm__condition_renaming__V_23_23, transform_hlds__rbmm__condition_renaming__RenamedRegions_18, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_19)), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_20);
            }
#line 898 "rbmm.condition_renaming.m"
            *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_20 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_20);
#line 898 "rbmm.condition_renaming.m"
          }
#line 900 "rbmm.condition_renaming.m"
        else
#line 898 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_20 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_19;
#line 885 "rbmm.condition_renaming.m"
      }
#line 905 "rbmm.condition_renaming.m"
    else
#line 907 "rbmm.condition_renaming.m"
      {
#line 907 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Cond_8, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_19, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_20);
#line 907 "rbmm.condition_renaming.m"
        return;
      }
#line 881 "rbmm.condition_renaming.m"
  }
#line 876 "rbmm.condition_renaming.m"
}

#line 865 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_case_5_p_0(
#line 865 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 865 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 865 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_8,
#line 865 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_13,
#line 865 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_14)
#line 865 "rbmm.condition_renaming.m"
{
#line 869 "rbmm.condition_renaming.m"
  {
#line 869 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 869 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_8, (MR_Integer) 2)));
#line 870 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_8, (MR_Integer) 0)));
#line 870 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_8, (MR_Integer) 1)));

#line 871 "rbmm.condition_renaming.m"
    {
#line 871 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Goal_12, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_13, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_14);
#line 871 "rbmm.condition_renaming.m"
      return;
    }
#line 869 "rbmm.condition_renaming.m"
  }
#line 865 "rbmm.condition_renaming.m"
}

#line 838 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_3(
#line 838 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 838 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 838 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 838 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 838 "rbmm.condition_renaming.m"
{
#line 838 "rbmm.condition_renaming.m"
  {
#line 838 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 838 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_14;

#line 838 "rbmm.condition_renaming.m"
    {
#line 838 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_case_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_14);
    }
#line 838 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_IteRenamingProc_14));
#line 838 "rbmm.condition_renaming.m"
  }
#line 838 "rbmm.condition_renaming.m"
}

#line 834 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_2(
#line 834 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 834 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 834 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 834 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 834 "rbmm.condition_renaming.m"
{
#line 834 "rbmm.condition_renaming.m"
  {
#line 834 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 834 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_49;

#line 834 "rbmm.condition_renaming.m"
    {
#line 834 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_49);
    }
#line 834 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_IteRenamingProc_49));
#line 834 "rbmm.condition_renaming.m"
  }
#line 834 "rbmm.condition_renaming.m"
}

#line 830 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_1(
#line 830 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 830 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 830 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 830 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 830 "rbmm.condition_renaming.m"
{
#line 830 "rbmm.condition_renaming.m"
  {
#line 830 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 830 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingProc_49;

#line 830 "rbmm.condition_renaming.m"
    {
#line 830 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingProc_49);
    }
#line 830 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingProc_49));
#line 830 "rbmm.condition_renaming.m"
  }
#line 830 "rbmm.condition_renaming.m"
}

#line 816 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(
#line 816 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6,
#line 816 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_7,
#line 816 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Goal_8,
#line 816 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48,
#line 816 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49)
#line 816 "rbmm.condition_renaming.m"
{
#line 820 "rbmm.condition_renaming.m"
  while (MR_TRUE)
#line 820 "rbmm.condition_renaming.m"
    {
#line 820 "rbmm.condition_renaming.m"
      /* tailcall optimized into a loop */
#line 820 "rbmm.condition_renaming.m"
      {
#line 820 "rbmm.condition_renaming.m"
        MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 820 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Goal_8, (MR_Integer) 0)));
#line 821 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Goal_8, (MR_Integer) 1)));

#line 828 "rbmm.condition_renaming.m"
        if (((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__GoalExpr_10)) == (MR_mktag((MR_Integer) 0))))
#line 841 "rbmm.condition_renaming.m"
          {
#line 841 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__SubGoal_41 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__condition_renaming__GoalExpr_10), (MR_Integer) 0);

#line 842 "rbmm.condition_renaming.m"
            /* direct tailcall eliminated */
#line 842 "rbmm.condition_renaming.m"
            {
#line 842 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__Goal__tmp_copy_8 = transform_hlds__rbmm__condition_renaming__SubGoal_41;

#line 842 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__Goal_8 = transform_hlds__rbmm__condition_renaming__Goal__tmp_copy_8;
#line 842 "rbmm.condition_renaming.m"
            }
#line 842 "rbmm.condition_renaming.m"
            continue;
#line 841 "rbmm.condition_renaming.m"
          }
#line 828 "rbmm.condition_renaming.m"
        else
#line 828 "rbmm.condition_renaming.m"
          if (((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__GoalExpr_10)) == (MR_mktag((MR_Integer) 2))))
#line 824 "rbmm.condition_renaming.m"
            *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48;
#line 828 "rbmm.condition_renaming.m"
          else
#line 828 "rbmm.condition_renaming.m"
            if (((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__GoalExpr_10)) == (MR_mktag((MR_Integer) 1))))
#line 823 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48;
#line 828 "rbmm.condition_renaming.m"
            else
#line 828 "rbmm.condition_renaming.m"
              if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 826 "rbmm.condition_renaming.m"
                *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48;
#line 828 "rbmm.condition_renaming.m"
              else
#line 828 "rbmm.condition_renaming.m"
                if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 829 "rbmm.condition_renaming.m"
                  {
#line 829 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__Conjs_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 2)));
#line 829 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__V_62_62;
#line 829 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 1)));
#line 830 "rbmm.condition_renaming.m"
                    MR_Box transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_49;

#line 830 "rbmm.condition_renaming.m"
                    {
#line 830 "rbmm.condition_renaming.m"
                      transform_hlds__rbmm__condition_renaming__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 830 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_62_62, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[4]));
#line 830 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_62_62, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_1));
#line 830 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 830 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_62_62, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6));
#line 830 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_62_62, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_7));
#line 830 "rbmm.condition_renaming.m"
                    }
#line 830 "rbmm.condition_renaming.m"
                    {
#line 830 "rbmm.condition_renaming.m"
                      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], transform_hlds__rbmm__condition_renaming__V_62_62, transform_hlds__rbmm__condition_renaming__Conjs_36, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48)), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_49);
                    }
#line 830 "rbmm.condition_renaming.m"
                    *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingProc_49);
#line 829 "rbmm.condition_renaming.m"
                  }
#line 828 "rbmm.condition_renaming.m"
                else
#line 828 "rbmm.condition_renaming.m"
                  if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 833 "rbmm.condition_renaming.m"
                    {
#line 833 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__Disjs_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 1)));
#line 833 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__V_60_60;
#line 834 "rbmm.condition_renaming.m"
                      MR_Box transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_49;

#line 834 "rbmm.condition_renaming.m"
                      {
#line 834 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 834 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_60_60, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[4]));
#line 834 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_60_60, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_2));
#line 834 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 834 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_60_60, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6));
#line 834 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_60_60, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_7));
#line 834 "rbmm.condition_renaming.m"
                      }
#line 834 "rbmm.condition_renaming.m"
                      {
#line 834 "rbmm.condition_renaming.m"
                        mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], transform_hlds__rbmm__condition_renaming__V_60_60, transform_hlds__rbmm__condition_renaming__Disjs_37, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48)), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_49);
                      }
#line 834 "rbmm.condition_renaming.m"
                      *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingProc_49);
#line 833 "rbmm.condition_renaming.m"
                    }
#line 828 "rbmm.condition_renaming.m"
                  else
#line 828 "rbmm.condition_renaming.m"
                    if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 825 "rbmm.condition_renaming.m"
                      *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48;
#line 828 "rbmm.condition_renaming.m"
                    else
#line 828 "rbmm.condition_renaming.m"
                      if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 851 "rbmm.condition_renaming.m"
                        {
#line 851 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__Cond_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 2)));
#line 851 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__Then_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 3)));
#line 851 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__Else_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 4)));
#line 851 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_53_53;
#line 851 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_54_54;
#line 851 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 1)));

#line 853 "rbmm.condition_renaming.m"
                          {
#line 853 "rbmm.condition_renaming.m"
                            transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Cond_44, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_53_53);
                          }
#line 856 "rbmm.condition_renaming.m"
                          {
#line 856 "rbmm.condition_renaming.m"
                            transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6, transform_hlds__rbmm__condition_renaming__Graph_7, transform_hlds__rbmm__condition_renaming__Then_45, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_53_53, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_54_54);
                          }
#line 858 "rbmm.condition_renaming.m"
                          /* direct tailcall eliminated */
#line 858 "rbmm.condition_renaming.m"
                          {
#line 858 "rbmm.condition_renaming.m"
                            MR_Word transform_hlds__rbmm__condition_renaming__Goal__tmp_copy_8 = transform_hlds__rbmm__condition_renaming__Else_46;
#line 858 "rbmm.condition_renaming.m"
                            MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0__tmp_copy_48 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_54_54;

#line 858 "rbmm.condition_renaming.m"
                            transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0__tmp_copy_48;
#line 858 "rbmm.condition_renaming.m"
                            transform_hlds__rbmm__condition_renaming__Goal_8 = transform_hlds__rbmm__condition_renaming__Goal__tmp_copy_8;
#line 858 "rbmm.condition_renaming.m"
                          }
#line 858 "rbmm.condition_renaming.m"
                          continue;
#line 851 "rbmm.condition_renaming.m"
                        }
#line 828 "rbmm.condition_renaming.m"
                      else
#line 828 "rbmm.condition_renaming.m"
                        if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 845 "rbmm.condition_renaming.m"
                          {
#line 845 "rbmm.condition_renaming.m"
                            MR_Word transform_hlds__rbmm__condition_renaming__SubGoal_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 2)));
#line 845 "rbmm.condition_renaming.m"
                            MR_Word transform_hlds__rbmm__condition_renaming__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 1)));

#line 848 "rbmm.condition_renaming.m"
                            /* direct tailcall eliminated */
#line 848 "rbmm.condition_renaming.m"
                            {
#line 848 "rbmm.condition_renaming.m"
                              MR_Word transform_hlds__rbmm__condition_renaming__Goal__tmp_copy_8 = transform_hlds__rbmm__condition_renaming__SubGoal_64;

#line 848 "rbmm.condition_renaming.m"
                              transform_hlds__rbmm__condition_renaming__Goal_8 = transform_hlds__rbmm__condition_renaming__Goal__tmp_copy_8;
#line 848 "rbmm.condition_renaming.m"
                            }
#line 848 "rbmm.condition_renaming.m"
                            continue;
#line 845 "rbmm.condition_renaming.m"
                          }
#line 828 "rbmm.condition_renaming.m"
                        else
#line 828 "rbmm.condition_renaming.m"
                          if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 861 "rbmm.condition_renaming.m"
                            {
#line 862 "rbmm.condition_renaming.m"
                              {
#line 862 "rbmm.condition_renaming.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_goal\'/5", (MR_String) "shorthand");
#line 862 "rbmm.condition_renaming.m"
                                return;
                              }
#line 861 "rbmm.condition_renaming.m"
                            }
#line 828 "rbmm.condition_renaming.m"
                          else
#line 837 "rbmm.condition_renaming.m"
                            {
#line 837 "rbmm.condition_renaming.m"
                              MR_Word transform_hlds__rbmm__condition_renaming__Cases_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 3)));
#line 837 "rbmm.condition_renaming.m"
                              MR_Word transform_hlds__rbmm__condition_renaming__V_58_58;
#line 837 "rbmm.condition_renaming.m"
                              MR_Word transform_hlds__rbmm__condition_renaming__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 1)));
#line 837 "rbmm.condition_renaming.m"
                              MR_Word transform_hlds__rbmm__condition_renaming__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__GoalExpr_10, (MR_Integer) 2)));
#line 838 "rbmm.condition_renaming.m"
                              MR_Box transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_IteRenamingProc_49;

#line 838 "rbmm.condition_renaming.m"
                              {
#line 838 "rbmm.condition_renaming.m"
                                transform_hlds__rbmm__condition_renaming__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 838 "rbmm.condition_renaming.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_58_58, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[5]));
#line 838 "rbmm.condition_renaming.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_58_58, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_3));
#line 838 "rbmm.condition_renaming.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 838 "rbmm.condition_renaming.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_58_58, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_6));
#line 838 "rbmm.condition_renaming.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_58_58, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_7));
#line 838 "rbmm.condition_renaming.m"
                              }
#line 838 "rbmm.condition_renaming.m"
                              {
#line 838 "rbmm.condition_renaming.m"
                                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], transform_hlds__rbmm__condition_renaming__V_58_58, transform_hlds__rbmm__condition_renaming__Cases_40, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_0_48)), &transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_IteRenamingProc_49);
                              }
#line 838 "rbmm.condition_renaming.m"
                              *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingProc_49 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_IteRenamingProc_49);
#line 837 "rbmm.condition_renaming.m"
                            }
#line 820 "rbmm.condition_renaming.m"
      }
#line 820 "rbmm.condition_renaming.m"
      break;
#line 820 "rbmm.condition_renaming.m"
    }
#line 816 "rbmm.condition_renaming.m"
}

#line 801 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_p_0(
#line 801 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ModuleInfo_7,
#line 801 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_8,
#line 801 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PPId_9,
#line 801 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_10,
#line 801 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_19,
#line 801 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_20)
#line 801 "rbmm.condition_renaming.m"
{
#line 806 "rbmm.condition_renaming.m"
  {
#line 806 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 806 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23;
#line 806 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__ProcInfo0_12;
#line 806 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__ProcInfo_13;
#line 806 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Goal_14;
#line 806 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__RptaInfo_15;
#line 806 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Graph_16;
#line 806 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__IteRenamingProc_18;
#line 806 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_21_21;
#line 810 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv0_RptaInfo_15;
#line 811 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_17_17;

#line 807 "rbmm.condition_renaming.m"
    {
#line 807 "rbmm.condition_renaming.m"
      hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__condition_renaming__ModuleInfo_7, transform_hlds__rbmm__condition_renaming__PPId_9, &transform_hlds__rbmm__condition_renaming__ProcInfo0_12);
    }
#line 808 "rbmm.condition_renaming.m"
    {
#line 808 "rbmm.condition_renaming.m"
      hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(transform_hlds__rbmm__condition_renaming__ModuleInfo_7, transform_hlds__rbmm__condition_renaming__ProcInfo0_12, &transform_hlds__rbmm__condition_renaming__ProcInfo_13);
    }
#line 809 "rbmm.condition_renaming.m"
    {
#line 809 "rbmm.condition_renaming.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__condition_renaming__ProcInfo_13, &transform_hlds__rbmm__condition_renaming__Goal_14);
    }
#line 4625 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 810 "rbmm.condition_renaming.m"
    {
#line 810 "rbmm.condition_renaming.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__condition_renaming__RptaInfoTable_8, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_9)), &transform_hlds__rbmm__condition_renaming__conv0_RptaInfo_15);
    }
#line 810 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__RptaInfo_15 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_RptaInfo_15);
#line 811 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__Graph_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__RptaInfo_15, (MR_Integer) 0)));
#line 811 "rbmm.condition_renaming.m"
    transform_hlds__rbmm__condition_renaming__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__RptaInfo_15, (MR_Integer) 1)));
#line 812 "rbmm.condition_renaming.m"
    {
#line 812 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_21_21 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2]);
    }
#line 812 "rbmm.condition_renaming.m"
    {
#line 812 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_10, transform_hlds__rbmm__condition_renaming__Graph_16, transform_hlds__rbmm__condition_renaming__Goal_14, transform_hlds__rbmm__condition_renaming__V_21_21, &transform_hlds__rbmm__condition_renaming__IteRenamingProc_18);
    }
#line 814 "rbmm.condition_renaming.m"
    {
#line 814 "rbmm.condition_renaming.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_9)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamingProc_18)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_19, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_20);
#line 814 "rbmm.condition_renaming.m"
      return;
    }
#line 806 "rbmm.condition_renaming.m"
  }
#line 801 "rbmm.condition_renaming.m"
}

#line 774 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_p_0(
#line 774 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_6,
#line 774 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PathToCond_7,
#line 774 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__InCondRegions_8,
#line 774 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_0_12,
#line 774 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_13)
#line 774 "rbmm.condition_renaming.m"
{
#line 787 "rbmm.condition_renaming.m"
  {
#line 787 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 787 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegions_10;
#line 780 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegions_10;

#line 780 "rbmm.condition_renaming.m"
    {
#line 780 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0], transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_6, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PathToCond_7)), &transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegions_10);
    }
#line 780 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 780 "rbmm.condition_renaming.m"
      {
#line 780 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__NonLocalRegions_10 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegions_10);
#line 780 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 780 "rbmm.condition_renaming.m"
      }
#line 787 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 781 "rbmm.condition_renaming.m"
      {
#line 781 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 781 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegions_11;

#line 781 "rbmm.condition_renaming.m"
        {
#line 781 "rbmm.condition_renaming.m"
          mercury__set__intersect_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_17_17, transform_hlds__rbmm__condition_renaming__NonLocalRegions_10, transform_hlds__rbmm__condition_renaming__InCondRegions_8, &transform_hlds__rbmm__condition_renaming__RenamedRegions_11);
        }
#line 782 "rbmm.condition_renaming.m"
        {
#line 782 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__succeeded = mercury__set__empty_1_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_17_17, transform_hlds__rbmm__condition_renaming__RenamedRegions_11);
        }
#line 784 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 782 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_13 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_0_12;
#line 784 "rbmm.condition_renaming.m"
        else
#line 785 "rbmm.condition_renaming.m"
          {
#line 785 "rbmm.condition_renaming.m"
            {
#line 785 "rbmm.condition_renaming.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__condition_renaming__PathToCond_7)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__RenamedRegions_11)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_0_12, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_13);
#line 785 "rbmm.condition_renaming.m"
              return;
            }
#line 785 "rbmm.condition_renaming.m"
          }
#line 781 "rbmm.condition_renaming.m"
      }
#line 787 "rbmm.condition_renaming.m"
    else
#line 785 "rbmm.condition_renaming.m"
      *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_13 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionProc_0_12;
#line 787 "rbmm.condition_renaming.m"
  }
#line 774 "rbmm.condition_renaming.m"
}

#line 763 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0_1(
#line 763 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 763 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 763 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 763 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 763 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4)
#line 763 "rbmm.condition_renaming.m"
{
#line 763 "rbmm.condition_renaming.m"
  {
#line 763 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 763 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamedRegionProc_13;

#line 763 "rbmm.condition_renaming.m"
    {
#line 763 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_3), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamedRegionProc_13);
    }
#line 763 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamedRegionProc_13));
#line 763 "rbmm.condition_renaming.m"
  }
#line 763 "rbmm.condition_renaming.m"
}

#line 755 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0(
#line 755 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegionsTable_6,
#line 755 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PPId_7,
#line 755 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__InCondRegionsProc_8,
#line 755 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_0_12,
#line 755 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_13)
#line 755 "rbmm.condition_renaming.m"
{
#line 770 "rbmm.condition_renaming.m"
  {
#line 770 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 770 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_10;
#line 762 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegionsProc_10;

#line 762 "rbmm.condition_renaming.m"
    {
#line 762 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], transform_hlds__rbmm__condition_renaming__NonLocalRegionsTable_6, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_7)), &transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegionsProc_10);
    }
#line 762 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 762 "rbmm.condition_renaming.m"
      {
#line 762 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_10 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegionsProc_10);
#line 762 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 762 "rbmm.condition_renaming.m"
      }
#line 770 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 764 "rbmm.condition_renaming.m"
      {
#line 764 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_24_24;
#line 764 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_25_25;
#line 764 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_26_26;
#line 764 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_11;
#line 764 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_14_14;
#line 764 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_15_15;
#line 763 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv2_IteRenamedRegionProc_11;
#line 765 "rbmm.condition_renaming.m"
        MR_Integer transform_hlds__rbmm__condition_renaming__V_16_16;

#line 763 "rbmm.condition_renaming.m"
        {
#line 763 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 763 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[3]));
#line 763 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0_1));
#line 763 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 763 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_10));
#line 763 "rbmm.condition_renaming.m"
        }
#line 4854 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeCtorInfo_24_24 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
#line 4856 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeInfo_25_25 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0];
#line 763 "rbmm.condition_renaming.m"
        {
#line 763 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_15_15 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_24_24, transform_hlds__rbmm__condition_renaming__TypeInfo_25_25);
        }
#line 4863 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeInfo_26_26 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0];
#line 763 "rbmm.condition_renaming.m"
        {
#line 763 "rbmm.condition_renaming.m"
          mercury__map__foldl_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_24_24, transform_hlds__rbmm__condition_renaming__TypeInfo_25_25, transform_hlds__rbmm__condition_renaming__TypeInfo_26_26, transform_hlds__rbmm__condition_renaming__V_14_14, transform_hlds__rbmm__condition_renaming__InCondRegionsProc_8, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_15_15)), &transform_hlds__rbmm__condition_renaming__conv2_IteRenamedRegionProc_11);
        }
#line 763 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_11 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_IteRenamedRegionProc_11);
#line 765 "rbmm.condition_renaming.m"
        {
#line 765 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_16_16 = mercury__map__count_1_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_24_24, transform_hlds__rbmm__condition_renaming__TypeInfo_25_25, transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_11);
        }
#line 765 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = (transform_hlds__rbmm__condition_renaming__V_16_16 == (MR_Integer) 0);
#line 767 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 765 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_13 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_0_12;
#line 767 "rbmm.condition_renaming.m"
        else
#line 768 "rbmm.condition_renaming.m"
          {
#line 768 "rbmm.condition_renaming.m"
            {
#line 768 "rbmm.condition_renaming.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__rbmm__condition_renaming__TypeInfo_26_26, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_7)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__IteRenamedRegionProc_11)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_0_12, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_13);
#line 768 "rbmm.condition_renaming.m"
              return;
            }
#line 768 "rbmm.condition_renaming.m"
          }
#line 764 "rbmm.condition_renaming.m"
      }
#line 770 "rbmm.condition_renaming.m"
    else
#line 768 "rbmm.condition_renaming.m"
      *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_13 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamedRegionTable_0_12;
#line 770 "rbmm.condition_renaming.m"
  }
#line 755 "rbmm.condition_renaming.m"
}

#line 729 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_case_8_p_0(
#line 729 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 729 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 729 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 729 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 729 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 729 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_14,
#line 729 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_19,
#line 729 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_20)
#line 729 "rbmm.condition_renaming.m"
{
#line 736 "rbmm.condition_renaming.m"
  {
#line 736 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 736 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_14, (MR_Integer) 2)));
#line 737 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_14, (MR_Integer) 0)));
#line 737 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_14, (MR_Integer) 1)));

#line 738 "rbmm.condition_renaming.m"
    {
#line 738 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Goal_18, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_19, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_20);
#line 738 "rbmm.condition_renaming.m"
      return;
    }
#line 736 "rbmm.condition_renaming.m"
  }
#line 729 "rbmm.condition_renaming.m"
}

#line 684 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_3(
#line 684 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 684 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 684 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 684 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 684 "rbmm.condition_renaming.m"
{
#line 684 "rbmm.condition_renaming.m"
  {
#line 684 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 684 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_InCondRegionsProc_20;

#line 684 "rbmm.condition_renaming.m"
    {
#line 684 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_case_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_InCondRegionsProc_20);
    }
#line 684 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_InCondRegionsProc_20));
#line 684 "rbmm.condition_renaming.m"
  }
#line 684 "rbmm.condition_renaming.m"
}

#line 677 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_2(
#line 677 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 677 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 677 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 677 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 677 "rbmm.condition_renaming.m"
{
#line 677 "rbmm.condition_renaming.m"
  {
#line 677 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 677 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsProc_34;

#line 677 "rbmm.condition_renaming.m"
    {
#line 677 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsProc_34);
    }
#line 677 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsProc_34));
#line 677 "rbmm.condition_renaming.m"
  }
#line 677 "rbmm.condition_renaming.m"
}

#line 670 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_1(
#line 670 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 670 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 670 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 670 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 670 "rbmm.condition_renaming.m"
{
#line 670 "rbmm.condition_renaming.m"
  {
#line 670 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 670 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsProc_34;

#line 670 "rbmm.condition_renaming.m"
    {
#line 670 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsProc_34);
    }
#line 670 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsProc_34));
#line 670 "rbmm.condition_renaming.m"
  }
#line 670 "rbmm.condition_renaming.m"
}

#line 659 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0(
#line 659 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 659 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 659 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 659 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 659 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 659 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__GoalInIte_14,
#line 659 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_57,
#line 659 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_58)
#line 659 "rbmm.condition_renaming.m"
{
#line 666 "rbmm.condition_renaming.m"
  {
#line 666 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 666 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Expr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__GoalInIte_14, (MR_Integer) 0)));
#line 667 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__GoalInIte_14, (MR_Integer) 1)));

#line 675 "rbmm.condition_renaming.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 0))))
#line 690 "rbmm.condition_renaming.m"
      {
#line 690 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__Goal_26 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16), (MR_Integer) 0);

#line 691 "rbmm.condition_renaming.m"
        {
#line 691 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Goal_26, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_57, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_58);
#line 691 "rbmm.condition_renaming.m"
          return;
        }
#line 690 "rbmm.condition_renaming.m"
      }
#line 675 "rbmm.condition_renaming.m"
    else
#line 675 "rbmm.condition_renaming.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 2))))
#line 725 "rbmm.condition_renaming.m"
        {
#line 726 "rbmm.condition_renaming.m"
          {
#line 726 "rbmm.condition_renaming.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 726 "rbmm.condition_renaming.m"
            return;
          }
#line 725 "rbmm.condition_renaming.m"
        }
#line 675 "rbmm.condition_renaming.m"
      else
#line 675 "rbmm.condition_renaming.m"
        if (((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 1))))
#line 725 "rbmm.condition_renaming.m"
          {
#line 726 "rbmm.condition_renaming.m"
            {
#line 726 "rbmm.condition_renaming.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 726 "rbmm.condition_renaming.m"
              return;
            }
#line 725 "rbmm.condition_renaming.m"
          }
#line 675 "rbmm.condition_renaming.m"
        else
#line 675 "rbmm.condition_renaming.m"
          if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 725 "rbmm.condition_renaming.m"
            {
#line 726 "rbmm.condition_renaming.m"
              {
#line 726 "rbmm.condition_renaming.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 726 "rbmm.condition_renaming.m"
                return;
              }
#line 725 "rbmm.condition_renaming.m"
            }
#line 675 "rbmm.condition_renaming.m"
          else
#line 675 "rbmm.condition_renaming.m"
            if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 675 "rbmm.condition_renaming.m"
              {
#line 675 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 2)));
#line 669 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));

#line 675 "rbmm.condition_renaming.m"
                if ((transform_hlds__rbmm__condition_renaming__V_119_119 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 725 "rbmm.condition_renaming.m"
                  {
#line 726 "rbmm.condition_renaming.m"
                    {
#line 726 "rbmm.condition_renaming.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 726 "rbmm.condition_renaming.m"
                      return;
                    }
#line 725 "rbmm.condition_renaming.m"
                  }
#line 675 "rbmm.condition_renaming.m"
                else
#line 669 "rbmm.condition_renaming.m"
                  {
#line 669 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__V_76_76;
#line 670 "rbmm.condition_renaming.m"
                    MR_Box transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_InCondRegionsProc_58;

#line 670 "rbmm.condition_renaming.m"
                    {
#line 670 "rbmm.condition_renaming.m"
                      transform_hlds__rbmm__condition_renaming__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 670 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[1]));
#line 670 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_1));
#line 670 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 670 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_9));
#line 670 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_10));
#line 670 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_11));
#line 670 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12));
#line 670 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13));
#line 670 "rbmm.condition_renaming.m"
                    }
#line 670 "rbmm.condition_renaming.m"
                    {
#line 670 "rbmm.condition_renaming.m"
                      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], transform_hlds__rbmm__condition_renaming__V_76_76, transform_hlds__rbmm__condition_renaming__V_119_119, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_57)), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_InCondRegionsProc_58);
                    }
#line 670 "rbmm.condition_renaming.m"
                    *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_58 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_InCondRegionsProc_58);
#line 669 "rbmm.condition_renaming.m"
                  }
#line 675 "rbmm.condition_renaming.m"
              }
#line 675 "rbmm.condition_renaming.m"
            else
#line 675 "rbmm.condition_renaming.m"
              if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 675 "rbmm.condition_renaming.m"
                {
#line 675 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));

#line 675 "rbmm.condition_renaming.m"
                  if ((transform_hlds__rbmm__condition_renaming__V_121_121 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 725 "rbmm.condition_renaming.m"
                    {
#line 726 "rbmm.condition_renaming.m"
                      {
#line 726 "rbmm.condition_renaming.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 726 "rbmm.condition_renaming.m"
                        return;
                      }
#line 725 "rbmm.condition_renaming.m"
                    }
#line 675 "rbmm.condition_renaming.m"
                  else
#line 676 "rbmm.condition_renaming.m"
                    {
#line 676 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__V_72_72;
#line 677 "rbmm.condition_renaming.m"
                      MR_Box transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_InCondRegionsProc_58;

#line 677 "rbmm.condition_renaming.m"
                      {
#line 677 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 677 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[1]));
#line 677 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_2));
#line 677 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 677 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_9));
#line 677 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_10));
#line 677 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_11));
#line 677 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12));
#line 677 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13));
#line 677 "rbmm.condition_renaming.m"
                      }
#line 677 "rbmm.condition_renaming.m"
                      {
#line 677 "rbmm.condition_renaming.m"
                        mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], transform_hlds__rbmm__condition_renaming__V_72_72, transform_hlds__rbmm__condition_renaming__V_121_121, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_57)), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_InCondRegionsProc_58);
                      }
#line 677 "rbmm.condition_renaming.m"
                      *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_58 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_InCondRegionsProc_58);
#line 676 "rbmm.condition_renaming.m"
                    }
#line 675 "rbmm.condition_renaming.m"
                }
#line 675 "rbmm.condition_renaming.m"
              else
#line 675 "rbmm.condition_renaming.m"
                if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 725 "rbmm.condition_renaming.m"
                  {
#line 726 "rbmm.condition_renaming.m"
                    {
#line 726 "rbmm.condition_renaming.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 726 "rbmm.condition_renaming.m"
                      return;
                    }
#line 725 "rbmm.condition_renaming.m"
                  }
#line 675 "rbmm.condition_renaming.m"
                else
#line 675 "rbmm.condition_renaming.m"
                  if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 704 "rbmm.condition_renaming.m"
                    {
#line 704 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__Cond_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 2)));
#line 704 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__Then_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 3)));
#line 704 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__Else_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 4)));
#line 704 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_64_64;
#line 704 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_65_65;
#line 704 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));

#line 705 "rbmm.condition_renaming.m"
                      {
#line 705 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Cond_29, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_57, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_64_64);
                      }
#line 709 "rbmm.condition_renaming.m"
                      {
#line 709 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Then_30, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_64_64, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_65_65);
                      }
#line 713 "rbmm.condition_renaming.m"
                      {
#line 713 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Else_31, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_65_65, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_58);
#line 713 "rbmm.condition_renaming.m"
                        return;
                      }
#line 704 "rbmm.condition_renaming.m"
                    }
#line 675 "rbmm.condition_renaming.m"
                  else
#line 675 "rbmm.condition_renaming.m"
                    if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 696 "rbmm.condition_renaming.m"
                      {
#line 696 "rbmm.condition_renaming.m"
                        MR_Word transform_hlds__rbmm__condition_renaming__Goal_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 2)));
#line 696 "rbmm.condition_renaming.m"
                        MR_Word transform_hlds__rbmm__condition_renaming__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));

#line 699 "rbmm.condition_renaming.m"
                        {
#line 699 "rbmm.condition_renaming.m"
                          transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Goal_79, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_57, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_58);
#line 699 "rbmm.condition_renaming.m"
                          return;
                        }
#line 696 "rbmm.condition_renaming.m"
                      }
#line 675 "rbmm.condition_renaming.m"
                    else
#line 675 "rbmm.condition_renaming.m"
                      if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 725 "rbmm.condition_renaming.m"
                        {
#line 726 "rbmm.condition_renaming.m"
                          {
#line 726 "rbmm.condition_renaming.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 726 "rbmm.condition_renaming.m"
                            return;
                          }
#line 725 "rbmm.condition_renaming.m"
                        }
#line 675 "rbmm.condition_renaming.m"
                      else
#line 683 "rbmm.condition_renaming.m"
                        {
#line 683 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__Cases_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 3)));
#line 683 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__V_69_69;
#line 683 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));
#line 683 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 2)));
#line 684 "rbmm.condition_renaming.m"
                          MR_Box transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_InCondRegionsProc_58;

#line 684 "rbmm.condition_renaming.m"
                          {
#line 684 "rbmm.condition_renaming.m"
                            transform_hlds__rbmm__condition_renaming__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 684 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[2]));
#line 684 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_3));
#line 684 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 684 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_9));
#line 684 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_10));
#line 684 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_11));
#line 684 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12));
#line 684 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13));
#line 684 "rbmm.condition_renaming.m"
                          }
#line 684 "rbmm.condition_renaming.m"
                          {
#line 684 "rbmm.condition_renaming.m"
                            mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], transform_hlds__rbmm__condition_renaming__V_69_69, transform_hlds__rbmm__condition_renaming__Cases_25, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_57)), &transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_InCondRegionsProc_58);
                          }
#line 684 "rbmm.condition_renaming.m"
                          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_58 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_InCondRegionsProc_58);
#line 683 "rbmm.condition_renaming.m"
                        }
#line 666 "rbmm.condition_renaming.m"
  }
#line 659 "rbmm.condition_renaming.m"
}

#line 630 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_p_0(
#line 630 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPath_5,
#line 630 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Created_6,
#line 630 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_12,
#line 630 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_13)
#line 630 "rbmm.condition_renaming.m"
{
#line 636 "rbmm.condition_renaming.m"
  while (MR_TRUE)
#line 636 "rbmm.condition_renaming.m"
    {
#line 636 "rbmm.condition_renaming.m"
      /* tailcall optimized into a loop */
#line 636 "rbmm.condition_renaming.m"
      {
#line 636 "rbmm.condition_renaming.m"
        MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 636 "rbmm.condition_renaming.m"
        if ((transform_hlds__rbmm__condition_renaming__RevPath_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 656 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_13 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_12;
#line 636 "rbmm.condition_renaming.m"
        else
#line 636 "rbmm.condition_renaming.m"
          {
#line 636 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__RevInitialPath_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPath_5, (MR_Integer) 0)));
#line 636 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__LastStep_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPath_5, (MR_Integer) 1)));
#line 636 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_14_14;

#line 637 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = (transform_hlds__rbmm__condition_renaming__LastStep_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 650 "rbmm.condition_renaming.m"
            if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 642 "rbmm.condition_renaming.m"
              {
#line 642 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__InCondRegions_11;
#line 640 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__InCondRegions0_10;
#line 638 "rbmm.condition_renaming.m"
                MR_Box transform_hlds__rbmm__condition_renaming__conv0_InCondRegions0_10;

#line 638 "rbmm.condition_renaming.m"
                {
#line 638 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0], transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_12, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RevPath_5)), &transform_hlds__rbmm__condition_renaming__conv0_InCondRegions0_10);
                }
#line 638 "rbmm.condition_renaming.m"
                if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 638 "rbmm.condition_renaming.m"
                  {
#line 638 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__InCondRegions0_10 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_InCondRegions0_10);
#line 638 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 638 "rbmm.condition_renaming.m"
                  }
#line 640 "rbmm.condition_renaming.m"
                if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 639 "rbmm.condition_renaming.m"
                  {
#line 639 "rbmm.condition_renaming.m"
                    {
#line 639 "rbmm.condition_renaming.m"
                      mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__condition_renaming__InCondRegions0_10, transform_hlds__rbmm__condition_renaming__Created_6, &transform_hlds__rbmm__condition_renaming__InCondRegions_11);
                    }
#line 639 "rbmm.condition_renaming.m"
                  }
#line 640 "rbmm.condition_renaming.m"
                else
#line 641 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__InCondRegions_11 = transform_hlds__rbmm__condition_renaming__Created_6;
#line 645 "rbmm.condition_renaming.m"
                {
#line 645 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__succeeded = mercury__set__empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__condition_renaming__InCondRegions_11);
                }
#line 647 "rbmm.condition_renaming.m"
                if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 645 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_14_14 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_12;
#line 647 "rbmm.condition_renaming.m"
                else
#line 648 "rbmm.condition_renaming.m"
                  {
#line 648 "rbmm.condition_renaming.m"
                    {
#line 648 "rbmm.condition_renaming.m"
                      mercury__map__set_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__condition_renaming__RevPath_5)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__InCondRegions_11)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_12, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_14_14);
                    }
#line 648 "rbmm.condition_renaming.m"
                  }
#line 642 "rbmm.condition_renaming.m"
              }
#line 650 "rbmm.condition_renaming.m"
            else
#line 648 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_14_14 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_12;
#line 653 "rbmm.condition_renaming.m"
            /* direct tailcall eliminated */
#line 653 "rbmm.condition_renaming.m"
            {
#line 653 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__RevPath__tmp_copy_5 = transform_hlds__rbmm__condition_renaming__RevInitialPath_8;
#line 653 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0__tmp_copy_12 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_14_14;

#line 653 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_12 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0__tmp_copy_12;
#line 653 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__RevPath_5 = transform_hlds__rbmm__condition_renaming__RevPath__tmp_copy_5;
#line 653 "rbmm.condition_renaming.m"
            }
#line 653 "rbmm.condition_renaming.m"
            continue;
#line 636 "rbmm.condition_renaming.m"
          }
#line 636 "rbmm.condition_renaming.m"
      }
#line 636 "rbmm.condition_renaming.m"
      break;
#line 636 "rbmm.condition_renaming.m"
    }
#line 630 "rbmm.condition_renaming.m"
}

#line 609 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_2(
#line 609 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 609 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 609 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 609 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 609 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 609 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5)
#line 609 "rbmm.condition_renaming.m"
{
#line 609 "rbmm.condition_renaming.m"
  {
#line 609 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 609 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv7_STATE_VARIABLE_LeftRegions_14;
#line 609 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv6_STATE_VARIABLE_RightRegions_16;

#line 609 "rbmm.condition_renaming.m"
    {
#line 609 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__renaming_annotation_to_regions_5_p_0(((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv7_STATE_VARIABLE_LeftRegions_14, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_4), &transform_hlds__rbmm__condition_renaming__conv6_STATE_VARIABLE_RightRegions_16);
    }
#line 609 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv7_STATE_VARIABLE_LeftRegions_14));
#line 609 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv6_STATE_VARIABLE_RightRegions_16));
#line 609 "rbmm.condition_renaming.m"
  }
#line 609 "rbmm.condition_renaming.m"
}

#line 601 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_1(
#line 601 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 601 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 601 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 601 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 601 "rbmm.condition_renaming.m"
{
#line 601 "rbmm.condition_renaming.m"
  {
#line 601 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 601 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_Regions_14;

#line 601 "rbmm.condition_renaming.m"
    {
#line 601 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__apply_region_renaming_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_Regions_14);
    }
#line 601 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_Regions_14));
#line 601 "rbmm.condition_renaming.m"
  }
#line 601 "rbmm.condition_renaming.m"
}

#line 576 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(
#line 576 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 576 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 576 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 576 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 576 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 576 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Cond_14,
#line 576 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_33,
#line 576 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_34)
#line 576 "rbmm.condition_renaming.m"
{
#line 582 "rbmm.condition_renaming.m"
  {
#line 582 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 582 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__CondExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Cond_14, (MR_Integer) 0)));
#line 582 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__CondInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Cond_14, (MR_Integer) 1)));
#line 582 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__HasSubGoals_18;

#line 584 "rbmm.condition_renaming.m"
    {
#line 584 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__HasSubGoals_18 = hlds__hlds_goal__goal_expr_has_subgoals_1_f_0(transform_hlds__rbmm__condition_renaming__CondExpr_16);
    }
#line 616 "rbmm.condition_renaming.m"
    if ((transform_hlds__rbmm__condition_renaming__HasSubGoals_18 == (MR_Integer) 1))
#line 586 "rbmm.condition_renaming.m"
      {
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_42_42;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_43_43;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_44_44;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_51_51;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_52_52;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_19;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RevGoalPath_21;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__LRBefore_22;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__LRAfter_23;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__CreatedNodes_24;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ResurRenaming_26;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__CreatedRegions0_27;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos_29;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__LeftRegions_30;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__CreatedRegions_32;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_36_36;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_37_37;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_39_39;
#line 586 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_40_40;
#line 588 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_20_20;
#line 589 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv0_LRBefore_22;
#line 590 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv1_LRAfter_23;
#line 598 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ResurRenaming0_25;
#line 596 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv2_ResurRenaming0_25;
#line 601 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv4_CreatedRegions0_27;
#line 606 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos0_28;
#line 604 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv5_ResurRenamingAnnos0_28;
#line 609 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming___RightRegions_31;
#line 609 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv9_LeftRegions_30;
#line 609 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv8__RightRegions_31;

#line 587 "rbmm.condition_renaming.m"
        {
#line 587 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__ProgPoint_19 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__condition_renaming__CondInfo_17);
        }
#line 588 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__ProgPoint_19, (MR_Integer) 0)));
#line 588 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__RevGoalPath_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__ProgPoint_19, (MR_Integer) 1)));
#line 5726 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeCtorInfo_42_42 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 5728 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeInfo_43_43 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[3];
#line 589 "rbmm.condition_renaming.m"
        {
#line 589 "rbmm.condition_renaming.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_42_42, transform_hlds__rbmm__condition_renaming__TypeInfo_43_43, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_19)), &transform_hlds__rbmm__condition_renaming__conv0_LRBefore_22);
        }
#line 589 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__LRBefore_22 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_LRBefore_22);
#line 590 "rbmm.condition_renaming.m"
        {
#line 590 "rbmm.condition_renaming.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_42_42, transform_hlds__rbmm__condition_renaming__TypeInfo_43_43, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_19)), &transform_hlds__rbmm__condition_renaming__conv1_LRAfter_23);
        }
#line 590 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__LRAfter_23 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_LRAfter_23);
#line 5744 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeCtorInfo_44_44 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 592 "rbmm.condition_renaming.m"
        {
#line 592 "rbmm.condition_renaming.m"
          mercury__set__difference_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_44_44, transform_hlds__rbmm__condition_renaming__LRAfter_23, transform_hlds__rbmm__condition_renaming__LRBefore_22, &transform_hlds__rbmm__condition_renaming__CreatedNodes_24);
        }
#line 596 "rbmm.condition_renaming.m"
        {
#line 596 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_42_42, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2], transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_19)), &transform_hlds__rbmm__condition_renaming__conv2_ResurRenaming0_25);
        }
#line 596 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 596 "rbmm.condition_renaming.m"
          {
#line 596 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ResurRenaming0_25 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_ResurRenaming0_25);
#line 596 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 596 "rbmm.condition_renaming.m"
          }
#line 598 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 597 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__ResurRenaming_26 = transform_hlds__rbmm__condition_renaming__ResurRenaming0_25;
#line 598 "rbmm.condition_renaming.m"
        else
#line 599 "rbmm.condition_renaming.m"
          {
#line 599 "rbmm.condition_renaming.m"
            {
#line 599 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__ResurRenaming_26 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[1]);
            }
#line 599 "rbmm.condition_renaming.m"
          }
#line 601 "rbmm.condition_renaming.m"
        {
#line 601 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 601 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_36_36, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[1]));
#line 601 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_36_36, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_1));
#line 601 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 601 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_36_36, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_9));
#line 601 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_36_36, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenaming_26));
#line 601 "rbmm.condition_renaming.m"
        }
#line 5797 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 601 "rbmm.condition_renaming.m"
        {
#line 601 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_37_37 = mercury__set__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_51_51);
        }
#line 5804 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeInfo_52_52 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0];
#line 601 "rbmm.condition_renaming.m"
        {
#line 601 "rbmm.condition_renaming.m"
          mercury__set__fold_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_44_44, transform_hlds__rbmm__condition_renaming__TypeInfo_52_52, transform_hlds__rbmm__condition_renaming__V_36_36, transform_hlds__rbmm__condition_renaming__CreatedNodes_24, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_37_37)), &transform_hlds__rbmm__condition_renaming__conv4_CreatedRegions0_27);
        }
#line 601 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__CreatedRegions0_27 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv4_CreatedRegions0_27);
#line 604 "rbmm.condition_renaming.m"
        {
#line 604 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_42_42, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[2], transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_19)), &transform_hlds__rbmm__condition_renaming__conv5_ResurRenamingAnnos0_28);
        }
#line 604 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 604 "rbmm.condition_renaming.m"
          {
#line 604 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos0_28 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv5_ResurRenamingAnnos0_28);
#line 604 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 604 "rbmm.condition_renaming.m"
          }
#line 606 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 605 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos_29 = transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos0_28;
#line 606 "rbmm.condition_renaming.m"
        else
#line 607 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 609 "rbmm.condition_renaming.m"
        {
#line 609 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_39_39 = mercury__set__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_51_51);
        }
#line 609 "rbmm.condition_renaming.m"
        {
#line 609 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_40_40 = mercury__set__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_51_51);
        }
#line 609 "rbmm.condition_renaming.m"
        {
#line 609 "rbmm.condition_renaming.m"
          mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0, transform_hlds__rbmm__condition_renaming__TypeInfo_52_52, transform_hlds__rbmm__condition_renaming__TypeInfo_52_52, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[10], transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos_29, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_39_39)), &transform_hlds__rbmm__condition_renaming__conv9_LeftRegions_30, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_40_40)), &transform_hlds__rbmm__condition_renaming__conv8__RightRegions_31);
        }
#line 609 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__LeftRegions_30 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv9_LeftRegions_30);
#line 609 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming___RightRegions_31 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv8__RightRegions_31);
#line 612 "rbmm.condition_renaming.m"
        {
#line 612 "rbmm.condition_renaming.m"
          mercury__set__union_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_51_51, transform_hlds__rbmm__condition_renaming__CreatedRegions0_27, transform_hlds__rbmm__condition_renaming__LeftRegions_30, &transform_hlds__rbmm__condition_renaming__CreatedRegions_32);
        }
#line 614 "rbmm.condition_renaming.m"
        {
#line 614 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_p_0(transform_hlds__rbmm__condition_renaming__RevGoalPath_21, transform_hlds__rbmm__condition_renaming__CreatedRegions_32, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_33, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_34);
#line 614 "rbmm.condition_renaming.m"
          return;
        }
#line 586 "rbmm.condition_renaming.m"
      }
#line 616 "rbmm.condition_renaming.m"
    else
#line 618 "rbmm.condition_renaming.m"
      {
#line 618 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Cond_14, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_33, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_34);
#line 618 "rbmm.condition_renaming.m"
        return;
      }
#line 582 "rbmm.condition_renaming.m"
  }
#line 576 "rbmm.condition_renaming.m"
}

#line 552 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_case_8_p_0(
#line 552 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 552 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 552 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 552 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 552 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 552 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_14,
#line 552 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_19,
#line 552 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_20)
#line 552 "rbmm.condition_renaming.m"
{
#line 558 "rbmm.condition_renaming.m"
  {
#line 558 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 558 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_14, (MR_Integer) 2)));
#line 559 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_14, (MR_Integer) 0)));
#line 559 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_14, (MR_Integer) 1)));

#line 560 "rbmm.condition_renaming.m"
    {
#line 560 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Goal_18, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_19, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_20);
#line 560 "rbmm.condition_renaming.m"
      return;
    }
#line 558 "rbmm.condition_renaming.m"
  }
#line 552 "rbmm.condition_renaming.m"
}

#line 507 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_3(
#line 507 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 507 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 507 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 507 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 507 "rbmm.condition_renaming.m"
{
#line 507 "rbmm.condition_renaming.m"
  {
#line 507 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 507 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_NonLocalRegionProc_20;

#line 507 "rbmm.condition_renaming.m"
    {
#line 507 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_case_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_NonLocalRegionProc_20);
    }
#line 507 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_NonLocalRegionProc_20));
#line 507 "rbmm.condition_renaming.m"
  }
#line 507 "rbmm.condition_renaming.m"
}

#line 500 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_2(
#line 500 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 500 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 500 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 500 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 500 "rbmm.condition_renaming.m"
{
#line 500 "rbmm.condition_renaming.m"
  {
#line 500 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 500 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_NonLocalRegionProc_37;

#line 500 "rbmm.condition_renaming.m"
    {
#line 500 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_NonLocalRegionProc_37);
    }
#line 500 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_NonLocalRegionProc_37));
#line 500 "rbmm.condition_renaming.m"
  }
#line 500 "rbmm.condition_renaming.m"
}

#line 493 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_1(
#line 493 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 493 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 493 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 493 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 493 "rbmm.condition_renaming.m"
{
#line 493 "rbmm.condition_renaming.m"
  {
#line 493 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 493 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_NonLocalRegionProc_37;

#line 493 "rbmm.condition_renaming.m"
    {
#line 493 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_NonLocalRegionProc_37);
    }
#line 493 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_NonLocalRegionProc_37));
#line 493 "rbmm.condition_renaming.m"
  }
#line 493 "rbmm.condition_renaming.m"
}

#line 482 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0(
#line 482 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 482 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 482 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 482 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 482 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 482 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__GoalInIte_14,
#line 482 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_57,
#line 482 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_58)
#line 482 "rbmm.condition_renaming.m"
{
#line 489 "rbmm.condition_renaming.m"
  {
#line 489 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 489 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Expr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__GoalInIte_14, (MR_Integer) 0)));
#line 490 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__GoalInIte_14, (MR_Integer) 1)));

#line 498 "rbmm.condition_renaming.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 0))))
#line 513 "rbmm.condition_renaming.m"
      {
#line 513 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__Goal_26 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16), (MR_Integer) 0);

#line 514 "rbmm.condition_renaming.m"
        {
#line 514 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Goal_26, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_57, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_58);
#line 514 "rbmm.condition_renaming.m"
          return;
        }
#line 513 "rbmm.condition_renaming.m"
      }
#line 498 "rbmm.condition_renaming.m"
    else
#line 498 "rbmm.condition_renaming.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 2))))
#line 548 "rbmm.condition_renaming.m"
        {
#line 549 "rbmm.condition_renaming.m"
          {
#line 549 "rbmm.condition_renaming.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 549 "rbmm.condition_renaming.m"
            return;
          }
#line 548 "rbmm.condition_renaming.m"
        }
#line 498 "rbmm.condition_renaming.m"
      else
#line 498 "rbmm.condition_renaming.m"
        if (((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 1))))
#line 548 "rbmm.condition_renaming.m"
          {
#line 549 "rbmm.condition_renaming.m"
            {
#line 549 "rbmm.condition_renaming.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 549 "rbmm.condition_renaming.m"
              return;
            }
#line 548 "rbmm.condition_renaming.m"
          }
#line 498 "rbmm.condition_renaming.m"
        else
#line 498 "rbmm.condition_renaming.m"
          if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 548 "rbmm.condition_renaming.m"
            {
#line 549 "rbmm.condition_renaming.m"
              {
#line 549 "rbmm.condition_renaming.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 549 "rbmm.condition_renaming.m"
                return;
              }
#line 548 "rbmm.condition_renaming.m"
            }
#line 498 "rbmm.condition_renaming.m"
          else
#line 498 "rbmm.condition_renaming.m"
            if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 498 "rbmm.condition_renaming.m"
              {
#line 498 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 2)));
#line 492 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));

#line 498 "rbmm.condition_renaming.m"
                if ((transform_hlds__rbmm__condition_renaming__V_119_119 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 548 "rbmm.condition_renaming.m"
                  {
#line 549 "rbmm.condition_renaming.m"
                    {
#line 549 "rbmm.condition_renaming.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 549 "rbmm.condition_renaming.m"
                      return;
                    }
#line 548 "rbmm.condition_renaming.m"
                  }
#line 498 "rbmm.condition_renaming.m"
                else
#line 492 "rbmm.condition_renaming.m"
                  {
#line 492 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__V_76_76;
#line 493 "rbmm.condition_renaming.m"
                    MR_Box transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionProc_58;

#line 493 "rbmm.condition_renaming.m"
                    {
#line 493 "rbmm.condition_renaming.m"
                      transform_hlds__rbmm__condition_renaming__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 493 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[1]));
#line 493 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_1));
#line 493 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 493 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_9));
#line 493 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_10));
#line 493 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_11));
#line 493 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12));
#line 493 "rbmm.condition_renaming.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_76_76, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13));
#line 493 "rbmm.condition_renaming.m"
                    }
#line 493 "rbmm.condition_renaming.m"
                    {
#line 493 "rbmm.condition_renaming.m"
                      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], transform_hlds__rbmm__condition_renaming__V_76_76, transform_hlds__rbmm__condition_renaming__V_119_119, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_57)), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionProc_58);
                    }
#line 493 "rbmm.condition_renaming.m"
                    *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_58 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionProc_58);
#line 492 "rbmm.condition_renaming.m"
                  }
#line 498 "rbmm.condition_renaming.m"
              }
#line 498 "rbmm.condition_renaming.m"
            else
#line 498 "rbmm.condition_renaming.m"
              if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 498 "rbmm.condition_renaming.m"
                {
#line 498 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));

#line 498 "rbmm.condition_renaming.m"
                  if ((transform_hlds__rbmm__condition_renaming__V_121_121 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 548 "rbmm.condition_renaming.m"
                    {
#line 549 "rbmm.condition_renaming.m"
                      {
#line 549 "rbmm.condition_renaming.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 549 "rbmm.condition_renaming.m"
                        return;
                      }
#line 548 "rbmm.condition_renaming.m"
                    }
#line 498 "rbmm.condition_renaming.m"
                  else
#line 499 "rbmm.condition_renaming.m"
                    {
#line 499 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__V_72_72;
#line 500 "rbmm.condition_renaming.m"
                      MR_Box transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_NonLocalRegionProc_58;

#line 500 "rbmm.condition_renaming.m"
                      {
#line 500 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 500 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[1]));
#line 500 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_2));
#line 500 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 500 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_9));
#line 500 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_10));
#line 500 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_11));
#line 500 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12));
#line 500 "rbmm.condition_renaming.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_72_72, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13));
#line 500 "rbmm.condition_renaming.m"
                      }
#line 500 "rbmm.condition_renaming.m"
                      {
#line 500 "rbmm.condition_renaming.m"
                        mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], transform_hlds__rbmm__condition_renaming__V_72_72, transform_hlds__rbmm__condition_renaming__V_121_121, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_57)), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_NonLocalRegionProc_58);
                      }
#line 500 "rbmm.condition_renaming.m"
                      *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_58 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_NonLocalRegionProc_58);
#line 499 "rbmm.condition_renaming.m"
                    }
#line 498 "rbmm.condition_renaming.m"
                }
#line 498 "rbmm.condition_renaming.m"
              else
#line 498 "rbmm.condition_renaming.m"
                if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 548 "rbmm.condition_renaming.m"
                  {
#line 549 "rbmm.condition_renaming.m"
                    {
#line 549 "rbmm.condition_renaming.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 549 "rbmm.condition_renaming.m"
                      return;
                    }
#line 548 "rbmm.condition_renaming.m"
                  }
#line 498 "rbmm.condition_renaming.m"
                else
#line 498 "rbmm.condition_renaming.m"
                  if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 527 "rbmm.condition_renaming.m"
                    {
#line 527 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__Cond_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 2)));
#line 527 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__Then_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 3)));
#line 527 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__Else_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 4)));
#line 527 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_64_64;
#line 527 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_65_65;
#line 527 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));

#line 528 "rbmm.condition_renaming.m"
                      {
#line 528 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Cond_29, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_57, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_64_64);
                      }
#line 532 "rbmm.condition_renaming.m"
                      {
#line 532 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Then_30, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_64_64, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_65_65);
                      }
#line 536 "rbmm.condition_renaming.m"
                      {
#line 536 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Else_31, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_65_65, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_58);
#line 536 "rbmm.condition_renaming.m"
                        return;
                      }
#line 527 "rbmm.condition_renaming.m"
                    }
#line 498 "rbmm.condition_renaming.m"
                  else
#line 498 "rbmm.condition_renaming.m"
                    if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 519 "rbmm.condition_renaming.m"
                      {
#line 519 "rbmm.condition_renaming.m"
                        MR_Word transform_hlds__rbmm__condition_renaming__Goal_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 2)));
#line 519 "rbmm.condition_renaming.m"
                        MR_Word transform_hlds__rbmm__condition_renaming__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));

#line 522 "rbmm.condition_renaming.m"
                        {
#line 522 "rbmm.condition_renaming.m"
                          transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__Goal_79, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_57, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_58);
#line 522 "rbmm.condition_renaming.m"
                          return;
                        }
#line 519 "rbmm.condition_renaming.m"
                      }
#line 498 "rbmm.condition_renaming.m"
                    else
#line 498 "rbmm.condition_renaming.m"
                      if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__Expr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 548 "rbmm.condition_renaming.m"
                        {
#line 549 "rbmm.condition_renaming.m"
                          {
#line 549 "rbmm.condition_renaming.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
#line 549 "rbmm.condition_renaming.m"
                            return;
                          }
#line 548 "rbmm.condition_renaming.m"
                        }
#line 498 "rbmm.condition_renaming.m"
                      else
#line 506 "rbmm.condition_renaming.m"
                        {
#line 506 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__Cases_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 3)));
#line 506 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__V_69_69;
#line 506 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 1)));
#line 506 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__Expr_16, (MR_Integer) 2)));
#line 507 "rbmm.condition_renaming.m"
                          MR_Box transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_NonLocalRegionProc_58;

#line 507 "rbmm.condition_renaming.m"
                          {
#line 507 "rbmm.condition_renaming.m"
                            transform_hlds__rbmm__condition_renaming__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 507 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[2]));
#line 507 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_3));
#line 507 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 507 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_9));
#line 507 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_10));
#line 507 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_11));
#line 507 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12));
#line 507 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_69_69, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13));
#line 507 "rbmm.condition_renaming.m"
                          }
#line 507 "rbmm.condition_renaming.m"
                          {
#line 507 "rbmm.condition_renaming.m"
                            mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], transform_hlds__rbmm__condition_renaming__V_69_69, transform_hlds__rbmm__condition_renaming__Cases_25, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_57)), &transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_NonLocalRegionProc_58);
                          }
#line 507 "rbmm.condition_renaming.m"
                          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_58 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_NonLocalRegionProc_58);
#line 506 "rbmm.condition_renaming.m"
                        }
#line 489 "rbmm.condition_renaming.m"
  }
#line 482 "rbmm.condition_renaming.m"
}

#line 444 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_p_0(
#line 444 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RevPath_6,
#line 444 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Created_7,
#line 444 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Removed_8,
#line 444 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_16,
#line 444 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_17)
#line 444 "rbmm.condition_renaming.m"
{
#line 450 "rbmm.condition_renaming.m"
  while (MR_TRUE)
#line 450 "rbmm.condition_renaming.m"
    {
#line 450 "rbmm.condition_renaming.m"
      /* tailcall optimized into a loop */
#line 450 "rbmm.condition_renaming.m"
      {
#line 450 "rbmm.condition_renaming.m"
        MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 450 "rbmm.condition_renaming.m"
        if ((transform_hlds__rbmm__condition_renaming__RevPath_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 479 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_17 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_16;
#line 450 "rbmm.condition_renaming.m"
        else
#line 450 "rbmm.condition_renaming.m"
          {
#line 450 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__RevInitialPath_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPath_6, (MR_Integer) 0)));
#line 450 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__LastStep_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPath_6, (MR_Integer) 1)));
#line 450 "rbmm.condition_renaming.m"
            MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_19_19;

#line 451 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = (transform_hlds__rbmm__condition_renaming__LastStep_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 470 "rbmm.condition_renaming.m"
            if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 454 "rbmm.condition_renaming.m"
              {
#line 454 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__RevPathToCond_12;
#line 454 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegions_15;
#line 461 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegions0_13;
#line 456 "rbmm.condition_renaming.m"
                MR_Box transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegions0_13;

#line 454 "rbmm.condition_renaming.m"
                {
#line 454 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__RevPathToCond_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "rbmm.condition_renaming.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPathToCond_12, 0) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__RevInitialPath_10));
#line 454 "rbmm.condition_renaming.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__RevPathToCond_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 454 "rbmm.condition_renaming.m"
                }
#line 456 "rbmm.condition_renaming.m"
                {
#line 456 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0], transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_16, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RevPathToCond_12)), &transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegions0_13);
                }
#line 456 "rbmm.condition_renaming.m"
                if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 456 "rbmm.condition_renaming.m"
                  {
#line 456 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__NonLocalRegions0_13 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_NonLocalRegions0_13);
#line 456 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 456 "rbmm.condition_renaming.m"
                  }
#line 461 "rbmm.condition_renaming.m"
                if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 459 "rbmm.condition_renaming.m"
                  {
#line 459 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 459 "rbmm.condition_renaming.m"
                    MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegions1_14;

#line 459 "rbmm.condition_renaming.m"
                    {
#line 459 "rbmm.condition_renaming.m"
                      mercury__set__union_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23, transform_hlds__rbmm__condition_renaming__NonLocalRegions0_13, transform_hlds__rbmm__condition_renaming__Created_7, &transform_hlds__rbmm__condition_renaming__NonLocalRegions1_14);
                    }
#line 460 "rbmm.condition_renaming.m"
                    {
#line 460 "rbmm.condition_renaming.m"
                      mercury__set__difference_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23, transform_hlds__rbmm__condition_renaming__NonLocalRegions1_14, transform_hlds__rbmm__condition_renaming__Removed_8, &transform_hlds__rbmm__condition_renaming__NonLocalRegions_15);
                    }
#line 459 "rbmm.condition_renaming.m"
                  }
#line 461 "rbmm.condition_renaming.m"
                else
#line 462 "rbmm.condition_renaming.m"
                  {
#line 462 "rbmm.condition_renaming.m"
                    {
#line 462 "rbmm.condition_renaming.m"
                      mercury__set__difference_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__condition_renaming__Created_7, transform_hlds__rbmm__condition_renaming__Removed_8, &transform_hlds__rbmm__condition_renaming__NonLocalRegions_15);
                    }
#line 462 "rbmm.condition_renaming.m"
                  }
#line 465 "rbmm.condition_renaming.m"
                {
#line 465 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__succeeded = mercury__set__empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, transform_hlds__rbmm__condition_renaming__NonLocalRegions_15);
                }
#line 467 "rbmm.condition_renaming.m"
                if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 465 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_19_19 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_16;
#line 467 "rbmm.condition_renaming.m"
                else
#line 468 "rbmm.condition_renaming.m"
                  {
#line 468 "rbmm.condition_renaming.m"
                    {
#line 468 "rbmm.condition_renaming.m"
                      mercury__map__set_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__condition_renaming__RevPathToCond_12)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__NonLocalRegions_15)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_16, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_19_19);
                    }
#line 468 "rbmm.condition_renaming.m"
                  }
#line 454 "rbmm.condition_renaming.m"
              }
#line 470 "rbmm.condition_renaming.m"
            else
#line 468 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_19_19 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_16;
#line 476 "rbmm.condition_renaming.m"
            /* direct tailcall eliminated */
#line 476 "rbmm.condition_renaming.m"
            {
#line 476 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__RevPath__tmp_copy_6 = transform_hlds__rbmm__condition_renaming__RevInitialPath_10;
#line 476 "rbmm.condition_renaming.m"
              MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0__tmp_copy_16 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_19_19;

#line 476 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_16 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0__tmp_copy_16;
#line 476 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__RevPath_6 = transform_hlds__rbmm__condition_renaming__RevPath__tmp_copy_6;
#line 476 "rbmm.condition_renaming.m"
            }
#line 476 "rbmm.condition_renaming.m"
            continue;
#line 450 "rbmm.condition_renaming.m"
          }
#line 450 "rbmm.condition_renaming.m"
      }
#line 450 "rbmm.condition_renaming.m"
      break;
#line 450 "rbmm.condition_renaming.m"
    }
#line 444 "rbmm.condition_renaming.m"
}

#line 407 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__renaming_annotation_to_regions_5_p_0(
#line 407 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RenameAnnotation_6,
#line 407 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_LeftRegions_0_13,
#line 407 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_LeftRegions_14,
#line 407 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_RightRegions_0_15,
#line 407 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_RightRegions_16)
#line 407 "rbmm.condition_renaming.m"
{
#line 416 "rbmm.condition_renaming.m"
  {
#line 416 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 416 "rbmm.condition_renaming.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__RenameAnnotation_6)) == (MR_mktag((MR_Integer) 2))))
#line 419 "rbmm.condition_renaming.m"
      {
#line 419 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 419 "rbmm.condition_renaming.m"
        MR_String transform_hlds__rbmm__condition_renaming__RightRegion_11 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__condition_renaming__RenameAnnotation_6, (MR_Integer) 0)));
#line 419 "rbmm.condition_renaming.m"
        MR_String transform_hlds__rbmm__condition_renaming__LeftRegion_12 = ((MR_String) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__condition_renaming__RenameAnnotation_6, (MR_Integer) 1)));

#line 420 "rbmm.condition_renaming.m"
        {
#line 420 "rbmm.condition_renaming.m"
          mercury__set__insert_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_22_22, ((MR_Box) (transform_hlds__rbmm__condition_renaming__LeftRegion_12)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_LeftRegions_0_13, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_LeftRegions_14);
        }
#line 421 "rbmm.condition_renaming.m"
        {
#line 421 "rbmm.condition_renaming.m"
          mercury__set__insert_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_22_22, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RightRegion_11)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_RightRegions_0_15, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_RightRegions_16);
#line 421 "rbmm.condition_renaming.m"
          return;
        }
#line 419 "rbmm.condition_renaming.m"
      }
#line 416 "rbmm.condition_renaming.m"
    else
#line 416 "rbmm.condition_renaming.m"
      {
#line 417 "rbmm.condition_renaming.m"
        {
#line 417 "rbmm.condition_renaming.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.renaming_annotation_to_regions\'/5", (MR_String) "annotation is not assignment");
#line 417 "rbmm.condition_renaming.m"
          return;
        }
#line 416 "rbmm.condition_renaming.m"
      }
#line 416 "rbmm.condition_renaming.m"
  }
#line 407 "rbmm.condition_renaming.m"
}

#line 395 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__apply_region_renaming_5_p_0(
#line 395 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_6,
#line 395 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Renaming_7,
#line 395 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Node_8,
#line 395 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_Regions_0_13,
#line 395 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_Regions_14)
#line 395 "rbmm.condition_renaming.m"
{
#line 398 "rbmm.condition_renaming.m"
  {
#line 398 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 398 "rbmm.condition_renaming.m"
    MR_String transform_hlds__rbmm__condition_renaming__RegionName_10;
#line 403 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__RenamedRegionNameList_11;
#line 400 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv0_RenamedRegionNameList_11;

#line 399 "rbmm.condition_renaming.m"
    {
#line 399 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__RegionName_10 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(transform_hlds__rbmm__condition_renaming__Graph_6, transform_hlds__rbmm__condition_renaming__Node_8);
    }
#line 400 "rbmm.condition_renaming.m"
    {
#line 400 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[1], transform_hlds__rbmm__condition_renaming__Renaming_7, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RegionName_10)), &transform_hlds__rbmm__condition_renaming__conv0_RenamedRegionNameList_11);
    }
#line 400 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 400 "rbmm.condition_renaming.m"
      {
#line 400 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__RenamedRegionNameList_11 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_RenamedRegionNameList_11);
#line 400 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 400 "rbmm.condition_renaming.m"
      }
#line 403 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 401 "rbmm.condition_renaming.m"
      {
#line 401 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 401 "rbmm.condition_renaming.m"
        MR_String transform_hlds__rbmm__condition_renaming__RenamedRegionName_12;
#line 401 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv1_RenamedRegionName_12;

#line 401 "rbmm.condition_renaming.m"
        {
#line 401 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__conv1_RenamedRegionName_12 = mercury__list__det_last_1_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_19_19, transform_hlds__rbmm__condition_renaming__RenamedRegionNameList_11);
        }
#line 401 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__RenamedRegionName_12 = ((MR_String) transform_hlds__rbmm__condition_renaming__conv1_RenamedRegionName_12);
#line 402 "rbmm.condition_renaming.m"
        {
#line 402 "rbmm.condition_renaming.m"
          mercury__set__insert_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_19_19, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RenamedRegionName_12)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_Regions_0_13, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_Regions_14);
#line 402 "rbmm.condition_renaming.m"
          return;
        }
#line 401 "rbmm.condition_renaming.m"
      }
#line 403 "rbmm.condition_renaming.m"
    else
#line 404 "rbmm.condition_renaming.m"
      {
#line 404 "rbmm.condition_renaming.m"
        {
#line 404 "rbmm.condition_renaming.m"
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (transform_hlds__rbmm__condition_renaming__RegionName_10)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_Regions_0_13, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_Regions_14);
#line 404 "rbmm.condition_renaming.m"
          return;
        }
#line 404 "rbmm.condition_renaming.m"
      }
#line 398 "rbmm.condition_renaming.m"
  }
#line 395 "rbmm.condition_renaming.m"
}

#line 381 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_2(
#line 381 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 381 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 381 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 381 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 381 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 381 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5)
#line 381 "rbmm.condition_renaming.m"
{
#line 381 "rbmm.condition_renaming.m"
  {
#line 381 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 381 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv8_STATE_VARIABLE_LeftRegions_14;
#line 381 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv7_STATE_VARIABLE_RightRegions_16;

#line 381 "rbmm.condition_renaming.m"
    {
#line 381 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__renaming_annotation_to_regions_5_p_0(((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv8_STATE_VARIABLE_LeftRegions_14, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_4), &transform_hlds__rbmm__condition_renaming__conv7_STATE_VARIABLE_RightRegions_16);
    }
#line 381 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv8_STATE_VARIABLE_LeftRegions_14));
#line 381 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv7_STATE_VARIABLE_RightRegions_16));
#line 381 "rbmm.condition_renaming.m"
  }
#line 381 "rbmm.condition_renaming.m"
}

#line 371 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_1(
#line 371 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 371 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 371 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 371 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3)
#line 371 "rbmm.condition_renaming.m"
{
#line 371 "rbmm.condition_renaming.m"
  {
#line 371 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 371 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_Regions_14;

#line 371 "rbmm.condition_renaming.m"
    {
#line 371 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__apply_region_renaming_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_Regions_14);
    }
#line 371 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_Regions_14));
#line 371 "rbmm.condition_renaming.m"
  }
#line 371 "rbmm.condition_renaming.m"
}

#line 340 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(
#line 340 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_9,
#line 340 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_10,
#line 340 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_11,
#line 340 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12,
#line 340 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13,
#line 340 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__GoalInIte_14,
#line 340 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_36,
#line 340 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_37)
#line 340 "rbmm.condition_renaming.m"
{
#line 347 "rbmm.condition_renaming.m"
  {
#line 347 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 347 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Expr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__GoalInIte_14, (MR_Integer) 0)));
#line 347 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Info_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__GoalInIte_14, (MR_Integer) 1)));
#line 347 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__HasSubGoals_18;

#line 349 "rbmm.condition_renaming.m"
    {
#line 349 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__HasSubGoals_18 = hlds__hlds_goal__goal_expr_has_subgoals_1_f_0(transform_hlds__rbmm__condition_renaming__Expr_16);
    }
#line 387 "rbmm.condition_renaming.m"
    if ((transform_hlds__rbmm__condition_renaming__HasSubGoals_18 == (MR_Integer) 1))
#line 351 "rbmm.condition_renaming.m"
      {
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_47_47;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_48_48;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_49_49;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_56_56;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_57_57;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ProgPoint_19;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RevGoalPath_21;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__LRBefore_22;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__LRAfter_23;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RemovedAfterNodes_24;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__CreatedBeforeNodes_25;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ResurRenaming_27;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RemovedAfterRegions0_28;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__CreatedBeforeRegions0_29;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos_31;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__LeftRegions_32;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RightRegions_33;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__RemovedAfterRegions_34;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__CreatedBeforeRegions_35;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_39_39;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_40_40;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_42_42;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_44_44;
#line 351 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_45_45;
#line 353 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_20_20;
#line 354 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv0_LRBefore_22;
#line 355 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv1_LRAfter_23;
#line 368 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ResurRenaming0_26;
#line 366 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv2_ResurRenaming0_26;
#line 371 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv4_RemovedAfterRegions0_28;
#line 373 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv5_CreatedBeforeRegions0_29;
#line 378 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos0_30;
#line 376 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv6_ResurRenamingAnnos0_30;
#line 381 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv10_LeftRegions_32;
#line 381 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv9_RightRegions_33;

#line 352 "rbmm.condition_renaming.m"
        {
#line 352 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__ProgPoint_19 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__condition_renaming__Info_17);
        }
#line 353 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__ProgPoint_19, (MR_Integer) 0)));
#line 353 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__RevGoalPath_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__ProgPoint_19, (MR_Integer) 1)));
#line 6897 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeCtorInfo_47_47 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 6899 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeInfo_48_48 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[3];
#line 354 "rbmm.condition_renaming.m"
        {
#line 354 "rbmm.condition_renaming.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_47_47, transform_hlds__rbmm__condition_renaming__TypeInfo_48_48, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_19)), &transform_hlds__rbmm__condition_renaming__conv0_LRBefore_22);
        }
#line 354 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__LRBefore_22 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_LRBefore_22);
#line 355 "rbmm.condition_renaming.m"
        {
#line 355 "rbmm.condition_renaming.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_47_47, transform_hlds__rbmm__condition_renaming__TypeInfo_48_48, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_19)), &transform_hlds__rbmm__condition_renaming__conv1_LRAfter_23);
        }
#line 355 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__LRAfter_23 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_LRAfter_23);
#line 6915 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeCtorInfo_49_49 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 359 "rbmm.condition_renaming.m"
        {
#line 359 "rbmm.condition_renaming.m"
          mercury__set__difference_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_49_49, transform_hlds__rbmm__condition_renaming__LRBefore_22, transform_hlds__rbmm__condition_renaming__LRAfter_23, &transform_hlds__rbmm__condition_renaming__RemovedAfterNodes_24);
        }
#line 360 "rbmm.condition_renaming.m"
        {
#line 360 "rbmm.condition_renaming.m"
          mercury__set__difference_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_49_49, transform_hlds__rbmm__condition_renaming__LRAfter_23, transform_hlds__rbmm__condition_renaming__LRBefore_22, &transform_hlds__rbmm__condition_renaming__CreatedBeforeNodes_25);
        }
#line 366 "rbmm.condition_renaming.m"
        {
#line 366 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_47_47, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2], transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_19)), &transform_hlds__rbmm__condition_renaming__conv2_ResurRenaming0_26);
        }
#line 366 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 366 "rbmm.condition_renaming.m"
          {
#line 366 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ResurRenaming0_26 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_ResurRenaming0_26);
#line 366 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 366 "rbmm.condition_renaming.m"
          }
#line 368 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 367 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__ResurRenaming_27 = transform_hlds__rbmm__condition_renaming__ResurRenaming0_26;
#line 368 "rbmm.condition_renaming.m"
        else
#line 369 "rbmm.condition_renaming.m"
          {
#line 369 "rbmm.condition_renaming.m"
            {
#line 369 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__ResurRenaming_27 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[1]);
            }
#line 369 "rbmm.condition_renaming.m"
          }
#line 371 "rbmm.condition_renaming.m"
        {
#line 371 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 371 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_39_39, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[1]));
#line 371 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_39_39, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_1));
#line 371 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 371 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_39_39, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_9));
#line 371 "rbmm.condition_renaming.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_39_39, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenaming_27));
#line 371 "rbmm.condition_renaming.m"
        }
#line 6973 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 371 "rbmm.condition_renaming.m"
        {
#line 371 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_40_40 = mercury__set__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_56_56);
        }
#line 6980 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeInfo_57_57 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0];
#line 371 "rbmm.condition_renaming.m"
        {
#line 371 "rbmm.condition_renaming.m"
          mercury__set__fold_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_49_49, transform_hlds__rbmm__condition_renaming__TypeInfo_57_57, transform_hlds__rbmm__condition_renaming__V_39_39, transform_hlds__rbmm__condition_renaming__RemovedAfterNodes_24, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_40_40)), &transform_hlds__rbmm__condition_renaming__conv4_RemovedAfterRegions0_28);
        }
#line 371 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__RemovedAfterRegions0_28 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv4_RemovedAfterRegions0_28);
#line 373 "rbmm.condition_renaming.m"
        {
#line 373 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_42_42 = mercury__set__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_56_56);
        }
#line 373 "rbmm.condition_renaming.m"
        {
#line 373 "rbmm.condition_renaming.m"
          mercury__set__fold_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_49_49, transform_hlds__rbmm__condition_renaming__TypeInfo_57_57, transform_hlds__rbmm__condition_renaming__V_39_39, transform_hlds__rbmm__condition_renaming__CreatedBeforeNodes_25, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_42_42)), &transform_hlds__rbmm__condition_renaming__conv5_CreatedBeforeRegions0_29);
        }
#line 373 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__CreatedBeforeRegions0_29 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv5_CreatedBeforeRegions0_29);
#line 376 "rbmm.condition_renaming.m"
        {
#line 376 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_47_47, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[2], transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProgPoint_19)), &transform_hlds__rbmm__condition_renaming__conv6_ResurRenamingAnnos0_30);
        }
#line 376 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 376 "rbmm.condition_renaming.m"
          {
#line 376 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos0_30 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv6_ResurRenamingAnnos0_30);
#line 376 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 376 "rbmm.condition_renaming.m"
          }
#line 378 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 377 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos_31 = transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos0_30;
#line 378 "rbmm.condition_renaming.m"
        else
#line 379 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 381 "rbmm.condition_renaming.m"
        {
#line 381 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_44_44 = mercury__set__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_56_56);
        }
#line 381 "rbmm.condition_renaming.m"
        {
#line 381 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_45_45 = mercury__set__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_56_56);
        }
#line 381 "rbmm.condition_renaming.m"
        {
#line 381 "rbmm.condition_renaming.m"
          mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0, transform_hlds__rbmm__condition_renaming__TypeInfo_57_57, transform_hlds__rbmm__condition_renaming__TypeInfo_57_57, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[9], transform_hlds__rbmm__condition_renaming__ResurRenamingAnnos_31, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_44_44)), &transform_hlds__rbmm__condition_renaming__conv10_LeftRegions_32, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_45_45)), &transform_hlds__rbmm__condition_renaming__conv9_RightRegions_33);
        }
#line 381 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__LeftRegions_32 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv10_LeftRegions_32);
#line 381 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__RightRegions_33 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv9_RightRegions_33);
#line 383 "rbmm.condition_renaming.m"
        {
#line 383 "rbmm.condition_renaming.m"
          mercury__set__union_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_56_56, transform_hlds__rbmm__condition_renaming__RemovedAfterRegions0_28, transform_hlds__rbmm__condition_renaming__RightRegions_33, &transform_hlds__rbmm__condition_renaming__RemovedAfterRegions_34);
        }
#line 384 "rbmm.condition_renaming.m"
        {
#line 384 "rbmm.condition_renaming.m"
          mercury__set__union_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_56_56, transform_hlds__rbmm__condition_renaming__CreatedBeforeRegions0_29, transform_hlds__rbmm__condition_renaming__LeftRegions_32, &transform_hlds__rbmm__condition_renaming__CreatedBeforeRegions_35);
        }
#line 385 "rbmm.condition_renaming.m"
        {
#line 385 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_p_0(transform_hlds__rbmm__condition_renaming__RevGoalPath_21, transform_hlds__rbmm__condition_renaming__CreatedBeforeRegions_35, transform_hlds__rbmm__condition_renaming__RemovedAfterRegions_34, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_36, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_37);
#line 385 "rbmm.condition_renaming.m"
          return;
        }
#line 351 "rbmm.condition_renaming.m"
      }
#line 387 "rbmm.condition_renaming.m"
    else
#line 389 "rbmm.condition_renaming.m"
      {
#line 389 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_9, transform_hlds__rbmm__condition_renaming__LRBeforeProc_10, transform_hlds__rbmm__condition_renaming__LRAfterProc_11, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_12, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_13, transform_hlds__rbmm__condition_renaming__GoalInIte_14, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_36, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_37);
#line 389 "rbmm.condition_renaming.m"
        return;
      }
#line 347 "rbmm.condition_renaming.m"
  }
#line 340 "rbmm.condition_renaming.m"
}

#line 326 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_case_10_p_0(
#line 326 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_11,
#line 326 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_12,
#line 326 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_13,
#line 326 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_14,
#line 326 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_15,
#line 326 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Case_16,
#line 326 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_22,
#line 326 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_23,
#line 326 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_24,
#line 326 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_25)
#line 326 "rbmm.condition_renaming.m"
{
#line 334 "rbmm.condition_renaming.m"
  {
#line 334 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 334 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_16, (MR_Integer) 2)));
#line 334 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Expr_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Goal_21, (MR_Integer) 0)));
#line 335 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_16, (MR_Integer) 0)));
#line 335 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Case_16, (MR_Integer) 1)));
#line 239 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Goal_21, (MR_Integer) 1)));

#line 240 "rbmm.condition_renaming.m"
    {
#line 240 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0(transform_hlds__rbmm__condition_renaming__Graph_11, transform_hlds__rbmm__condition_renaming__LRBeforeProc_12, transform_hlds__rbmm__condition_renaming__LRAfterProc_13, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_14, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_15, transform_hlds__rbmm__condition_renaming__Expr_40, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_0_22, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_23, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_24, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_25);
#line 240 "rbmm.condition_renaming.m"
      return;
    }
#line 334 "rbmm.condition_renaming.m"
  }
#line 326 "rbmm.condition_renaming.m"
}

#line 270 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_3(
#line 270 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 270 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 270 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 270 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 270 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 270 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5)
#line 270 "rbmm.condition_renaming.m"
{
#line 270 "rbmm.condition_renaming.m"
  {
#line 270 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 270 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv9_STATE_VARIABLE_NonLocalRegionProc_23;
#line 270 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv8_STATE_VARIABLE_InCondRegionsProc_25;

#line 270 "rbmm.condition_renaming.m"
    {
#line 270 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_case_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv9_STATE_VARIABLE_NonLocalRegionProc_23, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_4), &transform_hlds__rbmm__condition_renaming__conv8_STATE_VARIABLE_InCondRegionsProc_25);
    }
#line 270 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv9_STATE_VARIABLE_NonLocalRegionProc_23));
#line 270 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv8_STATE_VARIABLE_InCondRegionsProc_25));
#line 270 "rbmm.condition_renaming.m"
  }
#line 270 "rbmm.condition_renaming.m"
}

#line 278 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_2(
#line 278 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 278 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 278 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 278 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 278 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 278 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5)
#line 278 "rbmm.condition_renaming.m"
{
#line 278 "rbmm.condition_renaming.m"
  {
#line 278 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 278 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_NonLocalRegionsProc_22;
#line 278 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_InCondRegionsProc_24;

#line 278 "rbmm.condition_renaming.m"
    {
#line 278 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_NonLocalRegionsProc_22, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_4), &transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_InCondRegionsProc_24);
    }
#line 278 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv5_STATE_VARIABLE_NonLocalRegionsProc_22));
#line 278 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv4_STATE_VARIABLE_InCondRegionsProc_24));
#line 278 "rbmm.condition_renaming.m"
  }
#line 278 "rbmm.condition_renaming.m"
}

#line 253 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_1(
#line 253 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 253 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 253 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 253 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 253 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 253 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5)
#line 253 "rbmm.condition_renaming.m"
{
#line 253 "rbmm.condition_renaming.m"
  {
#line 253 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 253 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsProc_22;
#line 253 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsProc_24;

#line 253 "rbmm.condition_renaming.m"
    {
#line 253 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsProc_22, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_4), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsProc_24);
    }
#line 253 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsProc_22));
#line 253 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsProc_24));
#line 253 "rbmm.condition_renaming.m"
  }
#line 253 "rbmm.condition_renaming.m"
}

#line 244 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0(
#line 244 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_1,
#line 244 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_2,
#line 244 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_3,
#line 244 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4,
#line 244 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5,
#line 244 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__6_6,
#line 244 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__HeadVar__7_7,
#line 244 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__HeadVar__8_8,
#line 244 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9,
#line 244 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10)
#line 244 "rbmm.condition_renaming.m"
{
#line 252 "rbmm.condition_renaming.m"
  {
#line 252 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;

#line 252 "rbmm.condition_renaming.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__HeadVar__6_6)) == (MR_mktag((MR_Integer) 0))))
#line 285 "rbmm.condition_renaming.m"
      {
#line 285 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__Goal_115 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__condition_renaming__HeadVar__6_6), (MR_Integer) 0);

#line 286 "rbmm.condition_renaming.m"
        {
#line 286 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(transform_hlds__rbmm__condition_renaming__Graph_1, transform_hlds__rbmm__condition_renaming__LRBeforeProc_2, transform_hlds__rbmm__condition_renaming__LRAfterProc_3, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5, transform_hlds__rbmm__condition_renaming__Goal_115, transform_hlds__rbmm__condition_renaming__HeadVar__7_7, transform_hlds__rbmm__condition_renaming__HeadVar__8_8, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10);
#line 286 "rbmm.condition_renaming.m"
          return;
        }
#line 285 "rbmm.condition_renaming.m"
      }
#line 252 "rbmm.condition_renaming.m"
    else
#line 252 "rbmm.condition_renaming.m"
      if (((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__HeadVar__6_6)) == (MR_mktag((MR_Integer) 2))))
#line 258 "rbmm.condition_renaming.m"
        {
#line 258 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9;
#line 258 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__HeadVar__8_8 = transform_hlds__rbmm__condition_renaming__HeadVar__7_7;
#line 258 "rbmm.condition_renaming.m"
        }
#line 252 "rbmm.condition_renaming.m"
      else
#line 252 "rbmm.condition_renaming.m"
        if (((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__HeadVar__6_6)) == (MR_mktag((MR_Integer) 1))))
#line 289 "rbmm.condition_renaming.m"
          {
#line 289 "rbmm.condition_renaming.m"
            *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9;
#line 289 "rbmm.condition_renaming.m"
            *transform_hlds__rbmm__condition_renaming__HeadVar__8_8 = transform_hlds__rbmm__condition_renaming__HeadVar__7_7;
#line 289 "rbmm.condition_renaming.m"
          }
#line 252 "rbmm.condition_renaming.m"
        else
#line 252 "rbmm.condition_renaming.m"
          if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__HeadVar__6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 264 "rbmm.condition_renaming.m"
            {
#line 264 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9;
#line 264 "rbmm.condition_renaming.m"
              *transform_hlds__rbmm__condition_renaming__HeadVar__8_8 = transform_hlds__rbmm__condition_renaming__HeadVar__7_7;
#line 264 "rbmm.condition_renaming.m"
            }
#line 252 "rbmm.condition_renaming.m"
          else
#line 252 "rbmm.condition_renaming.m"
            if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__HeadVar__6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 252 "rbmm.condition_renaming.m"
              {
#line 252 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_198_198;
#line 252 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__Conjs_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 2)));
#line 252 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__V_24_24;
#line 252 "rbmm.condition_renaming.m"
                MR_Word transform_hlds__rbmm__condition_renaming__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 1)));
#line 253 "rbmm.condition_renaming.m"
                MR_Box transform_hlds__rbmm__condition_renaming__conv3_HeadVar__8_8;
#line 253 "rbmm.condition_renaming.m"
                MR_Box transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsProc_10;

#line 253 "rbmm.condition_renaming.m"
                {
#line 253 "rbmm.condition_renaming.m"
                  transform_hlds__rbmm__condition_renaming__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 253 "rbmm.condition_renaming.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_24_24, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_8[0]));
#line 253 "rbmm.condition_renaming.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_24_24, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_1));
#line 253 "rbmm.condition_renaming.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 253 "rbmm.condition_renaming.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_24_24, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_1));
#line 253 "rbmm.condition_renaming.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_24_24, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_2));
#line 253 "rbmm.condition_renaming.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_24_24, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_3));
#line 253 "rbmm.condition_renaming.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_24_24, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4));
#line 253 "rbmm.condition_renaming.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_24_24, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5));
#line 253 "rbmm.condition_renaming.m"
                }
#line 7371 "transform_hlds.rbmm.condition_renaming.c"
                transform_hlds__rbmm__condition_renaming__TypeInfo_198_198 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0];
#line 253 "rbmm.condition_renaming.m"
                {
#line 253 "rbmm.condition_renaming.m"
                  mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__condition_renaming__TypeInfo_198_198, transform_hlds__rbmm__condition_renaming__TypeInfo_198_198, transform_hlds__rbmm__condition_renaming__V_24_24, transform_hlds__rbmm__condition_renaming__Conjs_17, ((MR_Box) (transform_hlds__rbmm__condition_renaming__HeadVar__7_7)), &transform_hlds__rbmm__condition_renaming__conv3_HeadVar__8_8, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9)), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsProc_10);
                }
#line 253 "rbmm.condition_renaming.m"
                *transform_hlds__rbmm__condition_renaming__HeadVar__8_8 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_HeadVar__8_8);
#line 253 "rbmm.condition_renaming.m"
                *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsProc_10);
#line 252 "rbmm.condition_renaming.m"
              }
#line 252 "rbmm.condition_renaming.m"
            else
#line 252 "rbmm.condition_renaming.m"
              if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__HeadVar__6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 277 "rbmm.condition_renaming.m"
                {
#line 277 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_212_212;
#line 277 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__Disjs_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 1)));
#line 277 "rbmm.condition_renaming.m"
                  MR_Word transform_hlds__rbmm__condition_renaming__V_107_107;
#line 278 "rbmm.condition_renaming.m"
                  MR_Box transform_hlds__rbmm__condition_renaming__conv7_HeadVar__8_8;
#line 278 "rbmm.condition_renaming.m"
                  MR_Box transform_hlds__rbmm__condition_renaming__conv6_STATE_VARIABLE_InCondRegionsProc_10;

#line 278 "rbmm.condition_renaming.m"
                  {
#line 278 "rbmm.condition_renaming.m"
                    transform_hlds__rbmm__condition_renaming__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 278 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_107_107, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_8[0]));
#line 278 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_107_107, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_2));
#line 278 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_107_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 278 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_107_107, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_1));
#line 278 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_107_107, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_2));
#line 278 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_107_107, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_3));
#line 278 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_107_107, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4));
#line 278 "rbmm.condition_renaming.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_107_107, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5));
#line 278 "rbmm.condition_renaming.m"
                  }
#line 7423 "transform_hlds.rbmm.condition_renaming.c"
                  transform_hlds__rbmm__condition_renaming__TypeInfo_212_212 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0];
#line 278 "rbmm.condition_renaming.m"
                  {
#line 278 "rbmm.condition_renaming.m"
                    mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__rbmm__condition_renaming__TypeInfo_212_212, transform_hlds__rbmm__condition_renaming__TypeInfo_212_212, transform_hlds__rbmm__condition_renaming__V_107_107, transform_hlds__rbmm__condition_renaming__Disjs_100, ((MR_Box) (transform_hlds__rbmm__condition_renaming__HeadVar__7_7)), &transform_hlds__rbmm__condition_renaming__conv7_HeadVar__8_8, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9)), &transform_hlds__rbmm__condition_renaming__conv6_STATE_VARIABLE_InCondRegionsProc_10);
                  }
#line 278 "rbmm.condition_renaming.m"
                  *transform_hlds__rbmm__condition_renaming__HeadVar__8_8 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv7_HeadVar__8_8);
#line 278 "rbmm.condition_renaming.m"
                  *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv6_STATE_VARIABLE_InCondRegionsProc_10);
#line 277 "rbmm.condition_renaming.m"
                }
#line 252 "rbmm.condition_renaming.m"
              else
#line 252 "rbmm.condition_renaming.m"
                if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__HeadVar__6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 261 "rbmm.condition_renaming.m"
                  {
#line 261 "rbmm.condition_renaming.m"
                    *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9;
#line 261 "rbmm.condition_renaming.m"
                    *transform_hlds__rbmm__condition_renaming__HeadVar__8_8 = transform_hlds__rbmm__condition_renaming__HeadVar__7_7;
#line 261 "rbmm.condition_renaming.m"
                  }
#line 252 "rbmm.condition_renaming.m"
                else
#line 252 "rbmm.condition_renaming.m"
                  if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__HeadVar__6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 301 "rbmm.condition_renaming.m"
                    {
#line 301 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__Cond_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 2)));
#line 301 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__Then_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 3)));
#line 301 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__Else_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 4)));
#line 301 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_171_171;
#line 301 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_172_172;
#line 301 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_173_173;
#line 301 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_174_174;
#line 302 "rbmm.condition_renaming.m"
                      MR_Word transform_hlds__rbmm__condition_renaming__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 1)));

#line 305 "rbmm.condition_renaming.m"
                      {
#line 305 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_1, transform_hlds__rbmm__condition_renaming__LRBeforeProc_2, transform_hlds__rbmm__condition_renaming__LRAfterProc_3, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5, transform_hlds__rbmm__condition_renaming__Cond_164, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_171_171);
                      }
#line 312 "rbmm.condition_renaming.m"
                      {
#line 312 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(transform_hlds__rbmm__condition_renaming__Graph_1, transform_hlds__rbmm__condition_renaming__LRBeforeProc_2, transform_hlds__rbmm__condition_renaming__LRAfterProc_3, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5, transform_hlds__rbmm__condition_renaming__Cond_164, transform_hlds__rbmm__condition_renaming__HeadVar__7_7, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_172_172, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_171_171, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_173_173);
                      }
#line 315 "rbmm.condition_renaming.m"
                      {
#line 315 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(transform_hlds__rbmm__condition_renaming__Graph_1, transform_hlds__rbmm__condition_renaming__LRBeforeProc_2, transform_hlds__rbmm__condition_renaming__LRAfterProc_3, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5, transform_hlds__rbmm__condition_renaming__Then_165, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_172_172, &transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_174_174, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_173_173, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10);
                      }
#line 318 "rbmm.condition_renaming.m"
                      {
#line 318 "rbmm.condition_renaming.m"
                        transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(transform_hlds__rbmm__condition_renaming__Graph_1, transform_hlds__rbmm__condition_renaming__LRBeforeProc_2, transform_hlds__rbmm__condition_renaming__LRAfterProc_3, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5, transform_hlds__rbmm__condition_renaming__Else_166, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionProc_174_174, transform_hlds__rbmm__condition_renaming__HeadVar__8_8);
#line 318 "rbmm.condition_renaming.m"
                        return;
                      }
#line 301 "rbmm.condition_renaming.m"
                    }
#line 252 "rbmm.condition_renaming.m"
                  else
#line 252 "rbmm.condition_renaming.m"
                    if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__HeadVar__6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 293 "rbmm.condition_renaming.m"
                      {
#line 293 "rbmm.condition_renaming.m"
                        MR_Word transform_hlds__rbmm__condition_renaming__Goal_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 2)));
#line 293 "rbmm.condition_renaming.m"
                        MR_Word transform_hlds__rbmm__condition_renaming__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 1)));

#line 296 "rbmm.condition_renaming.m"
                        {
#line 296 "rbmm.condition_renaming.m"
                          transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(transform_hlds__rbmm__condition_renaming__Graph_1, transform_hlds__rbmm__condition_renaming__LRBeforeProc_2, transform_hlds__rbmm__condition_renaming__LRAfterProc_3, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5, transform_hlds__rbmm__condition_renaming__Goal_146, transform_hlds__rbmm__condition_renaming__HeadVar__7_7, transform_hlds__rbmm__condition_renaming__HeadVar__8_8, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10);
#line 296 "rbmm.condition_renaming.m"
                          return;
                        }
#line 293 "rbmm.condition_renaming.m"
                      }
#line 252 "rbmm.condition_renaming.m"
                    else
#line 252 "rbmm.condition_renaming.m"
                      if (((((MR_tag((MR_Word) transform_hlds__rbmm__condition_renaming__HeadVar__6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 322 "rbmm.condition_renaming.m"
                        {
#line 324 "rbmm.condition_renaming.m"
                          {
#line 324 "rbmm.condition_renaming.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.condition_renaming", (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_and_in_cond_regions_expr\'/10", (MR_String) "shorthand");
#line 324 "rbmm.condition_renaming.m"
                            return;
                          }
#line 322 "rbmm.condition_renaming.m"
                        }
#line 252 "rbmm.condition_renaming.m"
                      else
#line 269 "rbmm.condition_renaming.m"
                        {
#line 269 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_205_205;
#line 269 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__Cases_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 3)));
#line 269 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__V_92_92;
#line 269 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 1)));
#line 269 "rbmm.condition_renaming.m"
                          MR_Word transform_hlds__rbmm__condition_renaming__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__condition_renaming__HeadVar__6_6, (MR_Integer) 2)));
#line 270 "rbmm.condition_renaming.m"
                          MR_Box transform_hlds__rbmm__condition_renaming__conv11_HeadVar__8_8;
#line 270 "rbmm.condition_renaming.m"
                          MR_Box transform_hlds__rbmm__condition_renaming__conv10_STATE_VARIABLE_InCondRegionsProc_10;

#line 270 "rbmm.condition_renaming.m"
                          {
#line 270 "rbmm.condition_renaming.m"
                            transform_hlds__rbmm__condition_renaming__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 270 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_92_92, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_8[1]));
#line 270 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_92_92, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_3));
#line 270 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_92_92, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 270 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_92_92, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__Graph_1));
#line 270 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_92_92, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeProc_2));
#line 270 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_92_92, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterProc_3));
#line 270 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_92_92, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingProc_4));
#line 270 "rbmm.condition_renaming.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_92_92, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_5));
#line 270 "rbmm.condition_renaming.m"
                          }
#line 7571 "transform_hlds.rbmm.condition_renaming.c"
                          transform_hlds__rbmm__condition_renaming__TypeInfo_205_205 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0];
#line 270 "rbmm.condition_renaming.m"
                          {
#line 270 "rbmm.condition_renaming.m"
                            mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, transform_hlds__rbmm__condition_renaming__TypeInfo_205_205, transform_hlds__rbmm__condition_renaming__TypeInfo_205_205, transform_hlds__rbmm__condition_renaming__V_92_92, transform_hlds__rbmm__condition_renaming__Cases_85, ((MR_Box) (transform_hlds__rbmm__condition_renaming__HeadVar__7_7)), &transform_hlds__rbmm__condition_renaming__conv11_HeadVar__8_8, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_9)), &transform_hlds__rbmm__condition_renaming__conv10_STATE_VARIABLE_InCondRegionsProc_10);
                          }
#line 270 "rbmm.condition_renaming.m"
                          *transform_hlds__rbmm__condition_renaming__HeadVar__8_8 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv11_HeadVar__8_8);
#line 270 "rbmm.condition_renaming.m"
                          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_10 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv10_STATE_VARIABLE_InCondRegionsProc_10);
#line 269 "rbmm.condition_renaming.m"
                        }
#line 252 "rbmm.condition_renaming.m"
  }
#line 244 "rbmm.condition_renaming.m"
}

#line 230 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(
#line 230 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Graph_11,
#line 230 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_12,
#line 230 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_13,
#line 230 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_14,
#line 230 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_15,
#line 230 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__Goal_16,
#line 230 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsProc_0_21,
#line 230 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsProc_22,
#line 230 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_23,
#line 230 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_24)
#line 230 "rbmm.condition_renaming.m"
{
#line 238 "rbmm.condition_renaming.m"
  {
#line 238 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 238 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__Expr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Goal_16, (MR_Integer) 0)));
#line 239 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Goal_16, (MR_Integer) 1)));

#line 240 "rbmm.condition_renaming.m"
    {
#line 240 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0(transform_hlds__rbmm__condition_renaming__Graph_11, transform_hlds__rbmm__condition_renaming__LRBeforeProc_12, transform_hlds__rbmm__condition_renaming__LRAfterProc_13, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_14, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_15, transform_hlds__rbmm__condition_renaming__Expr_19, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsProc_0_21, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsProc_22, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_0_23, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsProc_24);
#line 240 "rbmm.condition_renaming.m"
      return;
    }
#line 238 "rbmm.condition_renaming.m"
  }
#line 230 "rbmm.condition_renaming.m"
}

#line 181 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_12_p_0(
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ModuleInfo_13,
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PredId_14,
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_15,
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeTable_16,
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterTable_17,
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingTable_18,
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoTable_19,
#line 181 "rbmm.condition_renaming.m"
  MR_Integer transform_hlds__rbmm__condition_renaming__ProcId_20,
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_0_37,
#line 181 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_38,
#line 181 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_0_39,
#line 181 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_40)
#line 181 "rbmm.condition_renaming.m"
{
#line 192 "rbmm.condition_renaming.m"
  {
#line 192 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 192 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__PPId_23;
#line 194 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_41_41;

#line 193 "rbmm.condition_renaming.m"
    {
#line 193 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__PPId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 193 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__PPId_23, 0) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__PredId_14));
#line 193 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__PPId_23, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ProcId_20));
#line 193 "rbmm.condition_renaming.m"
    }
#line 194 "rbmm.condition_renaming.m"
    {
#line 194 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__V_41_41, 0) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_23));
#line 194 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__condition_renaming__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 194 "rbmm.condition_renaming.m"
    }
#line 194 "rbmm.condition_renaming.m"
    {
#line 194 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__condition_renaming__V_41_41, transform_hlds__rbmm__condition_renaming__ModuleInfo_13);
    }
#line 196 "rbmm.condition_renaming.m"
    if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 195 "rbmm.condition_renaming.m"
      {
#line 195 "rbmm.condition_renaming.m"
        *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_40 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_0_39;
#line 195 "rbmm.condition_renaming.m"
        *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_38 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_0_37;
#line 195 "rbmm.condition_renaming.m"
      }
#line 196 "rbmm.condition_renaming.m"
    else
#line 197 "rbmm.condition_renaming.m"
      {
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_52_52;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_59_59;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_60_60;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ProcInfo0_24;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ProcInfo_25;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__Goal_26;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__Graph_27;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeProc_29;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__LRAfterProc_30;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc_32;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_34;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_35;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__InCondRegionsProc_36;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_43_43;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_44_44;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_45_45;
#line 197 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__Expr_75;
#line 200 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv0_V_43_43;
#line 200 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_28_28;
#line 201 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv1_LRBeforeProc_29;
#line 202 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv2_LRAfterProc_30;
#line 205 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingProc0_31;
#line 203 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv3_ResurRenamingProc0_31;
#line 210 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc0_33;
#line 208 "rbmm.condition_renaming.m"
        MR_Box transform_hlds__rbmm__condition_renaming__conv4_ResurRenamingAnnoProc0_33;
#line 239 "rbmm.condition_renaming.m"
        MR_Word transform_hlds__rbmm__condition_renaming__V_76_76;
#line 218 "rbmm.condition_renaming.m"
        MR_Integer transform_hlds__rbmm__condition_renaming__V_46_46;
#line 223 "rbmm.condition_renaming.m"
        MR_Integer transform_hlds__rbmm__condition_renaming__V_48_48;

#line 197 "rbmm.condition_renaming.m"
        {
#line 197 "rbmm.condition_renaming.m"
          hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__condition_renaming__ModuleInfo_13, transform_hlds__rbmm__condition_renaming__PPId_23, &transform_hlds__rbmm__condition_renaming__ProcInfo0_24);
        }
#line 198 "rbmm.condition_renaming.m"
        {
#line 198 "rbmm.condition_renaming.m"
          hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(transform_hlds__rbmm__condition_renaming__ModuleInfo_13, transform_hlds__rbmm__condition_renaming__ProcInfo0_24, &transform_hlds__rbmm__condition_renaming__ProcInfo_25);
        }
#line 199 "rbmm.condition_renaming.m"
        {
#line 199 "rbmm.condition_renaming.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__condition_renaming__ProcInfo_25, &transform_hlds__rbmm__condition_renaming__Goal_26);
        }
#line 7786 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 200 "rbmm.condition_renaming.m"
        {
#line 200 "rbmm.condition_renaming.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__condition_renaming__RptaInfoTable_15, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_23)), &transform_hlds__rbmm__condition_renaming__conv0_V_43_43);
        }
#line 200 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__V_43_43 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv0_V_43_43);
#line 200 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__Graph_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_43_43, (MR_Integer) 0)));
#line 200 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_43_43, (MR_Integer) 1)));
#line 7799 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeInfo_52_52 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[7];
#line 201 "rbmm.condition_renaming.m"
        {
#line 201 "rbmm.condition_renaming.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50, transform_hlds__rbmm__condition_renaming__TypeInfo_52_52, transform_hlds__rbmm__condition_renaming__LRBeforeTable_16, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_23)), &transform_hlds__rbmm__condition_renaming__conv1_LRBeforeProc_29);
        }
#line 201 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__LRBeforeProc_29 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_LRBeforeProc_29);
#line 202 "rbmm.condition_renaming.m"
        {
#line 202 "rbmm.condition_renaming.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50, transform_hlds__rbmm__condition_renaming__TypeInfo_52_52, transform_hlds__rbmm__condition_renaming__LRAfterTable_17, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_23)), &transform_hlds__rbmm__condition_renaming__conv2_LRAfterProc_30);
        }
#line 202 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__LRAfterProc_30 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_LRAfterProc_30);
#line 203 "rbmm.condition_renaming.m"
        {
#line 203 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3], transform_hlds__rbmm__condition_renaming__ResurRenamingTable_18, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_23)), &transform_hlds__rbmm__condition_renaming__conv3_ResurRenamingProc0_31);
        }
#line 203 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 203 "rbmm.condition_renaming.m"
          {
#line 203 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ResurRenamingProc0_31 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_ResurRenamingProc0_31);
#line 203 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 203 "rbmm.condition_renaming.m"
          }
#line 205 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 204 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__ResurRenamingProc_32 = transform_hlds__rbmm__condition_renaming__ResurRenamingProc0_31;
#line 205 "rbmm.condition_renaming.m"
        else
#line 206 "rbmm.condition_renaming.m"
          {
#line 206 "rbmm.condition_renaming.m"
            {
#line 206 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__ResurRenamingProc_32 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[2]);
            }
#line 206 "rbmm.condition_renaming.m"
          }
#line 208 "rbmm.condition_renaming.m"
        {
#line 208 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[5], transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoTable_19, ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_23)), &transform_hlds__rbmm__condition_renaming__conv4_ResurRenamingAnnoProc0_33);
        }
#line 208 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 208 "rbmm.condition_renaming.m"
          {
#line 208 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc0_33 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv4_ResurRenamingAnnoProc0_33);
#line 208 "rbmm.condition_renaming.m"
            transform_hlds__rbmm__condition_renaming__succeeded = MR_TRUE;
#line 208 "rbmm.condition_renaming.m"
          }
#line 210 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 209 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_34 = transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc0_33;
#line 210 "rbmm.condition_renaming.m"
        else
#line 211 "rbmm.condition_renaming.m"
          {
#line 211 "rbmm.condition_renaming.m"
            {
#line 211 "rbmm.condition_renaming.m"
              transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_34 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[2]);
            }
#line 211 "rbmm.condition_renaming.m"
          }
#line 7875 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeCtorInfo_59_59 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
#line 7877 "transform_hlds.rbmm.condition_renaming.c"
        transform_hlds__rbmm__condition_renaming__TypeInfo_60_60 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_1[0];
#line 213 "rbmm.condition_renaming.m"
        {
#line 213 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_44_44 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_59_59, transform_hlds__rbmm__condition_renaming__TypeInfo_60_60);
        }
#line 213 "rbmm.condition_renaming.m"
        {
#line 213 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_45_45 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_59_59, transform_hlds__rbmm__condition_renaming__TypeInfo_60_60);
        }
#line 239 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__Expr_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Goal_26, (MR_Integer) 0)));
#line 239 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__Goal_26, (MR_Integer) 1)));
#line 240 "rbmm.condition_renaming.m"
        {
#line 240 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0(transform_hlds__rbmm__condition_renaming__Graph_27, transform_hlds__rbmm__condition_renaming__LRBeforeProc_29, transform_hlds__rbmm__condition_renaming__LRAfterProc_30, transform_hlds__rbmm__condition_renaming__ResurRenamingProc_32, transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoProc_34, transform_hlds__rbmm__condition_renaming__Expr_75, transform_hlds__rbmm__condition_renaming__V_44_44, &transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_35, transform_hlds__rbmm__condition_renaming__V_45_45, &transform_hlds__rbmm__condition_renaming__InCondRegionsProc_36);
        }
#line 218 "rbmm.condition_renaming.m"
        {
#line 218 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_46_46 = mercury__map__count_1_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_59_59, transform_hlds__rbmm__condition_renaming__TypeInfo_60_60, transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_35);
        }
#line 218 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = (transform_hlds__rbmm__condition_renaming__V_46_46 == (MR_Integer) 0);
#line 220 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 218 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_38 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_0_37;
#line 220 "rbmm.condition_renaming.m"
        else
#line 221 "rbmm.condition_renaming.m"
          {
#line 221 "rbmm.condition_renaming.m"
            {
#line 221 "rbmm.condition_renaming.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_23)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__NonLocalRegionsProc_35)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_0_37, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_38);
            }
#line 221 "rbmm.condition_renaming.m"
          }
#line 223 "rbmm.condition_renaming.m"
        {
#line 223 "rbmm.condition_renaming.m"
          transform_hlds__rbmm__condition_renaming__V_48_48 = mercury__map__count_1_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_59_59, transform_hlds__rbmm__condition_renaming__TypeInfo_60_60, transform_hlds__rbmm__condition_renaming__InCondRegionsProc_36);
        }
#line 223 "rbmm.condition_renaming.m"
        transform_hlds__rbmm__condition_renaming__succeeded = (transform_hlds__rbmm__condition_renaming__V_48_48 == (MR_Integer) 0);
#line 225 "rbmm.condition_renaming.m"
        if (transform_hlds__rbmm__condition_renaming__succeeded)
#line 223 "rbmm.condition_renaming.m"
          *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_40 = transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_0_39;
#line 225 "rbmm.condition_renaming.m"
        else
#line 226 "rbmm.condition_renaming.m"
          {
#line 226 "rbmm.condition_renaming.m"
            {
#line 226 "rbmm.condition_renaming.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_50_50, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__condition_renaming__PPId_23)), ((MR_Box) (transform_hlds__rbmm__condition_renaming__InCondRegionsProc_36)), transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_0_39, transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_40);
#line 226 "rbmm.condition_renaming.m"
              return;
            }
#line 226 "rbmm.condition_renaming.m"
          }
#line 197 "rbmm.condition_renaming.m"
      }
#line 192 "rbmm.condition_renaming.m"
  }
#line 181 "rbmm.condition_renaming.m"
}

#line 176 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0_1(
#line 176 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 176 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 176 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 176 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 176 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 176 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5)
#line 176 "rbmm.condition_renaming.m"
{
#line 176 "rbmm.condition_renaming.m"
  {
#line 176 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 176 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsTable_38;
#line 176 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsTable_40;

#line 176 "rbmm.condition_renaming.m"
    {
#line 176 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 9))), ((MR_Integer) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsTable_38, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_4), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsTable_40);
    }
#line 176 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsTable_38));
#line 176 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsTable_40));
#line 176 "rbmm.condition_renaming.m"
  }
#line 176 "rbmm.condition_renaming.m"
}

#line 162 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0(
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ModuleInfo_12,
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__RptaInfoTable_13,
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRBeforeTable_14,
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__LRAfterTable_15,
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingTable_16,
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoTable_17,
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__PredId_18,
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_0_23,
#line 162 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_24,
#line 162 "rbmm.condition_renaming.m"
  MR_Word transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_0_25,
#line 162 "rbmm.condition_renaming.m"
  MR_Word * transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_26)
#line 162 "rbmm.condition_renaming.m"
{
#line 173 "rbmm.condition_renaming.m"
  {
#line 173 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 173 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_36_36;
#line 173 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__PredInfo_21;
#line 173 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__ProcIds_22;
#line 173 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_27_27;
#line 176 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_NonLocalRegionsTable_24;
#line 176 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsTable_26;

#line 174 "rbmm.condition_renaming.m"
    {
#line 174 "rbmm.condition_renaming.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__condition_renaming__ModuleInfo_12, transform_hlds__rbmm__condition_renaming__PredId_18, &transform_hlds__rbmm__condition_renaming__PredInfo_21);
    }
#line 175 "rbmm.condition_renaming.m"
    {
#line 175 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__ProcIds_22 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__condition_renaming__PredInfo_21);
    }
#line 176 "rbmm.condition_renaming.m"
    {
#line 176 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 176 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_7[0]));
#line 176 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0_1));
#line 176 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 176 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ModuleInfo_12));
#line 176 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__PredId_18));
#line 176 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__RptaInfoTable_13));
#line 176 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeTable_14));
#line 176 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterTable_15));
#line 176 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 8) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingTable_16));
#line 176 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_27_27, 9) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoTable_17));
#line 176 "rbmm.condition_renaming.m"
    }
#line 8071 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeInfo_36_36 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[1];
#line 176 "rbmm.condition_renaming.m"
    {
#line 176 "rbmm.condition_renaming.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, transform_hlds__rbmm__condition_renaming__TypeInfo_36_36, transform_hlds__rbmm__condition_renaming__TypeInfo_36_36, transform_hlds__rbmm__condition_renaming__V_27_27, transform_hlds__rbmm__condition_renaming__ProcIds_22, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_0_23)), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_NonLocalRegionsTable_24, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_0_25)), &transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsTable_26);
    }
#line 176 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_NonLocalRegionsTable_24 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_NonLocalRegionsTable_24);
#line 176 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_InCondRegionsTable_26 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_STATE_VARIABLE_InCondRegionsTable_26);
#line 173 "rbmm.condition_renaming.m"
  }
#line 162 "rbmm.condition_renaming.m"
}

#line 1026 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_6_p_0_1(
#line 1026 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 1026 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 1026 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 1026 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 1026 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 1026 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_5,
#line 1026 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_6)
#line 1026 "rbmm.condition_renaming.m"
{
#line 1026 "rbmm.condition_renaming.m"
  {
#line 1026 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 1026 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingTable_23;
#line 1026 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteAnnotationTable_25;

#line 1026 "rbmm.condition_renaming.m"
    {
#line 1026 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_3), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingTable_23, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_5), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteAnnotationTable_25);
    }
#line 1026 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_IteRenamingTable_23));
#line 1026 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteAnnotationTable_25));
#line 1026 "rbmm.condition_renaming.m"
  }
#line 1026 "rbmm.condition_renaming.m"
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
#line 1025 "rbmm.condition_renaming.m"
  {
#line 1025 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 1025 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23;
#line 1025 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_14_14;
#line 1025 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_16_16;
#line 1026 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingTable_13;
#line 1026 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv2_IteAnnotationTable_11;

#line 1026 "rbmm.condition_renaming.m"
    {
#line 1026 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[0]));
#line 1026 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_annotation_6_p_0_1));
#line 1026 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1026 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ExecPathTable_8));
#line 1026 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_14_14, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__RptaInfoTable_9));
#line 1026 "rbmm.condition_renaming.m"
    }
#line 8177 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 1026 "rbmm.condition_renaming.m"
    {
#line 1026 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_16_16 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[5]);
    }
#line 1026 "rbmm.condition_renaming.m"
    {
#line 1026 "rbmm.condition_renaming.m"
      mercury__map__foldl2_6_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_23_23, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[4], (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[6], transform_hlds__rbmm__condition_renaming__V_14_14, transform_hlds__rbmm__condition_renaming__IteRenamedRegionTable_7, ((MR_Box) (transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_0_12)), &transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingTable_13, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_16_16)), &transform_hlds__rbmm__condition_renaming__conv2_IteAnnotationTable_11);
    }
#line 1026 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__STATE_VARIABLE_IteRenamingTable_13 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_STATE_VARIABLE_IteRenamingTable_13);
#line 1026 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__IteAnnotationTable_11 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_IteAnnotationTable_11);
#line 1025 "rbmm.condition_renaming.m"
  }
#line 129 "rbmm.condition_renaming.m"
}

#line 798 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_p_0_1(
#line 798 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 798 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 798 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 798 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 798 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4)
#line 798 "rbmm.condition_renaming.m"
{
#line 798 "rbmm.condition_renaming.m"
  {
#line 798 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 798 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingTable_20;

#line 798 "rbmm.condition_renaming.m"
    {
#line 798 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_3), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingTable_20);
    }
#line 798 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamingTable_20));
#line 798 "rbmm.condition_renaming.m"
  }
#line 798 "rbmm.condition_renaming.m"
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
#line 797 "rbmm.condition_renaming.m"
  {
#line 797 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 797 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_15_15;
#line 797 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_9_9;
#line 797 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_10_10;
#line 798 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv1_IteRenamingTable_8;

#line 798 "rbmm.condition_renaming.m"
    {
#line 798 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 798 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_9_9, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_5[0]));
#line 798 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_9_9, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_p_0_1));
#line 798 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 798 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_9_9, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ModuleInfo_5));
#line 798 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_9_9, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__RptaInfoTable_6));
#line 798 "rbmm.condition_renaming.m"
    }
#line 8274 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeCtorInfo_15_15 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 798 "rbmm.condition_renaming.m"
    {
#line 798 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_10_10 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_15_15, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[3]);
    }
#line 798 "rbmm.condition_renaming.m"
    {
#line 798 "rbmm.condition_renaming.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_15_15, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0], (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[4], transform_hlds__rbmm__condition_renaming__V_9_9, transform_hlds__rbmm__condition_renaming__IteRenamedRegionTable_7, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_10_10)), &transform_hlds__rbmm__condition_renaming__conv1_IteRenamingTable_8);
    }
#line 798 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__IteRenamingTable_8 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_IteRenamingTable_8);
#line 797 "rbmm.condition_renaming.m"
  }
#line 101 "rbmm.condition_renaming.m"
}

#line 752 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_p_0_1(
#line 752 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 752 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 752 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 752 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 752 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_4)
#line 752 "rbmm.condition_renaming.m"
{
#line 752 "rbmm.condition_renaming.m"
  {
#line 752 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 752 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamedRegionTable_13;

#line 752 "rbmm.condition_renaming.m"
    {
#line 752 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_3), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamedRegionTable_13);
    }
#line 752 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_IteRenamedRegionTable_13));
#line 752 "rbmm.condition_renaming.m"
  }
#line 752 "rbmm.condition_renaming.m"
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
#line 751 "rbmm.condition_renaming.m"
  {
#line 751 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 751 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_13_13;
#line 751 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_14_14;
#line 751 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_7_7;
#line 751 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_8_8;
#line 752 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv1_IteRenamedRegionsTable_6;

#line 752 "rbmm.condition_renaming.m"
    {
#line 752 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 752 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_7_7, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[0]));
#line 752 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_7_7, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_p_0_1));
#line 752 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 752 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_7_7, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__NonLocalRegionsTable_5));
#line 752 "rbmm.condition_renaming.m"
    }
#line 8367 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 8369 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeInfo_14_14 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0];
#line 752 "rbmm.condition_renaming.m"
    {
#line 752 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_8_8 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_13_13, transform_hlds__rbmm__condition_renaming__TypeInfo_14_14);
    }
#line 752 "rbmm.condition_renaming.m"
    {
#line 752 "rbmm.condition_renaming.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_13_13, transform_hlds__rbmm__condition_renaming__TypeInfo_14_14, (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[1], transform_hlds__rbmm__condition_renaming__V_7_7, transform_hlds__rbmm__condition_renaming__InCondRegionsTable_4, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_8_8)), &transform_hlds__rbmm__condition_renaming__conv1_IteRenamedRegionsTable_6);
    }
#line 752 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__IteRenamedRegionsTable_6 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv1_IteRenamedRegionsTable_6);
#line 751 "rbmm.condition_renaming.m"
  }
#line 87 "rbmm.condition_renaming.m"
}

#line 157 "rbmm.condition_renaming.m"
static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_8_p_0_1(
#line 157 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__closure_arg,
#line 157 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_1,
#line 157 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_2,
#line 157 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_3,
#line 157 "rbmm.condition_renaming.m"
  MR_Box transform_hlds__rbmm__condition_renaming__wrapper_arg_4,
#line 157 "rbmm.condition_renaming.m"
  MR_Box * transform_hlds__rbmm__condition_renaming__wrapper_arg_5)
#line 157 "rbmm.condition_renaming.m"
{
#line 157 "rbmm.condition_renaming.m"
  {
#line 157 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__closure = transform_hlds__rbmm__condition_renaming__closure_arg;
#line 157 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsTable_24;
#line 157 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsTable_26;

#line 157 "rbmm.condition_renaming.m"
    {
#line 157 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__closure, (MR_Integer) 8))), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_2), &transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsTable_24, ((MR_Word) transform_hlds__rbmm__condition_renaming__wrapper_arg_4), &transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsTable_26);
    }
#line 157 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv1_STATE_VARIABLE_NonLocalRegionsTable_24));
#line 157 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__condition_renaming__conv0_STATE_VARIABLE_InCondRegionsTable_26));
#line 157 "rbmm.condition_renaming.m"
  }
#line 157 "rbmm.condition_renaming.m"
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
#line 155 "rbmm.condition_renaming.m"
  {
#line 155 "rbmm.condition_renaming.m"
    MR_bool transform_hlds__rbmm__condition_renaming__succeeded;
#line 155 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeCtorInfo_27_27;
#line 155 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_28_28;
#line 155 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__TypeInfo_30_30;
#line 155 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__PredIds_17;
#line 155 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_19_19;
#line 155 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_20_20;
#line 155 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_21_21;
#line 156 "rbmm.condition_renaming.m"
    MR_Word transform_hlds__rbmm__condition_renaming__V_18_18;
#line 157 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv3_NonLocalRegionsTable_15;
#line 157 "rbmm.condition_renaming.m"
    MR_Box transform_hlds__rbmm__condition_renaming__conv2_InCondRegionsTable_16;

#line 156 "rbmm.condition_renaming.m"
    {
#line 156 "rbmm.condition_renaming.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__rbmm__condition_renaming__PredIds_17, transform_hlds__rbmm__condition_renaming__ModuleInfo_9, &transform_hlds__rbmm__condition_renaming__V_18_18);
    }
#line 157 "rbmm.condition_renaming.m"
    {
#line 157 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 157 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_19_19, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_3[0]));
#line 157 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_19_19, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_8_p_0_1));
#line 157 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 157 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_19_19, 3) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ModuleInfo_9));
#line 157 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_19_19, 4) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__RptaInfoTable_10));
#line 157 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_19_19, 5) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRBeforeTable_11));
#line 157 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_19_19, 6) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__LRAfterTable_12));
#line 157 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_19_19, 7) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingTable_13));
#line 157 "rbmm.condition_renaming.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__condition_renaming__V_19_19, 8) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__ResurRenamingAnnoTable_14));
#line 157 "rbmm.condition_renaming.m"
    }
#line 8503 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 8505 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeInfo_28_28 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[0];
#line 157 "rbmm.condition_renaming.m"
    {
#line 157 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_20_20 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_27_27, transform_hlds__rbmm__condition_renaming__TypeInfo_28_28);
    }
#line 157 "rbmm.condition_renaming.m"
    {
#line 157 "rbmm.condition_renaming.m"
      transform_hlds__rbmm__condition_renaming__V_21_21 = mercury__map__init_0_f_0(transform_hlds__rbmm__condition_renaming__TypeCtorInfo_27_27, transform_hlds__rbmm__condition_renaming__TypeInfo_28_28);
    }
#line 8517 "transform_hlds.rbmm.condition_renaming.c"
    transform_hlds__rbmm__condition_renaming__TypeInfo_30_30 = (MR_Word) &transform_hlds__rbmm__condition_renaming_scalar_common_2[1];
#line 157 "rbmm.condition_renaming.m"
    {
#line 157 "rbmm.condition_renaming.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__rbmm__condition_renaming__TypeInfo_30_30, transform_hlds__rbmm__condition_renaming__TypeInfo_30_30, transform_hlds__rbmm__condition_renaming__V_19_19, transform_hlds__rbmm__condition_renaming__PredIds_17, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_20_20)), &transform_hlds__rbmm__condition_renaming__conv3_NonLocalRegionsTable_15, ((MR_Box) (transform_hlds__rbmm__condition_renaming__V_21_21)), &transform_hlds__rbmm__condition_renaming__conv2_InCondRegionsTable_16);
    }
#line 157 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__NonLocalRegionsTable_15 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv3_NonLocalRegionsTable_15);
#line 157 "rbmm.condition_renaming.m"
    *transform_hlds__rbmm__condition_renaming__InCondRegionsTable_16 = ((MR_Word) transform_hlds__rbmm__condition_renaming__conv2_InCondRegionsTable_16);
#line 155 "rbmm.condition_renaming.m"
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
