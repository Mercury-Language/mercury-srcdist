/*
** Automatically generated from `hlds_out_goal.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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


/* :- module hlds.hlds_out.hlds_out_goal. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_out__hlds_out_goal__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_goal.mih"


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
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 142 "hlds.hlds_out.hlds_out_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 1510 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_p_0_1(
#line 1510 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 1510 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 1510 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 1510 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 1482 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_p_0(
#line 1482 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1482 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1482 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1482 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1482 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1482 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17);

#line 1342 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_p_0(
#line 1342 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1342 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1342 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1342 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1342 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1342 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17);

#line 1203 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_p_0(
#line 1203 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_12,
#line 1203 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ConsId_13,
#line 1203 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_14,
#line 1203 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_15,
#line 1203 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ProgVarSet_17,
#line 1203 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_18,
#line 1203 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_19,
#line 1203 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_20);

#line 1052 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_p_0(
#line 1052 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_10,
#line 1052 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Unification_11,
#line 1052 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ProgVarSet_13,
#line 1052 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_14,
#line 1052 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1052 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16);

#line 325 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__325__1_3_p_0(
#line 325 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_334);

#line 321 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__321__1_3_p_0(
#line 321 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_330);

#line 317 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__317__1_3_p_0(
#line 317 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_326);

#line 313 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__313__1_3_p_0(
#line 313 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_322);

#line 309 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__309__1_3_p_0(
#line 309 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_318);

#line 2152 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0(
#line 2152 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__CompName_7,
#line 2152 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__CompState_8,
#line 2152 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_9,
#line 2152 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_10);

#line 2143 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_p_0(
#line 2143 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_5,
#line 2143 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MutableVar_6);

#line 2073 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_p_0(
#line 2073 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 2073 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 2073 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 2073 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 2073 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 2073 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 2073 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 2073 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 2043 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_3(
#line 2043 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 2043 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 2043 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 2043 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 2030 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_2(
#line 2030 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 2030 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 2030 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 2030 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 2020 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_1(
#line 2020 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 2020 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 2020 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 2020 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 1858 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0(
#line 1858 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40,
#line 1858 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1858 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1858 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1858 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1858 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1858 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1858 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 1812 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_p_0(
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1812 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1812 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 1791 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_negation_10_p_0(
#line 1791 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1791 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1791 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1791 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1791 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1791 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1791 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1791 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 1766 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_p_0(
#line 1766 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ConsId_4);

#line 1756 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_case_10_p_0_1(
#line 1756 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 1756 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 1756 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 1756 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 1744 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_case_10_p_0(
#line 1744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Case_12,
#line 1744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Var_13,
#line 1744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
#line 1744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
#line 1744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_16,
#line 1744 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_17,
#line 1744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarTypes_18);

#line 1726 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_10_p_0(
#line 1726 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1726 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__CasesList_12,
#line 1726 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Var_13,
#line 1726 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
#line 1726 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
#line 1726 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_16,
#line 1726 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_17,
#line 1726 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarTypes_18);

#line 1696 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0(
#line 1696 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1696 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1696 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1696 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1696 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1696 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1696 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1696 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 1666 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_disj_10_p_0(
#line 1666 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1666 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1666 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1666 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1666 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1666 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1666 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1666 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 1632 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(
#line 1632 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_13,
#line 1632 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goal1_14,
#line 1632 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goals1_15,
#line 1632 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_16,
#line 1632 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_17,
#line 1632 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_18,
#line 1632 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_19,
#line 1632 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_20,
#line 1632 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Separator_21,
#line 1632 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_22);

#line 1581 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_conj_10_p_0(
#line 1581 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1581 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1581 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1581 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1581 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1581 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1581 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1581 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 1539 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(
#line 1539 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_1,
#line 1539 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_2,
#line 1539 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TVarSet_3,
#line 1539 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_4);

#line 1466 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_reg_3_p_0(
#line 1466 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgReg_4);

#line 1460 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0_1(
#line 1460 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 1460 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 1460 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 1460 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 1452 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(
#line 1452 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_5,
#line 1452 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeArgRegs_6);

#line 1323 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_p_0(
#line 1323 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__PredName_7,
#line 1323 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_8,
#line 1323 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_9,
#line 1323 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_10);

#line 1242 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_p_0(
#line 1242 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1242 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1242 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1242 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1242 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1242 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1242 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1242 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 910 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_p_0(
#line 910 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_12,
#line 910 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_13,
#line 910 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
#line 910 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
#line 910 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_16,
#line 910 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_17,
#line 910 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_18,
#line 910 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeType_19,
#line 910 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_20);

#line 900 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(
#line 900 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_13,
#line 900 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_14,
#line 900 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_15,
#line 900 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_16,
#line 900 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_17,
#line 900 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_18,
#line 900 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_19,
#line 900 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_20,
#line 900 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeType_21,
#line 900 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_22);

#line 849 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_unify_10_p_0(
#line 849 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 849 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 849 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 849 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 849 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 849 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 849 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 849 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 792 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_expr_10_p_0(
#line 792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 792 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 792 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 741 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(
#line 741 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ShortDescription_6,
#line 741 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 741 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarnums_8);

#line 730 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(
#line 730 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_1,
#line 730 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_2,
#line 730 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__3_3);

#line 718 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_p_0(
#line 718 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_6,
#line 718 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 718 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_8);

#line 707 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_p_0(
#line 707 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_7,
#line 707 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_8,
#line 707 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_9,
#line 707 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_10);

#line 521 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_p_0(
#line 521 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_8,
#line 521 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalInfo_9,
#line 521 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_10,
#line 521 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_11,
#line 521 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_12);

#line 475 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_6(
#line 475 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 475 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 475 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 475 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 325 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_5(
#line 325 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 325 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 325 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 325 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 321 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_4(
#line 321 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 321 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 321 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 321 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 317 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_3(
#line 317 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 317 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 317 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 317 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 313 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_2(
#line 313 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 313 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 313 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 313 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 309 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_1(
#line 309 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 309 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 309 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 309 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_1[18][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_2[6][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_3[11][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_4[4][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_5[1][7];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_1[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) ")")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "any_func")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "(")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "any_func")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "any_pred")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[3])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "any_pred")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[6])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "func")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[3])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "func")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[6])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "pred")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[3])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "pred")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[6])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_2[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_3[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_case_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[5])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[5])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_4[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "class_method_call"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "apply"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "call"))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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



#line 1099 "hlds.hlds_out.hlds_out_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1510 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_p_0_1(
#line 1510 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 1510 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 1510 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 1510 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 1510 "hlds_out_goal.m"
{
#line 1510 "hlds_out_goal.m"
  {
#line 1510 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 1510 "hlds_out_goal.m"
    {
#line 1510 "hlds_out_goal.m"
      parse_tree__mercury_to_mercury__mercury_output_trace_runtime_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 1510 "hlds_out_goal.m"
      return;
    }
#line 1510 "hlds_out_goal.m"
  }
#line 1510 "hlds_out_goal.m"
}

#line 1482 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_p_0(
#line 1482 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1482 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1482 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1482 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1482 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1482 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17)
#line 1482 "hlds_out_goal.m"
{
#line 1488 "hlds_out_goal.m"
  {
#line 1488 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1488 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Attributes_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));
#line 1488 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 2)));
#line 1488 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 3)));
#line 1488 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 4)));
#line 1488 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ExtraArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 5)));
#line 1488 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeTraceRuntimeCond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 6)));
#line 1488 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__PragmaCode_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 7)));
#line 1488 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ForeignLang_27;
#line 1488 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__PredIdInt_28;
#line 1488 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__ProcIdInt_29;
#line 1488 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__TypeVarSet_31;
#line 1488 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__Code_34;
#line 1488 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_41_41;
#line 1532 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_35_35;

#line 1491 "hlds_out_goal.m"
    {
#line 1491 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__ForeignLang_27 = parse_tree__prog_data__get_foreign_language_1_f_0(hlds__hlds_out__hlds_out_goal__Attributes_20);
    }
#line 1492 "hlds_out_goal.m"
    {
#line 1492 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1493 "hlds_out_goal.m"
    {
#line 1493 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\044pragma_foreign_proc(/* ");
    }
#line 1494 "hlds_out_goal.m"
    {
#line 1494 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_41_41 = libs__globals__foreign_language_string_1_f_0(hlds__hlds_out__hlds_out_goal__ForeignLang_27);
    }
#line 1494 "hlds_out_goal.m"
    {
#line 1494 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_41_41);
    }
#line 1495 "hlds_out_goal.m"
    {
#line 1495 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " */, ");
    }
#line 1496 "hlds_out_goal.m"
    {
#line 1496 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__PredId_21);
    }
#line 1497 "hlds_out_goal.m"
    {
#line 1497 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " pred ");
    }
#line 1498 "hlds_out_goal.m"
    {
#line 1498 "hlds_out_goal.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_goal__PredId_21, &hlds__hlds_out__hlds_out_goal__PredIdInt_28);
    }
#line 1499 "hlds_out_goal.m"
    {
#line 1499 "hlds_out_goal.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__PredIdInt_28);
    }
#line 1500 "hlds_out_goal.m"
    {
#line 1500 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " proc ");
    }
#line 1501 "hlds_out_goal.m"
    {
#line 1501 "hlds_out_goal.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_goal__ProcId_22, &hlds__hlds_out__hlds_out_goal__ProcIdInt_29);
    }
#line 1502 "hlds_out_goal.m"
    {
#line 1502 "hlds_out_goal.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__ProcIdInt_29);
    }
#line 1503 "hlds_out_goal.m"
    {
#line 1503 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
#line 1506 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__MaybeTraceRuntimeCond_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1505 "hlds_out_goal.m"
      {
#line 1505 "hlds_out_goal.m"
      }
#line 1506 "hlds_out_goal.m"
    else
#line 1507 "hlds_out_goal.m"
      {
#line 1507 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TraceRuntimeCond_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeTraceRuntimeCond_25, (MR_Integer) 0)));

#line 1508 "hlds_out_goal.m"
        {
#line 1508 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1509 "hlds_out_goal.m"
        {
#line 1509 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% trace_runtime_cond(");
        }
#line 1510 "hlds_out_goal.m"
        {
#line 1510 "hlds_out_goal.m"
          parse_tree__mercury_to_mercury__mercury_output_trace_expr_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[10], hlds__hlds_out__hlds_out_goal__TraceRuntimeCond_30);
        }
#line 1512 "hlds_out_goal.m"
        {
#line 1512 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
#line 1507 "hlds_out_goal.m"
      }
#line 1514 "hlds_out_goal.m"
    {
#line 1514 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1518 "hlds_out_goal.m"
    {
#line 1518 "hlds_out_goal.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_goal__TypeVarSet_31);
    }
#line 1519 "hlds_out_goal.m"
    {
#line 1519 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
#line 1520 "hlds_out_goal.m"
    {
#line 1520 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(hlds__hlds_out__hlds_out_goal__Args_23, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__TypeVarSet_31, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
    }
#line 1521 "hlds_out_goal.m"
    {
#line 1521 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "],\n");
    }
#line 1524 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__ExtraArgs_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1523 "hlds_out_goal.m"
      {
#line 1523 "hlds_out_goal.m"
      }
#line 1524 "hlds_out_goal.m"
    else
#line 1525 "hlds_out_goal.m"
      {
#line 1526 "hlds_out_goal.m"
        {
#line 1526 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1527 "hlds_out_goal.m"
        {
#line 1527 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "{");
        }
#line 1528 "hlds_out_goal.m"
        {
#line 1528 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(hlds__hlds_out__hlds_out_goal__ExtraArgs_24, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__TypeVarSet_31, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
        }
#line 1530 "hlds_out_goal.m"
        {
#line 1530 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "},\n");
        }
#line 1525 "hlds_out_goal.m"
      }
#line 1532 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__Code_34 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__PragmaCode_26, (MR_Integer) 0)));
#line 1532 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__PragmaCode_26, (MR_Integer) 1)));
#line 1533 "hlds_out_goal.m"
    {
#line 1533 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
#line 1534 "hlds_out_goal.m"
    {
#line 1534 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Code_34);
    }
#line 1535 "hlds_out_goal.m"
    {
#line 1535 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
#line 1536 "hlds_out_goal.m"
    {
#line 1536 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 1537 "hlds_out_goal.m"
    {
#line 1537 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1537 "hlds_out_goal.m"
      return;
    }
#line 1488 "hlds_out_goal.m"
  }
#line 1482 "hlds_out_goal.m"
}

#line 1342 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_p_0(
#line 1342 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1342 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1342 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1342 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1342 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1342 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17)
#line 1342 "hlds_out_goal.m"
{
#line 1348 "hlds_out_goal.m"
  {
#line 1348 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1348 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__GenericCall_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));
#line 1348 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 2)));
#line 1348 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Modes_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 3)));
#line 1348 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 4)));
#line 1348 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_25 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 1349 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 5)));
#line 1350 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_124_124 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 1350 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 1350 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 1350 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));

#line 1387 "hlds_out_goal.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GenericCall_20)) == (MR_mktag((MR_Integer) 3))))
#line 1425 "hlds_out_goal.m"
      {
#line 1425 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_133_133;
#line 1425 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CastType_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 0)));
#line 1425 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__CastTypeString_44;
#line 1425 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Context_120;
#line 1425 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Functor_121;
#line 1425 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ArgTerms_122;
#line 1425 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Term_123;

#line 1426 "hlds_out_goal.m"
        {
#line 1426 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__CastTypeString_44 = hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__CastType_43);
        }
#line 1427 "hlds_out_goal.m"
        {
#line 1427 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
        }
#line 1431 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1428 "hlds_out_goal.m"
          {
#line 1428 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_50_50;
#line 1428 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_53_53;

#line 1428 "hlds_out_goal.m"
            {
#line 1428 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 1429 "hlds_out_goal.m"
            {
#line 1429 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1429 "hlds_out_goal.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_53_53, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__CastTypeString_44));
#line 1429 "hlds_out_goal.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[17])));
#line 1429 "hlds_out_goal.m"
            }
#line 1429 "hlds_out_goal.m"
            {
#line 1429 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1429 "hlds_out_goal.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_50_50, 0) = ((MR_Box) ((MR_String) "% "));
#line 1429 "hlds_out_goal.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_50_50, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_53_53));
#line 1429 "hlds_out_goal.m"
            }
#line 1429 "hlds_out_goal.m"
            {
#line 1429 "hlds_out_goal.m"
              mercury__io__write_strings_3_p_0(hlds__hlds_out__hlds_out_goal__V_50_50);
            }
#line 1430 "hlds_out_goal.m"
            {
#line 1430 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
            }
#line 1428 "hlds_out_goal.m"
          }
#line 1431 "hlds_out_goal.m"
        else
#line 1430 "hlds_out_goal.m"
          {
#line 1430 "hlds_out_goal.m"
          }
#line 1434 "hlds_out_goal.m"
        {
#line 1434 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 68);
        }
#line 1440 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1435 "hlds_out_goal.m"
          {
#line 1435 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_45;

#line 1435 "hlds_out_goal.m"
            {
#line 1435 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 1436 "hlds_out_goal.m"
            {
#line 1436 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% modes: ");
            }
#line 1437 "hlds_out_goal.m"
            {
#line 1437 "hlds_out_goal.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_goal__InstVarSet_45);
            }
#line 1438 "hlds_out_goal.m"
            {
#line 1438 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_mode_list_4_p_0(hlds__hlds_out__hlds_out_goal__Modes_22, hlds__hlds_out__hlds_out_goal__InstVarSet_45);
            }
#line 1439 "hlds_out_goal.m"
            {
#line 1439 "hlds_out_goal.m"
              mercury__io__nl_2_p_0();
            }
#line 1435 "hlds_out_goal.m"
          }
#line 1440 "hlds_out_goal.m"
        else
#line 1439 "hlds_out_goal.m"
          {
#line 1439 "hlds_out_goal.m"
          }
#line 1443 "hlds_out_goal.m"
        {
#line 1443 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Functor_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1443 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Functor_121, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__CastTypeString_44));
#line 1443 "hlds_out_goal.m"
        }
#line 1561 "hlds.hlds_out.hlds_out_goal.c"
        hlds__hlds_out__hlds_out_goal__TypeCtorInfo_133_133 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1444 "hlds_out_goal.m"
        {
#line 1444 "hlds_out_goal.m"
          mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_133_133, hlds__hlds_out__hlds_out_goal__ArgVars_21, &hlds__hlds_out__hlds_out_goal__ArgTerms_122);
        }
#line 1445 "hlds_out_goal.m"
        {
#line 1445 "hlds_out_goal.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_goal__Context_120);
        }
#line 1446 "hlds_out_goal.m"
        {
#line 1446 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Term_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1446 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_123, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Functor_121));
#line 1446 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_123, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgTerms_122));
#line 1446 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_123, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_120));
#line 1446 "hlds_out_goal.m"
        }
#line 1447 "hlds_out_goal.m"
        {
#line 1447 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1448 "hlds_out_goal.m"
        {
#line 1448 "hlds_out_goal.m"
          parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_133_133, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Term_123);
        }
#line 1449 "hlds_out_goal.m"
        {
#line 1449 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1449 "hlds_out_goal.m"
          return;
        }
#line 1425 "hlds_out_goal.m"
      }
#line 1387 "hlds_out_goal.m"
    else
#line 1387 "hlds_out_goal.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GenericCall_20)) == (MR_mktag((MR_Integer) 1))))
#line 1389 "hlds_out_goal.m"
        {
#line 1389 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_130_130;
#line 1389 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TCInfoVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 0)));
#line 1389 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__MethodNum_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 1)));
#line 1389 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Context_36;
#line 1389 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TCInfoTerm_38;
#line 1389 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__MethodNumTerm_39;
#line 1389 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgTerms_40;
#line 1389 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Term_41;
#line 1389 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_83_83;
#line 1389 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_85_85;
#line 1389 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_86_86;
#line 1388 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal___ClassId_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 2)));
#line 1388 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal___MethodId_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 3)));

#line 1390 "hlds_out_goal.m"
          {
#line 1390 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
          }
#line 1394 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1391 "hlds_out_goal.m"
            {
#line 1391 "hlds_out_goal.m"
              {
#line 1391 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1392 "hlds_out_goal.m"
              {
#line 1392 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% class method call\n");
              }
#line 1393 "hlds_out_goal.m"
              {
#line 1393 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
              }
#line 1391 "hlds_out_goal.m"
            }
#line 1394 "hlds_out_goal.m"
          else
#line 1393 "hlds_out_goal.m"
            {
#line 1393 "hlds_out_goal.m"
            }
#line 1397 "hlds_out_goal.m"
          {
#line 1397 "hlds_out_goal.m"
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_goal__Context_36);
          }
#line 1399 "hlds_out_goal.m"
          {
#line 1399 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__TCInfoTerm_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TCInfoTerm_38, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__TCInfoVar_32));
#line 1399 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TCInfoTerm_38, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_36));
#line 1399 "hlds_out_goal.m"
          }
#line 1400 "hlds_out_goal.m"
          {
#line 1400 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1400 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_83_83, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__MethodNum_33));
#line 1400 "hlds_out_goal.m"
          }
#line 1400 "hlds_out_goal.m"
          {
#line 1400 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__MethodNumTerm_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1400 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MethodNumTerm_39, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_83_83));
#line 1400 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MethodNumTerm_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1400 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MethodNumTerm_39, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_36));
#line 1400 "hlds_out_goal.m"
          }
#line 1704 "hlds.hlds_out.hlds_out_goal.c"
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1401 "hlds_out_goal.m"
          {
#line 1401 "hlds_out_goal.m"
            mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_130_130, hlds__hlds_out__hlds_out_goal__ArgVars_21, &hlds__hlds_out__hlds_out_goal__ArgTerms_40);
          }
#line 1402 "hlds_out_goal.m"
          {
#line 1402 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1402 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_86_86, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__MethodNumTerm_39));
#line 1402 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_86_86, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgTerms_40));
#line 1402 "hlds_out_goal.m"
          }
#line 1402 "hlds_out_goal.m"
          {
#line 1402 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1402 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_85_85, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__TCInfoTerm_38));
#line 1402 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_85_85, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_86_86));
#line 1402 "hlds_out_goal.m"
          }
#line 1402 "hlds_out_goal.m"
          {
#line 1402 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Term_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1402 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_41, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[1]));
#line 1402 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_41, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_85_85));
#line 1402 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_41, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_36));
#line 1402 "hlds_out_goal.m"
          }
#line 1404 "hlds_out_goal.m"
          {
#line 1404 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 1405 "hlds_out_goal.m"
          {
#line 1405 "hlds_out_goal.m"
            parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_130_130, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Term_41);
          }
#line 1406 "hlds_out_goal.m"
          {
#line 1406 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1406 "hlds_out_goal.m"
            return;
          }
#line 1389 "hlds_out_goal.m"
        }
#line 1387 "hlds_out_goal.m"
      else
#line 1387 "hlds_out_goal.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GenericCall_20)) == (MR_mktag((MR_Integer) 2))))
#line 1408 "hlds_out_goal.m"
          {
#line 1408 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_131_131;
#line 1408 "hlds_out_goal.m"
            MR_String hlds__hlds_out__hlds_out_goal__EventName_42 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 0)));
#line 1408 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Context_116;
#line 1408 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Functor_117;
#line 1408 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__ArgTerms_118;
#line 1408 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Term_119;

#line 1409 "hlds_out_goal.m"
            {
#line 1409 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
            }
#line 1413 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1410 "hlds_out_goal.m"
              {
#line 1410 "hlds_out_goal.m"
                {
#line 1410 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 1411 "hlds_out_goal.m"
                {
#line 1411 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% event call\n");
                }
#line 1412 "hlds_out_goal.m"
                {
#line 1412 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
                }
#line 1410 "hlds_out_goal.m"
              }
#line 1413 "hlds_out_goal.m"
            else
#line 1412 "hlds_out_goal.m"
              {
#line 1412 "hlds_out_goal.m"
              }
#line 1416 "hlds_out_goal.m"
            {
#line 1416 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 1417 "hlds_out_goal.m"
            {
#line 1417 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "event ");
            }
#line 1418 "hlds_out_goal.m"
            {
#line 1418 "hlds_out_goal.m"
              mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_goal__Context_116);
            }
#line 1419 "hlds_out_goal.m"
            {
#line 1419 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__Functor_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1419 "hlds_out_goal.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Functor_117, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__EventName_42));
#line 1419 "hlds_out_goal.m"
            }
#line 1836 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_131_131 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1420 "hlds_out_goal.m"
            {
#line 1420 "hlds_out_goal.m"
              mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_131_131, hlds__hlds_out__hlds_out_goal__ArgVars_21, &hlds__hlds_out__hlds_out_goal__ArgTerms_118);
            }
#line 1421 "hlds_out_goal.m"
            {
#line 1421 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__Term_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1421 "hlds_out_goal.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_119, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Functor_117));
#line 1421 "hlds_out_goal.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_119, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgTerms_118));
#line 1421 "hlds_out_goal.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_119, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_116));
#line 1421 "hlds_out_goal.m"
            }
#line 1422 "hlds_out_goal.m"
            {
#line 1422 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_131_131, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Term_119);
            }
#line 1423 "hlds_out_goal.m"
            {
#line 1423 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1423 "hlds_out_goal.m"
              return;
            }
#line 1408 "hlds_out_goal.m"
          }
#line 1387 "hlds_out_goal.m"
        else
#line 1353 "hlds_out_goal.m"
          {
#line 1353 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__PredVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 0)));
#line 1353 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Purity_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 1)));
#line 1353 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__PredOrFunc_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 2)));
#line 1353 "hlds_out_goal.m"
            MR_Integer hlds__hlds_out__hlds_out_goal__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 3)));

#line 1367 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__PredOrFunc_28 == (MR_Integer) 1))
#line 1368 "hlds_out_goal.m"
              {
#line 1368 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__FuncArgVars_30;
#line 1368 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__FuncRetVar_31;
#line 1368 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_95_95;
#line 1377 "hlds_out_goal.m"
                MR_Box hlds__hlds_out__hlds_out_goal__conv0_FuncRetVar_31;

#line 1369 "hlds_out_goal.m"
                {
#line 1369 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
                }
#line 1374 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1370 "hlds_out_goal.m"
                  {
#line 1370 "hlds_out_goal.m"
                    {
#line 1370 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1371 "hlds_out_goal.m"
                    {
#line 1371 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% higher-order function application\n");
                    }
#line 1373 "hlds_out_goal.m"
                    {
#line 1373 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
                    }
#line 1370 "hlds_out_goal.m"
                  }
#line 1374 "hlds_out_goal.m"
                else
#line 1373 "hlds_out_goal.m"
                  {
#line 1373 "hlds_out_goal.m"
                  }
#line 1377 "hlds_out_goal.m"
                {
#line 1377 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_95_95, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__PredVar_26));
#line 1377 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_95_95, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgVars_21));
#line 1377 "hlds_out_goal.m"
                }
#line 1377 "hlds_out_goal.m"
                {
#line 1377 "hlds_out_goal.m"
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], hlds__hlds_out__hlds_out_goal__V_95_95, &hlds__hlds_out__hlds_out_goal__FuncArgVars_30, &hlds__hlds_out__hlds_out_goal__conv0_FuncRetVar_31);
                }
#line 1377 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__FuncRetVar_31 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv0_FuncRetVar_31);
#line 1379 "hlds_out_goal.m"
                {
#line 1379 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 1380 "hlds_out_goal.m"
                {
#line 1380 "hlds_out_goal.m"
                  parse_tree__prog_out__write_purity_prefix_3_p_0(hlds__hlds_out__hlds_out_goal__Purity_27);
                }
#line 1381 "hlds_out_goal.m"
                {
#line 1381 "hlds_out_goal.m"
                  parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__FuncRetVar_31);
                }
#line 1382 "hlds_out_goal.m"
                {
#line 1382 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " = ");
                }
#line 1383 "hlds_out_goal.m"
                {
#line 1383 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_functor_6_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_4[2], hlds__hlds_out__hlds_out_goal__FuncArgVars_30, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
                }
#line 1368 "hlds_out_goal.m"
              }
#line 1367 "hlds_out_goal.m"
            else
#line 1355 "hlds_out_goal.m"
              {
#line 1355 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_112_112;

#line 1356 "hlds_out_goal.m"
                {
#line 1356 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
                }
#line 1360 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1357 "hlds_out_goal.m"
                  {
#line 1357 "hlds_out_goal.m"
                    {
#line 1357 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1358 "hlds_out_goal.m"
                    {
#line 1358 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% higher-order predicate call\n");
                    }
#line 1359 "hlds_out_goal.m"
                    {
#line 1359 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
                    }
#line 1357 "hlds_out_goal.m"
                  }
#line 1360 "hlds_out_goal.m"
                else
#line 1359 "hlds_out_goal.m"
                  {
#line 1359 "hlds_out_goal.m"
                  }
#line 1363 "hlds_out_goal.m"
                {
#line 1363 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 1364 "hlds_out_goal.m"
                {
#line 1364 "hlds_out_goal.m"
                  parse_tree__prog_out__write_purity_prefix_3_p_0(hlds__hlds_out__hlds_out_goal__Purity_27);
                }
#line 1365 "hlds_out_goal.m"
                {
#line 1365 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_112_112, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__PredVar_26));
#line 1365 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_112_112, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgVars_21));
#line 1365 "hlds_out_goal.m"
                }
#line 1365 "hlds_out_goal.m"
                {
#line 1365 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_functor_6_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_4[3], hlds__hlds_out__hlds_out_goal__V_112_112, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
                }
#line 1355 "hlds_out_goal.m"
              }
#line 1386 "hlds_out_goal.m"
            {
#line 1386 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1386 "hlds_out_goal.m"
              return;
            }
#line 1353 "hlds_out_goal.m"
          }
#line 1348 "hlds_out_goal.m"
  }
#line 1342 "hlds_out_goal.m"
}

#line 1203 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_p_0(
#line 1203 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_12,
#line 1203 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ConsId_13,
#line 1203 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_14,
#line 1203 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_15,
#line 1203 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ProgVarSet_17,
#line 1203 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_18,
#line 1203 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_19,
#line 1203 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_20)
#line 1203 "hlds_out_goal.m"
{
#line 1209 "hlds_out_goal.m"
  {
#line 1209 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1210 "hlds_out_goal.m"
    {
#line 1210 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_p_0(hlds__hlds_out__hlds_out_goal__ConsId_13);
    }
#line 1214 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__ArgVars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1212 "hlds_out_goal.m"
      {
#line 1213 "hlds_out_goal.m"
        {
#line 1213 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1213 "hlds_out_goal.m"
          return;
        }
#line 1212 "hlds_out_goal.m"
      }
#line 1214 "hlds_out_goal.m"
    else
#line 1215 "hlds_out_goal.m"
      {
#line 1215 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_24;
#line 1219 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__V_49_49;
#line 1219 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_50_50;
#line 1219 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_51_51;
#line 1219 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_52_52;

#line 1216 "hlds_out_goal.m"
        {
#line 1216 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) " (");
        }
#line 1217 "hlds_out_goal.m"
        {
#line 1217 "hlds_out_goal.m"
          parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ProgVarSet_17, hlds__hlds_out__hlds_out_goal__AppendVarNums_19, hlds__hlds_out__hlds_out_goal__ArgVars_14);
        }
#line 1218 "hlds_out_goal.m"
        {
#line 1218 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
#line 1219 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__DumpOptions_24 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 0)));
#line 1219 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 1)));
#line 1219 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 2)));
#line 1219 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 3)));
#line 1219 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 4)));
#line 1220 "hlds_out_goal.m"
        {
#line 1220 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_24, (MR_Char) 97);
        }
#line 1232 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1226 "hlds_out_goal.m"
          {
#line 1221 "hlds_out_goal.m"
            {
#line 1221 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_24, (MR_Char) 121);
            }
#line 1226 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1222 "hlds_out_goal.m"
              {
#line 1222 "hlds_out_goal.m"
                {
#line 1222 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_20);
                }
#line 1223 "hlds_out_goal.m"
                {
#line 1223 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% arg-modes\n");
                }
#line 1224 "hlds_out_goal.m"
                {
#line 1224 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_mode__mercury_output_structured_uni_mode_list_7_p_0(hlds__hlds_out__hlds_out_goal__ArgModes_15, hlds__hlds_out__hlds_out_goal__Indent_20, (MR_Integer) 1, (MR_Integer) 1, hlds__hlds_out__hlds_out_goal__InstVarSet_18);
#line 1224 "hlds_out_goal.m"
                  return;
                }
#line 1222 "hlds_out_goal.m"
              }
#line 1226 "hlds_out_goal.m"
            else
#line 1227 "hlds_out_goal.m"
              {
#line 1227 "hlds_out_goal.m"
                {
#line 1227 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_20);
                }
#line 1228 "hlds_out_goal.m"
                {
#line 1228 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% arg-modes ");
                }
#line 1229 "hlds_out_goal.m"
                {
#line 1229 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_list_4_p_0(hlds__hlds_out__hlds_out_goal__ArgModes_15, hlds__hlds_out__hlds_out_goal__InstVarSet_18);
                }
#line 1230 "hlds_out_goal.m"
                {
#line 1230 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1230 "hlds_out_goal.m"
                  return;
                }
#line 1227 "hlds_out_goal.m"
              }
#line 1226 "hlds_out_goal.m"
          }
#line 1232 "hlds_out_goal.m"
        else
#line 1230 "hlds_out_goal.m"
          {
#line 1230 "hlds_out_goal.m"
          }
#line 1215 "hlds_out_goal.m"
      }
#line 1209 "hlds_out_goal.m"
  }
#line 1203 "hlds_out_goal.m"
}

#line 1052 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_p_0(
#line 1052 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_10,
#line 1052 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Unification_11,
#line 1052 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ProgVarSet_13,
#line 1052 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_14,
#line 1052 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1052 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16)
#line 1052 "hlds_out_goal.m"
{
#line 1059 "hlds_out_goal.m"
  {
#line 1059 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1059 "hlds_out_goal.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Unification_11)) == (MR_mktag((MR_Integer) 2))))
#line 1059 "hlds_out_goal.m"
      {
#line 1059 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_171_171;
#line 1059 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__X_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 0)));
#line 1059 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Y_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 1)));

#line 1060 "hlds_out_goal.m"
        {
#line 1060 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1061 "hlds_out_goal.m"
        {
#line 1061 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% ");
        }
#line 2258 "hlds.hlds_out.hlds_out_goal.c"
        hlds__hlds_out__hlds_out_goal__TypeCtorInfo_171_171 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1062 "hlds_out_goal.m"
        {
#line 1062 "hlds_out_goal.m"
          parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_171_171, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__X_18);
        }
#line 1063 "hlds_out_goal.m"
        {
#line 1063 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) " := ");
        }
#line 1064 "hlds_out_goal.m"
        {
#line 1064 "hlds_out_goal.m"
          parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_171_171, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Y_19);
        }
#line 1065 "hlds_out_goal.m"
        {
#line 1065 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1065 "hlds_out_goal.m"
          return;
        }
#line 1059 "hlds_out_goal.m"
      }
#line 1059 "hlds_out_goal.m"
    else
#line 1059 "hlds_out_goal.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Unification_11)) == (MR_mktag((MR_Integer) 0))))
#line 1076 "hlds_out_goal.m"
        {
#line 1076 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173;
#line 1076 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 0)));
#line 1076 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 1)));
#line 1076 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 2)));
#line 1076 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 3)));
#line 1076 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ConstructHow_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 4)));
#line 1076 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Uniqueness_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 5)));
#line 1076 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__SubInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 6)));
#line 1076 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_27;
#line 1084 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__V_163_163;
#line 1084 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_164_164;
#line 1084 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_165_165;
#line 1084 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_166_166;

#line 1077 "hlds_out_goal.m"
          {
#line 1077 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 1078 "hlds_out_goal.m"
          {
#line 1078 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "% ");
          }
#line 2327 "hlds.hlds_out.hlds_out_goal.c"
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1079 "hlds_out_goal.m"
          {
#line 1079 "hlds_out_goal.m"
            parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Var_20);
          }
#line 1080 "hlds_out_goal.m"
          {
#line 1080 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) " := ");
          }
#line 1081 "hlds_out_goal.m"
          {
#line 1081 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_p_0(hlds__hlds_out__hlds_out_goal__Info_10, hlds__hlds_out__hlds_out_goal__ConsId_21, hlds__hlds_out__hlds_out_goal__ArgVars_22, hlds__hlds_out__hlds_out_goal__ArgModes_23, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__InstVarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 1084 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__DumpOptions_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 0)));
#line 1084 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_163_163 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 1)));
#line 1084 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 2)));
#line 1084 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 3)));
#line 1084 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 4)));
#line 1085 "hlds_out_goal.m"
          {
#line 1085 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_27, (MR_Char) 117);
          }
#line 1156 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1094 "hlds_out_goal.m"
            {
#line 1092 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__TypeCtor_30;
#line 1086 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_28_28;
#line 1086 "hlds_out_goal.m"
              MR_Integer hlds__hlds_out__hlds_out_goal__V_29_29;

#line 1086 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ConsId_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1086 "hlds_out_goal.m"
              if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1086 "hlds_out_goal.m"
                {
#line 1086 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_21, (MR_Integer) 1)));
#line 1086 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_21, (MR_Integer) 2)));
#line 1086 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__TypeCtor_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_21, (MR_Integer) 3)));
#line 1087 "hlds_out_goal.m"
                  {
#line 1087 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorSymName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__TypeCtor_30, (MR_Integer) 0)));
#line 1087 "hlds_out_goal.m"
                    MR_Integer hlds__hlds_out__hlds_out_goal__TypeCtorArity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__TypeCtor_30, (MR_Integer) 1)));
#line 1087 "hlds_out_goal.m"
                    MR_String hlds__hlds_out__hlds_out_goal__TypeCtorSymNameStr_33;
#line 1087 "hlds_out_goal.m"
                    MR_String hlds__hlds_out__hlds_out_goal__V_180_180;
#line 1087 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__V_186_186;
#line 1087 "hlds_out_goal.m"
                    MR_String hlds__hlds_out__hlds_out_goal__V_189_189;

#line 1088 "hlds_out_goal.m"
                    {
#line 1088 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1089 "hlds_out_goal.m"
                    {
#line 1089 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__TypeCtorSymNameStr_33 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorSymName_31);
                    }
#line 1090 "hlds_out_goal.m"
                    {
#line 1090 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% cons_id type_ctor: ");
                    }
#line 2412 "hlds.hlds_out.hlds_out_goal.c"
                    hlds__hlds_out__hlds_out_goal__V_186_186 = (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_4[0];
#line 1091 "hlds_out_goal.m"
                    {
#line 1091 "hlds_out_goal.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_goal__V_186_186, hlds__hlds_out__hlds_out_goal__TypeCtorSymNameStr_33, &hlds__hlds_out__hlds_out_goal__V_180_180);
                    }
#line 1091 "hlds_out_goal.m"
                    {
#line 1091 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_180_180);
                    }
#line 1090 "hlds_out_goal.m"
                    {
#line 1090 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "/");
                    }
#line 1091 "hlds_out_goal.m"
                    {
#line 1091 "hlds_out_goal.m"
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_goal__V_186_186, hlds__hlds_out__hlds_out_goal__TypeCtorArity_32, &hlds__hlds_out__hlds_out_goal__V_189_189);
                    }
#line 1091 "hlds_out_goal.m"
                    {
#line 1091 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_189_189);
                    }
#line 1087 "hlds_out_goal.m"
                  }
#line 1086 "hlds_out_goal.m"
                }
#line 1086 "hlds_out_goal.m"
              else
#line 1090 "hlds_out_goal.m"
                {
#line 1090 "hlds_out_goal.m"
                }
#line 1099 "hlds_out_goal.m"
              if ((hlds__hlds_out__hlds_out_goal__Uniqueness_25 == (MR_Integer) 1))
#line 1100 "hlds_out_goal.m"
                {
#line 1100 "hlds_out_goal.m"
                }
#line 1099 "hlds_out_goal.m"
              else
#line 1096 "hlds_out_goal.m"
                {
#line 1097 "hlds_out_goal.m"
                  {
#line 1097 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                  }
#line 1098 "hlds_out_goal.m"
                  {
#line 1098 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "% cell_is_unique\n");
                  }
#line 1096 "hlds_out_goal.m"
                }
#line 1104 "hlds_out_goal.m"
              if ((hlds__hlds_out__hlds_out_goal__SubInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1103 "hlds_out_goal.m"
                {
#line 1103 "hlds_out_goal.m"
                }
#line 1104 "hlds_out_goal.m"
              else
#line 1105 "hlds_out_goal.m"
                {
#line 1105 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__MaybeTakeAddr_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__SubInfo_26, (MR_Integer) 0)));
#line 1105 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__MaybeSize_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__SubInfo_26, (MR_Integer) 1)));

#line 1112 "hlds_out_goal.m"
                  if ((hlds__hlds_out__hlds_out_goal__MaybeTakeAddr_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1113 "hlds_out_goal.m"
                    {
#line 1113 "hlds_out_goal.m"
                    }
#line 1112 "hlds_out_goal.m"
                  else
#line 1107 "hlds_out_goal.m"
                    {
#line 1107 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal__TakeAddressFields_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeTakeAddr_34, (MR_Integer) 0)));

#line 1108 "hlds_out_goal.m"
                      {
#line 1108 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                      }
#line 1109 "hlds_out_goal.m"
                      {
#line 1109 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "% take address fields: ");
                      }
#line 1110 "hlds_out_goal.m"
                      {
#line 1110 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(hlds__hlds_out__hlds_out_goal__TakeAddressFields_36);
                      }
#line 1111 "hlds_out_goal.m"
                      {
#line 1111 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "\n");
                      }
#line 1107 "hlds_out_goal.m"
                    }
#line 1131 "hlds_out_goal.m"
                  if ((hlds__hlds_out__hlds_out_goal__MaybeSize_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1132 "hlds_out_goal.m"
                    {
#line 1132 "hlds_out_goal.m"
                    }
#line 1131 "hlds_out_goal.m"
                  else
#line 1116 "hlds_out_goal.m"
                    {
#line 1116 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal__SizeSource_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeSize_35, (MR_Integer) 0)));

#line 1117 "hlds_out_goal.m"
                      {
#line 1117 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                      }
#line 1118 "hlds_out_goal.m"
                      {
#line 1118 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "% term size ");
                      }
#line 1124 "hlds_out_goal.m"
                      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__SizeSource_37)) == (MR_mktag((MR_Integer) 1))))
#line 1125 "hlds_out_goal.m"
                        {
#line 1125 "hlds_out_goal.m"
                          MR_Word hlds__hlds_out__hlds_out_goal__SizeVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__SizeSource_37, (MR_Integer) 0)));

#line 1126 "hlds_out_goal.m"
                          {
#line 1126 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "var ");
                          }
#line 1127 "hlds_out_goal.m"
                          {
#line 1127 "hlds_out_goal.m"
                            parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__SizeVar_39);
                          }
#line 1129 "hlds_out_goal.m"
                          {
#line 1129 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "\n");
                          }
#line 1125 "hlds_out_goal.m"
                        }
#line 1124 "hlds_out_goal.m"
                      else
#line 1120 "hlds_out_goal.m"
                        {
#line 1120 "hlds_out_goal.m"
                          MR_Integer hlds__hlds_out__hlds_out_goal__KnownSize_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__SizeSource_37, (MR_Integer) 0)));

#line 1121 "hlds_out_goal.m"
                          {
#line 1121 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "const ");
                          }
#line 1122 "hlds_out_goal.m"
                          {
#line 1122 "hlds_out_goal.m"
                            mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__KnownSize_38);
                          }
#line 1123 "hlds_out_goal.m"
                          {
#line 1123 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "\n");
                          }
#line 1120 "hlds_out_goal.m"
                        }
#line 1116 "hlds_out_goal.m"
                    }
#line 1105 "hlds_out_goal.m"
                }
