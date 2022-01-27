/*
** Automatically generated from `rbmm.live_region_analysis.m'
** by the Mercury compiler,
** version rotd-2015-06-22
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


/* :- module transform_hlds.rbmm.live_region_analysis. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__live_region_analysis__init
ENDINIT
*/

#include "transform_hlds.rbmm.live_region_analysis.mih"


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
#include "transform_hlds.rbmm.live_variable_analysis.mih"
#include "transform_hlds.rbmm.points_to_analysis.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"




#line 149 "transform_hlds.rbmm.live_region_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 152 "transform_hlds.rbmm.live_region_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 155 "transform_hlds.rbmm.live_region_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 158 "transform_hlds.rbmm.live_region_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 161 "transform_hlds.rbmm.live_region_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "transform_hlds.rbmm.live_region_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 206 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_p_0(
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_95_95,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_96_96,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_97_97,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_98_98,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_99_99,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__HeadVar__2_2,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_4,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_6,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_8,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_10,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_12,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_14,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_16,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_18);

#line 206 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_p_0(
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_95_95,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_96_96,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_97_97,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_98_98,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_99_99,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_100_100,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__HeadVar__2_2,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_4,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_6,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_8,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_10,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_12,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_14,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_16,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_18);

#line 229 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0_1(
#line 229 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__closure_arg,
#line 229 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_1,
#line 229 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_2,
#line 229 "rbmm.live_region_analysis.m"
  MR_Box * transform_hlds__rbmm__live_region_analysis__wrapper_arg_3);

#line 220 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0(
#line 220 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__LVSet_6,
#line 220 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__Graph_7,
#line 220 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_8,
#line 220 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__ProcInfo_9,
#line 220 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__LRSet_10);

#line 229 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0_1(
#line 229 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__closure_arg,
#line 229 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_1,
#line 229 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_2,
#line 229 "rbmm.live_region_analysis.m"
  MR_Box * transform_hlds__rbmm__live_region_analysis__wrapper_arg_3);

#line 195 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0(
#line 195 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__Graph_8,
#line 195 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_9,
#line 195 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__ProcInfo_10,
#line 195 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__ProgPoint_11,
#line 195 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__LVs_12,
#line 195 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_ProcLRMap_0_15,
#line 195 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_ProcLRMap_16);

#line 175 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_1(
#line 175 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__closure_arg,
#line 175 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_1,
#line 175 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_2,
#line 175 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_3,
#line 175 "rbmm.live_region_analysis.m"
  MR_Box * transform_hlds__rbmm__live_region_analysis__wrapper_arg_4);

#line 120 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0(
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_24,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__RptaInfoTable_25,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__LVBeforeTable_26,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__LVAfterTable_27,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__VoidVarTable_28,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__PredId_29,
#line 120 "rbmm.live_region_analysis.m"
  MR_Integer transform_hlds__rbmm__live_region_analysis__ProcId_30,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_0_58,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_59,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_0_60,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_61,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_0_62,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_63,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_0_64,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_65,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_0_66,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_67,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_0_68,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_69,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_0_70,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_71,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_0_72,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_73);

#line 94 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_p_0(
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_23,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__RptaInfoTable_24,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__LVBeforeTable_25,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__LVAfterTable_26,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__VoidVarTable_27,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__PredId_28,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_0_39,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_40,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_0_41,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_42,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_0_43,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_44,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_0_45,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_46,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_0_47,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_48,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_0_49,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_50,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_0_51,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_52,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_0_53,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_54);


static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_2[2][3];

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_3[1][10];

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_4[1][9];




static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_3[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_4[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
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



#line 526 "transform_hlds.rbmm.live_region_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 534 "transform_hlds.rbmm.live_region_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__live_region_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 542 "transform_hlds.rbmm.live_region_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 550 "transform_hlds.rbmm.live_region_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__live_region_analysis__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 559 "transform_hlds.rbmm.live_region_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 567 "transform_hlds.rbmm.live_region_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 206 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_p_0(
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_95_95,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_96_96,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_97_97,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_98_98,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_99_99,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__HeadVar__2_2,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_4,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_6,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_8,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_10,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_12,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_14,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_16,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_18)
#line 206 "rbmm.live_region_analysis.m"
{
#line 211 "rbmm.live_region_analysis.m"
  while (MR_TRUE)
#line 211 "rbmm.live_region_analysis.m"
    {
#line 211 "rbmm.live_region_analysis.m"
      /* tailcall optimized into a loop */
#line 211 "rbmm.live_region_analysis.m"
      {
#line 211 "rbmm.live_region_analysis.m"
        MR_bool transform_hlds__rbmm__live_region_analysis__succeeded;

#line 211 "rbmm.live_region_analysis.m"
        if ((transform_hlds__rbmm__live_region_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 211 "rbmm.live_region_analysis.m"
          {
#line 211 "rbmm.live_region_analysis.m"
            *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_18 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17;
#line 211 "rbmm.live_region_analysis.m"
            *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_16 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15;
#line 211 "rbmm.live_region_analysis.m"
            *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_14 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13;
#line 211 "rbmm.live_region_analysis.m"
            *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_12 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11;
#line 211 "rbmm.live_region_analysis.m"
            *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_10 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9;
#line 211 "rbmm.live_region_analysis.m"
            *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_8 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7;
#line 211 "rbmm.live_region_analysis.m"
            *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_6 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5;
#line 211 "rbmm.live_region_analysis.m"
            *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_4 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3;
#line 211 "rbmm.live_region_analysis.m"
          }
#line 211 "rbmm.live_region_analysis.m"
        else
#line 212 "rbmm.live_region_analysis.m"
          {
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__H_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_region_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__T_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_region_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_70_70;
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_71_71;
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_72_72;
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_73_73;
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_74_74;
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_75_75;
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_76_76;
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_77_77;

#line 213 "rbmm.live_region_analysis.m"
            {
#line 213 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_p_0(transform_hlds__rbmm__live_region_analysis__V_95_95, transform_hlds__rbmm__live_region_analysis__V_96_96, transform_hlds__rbmm__live_region_analysis__V_97_97, transform_hlds__rbmm__live_region_analysis__V_98_98, transform_hlds__rbmm__live_region_analysis__V_99_99, transform_hlds__rbmm__live_region_analysis__H_45, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_70_70, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_71_71, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_72_72, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_73_73, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_74_74, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_75_75, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_76_76, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_77_77);
            }
#line 214 "rbmm.live_region_analysis.m"
            /* direct tailcall eliminated */
#line 214 "rbmm.live_region_analysis.m"
            {
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__live_region_analysis__T_46;
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0__tmp_copy_3 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_70_70;
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0__tmp_copy_5 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_71_71;
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0__tmp_copy_7 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_72_72;
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0__tmp_copy_9 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_73_73;
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0__tmp_copy_11 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_74_74;
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0__tmp_copy_13 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_75_75;
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0__tmp_copy_15 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_76_76;
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0__tmp_copy_17 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_77_77;

#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0__tmp_copy_17;
#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0__tmp_copy_15;
#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0__tmp_copy_13;
#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0__tmp_copy_11;
#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0__tmp_copy_9;
#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0__tmp_copy_7;
#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0__tmp_copy_5;
#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0__tmp_copy_3;
#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__HeadVar__2_2 = transform_hlds__rbmm__live_region_analysis__HeadVar__2__tmp_copy_2;
#line 214 "rbmm.live_region_analysis.m"
            }
#line 214 "rbmm.live_region_analysis.m"
            continue;
#line 212 "rbmm.live_region_analysis.m"
          }
#line 211 "rbmm.live_region_analysis.m"
      }
#line 211 "rbmm.live_region_analysis.m"
      break;
#line 211 "rbmm.live_region_analysis.m"
    }
#line 206 "rbmm.live_region_analysis.m"
}

#line 206 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_p_0(
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_95_95,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_96_96,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_97_97,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_98_98,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_99_99,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__V_100_100,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__HeadVar__2_2,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_4,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_6,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_8,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_10,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_12,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_14,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_16,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17,
#line 206 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_18)
#line 206 "rbmm.live_region_analysis.m"
{
#line 211 "rbmm.live_region_analysis.m"
  while (MR_TRUE)
#line 211 "rbmm.live_region_analysis.m"
    {
#line 211 "rbmm.live_region_analysis.m"
      /* tailcall optimized into a loop */
#line 211 "rbmm.live_region_analysis.m"
      {
#line 211 "rbmm.live_region_analysis.m"
        MR_bool transform_hlds__rbmm__live_region_analysis__succeeded;

#line 211 "rbmm.live_region_analysis.m"
        if ((transform_hlds__rbmm__live_region_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 211 "rbmm.live_region_analysis.m"
          {
#line 211 "rbmm.live_region_analysis.m"
            *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_18 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17;
#line 211 "rbmm.live_region_analysis.m"
            *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_16 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15;
#line 211 "rbmm.live_region_analysis.m"
            *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_14 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13;
#line 211 "rbmm.live_region_analysis.m"
            *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_12 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11;
#line 211 "rbmm.live_region_analysis.m"
            *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_10 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9;
#line 211 "rbmm.live_region_analysis.m"
            *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_8 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7;
#line 211 "rbmm.live_region_analysis.m"
            *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_6 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5;
#line 211 "rbmm.live_region_analysis.m"
            *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_4 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3;
#line 211 "rbmm.live_region_analysis.m"
          }
#line 211 "rbmm.live_region_analysis.m"
        else
#line 212 "rbmm.live_region_analysis.m"
          {
#line 212 "rbmm.live_region_analysis.m"
            MR_Integer transform_hlds__rbmm__live_region_analysis__H_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_region_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__T_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_region_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_70_70;
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_71_71;
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_72_72;
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_73_73;
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_74_74;
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_75_75;
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_76_76;
#line 212 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_77_77;

#line 213 "rbmm.live_region_analysis.m"
            {
#line 213 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0(transform_hlds__rbmm__live_region_analysis__V_95_95, transform_hlds__rbmm__live_region_analysis__V_96_96, transform_hlds__rbmm__live_region_analysis__V_97_97, transform_hlds__rbmm__live_region_analysis__V_98_98, transform_hlds__rbmm__live_region_analysis__V_99_99, transform_hlds__rbmm__live_region_analysis__V_100_100, transform_hlds__rbmm__live_region_analysis__H_45, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_70_70, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_71_71, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_72_72, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_73_73, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_74_74, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_75_75, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_76_76, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_77_77);
            }
#line 214 "rbmm.live_region_analysis.m"
            /* direct tailcall eliminated */
#line 214 "rbmm.live_region_analysis.m"
            {
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__live_region_analysis__T_46;
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0__tmp_copy_3 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_70_70;
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0__tmp_copy_5 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_71_71;
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0__tmp_copy_7 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_72_72;
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0__tmp_copy_9 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_73_73;
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0__tmp_copy_11 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_74_74;
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0__tmp_copy_13 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_75_75;
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0__tmp_copy_15 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_76_76;
#line 214 "rbmm.live_region_analysis.m"
              MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0__tmp_copy_17 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_77_77;

#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0__tmp_copy_17;
#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0__tmp_copy_15;
#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0__tmp_copy_13;
#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0__tmp_copy_11;
#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0__tmp_copy_9;
#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0__tmp_copy_7;
#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0__tmp_copy_5;
#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0__tmp_copy_3;
#line 214 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__HeadVar__2_2 = transform_hlds__rbmm__live_region_analysis__HeadVar__2__tmp_copy_2;
#line 214 "rbmm.live_region_analysis.m"
            }
#line 214 "rbmm.live_region_analysis.m"
            continue;
#line 212 "rbmm.live_region_analysis.m"
          }
#line 211 "rbmm.live_region_analysis.m"
      }
#line 211 "rbmm.live_region_analysis.m"
      break;
#line 211 "rbmm.live_region_analysis.m"
    }
#line 206 "rbmm.live_region_analysis.m"
}

#line 229 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0_1(
#line 229 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__closure_arg,
#line 229 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_1,
#line 229 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_2,
#line 229 "rbmm.live_region_analysis.m"
  MR_Box * transform_hlds__rbmm__live_region_analysis__wrapper_arg_3)
#line 229 "rbmm.live_region_analysis.m"
{
#line 229 "rbmm.live_region_analysis.m"
  {
#line 229 "rbmm.live_region_analysis.m"
    MR_Box transform_hlds__rbmm__live_region_analysis__closure = transform_hlds__rbmm__live_region_analysis__closure_arg;
#line 229 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__conv0_HeadVar__6_6;

#line 229 "rbmm.live_region_analysis.m"
    {
#line 229 "rbmm.live_region_analysis.m"
      transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__live_region_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__live_region_analysis__wrapper_arg_2), &transform_hlds__rbmm__live_region_analysis__conv0_HeadVar__6_6);
    }
#line 229 "rbmm.live_region_analysis.m"
    *transform_hlds__rbmm__live_region_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__conv0_HeadVar__6_6));
#line 229 "rbmm.live_region_analysis.m"
  }
#line 229 "rbmm.live_region_analysis.m"
}