#line 1137 "hlds_out_goal.m"
              if ((hlds__hlds_out__hlds_out_goal__ConstructHow_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1136 "hlds_out_goal.m"
                {
#line 1136 "hlds_out_goal.m"
                }
#line 1137 "hlds_out_goal.m"
              else
#line 1137 "hlds_out_goal.m"
                if ((hlds__hlds_out__hlds_out_goal__ConstructHow_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1138 "hlds_out_goal.m"
                  {
#line 1139 "hlds_out_goal.m"
                    {
#line 1139 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1140 "hlds_out_goal.m"
                    {
#line 1140 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% construct statically\n");
#line 1140 "hlds_out_goal.m"
                      return;
                    }
#line 1138 "hlds_out_goal.m"
                  }
#line 1137 "hlds_out_goal.m"
                else
#line 1137 "hlds_out_goal.m"
                  if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ConstructHow_24)) == (MR_mktag((MR_Integer) 2))))
#line 1150 "hlds_out_goal.m"
                    {
#line 1150 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal__RegVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ConstructHow_24, (MR_Integer) 0)));

#line 1151 "hlds_out_goal.m"
                      {
#line 1151 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                      }
#line 1152 "hlds_out_goal.m"
                      {
#line 1152 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "% construct in region: ");
                      }
#line 1153 "hlds_out_goal.m"
                      {
#line 1153 "hlds_out_goal.m"
                        parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__RegVar_44);
                      }
#line 1154 "hlds_out_goal.m"
                      {
#line 1154 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1154 "hlds_out_goal.m"
                        return;
                      }
#line 1150 "hlds_out_goal.m"
                    }
#line 1137 "hlds_out_goal.m"
                  else
#line 1142 "hlds_out_goal.m"
                    {
#line 1142 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal__CellToReuse_40 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_goal__ConstructHow_24), (MR_Integer) 1);
#line 1142 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal__ReuseVar_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CellToReuse_40, (MR_Integer) 0)));
#line 1143 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal___ReuseConsIds_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CellToReuse_40, (MR_Integer) 1)));
#line 1143 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal___FieldAssigns_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CellToReuse_40, (MR_Integer) 2)));

#line 1145 "hlds_out_goal.m"
                      {
#line 1145 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                      }
#line 1146 "hlds_out_goal.m"
                      {
#line 1146 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "% reuse cell: ");
                      }
#line 1147 "hlds_out_goal.m"
                      {
#line 1147 "hlds_out_goal.m"
                        parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__ReuseVar_41);
                      }
#line 1148 "hlds_out_goal.m"
                      {
#line 1148 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1148 "hlds_out_goal.m"
                        return;
                      }
#line 1142 "hlds_out_goal.m"
                    }
#line 1094 "hlds_out_goal.m"
            }
#line 1156 "hlds_out_goal.m"
          else
#line 1154 "hlds_out_goal.m"
            {
#line 1154 "hlds_out_goal.m"
            }
#line 1076 "hlds_out_goal.m"
        }
#line 1059 "hlds_out_goal.m"
      else
#line 1059 "hlds_out_goal.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Unification_11)) == (MR_mktag((MR_Integer) 1))))
#line 1161 "hlds_out_goal.m"
          {
#line 1161 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__CanFail_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 4)));
#line 1161 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__CanCGC_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 5)));
#line 1161 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 0)));
#line 1161 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__ConsId_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 1)));
#line 1161 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 2)));
#line 1161 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_160 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 3)));
#line 1161 "hlds_out_goal.m"
            MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_161 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 0)));
#line 1162 "hlds_out_goal.m"
            MR_String hlds__hlds_out__hlds_out_goal__V_167_167 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 1)));
#line 1162 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 2)));
#line 1162 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 3)));
#line 1162 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 4)));

#line 1163 "hlds_out_goal.m"
            {
#line 1163 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_161, (MR_Char) 71);
            }
#line 1168 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1164 "hlds_out_goal.m"
              {
#line 1164 "hlds_out_goal.m"
                {
#line 1164 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 1165 "hlds_out_goal.m"
                {
#line 1165 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Compile time garbage collect: ");
                }
#line 1166 "hlds_out_goal.m"
                {
#line 1166 "hlds_out_goal.m"
                  mercury__io__write_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_can_cgc_0, ((MR_Box) (hlds__hlds_out__hlds_out_goal__CanCGC_46)));
                }
#line 1167 "hlds_out_goal.m"
                {
#line 1167 "hlds_out_goal.m"
                  mercury__io__nl_2_p_0();
                }
#line 1164 "hlds_out_goal.m"
              }
#line 1168 "hlds_out_goal.m"
            else
#line 1167 "hlds_out_goal.m"
              {
#line 1167 "hlds_out_goal.m"
              }
#line 1171 "hlds_out_goal.m"
            {
#line 1171 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 1172 "hlds_out_goal.m"
            {
#line 1172 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% ");
            }
#line 1173 "hlds_out_goal.m"
            {
#line 1173 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Var_157);
            }
#line 1177 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__CanFail_45 == (MR_Integer) 0))
#line 1175 "hlds_out_goal.m"
              {
#line 1176 "hlds_out_goal.m"
                {
#line 1176 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " \?= ");
                }
#line 1175 "hlds_out_goal.m"
              }
#line 1177 "hlds_out_goal.m"
            else
#line 1178 "hlds_out_goal.m"
              {
#line 1179 "hlds_out_goal.m"
                {
#line 1179 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " => ");
                }
#line 1178 "hlds_out_goal.m"
              }
#line 1181 "hlds_out_goal.m"
            {
#line 1181 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_p_0(hlds__hlds_out__hlds_out_goal__Info_10, hlds__hlds_out__hlds_out_goal__ConsId_158, hlds__hlds_out__hlds_out_goal__ArgVars_159, hlds__hlds_out__hlds_out_goal__ArgModes_160, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__InstVarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16);
#line 1181 "hlds_out_goal.m"
              return;
            }
#line 1161 "hlds_out_goal.m"
          }
#line 1059 "hlds_out_goal.m"
        else
#line 1059 "hlds_out_goal.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Unification_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1184 "hlds_out_goal.m"
            {
#line 1184 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Mode_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 1)));
#line 1184 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__TypeInfoVars_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 3)));
#line 1184 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__CanFail_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 2)));

#line 1185 "hlds_out_goal.m"
              {
#line 1185 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1186 "hlds_out_goal.m"
              {
#line 1186 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% ");
              }
#line 1190 "hlds_out_goal.m"
              if ((hlds__hlds_out__hlds_out_goal__CanFail_162 == (MR_Integer) 0))
#line 1188 "hlds_out_goal.m"
                {
#line 1189 "hlds_out_goal.m"
                  {
#line 1189 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "can_fail, ");
                  }
#line 1188 "hlds_out_goal.m"
                }
#line 1190 "hlds_out_goal.m"
              else
#line 1191 "hlds_out_goal.m"
                {
#line 1192 "hlds_out_goal.m"
                  {
#line 1192 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "cannot_fail, ");
                  }
#line 1191 "hlds_out_goal.m"
                }
#line 1194 "hlds_out_goal.m"
              {
#line 1194 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "mode: ");
              }
#line 1195 "hlds_out_goal.m"
              {
#line 1195 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_p_0(hlds__hlds_out__hlds_out_goal__Mode_47, hlds__hlds_out__hlds_out_goal__InstVarSet_14);
              }
#line 1196 "hlds_out_goal.m"
              {
#line 1196 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 1197 "hlds_out_goal.m"
              {
#line 1197 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1198 "hlds_out_goal.m"
              {
#line 1198 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% type-info vars: ");
              }
#line 1199 "hlds_out_goal.m"
              {
#line 1199 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__TypeInfoVars_48);
              }
#line 1200 "hlds_out_goal.m"
              {
#line 1200 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1200 "hlds_out_goal.m"
                return;
              }
#line 1184 "hlds_out_goal.m"
            }
#line 1059 "hlds_out_goal.m"
          else
#line 1067 "hlds_out_goal.m"
            {
#line 1067 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_172_172;
#line 1067 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__X_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 1)));
#line 1067 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Y_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 2)));

#line 1068 "hlds_out_goal.m"
              {
#line 1068 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1069 "hlds_out_goal.m"
              {
#line 1069 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% ");
              }
#line 2919 "hlds.hlds_out.hlds_out_goal.c"
              hlds__hlds_out__hlds_out_goal__TypeCtorInfo_172_172 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1070 "hlds_out_goal.m"
              {
#line 1070 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_172_172, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__X_155);
              }
#line 1071 "hlds_out_goal.m"
              {
#line 1071 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) " == ");
              }
#line 1072 "hlds_out_goal.m"
              {
#line 1072 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_172_172, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Y_156);
              }
#line 1073 "hlds_out_goal.m"
              {
#line 1073 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1073 "hlds_out_goal.m"
                return;
              }
#line 1067 "hlds_out_goal.m"
            }
#line 1059 "hlds_out_goal.m"
  }
#line 1052 "hlds_out_goal.m"
}

#line 325 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__325__1_3_p_0(
#line 325 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_334)
#line 325 "hlds_out_goal.m"
{
#line 325 "hlds_out_goal.m"
  {
#line 325 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 325 "hlds_out_goal.m"
    {
#line 325 "hlds_out_goal.m"
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_334)));
#line 325 "hlds_out_goal.m"
      return;
    }
#line 325 "hlds_out_goal.m"
  }
#line 325 "hlds_out_goal.m"
}

#line 321 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__321__1_3_p_0(
#line 321 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_330)
#line 321 "hlds_out_goal.m"
{
#line 321 "hlds_out_goal.m"
  {
#line 321 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 321 "hlds_out_goal.m"
    {
#line 321 "hlds_out_goal.m"
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_330)));
#line 321 "hlds_out_goal.m"
      return;
    }
#line 321 "hlds_out_goal.m"
  }
#line 321 "hlds_out_goal.m"
}

#line 317 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__317__1_3_p_0(
#line 317 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_326)
#line 317 "hlds_out_goal.m"
{
#line 317 "hlds_out_goal.m"
  {
#line 317 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 317 "hlds_out_goal.m"
    {
#line 317 "hlds_out_goal.m"
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_326)));
#line 317 "hlds_out_goal.m"
      return;
    }
#line 317 "hlds_out_goal.m"
  }
#line 317 "hlds_out_goal.m"
}

#line 313 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__313__1_3_p_0(
#line 313 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_322)
#line 313 "hlds_out_goal.m"
{
#line 313 "hlds_out_goal.m"
  {
#line 313 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 313 "hlds_out_goal.m"
    {
#line 313 "hlds_out_goal.m"
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_322)));
#line 313 "hlds_out_goal.m"
      return;
    }
#line 313 "hlds_out_goal.m"
  }
#line 313 "hlds_out_goal.m"
}

#line 309 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__309__1_3_p_0(
#line 309 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_318)
#line 309 "hlds_out_goal.m"
{
#line 309 "hlds_out_goal.m"
  {
#line 309 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 309 "hlds_out_goal.m"
    {
#line 309 "hlds_out_goal.m"
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_318)));
#line 309 "hlds_out_goal.m"
      return;
    }
#line 309 "hlds_out_goal.m"
  }
#line 309 "hlds_out_goal.m"
}