#line 220 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0(
#line 220 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__LVSet_6,
#line 220 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__Graph_7,
#line 220 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_8,
#line 220 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__ProcInfo_9,
#line 220 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__LRSet_10)
#line 220 "rbmm.live_region_analysis.m"
{
#line 226 "rbmm.live_region_analysis.m"
  {
#line 226 "rbmm.live_region_analysis.m"
    MR_bool transform_hlds__rbmm__live_region_analysis__succeeded;

#line 224 "rbmm.live_region_analysis.m"
    {
#line 224 "rbmm.live_region_analysis.m"
      transform_hlds__rbmm__live_region_analysis__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[1], transform_hlds__rbmm__live_region_analysis__LVSet_6);
    }
#line 226 "rbmm.live_region_analysis.m"
    if (transform_hlds__rbmm__live_region_analysis__succeeded)
#line 225 "rbmm.live_region_analysis.m"
      {
#line 225 "rbmm.live_region_analysis.m"
        {
#line 225 "rbmm.live_region_analysis.m"
          mercury__set__init_1_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__live_region_analysis__LRSet_10);
#line 225 "rbmm.live_region_analysis.m"
          return;
        }
#line 225 "rbmm.live_region_analysis.m"
      }
#line 226 "rbmm.live_region_analysis.m"
    else
#line 228 "rbmm.live_region_analysis.m"
      {
#line 228 "rbmm.live_region_analysis.m"
        MR_Word transform_hlds__rbmm__live_region_analysis__LRSet0_11;
#line 228 "rbmm.live_region_analysis.m"
        MR_Word transform_hlds__rbmm__live_region_analysis__V_12_12;
#line 229 "rbmm.live_region_analysis.m"
        MR_Box transform_hlds__rbmm__live_region_analysis__conv1_LRSet_10;

#line 228 "rbmm.live_region_analysis.m"
        {
#line 228 "rbmm.live_region_analysis.m"
          mercury__set__init_1_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, &transform_hlds__rbmm__live_region_analysis__LRSet0_11);
        }
#line 229 "rbmm.live_region_analysis.m"
        {
#line 229 "rbmm.live_region_analysis.m"
          transform_hlds__rbmm__live_region_analysis__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 229 "rbmm.live_region_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_12_12, 0) = ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_4[0]));
#line 229 "rbmm.live_region_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_12_12, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0_1));
#line 229 "rbmm.live_region_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 229 "rbmm.live_region_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_12_12, 3) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__Graph_7));
#line 229 "rbmm.live_region_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_12_12, 4) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ModuleInfo_8));
#line 229 "rbmm.live_region_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_12_12, 5) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ProcInfo_9));
#line 229 "rbmm.live_region_analysis.m"
        }
#line 229 "rbmm.live_region_analysis.m"
        {
#line 229 "rbmm.live_region_analysis.m"
          mercury__set__fold_4_p_0((MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[0], transform_hlds__rbmm__live_region_analysis__V_12_12, transform_hlds__rbmm__live_region_analysis__LVSet_6, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__LRSet0_11)), &transform_hlds__rbmm__live_region_analysis__conv1_LRSet_10);
        }
#line 229 "rbmm.live_region_analysis.m"
        *transform_hlds__rbmm__live_region_analysis__LRSet_10 = ((MR_Word) transform_hlds__rbmm__live_region_analysis__conv1_LRSet_10);
#line 228 "rbmm.live_region_analysis.m"
      }
#line 226 "rbmm.live_region_analysis.m"
  }
#line 220 "rbmm.live_region_analysis.m"
}

#line 229 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0_1(
#line 229 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__closure_arg,
#line 229 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_1,
#line 229 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_2,
#line 229 "rbmm.live_region_analysis.m"
  MR_Box * transform_hlds__rbmm__live_region_analysis__wrapper_arg_3)
#line 229 "rbmm.live_region_analysis.m"
{
#line 229 "rbmm.live_region_analysis.m"
  {
#line 229 "rbmm.live_region_analysis.m"
    MR_Box transform_hlds__rbmm__live_region_analysis__closure = transform_hlds__rbmm__live_region_analysis__closure_arg;
#line 229 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__conv0_HeadVar__6_6;

#line 229 "rbmm.live_region_analysis.m"
    {
#line 229 "rbmm.live_region_analysis.m"
      transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__live_region_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__live_region_analysis__wrapper_arg_2), &transform_hlds__rbmm__live_region_analysis__conv0_HeadVar__6_6);
    }
#line 229 "rbmm.live_region_analysis.m"
    *transform_hlds__rbmm__live_region_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__conv0_HeadVar__6_6));
#line 229 "rbmm.live_region_analysis.m"
  }
#line 229 "rbmm.live_region_analysis.m"
}

#line 195 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0(
#line 195 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__Graph_8,
#line 195 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_9,
#line 195 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__ProcInfo_10,
#line 195 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__ProgPoint_11,
#line 195 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__LVs_12,
#line 195 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_ProcLRMap_0_15,
#line 195 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_ProcLRMap_16)
#line 195 "rbmm.live_region_analysis.m"
{
#line 199 "rbmm.live_region_analysis.m"
  {
#line 199 "rbmm.live_region_analysis.m"
    MR_bool transform_hlds__rbmm__live_region_analysis__succeeded;
#line 199 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__LRs_14;

#line 224 "rbmm.live_region_analysis.m"
    {
#line 224 "rbmm.live_region_analysis.m"
      transform_hlds__rbmm__live_region_analysis__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[1], transform_hlds__rbmm__live_region_analysis__LVs_12);
    }
#line 226 "rbmm.live_region_analysis.m"
    if (transform_hlds__rbmm__live_region_analysis__succeeded)
#line 225 "rbmm.live_region_analysis.m"
      {
#line 225 "rbmm.live_region_analysis.m"
        {
#line 225 "rbmm.live_region_analysis.m"
          mercury__set__init_1_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, &transform_hlds__rbmm__live_region_analysis__LRs_14);
        }
#line 225 "rbmm.live_region_analysis.m"
      }
#line 226 "rbmm.live_region_analysis.m"
    else
#line 228 "rbmm.live_region_analysis.m"
      {
#line 228 "rbmm.live_region_analysis.m"
        MR_Word transform_hlds__rbmm__live_region_analysis__LRSet0_25;
#line 228 "rbmm.live_region_analysis.m"
        MR_Word transform_hlds__rbmm__live_region_analysis__V_26_26;
#line 229 "rbmm.live_region_analysis.m"
        MR_Box transform_hlds__rbmm__live_region_analysis__conv1_LRs_14;

#line 228 "rbmm.live_region_analysis.m"
        {
#line 228 "rbmm.live_region_analysis.m"
          mercury__set__init_1_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, &transform_hlds__rbmm__live_region_analysis__LRSet0_25);
        }
#line 229 "rbmm.live_region_analysis.m"
        {
#line 229 "rbmm.live_region_analysis.m"
          transform_hlds__rbmm__live_region_analysis__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 229 "rbmm.live_region_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_26_26, 0) = ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_4[0]));
#line 229 "rbmm.live_region_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_26_26, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0_1));
#line 229 "rbmm.live_region_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 229 "rbmm.live_region_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_26_26, 3) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__Graph_8));
#line 229 "rbmm.live_region_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_26_26, 4) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ModuleInfo_9));
#line 229 "rbmm.live_region_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_26_26, 5) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ProcInfo_10));
#line 229 "rbmm.live_region_analysis.m"
        }
#line 229 "rbmm.live_region_analysis.m"
        {
#line 229 "rbmm.live_region_analysis.m"
          mercury__set__fold_4_p_0((MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[0], transform_hlds__rbmm__live_region_analysis__V_26_26, transform_hlds__rbmm__live_region_analysis__LVs_12, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__LRSet0_25)), &transform_hlds__rbmm__live_region_analysis__conv1_LRs_14);
        }
#line 229 "rbmm.live_region_analysis.m"
        transform_hlds__rbmm__live_region_analysis__LRs_14 = ((MR_Word) transform_hlds__rbmm__live_region_analysis__conv1_LRs_14);
#line 228 "rbmm.live_region_analysis.m"
      }
#line 201 "rbmm.live_region_analysis.m"
    {
#line 201 "rbmm.live_region_analysis.m"
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ProgPoint_11)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__LRs_14)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_ProcLRMap_0_15, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_ProcLRMap_16);
#line 201 "rbmm.live_region_analysis.m"
      return;
    }
#line 199 "rbmm.live_region_analysis.m"
  }
#line 195 "rbmm.live_region_analysis.m"
}

#line 175 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_1(
#line 175 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__closure_arg,
#line 175 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_1,
#line 175 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_2,
#line 175 "rbmm.live_region_analysis.m"
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_3,
#line 175 "rbmm.live_region_analysis.m"
  MR_Box * transform_hlds__rbmm__live_region_analysis__wrapper_arg_4)
#line 175 "rbmm.live_region_analysis.m"
{
#line 175 "rbmm.live_region_analysis.m"
  {
#line 175 "rbmm.live_region_analysis.m"
    MR_Box transform_hlds__rbmm__live_region_analysis__closure = transform_hlds__rbmm__live_region_analysis__closure_arg;
#line 175 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__conv1_STATE_VARIABLE_ProcLRMap_16;

#line 175 "rbmm.live_region_analysis.m"
    {
#line 175 "rbmm.live_region_analysis.m"
      transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__live_region_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__live_region_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__live_region_analysis__wrapper_arg_3), &transform_hlds__rbmm__live_region_analysis__conv1_STATE_VARIABLE_ProcLRMap_16);
    }
#line 175 "rbmm.live_region_analysis.m"
    *transform_hlds__rbmm__live_region_analysis__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__conv1_STATE_VARIABLE_ProcLRMap_16));
#line 175 "rbmm.live_region_analysis.m"
  }
#line 175 "rbmm.live_region_analysis.m"
}

#line 120 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0(
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_24,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__RptaInfoTable_25,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__LVBeforeTable_26,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__LVAfterTable_27,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__VoidVarTable_28,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__PredId_29,
#line 120 "rbmm.live_region_analysis.m"
  MR_Integer transform_hlds__rbmm__live_region_analysis__ProcId_30,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_0_58,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_59,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_0_60,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_61,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_0_62,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_63,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_0_64,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_65,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_0_66,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_67,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_0_68,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_69,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_0_70,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_71,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_0_72,