#line 2152 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0(
#line 2152 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__CompName_7,
#line 2152 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__CompState_8,
#line 2152 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_9,
#line 2152 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_10)
#line 2152 "hlds_out_goal.m"
{
#line 2155 "hlds_out_goal.m"
  {
#line 2155 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 2155 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_25_25;
#line 2155 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Var1_12;
#line 2155 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Var2_13;

#line 2156 "hlds_out_goal.m"
    {
#line 2156 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__CompName_7);
    }
#line 2157 "hlds_out_goal.m"
    {
#line 2157 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 2158 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__Var1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CompState_8, (MR_Integer) 0)));
#line 2158 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__Var2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CompState_8, (MR_Integer) 1)));
#line 3108 "hlds.hlds_out.hlds_out_goal.c"
    hlds__hlds_out__hlds_out_goal__TypeCtorInfo_25_25 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2159 "hlds_out_goal.m"
    {
#line 2159 "hlds_out_goal.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_25_25, hlds__hlds_out__hlds_out_goal__VarSet_9, hlds__hlds_out__hlds_out_goal__AppendVarNums_10, hlds__hlds_out__hlds_out_goal__Var1_12);
    }
#line 2160 "hlds_out_goal.m"
    {
#line 2160 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 2161 "hlds_out_goal.m"
    {
#line 2161 "hlds_out_goal.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_25_25, hlds__hlds_out__hlds_out_goal__VarSet_9, hlds__hlds_out__hlds_out_goal__AppendVarNums_10, hlds__hlds_out__hlds_out_goal__Var2_13);
    }
#line 2162 "hlds_out_goal.m"
    {
#line 2162 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 2162 "hlds_out_goal.m"
      return;
    }
#line 2155 "hlds_out_goal.m"
  }
#line 2152 "hlds_out_goal.m"
}

#line 2143 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_p_0(
#line 2143 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_5,
#line 2143 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MutableVar_6)
#line 2143 "hlds_out_goal.m"
{
#line 2146 "hlds_out_goal.m"
  {
#line 2146 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 2146 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__MutableName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MutableVar_6, (MR_Integer) 0)));
#line 2146 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__StateVarName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MutableVar_6, (MR_Integer) 1)));
#line 2146 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_13_13;
#line 2146 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_16_16;
#line 2146 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_18_18;
#line 2146 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_21_21;

#line 2148 "hlds_out_goal.m"
    {
#line 2148 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_5);
    }
#line 2149 "hlds_out_goal.m"
    {
#line 2149 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_16_16 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__MutableName_8, (MR_String) ": ");
    }
#line 2149 "hlds_out_goal.m"
    {
#line 2149 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "% mutable ", hlds__hlds_out__hlds_out_goal__V_16_16);
    }
#line 2149 "hlds_out_goal.m"
    {
#line 2149 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_13_13);
    }
#line 2150 "hlds_out_goal.m"
    {
#line 2150 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_21_21 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__StateVarName_9, (MR_String) "\n");
    }
#line 2150 "hlds_out_goal.m"
    {
#line 2150 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__hlds_out__hlds_out_goal__V_21_21);
    }
#line 2150 "hlds_out_goal.m"
    {
#line 2150 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_18_18);
#line 2150 "hlds_out_goal.m"
      return;
    }
#line 2146 "hlds_out_goal.m"
  }
#line 2143 "hlds_out_goal.m"
}

#line 2073 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_p_0(
#line 2073 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 2073 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 2073 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 2073 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 2073 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 2073 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 2073 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 2073 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 2073 "hlds_out_goal.m"
{
#line 2079 "hlds_out_goal.m"
  {
#line 2079 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 2079 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ShortHand_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));

#line 2109 "hlds_out_goal.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ShortHand_20)) == (MR_mktag((MR_Integer) 1))))
#line 2083 "hlds_out_goal.m"
      {
#line 2083 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Outer_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 1)));
#line 2083 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Inner_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 2)));
#line 2083 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__MaybeOutputVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 3)));
#line 2083 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__MainGoal_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 4)));
#line 2083 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__OrElseGoals_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 5)));
#line 2083 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__V_95_95;
#line 2082 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal___GoalType_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 0)));
#line 2082 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal___OrElseInners_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 6)));

#line 2084 "hlds_out_goal.m"
        {
#line 2084 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 2085 "hlds_out_goal.m"
        {
#line 2085 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "atomic [");
        }
#line 2086 "hlds_out_goal.m"
        {
#line 2086 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0((MR_String) "outer", hlds__hlds_out__hlds_out_goal__Outer_22, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
        }
#line 2088 "hlds_out_goal.m"
        {
#line 2088 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 2089 "hlds_out_goal.m"
        {
#line 2089 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0((MR_String) "inner", hlds__hlds_out__hlds_out_goal__Inner_23, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
        }
#line 2091 "hlds_out_goal.m"
        {
#line 2091 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 2094 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__MaybeOutputVars_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2093 "hlds_out_goal.m"
          {
#line 2093 "hlds_out_goal.m"
          }
#line 2094 "hlds_out_goal.m"
        else
#line 2095 "hlds_out_goal.m"
          {
#line 2095 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__OutputVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeOutputVars_24, (MR_Integer) 0)));

#line 2096 "hlds_out_goal.m"
            {
#line 2096 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "vars([");
            }
#line 2097 "hlds_out_goal.m"
            {
#line 2097 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__OutputVars_28);
            }
#line 2098 "hlds_out_goal.m"
            {
#line 2098 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "])");
            }
#line 2095 "hlds_out_goal.m"
          }
#line 2100 "hlds_out_goal.m"
        {
#line 2100 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "] (\n");
        }
#line 2103 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_95_95 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2102 "hlds_out_goal.m"
        {
#line 2102 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__MainGoal_25, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_95_95, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
        }
#line 2104 "hlds_out_goal.m"
        {
#line 2104 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__OrElseGoals_26, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_String) "or_else\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
        }
#line 2106 "hlds_out_goal.m"
        {
#line 2106 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 2107 "hlds_out_goal.m"
        {
#line 2107 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 2108 "hlds_out_goal.m"
        {
#line 2108 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 2108 "hlds_out_goal.m"
          return;
        }
#line 2083 "hlds_out_goal.m"
      }
#line 2109 "hlds_out_goal.m"
    else
#line 2109 "hlds_out_goal.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ShortHand_20)) == (MR_mktag((MR_Integer) 0))))
#line 2128 "hlds_out_goal.m"
        {
#line 2128 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__GoalA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 0)));
#line 2128 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__GoalB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 1)));
#line 2128 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__Indent1_36;

#line 2129 "hlds_out_goal.m"
          {
#line 2129 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2130 "hlds_out_goal.m"
          {
#line 2130 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "( % bi-implication\n");
          }
#line 2131 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Indent1_36 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2132 "hlds_out_goal.m"
          {
#line 2132 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalA_34, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent1_36, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
          }
#line 2134 "hlds_out_goal.m"
          {
#line 2134 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2135 "hlds_out_goal.m"
          {
#line 2135 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "<=>\n");
          }
#line 2136 "hlds_out_goal.m"
          {
#line 2136 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalB_35, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent1_36, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
          }
#line 2138 "hlds_out_goal.m"
          {
#line 2138 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2139 "hlds_out_goal.m"
          {
#line 2139 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 2140 "hlds_out_goal.m"
          {
#line 2140 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 2140 "hlds_out_goal.m"
            return;
          }
#line 2128 "hlds_out_goal.m"
        }
#line 2109 "hlds_out_goal.m"
      else
#line 2110 "hlds_out_goal.m"
        {
#line 2110 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__MaybeIO_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 0)));
#line 2110 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__SubGoal_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 2)));
#line 2110 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__V_69_69;
#line 2110 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 1)));

#line 2111 "hlds_out_goal.m"
          {
#line 2111 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2112 "hlds_out_goal.m"
          {
#line 2112 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "( % try\n");
          }
#line 2119 "hlds_out_goal.m"
          if ((hlds__hlds_out__hlds_out_goal__MaybeIO_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2120 "hlds_out_goal.m"
            {
#line 2120 "hlds_out_goal.m"
            }
#line 2119 "hlds_out_goal.m"
          else
#line 2114 "hlds_out_goal.m"
            {
#line 2114 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__IOVarA_32;
#line 2114 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__IOVarB_33;
#line 2114 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeIO_29, (MR_Integer) 0)));
#line 2114 "hlds_out_goal.m"
              MR_Integer hlds__hlds_out__hlds_out_goal__V_58_58;
#line 2114 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_63_63;
#line 2114 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_65_65;

#line 2114 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__IOVarA_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_57_57, (MR_Integer) 0)));
#line 2114 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__IOVarB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_57_57, (MR_Integer) 1)));
#line 2115 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_58_58 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2115 "hlds_out_goal.m"
              {
#line 2115 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__V_58_58);
              }
#line 2116 "hlds_out_goal.m"
              {
#line 2116 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% io(");
              }
#line 2117 "hlds_out_goal.m"
              {
#line 2117 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2117 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_65_65, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__IOVarB_33));
#line 2117 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2117 "hlds_out_goal.m"
              }
#line 2117 "hlds_out_goal.m"
              {
#line 2117 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2117 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_63_63, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__IOVarA_32));
#line 2117 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_63_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_65_65));
#line 2117 "hlds_out_goal.m"
              }
#line 2117 "hlds_out_goal.m"
              {
#line 2117 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_63_63);
              }
#line 2118 "hlds_out_goal.m"
              {
#line 2118 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) ")\n");
              }
#line 2114 "hlds_out_goal.m"
            }
#line 2123 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_69_69 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2122 "hlds_out_goal.m"
          {
#line 2122 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__SubGoal_31, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_69_69, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
          }
#line 2124 "hlds_out_goal.m"
          {
#line 2124 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2125 "hlds_out_goal.m"
          {
#line 2125 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 2126 "hlds_out_goal.m"
          {
#line 2126 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 2126 "hlds_out_goal.m"
            return;
          }
#line 2110 "hlds_out_goal.m"
        }
#line 2079 "hlds_out_goal.m"
  }
#line 2073 "hlds_out_goal.m"
}

#line 2043 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_3(
#line 2043 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 2043 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 2043 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 2043 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 2043 "hlds_out_goal.m"
{
#line 2043 "hlds_out_goal.m"
  {
#line 2043 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 2043 "hlds_out_goal.m"
    {
#line 2043 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 2043 "hlds_out_goal.m"
      return;
    }
#line 2043 "hlds_out_goal.m"
  }
#line 2043 "hlds_out_goal.m"
}

#line 2030 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_2(
#line 2030 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 2030 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 2030 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 2030 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 2030 "hlds_out_goal.m"
{
#line 2030 "hlds_out_goal.m"
  {
#line 2030 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 2030 "hlds_out_goal.m"
    {
#line 2030 "hlds_out_goal.m"
      parse_tree__mercury_to_mercury__mercury_output_trace_runtime_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 2030 "hlds_out_goal.m"
      return;
    }
#line 2030 "hlds_out_goal.m"
  }
#line 2030 "hlds_out_goal.m"
}

#line 2020 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_1(
#line 2020 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 2020 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 2020 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 2020 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 2020 "hlds_out_goal.m"
{
#line 2020 "hlds_out_goal.m"
  {
#line 2020 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 2020 "hlds_out_goal.m"
    {
#line 2020 "hlds_out_goal.m"
      parse_tree__mercury_to_mercury__mercury_output_trace_compiletime_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 2020 "hlds_out_goal.m"
      return;
    }
#line 2020 "hlds_out_goal.m"
  }
#line 2020 "hlds_out_goal.m"
}

#line 1858 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0(
#line 1858 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40,
#line 1858 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1858 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1858 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1858 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1858 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1858 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1858 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 1858 "hlds_out_goal.m"
{
#line 1864 "hlds_out_goal.m"
  {
#line 1864 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1864 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Reason_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));
#line 1864 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 2)));
#line 1864 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117;
#line 1864 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__V_210_210;

#line 1866 "hlds_out_goal.m"
    {
#line 1866 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1872 "hlds_out_goal.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Reason_20)) == (MR_mktag((MR_Integer) 0))))
#line 1868 "hlds_out_goal.m"
      {
#line 1868 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)));

#line 1869 "hlds_out_goal.m"
        {
#line 1869 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "some [");
        }
#line 1870 "hlds_out_goal.m"
        {
#line 1870 "hlds_out_goal.m"
          parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Vars_22);
        }
#line 1871 "hlds_out_goal.m"
        {
#line 1871 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "] (\n");
        }
#line 1871 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1868 "hlds_out_goal.m"
      }
#line 1872 "hlds_out_goal.m"
    else
#line 1872 "hlds_out_goal.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Reason_20)) == (MR_mktag((MR_Integer) 2))))
#line 1873 "hlds_out_goal.m"
        {
#line 1873 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Purity_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)));

#line 1877 "hlds_out_goal.m"
          if ((hlds__hlds_out__hlds_out_goal__Purity_23 == (MR_Integer) 2))
#line 1881 "hlds_out_goal.m"
            {
#line 1882 "hlds_out_goal.m"
              {
#line 1882 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "promise_impure (");
              }
#line 1881 "hlds_out_goal.m"
            }
#line 1877 "hlds_out_goal.m"
          else
#line 1877 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__Purity_23 == (MR_Integer) 0))
#line 1875 "hlds_out_goal.m"
              {
#line 1876 "hlds_out_goal.m"
                {
#line 1876 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "promise_pure (");
                }
#line 1875 "hlds_out_goal.m"
              }
#line 1877 "hlds_out_goal.m"
            else
#line 1878 "hlds_out_goal.m"
              {
#line 1879 "hlds_out_goal.m"
                {
#line 1879 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "promise_semipure (");
                }
#line 1878 "hlds_out_goal.m"
              }
#line 1884 "hlds_out_goal.m"
          {
#line 1884 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 1884 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1873 "hlds_out_goal.m"
        }
#line 1872 "hlds_out_goal.m"
      else
#line 1872 "hlds_out_goal.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Reason_20)) == (MR_mktag((MR_Integer) 1))))
#line 1886 "hlds_out_goal.m"
          {
#line 1886 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Kind_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));
#line 1886 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Vars_218 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)));

#line 1890 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__Kind_24 == (MR_Integer) 1))
#line 1891 "hlds_out_goal.m"
              {
#line 1892 "hlds_out_goal.m"
                {
#line 1892 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "promise_equivalent_solution_sets");
                }
#line 1891 "hlds_out_goal.m"
              }
#line 1890 "hlds_out_goal.m"
            else
#line 1890 "hlds_out_goal.m"
              if ((hlds__hlds_out__hlds_out_goal__Kind_24 == (MR_Integer) 2))
#line 1894 "hlds_out_goal.m"
                {
#line 1895 "hlds_out_goal.m"
                  {
#line 1895 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "arbitrary");
                  }
#line 1894 "hlds_out_goal.m"
                }
#line 1890 "hlds_out_goal.m"
              else
#line 1888 "hlds_out_goal.m"
                {
#line 1889 "hlds_out_goal.m"
                  {
#line 1889 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "promise_equivalent_solutions");
                  }
#line 1888 "hlds_out_goal.m"
                }
#line 1897 "hlds_out_goal.m"
            {
#line 1897 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) " [");
            }
#line 1898 "hlds_out_goal.m"
            {
#line 1898 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Vars_218);
            }
#line 1899 "hlds_out_goal.m"
            {
#line 1899 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "] (\n");
            }
#line 1899 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1886 "hlds_out_goal.m"
          }
#line 1872 "hlds_out_goal.m"
        else
#line 1872 "hlds_out_goal.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Reason_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1872 "hlds_out_goal.m"
            {
#line 1872 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

#line 1872 "hlds_out_goal.m"
              if ((hlds__hlds_out__hlds_out_goal__V_252_252 == (MR_Integer) 1))
#line 1969 "hlds_out_goal.m"
                {
#line 1970 "hlds_out_goal.m"
                  {
#line 1970 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "(\n");
                  }
#line 1971 "hlds_out_goal.m"
                  {
#line 1971 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                  }
#line 1972 "hlds_out_goal.m"
                  {
#line 1972 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "% barrier(not_removable)\n");
                  }
#line 1972 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1969 "hlds_out_goal.m"
                }
#line 1872 "hlds_out_goal.m"
              else
#line 1964 "hlds_out_goal.m"
                {
#line 1965 "hlds_out_goal.m"
                  {
#line 1965 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "(\n");
                  }
#line 1966 "hlds_out_goal.m"
                  {
#line 1966 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                  }
#line 1967 "hlds_out_goal.m"
                  {
#line 1967 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "% barrier(removable)\n");
                  }
#line 1967 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1964 "hlds_out_goal.m"
                }
#line 1872 "hlds_out_goal.m"
            }
#line 1872 "hlds_out_goal.m"
          else
#line 1872 "hlds_out_goal.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Reason_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1872 "hlds_out_goal.m"
              {
#line 1872 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

#line 1872 "hlds_out_goal.m"
                if ((hlds__hlds_out__hlds_out_goal__V_253_253 == (MR_Integer) 1))
#line 1979 "hlds_out_goal.m"
                  {
#line 1980 "hlds_out_goal.m"
                    {
#line 1980 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(\n");
                    }
#line 1981 "hlds_out_goal.m"
                    {
#line 1981 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1982 "hlds_out_goal.m"
                    {
#line 1982 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% commit(dont_force_pruning)\n");
                    }
#line 1982 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1979 "hlds_out_goal.m"
                  }
#line 1872 "hlds_out_goal.m"
                else
#line 1974 "hlds_out_goal.m"
                  {
#line 1975 "hlds_out_goal.m"
                    {
#line 1975 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(\n");
                    }
#line 1976 "hlds_out_goal.m"
                    {
#line 1976 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1977 "hlds_out_goal.m"
                    {
#line 1977 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% commit(force_pruning)\n");
                    }
#line 1977 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1974 "hlds_out_goal.m"
                  }
#line 1872 "hlds_out_goal.m"
              }
#line 1872 "hlds_out_goal.m"
            else
#line 1872 "hlds_out_goal.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Reason_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1984 "hlds_out_goal.m"
                {
#line 1984 "hlds_out_goal.m"
                  MR_String hlds__hlds_out__hlds_out_goal__DumpOptionsBackup_27;
#line 1984 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__Kind_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 2)));
#line 1984 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));
#line 1984 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__V_224_224;
#line 1984 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__V_225_225;
#line 1984 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__V_226_226;
#line 2008 "hlds_out_goal.m"
                  MR_String hlds__hlds_out__hlds_out_goal__V_223_223;

#line 1985 "hlds_out_goal.m"
                  {
#line 1985 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "(\n");
                  }
#line 1986 "hlds_out_goal.m"
                  {
#line 1986 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                  }
#line 1987 "hlds_out_goal.m"
                  {
#line 1987 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "% from_ground_term [");
                  }
#line 1988 "hlds_out_goal.m"
                  {
#line 1988 "hlds_out_goal.m"
                    parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Var_222);
                  }
#line 1989 "hlds_out_goal.m"
                  {
#line 1989 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
#line 1993 "hlds_out_goal.m"
                  if ((hlds__hlds_out__hlds_out_goal__Kind_221 == (MR_Integer) 1))
#line 1994 "hlds_out_goal.m"
                    {
#line 1995 "hlds_out_goal.m"
                      {
#line 1995 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "construct");
                      }
#line 1994 "hlds_out_goal.m"
                    }
#line 1993 "hlds_out_goal.m"
                  else
#line 1993 "hlds_out_goal.m"
                    if ((hlds__hlds_out__hlds_out_goal__Kind_221 == (MR_Integer) 2))
#line 1997 "hlds_out_goal.m"
                      {
#line 1998 "hlds_out_goal.m"
                        {
#line 1998 "hlds_out_goal.m"
                          mercury__io__write_string_3_p_0((MR_String) "deconstruct");
                        }
#line 1997 "hlds_out_goal.m"
                      }
#line 1993 "hlds_out_goal.m"
                    else
#line 1993 "hlds_out_goal.m"
                      if ((hlds__hlds_out__hlds_out_goal__Kind_221 == (MR_Integer) 0))
#line 1991 "hlds_out_goal.m"
                        {
#line 1992 "hlds_out_goal.m"
                          {
#line 1992 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "initial");
                          }
#line 1991 "hlds_out_goal.m"
                        }
#line 1993 "hlds_out_goal.m"
                      else
#line 2000 "hlds_out_goal.m"
                        {
#line 2001 "hlds_out_goal.m"
                          {
#line 2001 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "other");
                          }
#line 2000 "hlds_out_goal.m"
                        }
#line 2003 "hlds_out_goal.m"
                  {
#line 2003 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "]\n");
                  }
#line 2008 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_223_223 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 2008 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__DumpOptionsBackup_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40, (MR_Integer) 1)));
#line 2008 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 2008 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 2008 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 2009 "hlds_out_goal.m"
                  {
#line 2009 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2009 "hlds_out_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__DumpOptionsBackup_27));
#line 2009 "hlds_out_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__DumpOptionsBackup_27));
#line 2009 "hlds_out_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_224_224));
#line 2009 "hlds_out_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_225_225));
#line 2009 "hlds_out_goal.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_226_226));
#line 2009 "hlds_out_goal.m"
                  }
#line 1984 "hlds_out_goal.m"
                }
#line 1872 "hlds_out_goal.m"
              else
#line 1872 "hlds_out_goal.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Reason_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 2050 "hlds_out_goal.m"
                  {
#line 2050 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__LCVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));
#line 2050 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__LCSVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 2)));
#line 2050 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__UseParentStack_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 3)));
#line 2050 "hlds_out_goal.m"
                    MR_String hlds__hlds_out__hlds_out_goal__UseParentStackStr_39;
#line 2050 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__V_49_49;
#line 2050 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__V_51_51;
#line 2050 "hlds_out_goal.m"
                    MR_String hlds__hlds_out__hlds_out_goal__V_257_257;

#line 2054 "hlds_out_goal.m"
                    if ((hlds__hlds_out__hlds_out_goal__UseParentStack_38 == (MR_Integer) 1))
#line 2055 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__UseParentStackStr_39 = (MR_String) "using_child_stack";
#line 2054 "hlds_out_goal.m"
                    else
#line 2052 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__UseParentStackStr_39 = (MR_String) "using_parent_stack_frame";
#line 2058 "hlds_out_goal.m"
                    {
#line 2058 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "loop_control_spawn_off_");
                    }
#line 2058 "hlds_out_goal.m"
                    {
#line 2058 "hlds_out_goal.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_4[0], hlds__hlds_out__hlds_out_goal__UseParentStackStr_39, &hlds__hlds_out__hlds_out_goal__V_257_257);
                    }
#line 2058 "hlds_out_goal.m"
                    {
#line 2058 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_257_257);
                    }
#line 2058 "hlds_out_goal.m"
                    {
#line 2058 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 2059 "hlds_out_goal.m"
                    {
#line 2059 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "hlds_out_goal.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_51_51, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__LCSVar_37));
#line 2059 "hlds_out_goal.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2059 "hlds_out_goal.m"
                    }
#line 2059 "hlds_out_goal.m"
                    {
#line 2059 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "hlds_out_goal.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_49_49, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__LCVar_36));
#line 2059 "hlds_out_goal.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_49_49, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_51_51));
#line 2059 "hlds_out_goal.m"
                    }
#line 2059 "hlds_out_goal.m"
                    {
#line 2059 "hlds_out_goal.m"
                      parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_49_49);
                    }
#line 2060 "hlds_out_goal.m"
                    {
#line 2060 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ") (\n");
                    }
#line 2060 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 2050 "hlds_out_goal.m"
                  }
#line 1872 "hlds_out_goal.m"
                else
#line 1872 "hlds_out_goal.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Reason_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1929 "hlds_out_goal.m"
                    {
#line 1929 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

#line 1930 "hlds_out_goal.m"
                      {
#line 1930 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "require_complete_switch [");
                      }
#line 1931 "hlds_out_goal.m"
                      {
#line 1931 "hlds_out_goal.m"
                        parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Var_26);
                      }
#line 1932 "hlds_out_goal.m"
                      {
#line 1932 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "] (\n");
                      }
#line 1932 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1929 "hlds_out_goal.m"
                    }
#line 1872 "hlds_out_goal.m"
                  else
#line 1872 "hlds_out_goal.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Reason_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1901 "hlds_out_goal.m"
                      {
#line 1901 "hlds_out_goal.m"
                        MR_Word hlds__hlds_out__hlds_out_goal__Detism_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

#line 1905 "hlds_out_goal.m"
                        if ((hlds__hlds_out__hlds_out_goal__Detism_25 == (MR_Integer) 4))
#line 1915 "hlds_out_goal.m"
                          {
#line 1916 "hlds_out_goal.m"
                            {
#line 1916 "hlds_out_goal.m"
                              mercury__io__write_string_3_p_0((MR_String) "require_cc_multi");
                            }
#line 1915 "hlds_out_goal.m"
                          }
#line 1905 "hlds_out_goal.m"
                        else
#line 1905 "hlds_out_goal.m"
                          if ((hlds__hlds_out__hlds_out_goal__Detism_25 == (MR_Integer) 5))
#line 1918 "hlds_out_goal.m"
                            {
#line 1919 "hlds_out_goal.m"
                              {
#line 1919 "hlds_out_goal.m"
                                mercury__io__write_string_3_p_0((MR_String) "require_cc_nondet");
                              }
#line 1918 "hlds_out_goal.m"
                            }
#line 1905 "hlds_out_goal.m"
                          else
#line 1905 "hlds_out_goal.m"
                            if ((hlds__hlds_out__hlds_out_goal__Detism_25 == (MR_Integer) 0))
#line 1903 "hlds_out_goal.m"
                              {
#line 1904 "hlds_out_goal.m"
                                {
#line 1904 "hlds_out_goal.m"
                                  mercury__io__write_string_3_p_0((MR_String) "require_det");
                                }
#line 1903 "hlds_out_goal.m"
                              }
#line 1905 "hlds_out_goal.m"
                            else
#line 1905 "hlds_out_goal.m"
                              if ((hlds__hlds_out__hlds_out_goal__Detism_25 == (MR_Integer) 6))
#line 1924 "hlds_out_goal.m"
                                {
#line 1925 "hlds_out_goal.m"
                                  {
#line 1925 "hlds_out_goal.m"
                                    mercury__io__write_string_3_p_0((MR_String) "require_erroneous");
                                  }
#line 1924 "hlds_out_goal.m"
                                }
#line 1905 "hlds_out_goal.m"
                              else
#line 1905 "hlds_out_goal.m"
                                if ((hlds__hlds_out__hlds_out_goal__Detism_25 == (MR_Integer) 7))
#line 1921 "hlds_out_goal.m"
                                  {
#line 1922 "hlds_out_goal.m"
                                    {
#line 1922 "hlds_out_goal.m"
                                      mercury__io__write_string_3_p_0((MR_String) "require_failure");
                                    }
#line 1921 "hlds_out_goal.m"
                                  }
#line 1905 "hlds_out_goal.m"
                                else
#line 1905 "hlds_out_goal.m"
                                  if ((hlds__hlds_out__hlds_out_goal__Detism_25 == (MR_Integer) 2))
#line 1912 "hlds_out_goal.m"
                                    {
#line 1913 "hlds_out_goal.m"
                                      {
#line 1913 "hlds_out_goal.m"
                                        mercury__io__write_string_3_p_0((MR_String) "require_multi");
                                      }
#line 1912 "hlds_out_goal.m"
                                    }
#line 1905 "hlds_out_goal.m"
                                  else
#line 1905 "hlds_out_goal.m"
                                    if ((hlds__hlds_out__hlds_out_goal__Detism_25 == (MR_Integer) 3))
#line 1909 "hlds_out_goal.m"
                                      {
#line 1910 "hlds_out_goal.m"
                                        {
#line 1910 "hlds_out_goal.m"
                                          mercury__io__write_string_3_p_0((MR_String) "require_nondet");
                                        }
#line 1909 "hlds_out_goal.m"
                                      }
#line 1905 "hlds_out_goal.m"
                                    else
#line 1906 "hlds_out_goal.m"
                                      {
#line 1907 "hlds_out_goal.m"
                                        {
#line 1907 "hlds_out_goal.m"
                                          mercury__io__write_string_3_p_0((MR_String) "require_semidet");
                                        }
#line 1906 "hlds_out_goal.m"
                                      }
#line 1927 "hlds_out_goal.m"
                        {
#line 1927 "hlds_out_goal.m"
                          mercury__io__write_string_3_p_0((MR_String) " (\n");
                        }
#line 1927 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1901 "hlds_out_goal.m"
                      }
#line 1872 "hlds_out_goal.m"
                    else
#line 1872 "hlds_out_goal.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Reason_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1934 "hlds_out_goal.m"
                        {
#line 1934 "hlds_out_goal.m"
                          MR_Word hlds__hlds_out__hlds_out_goal__Detism_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 2)));
#line 1934 "hlds_out_goal.m"
                          MR_Word hlds__hlds_out__hlds_out_goal__Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

#line 1938 "hlds_out_goal.m"
                          if ((hlds__hlds_out__hlds_out_goal__Detism_219 == (MR_Integer) 4))
#line 1948 "hlds_out_goal.m"
                            {
#line 1949 "hlds_out_goal.m"
                              {
#line 1949 "hlds_out_goal.m"
                                mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_multi");
                              }
#line 1948 "hlds_out_goal.m"
                            }
#line 1938 "hlds_out_goal.m"
                          else
#line 1938 "hlds_out_goal.m"
                            if ((hlds__hlds_out__hlds_out_goal__Detism_219 == (MR_Integer) 5))
#line 1951 "hlds_out_goal.m"
                              {
#line 1952 "hlds_out_goal.m"
                                {
#line 1952 "hlds_out_goal.m"
                                  mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_nondet");
                                }
#line 1951 "hlds_out_goal.m"
                              }
#line 1938 "hlds_out_goal.m"
                            else
#line 1938 "hlds_out_goal.m"
                              if ((hlds__hlds_out__hlds_out_goal__Detism_219 == (MR_Integer) 0))
#line 1936 "hlds_out_goal.m"
                                {
#line 1937 "hlds_out_goal.m"
                                  {
#line 1937 "hlds_out_goal.m"
                                    mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_det");
                                  }
#line 1936 "hlds_out_goal.m"
                                }
#line 1938 "hlds_out_goal.m"
                              else
#line 1938 "hlds_out_goal.m"
                                if ((hlds__hlds_out__hlds_out_goal__Detism_219 == (MR_Integer) 6))
#line 1957 "hlds_out_goal.m"
                                  {
#line 1958 "hlds_out_goal.m"
                                    {
#line 1958 "hlds_out_goal.m"
                                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_erroneous");
                                    }
#line 1957 "hlds_out_goal.m"
                                  }
#line 1938 "hlds_out_goal.m"
                                else
#line 1938 "hlds_out_goal.m"
                                  if ((hlds__hlds_out__hlds_out_goal__Detism_219 == (MR_Integer) 7))
#line 1954 "hlds_out_goal.m"
                                    {
#line 1955 "hlds_out_goal.m"
                                      {
#line 1955 "hlds_out_goal.m"
                                        mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_failure");
                                      }
#line 1954 "hlds_out_goal.m"
                                    }
#line 1938 "hlds_out_goal.m"
                                  else
#line 1938 "hlds_out_goal.m"
                                    if ((hlds__hlds_out__hlds_out_goal__Detism_219 == (MR_Integer) 2))
#line 1945 "hlds_out_goal.m"
                                      {
#line 1946 "hlds_out_goal.m"
                                        {
#line 1946 "hlds_out_goal.m"
                                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_multi");
                                        }
#line 1945 "hlds_out_goal.m"
                                      }
#line 1938 "hlds_out_goal.m"
                                    else
#line 1938 "hlds_out_goal.m"
                                      if ((hlds__hlds_out__hlds_out_goal__Detism_219 == (MR_Integer) 3))
#line 1942 "hlds_out_goal.m"
                                        {
#line 1943 "hlds_out_goal.m"
                                          {
#line 1943 "hlds_out_goal.m"
                                            mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_nondet");
                                          }
#line 1942 "hlds_out_goal.m"
                                        }
#line 1938 "hlds_out_goal.m"
                                      else
#line 1939 "hlds_out_goal.m"
                                        {
#line 1940 "hlds_out_goal.m"
                                          {
#line 1940 "hlds_out_goal.m"
                                            mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_semidet");
                                          }
#line 1939 "hlds_out_goal.m"
                                        }
#line 1960 "hlds_out_goal.m"
                          {
#line 1960 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) " [");
                          }
#line 1961 "hlds_out_goal.m"
                          {
#line 1961 "hlds_out_goal.m"
                            parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Var_220);
                          }
#line 1962 "hlds_out_goal.m"
                          {
#line 1962 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "] (\n");
                          }
#line 1962 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1934 "hlds_out_goal.m"
                        }
#line 1872 "hlds_out_goal.m"
                      else
#line 2012 "hlds_out_goal.m"
                        {
#line 2012 "hlds_out_goal.m"
                          MR_Word hlds__hlds_out__hlds_out_goal__MaybeCompileTime_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));
#line 2012 "hlds_out_goal.m"
                          MR_Word hlds__hlds_out__hlds_out_goal__MaybeRunTime_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 2)));
#line 2012 "hlds_out_goal.m"
                          MR_Word hlds__hlds_out__hlds_out_goal__MaybeIO_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 3)));
#line 2012 "hlds_out_goal.m"
                          MR_Word hlds__hlds_out__hlds_out_goal__MutableVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 4)));
#line 2012 "hlds_out_goal.m"
                          MR_Word hlds__hlds_out__hlds_out_goal__QuantVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 5)));
#line 2012 "hlds_out_goal.m"
                          MR_Integer hlds__hlds_out__hlds_out_goal__V_57_57;
#line 2012 "hlds_out_goal.m"
                          MR_Word hlds__hlds_out__hlds_out_goal__V_88_88;
#line 2012 "hlds_out_goal.m"
                          MR_Integer hlds__hlds_out__hlds_out_goal__V_90_90;
#line 2012 "hlds_out_goal.m"
                          MR_Integer hlds__hlds_out__hlds_out_goal__V_92_92;
#line 2043 "hlds_out_goal.m"
                          MR_Box hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_IO_89_89;

#line 2013 "hlds_out_goal.m"
                          {
#line 2013 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "(\n");
                          }
#line 2014 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_goal__V_57_57 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2014 "hlds_out_goal.m"
                          {
#line 2014 "hlds_out_goal.m"
                            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__V_57_57);
                          }
#line 2015 "hlds_out_goal.m"
                          {
#line 2015 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "% trace\n");
                          }
#line 2023 "hlds_out_goal.m"
                          if ((hlds__hlds_out__hlds_out_goal__MaybeCompileTime_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2024 "hlds_out_goal.m"
                            {
#line 2024 "hlds_out_goal.m"
                            }
#line 2023 "hlds_out_goal.m"
                          else
#line 2017 "hlds_out_goal.m"
                            {
#line 2017 "hlds_out_goal.m"
                              MR_Word hlds__hlds_out__hlds_out_goal__CompileTime_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeCompileTime_28, (MR_Integer) 0)));
#line 2017 "hlds_out_goal.m"
                              MR_Integer hlds__hlds_out__hlds_out_goal__V_62_62 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);

#line 2018 "hlds_out_goal.m"
                              {
#line 2018 "hlds_out_goal.m"
                                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__V_62_62);
                              }
#line 2019 "hlds_out_goal.m"
                              {
#line 2019 "hlds_out_goal.m"
                                mercury__io__write_string_3_p_0((MR_String) "% compiletime(");
                              }
#line 2020 "hlds_out_goal.m"
                              {
#line 2020 "hlds_out_goal.m"
                                parse_tree__mercury_to_mercury__mercury_output_trace_expr_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[8], hlds__hlds_out__hlds_out_goal__CompileTime_33);
                              }
#line 2022 "hlds_out_goal.m"
                              {
#line 2022 "hlds_out_goal.m"
                                mercury__io__write_string_3_p_0((MR_String) ")\n");
                              }
#line 2017 "hlds_out_goal.m"
                            }
#line 2033 "hlds_out_goal.m"
                          if ((hlds__hlds_out__hlds_out_goal__MaybeRunTime_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2034 "hlds_out_goal.m"
                            {
#line 2034 "hlds_out_goal.m"
                            }
#line 2033 "hlds_out_goal.m"
                          else
#line 2027 "hlds_out_goal.m"
                            {
#line 2027 "hlds_out_goal.m"
                              MR_Word hlds__hlds_out__hlds_out_goal__RunTime_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeRunTime_29, (MR_Integer) 0)));
#line 2027 "hlds_out_goal.m"
                              MR_Integer hlds__hlds_out__hlds_out_goal__V_71_71 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);

#line 2028 "hlds_out_goal.m"
                              {
#line 2028 "hlds_out_goal.m"
                                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__V_71_71);
                              }
#line 2029 "hlds_out_goal.m"
                              {
#line 2029 "hlds_out_goal.m"
                                mercury__io__write_string_3_p_0((MR_String) "% runtime(");
                              }
#line 2030 "hlds_out_goal.m"
                              {
#line 2030 "hlds_out_goal.m"
                                parse_tree__mercury_to_mercury__mercury_output_trace_expr_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[9], hlds__hlds_out__hlds_out_goal__RunTime_34);
                              }
#line 2032 "hlds_out_goal.m"
                              {
#line 2032 "hlds_out_goal.m"
                                mercury__io__write_string_3_p_0((MR_String) ")\n");
                              }
#line 2027 "hlds_out_goal.m"
                            }
#line 2040 "hlds_out_goal.m"
                          if ((hlds__hlds_out__hlds_out_goal__MaybeIO_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2041 "hlds_out_goal.m"
                            {
#line 2041 "hlds_out_goal.m"
                            }
#line 2040 "hlds_out_goal.m"
                          else
#line 2037 "hlds_out_goal.m"
                            {
#line 2037 "hlds_out_goal.m"
                              MR_String hlds__hlds_out__hlds_out_goal__IOStateVarName_35 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeIO_30, (MR_Integer) 0)));
#line 2037 "hlds_out_goal.m"
                              MR_Integer hlds__hlds_out__hlds_out_goal__V_80_80 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2037 "hlds_out_goal.m"
                              MR_String hlds__hlds_out__hlds_out_goal__V_83_83;
#line 2037 "hlds_out_goal.m"
                              MR_String hlds__hlds_out__hlds_out_goal__V_86_86;

#line 2038 "hlds_out_goal.m"
                              {
#line 2038 "hlds_out_goal.m"
                                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__V_80_80);
                              }
#line 2039 "hlds_out_goal.m"
                              {
#line 2039 "hlds_out_goal.m"
                                hlds__hlds_out__hlds_out_goal__V_86_86 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__IOStateVarName_35, (MR_String) ")\n");
                              }
#line 2039 "hlds_out_goal.m"
                              {
#line 2039 "hlds_out_goal.m"
                                hlds__hlds_out__hlds_out_goal__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) "% io(!", hlds__hlds_out__hlds_out_goal__V_86_86);
                              }
#line 2039 "hlds_out_goal.m"
                              {
#line 2039 "hlds_out_goal.m"
                                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_83_83);
                              }
#line 2037 "hlds_out_goal.m"
                            }
#line 2043 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_goal__V_90_90 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2043 "hlds_out_goal.m"
                          {
#line 2043 "hlds_out_goal.m"
                            hlds__hlds_out__hlds_out_goal__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2043 "hlds_out_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_88_88, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]));
#line 2043 "hlds_out_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_88_88, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_3));
#line 2043 "hlds_out_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_88_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2043 "hlds_out_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_88_88, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_90_90));
#line 2043 "hlds_out_goal.m"
                          }
#line 2043 "hlds_out_goal.m"
                          {
#line 2043 "hlds_out_goal.m"
                            mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_goal__V_88_88, hlds__hlds_out__hlds_out_goal__MutableVars_31, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_IO_89_89);
                          }
#line 2045 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_goal__V_92_92 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2045 "hlds_out_goal.m"
                          {
#line 2045 "hlds_out_goal.m"
                            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__V_92_92);
                          }
#line 2046 "hlds_out_goal.m"
                          {
#line 2046 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "% quantified vars ");
                          }
#line 2047 "hlds_out_goal.m"
                          {
#line 2047 "hlds_out_goal.m"
                            parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__QuantVars_32);
                          }
#line 2048 "hlds_out_goal.m"
                          {
#line 2048 "hlds_out_goal.m"
                            mercury__io__nl_2_p_0();
                          }
#line 2048 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 2012 "hlds_out_goal.m"
                        }
#line 2063 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_210_210 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2062 "hlds_out_goal.m"
    {
#line 2062 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117, hlds__hlds_out__hlds_out_goal__Goal_21, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_210_210, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
    }
#line 2064 "hlds_out_goal.m"
    {
#line 2064 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 2065 "hlds_out_goal.m"
    {
#line 2065 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 2066 "hlds_out_goal.m"
    {
#line 2066 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 2066 "hlds_out_goal.m"
      return;
    }
#line 1864 "hlds_out_goal.m"
  }
#line 1858 "hlds_out_goal.m"
}