#line 120 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_73)
#line 120 "rbmm.live_region_analysis.m"
{
#line 135 "rbmm.live_region_analysis.m"
  {
#line 135 "rbmm.live_region_analysis.m"
    MR_bool transform_hlds__rbmm__live_region_analysis__succeeded;
#line 135 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__PPId_39;
#line 137 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__V_74_74;

#line 136 "rbmm.live_region_analysis.m"
    {
#line 136 "rbmm.live_region_analysis.m"
      transform_hlds__rbmm__live_region_analysis__PPId_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 136 "rbmm.live_region_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__PPId_39, 0) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PredId_29));
#line 136 "rbmm.live_region_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__PPId_39, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ProcId_30));
#line 136 "rbmm.live_region_analysis.m"
    }
#line 137 "rbmm.live_region_analysis.m"
    {
#line 137 "rbmm.live_region_analysis.m"
      transform_hlds__rbmm__live_region_analysis__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "rbmm.live_region_analysis.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_region_analysis__V_74_74, 0) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39));
#line 137 "rbmm.live_region_analysis.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_region_analysis__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 137 "rbmm.live_region_analysis.m"
    }
#line 137 "rbmm.live_region_analysis.m"
    {
#line 137 "rbmm.live_region_analysis.m"
      transform_hlds__rbmm__live_region_analysis__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__live_region_analysis__V_74_74, transform_hlds__rbmm__live_region_analysis__ModuleInfo_24);
    }
#line 146 "rbmm.live_region_analysis.m"
    if (transform_hlds__rbmm__live_region_analysis__succeeded)
#line 145 "rbmm.live_region_analysis.m"
      {
#line 145 "rbmm.live_region_analysis.m"
        *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_73 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_0_72;
#line 145 "rbmm.live_region_analysis.m"
        *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_71 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_0_70;
#line 145 "rbmm.live_region_analysis.m"
        *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_69 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_0_68;
#line 145 "rbmm.live_region_analysis.m"
        *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_67 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_0_66;
#line 145 "rbmm.live_region_analysis.m"
        *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_65 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_0_64;
#line 145 "rbmm.live_region_analysis.m"
        *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_63 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_0_62;
#line 145 "rbmm.live_region_analysis.m"
        *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_61 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_0_60;
#line 145 "rbmm.live_region_analysis.m"
        *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_59 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_0_58;
#line 145 "rbmm.live_region_analysis.m"
      }
#line 146 "rbmm.live_region_analysis.m"
    else
#line 190 "rbmm.live_region_analysis.m"
      {
#line 190 "rbmm.live_region_analysis.m"
        MR_Word transform_hlds__rbmm__live_region_analysis__RptaInfo_40;

#line 148 "rbmm.live_region_analysis.m"
        {
#line 148 "rbmm.live_region_analysis.m"
          transform_hlds__rbmm__live_region_analysis__succeeded = transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_f_0(transform_hlds__rbmm__live_region_analysis__PPId_39, transform_hlds__rbmm__live_region_analysis__RptaInfoTable_25, &transform_hlds__rbmm__live_region_analysis__RptaInfo_40);
        }
#line 190 "rbmm.live_region_analysis.m"
        if (transform_hlds__rbmm__live_region_analysis__succeeded)
#line 150 "rbmm.live_region_analysis.m"
          {
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__TypeInfo_97_97;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_100_100;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__TypeInfo_101_101;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_106_106;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__TypeInfo_107_107;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__TypeInfo_108_108;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__Graph_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__RptaInfo_40, (MR_Integer) 0)));
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__ProcInfo_43;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__Inputs_44;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__Outputs_45;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__InputR_46;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__OutputR_47;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__BornR_48;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__DeadR_49;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__Nodes_50;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__LocalR_51;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__ProcLVBefore_52;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__ProcLRBefore_53;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__ProcLVAfter_54;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__ProcLRAfter_55;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__ProcVoidVar_56;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__ProcVoidVarRegion_57;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__V_76_76;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__V_77_77;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__V_82_82;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__V_83_83;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__V_85_85;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__V_86_86;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__V_89_89;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis__V_92_92;
#line 150 "rbmm.live_region_analysis.m"
            MR_Word transform_hlds__rbmm__live_region_analysis___ALpha_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__RptaInfo_40, (MR_Integer) 1)));
#line 173 "rbmm.live_region_analysis.m"
            MR_Box transform_hlds__rbmm__live_region_analysis__conv0_ProcLVBefore_52;
#line 174 "rbmm.live_region_analysis.m"
            MR_Box transform_hlds__rbmm__live_region_analysis__conv2_ProcLRBefore_53;
#line 179 "rbmm.live_region_analysis.m"
            MR_Box transform_hlds__rbmm__live_region_analysis__conv3_ProcLVAfter_54;
#line 180 "rbmm.live_region_analysis.m"
            MR_Box transform_hlds__rbmm__live_region_analysis__conv4_ProcLRAfter_55;
#line 185 "rbmm.live_region_analysis.m"
            MR_Box transform_hlds__rbmm__live_region_analysis__conv5_ProcVoidVar_56;
#line 186 "rbmm.live_region_analysis.m"
            MR_Box transform_hlds__rbmm__live_region_analysis__conv6_ProcVoidVarRegion_57;

#line 151 "rbmm.live_region_analysis.m"
            {
#line 151 "rbmm.live_region_analysis.m"
              hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__live_region_analysis__ModuleInfo_24, transform_hlds__rbmm__live_region_analysis__PPId_39, &transform_hlds__rbmm__live_region_analysis__ProcInfo_43);
            }
#line 152 "rbmm.live_region_analysis.m"
            {
#line 152 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_p_0(transform_hlds__rbmm__live_region_analysis__ModuleInfo_24, transform_hlds__rbmm__live_region_analysis__ProcInfo_43, &transform_hlds__rbmm__live_region_analysis__Inputs_44, &transform_hlds__rbmm__live_region_analysis__Outputs_45);
            }
#line 1406 "transform_hlds.rbmm.live_region_analysis.c"
            transform_hlds__rbmm__live_region_analysis__TypeInfo_97_97 = (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[1];
#line 153 "rbmm.live_region_analysis.m"
            {
#line 153 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__V_76_76 = mercury__set__from_list_1_f_0(transform_hlds__rbmm__live_region_analysis__TypeInfo_97_97, transform_hlds__rbmm__live_region_analysis__Inputs_44);
            }
#line 153 "rbmm.live_region_analysis.m"
            {
#line 153 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0(transform_hlds__rbmm__live_region_analysis__V_76_76, transform_hlds__rbmm__live_region_analysis__Graph_41, transform_hlds__rbmm__live_region_analysis__ModuleInfo_24, transform_hlds__rbmm__live_region_analysis__ProcInfo_43, &transform_hlds__rbmm__live_region_analysis__InputR_46);
            }
#line 155 "rbmm.live_region_analysis.m"
            {
#line 155 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__V_77_77 = mercury__set__from_list_1_f_0(transform_hlds__rbmm__live_region_analysis__TypeInfo_97_97, transform_hlds__rbmm__live_region_analysis__Outputs_45);
            }
#line 155 "rbmm.live_region_analysis.m"
            {
#line 155 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0(transform_hlds__rbmm__live_region_analysis__V_77_77, transform_hlds__rbmm__live_region_analysis__Graph_41, transform_hlds__rbmm__live_region_analysis__ModuleInfo_24, transform_hlds__rbmm__live_region_analysis__ProcInfo_43, &transform_hlds__rbmm__live_region_analysis__OutputR_47);
            }
#line 1428 "transform_hlds.rbmm.live_region_analysis.c"
            transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 1430 "transform_hlds.rbmm.live_region_analysis.c"
            transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99 = (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[0];
#line 157 "rbmm.live_region_analysis.m"
            {
#line 157 "rbmm.live_region_analysis.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__InputR_46)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_0_64, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_65);
            }
#line 158 "rbmm.live_region_analysis.m"
            {
#line 158 "rbmm.live_region_analysis.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__OutputR_47)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_0_66, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_67);
            }
#line 1442 "transform_hlds.rbmm.live_region_analysis.c"
            transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_100_100 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 160 "rbmm.live_region_analysis.m"
            {
#line 160 "rbmm.live_region_analysis.m"
              mercury__set__difference_3_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_100_100, transform_hlds__rbmm__live_region_analysis__OutputR_47, transform_hlds__rbmm__live_region_analysis__InputR_46, &transform_hlds__rbmm__live_region_analysis__BornR_48);
            }
#line 161 "rbmm.live_region_analysis.m"
            {
#line 161 "rbmm.live_region_analysis.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__BornR_48)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_0_68, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_69);
            }
#line 163 "rbmm.live_region_analysis.m"
            {
#line 163 "rbmm.live_region_analysis.m"
              mercury__set__difference_3_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_100_100, transform_hlds__rbmm__live_region_analysis__InputR_46, transform_hlds__rbmm__live_region_analysis__OutputR_47, &transform_hlds__rbmm__live_region_analysis__DeadR_49);
            }