#line 1812 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_p_0(
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1812 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1812 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 1812 "hlds_out_goal.m"
{
#line 1818 "hlds_out_goal.m"
  {
#line 1818 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1818 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Cond_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 2)));
#line 1818 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Then_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 3)));
#line 1818 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Else_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 4)));
#line 1818 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__Indent1_24;
#line 1818 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_25;
#line 1819 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));
#line 1833 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_59_59;
#line 1833 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_60_60;
#line 1833 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_61_61;
#line 1833 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_62_62;
#line 1835 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_50_50;
#line 1836 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_30_30;
#line 1836 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_26_26;
#line 1836 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_27_27;
#line 1836 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_28_28;
#line 1836 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_29_29;

#line 1820 "hlds_out_goal.m"
    {
#line 1820 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1821 "hlds_out_goal.m"
    {
#line 1821 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "(if");
    }
#line 1823 "hlds_out_goal.m"
    {
#line 1823 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1824 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__Indent1_24 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1825 "hlds_out_goal.m"
    {
#line 1825 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Cond_21, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent1_24, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
    }
#line 1827 "hlds_out_goal.m"
    {
#line 1827 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1828 "hlds_out_goal.m"
    {
#line 1828 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "then\n");
    }
#line 1829 "hlds_out_goal.m"
    {
#line 1829 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Then_22, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent1_24, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
    }
#line 1831 "hlds_out_goal.m"
    {
#line 1831 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1832 "hlds_out_goal.m"
    {
#line 1832 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "else\n");
    }
#line 1833 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__DumpOptions_25 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 1833 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 1833 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 1833 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 1833 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));
#line 1835 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__succeeded = (strcmp(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_String) "") == 0);
#line 1835 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__succeeded = !(hlds__hlds_out__hlds_out_goal__succeeded);
#line 1835 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1835 "hlds_out_goal.m"
      {
#line 1836 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Else_23, (MR_Integer) 0)));
#line 1836 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Else_23, (MR_Integer) 1)));
#line 1836 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__V_50_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_50_50, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1836 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1836 "hlds_out_goal.m"
          {
#line 1836 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_50_50, (MR_Integer) 1)));
#line 1836 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_50_50, (MR_Integer) 2)));
#line 1836 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_50_50, (MR_Integer) 3)));
#line 1836 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_50_50, (MR_Integer) 4)));
#line 1836 "hlds_out_goal.m"
          }
#line 1835 "hlds_out_goal.m"
      }
#line 1840 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1838 "hlds_out_goal.m"
      {
#line 1838 "hlds_out_goal.m"
        {
#line 1838 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Else_23, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
        }
#line 1838 "hlds_out_goal.m"
      }
#line 1840 "hlds_out_goal.m"
    else
#line 1841 "hlds_out_goal.m"
      {
#line 1841 "hlds_out_goal.m"
        {
#line 1841 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Else_23, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent1_24, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
        }
#line 1841 "hlds_out_goal.m"
      }
#line 1844 "hlds_out_goal.m"
    {
#line 1844 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1845 "hlds_out_goal.m"
    {
#line 1845 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 1846 "hlds_out_goal.m"
    {
#line 1846 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1846 "hlds_out_goal.m"
      return;
    }
#line 1818 "hlds_out_goal.m"
  }
#line 1812 "hlds_out_goal.m"
}

#line 1791 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_negation_10_p_0(
#line 1791 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1791 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1791 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1791 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1791 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1791 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1791 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1791 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 1791 "hlds_out_goal.m"
{
#line 1797 "hlds_out_goal.m"
  {
#line 1797 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1797 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Goal_20 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_12), (MR_Integer) 0);
#line 1797 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__V_26_26;

#line 1799 "hlds_out_goal.m"
    {
#line 1799 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1800 "hlds_out_goal.m"
    {
#line 1800 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\\+ (\n");
    }
#line 1802 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_26_26 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1801 "hlds_out_goal.m"
    {
#line 1801 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goal_20, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_26_26, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
    }
#line 1803 "hlds_out_goal.m"
    {
#line 1803 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1804 "hlds_out_goal.m"
    {
#line 1804 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 1805 "hlds_out_goal.m"
    {
#line 1805 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1805 "hlds_out_goal.m"
      return;
    }
#line 1797 "hlds_out_goal.m"
  }
#line 1791 "hlds_out_goal.m"
}

#line 1766 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_p_0(
#line 1766 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ConsId_4)
#line 1766 "hlds_out_goal.m"
{
#line 1768 "hlds_out_goal.m"
  {
#line 1768 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1769 "hlds_out_goal.m"
    {
#line 1769 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " or ");
    }
#line 1770 "hlds_out_goal.m"
    {
#line 1770 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_p_0(hlds__hlds_out__hlds_out_goal__ConsId_4);
#line 1770 "hlds_out_goal.m"
      return;
    }
#line 1768 "hlds_out_goal.m"
  }
#line 1766 "hlds_out_goal.m"
}

#line 1756 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_case_10_p_0_1(
#line 1756 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 1756 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 1756 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 1756 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 1756 "hlds_out_goal.m"
{
#line 1756 "hlds_out_goal.m"
  {
#line 1756 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 1756 "hlds_out_goal.m"
    {
#line 1756 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 1756 "hlds_out_goal.m"
      return;
    }
#line 1756 "hlds_out_goal.m"
  }
#line 1756 "hlds_out_goal.m"
}

#line 1744 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_case_10_p_0(
#line 1744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Case_12,
#line 1744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Var_13,
#line 1744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
#line 1744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
#line 1744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_16,
#line 1744 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_17,
#line 1744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarTypes_18)
#line 1744 "hlds_out_goal.m"
{
#line 1749 "hlds_out_goal.m"
  {
#line 1749 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1749 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MainConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Case_12, (MR_Integer) 0)));
#line 1749 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__OtherConsIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Case_12, (MR_Integer) 1)));
#line 1749 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Case_12, (MR_Integer) 2)));
#line 1756 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_IO_33_33;

#line 1751 "hlds_out_goal.m"
    {
#line 1751 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_17);
    }
#line 1752 "hlds_out_goal.m"
    {
#line 1752 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 1753 "hlds_out_goal.m"
    {
#line 1753 "hlds_out_goal.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_16, hlds__hlds_out__hlds_out_goal__Var_13);
    }
#line 1754 "hlds_out_goal.m"
    {
#line 1754 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " has functor ");
    }
#line 1755 "hlds_out_goal.m"
    {
#line 1755 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_p_0(hlds__hlds_out__hlds_out_goal__MainConsId_20);
    }
#line 1756 "hlds_out_goal.m"
    {
#line 1756 "hlds_out_goal.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[7], hlds__hlds_out__hlds_out_goal__OtherConsIds_21, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_IO_33_33);
    }
#line 1757 "hlds_out_goal.m"
    {
#line 1757 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1763 "hlds_out_goal.m"
    {
#line 1763 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goal_22, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_16, hlds__hlds_out__hlds_out_goal__Indent_17, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__VarTypes_18);
#line 1763 "hlds_out_goal.m"
      return;
    }
#line 1749 "hlds_out_goal.m"
  }
#line 1744 "hlds_out_goal.m"
}

#line 1726 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_10_p_0(
#line 1726 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1726 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__CasesList_12,
#line 1726 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Var_13,
#line 1726 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
#line 1726 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
#line 1726 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_16,
#line 1726 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_17,
#line 1726 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarTypes_18)
#line 1726 "hlds_out_goal.m"
{
#line 1733 "hlds_out_goal.m"
  while (MR_TRUE)
#line 1733 "hlds_out_goal.m"
    {
#line 1733 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 1733 "hlds_out_goal.m"
      {
#line 1733 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1733 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__CasesList_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1741 "hlds_out_goal.m"
          {
#line 1741 "hlds_out_goal.m"
          }
#line 1733 "hlds_out_goal.m"
        else
#line 1733 "hlds_out_goal.m"
          {
#line 1733 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Case_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__CasesList_12, (MR_Integer) 0)));
#line 1733 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Cases_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__CasesList_12, (MR_Integer) 1)));
#line 1733 "hlds_out_goal.m"
            MR_Integer hlds__hlds_out__hlds_out_goal__V_27_27;

#line 1734 "hlds_out_goal.m"
            {
#line 1734 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_17);
            }
#line 1735 "hlds_out_goal.m"
            {
#line 1735 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
#line 1737 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_27_27 = (hlds__hlds_out__hlds_out_goal__Indent_17 + (MR_Integer) 1);
#line 1736 "hlds_out_goal.m"
            {
#line 1736 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_case_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Case_20, hlds__hlds_out__hlds_out_goal__Var_13, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_16, hlds__hlds_out__hlds_out_goal__V_27_27, hlds__hlds_out__hlds_out_goal__VarTypes_18);
            }
#line 1738 "hlds_out_goal.m"
            /* direct tailcall eliminated */
#line 1738 "hlds_out_goal.m"
            {
#line 1738 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__CasesList__tmp_copy_12 = hlds__hlds_out__hlds_out_goal__Cases_21;

#line 1738 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__CasesList_12 = hlds__hlds_out__hlds_out_goal__CasesList__tmp_copy_12;
#line 1738 "hlds_out_goal.m"
            }
#line 1738 "hlds_out_goal.m"
            continue;
#line 1733 "hlds_out_goal.m"
          }
#line 1733 "hlds_out_goal.m"
      }
#line 1733 "hlds_out_goal.m"
      break;
#line 1733 "hlds_out_goal.m"
    }
#line 1726 "hlds_out_goal.m"
}

#line 1696 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0(
#line 1696 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1696 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1696 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1696 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1696 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1696 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1696 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1696 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 1696 "hlds_out_goal.m"
{
#line 1702 "hlds_out_goal.m"
  {
#line 1702 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1702 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));
#line 1702 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__CanFail_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 2)));
#line 1702 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__CasesList_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 3)));
#line 1702 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__Indent1_23;
#line 1702 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_31_31;

#line 1704 "hlds_out_goal.m"
    {
#line 1704 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1705 "hlds_out_goal.m"
    {
#line 1705 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "( % ");
    }
#line 1706 "hlds_out_goal.m"
    {
#line 1706 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_31_31 = parse_tree__prog_out__can_fail_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__CanFail_21);
    }
#line 1706 "hlds_out_goal.m"
    {
#line 1706 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_31_31);
    }
#line 1707 "hlds_out_goal.m"
    {
#line 1707 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " switch on \140");
    }
#line 1708 "hlds_out_goal.m"
    {
#line 1708 "hlds_out_goal.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Var_20);
    }
#line 1709 "hlds_out_goal.m"
    {
#line 1709 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\'\n");
    }
#line 1710 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__Indent1_23 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1717 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__CasesList_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1718 "hlds_out_goal.m"
      {
#line 1719 "hlds_out_goal.m"
        {
#line 1719 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent1_23);
        }
#line 1720 "hlds_out_goal.m"
        {
#line 1720 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "fail\n");
        }
#line 1718 "hlds_out_goal.m"
      }
#line 1717 "hlds_out_goal.m"
    else
#line 1712 "hlds_out_goal.m"
      {
#line 1712 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Case_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__CasesList_22, (MR_Integer) 0)));
#line 1712 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Cases_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__CasesList_22, (MR_Integer) 1)));

#line 1713 "hlds_out_goal.m"
        {
#line 1713 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_case_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Case_24, hlds__hlds_out__hlds_out_goal__Var_20, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent1_23, hlds__hlds_out__hlds_out_goal__TypeQual_18);
        }
#line 1715 "hlds_out_goal.m"
        {
#line 1715 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_cases_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Cases_25, hlds__hlds_out__hlds_out_goal__Var_20, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__TypeQual_18);
        }
#line 1712 "hlds_out_goal.m"
      }
#line 1722 "hlds_out_goal.m"
    {
#line 1722 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1723 "hlds_out_goal.m"
    {
#line 1723 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 1724 "hlds_out_goal.m"
    {
#line 1724 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1724 "hlds_out_goal.m"
      return;
    }
#line 1702 "hlds_out_goal.m"
  }
#line 1696 "hlds_out_goal.m"
}

#line 1666 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_disj_10_p_0(
#line 1666 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1666 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1666 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1666 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1666 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1666 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1666 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1666 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 1666 "hlds_out_goal.m"
{
#line 1672 "hlds_out_goal.m"
  {
#line 1672 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1672 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Disjuncts_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));

#line 1674 "hlds_out_goal.m"
    {
#line 1674 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1685 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__Disjuncts_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1686 "hlds_out_goal.m"
      {
#line 1687 "hlds_out_goal.m"
        {
#line 1687 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "fail");
        }
#line 1688 "hlds_out_goal.m"
        {
#line 1688 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1688 "hlds_out_goal.m"
          return;
        }
#line 1686 "hlds_out_goal.m"
      }
#line 1685 "hlds_out_goal.m"
    else
#line 1676 "hlds_out_goal.m"
      {
#line 1676 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Disjuncts_20, (MR_Integer) 0)));
#line 1676 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Goals_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Disjuncts_20, (MR_Integer) 1)));
#line 1676 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__V_31_31;

#line 1677 "hlds_out_goal.m"
        {
#line 1677 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "( % disjunction\n");
        }
#line 1679 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_31_31 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1678 "hlds_out_goal.m"
        {
#line 1678 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goal_21, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_31_31, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
        }
#line 1680 "hlds_out_goal.m"
        {
#line 1680 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goals_22, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_String) ";\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
        }
#line 1682 "hlds_out_goal.m"
        {
#line 1682 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1683 "hlds_out_goal.m"
        {
#line 1683 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 1684 "hlds_out_goal.m"
        {
#line 1684 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1684 "hlds_out_goal.m"
          return;
        }
#line 1676 "hlds_out_goal.m"
      }
#line 1672 "hlds_out_goal.m"
  }
#line 1666 "hlds_out_goal.m"
}

#line 1632 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(
#line 1632 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_13,
#line 1632 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goal1_14,
#line 1632 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goals1_15,
#line 1632 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_16,
#line 1632 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_17,
#line 1632 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_18,
#line 1632 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_19,
#line 1632 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_20,
#line 1632 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Separator_21,
#line 1632 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_22)
#line 1632 "hlds_out_goal.m"
{
#line 1639 "hlds_out_goal.m"
  while (MR_TRUE)
#line 1639 "hlds_out_goal.m"
    {
#line 1639 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 1639 "hlds_out_goal.m"
      {
#line 1639 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1639 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__Goals1_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1657 "hlds_out_goal.m"
          {
#line 1657 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_13, hlds__hlds_out__hlds_out_goal__Goal1_14, hlds__hlds_out__hlds_out_goal__ModuleInfo_16, hlds__hlds_out__hlds_out_goal__VarSet_17, hlds__hlds_out__hlds_out_goal__AppendVarNums_18, hlds__hlds_out__hlds_out_goal__Indent_19, hlds__hlds_out__hlds_out_goal__Follow_20, hlds__hlds_out__hlds_out_goal__TypeQual_22);
#line 1657 "hlds_out_goal.m"
            return;
          }
#line 1639 "hlds_out_goal.m"
        else
#line 1639 "hlds_out_goal.m"
          {
#line 1639 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Goal2_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Goals1_15, (MR_Integer) 0)));
#line 1639 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Goals2_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Goals1_15, (MR_Integer) 1)));
#line 1639 "hlds_out_goal.m"
            MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_26 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 0)));
#line 1640 "hlds_out_goal.m"
            MR_String hlds__hlds_out__hlds_out_goal__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 1)));
#line 1640 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 2)));
#line 1640 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 3)));
#line 1640 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 4)));

#line 1641 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = (strcmp(hlds__hlds_out__hlds_out_goal__DumpOptions_26, (MR_String) "") == 0);
#line 1641 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = !(hlds__hlds_out__hlds_out_goal__succeeded);
#line 1649 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1646 "hlds_out_goal.m"
              {
#line 1645 "hlds_out_goal.m"
                {
#line 1645 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_13, hlds__hlds_out__hlds_out_goal__Goal1_14, hlds__hlds_out__hlds_out_goal__ModuleInfo_16, hlds__hlds_out__hlds_out_goal__VarSet_17, hlds__hlds_out__hlds_out_goal__AppendVarNums_18, hlds__hlds_out__hlds_out_goal__Indent_19, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_22);
                }
#line 1647 "hlds_out_goal.m"
                {
#line 1647 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_19);
                }
#line 1648 "hlds_out_goal.m"
                {
#line 1648 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Separator_21);
                }
#line 1646 "hlds_out_goal.m"
              }
#line 1649 "hlds_out_goal.m"
            else
#line 1650 "hlds_out_goal.m"
              {
#line 1650 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_13, hlds__hlds_out__hlds_out_goal__Goal1_14, hlds__hlds_out__hlds_out_goal__ModuleInfo_16, hlds__hlds_out__hlds_out_goal__VarSet_17, hlds__hlds_out__hlds_out_goal__AppendVarNums_18, hlds__hlds_out__hlds_out_goal__Indent_19, hlds__hlds_out__hlds_out_goal__Separator_21, hlds__hlds_out__hlds_out_goal__TypeQual_22);
              }
#line 1653 "hlds_out_goal.m"
            /* direct tailcall eliminated */
#line 1653 "hlds_out_goal.m"
            {
#line 1653 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Goal1__tmp_copy_14 = hlds__hlds_out__hlds_out_goal__Goal2_24;
#line 1653 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Goals1__tmp_copy_15 = hlds__hlds_out__hlds_out_goal__Goals2_25;

#line 1653 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__Goals1_15 = hlds__hlds_out__hlds_out_goal__Goals1__tmp_copy_15;
#line 1653 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__Goal1_14 = hlds__hlds_out__hlds_out_goal__Goal1__tmp_copy_14;
#line 1653 "hlds_out_goal.m"
            }
#line 1653 "hlds_out_goal.m"
            continue;
#line 1639 "hlds_out_goal.m"
          }
#line 1639 "hlds_out_goal.m"
      }
#line 1639 "hlds_out_goal.m"
      break;
#line 1639 "hlds_out_goal.m"
    }
#line 1632 "hlds_out_goal.m"
}

#line 1581 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_conj_10_p_0(
#line 1581 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1581 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1581 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1581 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1581 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1581 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1581 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1581 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 1581 "hlds_out_goal.m"
{
#line 1587 "hlds_out_goal.m"
  {
#line 1587 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1587 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ConjType_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));
#line 1587 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__List_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 2)));

#line 1619 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__List_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1620 "hlds_out_goal.m"
      {
#line 1621 "hlds_out_goal.m"
        {
#line 1621 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1625 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__ConjType_20 == (MR_Integer) 1))
#line 1626 "hlds_out_goal.m"
          {
#line 1627 "hlds_out_goal.m"
            {
#line 1627 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "/* parallel */ true");
            }
#line 1626 "hlds_out_goal.m"
          }
#line 1625 "hlds_out_goal.m"
        else
#line 1623 "hlds_out_goal.m"
          {
#line 1624 "hlds_out_goal.m"
            {
#line 1624 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "true");
            }
#line 1623 "hlds_out_goal.m"
          }
#line 1629 "hlds_out_goal.m"
        {
#line 1629 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1629 "hlds_out_goal.m"
          return;
        }
#line 1620 "hlds_out_goal.m"
      }
#line 1619 "hlds_out_goal.m"
    else
#line 1590 "hlds_out_goal.m"
      {
#line 1590 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__List_21, (MR_Integer) 0)));
#line 1590 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__List_21, (MR_Integer) 1)));

#line 1606 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__ConjType_20 == (MR_Integer) 1))
#line 1607 "hlds_out_goal.m"
          {
#line 1607 "hlds_out_goal.m"
            MR_Integer hlds__hlds_out__hlds_out_goal__V_36_36;

#line 1608 "hlds_out_goal.m"
            {
#line 1608 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 1609 "hlds_out_goal.m"
            {
#line 1609 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "( % parallel conjunction\n");
            }
#line 1611 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_36_36 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1610 "hlds_out_goal.m"
            {
#line 1610 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goal_22, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_36_36, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
            }
#line 1613 "hlds_out_goal.m"
            {
#line 1613 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goals_23, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_String) "&\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
            }
#line 1615 "hlds_out_goal.m"
            {
#line 1615 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 1616 "hlds_out_goal.m"
            {
#line 1616 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
#line 1617 "hlds_out_goal.m"
            {
#line 1617 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1617 "hlds_out_goal.m"
              return;
            }
#line 1607 "hlds_out_goal.m"
          }
#line 1606 "hlds_out_goal.m"
        else
#line 1592 "hlds_out_goal.m"
          {
#line 1592 "hlds_out_goal.m"
            MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_24 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 1593 "hlds_out_goal.m"
            MR_String hlds__hlds_out__hlds_out_goal__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 1593 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 1593 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 1593 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));

#line 1594 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = (strcmp(hlds__hlds_out__hlds_out_goal__DumpOptions_24, (MR_String) "") == 0);
#line 1594 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = !(hlds__hlds_out__hlds_out_goal__succeeded);
#line 1602 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1595 "hlds_out_goal.m"
              {
#line 1595 "hlds_out_goal.m"
                MR_Integer hlds__hlds_out__hlds_out_goal__V_49_49;

#line 1595 "hlds_out_goal.m"
                {
#line 1595 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 1596 "hlds_out_goal.m"
                {
#line 1596 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "( % conjunction\n");
                }
#line 1598 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_49_49 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1597 "hlds_out_goal.m"
                {
#line 1597 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goal_22, hlds__hlds_out__hlds_out_goal__Goals_23, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_49_49, (MR_String) "\n", (MR_String) ",\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
                }
#line 1599 "hlds_out_goal.m"
                {
#line 1599 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 1600 "hlds_out_goal.m"
                {
#line 1600 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
#line 1601 "hlds_out_goal.m"
                {
#line 1601 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1601 "hlds_out_goal.m"
                  return;
                }
#line 1595 "hlds_out_goal.m"
              }
#line 1602 "hlds_out_goal.m"
            else
#line 1603 "hlds_out_goal.m"
              {
#line 1603 "hlds_out_goal.m"
                {
#line 1603 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goal_22, hlds__hlds_out__hlds_out_goal__Goals_23, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, (MR_String) ",\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 1603 "hlds_out_goal.m"
                  return;
                }
#line 1603 "hlds_out_goal.m"
              }
#line 1592 "hlds_out_goal.m"
          }
#line 1590 "hlds_out_goal.m"
      }
#line 1587 "hlds_out_goal.m"
  }
#line 1581 "hlds_out_goal.m"
}

#line 1539 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(
#line 1539 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_1,
#line 1539 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_2,
#line 1539 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TVarSet_3,
#line 1539 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_4)
#line 1539 "hlds_out_goal.m"
{
#line 1542 "hlds_out_goal.m"
  while (MR_TRUE)
#line 1542 "hlds_out_goal.m"
    {
#line 1542 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 1542 "hlds_out_goal.m"
      {
#line 1542 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1542 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1542 "hlds_out_goal.m"
          {
#line 1542 "hlds_out_goal.m"
          }
#line 1542 "hlds_out_goal.m"
        else
#line 1543 "hlds_out_goal.m"
          {
#line 1543 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Arg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__1_1, (MR_Integer) 0)));
#line 1543 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__1_1, (MR_Integer) 1)));
#line 1543 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Arg_13, (MR_Integer) 0)));
#line 1543 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__MaybeNameMode_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Arg_13, (MR_Integer) 1)));
#line 1543 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Arg_13, (MR_Integer) 2)));
#line 1543 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__BoxPolicy_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Arg_13, (MR_Integer) 3)));

#line 1545 "hlds_out_goal.m"
            {
#line 1545 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_2, hlds__hlds_out__hlds_out_goal__AppendVarNums_4, hlds__hlds_out__hlds_out_goal__Var_19);
            }
#line 1557 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__MaybeNameMode_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1558 "hlds_out_goal.m"
              {
#line 1558 "hlds_out_goal.m"
              }
#line 1557 "hlds_out_goal.m"
            else
#line 1547 "hlds_out_goal.m"
              {
#line 1547 "hlds_out_goal.m"
                MR_String hlds__hlds_out__hlds_out_goal__Name_23;
#line 1547 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__Mode_24;
#line 1547 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeNameMode_20, (MR_Integer) 0)));
#line 1547 "hlds_out_goal.m"
                MR_String hlds__hlds_out__hlds_out_goal__V_31_31;
#line 1547 "hlds_out_goal.m"
                MR_String hlds__hlds_out__hlds_out_goal__V_34_34;
#line 1549 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_53_53;

#line 1547 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__Name_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_30_30, (MR_Integer) 0)));
#line 1547 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__Mode_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_30_30, (MR_Integer) 1)));
#line 1548 "hlds_out_goal.m"
                {
#line 1548 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_34_34 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__Name_23, (MR_String) "(");
                }
#line 1548 "hlds_out_goal.m"
                {
#line 1548 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_goal__V_34_34);
                }
#line 1548 "hlds_out_goal.m"
                {
#line 1548 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_31_31);
                }
#line 1549 "hlds_out_goal.m"
                {
#line 1549 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_53_53 = parse_tree__prog_mode__in_mode_0_f_0();
                }
#line 1549 "hlds_out_goal.m"
                {
#line 1549 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(hlds__hlds_out__hlds_out_goal__Mode_24, hlds__hlds_out__hlds_out_goal__V_53_53);
                }
#line 1551 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1550 "hlds_out_goal.m"
                  {
#line 1550 "hlds_out_goal.m"
                    {
#line 1550 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "in");
                    }
#line 1550 "hlds_out_goal.m"
                  }
#line 1551 "hlds_out_goal.m"
                else
#line 1553 "hlds_out_goal.m"
                  {
#line 1551 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__V_54_54;

#line 1551 "hlds_out_goal.m"
                    {
#line 1551 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__V_54_54 = parse_tree__prog_mode__out_mode_0_f_0();
                    }
#line 1551 "hlds_out_goal.m"
                    {
#line 1551 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(hlds__hlds_out__hlds_out_goal__Mode_24, hlds__hlds_out__hlds_out_goal__V_54_54);
                    }
#line 1553 "hlds_out_goal.m"
                    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1552 "hlds_out_goal.m"
                      {
#line 1552 "hlds_out_goal.m"
                        {
#line 1552 "hlds_out_goal.m"
                          mercury__io__write_string_3_p_0((MR_String) "out");
                        }
#line 1552 "hlds_out_goal.m"
                      }
#line 1553 "hlds_out_goal.m"
                    else
#line 1554 "hlds_out_goal.m"
                      {
#line 1554 "hlds_out_goal.m"
                        {
#line 1554 "hlds_out_goal.m"
                          mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, ((MR_Box) (hlds__hlds_out__hlds_out_goal__Mode_24)));
                        }
#line 1554 "hlds_out_goal.m"
                      }
#line 1553 "hlds_out_goal.m"
                  }
#line 1556 "hlds_out_goal.m"
                {
#line 1556 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
#line 1547 "hlds_out_goal.m"
              }
#line 1562 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__BoxPolicy_22 == (MR_Integer) 1))
#line 1563 "hlds_out_goal.m"
              {
#line 1564 "hlds_out_goal.m"
                {
#line 1564 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "\044alwaysboxed");
                }
#line 1563 "hlds_out_goal.m"
              }
#line 1562 "hlds_out_goal.m"
            else
#line 1561 "hlds_out_goal.m"
              {
#line 1561 "hlds_out_goal.m"
              }
#line 1566 "hlds_out_goal.m"
            {
#line 1566 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\100");
            }
#line 1567 "hlds_out_goal.m"
            {
#line 1567 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_goal__TVarSet_3, hlds__hlds_out__hlds_out_goal__AppendVarNums_4, hlds__hlds_out__hlds_out_goal__Type_21);
            }
#line 1570 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1569 "hlds_out_goal.m"
              {
#line 1569 "hlds_out_goal.m"
              }
#line 1570 "hlds_out_goal.m"
            else
#line 1571 "hlds_out_goal.m"
              {
#line 1572 "hlds_out_goal.m"
                {
#line 1572 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1573 "hlds_out_goal.m"
                /* direct tailcall eliminated */
#line 1573 "hlds_out_goal.m"
                {
#line 1573 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_goal__Args_14;

#line 1573 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__HeadVar__1_1 = hlds__hlds_out__hlds_out_goal__HeadVar__1__tmp_copy_1;
#line 1573 "hlds_out_goal.m"
                }
#line 1573 "hlds_out_goal.m"
                continue;
#line 1571 "hlds_out_goal.m"
              }
#line 1543 "hlds_out_goal.m"
          }
#line 1542 "hlds_out_goal.m"
      }
#line 1542 "hlds_out_goal.m"
      break;
#line 1542 "hlds_out_goal.m"
    }
#line 1539 "hlds_out_goal.m"
}

#line 1466 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_reg_3_p_0(
#line 1466 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgReg_4)
#line 1466 "hlds_out_goal.m"
{
#line 1470 "hlds_out_goal.m"
  {
#line 1470 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1470 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__ArgReg_4 == (MR_Integer) 1))
#line 1473 "hlds_out_goal.m"
      {
#line 1474 "hlds_out_goal.m"
        {
#line 1474 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "reg_f");
#line 1474 "hlds_out_goal.m"
          return;
        }
#line 1473 "hlds_out_goal.m"
      }
#line 1470 "hlds_out_goal.m"
    else
#line 1470 "hlds_out_goal.m"
      {
#line 1471 "hlds_out_goal.m"
        {
#line 1471 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "reg_r");
#line 1471 "hlds_out_goal.m"
          return;
        }
#line 1470 "hlds_out_goal.m"
      }
#line 1470 "hlds_out_goal.m"
  }
#line 1466 "hlds_out_goal.m"
}

#line 1460 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0_1(
#line 1460 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 1460 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 1460 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 1460 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 1460 "hlds_out_goal.m"
{
#line 1460 "hlds_out_goal.m"
  {
#line 1460 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 1460 "hlds_out_goal.m"
    {
#line 1460 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_ho_arg_reg_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 1460 "hlds_out_goal.m"
      return;
    }
#line 1460 "hlds_out_goal.m"
  }
#line 1460 "hlds_out_goal.m"
}

#line 1452 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(
#line 1452 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_5,
#line 1452 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeArgRegs_6)
#line 1452 "hlds_out_goal.m"
{
#line 1457 "hlds_out_goal.m"
  {
#line 1457 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1457 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__MaybeArgRegs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1463 "hlds_out_goal.m"
      {
#line 1463 "hlds_out_goal.m"
      }
#line 1457 "hlds_out_goal.m"
    else
#line 1457 "hlds_out_goal.m"
      {
#line 1457 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ArgRegs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeArgRegs_6, (MR_Integer) 0)));

#line 1458 "hlds_out_goal.m"
        {
#line 1458 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_5);
        }
#line 1459 "hlds_out_goal.m"
        {
#line 1459 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% arg regs: ");
        }
#line 1460 "hlds_out_goal.m"
        {
#line 1460 "hlds_out_goal.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, hlds__hlds_out__hlds_out_goal__ArgRegs_8, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[6]);
        }
#line 1461 "hlds_out_goal.m"
        {
#line 1461 "hlds_out_goal.m"
          mercury__io__nl_2_p_0();
#line 1461 "hlds_out_goal.m"
          return;
        }
#line 1457 "hlds_out_goal.m"
      }
#line 1457 "hlds_out_goal.m"
  }
#line 1452 "hlds_out_goal.m"
}

#line 1323 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_p_0(
#line 1323 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__PredName_7,
#line 1323 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_8,
#line 1323 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_9,
#line 1323 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_10)
#line 1323 "hlds_out_goal.m"
{
#line 1328 "hlds_out_goal.m"
  {
#line 1328 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1328 "hlds_out_goal.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PredName_7)) == (MR_mktag((MR_Integer) 1))))
#line 1328 "hlds_out_goal.m"
      {
#line 1328 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PredName_7, (MR_Integer) 0)));
#line 1328 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PredName_7, (MR_Integer) 1)));
#line 1328 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_19_19;

#line 1329 "hlds_out_goal.m"
        {
#line 1329 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1329 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_19_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Name_13));
#line 1329 "hlds_out_goal.m"
        }
#line 1329 "hlds_out_goal.m"
        {
#line 1329 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_qualified_functor_7_p_0(hlds__hlds_out__hlds_out_goal__ModuleName_12, hlds__hlds_out__hlds_out_goal__V_19_19, hlds__hlds_out__hlds_out_goal__ArgVars_8, hlds__hlds_out__hlds_out_goal__VarSet_9, hlds__hlds_out__hlds_out_goal__AppendVarNums_10);
#line 1329 "hlds_out_goal.m"
          return;
        }
#line 1328 "hlds_out_goal.m"
      }
#line 1328 "hlds_out_goal.m"
    else
#line 1332 "hlds_out_goal.m"
      {
#line 1332 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_16_16;
#line 1332 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__PredName_7, (MR_Integer) 0)));

#line 1333 "hlds_out_goal.m"
        {
#line 1333 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1333 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_16_16, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Name_21));
#line 1333 "hlds_out_goal.m"
        }
#line 1333 "hlds_out_goal.m"
        {
#line 1333 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_p_0(hlds__hlds_out__hlds_out_goal__V_16_16, hlds__hlds_out__hlds_out_goal__ArgVars_8, hlds__hlds_out__hlds_out_goal__VarSet_9, hlds__hlds_out__hlds_out_goal__AppendVarNums_10, (MR_Integer) 0);
#line 1333 "hlds_out_goal.m"
          return;
        }
#line 1332 "hlds_out_goal.m"
      }
#line 1328 "hlds_out_goal.m"
  }
#line 1323 "hlds_out_goal.m"
}

#line 1242 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_p_0(
#line 1242 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1242 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1242 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1242 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1242 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1242 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1242 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1242 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 1242 "hlds_out_goal.m"
{
#line 1248 "hlds_out_goal.m"
  {
#line 1248 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1248 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 0)));
#line 1248 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));
#line 1248 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 2)));
#line 1248 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Builtin_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 3)));
#line 1248 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeUnifyContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 4)));
#line 1248 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 5)));
#line 1248 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_26 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 1248 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__NewArgVars_30;
#line 1251 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 1251 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 1251 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 1251 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));
#line 1268 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_83_83;

#line 1252 "hlds_out_goal.m"
    {
#line 1252 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_26, (MR_Char) 98);
    }
#line 1264 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1257 "hlds_out_goal.m"
      if ((hlds__hlds_out__hlds_out_goal__Builtin_23 == (MR_Integer) 0))
#line 1254 "hlds_out_goal.m"
        {
#line 1255 "hlds_out_goal.m"
          {
#line 1255 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 1256 "hlds_out_goal.m"
          {
#line 1256 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "% inline builtin\n");
          }
#line 1254 "hlds_out_goal.m"
        }
#line 1257 "hlds_out_goal.m"
      else
#line 1257 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__Builtin_23 == (MR_Integer) 2))
#line 1262 "hlds_out_goal.m"
          {
#line 1262 "hlds_out_goal.m"
          }
#line 1257 "hlds_out_goal.m"
        else
#line 1258 "hlds_out_goal.m"
          {
#line 1259 "hlds_out_goal.m"
            {
#line 1259 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 1260 "hlds_out_goal.m"
            {
#line 1260 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% out of line builtin\n");
            }
#line 1258 "hlds_out_goal.m"
          }
#line 1264 "hlds_out_goal.m"
    else
#line 1262 "hlds_out_goal.m"
      {
#line 1262 "hlds_out_goal.m"
      }
#line 1267 "hlds_out_goal.m"
    {
#line 1267 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1268 "hlds_out_goal.m"
    {
#line 1268 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_83_83 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 1268 "hlds_out_goal.m"
    {
#line 1268 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__hlds_out__hlds_out_goal__PredId_20, hlds__hlds_out__hlds_out_goal__V_83_83);
    }
#line 6260 "hlds.hlds_out.hlds_out_goal.c"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1279 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__NewArgVars_30 = hlds__hlds_out__hlds_out_goal__ArgVars_22;
#line 6264 "hlds.hlds_out.hlds_out_goal.c"
    else
#line 6266 "hlds.hlds_out.hlds_out_goal.c"
      {
#line 6268 "hlds.hlds_out.hlds_out_goal.c"
        MR_Word hlds__hlds_out__hlds_out_goal__PredInfo_28;
#line 6270 "hlds.hlds_out.hlds_out_goal.c"
        MR_Word hlds__hlds_out__hlds_out_goal__Purity_29;
#line 6272 "hlds.hlds_out.hlds_out_goal.c"
        MR_Word hlds__hlds_out__hlds_out_goal__PredOrFunc_85;

#line 1272 "hlds_out_goal.m"
        {
#line 1272 "hlds_out_goal.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__PredId_20, &hlds__hlds_out__hlds_out_goal__PredInfo_28);
        }
#line 1273 "hlds_out_goal.m"
        {
#line 1273 "hlds_out_goal.m"
          hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__hlds_out__hlds_out_goal__PredInfo_28, &hlds__hlds_out__hlds_out_goal__Purity_29);
        }
#line 1274 "hlds_out_goal.m"
        {
#line 1274 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__PredOrFunc_85 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_goal__PredInfo_28);
        }
#line 1275 "hlds_out_goal.m"
        {
#line 1275 "hlds_out_goal.m"
          parse_tree__prog_out__write_purity_prefix_3_p_0(hlds__hlds_out__hlds_out_goal__Purity_29);
        }
#line 1280 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__PredOrFunc_85 == (MR_Integer) 1))
#line 1281 "hlds_out_goal.m"
          {
#line 1281 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__LHSVar_31;
#line 1282 "hlds_out_goal.m"
            MR_Box hlds__hlds_out__hlds_out_goal__conv0_LHSVar_31;

#line 1282 "hlds_out_goal.m"
            {
#line 1282 "hlds_out_goal.m"
              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], hlds__hlds_out__hlds_out_goal__ArgVars_22, &hlds__hlds_out__hlds_out_goal__NewArgVars_30, &hlds__hlds_out__hlds_out_goal__conv0_LHSVar_31);
            }
#line 1282 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__LHSVar_31 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv0_LHSVar_31);
#line 1283 "hlds_out_goal.m"
            {
#line 1283 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__LHSVar_31);
            }
#line 1284 "hlds_out_goal.m"
            {
#line 1284 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) " = ");
            }
#line 1281 "hlds_out_goal.m"
          }
#line 1280 "hlds_out_goal.m"
        else
#line 1279 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__NewArgVars_30 = hlds__hlds_out__hlds_out_goal__ArgVars_22;
#line 6327 "hlds.hlds_out.hlds_out_goal.c"
      }
#line 1286 "hlds_out_goal.m"
    {
#line 1286 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_p_0(hlds__hlds_out__hlds_out_goal__PredName_25, hlds__hlds_out__hlds_out_goal__NewArgVars_30, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
    }
#line 1287 "hlds_out_goal.m"
    {
#line 1287 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
    }
#line 1288 "hlds_out_goal.m"
    {
#line 1288 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_26, (MR_Char) 108);
    }
#line 1319 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1289 "hlds_out_goal.m"
      {
#line 1289 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__PredNum_32;
#line 1289 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__ProcNum_33;

#line 1289 "hlds_out_goal.m"
        {
#line 1289 "hlds_out_goal.m"
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_goal__PredId_20, &hlds__hlds_out__hlds_out_goal__PredNum_32);
        }
#line 1290 "hlds_out_goal.m"
        {
#line 1290 "hlds_out_goal.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_goal__ProcId_21, &hlds__hlds_out__hlds_out_goal__ProcNum_33);
        }
#line 1291 "hlds_out_goal.m"
        {
#line 1291 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1292 "hlds_out_goal.m"
        {
#line 1292 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% pred id: ");
        }
#line 1293 "hlds_out_goal.m"
        {
#line 1293 "hlds_out_goal.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__PredNum_32);
        }
#line 1294 "hlds_out_goal.m"
        {
#line 1294 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) ", proc id: ");
        }
#line 1295 "hlds_out_goal.m"
        {
#line 1295 "hlds_out_goal.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__ProcNum_33);
        }
#line 1296 "hlds_out_goal.m"
        {
#line 1296 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
        }
#line 1316 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__MaybeUnifyContext_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1317 "hlds_out_goal.m"
          {
#line 1317 "hlds_out_goal.m"
          }
#line 1316 "hlds_out_goal.m"
        else
#line 1298 "hlds_out_goal.m"
          {
#line 1298 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__CallUnifyContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeUnifyContext_24, (MR_Integer) 0)));
#line 1298 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CallUnifyContext_34, (MR_Integer) 0)));
#line 1298 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__VarType_39;
#line 1298 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__RHS_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CallUnifyContext_34, (MR_Integer) 1)));
#line 1298 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_42;
#line 1307 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal___UnifyContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CallUnifyContext_34, (MR_Integer) 2)));

#line 1303 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__TypeQual_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1305 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__VarType_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1303 "hlds_out_goal.m"
            else
#line 1300 "hlds_out_goal.m"
              {
#line 1300 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__VarTypes_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_18, (MR_Integer) 1)));
#line 1300 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__UniType_38;
#line 1300 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_18, (MR_Integer) 0)));

#line 1301 "hlds_out_goal.m"
                {
#line 1301 "hlds_out_goal.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(hlds__hlds_out__hlds_out_goal__VarTypes_36, hlds__hlds_out__hlds_out_goal__Var_37, &hlds__hlds_out__hlds_out_goal__UniType_38);
                }
#line 1302 "hlds_out_goal.m"
                {
#line 1302 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__VarType_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__VarType_39, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__UniType_38));
#line 1302 "hlds_out_goal.m"
                }
#line 1300 "hlds_out_goal.m"
              }
#line 1308 "hlds_out_goal.m"
            {
#line 1308 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 1309 "hlds_out_goal.m"
            {
#line 1309 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% unify context: ");
            }
#line 1310 "hlds_out_goal.m"
            {
#line 1310 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Var_37);
            }
#line 1311 "hlds_out_goal.m"
            {
#line 1311 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) " = ");
            }
#line 1313 "hlds_out_goal.m"
            {
#line 1313 "hlds_out_goal.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_goal__InstVarSet_42);
            }
#line 1314 "hlds_out_goal.m"
            {
#line 1314 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__RHS_40, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_42, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__VarType_39, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 1314 "hlds_out_goal.m"
              return;
            }
#line 1298 "hlds_out_goal.m"
          }
#line 1289 "hlds_out_goal.m"
      }
#line 1319 "hlds_out_goal.m"
    else
#line 1317 "hlds_out_goal.m"
      {
#line 1317 "hlds_out_goal.m"
      }
#line 1248 "hlds_out_goal.m"
  }
#line 1242 "hlds_out_goal.m"
}

#line 910 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_p_0(
#line 910 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_12,
#line 910 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_13,
#line 910 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
#line 910 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
#line 910 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_16,
#line 910 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_17,
#line 910 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_18,
#line 910 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeType_19,
#line 910 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_20)
#line 910 "hlds_out_goal.m"
{
#line 917 "hlds_out_goal.m"
  {
#line 917 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 917 "hlds_out_goal.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__RHS_13)) == (MR_mktag((MR_Integer) 1))))
#line 920 "hlds_out_goal.m"
      {
#line 920 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ConsId0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 0)));
#line 920 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__IsExistConstruct_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 1)));
#line 920 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 2)));
#line 920 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ConsId_30;
#line 927 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__SymName0_26;
#line 927 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__Arity_27;
#line 927 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtor_28;
#line 938 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Type_31;
#line 938 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TVarSet_32;
#line 934 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_33_33;

#line 922 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__IsExistConstruct_24 == (MR_Integer) 1);
#line 922 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 922 "hlds_out_goal.m"
          {
#line 923 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ConsId0_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_23, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 923 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 923 "hlds_out_goal.m"
              {
#line 923 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__SymName0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_23, (MR_Integer) 1)));
#line 923 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_23, (MR_Integer) 2)));
#line 923 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__TypeCtor_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_23, (MR_Integer) 3)));
#line 923 "hlds_out_goal.m"
              }
#line 922 "hlds_out_goal.m"
          }
#line 927 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 925 "hlds_out_goal.m"
          {
#line 925 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__SymName_29;

#line 925 "hlds_out_goal.m"
            {
#line 925 "hlds_out_goal.m"
              parse_tree__prog_type__add_new_prefix_2_p_0(hlds__hlds_out__hlds_out_goal__SymName0_26, &hlds__hlds_out__hlds_out_goal__SymName_29);
            }
#line 926 "hlds_out_goal.m"
            {
#line 926 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__ConsId_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 926 "hlds_out_goal.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 926 "hlds_out_goal.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__SymName_29));
#line 926 "hlds_out_goal.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_30, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Arity_27));
#line 926 "hlds_out_goal.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_30, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__TypeCtor_28));
#line 926 "hlds_out_goal.m"
            }
#line 925 "hlds_out_goal.m"
          }
#line 927 "hlds_out_goal.m"
        else
#line 928 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ConsId_30 = hlds__hlds_out__hlds_out_goal__ConsId0_23;
#line 930 "hlds_out_goal.m"
        {
#line 930 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_p_0(hlds__hlds_out__hlds_out_goal__ConsId_30, hlds__hlds_out__hlds_out_goal__ArgVars_25, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_17);
        }
#line 933 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeType_19)) == (MR_mktag((MR_Integer) 1)));
#line 933 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 933 "hlds_out_goal.m"
          {
#line 933 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeType_19, (MR_Integer) 0)));
#line 934 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__TypeQual_20)) == (MR_mktag((MR_Integer) 1)));
#line 934 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 934 "hlds_out_goal.m"
              {
#line 934 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__TVarSet_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_20, (MR_Integer) 0)));
#line 934 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_20, (MR_Integer) 1)));
#line 934 "hlds_out_goal.m"
              }
#line 933 "hlds_out_goal.m"
          }
#line 938 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 936 "hlds_out_goal.m"
          {
#line 936 "hlds_out_goal.m"
            {
#line 936 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) " : ");
            }
#line 937 "hlds_out_goal.m"
            {
#line 937 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_goal__TVarSet_32, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__Type_31);
#line 937 "hlds_out_goal.m"
              return;
            }
#line 936 "hlds_out_goal.m"
          }
#line 938 "hlds_out_goal.m"
        else
#line 937 "hlds_out_goal.m"
          {
#line 937 "hlds_out_goal.m"
          }
#line 920 "hlds_out_goal.m"
      }
#line 917 "hlds_out_goal.m"
    else
#line 917 "hlds_out_goal.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__RHS_13)) == (MR_mktag((MR_Integer) 2))))
#line 943 "hlds_out_goal.m"
        {
#line 943 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Purity_34 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 943 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Groundness_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 943 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__PredOrFunc_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 943 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__NonLocals_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 2)));
#line 943 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Vars_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 3)));
#line 943 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Modes_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 4)));
#line 943 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Det_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 5)));
#line 943 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Goal_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 6)));
#line 943 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__Indent1_43 = (hlds__hlds_out__hlds_out_goal__Indent_18 + (MR_Integer) 1);
#line 943 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_53;
#line 1012 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Type_134;
#line 1012 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TVarSet_135;
#line 1008 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_52_52;
#line 1015 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__V_139_139;
#line 1015 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_140_140;
#line 1015 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_141_141;
#line 1015 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_142_142;

#line 945 "hlds_out_goal.m"
          {
#line 945 "hlds_out_goal.m"
            parse_tree__prog_out__write_purity_prefix_3_p_0(hlds__hlds_out__hlds_out_goal__Purity_34);
          }
#line 973 "hlds_out_goal.m"
          if ((hlds__hlds_out__hlds_out_goal__Groundness_35 == (MR_Integer) 1))
#line 973 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__PredOrFunc_36 == (MR_Integer) 1))
#line 974 "hlds_out_goal.m"
              {
#line 974 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_47;
#line 974 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__RetMode_48;
#line 974 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__RetVar_49;
#line 974 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_79_79;
#line 974 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_131;
#line 982 "hlds_out_goal.m"
                MR_Box hlds__hlds_out__hlds_out_goal__conv0_RetMode_48;
#line 983 "hlds_out_goal.m"
                MR_Box hlds__hlds_out__hlds_out_goal__conv1_RetVar_49;

#line 982 "hlds_out_goal.m"
                {
#line 982 "hlds_out_goal.m"
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_goal__Modes_40, &hlds__hlds_out__hlds_out_goal__ArgModes_47, &hlds__hlds_out__hlds_out_goal__conv0_RetMode_48);
                }
#line 982 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__RetMode_48 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv0_RetMode_48);
#line 983 "hlds_out_goal.m"
                {
#line 983 "hlds_out_goal.m"
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], hlds__hlds_out__hlds_out_goal__Vars_39, &hlds__hlds_out__hlds_out_goal__ArgVars_131, &hlds__hlds_out__hlds_out_goal__conv1_RetVar_49);
                }
#line 983 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__RetVar_49 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv1_RetVar_49);
#line 984 "hlds_out_goal.m"
                {
#line 984 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "(");
                }
#line 988 "hlds_out_goal.m"
                if ((hlds__hlds_out__hlds_out_goal__ArgVars_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 986 "hlds_out_goal.m"
                  {
#line 987 "hlds_out_goal.m"
                    {
#line 987 "hlds_out_goal.m"
                      mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[5]));
                    }
#line 986 "hlds_out_goal.m"
                  }
#line 988 "hlds_out_goal.m"
                else
#line 989 "hlds_out_goal.m"
                  {
#line 990 "hlds_out_goal.m"
                    {
#line 990 "hlds_out_goal.m"
                      mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[7]));
                    }
#line 991 "hlds_out_goal.m"
                    {
#line 991 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(hlds__hlds_out__hlds_out_goal__ArgVars_131, hlds__hlds_out__hlds_out_goal__ArgModes_47, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__InstVarSet_16, hlds__hlds_out__hlds_out_goal__AppendVarNums_17);
                    }
#line 993 "hlds_out_goal.m"
                    {
#line 993 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 989 "hlds_out_goal.m"
                  }
#line 995 "hlds_out_goal.m"
                {
#line 995 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " = (");
                }
#line 997 "hlds_out_goal.m"
                {
#line 997 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 997 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_79_79, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__RetVar_49));
#line 997 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_79_79, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__RetMode_48));
#line 997 "hlds_out_goal.m"
                }
#line 996 "hlds_out_goal.m"
                {
#line 996 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__InstVarSet_16, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__V_79_79);
                }
#line 998 "hlds_out_goal.m"
                {
#line 998 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) ") is ");
                }
#line 999 "hlds_out_goal.m"
                {
#line 999 "hlds_out_goal.m"
                  parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(hlds__hlds_out__hlds_out_goal__Det_41);
                }
#line 1000 "hlds_out_goal.m"
                {
#line 1000 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " :-\n");
                }
#line 1001 "hlds_out_goal.m"
                {
#line 1001 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_12, hlds__hlds_out__hlds_out_goal__Goal_42, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__Indent1_43, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_20);
                }
#line 1003 "hlds_out_goal.m"
                {
#line 1003 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                }
#line 1004 "hlds_out_goal.m"
                {
#line 1004 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) ")\n");
                }
#line 974 "hlds_out_goal.m"
              }
#line 973 "hlds_out_goal.m"
            else
#line 947 "hlds_out_goal.m"
              {
#line 955 "hlds_out_goal.m"
                {
#line 955 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "(");
                }
#line 959 "hlds_out_goal.m"
                if ((hlds__hlds_out__hlds_out_goal__Vars_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "hlds_out_goal.m"
                  {
#line 958 "hlds_out_goal.m"
                    {
#line 958 "hlds_out_goal.m"
                      mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[9]));
                    }
#line 957 "hlds_out_goal.m"
                  }
#line 959 "hlds_out_goal.m"
                else
#line 960 "hlds_out_goal.m"
                  {
#line 961 "hlds_out_goal.m"
                    {
#line 961 "hlds_out_goal.m"
                      mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[10]));
                    }
#line 962 "hlds_out_goal.m"
                    {
#line 962 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(hlds__hlds_out__hlds_out_goal__Vars_39, hlds__hlds_out__hlds_out_goal__Modes_40, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__InstVarSet_16, hlds__hlds_out__hlds_out_goal__AppendVarNums_17);
                    }
#line 964 "hlds_out_goal.m"
                    {
#line 964 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 960 "hlds_out_goal.m"
                  }
#line 966 "hlds_out_goal.m"
                {
#line 966 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " is ");
                }
#line 967 "hlds_out_goal.m"
                {
#line 967 "hlds_out_goal.m"
                  parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(hlds__hlds_out__hlds_out_goal__Det_41);
                }
#line 968 "hlds_out_goal.m"
                {
#line 968 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " :-\n");
                }
#line 969 "hlds_out_goal.m"
                {
#line 969 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_12, hlds__hlds_out__hlds_out_goal__Goal_42, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__Indent1_43, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_20);
                }
#line 971 "hlds_out_goal.m"
                {
#line 971 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                }
#line 972 "hlds_out_goal.m"
                {
#line 972 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) ")\n");
                }
#line 947 "hlds_out_goal.m"
              }
#line 973 "hlds_out_goal.m"
          else
#line 973 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__PredOrFunc_36 == (MR_Integer) 1))
#line 974 "hlds_out_goal.m"
              {
#line 974 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_179;
#line 974 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__RetMode_180;
#line 974 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__RetVar_181;
#line 974 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_202_202;
#line 974 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_213;
#line 982 "hlds_out_goal.m"
                MR_Box hlds__hlds_out__hlds_out_goal__conv2_RetMode_180;
#line 983 "hlds_out_goal.m"
                MR_Box hlds__hlds_out__hlds_out_goal__conv3_RetVar_181;

#line 982 "hlds_out_goal.m"
                {
#line 982 "hlds_out_goal.m"
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_goal__Modes_40, &hlds__hlds_out__hlds_out_goal__ArgModes_179, &hlds__hlds_out__hlds_out_goal__conv2_RetMode_180);
                }
#line 982 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__RetMode_180 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv2_RetMode_180);
#line 983 "hlds_out_goal.m"
                {
#line 983 "hlds_out_goal.m"
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], hlds__hlds_out__hlds_out_goal__Vars_39, &hlds__hlds_out__hlds_out_goal__ArgVars_213, &hlds__hlds_out__hlds_out_goal__conv3_RetVar_181);
                }
#line 983 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__RetVar_181 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv3_RetVar_181);
#line 984 "hlds_out_goal.m"
                {
#line 984 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "(");
                }
#line 988 "hlds_out_goal.m"
                if ((hlds__hlds_out__hlds_out_goal__ArgVars_213 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 986 "hlds_out_goal.m"
                  {
#line 987 "hlds_out_goal.m"
                    {
#line 987 "hlds_out_goal.m"
                      mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[12]));
                    }
#line 986 "hlds_out_goal.m"
                  }
#line 988 "hlds_out_goal.m"
                else
#line 989 "hlds_out_goal.m"
                  {
#line 990 "hlds_out_goal.m"
                    {
#line 990 "hlds_out_goal.m"
                      mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[13]));
                    }
#line 991 "hlds_out_goal.m"
                    {
#line 991 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(hlds__hlds_out__hlds_out_goal__ArgVars_213, hlds__hlds_out__hlds_out_goal__ArgModes_179, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__InstVarSet_16, hlds__hlds_out__hlds_out_goal__AppendVarNums_17);
                    }
#line 993 "hlds_out_goal.m"
                    {
#line 993 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 989 "hlds_out_goal.m"
                  }
#line 995 "hlds_out_goal.m"
                {
#line 995 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " = (");
                }
#line 997 "hlds_out_goal.m"
                {
#line 997 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_202_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 997 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_202_202, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__RetVar_181));
#line 997 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_202_202, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__RetMode_180));
#line 997 "hlds_out_goal.m"
                }
#line 996 "hlds_out_goal.m"
                {
#line 996 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__InstVarSet_16, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__V_202_202);
                }
#line 998 "hlds_out_goal.m"
                {
#line 998 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) ") is ");
                }
#line 999 "hlds_out_goal.m"
                {
#line 999 "hlds_out_goal.m"
                  parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(hlds__hlds_out__hlds_out_goal__Det_41);
                }
#line 1000 "hlds_out_goal.m"
                {
#line 1000 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " :-\n");
                }
#line 1001 "hlds_out_goal.m"
                {
#line 1001 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_12, hlds__hlds_out__hlds_out_goal__Goal_42, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__Indent1_43, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_20);
                }
#line 1003 "hlds_out_goal.m"
                {
#line 1003 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                }
#line 1004 "hlds_out_goal.m"
                {
#line 1004 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) ")\n");
                }
#line 974 "hlds_out_goal.m"
              }
#line 973 "hlds_out_goal.m"
            else
#line 947 "hlds_out_goal.m"
              {
#line 955 "hlds_out_goal.m"
                {
#line 955 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "(");
                }
#line 959 "hlds_out_goal.m"
                if ((hlds__hlds_out__hlds_out_goal__Vars_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "hlds_out_goal.m"
                  {
#line 958 "hlds_out_goal.m"
                    {
#line 958 "hlds_out_goal.m"
                      mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[15]));
                    }
#line 957 "hlds_out_goal.m"
                  }
#line 959 "hlds_out_goal.m"
                else
#line 960 "hlds_out_goal.m"
                  {
#line 961 "hlds_out_goal.m"
                    {
#line 961 "hlds_out_goal.m"
                      mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[16]));
                    }
#line 962 "hlds_out_goal.m"
                    {
#line 962 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(hlds__hlds_out__hlds_out_goal__Vars_39, hlds__hlds_out__hlds_out_goal__Modes_40, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__InstVarSet_16, hlds__hlds_out__hlds_out_goal__AppendVarNums_17);
                    }
#line 964 "hlds_out_goal.m"
                    {
#line 964 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 960 "hlds_out_goal.m"
                  }
#line 966 "hlds_out_goal.m"
                {
#line 966 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " is ");
                }
#line 967 "hlds_out_goal.m"
                {
#line 967 "hlds_out_goal.m"
                  parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(hlds__hlds_out__hlds_out_goal__Det_41);
                }
#line 968 "hlds_out_goal.m"
                {
#line 968 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " :-\n");
                }
#line 969 "hlds_out_goal.m"
                {
#line 969 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_12, hlds__hlds_out__hlds_out_goal__Goal_42, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__Indent1_43, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_20);
                }
#line 971 "hlds_out_goal.m"
                {
#line 971 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                }
#line 972 "hlds_out_goal.m"
                {
#line 972 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) ")\n");
                }
#line 947 "hlds_out_goal.m"
              }
#line 1007 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeType_19)) == (MR_mktag((MR_Integer) 1)));
#line 1007 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1007 "hlds_out_goal.m"
            {
#line 1007 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__Type_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeType_19, (MR_Integer) 0)));
#line 1008 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__TypeQual_20)) == (MR_mktag((MR_Integer) 1)));
#line 1008 "hlds_out_goal.m"
              if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1008 "hlds_out_goal.m"
                {
#line 1008 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__TVarSet_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_20, (MR_Integer) 0)));
#line 1008 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_20, (MR_Integer) 1)));
#line 1008 "hlds_out_goal.m"
                }
#line 1007 "hlds_out_goal.m"
            }
#line 1012 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1010 "hlds_out_goal.m"
            {
#line 1010 "hlds_out_goal.m"
              {
#line 1010 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) " : ");
              }
#line 1011 "hlds_out_goal.m"
              {
#line 1011 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_goal__TVarSet_135, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__Type_134);
              }
#line 1010 "hlds_out_goal.m"
            }
#line 1012 "hlds_out_goal.m"
          else
#line 1011 "hlds_out_goal.m"
            {
#line 1011 "hlds_out_goal.m"
            }
#line 1015 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__DumpOptions_53 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 0)));
#line 1015 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_139_139 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 1)));
#line 1015 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 2)));
#line 1015 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 3)));
#line 1015 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 4)));
#line 1016 "hlds_out_goal.m"
          {
#line 1016 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_53, (MR_Char) 110);
          }
#line 1025 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1022 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__NonLocals_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1023 "hlds_out_goal.m"
              {
#line 1023 "hlds_out_goal.m"
              }
#line 1022 "hlds_out_goal.m"
            else
#line 1018 "hlds_out_goal.m"
              {
#line 1019 "hlds_out_goal.m"
                {
#line 1019 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent1_43);
                }
#line 1020 "hlds_out_goal.m"
                {
#line 1020 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% lambda nonlocals: ");
                }
#line 1021 "hlds_out_goal.m"
                {
#line 1021 "hlds_out_goal.m"
                  parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__NonLocals_38);
#line 1021 "hlds_out_goal.m"
                  return;
                }
#line 1018 "hlds_out_goal.m"
              }
#line 1025 "hlds_out_goal.m"
          else
#line 1023 "hlds_out_goal.m"
            {
#line 1023 "hlds_out_goal.m"
            }
#line 943 "hlds_out_goal.m"
        }
#line 917 "hlds_out_goal.m"
      else
#line 917 "hlds_out_goal.m"
        {
#line 917 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 0)));

#line 918 "hlds_out_goal.m"
          {
#line 918 "hlds_out_goal.m"
            parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__Var_22);
#line 918 "hlds_out_goal.m"
            return;
          }
#line 917 "hlds_out_goal.m"
        }
#line 917 "hlds_out_goal.m"
  }
#line 910 "hlds_out_goal.m"
}

#line 900 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(
#line 900 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_13,
#line 900 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_14,
#line 900 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_15,
#line 900 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_16,
#line 900 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_17,
#line 900 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_18,
#line 900 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_19,
#line 900 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_20,
#line 900 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeType_21,
#line 900 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_22)
#line 900 "hlds_out_goal.m"
{
#line 905 "hlds_out_goal.m"
  {
#line 905 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 906 "hlds_out_goal.m"
    {
#line 906 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_p_0(hlds__hlds_out__hlds_out_goal__Info_13, hlds__hlds_out__hlds_out_goal__RHS_14, hlds__hlds_out__hlds_out_goal__ModuleInfo_15, hlds__hlds_out__hlds_out_goal__VarSet_16, hlds__hlds_out__hlds_out_goal__InstVarSet_17, hlds__hlds_out__hlds_out_goal__AppendVarNums_18, hlds__hlds_out__hlds_out_goal__Indent_19, hlds__hlds_out__hlds_out_goal__MaybeType_21, hlds__hlds_out__hlds_out_goal__TypeQual_22);
    }
#line 908 "hlds_out_goal.m"
    {
#line 908 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_20);
#line 908 "hlds_out_goal.m"
      return;
    }
#line 905 "hlds_out_goal.m"
  }
#line 900 "hlds_out_goal.m"
}

#line 849 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_unify_10_p_0(
#line 849 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 849 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 849 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 849 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 849 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 849 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 849 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 849 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 849 "hlds_out_goal.m"
{
#line 855 "hlds_out_goal.m"
  {
#line 855 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 855 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__LHS_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 0)));
#line 855 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__RHS_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));
#line 855 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Unification_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 3)));
#line 855 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_25 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 855 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__VarType_29;
#line 855 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_30;
#line 856 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 2)));
#line 856 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 4)));
#line 857 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 857 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 857 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 857 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));

#line 858 "hlds_out_goal.m"
    {
#line 858 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 859 "hlds_out_goal.m"
    {
#line 859 "hlds_out_goal.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__LHS_20);
    }
#line 860 "hlds_out_goal.m"
    {
#line 860 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
#line 865 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__TypeQual_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__VarType_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 865 "hlds_out_goal.m"
    else
#line 862 "hlds_out_goal.m"
      {
#line 862 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__VarTypes_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_18, (MR_Integer) 1)));
#line 862 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__UniType_28;
#line 862 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_18, (MR_Integer) 0)));

#line 863 "hlds_out_goal.m"
        {
#line 863 "hlds_out_goal.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(hlds__hlds_out__hlds_out_goal__VarTypes_27, hlds__hlds_out__hlds_out_goal__LHS_20, &hlds__hlds_out__hlds_out_goal__UniType_28);
        }
#line 864 "hlds_out_goal.m"
        {
#line 864 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__VarType_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__VarType_29, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__UniType_28));
#line 864 "hlds_out_goal.m"
        }
#line 862 "hlds_out_goal.m"
      }
#line 870 "hlds_out_goal.m"
    {
#line 870 "hlds_out_goal.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_goal__InstVarSet_30);
    }
#line 871 "hlds_out_goal.m"
    {
#line 871 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__RHS_21, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_30, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__VarType_29, hlds__hlds_out__hlds_out_goal__TypeQual_18);
    }
#line 874 "hlds_out_goal.m"
    {
#line 874 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 117);
    }
#line 875 "hlds_out_goal.m"
    if (!(hlds__hlds_out__hlds_out_goal__succeeded))
#line 875 "hlds_out_goal.m"
      {
#line 875 "hlds_out_goal.m"
        {
#line 875 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 112);
        }
#line 875 "hlds_out_goal.m"
      }
#line 891 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 887 "hlds_out_goal.m"
      {
#line 881 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Mode_31;
#line 881 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CanFail_32;
#line 881 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeInfoVars_33;
#line 883 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_43_43;
#line 883 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_44_44;
#line 883 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_45_45;
#line 883 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_46_46;
#line 883 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_47_47;
#line 883 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_48_48;

#line 881 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Unification_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 881 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 881 "hlds_out_goal.m"
          {
#line 881 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_23, (MR_Integer) 1)));
#line 881 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__CanFail_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_23, (MR_Integer) 2)));
#line 881 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__TypeInfoVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_23, (MR_Integer) 3)));
#line 882 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__CanFail_32 == (MR_Integer) 0);
#line 881 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 881 "hlds_out_goal.m"
              {
#line 883 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Mode_31, (MR_Integer) 0)));
#line 883 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Mode_31, (MR_Integer) 1)));
#line 883 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_43_43, (MR_Integer) 0)));
#line 883 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_43_43, (MR_Integer) 1)));
#line 883 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 883 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 883 "hlds_out_goal.m"
                  {
#line 883 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 883 "hlds_out_goal.m"
                    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 883 "hlds_out_goal.m"
                      {
#line 883 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_goal__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_46_46, (MR_Integer) 0)));
#line 883 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_goal__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_46_46, (MR_Integer) 1)));
#line 883 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 883 "hlds_out_goal.m"
                        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 883 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 883 "hlds_out_goal.m"
                      }
#line 883 "hlds_out_goal.m"
                  }
#line 881 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 884 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__TypeInfoVars_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 881 "hlds_out_goal.m"
              }
#line 881 "hlds_out_goal.m"
          }
#line 887 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 884 "hlds_out_goal.m"
          {
#line 884 "hlds_out_goal.m"
          }
#line 887 "hlds_out_goal.m"
        else
#line 888 "hlds_out_goal.m"
          {
#line 888 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Unification_23, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_30, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16);
#line 888 "hlds_out_goal.m"
            return;
          }
#line 887 "hlds_out_goal.m"
      }
#line 891 "hlds_out_goal.m"
    else
#line 888 "hlds_out_goal.m"
      {
#line 888 "hlds_out_goal.m"
      }
#line 855 "hlds_out_goal.m"
  }
#line 849 "hlds_out_goal.m"
}

#line 792 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_expr_10_p_0(
#line 792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 792 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 792 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 792 "hlds_out_goal.m"
{
#line 799 "hlds_out_goal.m"
  {
#line 799 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 799 "hlds_out_goal.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_12)) == (MR_mktag((MR_Integer) 0))))
#line 836 "hlds_out_goal.m"
      {
#line 836 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__write_goal_negation_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 836 "hlds_out_goal.m"
        return;
      }
#line 799 "hlds_out_goal.m"
    else
#line 799 "hlds_out_goal.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_12)) == (MR_mktag((MR_Integer) 2))))
#line 804 "hlds_out_goal.m"
        {
#line 804 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 804 "hlds_out_goal.m"
          return;
        }
#line 799 "hlds_out_goal.m"
      else
#line 799 "hlds_out_goal.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_12)) == (MR_mktag((MR_Integer) 1))))
#line 800 "hlds_out_goal.m"
          {
#line 800 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__write_goal_unify_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 800 "hlds_out_goal.m"
            return;
          }
#line 799 "hlds_out_goal.m"
        else
#line 799 "hlds_out_goal.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 812 "hlds_out_goal.m"
            {
#line 812 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_p_0(hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17);
#line 812 "hlds_out_goal.m"
              return;
            }
#line 799 "hlds_out_goal.m"
          else
#line 799 "hlds_out_goal.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 816 "hlds_out_goal.m"
              {
#line 816 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__write_goal_conj_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 816 "hlds_out_goal.m"
                return;
              }
#line 799 "hlds_out_goal.m"
            else
#line 799 "hlds_out_goal.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 820 "hlds_out_goal.m"
                {
#line 820 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__write_goal_disj_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 820 "hlds_out_goal.m"
                  return;
                }
#line 799 "hlds_out_goal.m"
              else
#line 799 "hlds_out_goal.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 808 "hlds_out_goal.m"
                  {
#line 808 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17);
#line 808 "hlds_out_goal.m"
                    return;
                  }
#line 799 "hlds_out_goal.m"
                else
#line 799 "hlds_out_goal.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 832 "hlds_out_goal.m"
                    {
#line 832 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 832 "hlds_out_goal.m"
                      return;
                    }
#line 799 "hlds_out_goal.m"
                  else
#line 799 "hlds_out_goal.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 828 "hlds_out_goal.m"
                      {
#line 828 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 828 "hlds_out_goal.m"
                        return;
                      }
#line 799 "hlds_out_goal.m"
                    else
#line 799 "hlds_out_goal.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 840 "hlds_out_goal.m"
                        {
#line 840 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 840 "hlds_out_goal.m"
                          return;
                        }
#line 799 "hlds_out_goal.m"
                      else
#line 824 "hlds_out_goal.m"
                        {
#line 824 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 824 "hlds_out_goal.m"
                          return;
                        }
#line 799 "hlds_out_goal.m"
  }
#line 792 "hlds_out_goal.m"
}

#line 741 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(
#line 741 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ShortDescription_6,
#line 741 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 741 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarnums_8)
#line 741 "hlds_out_goal.m"
{
#line 746 "hlds_out_goal.m"
  {
#line 746 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 746 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__ShortDescription_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 746 "hlds_out_goal.m"
      {
#line 747 "hlds_out_goal.m"
        {
#line 747 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "cell died");
#line 747 "hlds_out_goal.m"
          return;
        }
#line 746 "hlds_out_goal.m"
      }
#line 746 "hlds_out_goal.m"
    else
#line 746 "hlds_out_goal.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ShortDescription_6)) == (MR_mktag((MR_Integer) 1))))
#line 749 "hlds_out_goal.m"
        {
#line 749 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 0)));
#line 749 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__IsConditional_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 1)));
#line 749 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 2)));
#line 749 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 3)));

#line 750 "hlds_out_goal.m"
          {
#line 750 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "cell reuse - ");
          }
#line 751 "hlds_out_goal.m"
          {
#line 751 "hlds_out_goal.m"
            parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__AppendVarnums_8, hlds__hlds_out__hlds_out_goal__Var_10);
          }
#line 752 "hlds_out_goal.m"
          {
#line 752 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) " - ");
          }
#line 766 "hlds_out_goal.m"
          if ((hlds__hlds_out__hlds_out_goal__IsConditional_11 == (MR_Integer) 0))
#line 766 "hlds_out_goal.m"
            {
#line 767 "hlds_out_goal.m"
              {
#line 767 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "with condition");
#line 767 "hlds_out_goal.m"
                return;
              }
#line 766 "hlds_out_goal.m"
            }
#line 766 "hlds_out_goal.m"
          else
#line 769 "hlds_out_goal.m"
            {
#line 770 "hlds_out_goal.m"
              {
#line 770 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "always safe");
#line 770 "hlds_out_goal.m"
                return;
              }
#line 769 "hlds_out_goal.m"
            }
#line 749 "hlds_out_goal.m"
        }
#line 746 "hlds_out_goal.m"
      else
#line 755 "hlds_out_goal.m"
        {
#line 755 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__NoClobbers_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 1)));
#line 755 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__IsConditional_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 0)));

#line 756 "hlds_out_goal.m"
          {
#line 756 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "reuse call - ");
          }
#line 766 "hlds_out_goal.m"
          if ((hlds__hlds_out__hlds_out_goal__IsConditional_31 == (MR_Integer) 0))
#line 766 "hlds_out_goal.m"
            {
#line 767 "hlds_out_goal.m"
              {
#line 767 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "with condition");
              }
#line 766 "hlds_out_goal.m"
            }
#line 766 "hlds_out_goal.m"
          else
#line 769 "hlds_out_goal.m"
            {
#line 770 "hlds_out_goal.m"
              {
#line 770 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "always safe");
              }
#line 769 "hlds_out_goal.m"
            }
#line 758 "hlds_out_goal.m"
          {
#line 758 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) ", no clobbers = ");
          }
#line 759 "hlds_out_goal.m"
          {
#line 759 "hlds_out_goal.m"
            mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[2], ((MR_Box) (hlds__hlds_out__hlds_out_goal__NoClobbers_14)));
#line 759 "hlds_out_goal.m"
            return;
          }
#line 755 "hlds_out_goal.m"
        }
#line 746 "hlds_out_goal.m"
  }
#line 741 "hlds_out_goal.m"
}

#line 730 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(
#line 730 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_1,
#line 730 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_2,
#line 730 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__3_3)
#line 730 "hlds_out_goal.m"
{
#line 733 "hlds_out_goal.m"
  while (MR_TRUE)
#line 733 "hlds_out_goal.m"
    {
#line 733 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 733 "hlds_out_goal.m"
      {
#line 733 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 733 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 733 "hlds_out_goal.m"
          {
#line 733 "hlds_out_goal.m"
          }
#line 733 "hlds_out_goal.m"
        else
#line 733 "hlds_out_goal.m"
          {
#line 733 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__3_3, (MR_Integer) 1)));
#line 733 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__3_3, (MR_Integer) 0)));

#line 733 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 734 "hlds_out_goal.m"
              {
#line 735 "hlds_out_goal.m"
                {
#line 735 "hlds_out_goal.m"
                  parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__AppendVarNums_2, hlds__hlds_out__hlds_out_goal__V_36_36);
#line 735 "hlds_out_goal.m"
                  return;
                }
#line 734 "hlds_out_goal.m"
              }
#line 733 "hlds_out_goal.m"
            else
#line 736 "hlds_out_goal.m"
              {
#line 736 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_66_66;
#line 736 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_67_67;

#line 737 "hlds_out_goal.m"
                {
#line 737 "hlds_out_goal.m"
                  parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__AppendVarNums_2, hlds__hlds_out__hlds_out_goal__V_36_36);
                }
#line 738 "hlds_out_goal.m"
                {
#line 738 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 734 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_35_35, (MR_Integer) 0)));
#line 734 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_35_35, (MR_Integer) 1)));
#line 733 "hlds_out_goal.m"
                if ((hlds__hlds_out__hlds_out_goal__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 734 "hlds_out_goal.m"
                  {
#line 735 "hlds_out_goal.m"
                    {
#line 735 "hlds_out_goal.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__AppendVarNums_2, hlds__hlds_out__hlds_out_goal__V_67_67);
#line 735 "hlds_out_goal.m"
                      return;
                    }
#line 734 "hlds_out_goal.m"
                  }
#line 733 "hlds_out_goal.m"
                else
#line 736 "hlds_out_goal.m"
                  {
#line 737 "hlds_out_goal.m"
                    {
#line 737 "hlds_out_goal.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__AppendVarNums_2, hlds__hlds_out__hlds_out_goal__V_67_67);
                    }
#line 738 "hlds_out_goal.m"
                    {
#line 738 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 739 "hlds_out_goal.m"
                    /* direct tailcall eliminated */
#line 739 "hlds_out_goal.m"
                    {
#line 739 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_goal__V_66_66;

#line 739 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__HeadVar__3_3 = hlds__hlds_out__hlds_out_goal__HeadVar__3__tmp_copy_3;
#line 739 "hlds_out_goal.m"
                    }
#line 739 "hlds_out_goal.m"
                    continue;
#line 736 "hlds_out_goal.m"
                  }
#line 736 "hlds_out_goal.m"
              }
#line 733 "hlds_out_goal.m"
          }
#line 733 "hlds_out_goal.m"
      }
#line 733 "hlds_out_goal.m"
      break;
#line 733 "hlds_out_goal.m"
    }
#line 730 "hlds_out_goal.m"
}

#line 718 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_p_0(
#line 718 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_6,
#line 718 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 718 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_8)
#line 718 "hlds_out_goal.m"
{
#line 724 "hlds_out_goal.m"
  {
#line 724 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 722 "hlds_out_goal.m"
    {
#line 722 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_6);
    }
#line 724 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 723 "hlds_out_goal.m"
      {
#line 723 "hlds_out_goal.m"
        {
#line 723 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "unreachable");
#line 723 "hlds_out_goal.m"
          return;
        }
#line 723 "hlds_out_goal.m"
      }
#line 724 "hlds_out_goal.m"
    else
#line 725 "hlds_out_goal.m"
      {
#line 725 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__AssocList_10;
#line 725 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Vars_11;

#line 725 "hlds_out_goal.m"
        {
#line 725 "hlds_out_goal.m"
          hlds__instmap__instmap_delta_to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_6, &hlds__hlds_out__hlds_out_goal__AssocList_10);
        }
#line 726 "hlds_out_goal.m"
        {
#line 726 "hlds_out_goal.m"
          mercury__assoc_list__keys_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__hlds_out__hlds_out_goal__AssocList_10, &hlds__hlds_out__hlds_out_goal__Vars_11);
        }
#line 727 "hlds_out_goal.m"
        {
#line 727 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__AppendVarNums_8, hlds__hlds_out__hlds_out_goal__Vars_11);
#line 727 "hlds_out_goal.m"
          return;
        }
#line 725 "hlds_out_goal.m"
      }
#line 724 "hlds_out_goal.m"
  }
#line 718 "hlds_out_goal.m"
}

#line 707 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_p_0(
#line 707 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_7,
#line 707 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_8,
#line 707 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_9,
#line 707 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_10)
#line 707 "hlds_out_goal.m"
{
#line 713 "hlds_out_goal.m"
  {
#line 713 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 711 "hlds_out_goal.m"
    {
#line 711 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_7);
    }
#line 713 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 712 "hlds_out_goal.m"
      {
#line 712 "hlds_out_goal.m"
        {
#line 712 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "unreachable");
#line 712 "hlds_out_goal.m"
          return;
        }
#line 712 "hlds_out_goal.m"
      }
#line 713 "hlds_out_goal.m"
    else
#line 714 "hlds_out_goal.m"
      {
#line 714 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__AssocList_12;

#line 714 "hlds_out_goal.m"
        {
#line 714 "hlds_out_goal.m"
          hlds__instmap__instmap_delta_to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_7, &hlds__hlds_out__hlds_out_goal__AssocList_12);
        }
#line 715 "hlds_out_goal.m"
        {
#line 715 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_p_0(hlds__hlds_out__hlds_out_goal__AssocList_12, hlds__hlds_out__hlds_out_goal__VarSet_8, hlds__hlds_out__hlds_out_goal__AppendVarNums_9, hlds__hlds_out__hlds_out_goal__Indent_10);
#line 715 "hlds_out_goal.m"
          return;
        }
#line 714 "hlds_out_goal.m"
      }
#line 713 "hlds_out_goal.m"
  }
#line 707 "hlds_out_goal.m"
}

#line 521 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_p_0(
#line 521 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_8,
#line 521 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalInfo_9,
#line 521 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_10,
#line 521 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_11,
#line 521 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_12)
#line 521 "hlds_out_goal.m"
{
#line 524 "hlds_out_goal.m"
  {
#line 524 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 524 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 0)));
#line 525 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_145_145 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 1)));
#line 525 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 2)));
#line 525 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 3)));
#line 525 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 4)));
#line 583 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__StoreMapList_26;
#line 574 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__TypeInfo_152_152;
#line 574 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_153_153;
#line 574 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__StoreMap_25;
#line 577 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_27_27;
#line 577 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_28_28;
#line 628 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30;
#line 587 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeNeedAcrossCall_29;
#line 670 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__NeedInResume_44;
#line 632 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeNeedInResume_43;
#line 684 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__NeedInParConj_55;
#line 674 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeNeedInParConj_54;

#line 526 "hlds_out_goal.m"
    {
#line 526 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 102);
    }
#line 542 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 527 "hlds_out_goal.m"
      {
#line 527 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__MaybeFollowVars_15;

#line 527 "hlds_out_goal.m"
        {
#line 527 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__MaybeFollowVars_15);
        }
#line 539 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__MaybeFollowVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 540 "hlds_out_goal.m"
          {
#line 540 "hlds_out_goal.m"
          }
#line 539 "hlds_out_goal.m"
        else
#line 529 "hlds_out_goal.m"
          {
#line 529 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__FollowVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeFollowVars_15, (MR_Integer) 0)));
#line 529 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__FollowVarsMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__FollowVars_16, (MR_Integer) 0)));
#line 529 "hlds_out_goal.m"
            MR_Integer hlds__hlds_out__hlds_out_goal__NextRegR_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__FollowVars_16, (MR_Integer) 1)));
#line 529 "hlds_out_goal.m"
            MR_Integer hlds__hlds_out__hlds_out_goal__NextRegF_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__FollowVars_16, (MR_Integer) 2)));
#line 529 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__FVlist_20;

#line 531 "hlds_out_goal.m"
            {
#line 531 "hlds_out_goal.m"
              mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, hlds__hlds_out__hlds_out_goal__FollowVarsMap_17, &hlds__hlds_out__hlds_out_goal__FVlist_20);
            }
#line 532 "hlds_out_goal.m"
            {
#line 532 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
            }
#line 533 "hlds_out_goal.m"
            {
#line 533 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% follow vars: r");
            }
#line 534 "hlds_out_goal.m"
            {
#line 534 "hlds_out_goal.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__NextRegR_18);
            }
#line 535 "hlds_out_goal.m"
            {
#line 535 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) ", f");
            }
#line 536 "hlds_out_goal.m"
            {
#line 536 "hlds_out_goal.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__NextRegF_19);
            }
#line 537 "hlds_out_goal.m"
            {
#line 537 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 538 "hlds_out_goal.m"
            {
#line 538 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(hlds__hlds_out__hlds_out_goal__FVlist_20, hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__Indent_12);
            }
#line 529 "hlds_out_goal.m"
          }
#line 527 "hlds_out_goal.m"
      }
#line 542 "hlds_out_goal.m"
    else
#line 540 "hlds_out_goal.m"
      {
#line 540 "hlds_out_goal.m"
      }
#line 545 "hlds_out_goal.m"
    {
#line 545 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 114);
    }
#line 570 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 546 "hlds_out_goal.m"
      {
#line 546 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Resume_21;

#line 546 "hlds_out_goal.m"
        {
#line 546 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__Resume_21);
        }
#line 549 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__Resume_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 548 "hlds_out_goal.m"
          {
#line 548 "hlds_out_goal.m"
          }
#line 549 "hlds_out_goal.m"
        else
#line 550 "hlds_out_goal.m"
          {
#line 550 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_151_151 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 550 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__ResumeVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Resume_21, (MR_Integer) 0)));
#line 550 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Locs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Resume_21, (MR_Integer) 1)));
#line 550 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__ResumeVarList_24;

#line 551 "hlds_out_goal.m"
            {
#line 551 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__ResumeVarList_24 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_151_151, hlds__hlds_out__hlds_out_goal__ResumeVars_22);
            }
#line 552 "hlds_out_goal.m"
            {
#line 552 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
            }
#line 553 "hlds_out_goal.m"
            {
#line 553 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% resume point ");
            }
#line 557 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__Locs_23 == (MR_Integer) 2))
#line 561 "hlds_out_goal.m"
              {
#line 562 "hlds_out_goal.m"
                {
#line 562 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "orig and stack ");
                }
#line 561 "hlds_out_goal.m"
              }
#line 557 "hlds_out_goal.m"
            else
#line 557 "hlds_out_goal.m"
              if ((hlds__hlds_out__hlds_out_goal__Locs_23 == (MR_Integer) 0))
#line 555 "hlds_out_goal.m"
                {
#line 556 "hlds_out_goal.m"
                  {
#line 556 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "orig only ");
                  }
#line 555 "hlds_out_goal.m"
                }
#line 557 "hlds_out_goal.m"
              else
#line 557 "hlds_out_goal.m"
                if ((hlds__hlds_out__hlds_out_goal__Locs_23 == (MR_Integer) 3))
#line 564 "hlds_out_goal.m"
                  {
#line 565 "hlds_out_goal.m"
                    {
#line 565 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "stack and orig ");
                    }
#line 564 "hlds_out_goal.m"
                  }
#line 557 "hlds_out_goal.m"
                else
#line 558 "hlds_out_goal.m"
                  {
#line 559 "hlds_out_goal.m"
                    {
#line 559 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "stack only ");
                    }
#line 558 "hlds_out_goal.m"
                  }
#line 567 "hlds_out_goal.m"
            {
#line 567 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_151_151, hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__ResumeVarList_24);
            }
#line 568 "hlds_out_goal.m"
            {
#line 568 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 550 "hlds_out_goal.m"
          }
#line 546 "hlds_out_goal.m"
      }
#line 570 "hlds_out_goal.m"
    else
#line 568 "hlds_out_goal.m"
      {
#line 568 "hlds_out_goal.m"
      }
#line 574 "hlds_out_goal.m"
    {
#line 574 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 115);
    }
#line 574 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 574 "hlds_out_goal.m"
      {
#line 575 "hlds_out_goal.m"
        {
#line 575 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_store_map_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__StoreMap_25);
        }
#line 8313 "hlds.hlds_out.hlds_out_goal.c"
        hlds__hlds_out__hlds_out_goal__TypeInfo_152_152 = (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0];
#line 8315 "hlds.hlds_out.hlds_out_goal.c"
        hlds__hlds_out__hlds_out_goal__TypeCtorInfo_153_153 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 576 "hlds_out_goal.m"
        {
#line 576 "hlds_out_goal.m"
          mercury__map__to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_152_152, hlds__hlds_out__hlds_out_goal__TypeCtorInfo_153_153, hlds__hlds_out__hlds_out_goal__StoreMap_25, &hlds__hlds_out__hlds_out_goal__StoreMapList_26);
        }
#line 577 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__StoreMapList_26)) == (MR_mktag((MR_Integer) 1)));
#line 577 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 577 "hlds_out_goal.m"
          {
#line 577 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__StoreMapList_26, (MR_Integer) 0)));
#line 577 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__StoreMapList_26, (MR_Integer) 1)));
#line 577 "hlds_out_goal.m"
          }
#line 574 "hlds_out_goal.m"
      }
#line 583 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 579 "hlds_out_goal.m"
      {
#line 579 "hlds_out_goal.m"
        {
#line 579 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 580 "hlds_out_goal.m"
        {
#line 580 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% store map:\n");
        }
#line 581 "hlds_out_goal.m"
        {
#line 581 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(hlds__hlds_out__hlds_out_goal__StoreMapList_26, hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 579 "hlds_out_goal.m"
      }
#line 583 "hlds_out_goal.m"
    else
#line 581 "hlds_out_goal.m"
      {
#line 581 "hlds_out_goal.m"
      }
#line 587 "hlds_out_goal.m"
    {
#line 587 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 115);
    }
#line 587 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 587 "hlds_out_goal.m"
      {
#line 588 "hlds_out_goal.m"
        {
#line 588 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__MaybeNeedAcrossCall_29);
        }
#line 589 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeNeedAcrossCall_29)) == (MR_mktag((MR_Integer) 1)));
#line 589 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 589 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeNeedAcrossCall_29, (MR_Integer) 0)));
#line 587 "hlds_out_goal.m"
      }
#line 628 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 592 "hlds_out_goal.m"
      {
#line 592 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 592 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallForwardSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30, (MR_Integer) 0)));
#line 592 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallResumeSet_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30, (MR_Integer) 1)));
#line 592 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallNondetSet_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30, (MR_Integer) 2)));
#line 592 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallForwardList_34;
#line 592 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallResumeList_35;
#line 592 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallNondetList_36;

#line 593 "hlds_out_goal.m"
        {
#line 593 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__CallForwardList_34 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_154_154, hlds__hlds_out__hlds_out_goal__CallForwardSet_31);
        }
#line 594 "hlds_out_goal.m"
        {
#line 594 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__CallResumeList_35 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_154_154, hlds__hlds_out__hlds_out_goal__CallResumeSet_32);
        }
#line 595 "hlds_out_goal.m"
        {
#line 595 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__CallNondetList_36 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_154_154, hlds__hlds_out__hlds_out_goal__CallNondetSet_33);
        }
#line 596 "hlds_out_goal.m"
        {
#line 596 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 597 "hlds_out_goal.m"
        {
#line 597 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need across call forward vars: ");
        }
#line 601 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__CallForwardList_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 599 "hlds_out_goal.m"
          {
#line 600 "hlds_out_goal.m"
            {
#line 600 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
#line 599 "hlds_out_goal.m"
          }
#line 601 "hlds_out_goal.m"
        else
#line 602 "hlds_out_goal.m"
          {
#line 603 "hlds_out_goal.m"
            {
#line 603 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__CallForwardList_34);
            }
#line 604 "hlds_out_goal.m"
            {
#line 604 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 602 "hlds_out_goal.m"
          }
#line 607 "hlds_out_goal.m"
        {
#line 607 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 608 "hlds_out_goal.m"
        {
#line 608 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need across call resume vars: ");
        }
#line 612 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__CallResumeList_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "hlds_out_goal.m"
          {
#line 611 "hlds_out_goal.m"
            {
#line 611 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
#line 610 "hlds_out_goal.m"
          }
#line 612 "hlds_out_goal.m"
        else
#line 613 "hlds_out_goal.m"
          {
#line 614 "hlds_out_goal.m"
            {
#line 614 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__CallResumeList_35);
            }
#line 615 "hlds_out_goal.m"
            {
#line 615 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 613 "hlds_out_goal.m"
          }
#line 618 "hlds_out_goal.m"
        {
#line 618 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 619 "hlds_out_goal.m"
        {
#line 619 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need across call nondet vars: ");
        }
#line 623 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__CallNondetList_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 621 "hlds_out_goal.m"
          {
#line 622 "hlds_out_goal.m"
            {
#line 622 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
#line 621 "hlds_out_goal.m"
          }
#line 623 "hlds_out_goal.m"
        else
#line 624 "hlds_out_goal.m"
          {
#line 625 "hlds_out_goal.m"
            {
#line 625 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__CallNondetList_36);
            }
#line 626 "hlds_out_goal.m"
            {
#line 626 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 624 "hlds_out_goal.m"
          }
#line 592 "hlds_out_goal.m"
      }
#line 628 "hlds_out_goal.m"
    else
#line 626 "hlds_out_goal.m"
      {
#line 626 "hlds_out_goal.m"
      }
#line 632 "hlds_out_goal.m"
    {
#line 632 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 115);
    }
#line 632 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 632 "hlds_out_goal.m"
      {
#line 633 "hlds_out_goal.m"
        {
#line 633 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__MaybeNeedInResume_43);
        }
#line 634 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeNeedInResume_43)) == (MR_mktag((MR_Integer) 1)));
#line 634 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 634 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__NeedInResume_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeNeedInResume_43, (MR_Integer) 0)));
#line 632 "hlds_out_goal.m"
      }
#line 670 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 637 "hlds_out_goal.m"
      {
#line 637 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_155_155 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 637 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeOnStack_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedInResume_44, (MR_Integer) 0)));
#line 637 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeResumeSet_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedInResume_44, (MR_Integer) 1)));
#line 637 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeNondetSet_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedInResume_44, (MR_Integer) 2)));
#line 637 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeResumeList_48;
#line 637 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeNondetList_49;

#line 638 "hlds_out_goal.m"
        {
#line 638 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ResumeResumeList_48 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_155_155, hlds__hlds_out__hlds_out_goal__ResumeResumeSet_46);
        }
#line 639 "hlds_out_goal.m"
        {
#line 639 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ResumeNondetList_49 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_155_155, hlds__hlds_out__hlds_out_goal__ResumeNondetSet_47);
        }
#line 641 "hlds_out_goal.m"
        {
#line 641 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 645 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__ResumeOnStack_45 == (MR_Integer) 0))
#line 646 "hlds_out_goal.m"
          {
#line 647 "hlds_out_goal.m"
            {
#line 647 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% resume point has no stack label\n");
            }
#line 646 "hlds_out_goal.m"
          }
#line 645 "hlds_out_goal.m"
        else
#line 643 "hlds_out_goal.m"
          {
#line 644 "hlds_out_goal.m"
            {
#line 644 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% resume point has stack label\n");
            }
#line 643 "hlds_out_goal.m"
          }
#line 649 "hlds_out_goal.m"
        {
#line 649 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 650 "hlds_out_goal.m"
        {
#line 650 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need in resume resume vars: ");
        }
#line 654 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__ResumeResumeList_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 652 "hlds_out_goal.m"
          {
#line 653 "hlds_out_goal.m"
            {
#line 653 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
#line 652 "hlds_out_goal.m"
          }
#line 654 "hlds_out_goal.m"
        else
#line 655 "hlds_out_goal.m"
          {
#line 656 "hlds_out_goal.m"
            {
#line 656 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__ResumeResumeList_48);
            }
#line 657 "hlds_out_goal.m"
            {
#line 657 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 655 "hlds_out_goal.m"
          }
#line 660 "hlds_out_goal.m"
        {
#line 660 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 661 "hlds_out_goal.m"
        {
#line 661 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need in resume nondet vars: ");
        }
#line 665 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__ResumeNondetList_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 663 "hlds_out_goal.m"
          {
#line 664 "hlds_out_goal.m"
            {
#line 664 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
#line 663 "hlds_out_goal.m"
          }
#line 665 "hlds_out_goal.m"
        else
#line 666 "hlds_out_goal.m"
          {
#line 667 "hlds_out_goal.m"
            {
#line 667 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__ResumeNondetList_49);
            }
#line 668 "hlds_out_goal.m"
            {
#line 668 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 666 "hlds_out_goal.m"
          }
#line 637 "hlds_out_goal.m"
      }
#line 670 "hlds_out_goal.m"
    else
#line 668 "hlds_out_goal.m"
      {
#line 668 "hlds_out_goal.m"
      }
#line 674 "hlds_out_goal.m"
    {
#line 674 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 115);
    }
#line 674 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 674 "hlds_out_goal.m"
      {
#line 675 "hlds_out_goal.m"
        {
#line 675 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__MaybeNeedInParConj_54);
        }
#line 676 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeNeedInParConj_54)) == (MR_mktag((MR_Integer) 1)));
#line 676 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 676 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__NeedInParConj_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeNeedInParConj_54, (MR_Integer) 0)));
#line 674 "hlds_out_goal.m"
      }
#line 684 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 678 "hlds_out_goal.m"
      {
#line 678 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ParConjSet_56 = (MR_Word) hlds__hlds_out__hlds_out_goal__NeedInParConj_55;
#line 678 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ParConjList_57;

#line 679 "hlds_out_goal.m"
        {
#line 679 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ParConjList_57 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ParConjSet_56);
        }
#line 680 "hlds_out_goal.m"
        {
#line 680 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 681 "hlds_out_goal.m"
        {
#line 681 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need in par_conj vars: ");
        }
#line 682 "hlds_out_goal.m"
        {
#line 682 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__ParConjList_57);
        }
#line 683 "hlds_out_goal.m"
        {
#line 683 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 683 "hlds_out_goal.m"
          return;
        }
#line 678 "hlds_out_goal.m"
      }
#line 684 "hlds_out_goal.m"
    else
#line 683 "hlds_out_goal.m"
      {
#line 683 "hlds_out_goal.m"
      }
#line 524 "hlds_out_goal.m"
  }
#line 521 "hlds_out_goal.m"
}

#line 116 "hlds_out_goal.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(
#line 116 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__VarName_5,
#line 116 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__MainConsName_6,
#line 116 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__OtherConsNames_7)
#line 116 "hlds_out_goal.m"
{
#line 1778 "hlds_out_goal.m"
  {
#line 1778 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1778 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__Comment_8;

#line 1778 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__OtherConsNames_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1778 "hlds_out_goal.m"
      {
#line 1778 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__V_16_16;

#line 1779 "hlds_out_goal.m"
        {
#line 1779 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) " has the functor ", hlds__hlds_out__hlds_out_goal__MainConsName_6);
        }
#line 1779 "hlds_out_goal.m"
        {
#line 1779 "hlds_out_goal.m"
          return hlds__hlds_out__hlds_out_goal__Comment_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__VarName_5, hlds__hlds_out__hlds_out_goal__V_16_16);
        }
#line 1778 "hlds_out_goal.m"
      }
#line 1778 "hlds_out_goal.m"
    else
#line 1781 "hlds_out_goal.m"
      {
#line 1781 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__V_11_11;
#line 1781 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__V_13_13;
#line 1781 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_15_15;

#line 1783 "hlds_out_goal.m"
        {
#line 1783 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1783 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_15_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__MainConsName_6));
#line 1783 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_15_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__OtherConsNames_7));
#line 1783 "hlds_out_goal.m"
        }
#line 1783 "hlds_out_goal.m"
        {
#line 1783 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_13_13 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_goal__V_15_15);
        }
#line 1782 "hlds_out_goal.m"
        {
#line 1782 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) " has one of the functors ", hlds__hlds_out__hlds_out_goal__V_13_13);
        }
#line 1782 "hlds_out_goal.m"
        {
#line 1782 "hlds_out_goal.m"
          return hlds__hlds_out__hlds_out_goal__Comment_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__VarName_5, hlds__hlds_out__hlds_out_goal__V_11_11);
        }
#line 1781 "hlds_out_goal.m"
      }
#line 1778 "hlds_out_goal.m"
    return hlds__hlds_out__hlds_out_goal__Comment_8;
#line 1778 "hlds_out_goal.m"
  }
#line 116 "hlds_out_goal.m"
}

#line 108 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(
#line 108 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TaggedConsId_4,
#line 108 "hlds_out_goal.m"
  MR_String * hlds__hlds_out__hlds_out_goal__ConsName_5,
#line 108 "hlds_out_goal.m"
  MR_Word * hlds__hlds_out__hlds_out_goal__ConsTag_6)
#line 108 "hlds_out_goal.m"
{
#line 1772 "hlds_out_goal.m"
  {
#line 1772 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1772 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__TaggedConsId_4, (MR_Integer) 0)));

#line 1773 "hlds_out_goal.m"
    *hlds__hlds_out__hlds_out_goal__ConsTag_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__TaggedConsId_4, (MR_Integer) 1)));
#line 1774 "hlds_out_goal.m"
    {
#line 1774 "hlds_out_goal.m"
      *hlds__hlds_out__hlds_out_goal__ConsName_5 = hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__ConsId_7);
    }
#line 1772 "hlds_out_goal.m"
  }
#line 108 "hlds_out_goal.m"
}

#line 101 "hlds_out_goal.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(
#line 101 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_6,
#line 101 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_7,
#line 101 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_8,
#line 101 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_9)
#line 101 "hlds_out_goal.m"
{
#line 1032 "hlds_out_goal.m"
  {
#line 1032 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1032 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__Str_10;

#line 1032 "hlds_out_goal.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__RHS_6)) == (MR_mktag((MR_Integer) 1))))
#line 1035 "hlds_out_goal.m"
      {
#line 1035 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ConsId0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_6, (MR_Integer) 0)));
#line 1035 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__IsExistConstruct_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_6, (MR_Integer) 1)));
#line 1035 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_6, (MR_Integer) 2)));
#line 1035 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ConsId_19;
#line 1042 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__SymName0_15;
#line 1042 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__Arity_16;
#line 1042 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtor_17;

#line 1037 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__IsExistConstruct_13 == (MR_Integer) 1);
#line 1037 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1037 "hlds_out_goal.m"
          {
#line 1038 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ConsId0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1038 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1038 "hlds_out_goal.m"
              {
#line 1038 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__SymName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_12, (MR_Integer) 1)));
#line 1038 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_12, (MR_Integer) 2)));
#line 1038 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__TypeCtor_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_12, (MR_Integer) 3)));
#line 1038 "hlds_out_goal.m"
              }
#line 1037 "hlds_out_goal.m"
          }
#line 1042 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1040 "hlds_out_goal.m"
          {
#line 1040 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__SymName_18;

#line 1040 "hlds_out_goal.m"
            {
#line 1040 "hlds_out_goal.m"
              parse_tree__prog_type__add_new_prefix_2_p_0(hlds__hlds_out__hlds_out_goal__SymName0_15, &hlds__hlds_out__hlds_out_goal__SymName_18);
            }
#line 1041 "hlds_out_goal.m"
            {
#line 1041 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__ConsId_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1041 "hlds_out_goal.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1041 "hlds_out_goal.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__SymName_18));
#line 1041 "hlds_out_goal.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_19, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Arity_16));
#line 1041 "hlds_out_goal.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_19, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__TypeCtor_17));
#line 1041 "hlds_out_goal.m"
            }
#line 1040 "hlds_out_goal.m"
          }
#line 1042 "hlds_out_goal.m"
        else
#line 1043 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ConsId_19 = hlds__hlds_out__hlds_out_goal__ConsId0_12;
#line 1045 "hlds_out_goal.m"
        {
#line 1045 "hlds_out_goal.m"
          return hlds__hlds_out__hlds_out_goal__Str_10 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_goal__ConsId_19, hlds__hlds_out__hlds_out_goal__ArgVars_14, hlds__hlds_out__hlds_out_goal__VarSet_8, hlds__hlds_out__hlds_out_goal__ModuleInfo_7, hlds__hlds_out__hlds_out_goal__AppendVarNums_9);
        }
#line 1035 "hlds_out_goal.m"
      }
#line 1032 "hlds_out_goal.m"
    else
#line 1032 "hlds_out_goal.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__RHS_6)) == (MR_mktag((MR_Integer) 2))))
#line 1049 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__Str_10 = (MR_String) "lambda goal";
#line 1032 "hlds_out_goal.m"
      else
#line 1032 "hlds_out_goal.m"
        {
#line 1032 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RHS_6, (MR_Integer) 0)));

#line 1033 "hlds_out_goal.m"
          {
#line 1033 "hlds_out_goal.m"
            return hlds__hlds_out__hlds_out_goal__Str_10 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_8, hlds__hlds_out__hlds_out_goal__AppendVarNums_9, hlds__hlds_out__hlds_out_goal__Var_11);
          }
#line 1032 "hlds_out_goal.m"
        }
#line 1032 "hlds_out_goal.m"
    return hlds__hlds_out__hlds_out_goal__Str_10;
#line 1032 "hlds_out_goal.m"
  }
#line 101 "hlds_out_goal.m"
}

#line 92 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_9_p_0(
#line 92 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_10,
#line 92 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_11,
#line 92 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 92 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 92 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_14,
#line 92 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 92 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16)
#line 92 "hlds_out_goal.m"
{
#line 896 "hlds_out_goal.m"
  {
#line 896 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 897 "hlds_out_goal.m"
    {
#line 897 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_p_0(hlds__hlds_out__hlds_out_goal__Info_10, hlds__hlds_out__hlds_out_goal__RHS_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__InstVarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 897 "hlds_out_goal.m"
      return;
    }
#line 896 "hlds_out_goal.m"
  }
#line 92 "hlds_out_goal.m"
}

#line 82 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(
#line 82 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_1,
#line 82 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_2,
#line 82 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_3,
#line 82 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_4)
#line 82 "hlds_out_goal.m"
{
#line 688 "hlds_out_goal.m"
  while (MR_TRUE)
#line 688 "hlds_out_goal.m"
    {
#line 688 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 688 "hlds_out_goal.m"
      {
#line 688 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 688 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 688 "hlds_out_goal.m"
          {
#line 688 "hlds_out_goal.m"
          }
#line 688 "hlds_out_goal.m"
        else
#line 690 "hlds_out_goal.m"
          {
#line 690 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Var_13;
#line 690 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Loc_14;
#line 690 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__VarLocs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__1_1, (MR_Integer) 1)));
#line 690 "hlds_out_goal.m"
            MR_String hlds__hlds_out__hlds_out_goal__LocnStr_20;
#line 690 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__MaybeWidth_21;
#line 690 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__1_1, (MR_Integer) 0)));

#line 689 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_25_25, (MR_Integer) 0)));
#line 689 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Loc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_25_25, (MR_Integer) 1)));
#line 691 "hlds_out_goal.m"
            {
#line 691 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_4);
            }
#line 692 "hlds_out_goal.m"
            {
#line 692 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "%\t");
            }
#line 693 "hlds_out_goal.m"
            {
#line 693 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_2, hlds__hlds_out__hlds_out_goal__AppendVarNums_3, hlds__hlds_out__hlds_out_goal__Var_13);
            }
#line 694 "hlds_out_goal.m"
            {
#line 694 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\t-> ");
            }
#line 695 "hlds_out_goal.m"
            {
#line 695 "hlds_out_goal.m"
              hlds__hlds_llds__abs_locn_to_string_3_p_0(hlds__hlds_out__hlds_out_goal__Loc_14, &hlds__hlds_out__hlds_out_goal__LocnStr_20, &hlds__hlds_out__hlds_out_goal__MaybeWidth_21);
            }
#line 696 "hlds_out_goal.m"
            {
#line 696 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__LocnStr_20);
            }
#line 701 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__MaybeWidth_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 702 "hlds_out_goal.m"
              {
#line 702 "hlds_out_goal.m"
              }
#line 701 "hlds_out_goal.m"
            else
#line 698 "hlds_out_goal.m"
              {
#line 698 "hlds_out_goal.m"
                MR_String hlds__hlds_out__hlds_out_goal__Width_22 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeWidth_21, (MR_Integer) 0)));

#line 699 "hlds_out_goal.m"
                {
#line 699 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " ");
                }
#line 700 "hlds_out_goal.m"
                {
#line 700 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Width_22);
                }
#line 698 "hlds_out_goal.m"
              }
#line 704 "hlds_out_goal.m"
            {
#line 704 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 705 "hlds_out_goal.m"
            /* direct tailcall eliminated */
#line 705 "hlds_out_goal.m"
            {
#line 705 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_goal__VarLocs_15;

#line 705 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__HeadVar__1_1 = hlds__hlds_out__hlds_out_goal__HeadVar__1__tmp_copy_1;
#line 705 "hlds_out_goal.m"
            }
#line 705 "hlds_out_goal.m"
            continue;
#line 690 "hlds_out_goal.m"
          }
#line 688 "hlds_out_goal.m"
      }
#line 688 "hlds_out_goal.m"
      break;
#line 688 "hlds_out_goal.m"
    }
#line 82 "hlds_out_goal.m"
}

#line 73 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(
#line 73 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 73 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goals_12,
#line 73 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 73 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 73 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 73 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 73 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Separator_17,
#line 73 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 73 "hlds_out_goal.m"
{
#line 781 "hlds_out_goal.m"
  while (MR_TRUE)
#line 781 "hlds_out_goal.m"
    {
#line 781 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 781 "hlds_out_goal.m"
      {
#line 781 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 781 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__Goals_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 789 "hlds_out_goal.m"
          {
#line 789 "hlds_out_goal.m"
          }
#line 781 "hlds_out_goal.m"
        else
#line 781 "hlds_out_goal.m"
          {
#line 781 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__HeadGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Goals_12, (MR_Integer) 0)));
#line 781 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TailGoals_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Goals_12, (MR_Integer) 1)));
#line 781 "hlds_out_goal.m"
            MR_Integer hlds__hlds_out__hlds_out_goal__V_26_26;

#line 782 "hlds_out_goal.m"
            {
#line 782 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 783 "hlds_out_goal.m"
            {
#line 783 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Separator_17);
            }
#line 785 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_26_26 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 784 "hlds_out_goal.m"
            {
#line 784 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__HeadGoal_20, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_26_26, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
            }
#line 786 "hlds_out_goal.m"
            /* direct tailcall eliminated */
#line 786 "hlds_out_goal.m"
            {
#line 786 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Goals__tmp_copy_12 = hlds__hlds_out__hlds_out_goal__TailGoals_21;

#line 786 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__Goals_12 = hlds__hlds_out__hlds_out_goal__Goals__tmp_copy_12;
#line 786 "hlds_out_goal.m"
            }
#line 786 "hlds_out_goal.m"
            continue;
#line 781 "hlds_out_goal.m"
          }
#line 781 "hlds_out_goal.m"
      }
#line 781 "hlds_out_goal.m"
      break;
#line 781 "hlds_out_goal.m"
    }
#line 73 "hlds_out_goal.m"
}

#line 475 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_6(
#line 475 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 475 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 475 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 475 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 475 "hlds_out_goal.m"
{
#line 475 "hlds_out_goal.m"
  {
#line 475 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 475 "hlds_out_goal.m"
    {
#line 475 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(((MR_String) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 475 "hlds_out_goal.m"
      return;
    }
#line 475 "hlds_out_goal.m"
  }
#line 475 "hlds_out_goal.m"
}

#line 325 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_5(
#line 325 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 325 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 325 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 325 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 325 "hlds_out_goal.m"
{
#line 325 "hlds_out_goal.m"
  {
#line 325 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 325 "hlds_out_goal.m"
    {
#line 325 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__325__1_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 325 "hlds_out_goal.m"
      return;
    }
#line 325 "hlds_out_goal.m"
  }
#line 325 "hlds_out_goal.m"
}

#line 321 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_4(
#line 321 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 321 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 321 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 321 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 321 "hlds_out_goal.m"
{
#line 321 "hlds_out_goal.m"
  {
#line 321 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 321 "hlds_out_goal.m"
    {
#line 321 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__321__1_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 321 "hlds_out_goal.m"
      return;
    }
#line 321 "hlds_out_goal.m"
  }
#line 321 "hlds_out_goal.m"
}

#line 317 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_3(
#line 317 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 317 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 317 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 317 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 317 "hlds_out_goal.m"
{
#line 317 "hlds_out_goal.m"
  {
#line 317 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 317 "hlds_out_goal.m"
    {
#line 317 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__317__1_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 317 "hlds_out_goal.m"
      return;
    }
#line 317 "hlds_out_goal.m"
  }
#line 317 "hlds_out_goal.m"
}

#line 313 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_2(
#line 313 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 313 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 313 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 313 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 313 "hlds_out_goal.m"
{
#line 313 "hlds_out_goal.m"
  {
#line 313 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 313 "hlds_out_goal.m"
    {
#line 313 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__313__1_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 313 "hlds_out_goal.m"
      return;
    }
#line 313 "hlds_out_goal.m"
  }
#line 313 "hlds_out_goal.m"
}

#line 309 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_1(
#line 309 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 309 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 309 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 309 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 309 "hlds_out_goal.m"
{
#line 309 "hlds_out_goal.m"
  {
#line 309 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 309 "hlds_out_goal.m"
    {
#line 309 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__309__1_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 309 "hlds_out_goal.m"
      return;
    }
#line 309 "hlds_out_goal.m"
  }
#line 309 "hlds_out_goal.m"
}

#line 60 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(
#line 60 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 60 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goal_12,
#line 60 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 60 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 60 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 60 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 60 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 60 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 60 "hlds_out_goal.m"
{
#line 165 "hlds_out_goal.m"
  {
#line 165 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 165 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Goal_12, (MR_Integer) 0)));
#line 165 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Goal_12, (MR_Integer) 1)));
#line 165 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 165 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__CodeGenInfo_80;
#line 169 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_300_300 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 169 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 169 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 169 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));

#line 170 "hlds_out_goal.m"
    {
#line 170 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 99);
    }
#line 184 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 171 "hlds_out_goal.m"
      {
#line 171 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Context_23;
#line 171 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__FileName_24;
#line 171 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__LineNumber_25;

#line 171 "hlds_out_goal.m"
        {
#line 171 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 172 "hlds_out_goal.m"
        {
#line 172 "hlds_out_goal.m"
          mercury__term__context_file_2_p_0(hlds__hlds_out__hlds_out_goal__Context_23, &hlds__hlds_out__hlds_out_goal__FileName_24);
        }
#line 173 "hlds_out_goal.m"
        {
#line 173 "hlds_out_goal.m"
          mercury__term__context_line_2_p_0(hlds__hlds_out__hlds_out_goal__Context_23, &hlds__hlds_out__hlds_out_goal__LineNumber_25);
        }
#line 174 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = (strcmp(hlds__hlds_out__hlds_out_goal__FileName_24, (MR_String) "") == 0);
#line 174 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = !(hlds__hlds_out__hlds_out_goal__succeeded);
#line 181 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 175 "hlds_out_goal.m"
          {
#line 175 "hlds_out_goal.m"
            {
#line 175 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 176 "hlds_out_goal.m"
            {
#line 176 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
            }
#line 177 "hlds_out_goal.m"
            {
#line 177 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__FileName_24);
            }
#line 178 "hlds_out_goal.m"
            {
#line 178 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\', line ");
            }
#line 179 "hlds_out_goal.m"
            {
#line 179 "hlds_out_goal.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__LineNumber_25);
            }
#line 180 "hlds_out_goal.m"
            {
#line 180 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 175 "hlds_out_goal.m"
          }
#line 181 "hlds_out_goal.m"
        else
#line 180 "hlds_out_goal.m"
          {
#line 180 "hlds_out_goal.m"
          }
#line 171 "hlds_out_goal.m"
      }
#line 184 "hlds_out_goal.m"
    else
#line 180 "hlds_out_goal.m"
      {
#line 180 "hlds_out_goal.m"
      }
#line 187 "hlds_out_goal.m"
    {
#line 187 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 80);
    }
#line 198 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 188 "hlds_out_goal.m"
      {
#line 188 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__GoalId_26;
#line 188 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__GoalIdNum_27;

#line 188 "hlds_out_goal.m"
        {
#line 188 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__GoalId_26 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 189 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__GoalIdNum_27 = (MR_Integer) hlds__hlds_out__hlds_out_goal__GoalId_26;
#line 190 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__GoalIdNum_27 < (MR_Integer) 0);
#line 192 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 190 "hlds_out_goal.m"
          {
#line 190 "hlds_out_goal.m"
          }
#line 192 "hlds_out_goal.m"
        else
#line 193 "hlds_out_goal.m"
          {
#line 193 "hlds_out_goal.m"
            {
#line 193 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 194 "hlds_out_goal.m"
            {
#line 194 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% goal id: ");
            }
#line 195 "hlds_out_goal.m"
            {
#line 195 "hlds_out_goal.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__GoalIdNum_27);
            }
#line 196 "hlds_out_goal.m"
            {
#line 196 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 193 "hlds_out_goal.m"
          }
#line 188 "hlds_out_goal.m"
      }
#line 198 "hlds_out_goal.m"
    else
#line 196 "hlds_out_goal.m"
      {
#line 196 "hlds_out_goal.m"
      }
#line 201 "hlds_out_goal.m"
    {
#line 201 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 110);
    }
#line 213 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 202 "hlds_out_goal.m"
      {
#line 202 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_304_304;
#line 202 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__NonLocalsSet_28;
#line 202 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__NonLocalsList_29;

#line 202 "hlds_out_goal.m"
        {
#line 202 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__NonLocalsSet_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 9658 "hlds.hlds_out.hlds_out_goal.c"
        hlds__hlds_out__hlds_out_goal__TypeCtorInfo_304_304 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 203 "hlds_out_goal.m"
        {
#line 203 "hlds_out_goal.m"
          parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_304_304, hlds__hlds_out__hlds_out_goal__NonLocalsSet_28, &hlds__hlds_out__hlds_out_goal__NonLocalsList_29);
        }
#line 210 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__NonLocalsList_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 211 "hlds_out_goal.m"
          {
#line 211 "hlds_out_goal.m"
          }
#line 210 "hlds_out_goal.m"
        else
#line 205 "hlds_out_goal.m"
          {
#line 206 "hlds_out_goal.m"
            {
#line 206 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 207 "hlds_out_goal.m"
            {
#line 207 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% nonlocals: ");
            }
#line 208 "hlds_out_goal.m"
            {
#line 208 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_304_304, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__NonLocalsList_29);
            }
#line 209 "hlds_out_goal.m"
            {
#line 209 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 205 "hlds_out_goal.m"
          }
#line 202 "hlds_out_goal.m"
      }
#line 213 "hlds_out_goal.m"
    else
#line 211 "hlds_out_goal.m"
      {
#line 211 "hlds_out_goal.m"
      }
#line 216 "hlds_out_goal.m"
    {
#line 216 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 112);
    }
#line 241 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 228 "hlds_out_goal.m"
      {
#line 226 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PreDeathList_33;
#line 218 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_305_305;
#line 218 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PreDeaths_32;
#line 220 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_34_34;
#line 220 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_35_35;
#line 238 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PreBirthList_37;
#line 230 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_307_307;
#line 230 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PreBirths_36;
#line 232 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_38_38;
#line 232 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_39_39;

#line 218 "hlds_out_goal.m"
        {
#line 218 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21, &hlds__hlds_out__hlds_out_goal__PreDeaths_32);
        }
#line 218 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 218 "hlds_out_goal.m"
          {
#line 9744 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_305_305 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 219 "hlds_out_goal.m"
            {
#line 219 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__PreDeathList_33 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_305_305, hlds__hlds_out__hlds_out_goal__PreDeaths_32);
            }
#line 220 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PreDeathList_33)) == (MR_mktag((MR_Integer) 1)));
#line 220 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 220 "hlds_out_goal.m"
              {
#line 220 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PreDeathList_33, (MR_Integer) 0)));
#line 220 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PreDeathList_33, (MR_Integer) 1)));
#line 220 "hlds_out_goal.m"
              }
#line 218 "hlds_out_goal.m"
          }
#line 226 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 222 "hlds_out_goal.m"
          {
#line 222 "hlds_out_goal.m"
            {
#line 222 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 223 "hlds_out_goal.m"
            {
#line 223 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% pre-deaths: ");
            }
#line 224 "hlds_out_goal.m"
            {
#line 224 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__PreDeathList_33);
            }
#line 225 "hlds_out_goal.m"
            {
#line 225 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 222 "hlds_out_goal.m"
          }
#line 226 "hlds_out_goal.m"
        else
#line 225 "hlds_out_goal.m"
          {
#line 225 "hlds_out_goal.m"
          }
#line 230 "hlds_out_goal.m"
        {
#line 230 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_births_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21, &hlds__hlds_out__hlds_out_goal__PreBirths_36);
        }
#line 230 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 230 "hlds_out_goal.m"
          {
#line 9806 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_307_307 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 231 "hlds_out_goal.m"
            {
#line 231 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__PreBirthList_37 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_307_307, hlds__hlds_out__hlds_out_goal__PreBirths_36);
            }
#line 232 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PreBirthList_37)) == (MR_mktag((MR_Integer) 1)));
#line 232 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 232 "hlds_out_goal.m"
              {
#line 232 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PreBirthList_37, (MR_Integer) 0)));
#line 232 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PreBirthList_37, (MR_Integer) 1)));
#line 232 "hlds_out_goal.m"
              }
#line 230 "hlds_out_goal.m"
          }
#line 238 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 234 "hlds_out_goal.m"
          {
#line 234 "hlds_out_goal.m"
            {
#line 234 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 235 "hlds_out_goal.m"
            {
#line 235 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% pre-births: ");
            }
#line 236 "hlds_out_goal.m"
            {
#line 236 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__PreBirthList_37);
            }
#line 237 "hlds_out_goal.m"
            {
#line 237 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 234 "hlds_out_goal.m"
          }
#line 238 "hlds_out_goal.m"
        else
#line 237 "hlds_out_goal.m"
          {
#line 237 "hlds_out_goal.m"
          }
#line 228 "hlds_out_goal.m"
      }
#line 241 "hlds_out_goal.m"
    else
#line 237 "hlds_out_goal.m"
      {
#line 237 "hlds_out_goal.m"
      }
#line 244 "hlds_out_goal.m"
    {
#line 244 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 66);
    }
#line 290 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 245 "hlds_out_goal.m"
      {
#line 245 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ProducingVars_40;
#line 245 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ConsumingVars_42;
#line 245 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__MakeVisibleVars_44;
#line 245 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__NeedVisibleVars_46;

#line 245 "hlds_out_goal.m"
        {
#line 245 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ProducingVars_40 = hlds__hlds_goal__producing_vars_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 246 "hlds_out_goal.m"
        {
#line 246 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ProducingVars_40);
        }
#line 252 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 247 "hlds_out_goal.m"
          {
#line 247 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_310_310 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 247 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__ProducingVarsList_41;

#line 247 "hlds_out_goal.m"
            {
#line 247 "hlds_out_goal.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_310_310, hlds__hlds_out__hlds_out_goal__ProducingVars_40, &hlds__hlds_out__hlds_out_goal__ProducingVarsList_41);
            }
#line 248 "hlds_out_goal.m"
            {
#line 248 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 249 "hlds_out_goal.m"
            {
#line 249 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% producing vars: ");
            }
#line 250 "hlds_out_goal.m"
            {
#line 250 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_310_310, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__ProducingVarsList_41);
            }
#line 251 "hlds_out_goal.m"
            {
#line 251 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 247 "hlds_out_goal.m"
          }
#line 252 "hlds_out_goal.m"
        else
#line 251 "hlds_out_goal.m"
          {
#line 251 "hlds_out_goal.m"
          }
#line 256 "hlds_out_goal.m"
        {
#line 256 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ConsumingVars_42 = hlds__hlds_goal__consuming_vars_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 257 "hlds_out_goal.m"
        {
#line 257 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ConsumingVars_42);
        }
#line 263 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 258 "hlds_out_goal.m"
          {
#line 258 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_312_312 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 258 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__ConsumingVarsList_43;

#line 258 "hlds_out_goal.m"
            {
#line 258 "hlds_out_goal.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_312_312, hlds__hlds_out__hlds_out_goal__ConsumingVars_42, &hlds__hlds_out__hlds_out_goal__ConsumingVarsList_43);
            }
#line 259 "hlds_out_goal.m"
            {
#line 259 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 260 "hlds_out_goal.m"
            {
#line 260 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% consuming vars: ");
            }
#line 261 "hlds_out_goal.m"
            {
#line 261 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_312_312, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__ConsumingVarsList_43);
            }
#line 262 "hlds_out_goal.m"
            {
#line 262 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 258 "hlds_out_goal.m"
          }
#line 263 "hlds_out_goal.m"
        else
#line 262 "hlds_out_goal.m"
          {
#line 262 "hlds_out_goal.m"
          }
#line 267 "hlds_out_goal.m"
        {
#line 267 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__MakeVisibleVars_44 = hlds__hlds_goal__make_visible_vars_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 268 "hlds_out_goal.m"
        {
#line 268 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__MakeVisibleVars_44);
        }
#line 275 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 269 "hlds_out_goal.m"
          {
#line 269 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_314_314 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 269 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__MakeVisibleVarsList_45;

#line 269 "hlds_out_goal.m"
            {
#line 269 "hlds_out_goal.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_314_314, hlds__hlds_out__hlds_out_goal__MakeVisibleVars_44, &hlds__hlds_out__hlds_out_goal__MakeVisibleVarsList_45);
            }
#line 270 "hlds_out_goal.m"
            {
#line 270 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 271 "hlds_out_goal.m"
            {
#line 271 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% make_visible vars: ");
            }
#line 272 "hlds_out_goal.m"
            {
#line 272 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_314_314, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__MakeVisibleVarsList_45);
            }
#line 274 "hlds_out_goal.m"
            {
#line 274 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 269 "hlds_out_goal.m"
          }
#line 275 "hlds_out_goal.m"
        else
#line 274 "hlds_out_goal.m"
          {
#line 274 "hlds_out_goal.m"
          }
#line 279 "hlds_out_goal.m"
        {
#line 279 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__NeedVisibleVars_46 = hlds__hlds_goal__need_visible_vars_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 280 "hlds_out_goal.m"
        {
#line 280 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__NeedVisibleVars_46);
        }
#line 287 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 281 "hlds_out_goal.m"
          {
#line 281 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_316_316 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 281 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__NeedVisibleVarsList_47;

#line 281 "hlds_out_goal.m"
            {
#line 281 "hlds_out_goal.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_316_316, hlds__hlds_out__hlds_out_goal__NeedVisibleVars_46, &hlds__hlds_out__hlds_out_goal__NeedVisibleVarsList_47);
            }
#line 282 "hlds_out_goal.m"
            {
#line 282 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 283 "hlds_out_goal.m"
            {
#line 283 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% need_visible vars: ");
            }
#line 284 "hlds_out_goal.m"
            {
#line 284 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_316_316, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__NeedVisibleVarsList_47);
            }
#line 286 "hlds_out_goal.m"
            {
#line 286 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 281 "hlds_out_goal.m"
          }
#line 287 "hlds_out_goal.m"
        else
#line 286 "hlds_out_goal.m"
          {
#line 286 "hlds_out_goal.m"
          }
#line 245 "hlds_out_goal.m"
      }
#line 290 "hlds_out_goal.m"
    else
#line 286 "hlds_out_goal.m"
      {
#line 286 "hlds_out_goal.m"
      }
#line 293 "hlds_out_goal.m"
    {
#line 293 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 100);
    }
#line 299 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 294 "hlds_out_goal.m"
      {
#line 294 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Determinism_48;
#line 294 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__V_155_155;

#line 294 "hlds_out_goal.m"
        {
#line 294 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 295 "hlds_out_goal.m"
        {
#line 295 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% determinism: ");
        }
#line 296 "hlds_out_goal.m"
        {
#line 296 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Determinism_48 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 297 "hlds_out_goal.m"
        {
#line 297 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_155_155 = parse_tree__prog_out__determinism_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__Determinism_48);
        }
#line 297 "hlds_out_goal.m"
        {
#line 297 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_155_155);
        }
#line 298 "hlds_out_goal.m"
        {
#line 298 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 294 "hlds_out_goal.m"
      }
#line 299 "hlds_out_goal.m"
    else
#line 298 "hlds_out_goal.m"
      {
#line 298 "hlds_out_goal.m"
      }
#line 302 "hlds_out_goal.m"
    {
#line 302 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 101);
    }
#line 330 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 303 "hlds_out_goal.m"
      {
#line 303 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__MaybeRbmmInfo_49;

#line 303 "hlds_out_goal.m"
        {
#line 303 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__MaybeRbmmInfo_49 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 327 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__MaybeRbmmInfo_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 328 "hlds_out_goal.m"
          {
#line 328 "hlds_out_goal.m"
          }
#line 327 "hlds_out_goal.m"
        else
#line 305 "hlds_out_goal.m"
          {
#line 305 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeInfo_317_317;
#line 305 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__RbmmInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeRbmmInfo_49, (MR_Integer) 0)));
#line 305 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Created_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 0)));
#line 305 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Removed_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 1)));
#line 305 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Carried_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 2)));
#line 305 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Alloc_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 3)));
#line 305 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Used_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 4)));
#line 305 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_163_163;
#line 305 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_171_171;
#line 305 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_179_179;
#line 305 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_187_187;
#line 305 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_195_195;

#line 307 "hlds_out_goal.m"
            {
#line 307 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 308 "hlds_out_goal.m"
            {
#line 308 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Created regions: ");
            }
#line 10215 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeInfo_317_317 = (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0];
#line 309 "hlds_out_goal.m"
            {
#line 309 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_163_163 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Created_51);
            }
#line 309 "hlds_out_goal.m"
            {
#line 309 "hlds_out_goal.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_163_163, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[0]);
            }
#line 310 "hlds_out_goal.m"
            {
#line 310 "hlds_out_goal.m"
              mercury__io__nl_2_p_0();
            }
#line 311 "hlds_out_goal.m"
            {
#line 311 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 312 "hlds_out_goal.m"
            {
#line 312 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Removed regions: ");
            }
#line 313 "hlds_out_goal.m"
            {
#line 313 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_171_171 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Removed_52);
            }
#line 313 "hlds_out_goal.m"
            {
#line 313 "hlds_out_goal.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_171_171, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[1]);
            }
#line 314 "hlds_out_goal.m"
            {
#line 314 "hlds_out_goal.m"
              mercury__io__nl_2_p_0();
            }
#line 315 "hlds_out_goal.m"
            {
#line 315 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 316 "hlds_out_goal.m"
            {
#line 316 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Carried regions: ");
            }
#line 317 "hlds_out_goal.m"
            {
#line 317 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_179_179 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Carried_53);
            }
#line 317 "hlds_out_goal.m"
            {
#line 317 "hlds_out_goal.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_179_179, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[2]);
            }
#line 318 "hlds_out_goal.m"
            {
#line 318 "hlds_out_goal.m"
              mercury__io__nl_2_p_0();
            }
#line 319 "hlds_out_goal.m"
            {
#line 319 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 320 "hlds_out_goal.m"
            {
#line 320 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Allocated into regions: ");
            }
#line 321 "hlds_out_goal.m"
            {
#line 321 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_187_187 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Alloc_54);
            }
#line 321 "hlds_out_goal.m"
            {
#line 321 "hlds_out_goal.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_187_187, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[3]);
            }
#line 322 "hlds_out_goal.m"
            {
#line 322 "hlds_out_goal.m"
              mercury__io__nl_2_p_0();
            }
#line 323 "hlds_out_goal.m"
            {
#line 323 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 324 "hlds_out_goal.m"
            {
#line 324 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Used regions: ");
            }
#line 325 "hlds_out_goal.m"
            {
#line 325 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_195_195 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Used_55);
            }
#line 325 "hlds_out_goal.m"
            {
#line 325 "hlds_out_goal.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_195_195, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[4]);
            }
#line 326 "hlds_out_goal.m"
            {
#line 326 "hlds_out_goal.m"
              mercury__io__nl_2_p_0();
            }
#line 305 "hlds_out_goal.m"
          }
#line 303 "hlds_out_goal.m"
      }
#line 330 "hlds_out_goal.m"
    else
#line 328 "hlds_out_goal.m"
      {
#line 328 "hlds_out_goal.m"
      }
#line 333 "hlds_out_goal.m"
    {
#line 333 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 122);
    }
#line 346 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 334 "hlds_out_goal.m"
      {
#line 334 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Purity_56;

#line 334 "hlds_out_goal.m"
        {
#line 334 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Purity_56 = hlds__hlds_goal__goal_info_get_purity_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 337 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__Purity_56 == (MR_Integer) 2))
#line 342 "hlds_out_goal.m"
          {
#line 343 "hlds_out_goal.m"
            {
#line 343 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 344 "hlds_out_goal.m"
            {
#line 344 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% impure\n");
            }
#line 342 "hlds_out_goal.m"
          }
#line 337 "hlds_out_goal.m"
        else
#line 337 "hlds_out_goal.m"
          if ((hlds__hlds_out__hlds_out_goal__Purity_56 == (MR_Integer) 0))
#line 336 "hlds_out_goal.m"
            {
#line 336 "hlds_out_goal.m"
            }
#line 337 "hlds_out_goal.m"
          else
#line 338 "hlds_out_goal.m"
            {
#line 339 "hlds_out_goal.m"
              {
#line 339 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 340 "hlds_out_goal.m"
              {
#line 340 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% semipure\n");
              }
#line 338 "hlds_out_goal.m"
            }
#line 334 "hlds_out_goal.m"
      }
#line 346 "hlds_out_goal.m"
    else
#line 344 "hlds_out_goal.m"
      {
#line 344 "hlds_out_goal.m"
      }
#line 349 "hlds_out_goal.m"
    {
#line 349 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 69);
    }
#line 389 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 350 "hlds_out_goal.m"
      {
#line 350 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__MaybeDPInfo_57;

#line 350 "hlds_out_goal.m"
        {
#line 350 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__MaybeDPInfo_57 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 386 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__MaybeDPInfo_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 387 "hlds_out_goal.m"
          {
#line 387 "hlds_out_goal.m"
          }
#line 386 "hlds_out_goal.m"
        else
#line 352 "hlds_out_goal.m"
          {
#line 352 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__MdprofInst_58;
#line 352 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__MaybeDPCoverageInfo_59;
#line 352 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeDPInfo_57, (MR_Integer) 0)));

#line 352 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__MdprofInst_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_208_208, (MR_Integer) 0)));
#line 352 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__MaybeDPCoverageInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_208_208, (MR_Integer) 1)));
#line 357 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__MdprofInst_58 == (MR_Integer) 0))
#line 354 "hlds_out_goal.m"
              {
#line 355 "hlds_out_goal.m"
                {
#line 355 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 356 "hlds_out_goal.m"
                {
#line 356 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% mdprof instrumentation\n");
                }
#line 354 "hlds_out_goal.m"
              }
#line 357 "hlds_out_goal.m"
            else
#line 358 "hlds_out_goal.m"
              {
#line 358 "hlds_out_goal.m"
              }
#line 383 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__MaybeDPCoverageInfo_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "hlds_out_goal.m"
              {
#line 384 "hlds_out_goal.m"
              }
#line 383 "hlds_out_goal.m"
            else
#line 361 "hlds_out_goal.m"
              {
#line 361 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__CoverageInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeDPCoverageInfo_59, (MR_Integer) 0)));
#line 361 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__IsTrivial_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CoverageInfo_60, (MR_Integer) 0)));
#line 361 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__PortCountsGiveCoverageAfter_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CoverageInfo_60, (MR_Integer) 1)));

#line 364 "hlds_out_goal.m"
                {
#line 364 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 368 "hlds_out_goal.m"
                if ((hlds__hlds_out__hlds_out_goal__IsTrivial_61 == (MR_Integer) 1))
#line 369 "hlds_out_goal.m"
                  {
#line 370 "hlds_out_goal.m"
                    {
#line 370 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% nontrivial goal\n");
                    }
#line 369 "hlds_out_goal.m"
                  }
#line 368 "hlds_out_goal.m"
                else
#line 366 "hlds_out_goal.m"
                  {
#line 367 "hlds_out_goal.m"
                    {
#line 367 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% trivial goal\n");
                    }
#line 366 "hlds_out_goal.m"
                  }
#line 372 "hlds_out_goal.m"
                {
#line 372 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 377 "hlds_out_goal.m"
                if ((hlds__hlds_out__hlds_out_goal__PortCountsGiveCoverageAfter_62 == (MR_Integer) 1))
#line 379 "hlds_out_goal.m"
                  {
#line 380 "hlds_out_goal.m"
                    {
#line 380 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% no port counts give coverage after\n");
                    }
#line 379 "hlds_out_goal.m"
                  }
#line 377 "hlds_out_goal.m"
                else
#line 375 "hlds_out_goal.m"
                  {
#line 376 "hlds_out_goal.m"
                    {
#line 376 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% port counts give coverage after\n");
                    }
#line 375 "hlds_out_goal.m"
                  }
#line 361 "hlds_out_goal.m"
              }
#line 352 "hlds_out_goal.m"
          }
#line 350 "hlds_out_goal.m"
      }
#line 389 "hlds_out_goal.m"
    else
#line 387 "hlds_out_goal.m"
      {
#line 387 "hlds_out_goal.m"
      }
#line 392 "hlds_out_goal.m"
    {
#line 392 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_goal_expr_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_20, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
    }
#line 394 "hlds_out_goal.m"
    {
#line 394 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 105);
    }
#line 416 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 395 "hlds_out_goal.m"
      {
#line 395 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_63;
#line 397 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_338_338;
#line 397 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Vars_64;

#line 395 "hlds_out_goal.m"
        {
#line 395 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__InstMapDelta_63 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 397 "hlds_out_goal.m"
        {
#line 397 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_63);
        }
#line 397 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 397 "hlds_out_goal.m"
          {
#line 398 "hlds_out_goal.m"
            {
#line 398 "hlds_out_goal.m"
              hlds__instmap__instmap_delta_changed_vars_2_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_63, &hlds__hlds_out__hlds_out_goal__Vars_64);
            }
#line 10590 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_338_338 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 399 "hlds_out_goal.m"
            {
#line 399 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_338_338, hlds__hlds_out__hlds_out_goal__Vars_64);
            }
#line 397 "hlds_out_goal.m"
          }
#line 402 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 399 "hlds_out_goal.m"
          {
#line 399 "hlds_out_goal.m"
          }
#line 402 "hlds_out_goal.m"
        else
#line 403 "hlds_out_goal.m"
          {
#line 403 "hlds_out_goal.m"
            {
#line 403 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 404 "hlds_out_goal.m"
            {
#line 404 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 68);
            }
#line 409 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 405 "hlds_out_goal.m"
              {
#line 405 "hlds_out_goal.m"
                {
#line 405 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% new insts: ");
                }
#line 406 "hlds_out_goal.m"
                {
#line 406 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_63, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 408 "hlds_out_goal.m"
                {
#line 408 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 405 "hlds_out_goal.m"
              }
#line 409 "hlds_out_goal.m"
            else
#line 410 "hlds_out_goal.m"
              {
#line 410 "hlds_out_goal.m"
                {
#line 410 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% vars with new insts: ");
                }
#line 411 "hlds_out_goal.m"
                {
#line 411 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_63, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
                }
#line 413 "hlds_out_goal.m"
                {
#line 413 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 410 "hlds_out_goal.m"
              }
#line 403 "hlds_out_goal.m"
          }
#line 395 "hlds_out_goal.m"
      }
#line 416 "hlds_out_goal.m"
    else
#line 413 "hlds_out_goal.m"
      {
#line 413 "hlds_out_goal.m"
      }
#line 419 "hlds_out_goal.m"
    {
#line 419 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 112);
    }
#line 444 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 431 "hlds_out_goal.m"
      {
#line 429 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PostDeathList_66;
#line 421 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_339_339;
#line 421 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PostDeaths_65;
#line 423 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_67_67;
#line 423 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_68_68;
#line 441 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PostBirthList_70;
#line 433 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_341_341;
#line 433 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PostBirths_69;
#line 435 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_71_71;
#line 435 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_72_72;

#line 421 "hlds_out_goal.m"
        {
#line 421 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21, &hlds__hlds_out__hlds_out_goal__PostDeaths_65);
        }
#line 421 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 421 "hlds_out_goal.m"
          {
#line 10710 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_339_339 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 422 "hlds_out_goal.m"
            {
#line 422 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__PostDeathList_66 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_339_339, hlds__hlds_out__hlds_out_goal__PostDeaths_65);
            }
#line 423 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PostDeathList_66)) == (MR_mktag((MR_Integer) 1)));
#line 423 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 423 "hlds_out_goal.m"
              {
#line 423 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PostDeathList_66, (MR_Integer) 0)));
#line 423 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PostDeathList_66, (MR_Integer) 1)));
#line 423 "hlds_out_goal.m"
              }
#line 421 "hlds_out_goal.m"
          }
#line 429 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 425 "hlds_out_goal.m"
          {
#line 425 "hlds_out_goal.m"
            {
#line 425 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 426 "hlds_out_goal.m"
            {
#line 426 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% post-deaths: ");
            }
#line 427 "hlds_out_goal.m"
            {
#line 427 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__PostDeathList_66);
            }
#line 428 "hlds_out_goal.m"
            {
#line 428 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 425 "hlds_out_goal.m"
          }
#line 429 "hlds_out_goal.m"
        else
#line 428 "hlds_out_goal.m"
          {
#line 428 "hlds_out_goal.m"
          }
#line 433 "hlds_out_goal.m"
        {
#line 433 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_llds__goal_info_maybe_get_post_births_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21, &hlds__hlds_out__hlds_out_goal__PostBirths_69);
        }
#line 433 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 433 "hlds_out_goal.m"
          {
#line 10772 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_341_341 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 434 "hlds_out_goal.m"
            {
#line 434 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__PostBirthList_70 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_341_341, hlds__hlds_out__hlds_out_goal__PostBirths_69);
            }
#line 435 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PostBirthList_70)) == (MR_mktag((MR_Integer) 1)));
#line 435 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 435 "hlds_out_goal.m"
              {
#line 435 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PostBirthList_70, (MR_Integer) 0)));
#line 435 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PostBirthList_70, (MR_Integer) 1)));
#line 435 "hlds_out_goal.m"
              }
#line 433 "hlds_out_goal.m"
          }
#line 441 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 437 "hlds_out_goal.m"
          {
#line 437 "hlds_out_goal.m"
            {
#line 437 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 438 "hlds_out_goal.m"
            {
#line 438 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% post-births: ");
            }
#line 439 "hlds_out_goal.m"
            {
#line 439 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__PostBirthList_70);
            }
#line 440 "hlds_out_goal.m"
            {
#line 440 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 437 "hlds_out_goal.m"
          }
#line 441 "hlds_out_goal.m"
        else
#line 440 "hlds_out_goal.m"
          {
#line 440 "hlds_out_goal.m"
          }
#line 431 "hlds_out_goal.m"
      }
#line 444 "hlds_out_goal.m"
    else
#line 440 "hlds_out_goal.m"
      {
#line 440 "hlds_out_goal.m"
      }
#line 447 "hlds_out_goal.m"
    {
#line 447 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 82);
    }
#line 494 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 491 "hlds_out_goal.m"
      {
#line 491 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ReuseDescription_75;
#line 491 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ListLFU_76;
#line 491 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ListLBU_77;
#line 449 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_343_343;
#line 449 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__LFU_73;
#line 449 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__LBU_74;
#line 449 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_250_250;
#line 449 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_251_251;
#line 449 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_252_252;

#line 449 "hlds_out_goal.m"
        {
#line 449 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_250_250 = hlds__hlds_goal__goal_info_get_maybe_lfu_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 449 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__V_250_250)) == (MR_mktag((MR_Integer) 1)));
#line 449 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 449 "hlds_out_goal.m"
          {
#line 449 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__LFU_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_250_250, (MR_Integer) 0)));
#line 450 "hlds_out_goal.m"
            {
#line 450 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_251_251 = hlds__hlds_goal__goal_info_get_maybe_lbu_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
            }
#line 450 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__V_251_251)) == (MR_mktag((MR_Integer) 1)));
#line 450 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 450 "hlds_out_goal.m"
              {
#line 450 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__LBU_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_251_251, (MR_Integer) 0)));
#line 451 "hlds_out_goal.m"
                {
#line 451 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_252_252 = hlds__hlds_goal__goal_info_get_maybe_reuse_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
                }
#line 451 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__V_252_252)) == (MR_mktag((MR_Integer) 1)));
#line 451 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 451 "hlds_out_goal.m"
                  {
#line 451 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__ReuseDescription_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_252_252, (MR_Integer) 0)));
#line 10900 "hlds.hlds_out.hlds_out_goal.c"
                    hlds__hlds_out__hlds_out_goal__TypeCtorInfo_343_343 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 452 "hlds_out_goal.m"
                    {
#line 452 "hlds_out_goal.m"
                      parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_343_343, hlds__hlds_out__hlds_out_goal__LFU_73, &hlds__hlds_out__hlds_out_goal__ListLFU_76);
                    }
#line 453 "hlds_out_goal.m"
                    {
#line 453 "hlds_out_goal.m"
                      parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_343_343, hlds__hlds_out__hlds_out_goal__LBU_74, &hlds__hlds_out__hlds_out_goal__ListLBU_77);
                    }
#line 453 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__succeeded = MR_TRUE;
#line 451 "hlds_out_goal.m"
                  }
#line 450 "hlds_out_goal.m"
              }
#line 449 "hlds_out_goal.m"
          }
#line 491 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 455 "hlds_out_goal.m"
          {
#line 455 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_344_344;

#line 455 "hlds_out_goal.m"
            {
#line 455 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 456 "hlds_out_goal.m"
            {
#line 456 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% LFU: ");
            }
#line 10937 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_344_344 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 457 "hlds_out_goal.m"
            {
#line 457 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_344_344, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__ListLFU_76);
            }
#line 458 "hlds_out_goal.m"
            {
#line 458 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 459 "hlds_out_goal.m"
            {
#line 459 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 460 "hlds_out_goal.m"
            {
#line 460 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% LBU: ");
            }
#line 461 "hlds_out_goal.m"
            {
#line 461 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_344_344, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__ListLBU_77);
            }
#line 462 "hlds_out_goal.m"
            {
#line 462 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 464 "hlds_out_goal.m"
            {
#line 464 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 465 "hlds_out_goal.m"
            {
#line 465 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Reuse: ");
            }
#line 469 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__ReuseDescription_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 470 "hlds_out_goal.m"
              {
#line 471 "hlds_out_goal.m"
                {
#line 471 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "no possible reuse");
                }
#line 470 "hlds_out_goal.m"
              }
#line 469 "hlds_out_goal.m"
            else
#line 469 "hlds_out_goal.m"
              if ((hlds__hlds_out__hlds_out_goal__ReuseDescription_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 467 "hlds_out_goal.m"
                {
#line 468 "hlds_out_goal.m"
                  {
#line 468 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "no reuse info");
                  }
#line 467 "hlds_out_goal.m"
                }
#line 469 "hlds_out_goal.m"
              else
#line 469 "hlds_out_goal.m"
                if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ReuseDescription_75)) == (MR_mktag((MR_Integer) 1))))
#line 473 "hlds_out_goal.m"
                  {
#line 473 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__Messages_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ReuseDescription_75, (MR_Integer) 0)));

#line 474 "hlds_out_goal.m"
                    {
#line 474 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "missed (");
                    }
#line 475 "hlds_out_goal.m"
                    {
#line 475 "hlds_out_goal.m"
                      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_goal__Messages_78, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[5]);
                    }
#line 476 "hlds_out_goal.m"
                    {
#line 476 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 473 "hlds_out_goal.m"
                  }
#line 469 "hlds_out_goal.m"
                else
#line 469 "hlds_out_goal.m"
                  if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ReuseDescription_75)) == (MR_mktag((MR_Integer) 2))))
#line 478 "hlds_out_goal.m"
                    {
#line 478 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal__ShortReuseDescr_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ReuseDescription_75, (MR_Integer) 0)));

#line 479 "hlds_out_goal.m"
                      {
#line 479 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "potential reuse (");
                      }
#line 480 "hlds_out_goal.m"
                      {
#line 480 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(hlds__hlds_out__hlds_out_goal__ShortReuseDescr_79, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
                      }
#line 482 "hlds_out_goal.m"
                      {
#line 482 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
#line 478 "hlds_out_goal.m"
                    }
#line 469 "hlds_out_goal.m"
                  else
#line 484 "hlds_out_goal.m"
                    {
#line 484 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal__ShortReuseDescr_299 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ReuseDescription_75, (MR_Integer) 0)));

#line 485 "hlds_out_goal.m"
                      {
#line 485 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "reuse (");
                      }
#line 486 "hlds_out_goal.m"
                      {
#line 486 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(hlds__hlds_out__hlds_out_goal__ShortReuseDescr_299, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
                      }
#line 488 "hlds_out_goal.m"
                      {
#line 488 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
#line 484 "hlds_out_goal.m"
                    }
#line 490 "hlds_out_goal.m"
            {
#line 490 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 455 "hlds_out_goal.m"
          }
#line 491 "hlds_out_goal.m"
        else
#line 490 "hlds_out_goal.m"
          {
#line 490 "hlds_out_goal.m"
          }
#line 491 "hlds_out_goal.m"
      }
#line 494 "hlds_out_goal.m"
    else
#line 490 "hlds_out_goal.m"
      {
#line 490 "hlds_out_goal.m"
      }
#line 497 "hlds_out_goal.m"
    {
#line 497 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__CodeGenInfo_80 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
    }
#line 500 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__CodeGenInfo_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "hlds_out_goal.m"
      {
#line 499 "hlds_out_goal.m"
      }
#line 500 "hlds_out_goal.m"
    else
#line 502 "hlds_out_goal.m"
      {
#line 502 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalInfo_21, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16);
      }
#line 505 "hlds_out_goal.m"
    {
#line 505 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 103);
    }
#line 517 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 506 "hlds_out_goal.m"
      {
#line 506 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Features_82;
#line 506 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__FeatureList_83;

#line 506 "hlds_out_goal.m"
        {
#line 506 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Features_82 = hlds__hlds_goal__goal_info_get_features_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 507 "hlds_out_goal.m"
        {
#line 507 "hlds_out_goal.m"
          mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, hlds__hlds_out__hlds_out_goal__Features_82, &hlds__hlds_out__hlds_out_goal__FeatureList_83);
        }
#line 510 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__FeatureList_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "hlds_out_goal.m"
          {
#line 509 "hlds_out_goal.m"
          }
#line 510 "hlds_out_goal.m"
        else
#line 511 "hlds_out_goal.m"
          {
#line 512 "hlds_out_goal.m"
            {
#line 512 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 513 "hlds_out_goal.m"
            {
#line 513 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Goal features:  ");
            }
#line 514 "hlds_out_goal.m"
            {
#line 514 "hlds_out_goal.m"
              mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[1], ((MR_Box) (hlds__hlds_out__hlds_out_goal__FeatureList_83)));
            }
#line 515 "hlds_out_goal.m"
            {
#line 515 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
#line 515 "hlds_out_goal.m"
              return;
            }
#line 511 "hlds_out_goal.m"
          }
#line 506 "hlds_out_goal.m"
      }
#line 517 "hlds_out_goal.m"
    else
#line 515 "hlds_out_goal.m"
      {
#line 515 "hlds_out_goal.m"
      }
#line 165 "hlds_out_goal.m"
  }
#line 60 "hlds_out_goal.m"
}

#line 54 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(
#line 54 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_10,
#line 54 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goal_11,
#line 54 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 54 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 54 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_14,
#line 54 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_15,
#line 54 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_16)
#line 54 "hlds_out_goal.m"
{
#line 159 "hlds_out_goal.m"
  {
#line 159 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 161 "hlds_out_goal.m"
    {
#line 161 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_10, hlds__hlds_out__hlds_out_goal__Goal_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_14, hlds__hlds_out__hlds_out_goal__Indent_15, hlds__hlds_out__hlds_out_goal__Follow_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 161 "hlds_out_goal.m"
      return;
    }
#line 159 "hlds_out_goal.m"
  }
#line 54 "hlds_out_goal.m"
}

#line 44 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__dump_goal_5_p_0(
#line 44 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_6,
#line 44 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 44 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goal_8)
#line 44 "hlds_out_goal.m"
{
#line 148 "hlds_out_goal.m"
  {
#line 148 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 148 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Globals_10;
#line 148 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Info_11;

#line 149 "hlds_out_goal.m"
    {
#line 149 "hlds_out_goal.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_6, &hlds__hlds_out__hlds_out_goal__Globals_10);
    }
#line 150 "hlds_out_goal.m"
    {
#line 150 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__Info_11 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_f_0(hlds__hlds_out__hlds_out_goal__Globals_10);
    }
#line 155 "hlds_out_goal.m"
    {
#line 155 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goal_8, hlds__hlds_out__hlds_out_goal__ModuleInfo_6, hlds__hlds_out__hlds_out_goal__VarSet_7, (MR_Integer) 1, (MR_Integer) 0, (MR_String) "", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 155 "hlds_out_goal.m"
      return;
    }
#line 148 "hlds_out_goal.m"
  }
#line 44 "hlds_out_goal.m"
}

void mercury__hlds__hlds_out__hlds_out_goal__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_goal__init_type_tables(void)
{
}

void mercury__hlds__hlds_out__hlds_out_goal__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_out.hlds_out_goal. */