#line 164 "rbmm.live_region_analysis.m"
            {
#line 164 "rbmm.live_region_analysis.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__DeadR_49)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_0_70, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_71);
            }
#line 166 "rbmm.live_region_analysis.m"
            {
#line 166 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__Nodes_50 = transform_hlds__rbmm__points_to_graph__rptg_get_nodes_as_list_1_f_0(transform_hlds__rbmm__live_region_analysis__Graph_41);
            }
#line 168 "rbmm.live_region_analysis.m"
            {
#line 168 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__V_83_83 = mercury__set__from_list_1_f_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_100_100, transform_hlds__rbmm__live_region_analysis__Nodes_50);
            }
#line 168 "rbmm.live_region_analysis.m"
            {
#line 168 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__V_82_82 = mercury__set__difference_2_f_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_100_100, transform_hlds__rbmm__live_region_analysis__V_83_83, transform_hlds__rbmm__live_region_analysis__InputR_46);
            }
#line 167 "rbmm.live_region_analysis.m"
            {
#line 167 "rbmm.live_region_analysis.m"
              mercury__set__difference_3_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_100_100, transform_hlds__rbmm__live_region_analysis__V_82_82, transform_hlds__rbmm__live_region_analysis__OutputR_47, &transform_hlds__rbmm__live_region_analysis__LocalR_51);
            }
#line 170 "rbmm.live_region_analysis.m"
            {
#line 170 "rbmm.live_region_analysis.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__LocalR_51)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_0_72, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_73);
            }
#line 1489 "transform_hlds.rbmm.live_region_analysis.c"
            transform_hlds__rbmm__live_region_analysis__TypeInfo_101_101 = (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_2[1];
#line 173 "rbmm.live_region_analysis.m"
            {
#line 173 "rbmm.live_region_analysis.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_101_101, transform_hlds__rbmm__live_region_analysis__LVBeforeTable_26, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), &transform_hlds__rbmm__live_region_analysis__conv0_ProcLVBefore_52);
            }
#line 173 "rbmm.live_region_analysis.m"
            transform_hlds__rbmm__live_region_analysis__ProcLVBefore_52 = ((MR_Word) transform_hlds__rbmm__live_region_analysis__conv0_ProcLVBefore_52);
#line 175 "rbmm.live_region_analysis.m"
            {
#line 175 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 175 "rbmm.live_region_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_85_85, 0) = ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_3[0]));
#line 175 "rbmm.live_region_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_85_85, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_1));
#line 175 "rbmm.live_region_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 175 "rbmm.live_region_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_85_85, 3) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__Graph_41));
#line 175 "rbmm.live_region_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_85_85, 4) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ModuleInfo_24));
#line 175 "rbmm.live_region_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__V_85_85, 5) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ProcInfo_43));
#line 175 "rbmm.live_region_analysis.m"
            }
#line 1516 "transform_hlds.rbmm.live_region_analysis.c"
            transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_106_106 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 176 "rbmm.live_region_analysis.m"
            {
#line 176 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__V_86_86 = mercury__map__init_0_f_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_106_106, transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99);
            }
#line 1523 "transform_hlds.rbmm.live_region_analysis.c"
            transform_hlds__rbmm__live_region_analysis__TypeInfo_107_107 = (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[2];
#line 1525 "transform_hlds.rbmm.live_region_analysis.c"
            transform_hlds__rbmm__live_region_analysis__TypeInfo_108_108 = (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_2[0];
#line 174 "rbmm.live_region_analysis.m"
            {
#line 174 "rbmm.live_region_analysis.m"
              mercury__map__foldl_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_106_106, transform_hlds__rbmm__live_region_analysis__TypeInfo_107_107, transform_hlds__rbmm__live_region_analysis__TypeInfo_108_108, transform_hlds__rbmm__live_region_analysis__V_85_85, transform_hlds__rbmm__live_region_analysis__ProcLVBefore_52, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__V_86_86)), &transform_hlds__rbmm__live_region_analysis__conv2_ProcLRBefore_53);
            }
#line 174 "rbmm.live_region_analysis.m"
            transform_hlds__rbmm__live_region_analysis__ProcLRBefore_53 = ((MR_Word) transform_hlds__rbmm__live_region_analysis__conv2_ProcLRBefore_53);
#line 177 "rbmm.live_region_analysis.m"
            {
#line 177 "rbmm.live_region_analysis.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_108_108, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ProcLRBefore_53)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_0_58, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_59);
            }
#line 179 "rbmm.live_region_analysis.m"
            {
#line 179 "rbmm.live_region_analysis.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_101_101, transform_hlds__rbmm__live_region_analysis__LVAfterTable_27, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), &transform_hlds__rbmm__live_region_analysis__conv3_ProcLVAfter_54);
            }
#line 179 "rbmm.live_region_analysis.m"
            transform_hlds__rbmm__live_region_analysis__ProcLVAfter_54 = ((MR_Word) transform_hlds__rbmm__live_region_analysis__conv3_ProcLVAfter_54);
#line 182 "rbmm.live_region_analysis.m"
            {
#line 182 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__V_89_89 = mercury__map__init_0_f_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_106_106, transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99);
            }
#line 180 "rbmm.live_region_analysis.m"
            {
#line 180 "rbmm.live_region_analysis.m"
              mercury__map__foldl_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_106_106, transform_hlds__rbmm__live_region_analysis__TypeInfo_107_107, transform_hlds__rbmm__live_region_analysis__TypeInfo_108_108, transform_hlds__rbmm__live_region_analysis__V_85_85, transform_hlds__rbmm__live_region_analysis__ProcLVAfter_54, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__V_89_89)), &transform_hlds__rbmm__live_region_analysis__conv4_ProcLRAfter_55);
            }
#line 180 "rbmm.live_region_analysis.m"
            transform_hlds__rbmm__live_region_analysis__ProcLRAfter_55 = ((MR_Word) transform_hlds__rbmm__live_region_analysis__conv4_ProcLRAfter_55);
#line 183 "rbmm.live_region_analysis.m"
            {
#line 183 "rbmm.live_region_analysis.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_108_108, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ProcLRAfter_55)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_0_60, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_61);
            }
#line 185 "rbmm.live_region_analysis.m"
            {
#line 185 "rbmm.live_region_analysis.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_101_101, transform_hlds__rbmm__live_region_analysis__VoidVarTable_28, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), &transform_hlds__rbmm__live_region_analysis__conv5_ProcVoidVar_56);
            }
#line 185 "rbmm.live_region_analysis.m"
            transform_hlds__rbmm__live_region_analysis__ProcVoidVar_56 = ((MR_Word) transform_hlds__rbmm__live_region_analysis__conv5_ProcVoidVar_56);
#line 188 "rbmm.live_region_analysis.m"
            {
#line 188 "rbmm.live_region_analysis.m"
              transform_hlds__rbmm__live_region_analysis__V_92_92 = mercury__map__init_0_f_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_106_106, transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99);
            }
#line 186 "rbmm.live_region_analysis.m"
            {
#line 186 "rbmm.live_region_analysis.m"
              mercury__map__foldl_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_106_106, transform_hlds__rbmm__live_region_analysis__TypeInfo_107_107, transform_hlds__rbmm__live_region_analysis__TypeInfo_108_108, transform_hlds__rbmm__live_region_analysis__V_85_85, transform_hlds__rbmm__live_region_analysis__ProcVoidVar_56, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__V_92_92)), &transform_hlds__rbmm__live_region_analysis__conv6_ProcVoidVarRegion_57);
            }
#line 186 "rbmm.live_region_analysis.m"
            transform_hlds__rbmm__live_region_analysis__ProcVoidVarRegion_57 = ((MR_Word) transform_hlds__rbmm__live_region_analysis__conv6_ProcVoidVarRegion_57);
#line 189 "rbmm.live_region_analysis.m"
            {
#line 189 "rbmm.live_region_analysis.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_108_108, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ProcVoidVarRegion_57)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_0_62, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_63);
#line 189 "rbmm.live_region_analysis.m"
              return;
            }
#line 150 "rbmm.live_region_analysis.m"
          }
#line 190 "rbmm.live_region_analysis.m"
        else
#line 191 "rbmm.live_region_analysis.m"
          {
#line 191 "rbmm.live_region_analysis.m"
            {
#line 191 "rbmm.live_region_analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.live_region_analysis", (MR_String) "predicate \140transform_hlds.rbmm.live_region_analysis.live_region_analysis_proc\'/23", (MR_String) "no rpta_info");
#line 191 "rbmm.live_region_analysis.m"
              return;
            }
#line 191 "rbmm.live_region_analysis.m"
          }
#line 190 "rbmm.live_region_analysis.m"
      }
#line 135 "rbmm.live_region_analysis.m"
  }
#line 120 "rbmm.live_region_analysis.m"
}

#line 94 "rbmm.live_region_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_p_0(
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_23,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__RptaInfoTable_24,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__LVBeforeTable_25,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__LVAfterTable_26,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__VoidVarTable_27,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__PredId_28,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_0_39,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_40,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_0_41,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_42,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_0_43,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_44,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_0_45,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_46,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_0_47,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_48,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_0_49,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_50,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_0_51,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_52,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_0_53,
#line 94 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_54)
#line 94 "rbmm.live_region_analysis.m"
{
#line 109 "rbmm.live_region_analysis.m"
  {
#line 109 "rbmm.live_region_analysis.m"
    MR_bool transform_hlds__rbmm__live_region_analysis__succeeded;
#line 109 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__PredInfo_37;
#line 109 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__ProcIds_38;

#line 110 "rbmm.live_region_analysis.m"
    {
#line 110 "rbmm.live_region_analysis.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__live_region_analysis__ModuleInfo_23, transform_hlds__rbmm__live_region_analysis__PredId_28, &transform_hlds__rbmm__live_region_analysis__PredInfo_37);
    }
#line 111 "rbmm.live_region_analysis.m"
    {
#line 111 "rbmm.live_region_analysis.m"
      transform_hlds__rbmm__live_region_analysis__ProcIds_38 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__live_region_analysis__PredInfo_37);
    }
#line 113 "rbmm.live_region_analysis.m"
    {
#line 113 "rbmm.live_region_analysis.m"
      transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_p_0(transform_hlds__rbmm__live_region_analysis__ModuleInfo_23, transform_hlds__rbmm__live_region_analysis__RptaInfoTable_24, transform_hlds__rbmm__live_region_analysis__LVBeforeTable_25, transform_hlds__rbmm__live_region_analysis__LVAfterTable_26, transform_hlds__rbmm__live_region_analysis__VoidVarTable_27, transform_hlds__rbmm__live_region_analysis__PredId_28, transform_hlds__rbmm__live_region_analysis__ProcIds_38, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_0_39, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_40, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_0_41, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_42, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_0_43, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_44, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_0_45, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_46, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_0_47, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_48, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_0_49, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_50, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_0_51, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_52, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_0_53, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_54);
#line 113 "rbmm.live_region_analysis.m"
      return;
    }
#line 109 "rbmm.live_region_analysis.m"
  }
#line 94 "rbmm.live_region_analysis.m"
}

#line 29 "rbmm.live_region_analysis.m"
void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_p_0(
#line 29 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_14,
#line 29 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__RptaInfoTable_15,
#line 29 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__LVBeforeTable_16,
#line 29 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__LVAfterTable_17,
#line 29 "rbmm.live_region_analysis.m"
  MR_Word transform_hlds__rbmm__live_region_analysis__VoidVarTable_18,
#line 29 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__LRBeforeTable_19,
#line 29 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__LRAfterTable_20,
#line 29 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__VoidVarRegionTable_21,
#line 29 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__InputRTable_22,
#line 29 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__OutputRTable_23,
#line 29 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__BornRTable_24,
#line 29 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__DeadRTable_25,
#line 29 "rbmm.live_region_analysis.m"
  MR_Word * transform_hlds__rbmm__live_region_analysis__LocalRTable_26)
#line 29 "rbmm.live_region_analysis.m"
{
#line 71 "rbmm.live_region_analysis.m"
  {
#line 71 "rbmm.live_region_analysis.m"
    MR_bool transform_hlds__rbmm__live_region_analysis__succeeded;
#line 71 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37;
#line 71 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__TypeInfo_38_38;
#line 71 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__TypeInfo_39_39;
#line 71 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__PredIds_27;
#line 71 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__LRBeforeTable0_28;
#line 71 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__LRAfterTable0_29;
#line 71 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__VoidVarRegionTable0_30;
#line 71 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__InputRTable0_31;
#line 71 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__OutputRTable0_32;
#line 71 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__BornRTable0_33;
#line 71 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__DeadRTable0_34;
#line 71 "rbmm.live_region_analysis.m"
    MR_Word transform_hlds__rbmm__live_region_analysis__LocalRTable0_35;

#line 72 "rbmm.live_region_analysis.m"
    {
#line 72 "rbmm.live_region_analysis.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__rbmm__live_region_analysis__ModuleInfo_14, &transform_hlds__rbmm__live_region_analysis__PredIds_27);
    }
#line 1756 "transform_hlds.rbmm.live_region_analysis.c"
    transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 1758 "transform_hlds.rbmm.live_region_analysis.c"
    transform_hlds__rbmm__live_region_analysis__TypeInfo_38_38 = (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_2[0];
#line 73 "rbmm.live_region_analysis.m"
    {
#line 73 "rbmm.live_region_analysis.m"
      mercury__map__init_1_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37, transform_hlds__rbmm__live_region_analysis__TypeInfo_38_38, &transform_hlds__rbmm__live_region_analysis__LRBeforeTable0_28);
    }
#line 74 "rbmm.live_region_analysis.m"
    {
#line 74 "rbmm.live_region_analysis.m"
      mercury__map__init_1_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37, transform_hlds__rbmm__live_region_analysis__TypeInfo_38_38, &transform_hlds__rbmm__live_region_analysis__LRAfterTable0_29);
    }
#line 75 "rbmm.live_region_analysis.m"
    {
#line 75 "rbmm.live_region_analysis.m"
      mercury__map__init_1_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37, transform_hlds__rbmm__live_region_analysis__TypeInfo_38_38, &transform_hlds__rbmm__live_region_analysis__VoidVarRegionTable0_30);
    }
#line 1775 "transform_hlds.rbmm.live_region_analysis.c"
    transform_hlds__rbmm__live_region_analysis__TypeInfo_39_39 = (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[0];
#line 76 "rbmm.live_region_analysis.m"
    {
#line 76 "rbmm.live_region_analysis.m"
      mercury__map__init_1_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37, transform_hlds__rbmm__live_region_analysis__TypeInfo_39_39, &transform_hlds__rbmm__live_region_analysis__InputRTable0_31);
    }
#line 77 "rbmm.live_region_analysis.m"
    {
#line 77 "rbmm.live_region_analysis.m"
      mercury__map__init_1_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37, transform_hlds__rbmm__live_region_analysis__TypeInfo_39_39, &transform_hlds__rbmm__live_region_analysis__OutputRTable0_32);
    }
#line 78 "rbmm.live_region_analysis.m"
    {
#line 78 "rbmm.live_region_analysis.m"
      mercury__map__init_1_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37, transform_hlds__rbmm__live_region_analysis__TypeInfo_39_39, &transform_hlds__rbmm__live_region_analysis__BornRTable0_33);
    }
#line 79 "rbmm.live_region_analysis.m"
    {
#line 79 "rbmm.live_region_analysis.m"
      mercury__map__init_1_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37, transform_hlds__rbmm__live_region_analysis__TypeInfo_39_39, &transform_hlds__rbmm__live_region_analysis__DeadRTable0_34);
    }
#line 80 "rbmm.live_region_analysis.m"
    {
#line 80 "rbmm.live_region_analysis.m"
      mercury__map__init_1_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37, transform_hlds__rbmm__live_region_analysis__TypeInfo_39_39, &transform_hlds__rbmm__live_region_analysis__LocalRTable0_35);
    }
#line 81 "rbmm.live_region_analysis.m"
    {
#line 81 "rbmm.live_region_analysis.m"
      transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_p_0(transform_hlds__rbmm__live_region_analysis__ModuleInfo_14, transform_hlds__rbmm__live_region_analysis__RptaInfoTable_15, transform_hlds__rbmm__live_region_analysis__LVBeforeTable_16, transform_hlds__rbmm__live_region_analysis__LVAfterTable_17, transform_hlds__rbmm__live_region_analysis__VoidVarTable_18, transform_hlds__rbmm__live_region_analysis__PredIds_27, transform_hlds__rbmm__live_region_analysis__LRBeforeTable0_28, transform_hlds__rbmm__live_region_analysis__LRBeforeTable_19, transform_hlds__rbmm__live_region_analysis__LRAfterTable0_29, transform_hlds__rbmm__live_region_analysis__LRAfterTable_20, transform_hlds__rbmm__live_region_analysis__VoidVarRegionTable0_30, transform_hlds__rbmm__live_region_analysis__VoidVarRegionTable_21, transform_hlds__rbmm__live_region_analysis__InputRTable0_31, transform_hlds__rbmm__live_region_analysis__InputRTable_22, transform_hlds__rbmm__live_region_analysis__OutputRTable0_32, transform_hlds__rbmm__live_region_analysis__OutputRTable_23, transform_hlds__rbmm__live_region_analysis__BornRTable0_33, transform_hlds__rbmm__live_region_analysis__BornRTable_24, transform_hlds__rbmm__live_region_analysis__DeadRTable0_34, transform_hlds__rbmm__live_region_analysis__DeadRTable_25, transform_hlds__rbmm__live_region_analysis__LocalRTable0_35, transform_hlds__rbmm__live_region_analysis__LocalRTable_26);
#line 81 "rbmm.live_region_analysis.m"
      return;
    }
#line 71 "rbmm.live_region_analysis.m"
  }
#line 29 "rbmm.live_region_analysis.m"
}

void mercury__transform_hlds__rbmm__live_region_analysis__init(void)
{
}

void mercury__transform_hlds__rbmm__live_region_analysis__init_type_tables(void)
{
}

void mercury__transform_hlds__rbmm__live_region_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.rbmm.live_region_analysis. */
