/*
** Automatically generated from `hlds_out_goal.m'
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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




#line 148 "hlds.hlds_out.hlds_out_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 1511 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_p_0_1(
#line 1511 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 1511 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 1511 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 1511 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 1483 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_p_0(
#line 1483 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1483 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1483 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1483 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1483 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1483 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17);

#line 1343 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_p_0(
#line 1343 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1343 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1343 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1343 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1343 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1343 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17);

#line 1204 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_p_0(
#line 1204 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_12,
#line 1204 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ConsId_13,
#line 1204 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_14,
#line 1204 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_15,
#line 1204 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ProgVarSet_17,
#line 1204 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_18,
#line 1204 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_19,
#line 1204 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_20);

#line 1053 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_p_0(
#line 1053 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_10,
#line 1053 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Unification_11,
#line 1053 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ProgVarSet_13,
#line 1053 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_14,
#line 1053 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1053 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16);

#line 326 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__326__1_3_p_0(
#line 326 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_334);

#line 322 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__322__1_3_p_0(
#line 322 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_330);

#line 318 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__318__1_3_p_0(
#line 318 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_326);

#line 314 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__314__1_3_p_0(
#line 314 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_322);

#line 310 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__310__1_3_p_0(
#line 310 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_318);

#line 2153 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0(
#line 2153 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__CompName_7,
#line 2153 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__CompState_8,
#line 2153 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_9,
#line 2153 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_10);

#line 2144 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_p_0(
#line 2144 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_5,
#line 2144 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MutableVar_6);

#line 2074 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_p_0(
#line 2074 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 2074 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 2074 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 2074 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 2074 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 2074 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 2074 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 2074 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 2044 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_3(
#line 2044 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 2044 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 2044 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 2044 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 2031 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_2(
#line 2031 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 2031 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 2031 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 2031 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 2021 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_1(
#line 2021 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 2021 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 2021 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 2021 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 1859 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0(
#line 1859 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40,
#line 1859 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1859 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1859 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1859 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1859 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1859 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1859 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 1813 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_p_0(
#line 1813 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1813 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1813 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1813 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1813 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1813 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1813 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1813 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 1792 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_negation_10_p_0(
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1792 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1792 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 1767 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_p_0(
#line 1767 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ConsId_4);

#line 1757 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_case_10_p_0_1(
#line 1757 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 1757 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 1757 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 1757 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 1745 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_case_10_p_0(
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Case_12,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Var_13,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_16,
#line 1745 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_17,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarTypes_18);

#line 1727 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_10_p_0(
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__CasesList_12,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Var_13,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_16,
#line 1727 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_17,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarTypes_18);

#line 1697 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0(
#line 1697 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1697 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1697 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1697 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1697 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1697 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1697 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1697 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 1667 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_disj_10_p_0(
#line 1667 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1667 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1667 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1667 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1667 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1667 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1667 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1667 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 1633 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(
#line 1633 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_13,
#line 1633 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goal1_14,
#line 1633 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goals1_15,
#line 1633 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_16,
#line 1633 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_17,
#line 1633 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_18,
#line 1633 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_19,
#line 1633 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_20,
#line 1633 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Separator_21,
#line 1633 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_22);

#line 1582 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_conj_10_p_0(
#line 1582 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1582 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1582 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1582 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1582 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1582 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1582 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1582 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 1540 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(
#line 1540 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_1,
#line 1540 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_2,
#line 1540 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TVarSet_3,
#line 1540 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_4);

#line 1467 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_reg_3_p_0(
#line 1467 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgReg_4);

#line 1461 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0_1(
#line 1461 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 1461 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 1461 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 1461 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 1453 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(
#line 1453 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_5,
#line 1453 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeArgRegs_6);

#line 1324 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_p_0(
#line 1324 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__PredName_7,
#line 1324 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_8,
#line 1324 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_9,
#line 1324 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_10);

#line 1243 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_p_0(
#line 1243 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1243 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1243 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1243 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1243 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1243 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1243 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1243 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 911 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_p_0(
#line 911 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_12,
#line 911 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_13,
#line 911 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
#line 911 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
#line 911 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_16,
#line 911 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_17,
#line 911 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_18,
#line 911 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeType_19,
#line 911 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_20);

#line 901 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(
#line 901 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_13,
#line 901 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_14,
#line 901 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_15,
#line 901 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_16,
#line 901 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_17,
#line 901 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_18,
#line 901 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_19,
#line 901 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_20,
#line 901 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeType_21,
#line 901 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_22);

#line 850 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_unify_10_p_0(
#line 850 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 850 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 850 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 850 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 850 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 850 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 850 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 850 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 793 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_expr_10_p_0(
#line 793 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 793 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 793 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 793 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 793 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 793 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 793 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 793 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18);

#line 742 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(
#line 742 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ShortDescription_6,
#line 742 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 742 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarnums_8);

#line 731 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(
#line 731 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_1,
#line 731 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_2,
#line 731 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__3_3);

#line 719 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_p_0(
#line 719 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_6,
#line 719 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 719 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_8);

#line 708 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_p_0(
#line 708 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_7,
#line 708 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_8,
#line 708 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_9,
#line 708 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_10);

#line 522 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_p_0(
#line 522 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_8,
#line 522 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalInfo_9,
#line 522 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_10,
#line 522 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_11,
#line 522 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_12);

#line 476 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_6(
#line 476 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 476 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 476 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 476 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 326 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_5(
#line 326 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 326 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 326 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 326 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 322 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_4(
#line 322 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 322 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 322 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 322 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 318 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_3(
#line 318 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 318 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 318 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 318 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 314 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_2(
#line 314 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 314 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 314 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 314 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 310 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_1(
#line 310 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 310 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 310 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 310 "hlds_out_goal.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1097 "hlds.hlds_out.hlds_out_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1511 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_p_0_1(
#line 1511 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 1511 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 1511 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 1511 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 1511 "hlds_out_goal.m"
{
#line 1511 "hlds_out_goal.m"
  {
#line 1511 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 1511 "hlds_out_goal.m"
    {
#line 1511 "hlds_out_goal.m"
      parse_tree__mercury_to_mercury__mercury_output_trace_runtime_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 1511 "hlds_out_goal.m"
      return;
    }
#line 1511 "hlds_out_goal.m"
  }
#line 1511 "hlds_out_goal.m"
}

#line 1483 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_p_0(
#line 1483 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1483 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1483 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1483 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1483 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1483 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17)
#line 1483 "hlds_out_goal.m"
{
#line 1489 "hlds_out_goal.m"
  {
#line 1489 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1489 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Attributes_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));
#line 1489 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 2)));
#line 1489 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 3)));
#line 1489 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 4)));
#line 1489 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ExtraArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 5)));
#line 1489 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeTraceRuntimeCond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 6)));
#line 1489 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__PragmaCode_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 7)));
#line 1489 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ForeignLang_27;
#line 1489 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__PredIdInt_28;
#line 1489 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__ProcIdInt_29;
#line 1489 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__TypeVarSet_31;
#line 1489 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__Code_34;
#line 1489 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_41_41;
#line 1533 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_35_35;

#line 1492 "hlds_out_goal.m"
    {
#line 1492 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__ForeignLang_27 = parse_tree__prog_data__get_foreign_language_1_f_0(hlds__hlds_out__hlds_out_goal__Attributes_20);
    }
#line 1493 "hlds_out_goal.m"
    {
#line 1493 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1494 "hlds_out_goal.m"
    {
#line 1494 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\044pragma_foreign_proc(/* ");
    }
#line 1495 "hlds_out_goal.m"
    {
#line 1495 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_41_41 = libs__globals__foreign_language_string_1_f_0(hlds__hlds_out__hlds_out_goal__ForeignLang_27);
    }
#line 1495 "hlds_out_goal.m"
    {
#line 1495 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_41_41);
    }
#line 1496 "hlds_out_goal.m"
    {
#line 1496 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " */, ");
    }
#line 1497 "hlds_out_goal.m"
    {
#line 1497 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__PredId_21);
    }
#line 1498 "hlds_out_goal.m"
    {
#line 1498 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " pred ");
    }
#line 1499 "hlds_out_goal.m"
    {
#line 1499 "hlds_out_goal.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_goal__PredId_21, &hlds__hlds_out__hlds_out_goal__PredIdInt_28);
    }
#line 1500 "hlds_out_goal.m"
    {
#line 1500 "hlds_out_goal.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__PredIdInt_28);
    }
#line 1501 "hlds_out_goal.m"
    {
#line 1501 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " proc ");
    }
#line 1502 "hlds_out_goal.m"
    {
#line 1502 "hlds_out_goal.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_goal__ProcId_22, &hlds__hlds_out__hlds_out_goal__ProcIdInt_29);
    }
#line 1503 "hlds_out_goal.m"
    {
#line 1503 "hlds_out_goal.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__ProcIdInt_29);
    }
#line 1504 "hlds_out_goal.m"
    {
#line 1504 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
#line 1507 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__MaybeTraceRuntimeCond_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1506 "hlds_out_goal.m"
      {
#line 1506 "hlds_out_goal.m"
      }
#line 1507 "hlds_out_goal.m"
    else
#line 1508 "hlds_out_goal.m"
      {
#line 1508 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TraceRuntimeCond_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeTraceRuntimeCond_25, (MR_Integer) 0)));

#line 1509 "hlds_out_goal.m"
        {
#line 1509 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1510 "hlds_out_goal.m"
        {
#line 1510 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% trace_runtime_cond(");
        }
#line 1511 "hlds_out_goal.m"
        {
#line 1511 "hlds_out_goal.m"
          parse_tree__mercury_to_mercury__mercury_output_trace_expr_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[10], hlds__hlds_out__hlds_out_goal__TraceRuntimeCond_30);
        }
#line 1513 "hlds_out_goal.m"
        {
#line 1513 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
#line 1508 "hlds_out_goal.m"
      }
#line 1515 "hlds_out_goal.m"
    {
#line 1515 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1519 "hlds_out_goal.m"
    {
#line 1519 "hlds_out_goal.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_goal__TypeVarSet_31);
    }
#line 1520 "hlds_out_goal.m"
    {
#line 1520 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
#line 1521 "hlds_out_goal.m"
    {
#line 1521 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(hlds__hlds_out__hlds_out_goal__Args_23, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__TypeVarSet_31, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
    }
#line 1522 "hlds_out_goal.m"
    {
#line 1522 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "],\n");
    }
#line 1525 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__ExtraArgs_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1524 "hlds_out_goal.m"
      {
#line 1524 "hlds_out_goal.m"
      }
#line 1525 "hlds_out_goal.m"
    else
#line 1526 "hlds_out_goal.m"
      {
#line 1527 "hlds_out_goal.m"
        {
#line 1527 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1528 "hlds_out_goal.m"
        {
#line 1528 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "{");
        }
#line 1529 "hlds_out_goal.m"
        {
#line 1529 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(hlds__hlds_out__hlds_out_goal__ExtraArgs_24, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__TypeVarSet_31, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
        }
#line 1531 "hlds_out_goal.m"
        {
#line 1531 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "},\n");
        }
#line 1526 "hlds_out_goal.m"
      }
#line 1533 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__Code_34 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__PragmaCode_26, (MR_Integer) 0)));
#line 1533 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__PragmaCode_26, (MR_Integer) 1)));
#line 1534 "hlds_out_goal.m"
    {
#line 1534 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
#line 1535 "hlds_out_goal.m"
    {
#line 1535 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Code_34);
    }
#line 1536 "hlds_out_goal.m"
    {
#line 1536 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
#line 1537 "hlds_out_goal.m"
    {
#line 1537 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 1538 "hlds_out_goal.m"
    {
#line 1538 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1538 "hlds_out_goal.m"
      return;
    }
#line 1489 "hlds_out_goal.m"
  }
#line 1483 "hlds_out_goal.m"
}

#line 1343 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_p_0(
#line 1343 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1343 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1343 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1343 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1343 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1343 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17)
#line 1343 "hlds_out_goal.m"
{
#line 1349 "hlds_out_goal.m"
  {
#line 1349 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1349 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__GenericCall_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));
#line 1349 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 2)));
#line 1349 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Modes_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 3)));
#line 1349 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 4)));
#line 1349 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_25 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 1350 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 5)));
#line 1351 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 1351 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 1351 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 1351 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));

#line 1388 "hlds_out_goal.m"
#line 1388 "hlds_out_goal.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GenericCall_20)) {
#line 1388 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1388 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 1354 "hlds_out_goal.m"
        {
#line 1354 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__PredVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 0)));
#line 1354 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Purity_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 1)));
#line 1354 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__PredOrFunc_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 2)));
#line 1354 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 3)));

#line 1368 "hlds_out_goal.m"
#line 1368 "hlds_out_goal.m"
          switch (hlds__hlds_out__hlds_out_goal__PredOrFunc_28) {
#line 1368 "hlds_out_goal.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1368 "hlds_out_goal.m"
            case (MR_Integer) 1:
#line 1369 "hlds_out_goal.m"
              {
#line 1369 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__FuncArgVars_30;
#line 1369 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__FuncRetVar_31;
#line 1369 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_96_96;
#line 1378 "hlds_out_goal.m"
                MR_Box hlds__hlds_out__hlds_out_goal__conv0_FuncRetVar_31;

#line 1370 "hlds_out_goal.m"
                {
#line 1370 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
                }
#line 1375 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1371 "hlds_out_goal.m"
                  {
#line 1371 "hlds_out_goal.m"
                    {
#line 1371 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1372 "hlds_out_goal.m"
                    {
#line 1372 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% higher-order function application\n");
                    }
#line 1374 "hlds_out_goal.m"
                    {
#line 1374 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
                    }
#line 1371 "hlds_out_goal.m"
                  }
#line 1375 "hlds_out_goal.m"
                else
#line 1375 "hlds_out_goal.m"
                  {
#line 1375 "hlds_out_goal.m"
                  }
#line 1378 "hlds_out_goal.m"
                {
#line 1378 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_96_96, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__PredVar_26));
#line 1378 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_96_96, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgVars_21));
#line 1378 "hlds_out_goal.m"
                }
#line 1378 "hlds_out_goal.m"
                {
#line 1378 "hlds_out_goal.m"
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], hlds__hlds_out__hlds_out_goal__V_96_96, &hlds__hlds_out__hlds_out_goal__FuncArgVars_30, &hlds__hlds_out__hlds_out_goal__conv0_FuncRetVar_31);
                }
#line 1378 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__FuncRetVar_31 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv0_FuncRetVar_31);
#line 1380 "hlds_out_goal.m"
                {
#line 1380 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 1381 "hlds_out_goal.m"
                {
#line 1381 "hlds_out_goal.m"
                  parse_tree__prog_out__write_purity_prefix_3_p_0(hlds__hlds_out__hlds_out_goal__Purity_27);
                }
#line 1382 "hlds_out_goal.m"
                {
#line 1382 "hlds_out_goal.m"
                  parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__FuncRetVar_31);
                }
#line 1383 "hlds_out_goal.m"
                {
#line 1383 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " = ");
                }
#line 1384 "hlds_out_goal.m"
                {
#line 1384 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_functor_6_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_4[2], hlds__hlds_out__hlds_out_goal__FuncArgVars_30, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
                }
#line 1369 "hlds_out_goal.m"
              }
#line 1368 "hlds_out_goal.m"
              break;
#line 1368 "hlds_out_goal.m"
            case (MR_Integer) 0:
#line 1356 "hlds_out_goal.m"
              {
#line 1356 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_113_113;

#line 1357 "hlds_out_goal.m"
                {
#line 1357 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
                }
#line 1361 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1358 "hlds_out_goal.m"
                  {
#line 1358 "hlds_out_goal.m"
                    {
#line 1358 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1359 "hlds_out_goal.m"
                    {
#line 1359 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% higher-order predicate call\n");
                    }
#line 1360 "hlds_out_goal.m"
                    {
#line 1360 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
                    }
#line 1358 "hlds_out_goal.m"
                  }
#line 1361 "hlds_out_goal.m"
                else
#line 1361 "hlds_out_goal.m"
                  {
#line 1361 "hlds_out_goal.m"
                  }
#line 1364 "hlds_out_goal.m"
                {
#line 1364 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 1365 "hlds_out_goal.m"
                {
#line 1365 "hlds_out_goal.m"
                  parse_tree__prog_out__write_purity_prefix_3_p_0(hlds__hlds_out__hlds_out_goal__Purity_27);
                }
#line 1366 "hlds_out_goal.m"
                {
#line 1366 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_113_113, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__PredVar_26));
#line 1366 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_113_113, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgVars_21));
#line 1366 "hlds_out_goal.m"
                }
#line 1366 "hlds_out_goal.m"
                {
#line 1366 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_functor_6_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_4[3], hlds__hlds_out__hlds_out_goal__V_113_113, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
                }
#line 1356 "hlds_out_goal.m"
              }
#line 1368 "hlds_out_goal.m"
              break;
#line 1368 "hlds_out_goal.m"
          }
#line 1387 "hlds_out_goal.m"
          {
#line 1387 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1387 "hlds_out_goal.m"
            return;
          }
#line 1354 "hlds_out_goal.m"
        }
#line 1388 "hlds_out_goal.m"
        break;
#line 1388 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 1390 "hlds_out_goal.m"
        {
#line 1390 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_131_131;
#line 1390 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TCInfoVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 0)));
#line 1390 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__MethodNum_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 1)));
#line 1390 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Context_36;
#line 1390 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TCInfoTerm_38;
#line 1390 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__MethodNumTerm_39;
#line 1390 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgTerms_40;
#line 1390 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Term_41;
#line 1390 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_84_84;
#line 1390 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_86_86;
#line 1390 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_87_87;
#line 1389 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal___ClassId_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 2)));
#line 1389 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal___MethodId_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 3)));

#line 1391 "hlds_out_goal.m"
          {
#line 1391 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
          }
#line 1395 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1392 "hlds_out_goal.m"
            {
#line 1392 "hlds_out_goal.m"
              {
#line 1392 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1393 "hlds_out_goal.m"
              {
#line 1393 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% class method call\n");
              }
#line 1394 "hlds_out_goal.m"
              {
#line 1394 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
              }
#line 1392 "hlds_out_goal.m"
            }
#line 1395 "hlds_out_goal.m"
          else
#line 1395 "hlds_out_goal.m"
            {
#line 1395 "hlds_out_goal.m"
            }
#line 1398 "hlds_out_goal.m"
          {
#line 1398 "hlds_out_goal.m"
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_goal__Context_36);
          }
#line 1400 "hlds_out_goal.m"
          {
#line 1400 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__TCInfoTerm_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1400 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TCInfoTerm_38, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__TCInfoVar_32));
#line 1400 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TCInfoTerm_38, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_36));
#line 1400 "hlds_out_goal.m"
          }
#line 1401 "hlds_out_goal.m"
          {
#line 1401 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1401 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_84_84, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__MethodNum_33));
#line 1401 "hlds_out_goal.m"
          }
#line 1401 "hlds_out_goal.m"
          {
#line 1401 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__MethodNumTerm_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1401 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MethodNumTerm_39, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_84_84));
#line 1401 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MethodNumTerm_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1401 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MethodNumTerm_39, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_36));
#line 1401 "hlds_out_goal.m"
          }
#line 1718 "hlds.hlds_out.hlds_out_goal.c"
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_131_131 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1402 "hlds_out_goal.m"
          {
#line 1402 "hlds_out_goal.m"
            mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_131_131, hlds__hlds_out__hlds_out_goal__ArgVars_21, &hlds__hlds_out__hlds_out_goal__ArgTerms_40);
          }
#line 1403 "hlds_out_goal.m"
          {
#line 1403 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1403 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_87_87, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__MethodNumTerm_39));
#line 1403 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_87_87, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgTerms_40));
#line 1403 "hlds_out_goal.m"
          }
#line 1403 "hlds_out_goal.m"
          {
#line 1403 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1403 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_86_86, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__TCInfoTerm_38));
#line 1403 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_86_86, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_87_87));
#line 1403 "hlds_out_goal.m"
          }
#line 1403 "hlds_out_goal.m"
          {
#line 1403 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Term_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1403 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_41, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[1]));
#line 1403 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_41, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_86_86));
#line 1403 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_41, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_36));
#line 1403 "hlds_out_goal.m"
          }
#line 1405 "hlds_out_goal.m"
          {
#line 1405 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 1406 "hlds_out_goal.m"
          {
#line 1406 "hlds_out_goal.m"
            parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_131_131, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Term_41);
          }
#line 1407 "hlds_out_goal.m"
          {
#line 1407 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1407 "hlds_out_goal.m"
            return;
          }
#line 1390 "hlds_out_goal.m"
        }
#line 1388 "hlds_out_goal.m"
        break;
#line 1388 "hlds_out_goal.m"
      case (MR_Integer) 2:
#line 1409 "hlds_out_goal.m"
        {
#line 1409 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_132_132;
#line 1409 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__EventName_42 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 0)));
#line 1409 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Context_117;
#line 1409 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Functor_118;
#line 1409 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgTerms_119;
#line 1409 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Term_120;

#line 1410 "hlds_out_goal.m"
          {
#line 1410 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
          }
#line 1414 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1411 "hlds_out_goal.m"
            {
#line 1411 "hlds_out_goal.m"
              {
#line 1411 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1412 "hlds_out_goal.m"
              {
#line 1412 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% event call\n");
              }
#line 1413 "hlds_out_goal.m"
              {
#line 1413 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
              }
#line 1411 "hlds_out_goal.m"
            }
#line 1414 "hlds_out_goal.m"
          else
#line 1414 "hlds_out_goal.m"
            {
#line 1414 "hlds_out_goal.m"
            }
#line 1417 "hlds_out_goal.m"
          {
#line 1417 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 1418 "hlds_out_goal.m"
          {
#line 1418 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "event ");
          }
#line 1419 "hlds_out_goal.m"
          {
#line 1419 "hlds_out_goal.m"
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_goal__Context_117);
          }
#line 1420 "hlds_out_goal.m"
          {
#line 1420 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Functor_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1420 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Functor_118, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__EventName_42));
#line 1420 "hlds_out_goal.m"
          }
#line 1850 "hlds.hlds_out.hlds_out_goal.c"
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1421 "hlds_out_goal.m"
          {
#line 1421 "hlds_out_goal.m"
            mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_132_132, hlds__hlds_out__hlds_out_goal__ArgVars_21, &hlds__hlds_out__hlds_out_goal__ArgTerms_119);
          }
#line 1422 "hlds_out_goal.m"
          {
#line 1422 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Term_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1422 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_120, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Functor_118));
#line 1422 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_120, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgTerms_119));
#line 1422 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_120, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_117));
#line 1422 "hlds_out_goal.m"
          }
#line 1423 "hlds_out_goal.m"
          {
#line 1423 "hlds_out_goal.m"
            parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_132_132, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Term_120);
          }
#line 1424 "hlds_out_goal.m"
          {
#line 1424 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1424 "hlds_out_goal.m"
            return;
          }
#line 1409 "hlds_out_goal.m"
        }
#line 1388 "hlds_out_goal.m"
        break;
#line 1388 "hlds_out_goal.m"
      case (MR_Integer) 3:
#line 1426 "hlds_out_goal.m"
        {
#line 1426 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_134_134;
#line 1426 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__CastType_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 0)));
#line 1426 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__CastTypeString_44;
#line 1426 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Context_121;
#line 1426 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Functor_122;
#line 1426 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgTerms_123;
#line 1426 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Term_124;

#line 1427 "hlds_out_goal.m"
          {
#line 1427 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__CastTypeString_44 = hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__CastType_43);
          }
#line 1428 "hlds_out_goal.m"
          {
#line 1428 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
          }
#line 1432 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1429 "hlds_out_goal.m"
            {
#line 1429 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_50_50;
#line 1429 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_53_53;

#line 1429 "hlds_out_goal.m"
              {
#line 1429 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1430 "hlds_out_goal.m"
              {
#line 1430 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1430 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_53_53, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__CastTypeString_44));
#line 1430 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[17])));
#line 1430 "hlds_out_goal.m"
              }
#line 1430 "hlds_out_goal.m"
              {
#line 1430 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1430 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_50_50, 0) = ((MR_Box) ((MR_String) "% "));
#line 1430 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_50_50, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_53_53));
#line 1430 "hlds_out_goal.m"
              }
#line 1430 "hlds_out_goal.m"
              {
#line 1430 "hlds_out_goal.m"
                mercury__io__write_strings_3_p_0(hlds__hlds_out__hlds_out_goal__V_50_50);
              }
#line 1431 "hlds_out_goal.m"
              {
#line 1431 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
              }
#line 1429 "hlds_out_goal.m"
            }
#line 1432 "hlds_out_goal.m"
          else
#line 1432 "hlds_out_goal.m"
            {
#line 1432 "hlds_out_goal.m"
            }
#line 1435 "hlds_out_goal.m"
          {
#line 1435 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 68);
          }
#line 1441 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1436 "hlds_out_goal.m"
            {
#line 1436 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_45;

#line 1436 "hlds_out_goal.m"
              {
#line 1436 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1437 "hlds_out_goal.m"
              {
#line 1437 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% modes: ");
              }
#line 1438 "hlds_out_goal.m"
              {
#line 1438 "hlds_out_goal.m"
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_goal__InstVarSet_45);
              }
#line 1439 "hlds_out_goal.m"
              {
#line 1439 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_mode_list_5_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_goal__InstVarSet_45, hlds__hlds_out__hlds_out_goal__Modes_22);
              }
#line 1440 "hlds_out_goal.m"
              {
#line 1440 "hlds_out_goal.m"
                mercury__io__nl_2_p_0();
              }
#line 1436 "hlds_out_goal.m"
            }
#line 1441 "hlds_out_goal.m"
          else
#line 1441 "hlds_out_goal.m"
            {
#line 1441 "hlds_out_goal.m"
            }
#line 1444 "hlds_out_goal.m"
          {
#line 1444 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Functor_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1444 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Functor_122, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__CastTypeString_44));
#line 1444 "hlds_out_goal.m"
          }
#line 2019 "hlds.hlds_out.hlds_out_goal.c"
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_134_134 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1445 "hlds_out_goal.m"
          {
#line 1445 "hlds_out_goal.m"
            mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_134_134, hlds__hlds_out__hlds_out_goal__ArgVars_21, &hlds__hlds_out__hlds_out_goal__ArgTerms_123);
          }
#line 1446 "hlds_out_goal.m"
          {
#line 1446 "hlds_out_goal.m"
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_goal__Context_121);
          }
#line 1447 "hlds_out_goal.m"
          {
#line 1447 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Term_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1447 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_124, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Functor_122));
#line 1447 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_124, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgTerms_123));
#line 1447 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_124, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_121));
#line 1447 "hlds_out_goal.m"
          }
#line 1448 "hlds_out_goal.m"
          {
#line 1448 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 1449 "hlds_out_goal.m"
          {
#line 1449 "hlds_out_goal.m"
            parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_134_134, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Term_124);
          }
#line 1450 "hlds_out_goal.m"
          {
#line 1450 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1450 "hlds_out_goal.m"
            return;
          }
#line 1426 "hlds_out_goal.m"
        }
#line 1388 "hlds_out_goal.m"
        break;
#line 1388 "hlds_out_goal.m"
    }
#line 1349 "hlds_out_goal.m"
  }
#line 1343 "hlds_out_goal.m"
}

#line 1204 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_p_0(
#line 1204 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_12,
#line 1204 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ConsId_13,
#line 1204 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_14,
#line 1204 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_15,
#line 1204 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ProgVarSet_17,
#line 1204 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_18,
#line 1204 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_19,
#line 1204 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_20)
#line 1204 "hlds_out_goal.m"
{
#line 1210 "hlds_out_goal.m"
  {
#line 1210 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1210 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_27_27;

#line 1211 "hlds_out_goal.m"
    {
#line 1211 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_27_27 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__ConsId_13);
    }
#line 1211 "hlds_out_goal.m"
    {
#line 1211 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_27_27);
    }
#line 1215 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__ArgVars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1213 "hlds_out_goal.m"
      {
#line 1214 "hlds_out_goal.m"
        {
#line 1214 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1214 "hlds_out_goal.m"
          return;
        }
#line 1213 "hlds_out_goal.m"
      }
#line 1215 "hlds_out_goal.m"
    else
#line 1216 "hlds_out_goal.m"
      {
#line 1216 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_24;
#line 1220 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__V_50_50;
#line 1220 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_51_51;
#line 1220 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_52_52;
#line 1220 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_53_53;

#line 1217 "hlds_out_goal.m"
        {
#line 1217 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) " (");
        }
#line 1218 "hlds_out_goal.m"
        {
#line 1218 "hlds_out_goal.m"
          parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ProgVarSet_17, hlds__hlds_out__hlds_out_goal__AppendVarNums_19, hlds__hlds_out__hlds_out_goal__ArgVars_14);
        }
#line 1219 "hlds_out_goal.m"
        {
#line 1219 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
#line 1220 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__DumpOptions_24 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 0)));
#line 1220 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 1)));
#line 1220 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 2)));
#line 1220 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 3)));
#line 1220 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 4)));
#line 1221 "hlds_out_goal.m"
        {
#line 1221 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_24, (MR_Char) 97);
        }
#line 1233 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1227 "hlds_out_goal.m"
          {
#line 1222 "hlds_out_goal.m"
            {
#line 1222 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_24, (MR_Char) 121);
            }
#line 1227 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1223 "hlds_out_goal.m"
              {
#line 1223 "hlds_out_goal.m"
                {
#line 1223 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_20);
                }
#line 1224 "hlds_out_goal.m"
                {
#line 1224 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% arg-modes\n");
                }
#line 1225 "hlds_out_goal.m"
                {
#line 1225 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_mode__mercury_output_structured_uni_mode_list_7_p_0(hlds__hlds_out__hlds_out_goal__ArgModes_15, hlds__hlds_out__hlds_out_goal__Indent_20, (MR_Integer) 1, (MR_Integer) 1, hlds__hlds_out__hlds_out_goal__InstVarSet_18);
#line 1225 "hlds_out_goal.m"
                  return;
                }
#line 1223 "hlds_out_goal.m"
              }
#line 1227 "hlds_out_goal.m"
            else
#line 1228 "hlds_out_goal.m"
              {
#line 1228 "hlds_out_goal.m"
                {
#line 1228 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_20);
                }
#line 1229 "hlds_out_goal.m"
                {
#line 1229 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% arg-modes ");
                }
#line 1230 "hlds_out_goal.m"
                {
#line 1230 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_list_4_p_0(hlds__hlds_out__hlds_out_goal__ArgModes_15, hlds__hlds_out__hlds_out_goal__InstVarSet_18);
                }
#line 1231 "hlds_out_goal.m"
                {
#line 1231 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1231 "hlds_out_goal.m"
                  return;
                }
#line 1228 "hlds_out_goal.m"
              }
#line 1227 "hlds_out_goal.m"
          }
#line 1233 "hlds_out_goal.m"
        else
#line 1233 "hlds_out_goal.m"
          {
#line 1233 "hlds_out_goal.m"
          }
#line 1216 "hlds_out_goal.m"
      }
#line 1210 "hlds_out_goal.m"
  }
#line 1204 "hlds_out_goal.m"
}

#line 1053 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_p_0(
#line 1053 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_10,
#line 1053 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Unification_11,
#line 1053 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ProgVarSet_13,
#line 1053 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_14,
#line 1053 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1053 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16)
#line 1053 "hlds_out_goal.m"
{
#line 1060 "hlds_out_goal.m"
  {
#line 1060 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1060 "hlds_out_goal.m"
#line 1060 "hlds_out_goal.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Unification_11)) {
#line 1060 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1060 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 1077 "hlds_out_goal.m"
        {
#line 1077 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173;
#line 1077 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 0)));
#line 1077 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 1)));
#line 1077 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 2)));
#line 1077 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 3)));
#line 1077 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ConstructHow_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 4)));
#line 1077 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Uniqueness_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 5)));
#line 1077 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__SubInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 6)));
#line 1077 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_27;
#line 1085 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__V_163_163;
#line 1085 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_164_164;
#line 1085 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_165_165;
#line 1085 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_166_166;

#line 1078 "hlds_out_goal.m"
          {
#line 1078 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 1079 "hlds_out_goal.m"
          {
#line 1079 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "% ");
          }
#line 2310 "hlds.hlds_out.hlds_out_goal.c"
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1080 "hlds_out_goal.m"
          {
#line 1080 "hlds_out_goal.m"
            parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Var_20);
          }
#line 1081 "hlds_out_goal.m"
          {
#line 1081 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) " := ");
          }
#line 1082 "hlds_out_goal.m"
          {
#line 1082 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_p_0(hlds__hlds_out__hlds_out_goal__Info_10, hlds__hlds_out__hlds_out_goal__ConsId_21, hlds__hlds_out__hlds_out_goal__ArgVars_22, hlds__hlds_out__hlds_out_goal__ArgModes_23, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__InstVarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 1085 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__DumpOptions_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 0)));
#line 1085 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_163_163 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 1)));
#line 1085 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 2)));
#line 1085 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 3)));
#line 1085 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 4)));
#line 1086 "hlds_out_goal.m"
          {
#line 1086 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_27, (MR_Char) 117);
          }
#line 1157 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1095 "hlds_out_goal.m"
            {
#line 1093 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__TypeCtor_30;
#line 1087 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_28_28;
#line 1087 "hlds_out_goal.m"
              MR_Integer hlds__hlds_out__hlds_out_goal__V_29_29;

#line 1087 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ConsId_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1087 "hlds_out_goal.m"
              if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1087 "hlds_out_goal.m"
                {
#line 1087 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_21, (MR_Integer) 1)));
#line 1087 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_21, (MR_Integer) 2)));
#line 1087 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__TypeCtor_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_21, (MR_Integer) 3)));
#line 1088 "hlds_out_goal.m"
                  {
#line 1088 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorSymName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__TypeCtor_30, (MR_Integer) 0)));
#line 1088 "hlds_out_goal.m"
                    MR_Integer hlds__hlds_out__hlds_out_goal__TypeCtorArity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__TypeCtor_30, (MR_Integer) 1)));
#line 1088 "hlds_out_goal.m"
                    MR_String hlds__hlds_out__hlds_out_goal__TypeCtorSymNameStr_33;
#line 1088 "hlds_out_goal.m"
                    MR_String hlds__hlds_out__hlds_out_goal__V_180_180;
#line 1088 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__V_186_186;
#line 1088 "hlds_out_goal.m"
                    MR_String hlds__hlds_out__hlds_out_goal__V_189_189;

#line 1089 "hlds_out_goal.m"
                    {
#line 1089 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1090 "hlds_out_goal.m"
                    {
#line 1090 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__TypeCtorSymNameStr_33 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorSymName_31);
                    }
#line 1091 "hlds_out_goal.m"
                    {
#line 1091 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% cons_id type_ctor: ");
                    }
#line 2395 "hlds.hlds_out.hlds_out_goal.c"
                    hlds__hlds_out__hlds_out_goal__V_186_186 = (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_4[0];
#line 1092 "hlds_out_goal.m"
                    {
#line 1092 "hlds_out_goal.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_goal__V_186_186, hlds__hlds_out__hlds_out_goal__TypeCtorSymNameStr_33, &hlds__hlds_out__hlds_out_goal__V_180_180);
                    }
#line 1092 "hlds_out_goal.m"
                    {
#line 1092 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_180_180);
                    }
#line 1091 "hlds_out_goal.m"
                    {
#line 1091 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "/");
                    }
#line 1092 "hlds_out_goal.m"
                    {
#line 1092 "hlds_out_goal.m"
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_goal__V_186_186, hlds__hlds_out__hlds_out_goal__TypeCtorArity_32, &hlds__hlds_out__hlds_out_goal__V_189_189);
                    }
#line 1092 "hlds_out_goal.m"
                    {
#line 1092 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_189_189);
                    }
#line 1088 "hlds_out_goal.m"
                  }
#line 1087 "hlds_out_goal.m"
                }
#line 1087 "hlds_out_goal.m"
              else
#line 1093 "hlds_out_goal.m"
                {
#line 1093 "hlds_out_goal.m"
                }
#line 1100 "hlds_out_goal.m"
#line 1100 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__Uniqueness_25) {
#line 1100 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1100 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 1101 "hlds_out_goal.m"
                  {
#line 1101 "hlds_out_goal.m"
                  }
#line 1100 "hlds_out_goal.m"
                  break;
#line 1100 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 1097 "hlds_out_goal.m"
                  {
#line 1098 "hlds_out_goal.m"
                    {
#line 1098 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1099 "hlds_out_goal.m"
                    {
#line 1099 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% cell_is_unique\n");
                    }
#line 1097 "hlds_out_goal.m"
                  }
#line 1100 "hlds_out_goal.m"
                  break;
#line 1100 "hlds_out_goal.m"
              }
#line 1105 "hlds_out_goal.m"
              if ((hlds__hlds_out__hlds_out_goal__SubInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1104 "hlds_out_goal.m"
                {
#line 1104 "hlds_out_goal.m"
                }
#line 1105 "hlds_out_goal.m"
              else
#line 1106 "hlds_out_goal.m"
                {
#line 1106 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__MaybeTakeAddr_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__SubInfo_26, (MR_Integer) 0)));
#line 1106 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__MaybeSize_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__SubInfo_26, (MR_Integer) 1)));

#line 1113 "hlds_out_goal.m"
                  if ((hlds__hlds_out__hlds_out_goal__MaybeTakeAddr_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1114 "hlds_out_goal.m"
                    {
#line 1114 "hlds_out_goal.m"
                    }
#line 1113 "hlds_out_goal.m"
                  else
#line 1108 "hlds_out_goal.m"
                    {
#line 1108 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal__TakeAddressFields_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeTakeAddr_34, (MR_Integer) 0)));

#line 1109 "hlds_out_goal.m"
                      {
#line 1109 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                      }
#line 1110 "hlds_out_goal.m"
                      {
#line 1110 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "% take address fields: ");
                      }
#line 1111 "hlds_out_goal.m"
                      {
#line 1111 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(hlds__hlds_out__hlds_out_goal__TakeAddressFields_36);
                      }
#line 1112 "hlds_out_goal.m"
                      {
#line 1112 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "\n");
                      }
#line 1108 "hlds_out_goal.m"
                    }
#line 1132 "hlds_out_goal.m"
                  if ((hlds__hlds_out__hlds_out_goal__MaybeSize_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1133 "hlds_out_goal.m"
                    {
#line 1133 "hlds_out_goal.m"
                    }
#line 1132 "hlds_out_goal.m"
                  else
#line 1117 "hlds_out_goal.m"
                    {
#line 1117 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal__SizeSource_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeSize_35, (MR_Integer) 0)));

#line 1118 "hlds_out_goal.m"
                      {
#line 1118 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                      }
#line 1119 "hlds_out_goal.m"
                      {
#line 1119 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "% term size ");
                      }
#line 1125 "hlds_out_goal.m"
                      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__SizeSource_37)) == (MR_mktag((MR_Integer) 1))))
#line 1126 "hlds_out_goal.m"
                        {
#line 1126 "hlds_out_goal.m"
                          MR_Word hlds__hlds_out__hlds_out_goal__SizeVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__SizeSource_37, (MR_Integer) 0)));

#line 1127 "hlds_out_goal.m"
                          {
#line 1127 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "var ");
                          }
#line 1128 "hlds_out_goal.m"
                          {
#line 1128 "hlds_out_goal.m"
                            parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__SizeVar_39);
                          }
#line 1130 "hlds_out_goal.m"
                          {
#line 1130 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "\n");
                          }
#line 1126 "hlds_out_goal.m"
                        }
#line 1125 "hlds_out_goal.m"
                      else
#line 1121 "hlds_out_goal.m"
                        {
#line 1121 "hlds_out_goal.m"
                          MR_Integer hlds__hlds_out__hlds_out_goal__KnownSize_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__SizeSource_37, (MR_Integer) 0)));

#line 1122 "hlds_out_goal.m"
                          {
#line 1122 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "const ");
                          }
#line 1123 "hlds_out_goal.m"
                          {
#line 1123 "hlds_out_goal.m"
                            mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__KnownSize_38);
                          }
#line 1124 "hlds_out_goal.m"
                          {
#line 1124 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "\n");
                          }
#line 1121 "hlds_out_goal.m"
                        }
#line 1117 "hlds_out_goal.m"
                    }
#line 1106 "hlds_out_goal.m"
                }
#line 1138 "hlds_out_goal.m"
#line 1138 "hlds_out_goal.m"
              switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ConstructHow_24)) {
#line 1138 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1138 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 1138 "hlds_out_goal.m"
#line 1138 "hlds_out_goal.m"
                  switch (MR_unmkbody(hlds__hlds_out__hlds_out_goal__ConstructHow_24)) {
#line 1138 "hlds_out_goal.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1138 "hlds_out_goal.m"
                    case (MR_Integer) 0:
#line 1139 "hlds_out_goal.m"
                      {
#line 1140 "hlds_out_goal.m"
                        {
#line 1140 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                        }
#line 1141 "hlds_out_goal.m"
                        {
#line 1141 "hlds_out_goal.m"
                          mercury__io__write_string_3_p_0((MR_String) "% construct statically\n");
#line 1141 "hlds_out_goal.m"
                          return;
                        }
#line 1139 "hlds_out_goal.m"
                      }
#line 1138 "hlds_out_goal.m"
                      break;
#line 1138 "hlds_out_goal.m"
                    case (MR_Integer) 1:
#line 1137 "hlds_out_goal.m"
                      {
#line 1137 "hlds_out_goal.m"
                      }
#line 1138 "hlds_out_goal.m"
                      break;
#line 1138 "hlds_out_goal.m"
                  }
#line 1138 "hlds_out_goal.m"
                  break;
#line 1138 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 1143 "hlds_out_goal.m"
                  {
#line 1143 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__CellToReuse_40 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_goal__ConstructHow_24), (MR_Integer) 1);
#line 1143 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__ReuseVar_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CellToReuse_40, (MR_Integer) 0)));
#line 1144 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal___ReuseConsIds_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CellToReuse_40, (MR_Integer) 1)));
#line 1144 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal___FieldAssigns_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CellToReuse_40, (MR_Integer) 2)));

#line 1146 "hlds_out_goal.m"
                    {
#line 1146 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1147 "hlds_out_goal.m"
                    {
#line 1147 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% reuse cell: ");
                    }
#line 1148 "hlds_out_goal.m"
                    {
#line 1148 "hlds_out_goal.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__ReuseVar_41);
                    }
#line 1149 "hlds_out_goal.m"
                    {
#line 1149 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1149 "hlds_out_goal.m"
                      return;
                    }
#line 1143 "hlds_out_goal.m"
                  }
#line 1138 "hlds_out_goal.m"
                  break;
#line 1138 "hlds_out_goal.m"
                case (MR_Integer) 2:
#line 1151 "hlds_out_goal.m"
                  {
#line 1151 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__RegVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ConstructHow_24, (MR_Integer) 0)));

#line 1152 "hlds_out_goal.m"
                    {
#line 1152 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1153 "hlds_out_goal.m"
                    {
#line 1153 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% construct in region: ");
                    }
#line 1154 "hlds_out_goal.m"
                    {
#line 1154 "hlds_out_goal.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__RegVar_44);
                    }
#line 1155 "hlds_out_goal.m"
                    {
#line 1155 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1155 "hlds_out_goal.m"
                      return;
                    }
#line 1151 "hlds_out_goal.m"
                  }
#line 1138 "hlds_out_goal.m"
                  break;
#line 1138 "hlds_out_goal.m"
              }
#line 1095 "hlds_out_goal.m"
            }
#line 1157 "hlds_out_goal.m"
          else
#line 1157 "hlds_out_goal.m"
            {
#line 1157 "hlds_out_goal.m"
            }
#line 1077 "hlds_out_goal.m"
        }
#line 1060 "hlds_out_goal.m"
        break;
#line 1060 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 1162 "hlds_out_goal.m"
        {
#line 1162 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__CanFail_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 4)));
#line 1162 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__CanCGC_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 5)));
#line 1162 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 0)));
#line 1162 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 1)));
#line 1162 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 2)));
#line 1162 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_160 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 3)));
#line 1162 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_161 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 0)));
#line 1163 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__V_167_167 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 1)));
#line 1163 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 2)));
#line 1163 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 3)));
#line 1163 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 4)));

#line 1164 "hlds_out_goal.m"
          {
#line 1164 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_161, (MR_Char) 71);
          }
#line 1169 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1165 "hlds_out_goal.m"
            {
#line 1165 "hlds_out_goal.m"
              {
#line 1165 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1166 "hlds_out_goal.m"
              {
#line 1166 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% Compile time garbage collect: ");
              }
#line 1167 "hlds_out_goal.m"
              {
#line 1167 "hlds_out_goal.m"
                mercury__io__write_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_can_cgc_0, ((MR_Box) (hlds__hlds_out__hlds_out_goal__CanCGC_46)));
              }
#line 1168 "hlds_out_goal.m"
              {
#line 1168 "hlds_out_goal.m"
                mercury__io__nl_2_p_0();
              }
#line 1165 "hlds_out_goal.m"
            }
#line 1169 "hlds_out_goal.m"
          else
#line 1169 "hlds_out_goal.m"
            {
#line 1169 "hlds_out_goal.m"
            }
#line 1172 "hlds_out_goal.m"
          {
#line 1172 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 1173 "hlds_out_goal.m"
          {
#line 1173 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "% ");
          }
#line 1174 "hlds_out_goal.m"
          {
#line 1174 "hlds_out_goal.m"
            parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Var_157);
          }
#line 1178 "hlds_out_goal.m"
#line 1178 "hlds_out_goal.m"
          switch (hlds__hlds_out__hlds_out_goal__CanFail_45) {
#line 1178 "hlds_out_goal.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1178 "hlds_out_goal.m"
            case (MR_Integer) 0:
#line 1176 "hlds_out_goal.m"
              {
#line 1177 "hlds_out_goal.m"
                {
#line 1177 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " \?= ");
                }
#line 1176 "hlds_out_goal.m"
              }
#line 1178 "hlds_out_goal.m"
              break;
#line 1178 "hlds_out_goal.m"
            case (MR_Integer) 1:
#line 1179 "hlds_out_goal.m"
              {
#line 1180 "hlds_out_goal.m"
                {
#line 1180 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " => ");
                }
#line 1179 "hlds_out_goal.m"
              }
#line 1178 "hlds_out_goal.m"
              break;
#line 1178 "hlds_out_goal.m"
          }
#line 1182 "hlds_out_goal.m"
          {
#line 1182 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_p_0(hlds__hlds_out__hlds_out_goal__Info_10, hlds__hlds_out__hlds_out_goal__ConsId_158, hlds__hlds_out__hlds_out_goal__ArgVars_159, hlds__hlds_out__hlds_out_goal__ArgModes_160, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__InstVarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16);
#line 1182 "hlds_out_goal.m"
            return;
          }
#line 1162 "hlds_out_goal.m"
        }
#line 1060 "hlds_out_goal.m"
        break;
#line 1060 "hlds_out_goal.m"
      case (MR_Integer) 2:
#line 1060 "hlds_out_goal.m"
        {
#line 1060 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_171_171;
#line 1060 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__X_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 0)));
#line 1060 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Y_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 1)));

#line 1061 "hlds_out_goal.m"
          {
#line 1061 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 1062 "hlds_out_goal.m"
          {
#line 1062 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "% ");
          }
#line 2864 "hlds.hlds_out.hlds_out_goal.c"
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_171_171 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1063 "hlds_out_goal.m"
          {
#line 1063 "hlds_out_goal.m"
            parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_171_171, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__X_18);
          }
#line 1064 "hlds_out_goal.m"
          {
#line 1064 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) " := ");
          }
#line 1065 "hlds_out_goal.m"
          {
#line 1065 "hlds_out_goal.m"
            parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_171_171, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Y_19);
          }
#line 1066 "hlds_out_goal.m"
          {
#line 1066 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1066 "hlds_out_goal.m"
            return;
          }
#line 1060 "hlds_out_goal.m"
        }
#line 1060 "hlds_out_goal.m"
        break;
#line 1060 "hlds_out_goal.m"
      case (MR_Integer) 3:
#line 1060 "hlds_out_goal.m"
#line 1060 "hlds_out_goal.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 0)))) {
#line 1060 "hlds_out_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1060 "hlds_out_goal.m"
          case (MR_Integer) 0:
#line 1068 "hlds_out_goal.m"
            {
#line 1068 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_172_172;
#line 1068 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__X_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 1)));
#line 1068 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Y_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 2)));

#line 1069 "hlds_out_goal.m"
              {
#line 1069 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1070 "hlds_out_goal.m"
              {
#line 1070 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% ");
              }
#line 2920 "hlds.hlds_out.hlds_out_goal.c"
              hlds__hlds_out__hlds_out_goal__TypeCtorInfo_172_172 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1071 "hlds_out_goal.m"
              {
#line 1071 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_172_172, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__X_155);
              }
#line 1072 "hlds_out_goal.m"
              {
#line 1072 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) " == ");
              }
#line 1073 "hlds_out_goal.m"
              {
#line 1073 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_172_172, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Y_156);
              }
#line 1074 "hlds_out_goal.m"
              {
#line 1074 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1074 "hlds_out_goal.m"
                return;
              }
#line 1068 "hlds_out_goal.m"
            }
#line 1060 "hlds_out_goal.m"
            break;
#line 1060 "hlds_out_goal.m"
          case (MR_Integer) 1:
#line 1185 "hlds_out_goal.m"
            {
#line 1185 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Mode_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 1)));
#line 1185 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__TypeInfoVars_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 3)));
#line 1185 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__CanFail_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_11, (MR_Integer) 2)));

#line 1186 "hlds_out_goal.m"
              {
#line 1186 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1187 "hlds_out_goal.m"
              {
#line 1187 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% ");
              }
#line 1191 "hlds_out_goal.m"
#line 1191 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__CanFail_162) {
#line 1191 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1191 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 1189 "hlds_out_goal.m"
                  {
#line 1190 "hlds_out_goal.m"
                    {
#line 1190 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "can_fail, ");
                    }
#line 1189 "hlds_out_goal.m"
                  }
#line 1191 "hlds_out_goal.m"
                  break;
#line 1191 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 1192 "hlds_out_goal.m"
                  {
#line 1193 "hlds_out_goal.m"
                    {
#line 1193 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "cannot_fail, ");
                    }
#line 1192 "hlds_out_goal.m"
                  }
#line 1191 "hlds_out_goal.m"
                  break;
#line 1191 "hlds_out_goal.m"
              }
#line 1195 "hlds_out_goal.m"
              {
#line 1195 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "mode: ");
              }
#line 1196 "hlds_out_goal.m"
              {
#line 1196 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_p_0(hlds__hlds_out__hlds_out_goal__Mode_47, hlds__hlds_out__hlds_out_goal__InstVarSet_14);
              }
#line 1197 "hlds_out_goal.m"
              {
#line 1197 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 1198 "hlds_out_goal.m"
              {
#line 1198 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1199 "hlds_out_goal.m"
              {
#line 1199 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% type-info vars: ");
              }
#line 1200 "hlds_out_goal.m"
              {
#line 1200 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ProgVarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__TypeInfoVars_48);
              }
#line 1201 "hlds_out_goal.m"
              {
#line 1201 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1201 "hlds_out_goal.m"
                return;
              }
#line 1185 "hlds_out_goal.m"
            }
#line 1060 "hlds_out_goal.m"
            break;
#line 1060 "hlds_out_goal.m"
        }
#line 1060 "hlds_out_goal.m"
        break;
#line 1060 "hlds_out_goal.m"
    }
#line 1060 "hlds_out_goal.m"
  }
#line 1053 "hlds_out_goal.m"
}

#line 326 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__326__1_3_p_0(
#line 326 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_334)
#line 326 "hlds_out_goal.m"
{
#line 326 "hlds_out_goal.m"
  {
#line 326 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 326 "hlds_out_goal.m"
    {
#line 326 "hlds_out_goal.m"
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_334)));
#line 326 "hlds_out_goal.m"
      return;
    }
#line 326 "hlds_out_goal.m"
  }
#line 326 "hlds_out_goal.m"
}

#line 322 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__322__1_3_p_0(
#line 322 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_330)
#line 322 "hlds_out_goal.m"
{
#line 322 "hlds_out_goal.m"
  {
#line 322 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 322 "hlds_out_goal.m"
    {
#line 322 "hlds_out_goal.m"
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_330)));
#line 322 "hlds_out_goal.m"
      return;
    }
#line 322 "hlds_out_goal.m"
  }
#line 322 "hlds_out_goal.m"
}

#line 318 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__318__1_3_p_0(
#line 318 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_326)
#line 318 "hlds_out_goal.m"
{
#line 318 "hlds_out_goal.m"
  {
#line 318 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 318 "hlds_out_goal.m"
    {
#line 318 "hlds_out_goal.m"
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_326)));
#line 318 "hlds_out_goal.m"
      return;
    }
#line 318 "hlds_out_goal.m"
  }
#line 318 "hlds_out_goal.m"
}

#line 314 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__314__1_3_p_0(
#line 314 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_322)
#line 314 "hlds_out_goal.m"
{
#line 314 "hlds_out_goal.m"
  {
#line 314 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 314 "hlds_out_goal.m"
    {
#line 314 "hlds_out_goal.m"
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_322)));
#line 314 "hlds_out_goal.m"
      return;
    }
#line 314 "hlds_out_goal.m"
  }
#line 314 "hlds_out_goal.m"
}

#line 310 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__310__1_3_p_0(
#line 310 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_318)
#line 310 "hlds_out_goal.m"
{
#line 310 "hlds_out_goal.m"
  {
#line 310 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 310 "hlds_out_goal.m"
    {
#line 310 "hlds_out_goal.m"
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_318)));
#line 310 "hlds_out_goal.m"
      return;
    }
#line 310 "hlds_out_goal.m"
  }
#line 310 "hlds_out_goal.m"
}

#line 2153 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0(
#line 2153 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__CompName_7,
#line 2153 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__CompState_8,
#line 2153 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_9,
#line 2153 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_10)
#line 2153 "hlds_out_goal.m"
{
#line 2156 "hlds_out_goal.m"
  {
#line 2156 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 2156 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_25_25;
#line 2156 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Var1_12;
#line 2156 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Var2_13;

#line 2157 "hlds_out_goal.m"
    {
#line 2157 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__CompName_7);
    }
#line 2158 "hlds_out_goal.m"
    {
#line 2158 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 2159 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__Var1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CompState_8, (MR_Integer) 0)));
#line 2159 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__Var2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CompState_8, (MR_Integer) 1)));
#line 3212 "hlds.hlds_out.hlds_out_goal.c"
    hlds__hlds_out__hlds_out_goal__TypeCtorInfo_25_25 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2160 "hlds_out_goal.m"
    {
#line 2160 "hlds_out_goal.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_25_25, hlds__hlds_out__hlds_out_goal__VarSet_9, hlds__hlds_out__hlds_out_goal__AppendVarNums_10, hlds__hlds_out__hlds_out_goal__Var1_12);
    }
#line 2161 "hlds_out_goal.m"
    {
#line 2161 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 2162 "hlds_out_goal.m"
    {
#line 2162 "hlds_out_goal.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_25_25, hlds__hlds_out__hlds_out_goal__VarSet_9, hlds__hlds_out__hlds_out_goal__AppendVarNums_10, hlds__hlds_out__hlds_out_goal__Var2_13);
    }
#line 2163 "hlds_out_goal.m"
    {
#line 2163 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 2163 "hlds_out_goal.m"
      return;
    }
#line 2156 "hlds_out_goal.m"
  }
#line 2153 "hlds_out_goal.m"
}

#line 2144 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_p_0(
#line 2144 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_5,
#line 2144 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MutableVar_6)
#line 2144 "hlds_out_goal.m"
{
#line 2147 "hlds_out_goal.m"
  {
#line 2147 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 2147 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__MutableName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MutableVar_6, (MR_Integer) 0)));
#line 2147 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__StateVarName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MutableVar_6, (MR_Integer) 1)));
#line 2147 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_13_13;
#line 2147 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_16_16;
#line 2147 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_18_18;
#line 2147 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_21_21;

#line 2149 "hlds_out_goal.m"
    {
#line 2149 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_5);
    }
#line 2150 "hlds_out_goal.m"
    {
#line 2150 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_16_16 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__MutableName_8, (MR_String) ": ");
    }
#line 2150 "hlds_out_goal.m"
    {
#line 2150 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "% mutable ", hlds__hlds_out__hlds_out_goal__V_16_16);
    }
#line 2150 "hlds_out_goal.m"
    {
#line 2150 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_13_13);
    }
#line 2151 "hlds_out_goal.m"
    {
#line 2151 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_21_21 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__StateVarName_9, (MR_String) "\n");
    }
#line 2151 "hlds_out_goal.m"
    {
#line 2151 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__hlds_out__hlds_out_goal__V_21_21);
    }
#line 2151 "hlds_out_goal.m"
    {
#line 2151 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_18_18);
#line 2151 "hlds_out_goal.m"
      return;
    }
#line 2147 "hlds_out_goal.m"
  }
#line 2144 "hlds_out_goal.m"
}

#line 2074 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_p_0(
#line 2074 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 2074 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 2074 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 2074 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 2074 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 2074 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 2074 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 2074 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 2074 "hlds_out_goal.m"
{
#line 2080 "hlds_out_goal.m"
  {
#line 2080 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 2080 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ShortHand_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));

#line 2110 "hlds_out_goal.m"
#line 2110 "hlds_out_goal.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ShortHand_20)) {
#line 2110 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2110 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 2129 "hlds_out_goal.m"
        {
#line 2129 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__GoalA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 0)));
#line 2129 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__GoalB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 1)));
#line 2129 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__Indent1_36;

#line 2130 "hlds_out_goal.m"
          {
#line 2130 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2131 "hlds_out_goal.m"
          {
#line 2131 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "( % bi-implication\n");
          }
#line 2132 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Indent1_36 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2133 "hlds_out_goal.m"
          {
#line 2133 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalA_34, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent1_36, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
          }
#line 2135 "hlds_out_goal.m"
          {
#line 2135 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2136 "hlds_out_goal.m"
          {
#line 2136 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "<=>\n");
          }
#line 2137 "hlds_out_goal.m"
          {
#line 2137 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalB_35, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent1_36, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
          }
#line 2139 "hlds_out_goal.m"
          {
#line 2139 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2140 "hlds_out_goal.m"
          {
#line 2140 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 2141 "hlds_out_goal.m"
          {
#line 2141 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 2141 "hlds_out_goal.m"
            return;
          }
#line 2129 "hlds_out_goal.m"
        }
#line 2110 "hlds_out_goal.m"
        break;
#line 2110 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 2084 "hlds_out_goal.m"
        {
#line 2084 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Outer_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 1)));
#line 2084 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Inner_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 2)));
#line 2084 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__MaybeOutputVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 3)));
#line 2084 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__MainGoal_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 4)));
#line 2084 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__OrElseGoals_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 5)));
#line 2084 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__V_95_95;
#line 2083 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal___GoalType_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 0)));
#line 2083 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal___OrElseInners_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 6)));

#line 2085 "hlds_out_goal.m"
          {
#line 2085 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2086 "hlds_out_goal.m"
          {
#line 2086 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "atomic [");
          }
#line 2087 "hlds_out_goal.m"
          {
#line 2087 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0((MR_String) "outer", hlds__hlds_out__hlds_out_goal__Outer_22, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
          }
#line 2089 "hlds_out_goal.m"
          {
#line 2089 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
#line 2090 "hlds_out_goal.m"
          {
#line 2090 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0((MR_String) "inner", hlds__hlds_out__hlds_out_goal__Inner_23, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
          }
#line 2092 "hlds_out_goal.m"
          {
#line 2092 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
#line 2095 "hlds_out_goal.m"
          if ((hlds__hlds_out__hlds_out_goal__MaybeOutputVars_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2094 "hlds_out_goal.m"
            {
#line 2094 "hlds_out_goal.m"
            }
#line 2095 "hlds_out_goal.m"
          else
#line 2096 "hlds_out_goal.m"
            {
#line 2096 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__OutputVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeOutputVars_24, (MR_Integer) 0)));

#line 2097 "hlds_out_goal.m"
              {
#line 2097 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "vars([");
              }
#line 2098 "hlds_out_goal.m"
              {
#line 2098 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__OutputVars_28);
              }
#line 2099 "hlds_out_goal.m"
              {
#line 2099 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "])");
              }
#line 2096 "hlds_out_goal.m"
            }
#line 2101 "hlds_out_goal.m"
          {
#line 2101 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "] (\n");
          }
#line 2104 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_95_95 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2103 "hlds_out_goal.m"
          {
#line 2103 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__MainGoal_25, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_95_95, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
          }
#line 2105 "hlds_out_goal.m"
          {
#line 2105 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__OrElseGoals_26, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_String) "or_else\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
          }
#line 2107 "hlds_out_goal.m"
          {
#line 2107 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2108 "hlds_out_goal.m"
          {
#line 2108 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 2109 "hlds_out_goal.m"
          {
#line 2109 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 2109 "hlds_out_goal.m"
            return;
          }
#line 2084 "hlds_out_goal.m"
        }
#line 2110 "hlds_out_goal.m"
        break;
#line 2110 "hlds_out_goal.m"
      case (MR_Integer) 2:
#line 2111 "hlds_out_goal.m"
        {
#line 2111 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__MaybeIO_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 0)));
#line 2111 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__SubGoal_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 2)));
#line 2111 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__V_69_69;
#line 2111 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 1)));

#line 2112 "hlds_out_goal.m"
          {
#line 2112 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2113 "hlds_out_goal.m"
          {
#line 2113 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "( % try\n");
          }
#line 2120 "hlds_out_goal.m"
          if ((hlds__hlds_out__hlds_out_goal__MaybeIO_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2121 "hlds_out_goal.m"
            {
#line 2121 "hlds_out_goal.m"
            }
#line 2120 "hlds_out_goal.m"
          else
#line 2115 "hlds_out_goal.m"
            {
#line 2115 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__IOVarA_32;
#line 2115 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__IOVarB_33;
#line 2115 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeIO_29, (MR_Integer) 0)));
#line 2115 "hlds_out_goal.m"
              MR_Integer hlds__hlds_out__hlds_out_goal__V_58_58;
#line 2115 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_63_63;
#line 2115 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_65_65;

#line 2115 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__IOVarA_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_57_57, (MR_Integer) 0)));
#line 2115 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__IOVarB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_57_57, (MR_Integer) 1)));
#line 2116 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_58_58 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2116 "hlds_out_goal.m"
              {
#line 2116 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__V_58_58);
              }
#line 2117 "hlds_out_goal.m"
              {
#line 2117 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% io(");
              }
#line 2118 "hlds_out_goal.m"
              {
#line 2118 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2118 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_65_65, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__IOVarB_33));
#line 2118 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2118 "hlds_out_goal.m"
              }
#line 2118 "hlds_out_goal.m"
              {
#line 2118 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2118 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_63_63, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__IOVarA_32));
#line 2118 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_63_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_65_65));
#line 2118 "hlds_out_goal.m"
              }
#line 2118 "hlds_out_goal.m"
              {
#line 2118 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_63_63);
              }
#line 2119 "hlds_out_goal.m"
              {
#line 2119 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) ")\n");
              }
#line 2115 "hlds_out_goal.m"
            }
#line 2124 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_69_69 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2123 "hlds_out_goal.m"
          {
#line 2123 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__SubGoal_31, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_69_69, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
          }
#line 2125 "hlds_out_goal.m"
          {
#line 2125 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2126 "hlds_out_goal.m"
          {
#line 2126 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 2127 "hlds_out_goal.m"
          {
#line 2127 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 2127 "hlds_out_goal.m"
            return;
          }
#line 2111 "hlds_out_goal.m"
        }
#line 2110 "hlds_out_goal.m"
        break;
#line 2110 "hlds_out_goal.m"
    }
#line 2080 "hlds_out_goal.m"
  }
#line 2074 "hlds_out_goal.m"
}

#line 2044 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_3(
#line 2044 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 2044 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 2044 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 2044 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 2044 "hlds_out_goal.m"
{
#line 2044 "hlds_out_goal.m"
  {
#line 2044 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 2044 "hlds_out_goal.m"
    {
#line 2044 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 2044 "hlds_out_goal.m"
      return;
    }
#line 2044 "hlds_out_goal.m"
  }
#line 2044 "hlds_out_goal.m"
}

#line 2031 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_2(
#line 2031 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 2031 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 2031 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 2031 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 2031 "hlds_out_goal.m"
{
#line 2031 "hlds_out_goal.m"
  {
#line 2031 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 2031 "hlds_out_goal.m"
    {
#line 2031 "hlds_out_goal.m"
      parse_tree__mercury_to_mercury__mercury_output_trace_runtime_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 2031 "hlds_out_goal.m"
      return;
    }
#line 2031 "hlds_out_goal.m"
  }
#line 2031 "hlds_out_goal.m"
}

#line 2021 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_1(
#line 2021 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 2021 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 2021 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 2021 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 2021 "hlds_out_goal.m"
{
#line 2021 "hlds_out_goal.m"
  {
#line 2021 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 2021 "hlds_out_goal.m"
    {
#line 2021 "hlds_out_goal.m"
      parse_tree__mercury_to_mercury__mercury_output_trace_compiletime_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 2021 "hlds_out_goal.m"
      return;
    }
#line 2021 "hlds_out_goal.m"
  }
#line 2021 "hlds_out_goal.m"
}

#line 1859 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0(
#line 1859 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40,
#line 1859 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1859 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1859 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1859 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1859 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1859 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1859 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 1859 "hlds_out_goal.m"
{
#line 1865 "hlds_out_goal.m"
  {
#line 1865 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1865 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Reason_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));
#line 1865 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 2)));
#line 1865 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117;
#line 1865 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__V_210_210;

#line 1867 "hlds_out_goal.m"
    {
#line 1867 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1873 "hlds_out_goal.m"
#line 1873 "hlds_out_goal.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Reason_20)) {
#line 1873 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1873 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 1869 "hlds_out_goal.m"
        {
#line 1869 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)));

#line 1870 "hlds_out_goal.m"
          {
#line 1870 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "some [");
          }
#line 1871 "hlds_out_goal.m"
          {
#line 1871 "hlds_out_goal.m"
            parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Vars_22);
          }
#line 1872 "hlds_out_goal.m"
          {
#line 1872 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "] (\n");
          }
#line 1869 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1869 "hlds_out_goal.m"
        }
#line 1873 "hlds_out_goal.m"
        break;
#line 1873 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 1887 "hlds_out_goal.m"
        {
#line 1887 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Kind_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));
#line 1887 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Vars_218 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)));

#line 1891 "hlds_out_goal.m"
#line 1891 "hlds_out_goal.m"
          switch (hlds__hlds_out__hlds_out_goal__Kind_24) {
#line 1891 "hlds_out_goal.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1891 "hlds_out_goal.m"
            case (MR_Integer) 1:
#line 1892 "hlds_out_goal.m"
              {
#line 1893 "hlds_out_goal.m"
                {
#line 1893 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "promise_equivalent_solution_sets");
                }
#line 1892 "hlds_out_goal.m"
              }
#line 1891 "hlds_out_goal.m"
              break;
#line 1891 "hlds_out_goal.m"
            case (MR_Integer) 2:
#line 1895 "hlds_out_goal.m"
              {
#line 1896 "hlds_out_goal.m"
                {
#line 1896 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "arbitrary");
                }
#line 1895 "hlds_out_goal.m"
              }
#line 1891 "hlds_out_goal.m"
              break;
#line 1891 "hlds_out_goal.m"
            case (MR_Integer) 0:
#line 1889 "hlds_out_goal.m"
              {
#line 1890 "hlds_out_goal.m"
                {
#line 1890 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "promise_equivalent_solutions");
                }
#line 1889 "hlds_out_goal.m"
              }
#line 1891 "hlds_out_goal.m"
              break;
#line 1891 "hlds_out_goal.m"
          }
#line 1898 "hlds_out_goal.m"
          {
#line 1898 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) " [");
          }
#line 1899 "hlds_out_goal.m"
          {
#line 1899 "hlds_out_goal.m"
            parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Vars_218);
          }
#line 1900 "hlds_out_goal.m"
          {
#line 1900 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "] (\n");
          }
#line 1887 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1887 "hlds_out_goal.m"
        }
#line 1873 "hlds_out_goal.m"
        break;
#line 1873 "hlds_out_goal.m"
      case (MR_Integer) 2:
#line 1874 "hlds_out_goal.m"
        {
#line 1874 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Purity_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)));

#line 1878 "hlds_out_goal.m"
#line 1878 "hlds_out_goal.m"
          switch (hlds__hlds_out__hlds_out_goal__Purity_23) {
#line 1878 "hlds_out_goal.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1878 "hlds_out_goal.m"
            case (MR_Integer) 2:
#line 1882 "hlds_out_goal.m"
              {
#line 1883 "hlds_out_goal.m"
                {
#line 1883 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "promise_impure (");
                }
#line 1882 "hlds_out_goal.m"
              }
#line 1878 "hlds_out_goal.m"
              break;
#line 1878 "hlds_out_goal.m"
            case (MR_Integer) 0:
#line 1876 "hlds_out_goal.m"
              {
#line 1877 "hlds_out_goal.m"
                {
#line 1877 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "promise_pure (");
                }
#line 1876 "hlds_out_goal.m"
              }
#line 1878 "hlds_out_goal.m"
              break;
#line 1878 "hlds_out_goal.m"
            case (MR_Integer) 1:
#line 1879 "hlds_out_goal.m"
              {
#line 1880 "hlds_out_goal.m"
                {
#line 1880 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "promise_semipure (");
                }
#line 1879 "hlds_out_goal.m"
              }
#line 1878 "hlds_out_goal.m"
              break;
#line 1878 "hlds_out_goal.m"
          }
#line 1885 "hlds_out_goal.m"
          {
#line 1885 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 1874 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1874 "hlds_out_goal.m"
        }
#line 1873 "hlds_out_goal.m"
        break;
#line 1873 "hlds_out_goal.m"
      case (MR_Integer) 3:
#line 1873 "hlds_out_goal.m"
#line 1873 "hlds_out_goal.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)))) {
#line 1873 "hlds_out_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1873 "hlds_out_goal.m"
          case (MR_Integer) 0:
#line 1902 "hlds_out_goal.m"
            {
#line 1902 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Detism_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

#line 1906 "hlds_out_goal.m"
#line 1906 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__Detism_25) {
#line 1906 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1906 "hlds_out_goal.m"
                case (MR_Integer) 4:
#line 1916 "hlds_out_goal.m"
                  {
#line 1917 "hlds_out_goal.m"
                    {
#line 1917 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_cc_multi");
                    }
#line 1916 "hlds_out_goal.m"
                  }
#line 1906 "hlds_out_goal.m"
                  break;
#line 1906 "hlds_out_goal.m"
                case (MR_Integer) 5:
#line 1919 "hlds_out_goal.m"
                  {
#line 1920 "hlds_out_goal.m"
                    {
#line 1920 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_cc_nondet");
                    }
#line 1919 "hlds_out_goal.m"
                  }
#line 1906 "hlds_out_goal.m"
                  break;
#line 1906 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 1904 "hlds_out_goal.m"
                  {
#line 1905 "hlds_out_goal.m"
                    {
#line 1905 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_det");
                    }
#line 1904 "hlds_out_goal.m"
                  }
#line 1906 "hlds_out_goal.m"
                  break;
#line 1906 "hlds_out_goal.m"
                case (MR_Integer) 6:
#line 1925 "hlds_out_goal.m"
                  {
#line 1926 "hlds_out_goal.m"
                    {
#line 1926 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_erroneous");
                    }
#line 1925 "hlds_out_goal.m"
                  }
#line 1906 "hlds_out_goal.m"
                  break;
#line 1906 "hlds_out_goal.m"
                case (MR_Integer) 7:
#line 1922 "hlds_out_goal.m"
                  {
#line 1923 "hlds_out_goal.m"
                    {
#line 1923 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_failure");
                    }
#line 1922 "hlds_out_goal.m"
                  }
#line 1906 "hlds_out_goal.m"
                  break;
#line 1906 "hlds_out_goal.m"
                case (MR_Integer) 2:
#line 1913 "hlds_out_goal.m"
                  {
#line 1914 "hlds_out_goal.m"
                    {
#line 1914 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_multi");
                    }
#line 1913 "hlds_out_goal.m"
                  }
#line 1906 "hlds_out_goal.m"
                  break;
#line 1906 "hlds_out_goal.m"
                case (MR_Integer) 3:
#line 1910 "hlds_out_goal.m"
                  {
#line 1911 "hlds_out_goal.m"
                    {
#line 1911 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_nondet");
                    }
#line 1910 "hlds_out_goal.m"
                  }
#line 1906 "hlds_out_goal.m"
                  break;
#line 1906 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 1907 "hlds_out_goal.m"
                  {
#line 1908 "hlds_out_goal.m"
                    {
#line 1908 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_semidet");
                    }
#line 1907 "hlds_out_goal.m"
                  }
#line 1906 "hlds_out_goal.m"
                  break;
#line 1906 "hlds_out_goal.m"
              }
#line 1928 "hlds_out_goal.m"
              {
#line 1928 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) " (\n");
              }
#line 1902 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1902 "hlds_out_goal.m"
            }
#line 1873 "hlds_out_goal.m"
            break;
#line 1873 "hlds_out_goal.m"
          case (MR_Integer) 1:
#line 1930 "hlds_out_goal.m"
            {
#line 1930 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

#line 1931 "hlds_out_goal.m"
              {
#line 1931 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "require_complete_switch [");
              }
#line 1932 "hlds_out_goal.m"
              {
#line 1932 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Var_26);
              }
#line 1933 "hlds_out_goal.m"
              {
#line 1933 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "] (\n");
              }
#line 1930 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1930 "hlds_out_goal.m"
            }
#line 1873 "hlds_out_goal.m"
            break;
#line 1873 "hlds_out_goal.m"
          case (MR_Integer) 2:
#line 1935 "hlds_out_goal.m"
            {
#line 1935 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Detism_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 2)));
#line 1935 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

#line 1939 "hlds_out_goal.m"
#line 1939 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__Detism_219) {
#line 1939 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1939 "hlds_out_goal.m"
                case (MR_Integer) 4:
#line 1949 "hlds_out_goal.m"
                  {
#line 1950 "hlds_out_goal.m"
                    {
#line 1950 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_multi");
                    }
#line 1949 "hlds_out_goal.m"
                  }
#line 1939 "hlds_out_goal.m"
                  break;
#line 1939 "hlds_out_goal.m"
                case (MR_Integer) 5:
#line 1952 "hlds_out_goal.m"
                  {
#line 1953 "hlds_out_goal.m"
                    {
#line 1953 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_nondet");
                    }
#line 1952 "hlds_out_goal.m"
                  }
#line 1939 "hlds_out_goal.m"
                  break;
#line 1939 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 1937 "hlds_out_goal.m"
                  {
#line 1938 "hlds_out_goal.m"
                    {
#line 1938 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_det");
                    }
#line 1937 "hlds_out_goal.m"
                  }
#line 1939 "hlds_out_goal.m"
                  break;
#line 1939 "hlds_out_goal.m"
                case (MR_Integer) 6:
#line 1958 "hlds_out_goal.m"
                  {
#line 1959 "hlds_out_goal.m"
                    {
#line 1959 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_erroneous");
                    }
#line 1958 "hlds_out_goal.m"
                  }
#line 1939 "hlds_out_goal.m"
                  break;
#line 1939 "hlds_out_goal.m"
                case (MR_Integer) 7:
#line 1955 "hlds_out_goal.m"
                  {
#line 1956 "hlds_out_goal.m"
                    {
#line 1956 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_failure");
                    }
#line 1955 "hlds_out_goal.m"
                  }
#line 1939 "hlds_out_goal.m"
                  break;
#line 1939 "hlds_out_goal.m"
                case (MR_Integer) 2:
#line 1946 "hlds_out_goal.m"
                  {
#line 1947 "hlds_out_goal.m"
                    {
#line 1947 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_multi");
                    }
#line 1946 "hlds_out_goal.m"
                  }
#line 1939 "hlds_out_goal.m"
                  break;
#line 1939 "hlds_out_goal.m"
                case (MR_Integer) 3:
#line 1943 "hlds_out_goal.m"
                  {
#line 1944 "hlds_out_goal.m"
                    {
#line 1944 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_nondet");
                    }
#line 1943 "hlds_out_goal.m"
                  }
#line 1939 "hlds_out_goal.m"
                  break;
#line 1939 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 1940 "hlds_out_goal.m"
                  {
#line 1941 "hlds_out_goal.m"
                    {
#line 1941 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_semidet");
                    }
#line 1940 "hlds_out_goal.m"
                  }
#line 1939 "hlds_out_goal.m"
                  break;
#line 1939 "hlds_out_goal.m"
              }
#line 1961 "hlds_out_goal.m"
              {
#line 1961 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) " [");
              }
#line 1962 "hlds_out_goal.m"
              {
#line 1962 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Var_220);
              }
#line 1963 "hlds_out_goal.m"
              {
#line 1963 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "] (\n");
              }
#line 1935 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1935 "hlds_out_goal.m"
            }
#line 1873 "hlds_out_goal.m"
            break;
#line 1873 "hlds_out_goal.m"
          case (MR_Integer) 3:
#line 1873 "hlds_out_goal.m"
            {
#line 1873 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

#line 1873 "hlds_out_goal.m"
#line 1873 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__V_253_253) {
#line 1873 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1873 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 1980 "hlds_out_goal.m"
                  {
#line 1981 "hlds_out_goal.m"
                    {
#line 1981 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(\n");
                    }
#line 1982 "hlds_out_goal.m"
                    {
#line 1982 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1983 "hlds_out_goal.m"
                    {
#line 1983 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% commit(dont_force_pruning)\n");
                    }
#line 1980 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1980 "hlds_out_goal.m"
                  }
#line 1873 "hlds_out_goal.m"
                  break;
#line 1873 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 1975 "hlds_out_goal.m"
                  {
#line 1976 "hlds_out_goal.m"
                    {
#line 1976 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(\n");
                    }
#line 1977 "hlds_out_goal.m"
                    {
#line 1977 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1978 "hlds_out_goal.m"
                    {
#line 1978 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% commit(force_pruning)\n");
                    }
#line 1975 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1975 "hlds_out_goal.m"
                  }
#line 1873 "hlds_out_goal.m"
                  break;
#line 1873 "hlds_out_goal.m"
              }
#line 1873 "hlds_out_goal.m"
            }
#line 1873 "hlds_out_goal.m"
            break;
#line 1873 "hlds_out_goal.m"
          case (MR_Integer) 4:
#line 1873 "hlds_out_goal.m"
            {
#line 1873 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

#line 1873 "hlds_out_goal.m"
#line 1873 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__V_252_252) {
#line 1873 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1873 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 1970 "hlds_out_goal.m"
                  {
#line 1971 "hlds_out_goal.m"
                    {
#line 1971 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(\n");
                    }
#line 1972 "hlds_out_goal.m"
                    {
#line 1972 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1973 "hlds_out_goal.m"
                    {
#line 1973 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% barrier(not_removable)\n");
                    }
#line 1970 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1970 "hlds_out_goal.m"
                  }
#line 1873 "hlds_out_goal.m"
                  break;
#line 1873 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 1965 "hlds_out_goal.m"
                  {
#line 1966 "hlds_out_goal.m"
                    {
#line 1966 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(\n");
                    }
#line 1967 "hlds_out_goal.m"
                    {
#line 1967 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1968 "hlds_out_goal.m"
                    {
#line 1968 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% barrier(removable)\n");
                    }
#line 1965 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 1965 "hlds_out_goal.m"
                  }
#line 1873 "hlds_out_goal.m"
                  break;
#line 1873 "hlds_out_goal.m"
              }
#line 1873 "hlds_out_goal.m"
            }
#line 1873 "hlds_out_goal.m"
            break;
#line 1873 "hlds_out_goal.m"
          case (MR_Integer) 5:
#line 1985 "hlds_out_goal.m"
            {
#line 1985 "hlds_out_goal.m"
              MR_String hlds__hlds_out__hlds_out_goal__DumpOptionsBackup_27;
#line 1985 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Kind_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 2)));
#line 1985 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));
#line 1985 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_224_224;
#line 1985 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_225_225;
#line 1985 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_226_226;
#line 2009 "hlds_out_goal.m"
              MR_String hlds__hlds_out__hlds_out_goal__V_223_223;

#line 1986 "hlds_out_goal.m"
              {
#line 1986 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "(\n");
              }
#line 1987 "hlds_out_goal.m"
              {
#line 1987 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1988 "hlds_out_goal.m"
              {
#line 1988 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% from_ground_term [");
              }
#line 1989 "hlds_out_goal.m"
              {
#line 1989 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Var_222);
              }
#line 1990 "hlds_out_goal.m"
              {
#line 1990 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
#line 1994 "hlds_out_goal.m"
#line 1994 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__Kind_221) {
#line 1994 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1994 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 1995 "hlds_out_goal.m"
                  {
#line 1996 "hlds_out_goal.m"
                    {
#line 1996 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "construct");
                    }
#line 1995 "hlds_out_goal.m"
                  }
#line 1994 "hlds_out_goal.m"
                  break;
#line 1994 "hlds_out_goal.m"
                case (MR_Integer) 2:
#line 1998 "hlds_out_goal.m"
                  {
#line 1999 "hlds_out_goal.m"
                    {
#line 1999 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "deconstruct");
                    }
#line 1998 "hlds_out_goal.m"
                  }
#line 1994 "hlds_out_goal.m"
                  break;
#line 1994 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 1992 "hlds_out_goal.m"
                  {
#line 1993 "hlds_out_goal.m"
                    {
#line 1993 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "initial");
                    }
#line 1992 "hlds_out_goal.m"
                  }
#line 1994 "hlds_out_goal.m"
                  break;
#line 1994 "hlds_out_goal.m"
                case (MR_Integer) 3:
#line 2001 "hlds_out_goal.m"
                  {
#line 2002 "hlds_out_goal.m"
                    {
#line 2002 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "other");
                    }
#line 2001 "hlds_out_goal.m"
                  }
#line 1994 "hlds_out_goal.m"
                  break;
#line 1994 "hlds_out_goal.m"
              }
#line 2004 "hlds_out_goal.m"
              {
#line 2004 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "]\n");
              }
#line 2009 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_223_223 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 2009 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__DumpOptionsBackup_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40, (MR_Integer) 1)));
#line 2009 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 2009 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 2009 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40, (MR_Integer) 4)));
#line 2010 "hlds_out_goal.m"
              {
#line 2010 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2010 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__DumpOptionsBackup_27));
#line 2010 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__DumpOptionsBackup_27));
#line 2010 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_224_224));
#line 2010 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_225_225));
#line 2010 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_226_226));
#line 2010 "hlds_out_goal.m"
              }
#line 1985 "hlds_out_goal.m"
            }
#line 1873 "hlds_out_goal.m"
            break;
#line 1873 "hlds_out_goal.m"
          case (MR_Integer) 6:
#line 2013 "hlds_out_goal.m"
            {
#line 2013 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__MaybeCompileTime_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));
#line 2013 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__MaybeRunTime_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 2)));
#line 2013 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__MaybeIO_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 3)));
#line 2013 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__MutableVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 4)));
#line 2013 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__QuantVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 5)));
#line 2013 "hlds_out_goal.m"
              MR_Integer hlds__hlds_out__hlds_out_goal__V_57_57;
#line 2013 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_88_88;
#line 2013 "hlds_out_goal.m"
              MR_Integer hlds__hlds_out__hlds_out_goal__V_90_90;
#line 2013 "hlds_out_goal.m"
              MR_Integer hlds__hlds_out__hlds_out_goal__V_92_92;
#line 2044 "hlds_out_goal.m"
              MR_Box hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_IO_89_89;

#line 2014 "hlds_out_goal.m"
              {
#line 2014 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "(\n");
              }
#line 2015 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_57_57 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2015 "hlds_out_goal.m"
              {
#line 2015 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__V_57_57);
              }
#line 2016 "hlds_out_goal.m"
              {
#line 2016 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% trace\n");
              }
#line 2024 "hlds_out_goal.m"
              if ((hlds__hlds_out__hlds_out_goal__MaybeCompileTime_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2025 "hlds_out_goal.m"
                {
#line 2025 "hlds_out_goal.m"
                }
#line 2024 "hlds_out_goal.m"
              else
#line 2018 "hlds_out_goal.m"
                {
#line 2018 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__CompileTime_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeCompileTime_28, (MR_Integer) 0)));
#line 2018 "hlds_out_goal.m"
                  MR_Integer hlds__hlds_out__hlds_out_goal__V_62_62 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);

#line 2019 "hlds_out_goal.m"
                  {
#line 2019 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__V_62_62);
                  }
#line 2020 "hlds_out_goal.m"
                  {
#line 2020 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "% compiletime(");
                  }
#line 2021 "hlds_out_goal.m"
                  {
#line 2021 "hlds_out_goal.m"
                    parse_tree__mercury_to_mercury__mercury_output_trace_expr_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[8], hlds__hlds_out__hlds_out_goal__CompileTime_33);
                  }
#line 2023 "hlds_out_goal.m"
                  {
#line 2023 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) ")\n");
                  }
#line 2018 "hlds_out_goal.m"
                }
#line 2034 "hlds_out_goal.m"
              if ((hlds__hlds_out__hlds_out_goal__MaybeRunTime_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2035 "hlds_out_goal.m"
                {
#line 2035 "hlds_out_goal.m"
                }
#line 2034 "hlds_out_goal.m"
              else
#line 2028 "hlds_out_goal.m"
                {
#line 2028 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__RunTime_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeRunTime_29, (MR_Integer) 0)));
#line 2028 "hlds_out_goal.m"
                  MR_Integer hlds__hlds_out__hlds_out_goal__V_71_71 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);

#line 2029 "hlds_out_goal.m"
                  {
#line 2029 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__V_71_71);
                  }
#line 2030 "hlds_out_goal.m"
                  {
#line 2030 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "% runtime(");
                  }
#line 2031 "hlds_out_goal.m"
                  {
#line 2031 "hlds_out_goal.m"
                    parse_tree__mercury_to_mercury__mercury_output_trace_expr_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[9], hlds__hlds_out__hlds_out_goal__RunTime_34);
                  }
#line 2033 "hlds_out_goal.m"
                  {
#line 2033 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) ")\n");
                  }
#line 2028 "hlds_out_goal.m"
                }
#line 2041 "hlds_out_goal.m"
              if ((hlds__hlds_out__hlds_out_goal__MaybeIO_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2042 "hlds_out_goal.m"
                {
#line 2042 "hlds_out_goal.m"
                }
#line 2041 "hlds_out_goal.m"
              else
#line 2038 "hlds_out_goal.m"
                {
#line 2038 "hlds_out_goal.m"
                  MR_String hlds__hlds_out__hlds_out_goal__IOStateVarName_35 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeIO_30, (MR_Integer) 0)));
#line 2038 "hlds_out_goal.m"
                  MR_Integer hlds__hlds_out__hlds_out_goal__V_80_80 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2038 "hlds_out_goal.m"
                  MR_String hlds__hlds_out__hlds_out_goal__V_83_83;
#line 2038 "hlds_out_goal.m"
                  MR_String hlds__hlds_out__hlds_out_goal__V_86_86;

#line 2039 "hlds_out_goal.m"
                  {
#line 2039 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__V_80_80);
                  }
#line 2040 "hlds_out_goal.m"
                  {
#line 2040 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__V_86_86 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__IOStateVarName_35, (MR_String) ")\n");
                  }
#line 2040 "hlds_out_goal.m"
                  {
#line 2040 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) "% io(!", hlds__hlds_out__hlds_out_goal__V_86_86);
                  }
#line 2040 "hlds_out_goal.m"
                  {
#line 2040 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_83_83);
                  }
#line 2038 "hlds_out_goal.m"
                }
#line 2044 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_90_90 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2044 "hlds_out_goal.m"
              {
#line 2044 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2044 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_88_88, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]));
#line 2044 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_88_88, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_3));
#line 2044 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_88_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2044 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_88_88, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_90_90));
#line 2044 "hlds_out_goal.m"
              }
#line 2044 "hlds_out_goal.m"
              {
#line 2044 "hlds_out_goal.m"
                mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_goal__V_88_88, hlds__hlds_out__hlds_out_goal__MutableVars_31, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_IO_89_89);
              }
#line 2046 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_92_92 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2046 "hlds_out_goal.m"
              {
#line 2046 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__V_92_92);
              }
#line 2047 "hlds_out_goal.m"
              {
#line 2047 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% quantified vars ");
              }
#line 2048 "hlds_out_goal.m"
              {
#line 2048 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__QuantVars_32);
              }
#line 2049 "hlds_out_goal.m"
              {
#line 2049 "hlds_out_goal.m"
                mercury__io__nl_2_p_0();
              }
#line 2013 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 2013 "hlds_out_goal.m"
            }
#line 1873 "hlds_out_goal.m"
            break;
#line 1873 "hlds_out_goal.m"
          case (MR_Integer) 7:
#line 2051 "hlds_out_goal.m"
            {
#line 2051 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__LCVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));
#line 2051 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__LCSVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 2)));
#line 2051 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__UseParentStack_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 3)));
#line 2051 "hlds_out_goal.m"
              MR_String hlds__hlds_out__hlds_out_goal__UseParentStackStr_39;
#line 2051 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_49_49;
#line 2051 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_51_51;
#line 2051 "hlds_out_goal.m"
              MR_String hlds__hlds_out__hlds_out_goal__V_257_257;

#line 2055 "hlds_out_goal.m"
#line 2055 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__UseParentStack_38) {
#line 2055 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 2055 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 2056 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__UseParentStackStr_39 = (MR_String) "using_child_stack";
#line 2055 "hlds_out_goal.m"
                  break;
#line 2055 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 2053 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__UseParentStackStr_39 = (MR_String) "using_parent_stack_frame";
#line 2055 "hlds_out_goal.m"
                  break;
#line 2055 "hlds_out_goal.m"
              }
#line 2059 "hlds_out_goal.m"
              {
#line 2059 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "loop_control_spawn_off_");
              }
#line 2059 "hlds_out_goal.m"
              {
#line 2059 "hlds_out_goal.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_4[0], hlds__hlds_out__hlds_out_goal__UseParentStackStr_39, &hlds__hlds_out__hlds_out_goal__V_257_257);
              }
#line 2059 "hlds_out_goal.m"
              {
#line 2059 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_257_257);
              }
#line 2059 "hlds_out_goal.m"
              {
#line 2059 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 2060 "hlds_out_goal.m"
              {
#line 2060 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2060 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_51_51, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__LCSVar_37));
#line 2060 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2060 "hlds_out_goal.m"
              }
#line 2060 "hlds_out_goal.m"
              {
#line 2060 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2060 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_49_49, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__LCVar_36));
#line 2060 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_49_49, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_51_51));
#line 2060 "hlds_out_goal.m"
              }
#line 2060 "hlds_out_goal.m"
              {
#line 2060 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_49_49);
              }
#line 2061 "hlds_out_goal.m"
              {
#line 2061 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) ") (\n");
              }
#line 2051 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_40;
#line 2051 "hlds_out_goal.m"
            }
#line 1873 "hlds_out_goal.m"
            break;
#line 1873 "hlds_out_goal.m"
        }
#line 1873 "hlds_out_goal.m"
        break;
#line 1873 "hlds_out_goal.m"
    }
#line 2064 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_210_210 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2063 "hlds_out_goal.m"
    {
#line 2063 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_117_117, hlds__hlds_out__hlds_out_goal__Goal_21, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_210_210, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
    }
#line 2065 "hlds_out_goal.m"
    {
#line 2065 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 2066 "hlds_out_goal.m"
    {
#line 2066 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 2067 "hlds_out_goal.m"
    {
#line 2067 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 2067 "hlds_out_goal.m"
      return;
    }
#line 1865 "hlds_out_goal.m"
  }
#line 1859 "hlds_out_goal.m"
}

#line 1813 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_p_0(
#line 1813 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1813 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1813 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1813 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1813 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1813 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1813 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1813 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 1813 "hlds_out_goal.m"
{
#line 1819 "hlds_out_goal.m"
  {
#line 1819 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1819 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Cond_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 2)));
#line 1819 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Then_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 3)));
#line 1819 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Else_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 4)));
#line 1819 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__Indent1_24;
#line 1819 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_25;
#line 1820 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));
#line 1834 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_59_59;
#line 1834 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_60_60;
#line 1834 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_61_61;
#line 1834 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_62_62;
#line 1836 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_50_50;
#line 1837 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_30_30;
#line 1837 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_26_26;
#line 1837 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_27_27;
#line 1837 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_28_28;
#line 1837 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_29_29;

#line 1821 "hlds_out_goal.m"
    {
#line 1821 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1822 "hlds_out_goal.m"
    {
#line 1822 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "(if");
    }
#line 1824 "hlds_out_goal.m"
    {
#line 1824 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1825 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__Indent1_24 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1826 "hlds_out_goal.m"
    {
#line 1826 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Cond_21, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent1_24, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
    }
#line 1828 "hlds_out_goal.m"
    {
#line 1828 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1829 "hlds_out_goal.m"
    {
#line 1829 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "then\n");
    }
#line 1830 "hlds_out_goal.m"
    {
#line 1830 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Then_22, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent1_24, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
    }
#line 1832 "hlds_out_goal.m"
    {
#line 1832 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1833 "hlds_out_goal.m"
    {
#line 1833 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "else\n");
    }
#line 1834 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__DumpOptions_25 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 1834 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 1834 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 1834 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 1834 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));
#line 1836 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__succeeded = (strcmp(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_String) "") == 0);
#line 1836 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__succeeded = !(hlds__hlds_out__hlds_out_goal__succeeded);
#line 1836 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1836 "hlds_out_goal.m"
      {
#line 1837 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Else_23, (MR_Integer) 0)));
#line 1837 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Else_23, (MR_Integer) 1)));
#line 1837 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__V_50_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_50_50, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1837 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1837 "hlds_out_goal.m"
          {
#line 1837 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_50_50, (MR_Integer) 1)));
#line 1837 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_50_50, (MR_Integer) 2)));
#line 1837 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_50_50, (MR_Integer) 3)));
#line 1837 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_50_50, (MR_Integer) 4)));
#line 1837 "hlds_out_goal.m"
          }
#line 1836 "hlds_out_goal.m"
      }
#line 1841 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1839 "hlds_out_goal.m"
      {
#line 1839 "hlds_out_goal.m"
        {
#line 1839 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Else_23, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
        }
#line 1839 "hlds_out_goal.m"
      }
#line 1841 "hlds_out_goal.m"
    else
#line 1842 "hlds_out_goal.m"
      {
#line 1842 "hlds_out_goal.m"
        {
#line 1842 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Else_23, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent1_24, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
        }
#line 1842 "hlds_out_goal.m"
      }
#line 1845 "hlds_out_goal.m"
    {
#line 1845 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1846 "hlds_out_goal.m"
    {
#line 1846 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 1847 "hlds_out_goal.m"
    {
#line 1847 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1847 "hlds_out_goal.m"
      return;
    }
#line 1819 "hlds_out_goal.m"
  }
#line 1813 "hlds_out_goal.m"
}

#line 1792 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_negation_10_p_0(
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1792 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1792 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 1792 "hlds_out_goal.m"
{
#line 1798 "hlds_out_goal.m"
  {
#line 1798 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1798 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Goal_20 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_12), (MR_Integer) 0);
#line 1798 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__V_26_26;

#line 1800 "hlds_out_goal.m"
    {
#line 1800 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1801 "hlds_out_goal.m"
    {
#line 1801 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\\+ (\n");
    }
#line 1803 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_26_26 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1802 "hlds_out_goal.m"
    {
#line 1802 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goal_20, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_26_26, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
    }
#line 1804 "hlds_out_goal.m"
    {
#line 1804 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1805 "hlds_out_goal.m"
    {
#line 1805 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 1806 "hlds_out_goal.m"
    {
#line 1806 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1806 "hlds_out_goal.m"
      return;
    }
#line 1798 "hlds_out_goal.m"
  }
#line 1792 "hlds_out_goal.m"
}

#line 1767 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_p_0(
#line 1767 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ConsId_4)
#line 1767 "hlds_out_goal.m"
{
#line 1769 "hlds_out_goal.m"
  {
#line 1769 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1769 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_10_10;

#line 1770 "hlds_out_goal.m"
    {
#line 1770 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " or ");
    }
#line 1771 "hlds_out_goal.m"
    {
#line 1771 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_10_10 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__ConsId_4);
    }
#line 1771 "hlds_out_goal.m"
    {
#line 1771 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_10_10);
#line 1771 "hlds_out_goal.m"
      return;
    }
#line 1769 "hlds_out_goal.m"
  }
#line 1767 "hlds_out_goal.m"
}

#line 1757 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_case_10_p_0_1(
#line 1757 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 1757 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 1757 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 1757 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 1757 "hlds_out_goal.m"
{
#line 1757 "hlds_out_goal.m"
  {
#line 1757 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 1757 "hlds_out_goal.m"
    {
#line 1757 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 1757 "hlds_out_goal.m"
      return;
    }
#line 1757 "hlds_out_goal.m"
  }
#line 1757 "hlds_out_goal.m"
}

#line 1745 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_case_10_p_0(
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Case_12,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Var_13,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_16,
#line 1745 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_17,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarTypes_18)
#line 1745 "hlds_out_goal.m"
{
#line 1750 "hlds_out_goal.m"
  {
#line 1750 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1750 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MainConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Case_12, (MR_Integer) 0)));
#line 1750 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__OtherConsIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Case_12, (MR_Integer) 1)));
#line 1750 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Case_12, (MR_Integer) 2)));
#line 1750 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_31_31;
#line 1757 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_IO_34_34;

#line 1752 "hlds_out_goal.m"
    {
#line 1752 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_17);
    }
#line 1753 "hlds_out_goal.m"
    {
#line 1753 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 1754 "hlds_out_goal.m"
    {
#line 1754 "hlds_out_goal.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_16, hlds__hlds_out__hlds_out_goal__Var_13);
    }
#line 1755 "hlds_out_goal.m"
    {
#line 1755 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " has functor ");
    }
#line 1756 "hlds_out_goal.m"
    {
#line 1756 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_31_31 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__MainConsId_20);
    }
#line 1756 "hlds_out_goal.m"
    {
#line 1756 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_31_31);
    }
#line 1757 "hlds_out_goal.m"
    {
#line 1757 "hlds_out_goal.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[7], hlds__hlds_out__hlds_out_goal__OtherConsIds_21, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_IO_34_34);
    }
#line 1758 "hlds_out_goal.m"
    {
#line 1758 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1764 "hlds_out_goal.m"
    {
#line 1764 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goal_22, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_16, hlds__hlds_out__hlds_out_goal__Indent_17, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__VarTypes_18);
#line 1764 "hlds_out_goal.m"
      return;
    }
#line 1750 "hlds_out_goal.m"
  }
#line 1745 "hlds_out_goal.m"
}

#line 1727 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_10_p_0(
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__CasesList_12,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Var_13,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_16,
#line 1727 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_17,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarTypes_18)
#line 1727 "hlds_out_goal.m"
{
#line 1734 "hlds_out_goal.m"
  while (MR_TRUE)
#line 1734 "hlds_out_goal.m"
    {
#line 1734 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 1734 "hlds_out_goal.m"
      {
#line 1734 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1734 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__CasesList_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1742 "hlds_out_goal.m"
          {
#line 1742 "hlds_out_goal.m"
          }
#line 1734 "hlds_out_goal.m"
        else
#line 1734 "hlds_out_goal.m"
          {
#line 1734 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Case_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__CasesList_12, (MR_Integer) 0)));
#line 1734 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Cases_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__CasesList_12, (MR_Integer) 1)));
#line 1734 "hlds_out_goal.m"
            MR_Integer hlds__hlds_out__hlds_out_goal__V_27_27;

#line 1735 "hlds_out_goal.m"
            {
#line 1735 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_17);
            }
#line 1736 "hlds_out_goal.m"
            {
#line 1736 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
#line 1738 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_27_27 = (hlds__hlds_out__hlds_out_goal__Indent_17 + (MR_Integer) 1);
#line 1737 "hlds_out_goal.m"
            {
#line 1737 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_case_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Case_20, hlds__hlds_out__hlds_out_goal__Var_13, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_16, hlds__hlds_out__hlds_out_goal__V_27_27, hlds__hlds_out__hlds_out_goal__VarTypes_18);
            }
#line 1739 "hlds_out_goal.m"
            /* direct tailcall eliminated */
#line 1739 "hlds_out_goal.m"
            {
#line 1739 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__CasesList__tmp_copy_12 = hlds__hlds_out__hlds_out_goal__Cases_21;

#line 1739 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__CasesList_12 = hlds__hlds_out__hlds_out_goal__CasesList__tmp_copy_12;
#line 1739 "hlds_out_goal.m"
            }
#line 1739 "hlds_out_goal.m"
            continue;
#line 1734 "hlds_out_goal.m"
          }
#line 1734 "hlds_out_goal.m"
      }
#line 1734 "hlds_out_goal.m"
      break;
#line 1734 "hlds_out_goal.m"
    }
#line 1727 "hlds_out_goal.m"
}

#line 1697 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0(
#line 1697 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1697 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1697 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1697 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1697 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1697 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1697 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1697 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 1697 "hlds_out_goal.m"
{
#line 1703 "hlds_out_goal.m"
  {
#line 1703 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1703 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));
#line 1703 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__CanFail_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 2)));
#line 1703 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__CasesList_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 3)));
#line 1703 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__Indent1_23;
#line 1703 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_31_31;

#line 1705 "hlds_out_goal.m"
    {
#line 1705 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1706 "hlds_out_goal.m"
    {
#line 1706 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "( % ");
    }
#line 1707 "hlds_out_goal.m"
    {
#line 1707 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_31_31 = parse_tree__prog_out__can_fail_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__CanFail_21);
    }
#line 1707 "hlds_out_goal.m"
    {
#line 1707 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_31_31);
    }
#line 1708 "hlds_out_goal.m"
    {
#line 1708 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " switch on \140");
    }
#line 1709 "hlds_out_goal.m"
    {
#line 1709 "hlds_out_goal.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Var_20);
    }
#line 1710 "hlds_out_goal.m"
    {
#line 1710 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\'\n");
    }
#line 1711 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__Indent1_23 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1718 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__CasesList_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1719 "hlds_out_goal.m"
      {
#line 1720 "hlds_out_goal.m"
        {
#line 1720 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent1_23);
        }
#line 1721 "hlds_out_goal.m"
        {
#line 1721 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "fail\n");
        }
#line 1719 "hlds_out_goal.m"
      }
#line 1718 "hlds_out_goal.m"
    else
#line 1713 "hlds_out_goal.m"
      {
#line 1713 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Case_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__CasesList_22, (MR_Integer) 0)));
#line 1713 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Cases_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__CasesList_22, (MR_Integer) 1)));

#line 1714 "hlds_out_goal.m"
        {
#line 1714 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_case_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Case_24, hlds__hlds_out__hlds_out_goal__Var_20, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent1_23, hlds__hlds_out__hlds_out_goal__TypeQual_18);
        }
#line 1716 "hlds_out_goal.m"
        {
#line 1716 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_cases_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Cases_25, hlds__hlds_out__hlds_out_goal__Var_20, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__TypeQual_18);
        }
#line 1713 "hlds_out_goal.m"
      }
#line 1723 "hlds_out_goal.m"
    {
#line 1723 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1724 "hlds_out_goal.m"
    {
#line 1724 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 1725 "hlds_out_goal.m"
    {
#line 1725 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1725 "hlds_out_goal.m"
      return;
    }
#line 1703 "hlds_out_goal.m"
  }
#line 1697 "hlds_out_goal.m"
}

#line 1667 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_disj_10_p_0(
#line 1667 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1667 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1667 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1667 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1667 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1667 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1667 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1667 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 1667 "hlds_out_goal.m"
{
#line 1673 "hlds_out_goal.m"
  {
#line 1673 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1673 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Disjuncts_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));

#line 1675 "hlds_out_goal.m"
    {
#line 1675 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1686 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__Disjuncts_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1687 "hlds_out_goal.m"
      {
#line 1688 "hlds_out_goal.m"
        {
#line 1688 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "fail");
        }
#line 1689 "hlds_out_goal.m"
        {
#line 1689 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1689 "hlds_out_goal.m"
          return;
        }
#line 1687 "hlds_out_goal.m"
      }
#line 1686 "hlds_out_goal.m"
    else
#line 1677 "hlds_out_goal.m"
      {
#line 1677 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Disjuncts_20, (MR_Integer) 0)));
#line 1677 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Goals_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Disjuncts_20, (MR_Integer) 1)));
#line 1677 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__V_31_31;

#line 1678 "hlds_out_goal.m"
        {
#line 1678 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "( % disjunction\n");
        }
#line 1680 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_31_31 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1679 "hlds_out_goal.m"
        {
#line 1679 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goal_21, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_31_31, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
        }
#line 1681 "hlds_out_goal.m"
        {
#line 1681 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goals_22, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_String) ";\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
        }
#line 1683 "hlds_out_goal.m"
        {
#line 1683 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1684 "hlds_out_goal.m"
        {
#line 1684 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 1685 "hlds_out_goal.m"
        {
#line 1685 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1685 "hlds_out_goal.m"
          return;
        }
#line 1677 "hlds_out_goal.m"
      }
#line 1673 "hlds_out_goal.m"
  }
#line 1667 "hlds_out_goal.m"
}

#line 1633 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(
#line 1633 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_13,
#line 1633 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goal1_14,
#line 1633 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goals1_15,
#line 1633 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_16,
#line 1633 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_17,
#line 1633 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_18,
#line 1633 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_19,
#line 1633 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_20,
#line 1633 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Separator_21,
#line 1633 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_22)
#line 1633 "hlds_out_goal.m"
{
#line 1640 "hlds_out_goal.m"
  while (MR_TRUE)
#line 1640 "hlds_out_goal.m"
    {
#line 1640 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 1640 "hlds_out_goal.m"
      {
#line 1640 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1640 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__Goals1_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1658 "hlds_out_goal.m"
          {
#line 1658 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_13, hlds__hlds_out__hlds_out_goal__Goal1_14, hlds__hlds_out__hlds_out_goal__ModuleInfo_16, hlds__hlds_out__hlds_out_goal__VarSet_17, hlds__hlds_out__hlds_out_goal__AppendVarNums_18, hlds__hlds_out__hlds_out_goal__Indent_19, hlds__hlds_out__hlds_out_goal__Follow_20, hlds__hlds_out__hlds_out_goal__TypeQual_22);
#line 1658 "hlds_out_goal.m"
            return;
          }
#line 1640 "hlds_out_goal.m"
        else
#line 1640 "hlds_out_goal.m"
          {
#line 1640 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Goal2_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Goals1_15, (MR_Integer) 0)));
#line 1640 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Goals2_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Goals1_15, (MR_Integer) 1)));
#line 1640 "hlds_out_goal.m"
            MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_26 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 0)));
#line 1641 "hlds_out_goal.m"
            MR_String hlds__hlds_out__hlds_out_goal__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 1)));
#line 1641 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 2)));
#line 1641 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 3)));
#line 1641 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 4)));

#line 1642 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = (strcmp(hlds__hlds_out__hlds_out_goal__DumpOptions_26, (MR_String) "") == 0);
#line 1642 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = !(hlds__hlds_out__hlds_out_goal__succeeded);
#line 1650 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1647 "hlds_out_goal.m"
              {
#line 1646 "hlds_out_goal.m"
                {
#line 1646 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_13, hlds__hlds_out__hlds_out_goal__Goal1_14, hlds__hlds_out__hlds_out_goal__ModuleInfo_16, hlds__hlds_out__hlds_out_goal__VarSet_17, hlds__hlds_out__hlds_out_goal__AppendVarNums_18, hlds__hlds_out__hlds_out_goal__Indent_19, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_22);
                }
#line 1648 "hlds_out_goal.m"
                {
#line 1648 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_19);
                }
#line 1649 "hlds_out_goal.m"
                {
#line 1649 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Separator_21);
                }
#line 1647 "hlds_out_goal.m"
              }
#line 1650 "hlds_out_goal.m"
            else
#line 1651 "hlds_out_goal.m"
              {
#line 1651 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_13, hlds__hlds_out__hlds_out_goal__Goal1_14, hlds__hlds_out__hlds_out_goal__ModuleInfo_16, hlds__hlds_out__hlds_out_goal__VarSet_17, hlds__hlds_out__hlds_out_goal__AppendVarNums_18, hlds__hlds_out__hlds_out_goal__Indent_19, hlds__hlds_out__hlds_out_goal__Separator_21, hlds__hlds_out__hlds_out_goal__TypeQual_22);
              }
#line 1654 "hlds_out_goal.m"
            /* direct tailcall eliminated */
#line 1654 "hlds_out_goal.m"
            {
#line 1654 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Goal1__tmp_copy_14 = hlds__hlds_out__hlds_out_goal__Goal2_24;
#line 1654 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Goals1__tmp_copy_15 = hlds__hlds_out__hlds_out_goal__Goals2_25;

#line 1654 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__Goals1_15 = hlds__hlds_out__hlds_out_goal__Goals1__tmp_copy_15;
#line 1654 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__Goal1_14 = hlds__hlds_out__hlds_out_goal__Goal1__tmp_copy_14;
#line 1654 "hlds_out_goal.m"
            }
#line 1654 "hlds_out_goal.m"
            continue;
#line 1640 "hlds_out_goal.m"
          }
#line 1640 "hlds_out_goal.m"
      }
#line 1640 "hlds_out_goal.m"
      break;
#line 1640 "hlds_out_goal.m"
    }
#line 1633 "hlds_out_goal.m"
}

#line 1582 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_conj_10_p_0(
#line 1582 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1582 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1582 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1582 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1582 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1582 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1582 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1582 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 1582 "hlds_out_goal.m"
{
#line 1588 "hlds_out_goal.m"
  {
#line 1588 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1588 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ConjType_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));
#line 1588 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__List_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 2)));

#line 1620 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__List_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1621 "hlds_out_goal.m"
      {
#line 1622 "hlds_out_goal.m"
        {
#line 1622 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1626 "hlds_out_goal.m"
#line 1626 "hlds_out_goal.m"
        switch (hlds__hlds_out__hlds_out_goal__ConjType_20) {
#line 1626 "hlds_out_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1626 "hlds_out_goal.m"
          case (MR_Integer) 1:
#line 1627 "hlds_out_goal.m"
            {
#line 1628 "hlds_out_goal.m"
              {
#line 1628 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "/* parallel */ true");
              }
#line 1627 "hlds_out_goal.m"
            }
#line 1626 "hlds_out_goal.m"
            break;
#line 1626 "hlds_out_goal.m"
          case (MR_Integer) 0:
#line 1624 "hlds_out_goal.m"
            {
#line 1625 "hlds_out_goal.m"
              {
#line 1625 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "true");
              }
#line 1624 "hlds_out_goal.m"
            }
#line 1626 "hlds_out_goal.m"
            break;
#line 1626 "hlds_out_goal.m"
        }
#line 1630 "hlds_out_goal.m"
        {
#line 1630 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1630 "hlds_out_goal.m"
          return;
        }
#line 1621 "hlds_out_goal.m"
      }
#line 1620 "hlds_out_goal.m"
    else
#line 1591 "hlds_out_goal.m"
      {
#line 1591 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__List_21, (MR_Integer) 0)));
#line 1591 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__List_21, (MR_Integer) 1)));

#line 1607 "hlds_out_goal.m"
#line 1607 "hlds_out_goal.m"
        switch (hlds__hlds_out__hlds_out_goal__ConjType_20) {
#line 1607 "hlds_out_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1607 "hlds_out_goal.m"
          case (MR_Integer) 1:
#line 1608 "hlds_out_goal.m"
            {
#line 1608 "hlds_out_goal.m"
              MR_Integer hlds__hlds_out__hlds_out_goal__V_36_36;

#line 1609 "hlds_out_goal.m"
              {
#line 1609 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1610 "hlds_out_goal.m"
              {
#line 1610 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "( % parallel conjunction\n");
              }
#line 1612 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_36_36 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1611 "hlds_out_goal.m"
              {
#line 1611 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goal_22, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_36_36, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
              }
#line 1614 "hlds_out_goal.m"
              {
#line 1614 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goals_23, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_String) "&\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
              }
#line 1616 "hlds_out_goal.m"
              {
#line 1616 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1617 "hlds_out_goal.m"
              {
#line 1617 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 1618 "hlds_out_goal.m"
              {
#line 1618 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1618 "hlds_out_goal.m"
                return;
              }
#line 1608 "hlds_out_goal.m"
            }
#line 1607 "hlds_out_goal.m"
            break;
#line 1607 "hlds_out_goal.m"
          case (MR_Integer) 0:
#line 1593 "hlds_out_goal.m"
            {
#line 1593 "hlds_out_goal.m"
              MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_24 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 1594 "hlds_out_goal.m"
              MR_String hlds__hlds_out__hlds_out_goal__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 1594 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 1594 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 1594 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));

#line 1595 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = (strcmp(hlds__hlds_out__hlds_out_goal__DumpOptions_24, (MR_String) "") == 0);
#line 1595 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = !(hlds__hlds_out__hlds_out_goal__succeeded);
#line 1603 "hlds_out_goal.m"
              if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1596 "hlds_out_goal.m"
                {
#line 1596 "hlds_out_goal.m"
                  MR_Integer hlds__hlds_out__hlds_out_goal__V_49_49;

#line 1596 "hlds_out_goal.m"
                  {
#line 1596 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                  }
#line 1597 "hlds_out_goal.m"
                  {
#line 1597 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "( % conjunction\n");
                  }
#line 1599 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_49_49 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1598 "hlds_out_goal.m"
                  {
#line 1598 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goal_22, hlds__hlds_out__hlds_out_goal__Goals_23, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_49_49, (MR_String) "\n", (MR_String) ",\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
                  }
#line 1600 "hlds_out_goal.m"
                  {
#line 1600 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                  }
#line 1601 "hlds_out_goal.m"
                  {
#line 1601 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 1602 "hlds_out_goal.m"
                  {
#line 1602 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1602 "hlds_out_goal.m"
                    return;
                  }
#line 1596 "hlds_out_goal.m"
                }
#line 1603 "hlds_out_goal.m"
              else
#line 1604 "hlds_out_goal.m"
                {
#line 1604 "hlds_out_goal.m"
                  {
#line 1604 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goal_22, hlds__hlds_out__hlds_out_goal__Goals_23, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, (MR_String) ",\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 1604 "hlds_out_goal.m"
                    return;
                  }
#line 1604 "hlds_out_goal.m"
                }
#line 1593 "hlds_out_goal.m"
            }
#line 1607 "hlds_out_goal.m"
            break;
#line 1607 "hlds_out_goal.m"
        }
#line 1591 "hlds_out_goal.m"
      }
#line 1588 "hlds_out_goal.m"
  }
#line 1582 "hlds_out_goal.m"
}

#line 1540 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(
#line 1540 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_1,
#line 1540 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_2,
#line 1540 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TVarSet_3,
#line 1540 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_4)
#line 1540 "hlds_out_goal.m"
{
#line 1543 "hlds_out_goal.m"
  while (MR_TRUE)
#line 1543 "hlds_out_goal.m"
    {
#line 1543 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 1543 "hlds_out_goal.m"
      {
#line 1543 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1543 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1543 "hlds_out_goal.m"
          {
#line 1543 "hlds_out_goal.m"
          }
#line 1543 "hlds_out_goal.m"
        else
#line 1544 "hlds_out_goal.m"
          {
#line 1544 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Arg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__1_1, (MR_Integer) 0)));
#line 1544 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__1_1, (MR_Integer) 1)));
#line 1544 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Arg_13, (MR_Integer) 0)));
#line 1544 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__MaybeNameMode_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Arg_13, (MR_Integer) 1)));
#line 1544 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Arg_13, (MR_Integer) 2)));
#line 1544 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__BoxPolicy_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Arg_13, (MR_Integer) 3)));

#line 1546 "hlds_out_goal.m"
            {
#line 1546 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_2, hlds__hlds_out__hlds_out_goal__AppendVarNums_4, hlds__hlds_out__hlds_out_goal__Var_19);
            }
#line 1558 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__MaybeNameMode_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1559 "hlds_out_goal.m"
              {
#line 1559 "hlds_out_goal.m"
              }
#line 1558 "hlds_out_goal.m"
            else
#line 1548 "hlds_out_goal.m"
              {
#line 1548 "hlds_out_goal.m"
                MR_String hlds__hlds_out__hlds_out_goal__Name_23;
#line 1548 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__Mode_24;
#line 1548 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeNameMode_20, (MR_Integer) 0)));
#line 1548 "hlds_out_goal.m"
                MR_String hlds__hlds_out__hlds_out_goal__V_31_31;
#line 1548 "hlds_out_goal.m"
                MR_String hlds__hlds_out__hlds_out_goal__V_34_34;
#line 1550 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_53_53;

#line 1548 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__Name_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_30_30, (MR_Integer) 0)));
#line 1548 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__Mode_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_30_30, (MR_Integer) 1)));
#line 1549 "hlds_out_goal.m"
                {
#line 1549 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_34_34 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__Name_23, (MR_String) "(");
                }
#line 1549 "hlds_out_goal.m"
                {
#line 1549 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_goal__V_34_34);
                }
#line 1549 "hlds_out_goal.m"
                {
#line 1549 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_31_31);
                }
#line 1550 "hlds_out_goal.m"
                {
#line 1550 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_53_53 = parse_tree__prog_mode__in_mode_0_f_0();
                }
#line 1550 "hlds_out_goal.m"
                {
#line 1550 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(hlds__hlds_out__hlds_out_goal__Mode_24, hlds__hlds_out__hlds_out_goal__V_53_53);
                }
#line 1552 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1551 "hlds_out_goal.m"
                  {
#line 1551 "hlds_out_goal.m"
                    {
#line 1551 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "in");
                    }
#line 1551 "hlds_out_goal.m"
                  }
#line 1552 "hlds_out_goal.m"
                else
#line 1554 "hlds_out_goal.m"
                  {
#line 1552 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__V_54_54;

#line 1552 "hlds_out_goal.m"
                    {
#line 1552 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__V_54_54 = parse_tree__prog_mode__out_mode_0_f_0();
                    }
#line 1552 "hlds_out_goal.m"
                    {
#line 1552 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(hlds__hlds_out__hlds_out_goal__Mode_24, hlds__hlds_out__hlds_out_goal__V_54_54);
                    }
#line 1554 "hlds_out_goal.m"
                    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1553 "hlds_out_goal.m"
                      {
#line 1553 "hlds_out_goal.m"
                        {
#line 1553 "hlds_out_goal.m"
                          mercury__io__write_string_3_p_0((MR_String) "out");
                        }
#line 1553 "hlds_out_goal.m"
                      }
#line 1554 "hlds_out_goal.m"
                    else
#line 1555 "hlds_out_goal.m"
                      {
#line 1555 "hlds_out_goal.m"
                        {
#line 1555 "hlds_out_goal.m"
                          mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, ((MR_Box) (hlds__hlds_out__hlds_out_goal__Mode_24)));
                        }
#line 1555 "hlds_out_goal.m"
                      }
#line 1554 "hlds_out_goal.m"
                  }
#line 1557 "hlds_out_goal.m"
                {
#line 1557 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
#line 1548 "hlds_out_goal.m"
              }
#line 1563 "hlds_out_goal.m"
#line 1563 "hlds_out_goal.m"
            switch (hlds__hlds_out__hlds_out_goal__BoxPolicy_22) {
#line 1563 "hlds_out_goal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1563 "hlds_out_goal.m"
              case (MR_Integer) 1:
#line 1564 "hlds_out_goal.m"
                {
#line 1565 "hlds_out_goal.m"
                  {
#line 1565 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "\044alwaysboxed");
                  }
#line 1564 "hlds_out_goal.m"
                }
#line 1563 "hlds_out_goal.m"
                break;
#line 1563 "hlds_out_goal.m"
              case (MR_Integer) 0:
#line 1562 "hlds_out_goal.m"
                {
#line 1562 "hlds_out_goal.m"
                }
#line 1563 "hlds_out_goal.m"
                break;
#line 1563 "hlds_out_goal.m"
            }
#line 1567 "hlds_out_goal.m"
            {
#line 1567 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\100");
            }
#line 1568 "hlds_out_goal.m"
            {
#line 1568 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_goal__TVarSet_3, hlds__hlds_out__hlds_out_goal__AppendVarNums_4, hlds__hlds_out__hlds_out_goal__Type_21);
            }
#line 1571 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1570 "hlds_out_goal.m"
              {
#line 1570 "hlds_out_goal.m"
              }
#line 1571 "hlds_out_goal.m"
            else
#line 1572 "hlds_out_goal.m"
              {
#line 1573 "hlds_out_goal.m"
                {
#line 1573 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1574 "hlds_out_goal.m"
                /* direct tailcall eliminated */
#line 1574 "hlds_out_goal.m"
                {
#line 1574 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_goal__Args_14;

#line 1574 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__HeadVar__1_1 = hlds__hlds_out__hlds_out_goal__HeadVar__1__tmp_copy_1;
#line 1574 "hlds_out_goal.m"
                }
#line 1574 "hlds_out_goal.m"
                continue;
#line 1572 "hlds_out_goal.m"
              }
#line 1544 "hlds_out_goal.m"
          }
#line 1543 "hlds_out_goal.m"
      }
#line 1543 "hlds_out_goal.m"
      break;
#line 1543 "hlds_out_goal.m"
    }
#line 1540 "hlds_out_goal.m"
}

#line 1467 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_reg_3_p_0(
#line 1467 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgReg_4)
#line 1467 "hlds_out_goal.m"
{
#line 1471 "hlds_out_goal.m"
  {
#line 1471 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1471 "hlds_out_goal.m"
#line 1471 "hlds_out_goal.m"
    switch (hlds__hlds_out__hlds_out_goal__ArgReg_4) {
#line 1471 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1471 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 1474 "hlds_out_goal.m"
        {
#line 1475 "hlds_out_goal.m"
          {
#line 1475 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "reg_f");
#line 1475 "hlds_out_goal.m"
            return;
          }
#line 1474 "hlds_out_goal.m"
        }
#line 1471 "hlds_out_goal.m"
        break;
#line 1471 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 1471 "hlds_out_goal.m"
        {
#line 1472 "hlds_out_goal.m"
          {
#line 1472 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "reg_r");
#line 1472 "hlds_out_goal.m"
            return;
          }
#line 1471 "hlds_out_goal.m"
        }
#line 1471 "hlds_out_goal.m"
        break;
#line 1471 "hlds_out_goal.m"
    }
#line 1471 "hlds_out_goal.m"
  }
#line 1467 "hlds_out_goal.m"
}

#line 1461 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0_1(
#line 1461 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 1461 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 1461 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 1461 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 1461 "hlds_out_goal.m"
{
#line 1461 "hlds_out_goal.m"
  {
#line 1461 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 1461 "hlds_out_goal.m"
    {
#line 1461 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_ho_arg_reg_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 1461 "hlds_out_goal.m"
      return;
    }
#line 1461 "hlds_out_goal.m"
  }
#line 1461 "hlds_out_goal.m"
}

#line 1453 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(
#line 1453 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_5,
#line 1453 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeArgRegs_6)
#line 1453 "hlds_out_goal.m"
{
#line 1458 "hlds_out_goal.m"
  {
#line 1458 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1458 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__MaybeArgRegs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1464 "hlds_out_goal.m"
      {
#line 1464 "hlds_out_goal.m"
      }
#line 1458 "hlds_out_goal.m"
    else
#line 1458 "hlds_out_goal.m"
      {
#line 1458 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ArgRegs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeArgRegs_6, (MR_Integer) 0)));

#line 1459 "hlds_out_goal.m"
        {
#line 1459 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_5);
        }
#line 1460 "hlds_out_goal.m"
        {
#line 1460 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% arg regs: ");
        }
#line 1461 "hlds_out_goal.m"
        {
#line 1461 "hlds_out_goal.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, hlds__hlds_out__hlds_out_goal__ArgRegs_8, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[6]);
        }
#line 1462 "hlds_out_goal.m"
        {
#line 1462 "hlds_out_goal.m"
          mercury__io__nl_2_p_0();
#line 1462 "hlds_out_goal.m"
          return;
        }
#line 1458 "hlds_out_goal.m"
      }
#line 1458 "hlds_out_goal.m"
  }
#line 1453 "hlds_out_goal.m"
}

#line 1324 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_p_0(
#line 1324 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__PredName_7,
#line 1324 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_8,
#line 1324 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_9,
#line 1324 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_10)
#line 1324 "hlds_out_goal.m"
{
#line 1329 "hlds_out_goal.m"
  {
#line 1329 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1329 "hlds_out_goal.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PredName_7)) == (MR_mktag((MR_Integer) 1))))
#line 1329 "hlds_out_goal.m"
      {
#line 1329 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PredName_7, (MR_Integer) 0)));
#line 1329 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PredName_7, (MR_Integer) 1)));
#line 1329 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_19_19;

#line 1330 "hlds_out_goal.m"
        {
#line 1330 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1330 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_19_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Name_13));
#line 1330 "hlds_out_goal.m"
        }
#line 1330 "hlds_out_goal.m"
        {
#line 1330 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_qualified_functor_7_p_0(hlds__hlds_out__hlds_out_goal__ModuleName_12, hlds__hlds_out__hlds_out_goal__V_19_19, hlds__hlds_out__hlds_out_goal__ArgVars_8, hlds__hlds_out__hlds_out_goal__VarSet_9, hlds__hlds_out__hlds_out_goal__AppendVarNums_10);
#line 1330 "hlds_out_goal.m"
          return;
        }
#line 1329 "hlds_out_goal.m"
      }
#line 1329 "hlds_out_goal.m"
    else
#line 1333 "hlds_out_goal.m"
      {
#line 1333 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_16_16;
#line 1333 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__PredName_7, (MR_Integer) 0)));

#line 1334 "hlds_out_goal.m"
        {
#line 1334 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1334 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_16_16, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Name_21));
#line 1334 "hlds_out_goal.m"
        }
#line 1334 "hlds_out_goal.m"
        {
#line 1334 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_p_0(hlds__hlds_out__hlds_out_goal__V_16_16, hlds__hlds_out__hlds_out_goal__ArgVars_8, hlds__hlds_out__hlds_out_goal__VarSet_9, hlds__hlds_out__hlds_out_goal__AppendVarNums_10, (MR_Integer) 0);
#line 1334 "hlds_out_goal.m"
          return;
        }
#line 1333 "hlds_out_goal.m"
      }
#line 1329 "hlds_out_goal.m"
  }
#line 1324 "hlds_out_goal.m"
}

#line 1243 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_p_0(
#line 1243 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1243 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 1243 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 1243 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 1243 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 1243 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1243 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1243 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 1243 "hlds_out_goal.m"
{
#line 1249 "hlds_out_goal.m"
  {
#line 1249 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1249 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 0)));
#line 1249 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));
#line 1249 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 2)));
#line 1249 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Builtin_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 3)));
#line 1249 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeUnifyContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 4)));
#line 1249 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 5)));
#line 1249 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_26 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 1249 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__NewArgVars_30;
#line 1252 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 1252 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 1252 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 1252 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));
#line 1269 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_83_83;

#line 1253 "hlds_out_goal.m"
    {
#line 1253 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_26, (MR_Char) 98);
    }
#line 1265 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1258 "hlds_out_goal.m"
#line 1258 "hlds_out_goal.m"
      switch (hlds__hlds_out__hlds_out_goal__Builtin_23) {
#line 1258 "hlds_out_goal.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1258 "hlds_out_goal.m"
        case (MR_Integer) 0:
#line 1255 "hlds_out_goal.m"
          {
#line 1256 "hlds_out_goal.m"
            {
#line 1256 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 1257 "hlds_out_goal.m"
            {
#line 1257 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% inline builtin\n");
            }
#line 1255 "hlds_out_goal.m"
          }
#line 1258 "hlds_out_goal.m"
          break;
#line 1258 "hlds_out_goal.m"
        case (MR_Integer) 2:
#line 1263 "hlds_out_goal.m"
          {
#line 1263 "hlds_out_goal.m"
          }
#line 1258 "hlds_out_goal.m"
          break;
#line 1258 "hlds_out_goal.m"
        case (MR_Integer) 1:
#line 1259 "hlds_out_goal.m"
          {
#line 1260 "hlds_out_goal.m"
            {
#line 1260 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 1261 "hlds_out_goal.m"
            {
#line 1261 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% out of line builtin\n");
            }
#line 1259 "hlds_out_goal.m"
          }
#line 1258 "hlds_out_goal.m"
          break;
#line 1258 "hlds_out_goal.m"
      }
#line 1265 "hlds_out_goal.m"
    else
#line 1265 "hlds_out_goal.m"
      {
#line 1265 "hlds_out_goal.m"
      }
#line 1268 "hlds_out_goal.m"
    {
#line 1268 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1269 "hlds_out_goal.m"
    {
#line 1269 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_83_83 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 1269 "hlds_out_goal.m"
    {
#line 1269 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__hlds_out__hlds_out_goal__PredId_20, hlds__hlds_out__hlds_out_goal__V_83_83);
    }
#line 6554 "hlds.hlds_out.hlds_out_goal.c"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1280 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__NewArgVars_30 = hlds__hlds_out__hlds_out_goal__ArgVars_22;
#line 6558 "hlds.hlds_out.hlds_out_goal.c"
    else
#line 6560 "hlds.hlds_out.hlds_out_goal.c"
      {
#line 6562 "hlds.hlds_out.hlds_out_goal.c"
        MR_Word hlds__hlds_out__hlds_out_goal__PredInfo_28;
#line 6564 "hlds.hlds_out.hlds_out_goal.c"
        MR_Word hlds__hlds_out__hlds_out_goal__Purity_29;
#line 6566 "hlds.hlds_out.hlds_out_goal.c"
        MR_Word hlds__hlds_out__hlds_out_goal__PredOrFunc_85;

#line 1273 "hlds_out_goal.m"
        {
#line 1273 "hlds_out_goal.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__PredId_20, &hlds__hlds_out__hlds_out_goal__PredInfo_28);
        }
#line 1274 "hlds_out_goal.m"
        {
#line 1274 "hlds_out_goal.m"
          hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__hlds_out__hlds_out_goal__PredInfo_28, &hlds__hlds_out__hlds_out_goal__Purity_29);
        }
#line 1275 "hlds_out_goal.m"
        {
#line 1275 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__PredOrFunc_85 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_goal__PredInfo_28);
        }
#line 1276 "hlds_out_goal.m"
        {
#line 1276 "hlds_out_goal.m"
          parse_tree__prog_out__write_purity_prefix_3_p_0(hlds__hlds_out__hlds_out_goal__Purity_29);
        }
#line 1281 "hlds_out_goal.m"
#line 1281 "hlds_out_goal.m"
        switch (hlds__hlds_out__hlds_out_goal__PredOrFunc_85) {
#line 1281 "hlds_out_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1281 "hlds_out_goal.m"
          case (MR_Integer) 1:
#line 1282 "hlds_out_goal.m"
            {
#line 1282 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__LHSVar_31;
#line 1283 "hlds_out_goal.m"
              MR_Box hlds__hlds_out__hlds_out_goal__conv0_LHSVar_31;

#line 1283 "hlds_out_goal.m"
              {
#line 1283 "hlds_out_goal.m"
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], hlds__hlds_out__hlds_out_goal__ArgVars_22, &hlds__hlds_out__hlds_out_goal__NewArgVars_30, &hlds__hlds_out__hlds_out_goal__conv0_LHSVar_31);
              }
#line 1283 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__LHSVar_31 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv0_LHSVar_31);
#line 1284 "hlds_out_goal.m"
              {
#line 1284 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__LHSVar_31);
              }
#line 1285 "hlds_out_goal.m"
              {
#line 1285 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
#line 1282 "hlds_out_goal.m"
            }
#line 1281 "hlds_out_goal.m"
            break;
#line 1281 "hlds_out_goal.m"
          case (MR_Integer) 0:
#line 1280 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__NewArgVars_30 = hlds__hlds_out__hlds_out_goal__ArgVars_22;
#line 1281 "hlds_out_goal.m"
            break;
#line 1281 "hlds_out_goal.m"
        }
#line 6632 "hlds.hlds_out.hlds_out_goal.c"
      }
#line 1287 "hlds_out_goal.m"
    {
#line 1287 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_p_0(hlds__hlds_out__hlds_out_goal__PredName_25, hlds__hlds_out__hlds_out_goal__NewArgVars_30, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
    }
#line 1288 "hlds_out_goal.m"
    {
#line 1288 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
    }
#line 1289 "hlds_out_goal.m"
    {
#line 1289 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_26, (MR_Char) 108);
    }
#line 1320 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1290 "hlds_out_goal.m"
      {
#line 1290 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__PredNum_32;
#line 1290 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__ProcNum_33;

#line 1290 "hlds_out_goal.m"
        {
#line 1290 "hlds_out_goal.m"
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_goal__PredId_20, &hlds__hlds_out__hlds_out_goal__PredNum_32);
        }
#line 1291 "hlds_out_goal.m"
        {
#line 1291 "hlds_out_goal.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_goal__ProcId_21, &hlds__hlds_out__hlds_out_goal__ProcNum_33);
        }
#line 1292 "hlds_out_goal.m"
        {
#line 1292 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1293 "hlds_out_goal.m"
        {
#line 1293 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% pred id: ");
        }
#line 1294 "hlds_out_goal.m"
        {
#line 1294 "hlds_out_goal.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__PredNum_32);
        }
#line 1295 "hlds_out_goal.m"
        {
#line 1295 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) ", proc id: ");
        }
#line 1296 "hlds_out_goal.m"
        {
#line 1296 "hlds_out_goal.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__ProcNum_33);
        }
#line 1297 "hlds_out_goal.m"
        {
#line 1297 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
        }
#line 1317 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__MaybeUnifyContext_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1318 "hlds_out_goal.m"
          {
#line 1318 "hlds_out_goal.m"
          }
#line 1317 "hlds_out_goal.m"
        else
#line 1299 "hlds_out_goal.m"
          {
#line 1299 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__CallUnifyContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeUnifyContext_24, (MR_Integer) 0)));
#line 1299 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CallUnifyContext_34, (MR_Integer) 0)));
#line 1299 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__VarType_39;
#line 1299 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__RHS_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CallUnifyContext_34, (MR_Integer) 1)));
#line 1299 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_42;
#line 1308 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal___UnifyContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CallUnifyContext_34, (MR_Integer) 2)));

#line 1304 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__TypeQual_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1306 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__VarType_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1304 "hlds_out_goal.m"
            else
#line 1301 "hlds_out_goal.m"
              {
#line 1301 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__VarTypes_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_18, (MR_Integer) 1)));
#line 1301 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__UniType_38;
#line 1301 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_18, (MR_Integer) 0)));

#line 1302 "hlds_out_goal.m"
                {
#line 1302 "hlds_out_goal.m"
                  hlds__vartypes__lookup_var_type_3_p_0(hlds__hlds_out__hlds_out_goal__VarTypes_36, hlds__hlds_out__hlds_out_goal__Var_37, &hlds__hlds_out__hlds_out_goal__UniType_38);
                }
#line 1303 "hlds_out_goal.m"
                {
#line 1303 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__VarType_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__VarType_39, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__UniType_38));
#line 1303 "hlds_out_goal.m"
                }
#line 1301 "hlds_out_goal.m"
              }
#line 1309 "hlds_out_goal.m"
            {
#line 1309 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 1310 "hlds_out_goal.m"
            {
#line 1310 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% unify context: ");
            }
#line 1311 "hlds_out_goal.m"
            {
#line 1311 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Var_37);
            }
#line 1312 "hlds_out_goal.m"
            {
#line 1312 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) " = ");
            }
#line 1314 "hlds_out_goal.m"
            {
#line 1314 "hlds_out_goal.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_goal__InstVarSet_42);
            }
#line 1315 "hlds_out_goal.m"
            {
#line 1315 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__RHS_40, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_42, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__VarType_39, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 1315 "hlds_out_goal.m"
              return;
            }
#line 1299 "hlds_out_goal.m"
          }
#line 1290 "hlds_out_goal.m"
      }
#line 1320 "hlds_out_goal.m"
    else
#line 1320 "hlds_out_goal.m"
      {
#line 1320 "hlds_out_goal.m"
      }
#line 1249 "hlds_out_goal.m"
  }
#line 1243 "hlds_out_goal.m"
}

#line 911 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_p_0(
#line 911 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_12,
#line 911 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_13,
#line 911 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
#line 911 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
#line 911 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_16,
#line 911 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_17,
#line 911 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_18,
#line 911 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeType_19,
#line 911 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_20)
#line 911 "hlds_out_goal.m"
{
#line 918 "hlds_out_goal.m"
  {
#line 918 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 918 "hlds_out_goal.m"
#line 918 "hlds_out_goal.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__RHS_13)) {
#line 918 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 918 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 918 "hlds_out_goal.m"
        {
#line 918 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 0)));

#line 919 "hlds_out_goal.m"
          {
#line 919 "hlds_out_goal.m"
            parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__Var_22);
#line 919 "hlds_out_goal.m"
            return;
          }
#line 918 "hlds_out_goal.m"
        }
#line 918 "hlds_out_goal.m"
        break;
#line 918 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 921 "hlds_out_goal.m"
        {
#line 921 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 0)));
#line 921 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__IsExistConstruct_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 1)));
#line 921 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 2)));
#line 921 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId_30;
#line 928 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__SymName0_26;
#line 928 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__Arity_27;
#line 928 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtor_28;
#line 939 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Type_31;
#line 939 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TVarSet_32;
#line 935 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_33_33;

#line 923 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__IsExistConstruct_24 == (MR_Integer) 1);
#line 923 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 923 "hlds_out_goal.m"
            {
#line 924 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ConsId0_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_23, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 924 "hlds_out_goal.m"
              if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 924 "hlds_out_goal.m"
                {
#line 924 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__SymName0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_23, (MR_Integer) 1)));
#line 924 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_23, (MR_Integer) 2)));
#line 924 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__TypeCtor_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_23, (MR_Integer) 3)));
#line 924 "hlds_out_goal.m"
                }
#line 923 "hlds_out_goal.m"
            }
#line 928 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 926 "hlds_out_goal.m"
            {
#line 926 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__SymName_29;

#line 926 "hlds_out_goal.m"
              {
#line 926 "hlds_out_goal.m"
                parse_tree__prog_type__add_new_prefix_2_p_0(hlds__hlds_out__hlds_out_goal__SymName0_26, &hlds__hlds_out__hlds_out_goal__SymName_29);
              }
#line 927 "hlds_out_goal.m"
              {
#line 927 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__ConsId_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 927 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 927 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__SymName_29));
#line 927 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_30, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Arity_27));
#line 927 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_30, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__TypeCtor_28));
#line 927 "hlds_out_goal.m"
              }
#line 926 "hlds_out_goal.m"
            }
#line 928 "hlds_out_goal.m"
          else
#line 929 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__ConsId_30 = hlds__hlds_out__hlds_out_goal__ConsId0_23;
#line 931 "hlds_out_goal.m"
          {
#line 931 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_p_0(hlds__hlds_out__hlds_out_goal__ConsId_30, hlds__hlds_out__hlds_out_goal__ArgVars_25, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_17);
          }
#line 934 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeType_19)) == (MR_mktag((MR_Integer) 1)));
#line 934 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 934 "hlds_out_goal.m"
            {
#line 934 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeType_19, (MR_Integer) 0)));
#line 935 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__TypeQual_20)) == (MR_mktag((MR_Integer) 1)));
#line 935 "hlds_out_goal.m"
              if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 935 "hlds_out_goal.m"
                {
#line 935 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__TVarSet_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_20, (MR_Integer) 0)));
#line 935 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_20, (MR_Integer) 1)));
#line 935 "hlds_out_goal.m"
                }
#line 934 "hlds_out_goal.m"
            }
#line 939 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 937 "hlds_out_goal.m"
            {
#line 937 "hlds_out_goal.m"
              {
#line 937 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) " : ");
              }
#line 938 "hlds_out_goal.m"
              {
#line 938 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_goal__TVarSet_32, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__Type_31);
#line 938 "hlds_out_goal.m"
                return;
              }
#line 937 "hlds_out_goal.m"
            }
#line 939 "hlds_out_goal.m"
          else
#line 939 "hlds_out_goal.m"
            {
#line 939 "hlds_out_goal.m"
            }
#line 921 "hlds_out_goal.m"
        }
#line 918 "hlds_out_goal.m"
        break;
#line 918 "hlds_out_goal.m"
      case (MR_Integer) 2:
#line 944 "hlds_out_goal.m"
        {
#line 944 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Purity_34 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 944 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Groundness_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 944 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__PredOrFunc_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 944 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__NonLocals_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 2)));
#line 944 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Vars_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 3)));
#line 944 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Modes_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 4)));
#line 944 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Det_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 5)));
#line 944 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Goal_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_13, (MR_Integer) 6)));
#line 944 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__Indent1_43 = (hlds__hlds_out__hlds_out_goal__Indent_18 + (MR_Integer) 1);
#line 944 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_53;
#line 1013 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Type_134;
#line 1013 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TVarSet_135;
#line 1009 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_52_52;
#line 1016 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__V_139_139;
#line 1016 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_140_140;
#line 1016 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_141_141;
#line 1016 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_142_142;

#line 946 "hlds_out_goal.m"
          {
#line 946 "hlds_out_goal.m"
            parse_tree__prog_out__write_purity_prefix_3_p_0(hlds__hlds_out__hlds_out_goal__Purity_34);
          }
#line 974 "hlds_out_goal.m"
#line 974 "hlds_out_goal.m"
          switch (hlds__hlds_out__hlds_out_goal__Groundness_35) {
#line 974 "hlds_out_goal.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 974 "hlds_out_goal.m"
            case (MR_Integer) 1:
#line 974 "hlds_out_goal.m"
#line 974 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__PredOrFunc_36) {
#line 974 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 974 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 975 "hlds_out_goal.m"
                  {
#line 975 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_47;
#line 975 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__RetMode_48;
#line 975 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__RetVar_49;
#line 975 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__V_79_79;
#line 975 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_131;
#line 983 "hlds_out_goal.m"
                    MR_Box hlds__hlds_out__hlds_out_goal__conv0_RetMode_48;
#line 984 "hlds_out_goal.m"
                    MR_Box hlds__hlds_out__hlds_out_goal__conv1_RetVar_49;

#line 983 "hlds_out_goal.m"
                    {
#line 983 "hlds_out_goal.m"
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_goal__Modes_40, &hlds__hlds_out__hlds_out_goal__ArgModes_47, &hlds__hlds_out__hlds_out_goal__conv0_RetMode_48);
                    }
#line 983 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__RetMode_48 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv0_RetMode_48);
#line 984 "hlds_out_goal.m"
                    {
#line 984 "hlds_out_goal.m"
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], hlds__hlds_out__hlds_out_goal__Vars_39, &hlds__hlds_out__hlds_out_goal__ArgVars_131, &hlds__hlds_out__hlds_out_goal__conv1_RetVar_49);
                    }
#line 984 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__RetVar_49 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv1_RetVar_49);
#line 985 "hlds_out_goal.m"
                    {
#line 985 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 989 "hlds_out_goal.m"
                    if ((hlds__hlds_out__hlds_out_goal__ArgVars_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 987 "hlds_out_goal.m"
                      {
#line 988 "hlds_out_goal.m"
                        {
#line 988 "hlds_out_goal.m"
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[5]));
                        }
#line 987 "hlds_out_goal.m"
                      }
#line 989 "hlds_out_goal.m"
                    else
#line 990 "hlds_out_goal.m"
                      {
#line 991 "hlds_out_goal.m"
                        {
#line 991 "hlds_out_goal.m"
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[7]));
                        }
#line 992 "hlds_out_goal.m"
                        {
#line 992 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(hlds__hlds_out__hlds_out_goal__ArgVars_131, hlds__hlds_out__hlds_out_goal__ArgModes_47, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__InstVarSet_16, hlds__hlds_out__hlds_out_goal__AppendVarNums_17);
                        }
#line 994 "hlds_out_goal.m"
                        {
#line 994 "hlds_out_goal.m"
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
#line 990 "hlds_out_goal.m"
                      }
#line 996 "hlds_out_goal.m"
                    {
#line 996 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) " = (");
                    }
#line 998 "hlds_out_goal.m"
                    {
#line 998 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 998 "hlds_out_goal.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_79_79, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__RetVar_49));
#line 998 "hlds_out_goal.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_79_79, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__RetMode_48));
#line 998 "hlds_out_goal.m"
                    }
#line 997 "hlds_out_goal.m"
                    {
#line 997 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__InstVarSet_16, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__V_79_79);
                    }
#line 999 "hlds_out_goal.m"
                    {
#line 999 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ") is ");
                    }
#line 1000 "hlds_out_goal.m"
                    {
#line 1000 "hlds_out_goal.m"
                      parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(hlds__hlds_out__hlds_out_goal__Det_41);
                    }
#line 1001 "hlds_out_goal.m"
                    {
#line 1001 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) " :-\n");
                    }
#line 1002 "hlds_out_goal.m"
                    {
#line 1002 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_12, hlds__hlds_out__hlds_out_goal__Goal_42, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__Indent1_43, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_20);
                    }
#line 1004 "hlds_out_goal.m"
                    {
#line 1004 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                    }
#line 1005 "hlds_out_goal.m"
                    {
#line 1005 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ")\n");
                    }
#line 975 "hlds_out_goal.m"
                  }
#line 974 "hlds_out_goal.m"
                  break;
#line 974 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 948 "hlds_out_goal.m"
                  {
#line 956 "hlds_out_goal.m"
                    {
#line 956 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 960 "hlds_out_goal.m"
                    if ((hlds__hlds_out__hlds_out_goal__Vars_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 958 "hlds_out_goal.m"
                      {
#line 959 "hlds_out_goal.m"
                        {
#line 959 "hlds_out_goal.m"
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[9]));
                        }
#line 958 "hlds_out_goal.m"
                      }
#line 960 "hlds_out_goal.m"
                    else
#line 961 "hlds_out_goal.m"
                      {
#line 962 "hlds_out_goal.m"
                        {
#line 962 "hlds_out_goal.m"
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[10]));
                        }
#line 963 "hlds_out_goal.m"
                        {
#line 963 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(hlds__hlds_out__hlds_out_goal__Vars_39, hlds__hlds_out__hlds_out_goal__Modes_40, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__InstVarSet_16, hlds__hlds_out__hlds_out_goal__AppendVarNums_17);
                        }
#line 965 "hlds_out_goal.m"
                        {
#line 965 "hlds_out_goal.m"
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
#line 961 "hlds_out_goal.m"
                      }
#line 967 "hlds_out_goal.m"
                    {
#line 967 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) " is ");
                    }
#line 968 "hlds_out_goal.m"
                    {
#line 968 "hlds_out_goal.m"
                      parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(hlds__hlds_out__hlds_out_goal__Det_41);
                    }
#line 969 "hlds_out_goal.m"
                    {
#line 969 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) " :-\n");
                    }
#line 970 "hlds_out_goal.m"
                    {
#line 970 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_12, hlds__hlds_out__hlds_out_goal__Goal_42, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__Indent1_43, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_20);
                    }
#line 972 "hlds_out_goal.m"
                    {
#line 972 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                    }
#line 973 "hlds_out_goal.m"
                    {
#line 973 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ")\n");
                    }
#line 948 "hlds_out_goal.m"
                  }
#line 974 "hlds_out_goal.m"
                  break;
#line 974 "hlds_out_goal.m"
              }
#line 974 "hlds_out_goal.m"
              break;
#line 974 "hlds_out_goal.m"
            case (MR_Integer) 0:
#line 974 "hlds_out_goal.m"
#line 974 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__PredOrFunc_36) {
#line 974 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 974 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 975 "hlds_out_goal.m"
                  {
#line 975 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_179;
#line 975 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__RetMode_180;
#line 975 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__RetVar_181;
#line 975 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__V_202_202;
#line 975 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_213;
#line 983 "hlds_out_goal.m"
                    MR_Box hlds__hlds_out__hlds_out_goal__conv2_RetMode_180;
#line 984 "hlds_out_goal.m"
                    MR_Box hlds__hlds_out__hlds_out_goal__conv3_RetVar_181;

#line 983 "hlds_out_goal.m"
                    {
#line 983 "hlds_out_goal.m"
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_goal__Modes_40, &hlds__hlds_out__hlds_out_goal__ArgModes_179, &hlds__hlds_out__hlds_out_goal__conv2_RetMode_180);
                    }
#line 983 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__RetMode_180 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv2_RetMode_180);
#line 984 "hlds_out_goal.m"
                    {
#line 984 "hlds_out_goal.m"
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], hlds__hlds_out__hlds_out_goal__Vars_39, &hlds__hlds_out__hlds_out_goal__ArgVars_213, &hlds__hlds_out__hlds_out_goal__conv3_RetVar_181);
                    }
#line 984 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__RetVar_181 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv3_RetVar_181);
#line 985 "hlds_out_goal.m"
                    {
#line 985 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 989 "hlds_out_goal.m"
                    if ((hlds__hlds_out__hlds_out_goal__ArgVars_213 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 987 "hlds_out_goal.m"
                      {
#line 988 "hlds_out_goal.m"
                        {
#line 988 "hlds_out_goal.m"
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[12]));
                        }
#line 987 "hlds_out_goal.m"
                      }
#line 989 "hlds_out_goal.m"
                    else
#line 990 "hlds_out_goal.m"
                      {
#line 991 "hlds_out_goal.m"
                        {
#line 991 "hlds_out_goal.m"
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[13]));
                        }
#line 992 "hlds_out_goal.m"
                        {
#line 992 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(hlds__hlds_out__hlds_out_goal__ArgVars_213, hlds__hlds_out__hlds_out_goal__ArgModes_179, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__InstVarSet_16, hlds__hlds_out__hlds_out_goal__AppendVarNums_17);
                        }
#line 994 "hlds_out_goal.m"
                        {
#line 994 "hlds_out_goal.m"
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
#line 990 "hlds_out_goal.m"
                      }
#line 996 "hlds_out_goal.m"
                    {
#line 996 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) " = (");
                    }
#line 998 "hlds_out_goal.m"
                    {
#line 998 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__V_202_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 998 "hlds_out_goal.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_202_202, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__RetVar_181));
#line 998 "hlds_out_goal.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_202_202, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__RetMode_180));
#line 998 "hlds_out_goal.m"
                    }
#line 997 "hlds_out_goal.m"
                    {
#line 997 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__InstVarSet_16, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__V_202_202);
                    }
#line 999 "hlds_out_goal.m"
                    {
#line 999 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ") is ");
                    }
#line 1000 "hlds_out_goal.m"
                    {
#line 1000 "hlds_out_goal.m"
                      parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(hlds__hlds_out__hlds_out_goal__Det_41);
                    }
#line 1001 "hlds_out_goal.m"
                    {
#line 1001 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) " :-\n");
                    }
#line 1002 "hlds_out_goal.m"
                    {
#line 1002 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_12, hlds__hlds_out__hlds_out_goal__Goal_42, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__Indent1_43, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_20);
                    }
#line 1004 "hlds_out_goal.m"
                    {
#line 1004 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                    }
#line 1005 "hlds_out_goal.m"
                    {
#line 1005 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ")\n");
                    }
#line 975 "hlds_out_goal.m"
                  }
#line 974 "hlds_out_goal.m"
                  break;
#line 974 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 948 "hlds_out_goal.m"
                  {
#line 956 "hlds_out_goal.m"
                    {
#line 956 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 960 "hlds_out_goal.m"
                    if ((hlds__hlds_out__hlds_out_goal__Vars_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 958 "hlds_out_goal.m"
                      {
#line 959 "hlds_out_goal.m"
                        {
#line 959 "hlds_out_goal.m"
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[15]));
                        }
#line 958 "hlds_out_goal.m"
                      }
#line 960 "hlds_out_goal.m"
                    else
#line 961 "hlds_out_goal.m"
                      {
#line 962 "hlds_out_goal.m"
                        {
#line 962 "hlds_out_goal.m"
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[16]));
                        }
#line 963 "hlds_out_goal.m"
                        {
#line 963 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(hlds__hlds_out__hlds_out_goal__Vars_39, hlds__hlds_out__hlds_out_goal__Modes_40, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__InstVarSet_16, hlds__hlds_out__hlds_out_goal__AppendVarNums_17);
                        }
#line 965 "hlds_out_goal.m"
                        {
#line 965 "hlds_out_goal.m"
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
#line 961 "hlds_out_goal.m"
                      }
#line 967 "hlds_out_goal.m"
                    {
#line 967 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) " is ");
                    }
#line 968 "hlds_out_goal.m"
                    {
#line 968 "hlds_out_goal.m"
                      parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(hlds__hlds_out__hlds_out_goal__Det_41);
                    }
#line 969 "hlds_out_goal.m"
                    {
#line 969 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) " :-\n");
                    }
#line 970 "hlds_out_goal.m"
                    {
#line 970 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_12, hlds__hlds_out__hlds_out_goal__Goal_42, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__Indent1_43, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_20);
                    }
#line 972 "hlds_out_goal.m"
                    {
#line 972 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                    }
#line 973 "hlds_out_goal.m"
                    {
#line 973 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ")\n");
                    }
#line 948 "hlds_out_goal.m"
                  }
#line 974 "hlds_out_goal.m"
                  break;
#line 974 "hlds_out_goal.m"
              }
#line 974 "hlds_out_goal.m"
              break;
#line 974 "hlds_out_goal.m"
          }
#line 1008 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeType_19)) == (MR_mktag((MR_Integer) 1)));
#line 1008 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1008 "hlds_out_goal.m"
            {
#line 1008 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__Type_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeType_19, (MR_Integer) 0)));
#line 1009 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__TypeQual_20)) == (MR_mktag((MR_Integer) 1)));
#line 1009 "hlds_out_goal.m"
              if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1009 "hlds_out_goal.m"
                {
#line 1009 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__TVarSet_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_20, (MR_Integer) 0)));
#line 1009 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_20, (MR_Integer) 1)));
#line 1009 "hlds_out_goal.m"
                }
#line 1008 "hlds_out_goal.m"
            }
#line 1013 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1011 "hlds_out_goal.m"
            {
#line 1011 "hlds_out_goal.m"
              {
#line 1011 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) " : ");
              }
#line 1012 "hlds_out_goal.m"
              {
#line 1012 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_goal__TVarSet_135, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__Type_134);
              }
#line 1011 "hlds_out_goal.m"
            }
#line 1013 "hlds_out_goal.m"
          else
#line 1013 "hlds_out_goal.m"
            {
#line 1013 "hlds_out_goal.m"
            }
#line 1016 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__DumpOptions_53 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 0)));
#line 1016 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_139_139 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 1)));
#line 1016 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 2)));
#line 1016 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 3)));
#line 1016 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 4)));
#line 1017 "hlds_out_goal.m"
          {
#line 1017 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_53, (MR_Char) 110);
          }
#line 1026 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1023 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__NonLocals_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1024 "hlds_out_goal.m"
              {
#line 1024 "hlds_out_goal.m"
              }
#line 1023 "hlds_out_goal.m"
            else
#line 1019 "hlds_out_goal.m"
              {
#line 1020 "hlds_out_goal.m"
                {
#line 1020 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent1_43);
                }
#line 1021 "hlds_out_goal.m"
                {
#line 1021 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% lambda nonlocals: ");
                }
#line 1022 "hlds_out_goal.m"
                {
#line 1022 "hlds_out_goal.m"
                  parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__AppendVarNums_17, hlds__hlds_out__hlds_out_goal__NonLocals_38);
#line 1022 "hlds_out_goal.m"
                  return;
                }
#line 1019 "hlds_out_goal.m"
              }
#line 1026 "hlds_out_goal.m"
          else
#line 1026 "hlds_out_goal.m"
            {
#line 1026 "hlds_out_goal.m"
            }
#line 944 "hlds_out_goal.m"
        }
#line 918 "hlds_out_goal.m"
        break;
#line 918 "hlds_out_goal.m"
    }
#line 918 "hlds_out_goal.m"
  }
#line 911 "hlds_out_goal.m"
}

#line 901 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(
#line 901 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_13,
#line 901 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_14,
#line 901 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_15,
#line 901 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_16,
#line 901 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_17,
#line 901 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_18,
#line 901 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_19,
#line 901 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_20,
#line 901 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeType_21,
#line 901 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_22)
#line 901 "hlds_out_goal.m"
{
#line 906 "hlds_out_goal.m"
  {
#line 906 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 907 "hlds_out_goal.m"
    {
#line 907 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_p_0(hlds__hlds_out__hlds_out_goal__Info_13, hlds__hlds_out__hlds_out_goal__RHS_14, hlds__hlds_out__hlds_out_goal__ModuleInfo_15, hlds__hlds_out__hlds_out_goal__VarSet_16, hlds__hlds_out__hlds_out_goal__InstVarSet_17, hlds__hlds_out__hlds_out_goal__AppendVarNums_18, hlds__hlds_out__hlds_out_goal__Indent_19, hlds__hlds_out__hlds_out_goal__MaybeType_21, hlds__hlds_out__hlds_out_goal__TypeQual_22);
    }
#line 909 "hlds_out_goal.m"
    {
#line 909 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_20);
#line 909 "hlds_out_goal.m"
      return;
    }
#line 906 "hlds_out_goal.m"
  }
#line 901 "hlds_out_goal.m"
}

#line 850 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_unify_10_p_0(
#line 850 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 850 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 850 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 850 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 850 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 850 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 850 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 850 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 850 "hlds_out_goal.m"
{
#line 856 "hlds_out_goal.m"
  {
#line 856 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 856 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__LHS_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 0)));
#line 856 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__RHS_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 1)));
#line 856 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Unification_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 3)));
#line 856 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_25 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 856 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__VarType_29;
#line 856 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_30;
#line 857 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 2)));
#line 857 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 4)));
#line 858 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 858 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 858 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 858 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));

#line 859 "hlds_out_goal.m"
    {
#line 859 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 860 "hlds_out_goal.m"
    {
#line 860 "hlds_out_goal.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__LHS_20);
    }
#line 861 "hlds_out_goal.m"
    {
#line 861 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
#line 866 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__TypeQual_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__VarType_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "hlds_out_goal.m"
    else
#line 863 "hlds_out_goal.m"
      {
#line 863 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__VarTypes_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_18, (MR_Integer) 1)));
#line 863 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__UniType_28;
#line 863 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_18, (MR_Integer) 0)));

#line 864 "hlds_out_goal.m"
        {
#line 864 "hlds_out_goal.m"
          hlds__vartypes__lookup_var_type_3_p_0(hlds__hlds_out__hlds_out_goal__VarTypes_27, hlds__hlds_out__hlds_out_goal__LHS_20, &hlds__hlds_out__hlds_out_goal__UniType_28);
        }
#line 865 "hlds_out_goal.m"
        {
#line 865 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__VarType_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 865 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__VarType_29, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__UniType_28));
#line 865 "hlds_out_goal.m"
        }
#line 863 "hlds_out_goal.m"
      }
#line 871 "hlds_out_goal.m"
    {
#line 871 "hlds_out_goal.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_goal__InstVarSet_30);
    }
#line 872 "hlds_out_goal.m"
    {
#line 872 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__RHS_21, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_30, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__VarType_29, hlds__hlds_out__hlds_out_goal__TypeQual_18);
    }
#line 875 "hlds_out_goal.m"
    {
#line 875 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 117);
    }
#line 876 "hlds_out_goal.m"
    if (!(hlds__hlds_out__hlds_out_goal__succeeded))
#line 876 "hlds_out_goal.m"
      {
#line 876 "hlds_out_goal.m"
        {
#line 876 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 112);
        }
#line 876 "hlds_out_goal.m"
      }
#line 892 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 888 "hlds_out_goal.m"
      {
#line 882 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Mode_31;
#line 882 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CanFail_32;
#line 882 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeInfoVars_33;
#line 884 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_43_43;
#line 884 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_44_44;
#line 884 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_45_45;
#line 884 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_46_46;
#line 884 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_47_47;
#line 884 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_48_48;

#line 882 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Unification_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 882 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 882 "hlds_out_goal.m"
          {
#line 882 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_23, (MR_Integer) 1)));
#line 882 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__CanFail_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_23, (MR_Integer) 2)));
#line 882 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__TypeInfoVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_23, (MR_Integer) 3)));
#line 883 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__CanFail_32 == (MR_Integer) 0);
#line 882 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 882 "hlds_out_goal.m"
              {
#line 884 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Mode_31, (MR_Integer) 0)));
#line 884 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Mode_31, (MR_Integer) 1)));
#line 884 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_43_43, (MR_Integer) 0)));
#line 884 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_43_43, (MR_Integer) 1)));
#line 884 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 884 "hlds_out_goal.m"
                  {
#line 884 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "hlds_out_goal.m"
                    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 884 "hlds_out_goal.m"
                      {
#line 884 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_goal__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_46_46, (MR_Integer) 0)));
#line 884 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_goal__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_46_46, (MR_Integer) 1)));
#line 884 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "hlds_out_goal.m"
                        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 884 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "hlds_out_goal.m"
                      }
#line 884 "hlds_out_goal.m"
                  }
#line 882 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 885 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__TypeInfoVars_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "hlds_out_goal.m"
              }
#line 882 "hlds_out_goal.m"
          }
#line 888 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 888 "hlds_out_goal.m"
          {
#line 888 "hlds_out_goal.m"
          }
#line 888 "hlds_out_goal.m"
        else
#line 889 "hlds_out_goal.m"
          {
#line 889 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Unification_23, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_30, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16);
#line 889 "hlds_out_goal.m"
            return;
          }
#line 888 "hlds_out_goal.m"
      }
#line 892 "hlds_out_goal.m"
    else
#line 892 "hlds_out_goal.m"
      {
#line 892 "hlds_out_goal.m"
      }
#line 856 "hlds_out_goal.m"
  }
#line 850 "hlds_out_goal.m"
}

#line 793 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_expr_10_p_0(
#line 793 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 793 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_12,
#line 793 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 793 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 793 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 793 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 793 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 793 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 793 "hlds_out_goal.m"
{
#line 800 "hlds_out_goal.m"
  {
#line 800 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 800 "hlds_out_goal.m"
#line 800 "hlds_out_goal.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_12)) {
#line 800 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 800 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 837 "hlds_out_goal.m"
        {
#line 837 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_goal_negation_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 837 "hlds_out_goal.m"
          return;
        }
#line 800 "hlds_out_goal.m"
        break;
#line 800 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 801 "hlds_out_goal.m"
        {
#line 801 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_goal_unify_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 801 "hlds_out_goal.m"
          return;
        }
#line 800 "hlds_out_goal.m"
        break;
#line 800 "hlds_out_goal.m"
      case (MR_Integer) 2:
#line 805 "hlds_out_goal.m"
        {
#line 805 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 805 "hlds_out_goal.m"
          return;
        }
#line 800 "hlds_out_goal.m"
        break;
#line 800 "hlds_out_goal.m"
      case (MR_Integer) 3:
#line 800 "hlds_out_goal.m"
#line 800 "hlds_out_goal.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_12, (MR_Integer) 0)))) {
#line 800 "hlds_out_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 800 "hlds_out_goal.m"
          case (MR_Integer) 0:
#line 809 "hlds_out_goal.m"
            {
#line 809 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17);
#line 809 "hlds_out_goal.m"
              return;
            }
#line 800 "hlds_out_goal.m"
            break;
#line 800 "hlds_out_goal.m"
          case (MR_Integer) 1:
#line 813 "hlds_out_goal.m"
            {
#line 813 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_p_0(hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17);
#line 813 "hlds_out_goal.m"
              return;
            }
#line 800 "hlds_out_goal.m"
            break;
#line 800 "hlds_out_goal.m"
          case (MR_Integer) 2:
#line 817 "hlds_out_goal.m"
            {
#line 817 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_goal_conj_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 817 "hlds_out_goal.m"
              return;
            }
#line 800 "hlds_out_goal.m"
            break;
#line 800 "hlds_out_goal.m"
          case (MR_Integer) 3:
#line 821 "hlds_out_goal.m"
            {
#line 821 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_goal_disj_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 821 "hlds_out_goal.m"
              return;
            }
#line 800 "hlds_out_goal.m"
            break;
#line 800 "hlds_out_goal.m"
          case (MR_Integer) 4:
#line 825 "hlds_out_goal.m"
            {
#line 825 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 825 "hlds_out_goal.m"
              return;
            }
#line 800 "hlds_out_goal.m"
            break;
#line 800 "hlds_out_goal.m"
          case (MR_Integer) 5:
#line 829 "hlds_out_goal.m"
            {
#line 829 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 829 "hlds_out_goal.m"
              return;
            }
#line 800 "hlds_out_goal.m"
            break;
#line 800 "hlds_out_goal.m"
          case (MR_Integer) 6:
#line 833 "hlds_out_goal.m"
            {
#line 833 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 833 "hlds_out_goal.m"
              return;
            }
#line 800 "hlds_out_goal.m"
            break;
#line 800 "hlds_out_goal.m"
          case (MR_Integer) 7:
#line 841 "hlds_out_goal.m"
            {
#line 841 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
#line 841 "hlds_out_goal.m"
              return;
            }
#line 800 "hlds_out_goal.m"
            break;
#line 800 "hlds_out_goal.m"
        }
#line 800 "hlds_out_goal.m"
        break;
#line 800 "hlds_out_goal.m"
    }
#line 800 "hlds_out_goal.m"
  }
#line 793 "hlds_out_goal.m"
}

#line 742 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(
#line 742 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ShortDescription_6,
#line 742 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 742 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarnums_8)
#line 742 "hlds_out_goal.m"
{
#line 747 "hlds_out_goal.m"
  {
#line 747 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 747 "hlds_out_goal.m"
#line 747 "hlds_out_goal.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ShortDescription_6)) {
#line 747 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 747 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 747 "hlds_out_goal.m"
        {
#line 748 "hlds_out_goal.m"
          {
#line 748 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "cell died");
#line 748 "hlds_out_goal.m"
            return;
          }
#line 747 "hlds_out_goal.m"
        }
#line 747 "hlds_out_goal.m"
        break;
#line 747 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 750 "hlds_out_goal.m"
        {
#line 750 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 0)));
#line 750 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__IsConditional_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 1)));
#line 750 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 2)));
#line 750 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 3)));

#line 751 "hlds_out_goal.m"
          {
#line 751 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "cell reuse - ");
          }
#line 752 "hlds_out_goal.m"
          {
#line 752 "hlds_out_goal.m"
            parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__AppendVarnums_8, hlds__hlds_out__hlds_out_goal__Var_10);
          }
#line 753 "hlds_out_goal.m"
          {
#line 753 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) " - ");
          }
#line 767 "hlds_out_goal.m"
#line 767 "hlds_out_goal.m"
          switch (hlds__hlds_out__hlds_out_goal__IsConditional_11) {
#line 767 "hlds_out_goal.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 767 "hlds_out_goal.m"
            case (MR_Integer) 0:
#line 767 "hlds_out_goal.m"
              {
#line 768 "hlds_out_goal.m"
                {
#line 768 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "with condition");
#line 768 "hlds_out_goal.m"
                  return;
                }
#line 767 "hlds_out_goal.m"
              }
#line 767 "hlds_out_goal.m"
              break;
#line 767 "hlds_out_goal.m"
            case (MR_Integer) 1:
#line 770 "hlds_out_goal.m"
              {
#line 771 "hlds_out_goal.m"
                {
#line 771 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "always safe");
#line 771 "hlds_out_goal.m"
                  return;
                }
#line 770 "hlds_out_goal.m"
              }
#line 767 "hlds_out_goal.m"
              break;
#line 767 "hlds_out_goal.m"
          }
#line 750 "hlds_out_goal.m"
        }
#line 747 "hlds_out_goal.m"
        break;
#line 747 "hlds_out_goal.m"
      case (MR_Integer) 2:
#line 756 "hlds_out_goal.m"
        {
#line 756 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__NoClobbers_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 1)));
#line 756 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__IsConditional_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 0)));

#line 757 "hlds_out_goal.m"
          {
#line 757 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "reuse call - ");
          }
#line 767 "hlds_out_goal.m"
#line 767 "hlds_out_goal.m"
          switch (hlds__hlds_out__hlds_out_goal__IsConditional_31) {
#line 767 "hlds_out_goal.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 767 "hlds_out_goal.m"
            case (MR_Integer) 0:
#line 767 "hlds_out_goal.m"
              {
#line 768 "hlds_out_goal.m"
                {
#line 768 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "with condition");
                }
#line 767 "hlds_out_goal.m"
              }
#line 767 "hlds_out_goal.m"
              break;
#line 767 "hlds_out_goal.m"
            case (MR_Integer) 1:
#line 770 "hlds_out_goal.m"
              {
#line 771 "hlds_out_goal.m"
                {
#line 771 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "always safe");
                }
#line 770 "hlds_out_goal.m"
              }
#line 767 "hlds_out_goal.m"
              break;
#line 767 "hlds_out_goal.m"
          }
#line 759 "hlds_out_goal.m"
          {
#line 759 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) ", no clobbers = ");
          }
#line 760 "hlds_out_goal.m"
          {
#line 760 "hlds_out_goal.m"
            mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[2], ((MR_Box) (hlds__hlds_out__hlds_out_goal__NoClobbers_14)));
#line 760 "hlds_out_goal.m"
            return;
          }
#line 756 "hlds_out_goal.m"
        }
#line 747 "hlds_out_goal.m"
        break;
#line 747 "hlds_out_goal.m"
    }
#line 747 "hlds_out_goal.m"
  }
#line 742 "hlds_out_goal.m"
}

#line 731 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(
#line 731 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_1,
#line 731 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_2,
#line 731 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__3_3)
#line 731 "hlds_out_goal.m"
{
#line 734 "hlds_out_goal.m"
  while (MR_TRUE)
#line 734 "hlds_out_goal.m"
    {
#line 734 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 734 "hlds_out_goal.m"
      {
#line 734 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 734 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 734 "hlds_out_goal.m"
          {
#line 734 "hlds_out_goal.m"
          }
#line 734 "hlds_out_goal.m"
        else
#line 734 "hlds_out_goal.m"
          {
#line 734 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__3_3, (MR_Integer) 1)));
#line 734 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__3_3, (MR_Integer) 0)));

#line 734 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 735 "hlds_out_goal.m"
              {
#line 736 "hlds_out_goal.m"
                {
#line 736 "hlds_out_goal.m"
                  parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__AppendVarNums_2, hlds__hlds_out__hlds_out_goal__V_36_36);
#line 736 "hlds_out_goal.m"
                  return;
                }
#line 735 "hlds_out_goal.m"
              }
#line 734 "hlds_out_goal.m"
            else
#line 737 "hlds_out_goal.m"
              {
#line 737 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_66_66;
#line 737 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_67_67;

#line 738 "hlds_out_goal.m"
                {
#line 738 "hlds_out_goal.m"
                  parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__AppendVarNums_2, hlds__hlds_out__hlds_out_goal__V_36_36);
                }
#line 739 "hlds_out_goal.m"
                {
#line 739 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 735 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_35_35, (MR_Integer) 0)));
#line 735 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_35_35, (MR_Integer) 1)));
#line 734 "hlds_out_goal.m"
                if ((hlds__hlds_out__hlds_out_goal__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 735 "hlds_out_goal.m"
                  {
#line 736 "hlds_out_goal.m"
                    {
#line 736 "hlds_out_goal.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__AppendVarNums_2, hlds__hlds_out__hlds_out_goal__V_67_67);
#line 736 "hlds_out_goal.m"
                      return;
                    }
#line 735 "hlds_out_goal.m"
                  }
#line 734 "hlds_out_goal.m"
                else
#line 737 "hlds_out_goal.m"
                  {
#line 738 "hlds_out_goal.m"
                    {
#line 738 "hlds_out_goal.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__AppendVarNums_2, hlds__hlds_out__hlds_out_goal__V_67_67);
                    }
#line 739 "hlds_out_goal.m"
                    {
#line 739 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 740 "hlds_out_goal.m"
                    /* direct tailcall eliminated */
#line 740 "hlds_out_goal.m"
                    {
#line 740 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_goal__V_66_66;

#line 740 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__HeadVar__3_3 = hlds__hlds_out__hlds_out_goal__HeadVar__3__tmp_copy_3;
#line 740 "hlds_out_goal.m"
                    }
#line 740 "hlds_out_goal.m"
                    continue;
#line 737 "hlds_out_goal.m"
                  }
#line 737 "hlds_out_goal.m"
              }
#line 734 "hlds_out_goal.m"
          }
#line 734 "hlds_out_goal.m"
      }
#line 734 "hlds_out_goal.m"
      break;
#line 734 "hlds_out_goal.m"
    }
#line 731 "hlds_out_goal.m"
}

#line 719 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_p_0(
#line 719 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_6,
#line 719 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 719 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_8)
#line 719 "hlds_out_goal.m"
{
#line 725 "hlds_out_goal.m"
  {
#line 725 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 723 "hlds_out_goal.m"
    {
#line 723 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_6);
    }
#line 725 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 724 "hlds_out_goal.m"
      {
#line 724 "hlds_out_goal.m"
        {
#line 724 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "unreachable");
#line 724 "hlds_out_goal.m"
          return;
        }
#line 724 "hlds_out_goal.m"
      }
#line 725 "hlds_out_goal.m"
    else
#line 726 "hlds_out_goal.m"
      {
#line 726 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__AssocList_10;
#line 726 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Vars_11;

#line 726 "hlds_out_goal.m"
        {
#line 726 "hlds_out_goal.m"
          hlds__instmap__instmap_delta_to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_6, &hlds__hlds_out__hlds_out_goal__AssocList_10);
        }
#line 727 "hlds_out_goal.m"
        {
#line 727 "hlds_out_goal.m"
          mercury__assoc_list__keys_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__hlds_out__hlds_out_goal__AssocList_10, &hlds__hlds_out__hlds_out_goal__Vars_11);
        }
#line 728 "hlds_out_goal.m"
        {
#line 728 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__AppendVarNums_8, hlds__hlds_out__hlds_out_goal__Vars_11);
#line 728 "hlds_out_goal.m"
          return;
        }
#line 726 "hlds_out_goal.m"
      }
#line 725 "hlds_out_goal.m"
  }
#line 719 "hlds_out_goal.m"
}

#line 708 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_p_0(
#line 708 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_7,
#line 708 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_8,
#line 708 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_9,
#line 708 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_10)
#line 708 "hlds_out_goal.m"
{
#line 714 "hlds_out_goal.m"
  {
#line 714 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 712 "hlds_out_goal.m"
    {
#line 712 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_7);
    }
#line 714 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 713 "hlds_out_goal.m"
      {
#line 713 "hlds_out_goal.m"
        {
#line 713 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "unreachable");
#line 713 "hlds_out_goal.m"
          return;
        }
#line 713 "hlds_out_goal.m"
      }
#line 714 "hlds_out_goal.m"
    else
#line 715 "hlds_out_goal.m"
      {
#line 715 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__AssocList_12;

#line 715 "hlds_out_goal.m"
        {
#line 715 "hlds_out_goal.m"
          hlds__instmap__instmap_delta_to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_7, &hlds__hlds_out__hlds_out_goal__AssocList_12);
        }
#line 716 "hlds_out_goal.m"
        {
#line 716 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_p_0(hlds__hlds_out__hlds_out_goal__AssocList_12, hlds__hlds_out__hlds_out_goal__VarSet_8, hlds__hlds_out__hlds_out_goal__AppendVarNums_9, hlds__hlds_out__hlds_out_goal__Indent_10);
#line 716 "hlds_out_goal.m"
          return;
        }
#line 715 "hlds_out_goal.m"
      }
#line 714 "hlds_out_goal.m"
  }
#line 708 "hlds_out_goal.m"
}

#line 522 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_p_0(
#line 522 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_8,
#line 522 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalInfo_9,
#line 522 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_10,
#line 522 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_11,
#line 522 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_12)
#line 522 "hlds_out_goal.m"
{
#line 525 "hlds_out_goal.m"
  {
#line 525 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 525 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 0)));
#line 526 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_145_145 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 1)));
#line 526 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 2)));
#line 526 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 3)));
#line 526 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 4)));
#line 584 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__StoreMapList_26;
#line 575 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__TypeInfo_152_152;
#line 575 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_153_153;
#line 575 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__StoreMap_25;
#line 578 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_27_27;
#line 578 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_28_28;
#line 629 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30;
#line 588 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeNeedAcrossCall_29;
#line 671 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__NeedInResume_44;
#line 633 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeNeedInResume_43;
#line 685 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__NeedInParConj_55;
#line 675 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeNeedInParConj_54;

#line 527 "hlds_out_goal.m"
    {
#line 527 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 102);
    }
#line 543 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 528 "hlds_out_goal.m"
      {
#line 528 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__MaybeFollowVars_15;

#line 528 "hlds_out_goal.m"
        {
#line 528 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__MaybeFollowVars_15);
        }
#line 540 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__MaybeFollowVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 541 "hlds_out_goal.m"
          {
#line 541 "hlds_out_goal.m"
          }
#line 540 "hlds_out_goal.m"
        else
#line 530 "hlds_out_goal.m"
          {
#line 530 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__FollowVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeFollowVars_15, (MR_Integer) 0)));
#line 530 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__FollowVarsMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__FollowVars_16, (MR_Integer) 0)));
#line 530 "hlds_out_goal.m"
            MR_Integer hlds__hlds_out__hlds_out_goal__NextRegR_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__FollowVars_16, (MR_Integer) 1)));
#line 530 "hlds_out_goal.m"
            MR_Integer hlds__hlds_out__hlds_out_goal__NextRegF_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__FollowVars_16, (MR_Integer) 2)));
#line 530 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__FVlist_20;

#line 532 "hlds_out_goal.m"
            {
#line 532 "hlds_out_goal.m"
              mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, hlds__hlds_out__hlds_out_goal__FollowVarsMap_17, &hlds__hlds_out__hlds_out_goal__FVlist_20);
            }
#line 533 "hlds_out_goal.m"
            {
#line 533 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
            }
#line 534 "hlds_out_goal.m"
            {
#line 534 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% follow vars: r");
            }
#line 535 "hlds_out_goal.m"
            {
#line 535 "hlds_out_goal.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__NextRegR_18);
            }
#line 536 "hlds_out_goal.m"
            {
#line 536 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) ", f");
            }
#line 537 "hlds_out_goal.m"
            {
#line 537 "hlds_out_goal.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__NextRegF_19);
            }
#line 538 "hlds_out_goal.m"
            {
#line 538 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 539 "hlds_out_goal.m"
            {
#line 539 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(hlds__hlds_out__hlds_out_goal__FVlist_20, hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__Indent_12);
            }
#line 530 "hlds_out_goal.m"
          }
#line 528 "hlds_out_goal.m"
      }
#line 543 "hlds_out_goal.m"
    else
#line 543 "hlds_out_goal.m"
      {
#line 543 "hlds_out_goal.m"
      }
#line 546 "hlds_out_goal.m"
    {
#line 546 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 114);
    }
#line 571 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 547 "hlds_out_goal.m"
      {
#line 547 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Resume_21;

#line 547 "hlds_out_goal.m"
        {
#line 547 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__Resume_21);
        }
#line 550 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__Resume_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 549 "hlds_out_goal.m"
          {
#line 549 "hlds_out_goal.m"
          }
#line 550 "hlds_out_goal.m"
        else
#line 551 "hlds_out_goal.m"
          {
#line 551 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_151_151 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 551 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__ResumeVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Resume_21, (MR_Integer) 0)));
#line 551 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Locs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Resume_21, (MR_Integer) 1)));
#line 551 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__ResumeVarList_24;

#line 552 "hlds_out_goal.m"
            {
#line 552 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__ResumeVarList_24 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_151_151, hlds__hlds_out__hlds_out_goal__ResumeVars_22);
            }
#line 553 "hlds_out_goal.m"
            {
#line 553 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
            }
#line 554 "hlds_out_goal.m"
            {
#line 554 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% resume point ");
            }
#line 558 "hlds_out_goal.m"
#line 558 "hlds_out_goal.m"
            switch (hlds__hlds_out__hlds_out_goal__Locs_23) {
#line 558 "hlds_out_goal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 558 "hlds_out_goal.m"
              case (MR_Integer) 2:
#line 562 "hlds_out_goal.m"
                {
#line 563 "hlds_out_goal.m"
                  {
#line 563 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "orig and stack ");
                  }
#line 562 "hlds_out_goal.m"
                }
#line 558 "hlds_out_goal.m"
                break;
#line 558 "hlds_out_goal.m"
              case (MR_Integer) 0:
#line 556 "hlds_out_goal.m"
                {
#line 557 "hlds_out_goal.m"
                  {
#line 557 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "orig only ");
                  }
#line 556 "hlds_out_goal.m"
                }
#line 558 "hlds_out_goal.m"
                break;
#line 558 "hlds_out_goal.m"
              case (MR_Integer) 3:
#line 565 "hlds_out_goal.m"
                {
#line 566 "hlds_out_goal.m"
                  {
#line 566 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "stack and orig ");
                  }
#line 565 "hlds_out_goal.m"
                }
#line 558 "hlds_out_goal.m"
                break;
#line 558 "hlds_out_goal.m"
              case (MR_Integer) 1:
#line 559 "hlds_out_goal.m"
                {
#line 560 "hlds_out_goal.m"
                  {
#line 560 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "stack only ");
                  }
#line 559 "hlds_out_goal.m"
                }
#line 558 "hlds_out_goal.m"
                break;
#line 558 "hlds_out_goal.m"
            }
#line 568 "hlds_out_goal.m"
            {
#line 568 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_151_151, hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__ResumeVarList_24);
            }
#line 569 "hlds_out_goal.m"
            {
#line 569 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 551 "hlds_out_goal.m"
          }
#line 547 "hlds_out_goal.m"
      }
#line 571 "hlds_out_goal.m"
    else
#line 571 "hlds_out_goal.m"
      {
#line 571 "hlds_out_goal.m"
      }
#line 575 "hlds_out_goal.m"
    {
#line 575 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 115);
    }
#line 575 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 575 "hlds_out_goal.m"
      {
#line 576 "hlds_out_goal.m"
        {
#line 576 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_store_map_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__StoreMap_25);
        }
#line 8728 "hlds.hlds_out.hlds_out_goal.c"
        hlds__hlds_out__hlds_out_goal__TypeInfo_152_152 = (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0];
#line 8730 "hlds.hlds_out.hlds_out_goal.c"
        hlds__hlds_out__hlds_out_goal__TypeCtorInfo_153_153 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 577 "hlds_out_goal.m"
        {
#line 577 "hlds_out_goal.m"
          mercury__map__to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_152_152, hlds__hlds_out__hlds_out_goal__TypeCtorInfo_153_153, hlds__hlds_out__hlds_out_goal__StoreMap_25, &hlds__hlds_out__hlds_out_goal__StoreMapList_26);
        }
#line 578 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__StoreMapList_26)) == (MR_mktag((MR_Integer) 1)));
#line 578 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 578 "hlds_out_goal.m"
          {
#line 578 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__StoreMapList_26, (MR_Integer) 0)));
#line 578 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__StoreMapList_26, (MR_Integer) 1)));
#line 578 "hlds_out_goal.m"
          }
#line 575 "hlds_out_goal.m"
      }
#line 584 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 580 "hlds_out_goal.m"
      {
#line 580 "hlds_out_goal.m"
        {
#line 580 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 581 "hlds_out_goal.m"
        {
#line 581 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% store map:\n");
        }
#line 582 "hlds_out_goal.m"
        {
#line 582 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(hlds__hlds_out__hlds_out_goal__StoreMapList_26, hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 580 "hlds_out_goal.m"
      }
#line 584 "hlds_out_goal.m"
    else
#line 584 "hlds_out_goal.m"
      {
#line 584 "hlds_out_goal.m"
      }
#line 588 "hlds_out_goal.m"
    {
#line 588 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 115);
    }
#line 588 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 588 "hlds_out_goal.m"
      {
#line 589 "hlds_out_goal.m"
        {
#line 589 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__MaybeNeedAcrossCall_29);
        }
#line 590 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeNeedAcrossCall_29)) == (MR_mktag((MR_Integer) 1)));
#line 590 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 590 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeNeedAcrossCall_29, (MR_Integer) 0)));
#line 588 "hlds_out_goal.m"
      }
#line 629 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 593 "hlds_out_goal.m"
      {
#line 593 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 593 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallForwardSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30, (MR_Integer) 0)));
#line 593 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallResumeSet_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30, (MR_Integer) 1)));
#line 593 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallNondetSet_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30, (MR_Integer) 2)));
#line 593 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallForwardList_34;
#line 593 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallResumeList_35;
#line 593 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallNondetList_36;

#line 594 "hlds_out_goal.m"
        {
#line 594 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__CallForwardList_34 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_154_154, hlds__hlds_out__hlds_out_goal__CallForwardSet_31);
        }
#line 595 "hlds_out_goal.m"
        {
#line 595 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__CallResumeList_35 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_154_154, hlds__hlds_out__hlds_out_goal__CallResumeSet_32);
        }
#line 596 "hlds_out_goal.m"
        {
#line 596 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__CallNondetList_36 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_154_154, hlds__hlds_out__hlds_out_goal__CallNondetSet_33);
        }
#line 597 "hlds_out_goal.m"
        {
#line 597 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 598 "hlds_out_goal.m"
        {
#line 598 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need across call forward vars: ");
        }
#line 602 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__CallForwardList_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "hlds_out_goal.m"
          {
#line 601 "hlds_out_goal.m"
            {
#line 601 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
#line 600 "hlds_out_goal.m"
          }
#line 602 "hlds_out_goal.m"
        else
#line 603 "hlds_out_goal.m"
          {
#line 604 "hlds_out_goal.m"
            {
#line 604 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__CallForwardList_34);
            }
#line 605 "hlds_out_goal.m"
            {
#line 605 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 603 "hlds_out_goal.m"
          }
#line 608 "hlds_out_goal.m"
        {
#line 608 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 609 "hlds_out_goal.m"
        {
#line 609 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need across call resume vars: ");
        }
#line 613 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__CallResumeList_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 611 "hlds_out_goal.m"
          {
#line 612 "hlds_out_goal.m"
            {
#line 612 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
#line 611 "hlds_out_goal.m"
          }
#line 613 "hlds_out_goal.m"
        else
#line 614 "hlds_out_goal.m"
          {
#line 615 "hlds_out_goal.m"
            {
#line 615 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__CallResumeList_35);
            }
#line 616 "hlds_out_goal.m"
            {
#line 616 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 614 "hlds_out_goal.m"
          }
#line 619 "hlds_out_goal.m"
        {
#line 619 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 620 "hlds_out_goal.m"
        {
#line 620 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need across call nondet vars: ");
        }
#line 624 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__CallNondetList_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 622 "hlds_out_goal.m"
          {
#line 623 "hlds_out_goal.m"
            {
#line 623 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
#line 622 "hlds_out_goal.m"
          }
#line 624 "hlds_out_goal.m"
        else
#line 625 "hlds_out_goal.m"
          {
#line 626 "hlds_out_goal.m"
            {
#line 626 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__CallNondetList_36);
            }
#line 627 "hlds_out_goal.m"
            {
#line 627 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 625 "hlds_out_goal.m"
          }
#line 593 "hlds_out_goal.m"
      }
#line 629 "hlds_out_goal.m"
    else
#line 629 "hlds_out_goal.m"
      {
#line 629 "hlds_out_goal.m"
      }
#line 633 "hlds_out_goal.m"
    {
#line 633 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 115);
    }
#line 633 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 633 "hlds_out_goal.m"
      {
#line 634 "hlds_out_goal.m"
        {
#line 634 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__MaybeNeedInResume_43);
        }
#line 635 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeNeedInResume_43)) == (MR_mktag((MR_Integer) 1)));
#line 635 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 635 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__NeedInResume_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeNeedInResume_43, (MR_Integer) 0)));
#line 633 "hlds_out_goal.m"
      }
#line 671 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 638 "hlds_out_goal.m"
      {
#line 638 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_155_155 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 638 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeOnStack_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedInResume_44, (MR_Integer) 0)));
#line 638 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeResumeSet_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedInResume_44, (MR_Integer) 1)));
#line 638 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeNondetSet_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedInResume_44, (MR_Integer) 2)));
#line 638 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeResumeList_48;
#line 638 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeNondetList_49;

#line 639 "hlds_out_goal.m"
        {
#line 639 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ResumeResumeList_48 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_155_155, hlds__hlds_out__hlds_out_goal__ResumeResumeSet_46);
        }
#line 640 "hlds_out_goal.m"
        {
#line 640 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ResumeNondetList_49 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_155_155, hlds__hlds_out__hlds_out_goal__ResumeNondetSet_47);
        }
#line 642 "hlds_out_goal.m"
        {
#line 642 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 646 "hlds_out_goal.m"
#line 646 "hlds_out_goal.m"
        switch (hlds__hlds_out__hlds_out_goal__ResumeOnStack_45) {
#line 646 "hlds_out_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 646 "hlds_out_goal.m"
          case (MR_Integer) 0:
#line 647 "hlds_out_goal.m"
            {
#line 648 "hlds_out_goal.m"
              {
#line 648 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% resume point has no stack label\n");
              }
#line 647 "hlds_out_goal.m"
            }
#line 646 "hlds_out_goal.m"
            break;
#line 646 "hlds_out_goal.m"
          case (MR_Integer) 1:
#line 644 "hlds_out_goal.m"
            {
#line 645 "hlds_out_goal.m"
              {
#line 645 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% resume point has stack label\n");
              }
#line 644 "hlds_out_goal.m"
            }
#line 646 "hlds_out_goal.m"
            break;
#line 646 "hlds_out_goal.m"
        }
#line 650 "hlds_out_goal.m"
        {
#line 650 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 651 "hlds_out_goal.m"
        {
#line 651 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need in resume resume vars: ");
        }
#line 655 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__ResumeResumeList_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 653 "hlds_out_goal.m"
          {
#line 654 "hlds_out_goal.m"
            {
#line 654 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
#line 653 "hlds_out_goal.m"
          }
#line 655 "hlds_out_goal.m"
        else
#line 656 "hlds_out_goal.m"
          {
#line 657 "hlds_out_goal.m"
            {
#line 657 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__ResumeResumeList_48);
            }
#line 658 "hlds_out_goal.m"
            {
#line 658 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 656 "hlds_out_goal.m"
          }
#line 661 "hlds_out_goal.m"
        {
#line 661 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 662 "hlds_out_goal.m"
        {
#line 662 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need in resume nondet vars: ");
        }
#line 666 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__ResumeNondetList_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "hlds_out_goal.m"
          {
#line 665 "hlds_out_goal.m"
            {
#line 665 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
#line 664 "hlds_out_goal.m"
          }
#line 666 "hlds_out_goal.m"
        else
#line 667 "hlds_out_goal.m"
          {
#line 668 "hlds_out_goal.m"
            {
#line 668 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__ResumeNondetList_49);
            }
#line 669 "hlds_out_goal.m"
            {
#line 669 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 667 "hlds_out_goal.m"
          }
#line 638 "hlds_out_goal.m"
      }
#line 671 "hlds_out_goal.m"
    else
#line 671 "hlds_out_goal.m"
      {
#line 671 "hlds_out_goal.m"
      }
#line 675 "hlds_out_goal.m"
    {
#line 675 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 115);
    }
#line 675 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 675 "hlds_out_goal.m"
      {
#line 676 "hlds_out_goal.m"
        {
#line 676 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__MaybeNeedInParConj_54);
        }
#line 677 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeNeedInParConj_54)) == (MR_mktag((MR_Integer) 1)));
#line 677 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 677 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__NeedInParConj_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeNeedInParConj_54, (MR_Integer) 0)));
#line 675 "hlds_out_goal.m"
      }
#line 685 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 679 "hlds_out_goal.m"
      {
#line 679 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ParConjSet_56 = (MR_Word) hlds__hlds_out__hlds_out_goal__NeedInParConj_55;
#line 679 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ParConjList_57;

#line 680 "hlds_out_goal.m"
        {
#line 680 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ParConjList_57 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ParConjSet_56);
        }
#line 681 "hlds_out_goal.m"
        {
#line 681 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 682 "hlds_out_goal.m"
        {
#line 682 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need in par_conj vars: ");
        }
#line 683 "hlds_out_goal.m"
        {
#line 683 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__AppendVarNums_11, hlds__hlds_out__hlds_out_goal__ParConjList_57);
        }
#line 684 "hlds_out_goal.m"
        {
#line 684 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 684 "hlds_out_goal.m"
          return;
        }
#line 679 "hlds_out_goal.m"
      }
#line 685 "hlds_out_goal.m"
    else
#line 685 "hlds_out_goal.m"
      {
#line 685 "hlds_out_goal.m"
      }
#line 525 "hlds_out_goal.m"
  }
#line 522 "hlds_out_goal.m"
}

#line 117 "hlds_out_goal.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(
#line 117 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__VarName_5,
#line 117 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__MainConsName_6,
#line 117 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__OtherConsNames_7)
#line 117 "hlds_out_goal.m"
{
#line 1779 "hlds_out_goal.m"
  {
#line 1779 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1779 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__Comment_8;

#line 1779 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__OtherConsNames_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1779 "hlds_out_goal.m"
      {
#line 1779 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__V_16_16;

#line 1780 "hlds_out_goal.m"
        {
#line 1780 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) " has the functor ", hlds__hlds_out__hlds_out_goal__MainConsName_6);
        }
#line 1780 "hlds_out_goal.m"
        {
#line 1780 "hlds_out_goal.m"
          return hlds__hlds_out__hlds_out_goal__Comment_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__VarName_5, hlds__hlds_out__hlds_out_goal__V_16_16);
        }
#line 1779 "hlds_out_goal.m"
      }
#line 1779 "hlds_out_goal.m"
    else
#line 1782 "hlds_out_goal.m"
      {
#line 1782 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__V_11_11;
#line 1782 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__V_13_13;
#line 1782 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_15_15;

#line 1784 "hlds_out_goal.m"
        {
#line 1784 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1784 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_15_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__MainConsName_6));
#line 1784 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_15_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__OtherConsNames_7));
#line 1784 "hlds_out_goal.m"
        }
#line 1784 "hlds_out_goal.m"
        {
#line 1784 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_13_13 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_goal__V_15_15);
        }
#line 1783 "hlds_out_goal.m"
        {
#line 1783 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) " has one of the functors ", hlds__hlds_out__hlds_out_goal__V_13_13);
        }
#line 1783 "hlds_out_goal.m"
        {
#line 1783 "hlds_out_goal.m"
          return hlds__hlds_out__hlds_out_goal__Comment_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__VarName_5, hlds__hlds_out__hlds_out_goal__V_11_11);
        }
#line 1782 "hlds_out_goal.m"
      }
#line 1779 "hlds_out_goal.m"
    return hlds__hlds_out__hlds_out_goal__Comment_8;
#line 1779 "hlds_out_goal.m"
  }
#line 117 "hlds_out_goal.m"
}

#line 109 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(
#line 109 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TaggedConsId_4,
#line 109 "hlds_out_goal.m"
  MR_String * hlds__hlds_out__hlds_out_goal__ConsName_5,
#line 109 "hlds_out_goal.m"
  MR_Word * hlds__hlds_out__hlds_out_goal__ConsTag_6)
#line 109 "hlds_out_goal.m"
{
#line 1773 "hlds_out_goal.m"
  {
#line 1773 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1773 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__TaggedConsId_4, (MR_Integer) 0)));

#line 1774 "hlds_out_goal.m"
    *hlds__hlds_out__hlds_out_goal__ConsTag_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__TaggedConsId_4, (MR_Integer) 1)));
#line 1775 "hlds_out_goal.m"
    {
#line 1775 "hlds_out_goal.m"
      *hlds__hlds_out__hlds_out_goal__ConsName_5 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__ConsId_7);
    }
#line 1773 "hlds_out_goal.m"
  }
#line 109 "hlds_out_goal.m"
}

#line 102 "hlds_out_goal.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(
#line 102 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_6,
#line 102 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_7,
#line 102 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_8,
#line 102 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_9)
#line 102 "hlds_out_goal.m"
{
#line 1033 "hlds_out_goal.m"
  {
#line 1033 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1033 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__Str_10;

#line 1033 "hlds_out_goal.m"
#line 1033 "hlds_out_goal.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__RHS_6)) {
#line 1033 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1033 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 1033 "hlds_out_goal.m"
        {
#line 1033 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RHS_6, (MR_Integer) 0)));

#line 1034 "hlds_out_goal.m"
          {
#line 1034 "hlds_out_goal.m"
            return hlds__hlds_out__hlds_out_goal__Str_10 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_8, hlds__hlds_out__hlds_out_goal__AppendVarNums_9, hlds__hlds_out__hlds_out_goal__Var_11);
          }
#line 1033 "hlds_out_goal.m"
        }
#line 1033 "hlds_out_goal.m"
        break;
#line 1033 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 1036 "hlds_out_goal.m"
        {
#line 1036 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_6, (MR_Integer) 0)));
#line 1036 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__IsExistConstruct_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_6, (MR_Integer) 1)));
#line 1036 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_6, (MR_Integer) 2)));
#line 1036 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId_19;
#line 1043 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__SymName0_15;
#line 1043 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__Arity_16;
#line 1043 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtor_17;

#line 1038 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__IsExistConstruct_13 == (MR_Integer) 1);
#line 1038 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1038 "hlds_out_goal.m"
            {
#line 1039 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ConsId0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1039 "hlds_out_goal.m"
              if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1039 "hlds_out_goal.m"
                {
#line 1039 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__SymName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_12, (MR_Integer) 1)));
#line 1039 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_12, (MR_Integer) 2)));
#line 1039 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__TypeCtor_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_12, (MR_Integer) 3)));
#line 1039 "hlds_out_goal.m"
                }
#line 1038 "hlds_out_goal.m"
            }
#line 1043 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1041 "hlds_out_goal.m"
            {
#line 1041 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__SymName_18;

#line 1041 "hlds_out_goal.m"
              {
#line 1041 "hlds_out_goal.m"
                parse_tree__prog_type__add_new_prefix_2_p_0(hlds__hlds_out__hlds_out_goal__SymName0_15, &hlds__hlds_out__hlds_out_goal__SymName_18);
              }
#line 1042 "hlds_out_goal.m"
              {
#line 1042 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__ConsId_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1042 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__SymName_18));
#line 1042 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_19, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Arity_16));
#line 1042 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_19, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__TypeCtor_17));
#line 1042 "hlds_out_goal.m"
              }
#line 1041 "hlds_out_goal.m"
            }
#line 1043 "hlds_out_goal.m"
          else
#line 1044 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__ConsId_19 = hlds__hlds_out__hlds_out_goal__ConsId0_12;
#line 1046 "hlds_out_goal.m"
          {
#line 1046 "hlds_out_goal.m"
            return hlds__hlds_out__hlds_out_goal__Str_10 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_goal__ConsId_19, hlds__hlds_out__hlds_out_goal__ArgVars_14, hlds__hlds_out__hlds_out_goal__VarSet_8, hlds__hlds_out__hlds_out_goal__ModuleInfo_7, hlds__hlds_out__hlds_out_goal__AppendVarNums_9);
          }
#line 1036 "hlds_out_goal.m"
        }
#line 1033 "hlds_out_goal.m"
        break;
#line 1033 "hlds_out_goal.m"
      case (MR_Integer) 2:
#line 1050 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__Str_10 = (MR_String) "lambda goal";
#line 1033 "hlds_out_goal.m"
        break;
#line 1033 "hlds_out_goal.m"
    }
#line 1033 "hlds_out_goal.m"
    return hlds__hlds_out__hlds_out_goal__Str_10;
#line 1033 "hlds_out_goal.m"
  }
#line 102 "hlds_out_goal.m"
}

#line 93 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_9_p_0(
#line 93 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_10,
#line 93 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_11,
#line 93 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 93 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 93 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_14,
#line 93 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 93 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16)
#line 93 "hlds_out_goal.m"
{
#line 897 "hlds_out_goal.m"
  {
#line 897 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 898 "hlds_out_goal.m"
    {
#line 898 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_p_0(hlds__hlds_out__hlds_out_goal__Info_10, hlds__hlds_out__hlds_out_goal__RHS_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__InstVarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 898 "hlds_out_goal.m"
      return;
    }
#line 897 "hlds_out_goal.m"
  }
#line 93 "hlds_out_goal.m"
}

#line 83 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(
#line 83 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_1,
#line 83 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_2,
#line 83 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_3,
#line 83 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_4)
#line 83 "hlds_out_goal.m"
{
#line 689 "hlds_out_goal.m"
  while (MR_TRUE)
#line 689 "hlds_out_goal.m"
    {
#line 689 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 689 "hlds_out_goal.m"
      {
#line 689 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 689 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 689 "hlds_out_goal.m"
          {
#line 689 "hlds_out_goal.m"
          }
#line 689 "hlds_out_goal.m"
        else
#line 691 "hlds_out_goal.m"
          {
#line 691 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Var_13;
#line 691 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Loc_14;
#line 691 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__VarLocs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__1_1, (MR_Integer) 1)));
#line 691 "hlds_out_goal.m"
            MR_String hlds__hlds_out__hlds_out_goal__LocnStr_20;
#line 691 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__MaybeWidth_21;
#line 691 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__1_1, (MR_Integer) 0)));

#line 690 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_25_25, (MR_Integer) 0)));
#line 690 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Loc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_25_25, (MR_Integer) 1)));
#line 692 "hlds_out_goal.m"
            {
#line 692 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_4);
            }
#line 693 "hlds_out_goal.m"
            {
#line 693 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "%\t");
            }
#line 694 "hlds_out_goal.m"
            {
#line 694 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_2, hlds__hlds_out__hlds_out_goal__AppendVarNums_3, hlds__hlds_out__hlds_out_goal__Var_13);
            }
#line 695 "hlds_out_goal.m"
            {
#line 695 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\t-> ");
            }
#line 696 "hlds_out_goal.m"
            {
#line 696 "hlds_out_goal.m"
              hlds__hlds_llds__abs_locn_to_string_3_p_0(hlds__hlds_out__hlds_out_goal__Loc_14, &hlds__hlds_out__hlds_out_goal__LocnStr_20, &hlds__hlds_out__hlds_out_goal__MaybeWidth_21);
            }
#line 697 "hlds_out_goal.m"
            {
#line 697 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__LocnStr_20);
            }
#line 702 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__MaybeWidth_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 703 "hlds_out_goal.m"
              {
#line 703 "hlds_out_goal.m"
              }
#line 702 "hlds_out_goal.m"
            else
#line 699 "hlds_out_goal.m"
              {
#line 699 "hlds_out_goal.m"
                MR_String hlds__hlds_out__hlds_out_goal__Width_22 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeWidth_21, (MR_Integer) 0)));

#line 700 "hlds_out_goal.m"
                {
#line 700 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " ");
                }
#line 701 "hlds_out_goal.m"
                {
#line 701 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Width_22);
                }
#line 699 "hlds_out_goal.m"
              }
#line 705 "hlds_out_goal.m"
            {
#line 705 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 706 "hlds_out_goal.m"
            /* direct tailcall eliminated */
#line 706 "hlds_out_goal.m"
            {
#line 706 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_goal__VarLocs_15;

#line 706 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__HeadVar__1_1 = hlds__hlds_out__hlds_out_goal__HeadVar__1__tmp_copy_1;
#line 706 "hlds_out_goal.m"
            }
#line 706 "hlds_out_goal.m"
            continue;
#line 691 "hlds_out_goal.m"
          }
#line 689 "hlds_out_goal.m"
      }
#line 689 "hlds_out_goal.m"
      break;
#line 689 "hlds_out_goal.m"
    }
#line 83 "hlds_out_goal.m"
}

#line 74 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(
#line 74 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 74 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goals_12,
#line 74 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 74 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 74 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 74 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 74 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Separator_17,
#line 74 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 74 "hlds_out_goal.m"
{
#line 782 "hlds_out_goal.m"
  while (MR_TRUE)
#line 782 "hlds_out_goal.m"
    {
#line 782 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 782 "hlds_out_goal.m"
      {
#line 782 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 782 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__Goals_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 790 "hlds_out_goal.m"
          {
#line 790 "hlds_out_goal.m"
          }
#line 782 "hlds_out_goal.m"
        else
#line 782 "hlds_out_goal.m"
          {
#line 782 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__HeadGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Goals_12, (MR_Integer) 0)));
#line 782 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TailGoals_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Goals_12, (MR_Integer) 1)));
#line 782 "hlds_out_goal.m"
            MR_Integer hlds__hlds_out__hlds_out_goal__V_26_26;

#line 783 "hlds_out_goal.m"
            {
#line 783 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 784 "hlds_out_goal.m"
            {
#line 784 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Separator_17);
            }
#line 786 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_26_26 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 785 "hlds_out_goal.m"
            {
#line 785 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__HeadGoal_20, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__V_26_26, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__TypeQual_18);
            }
#line 787 "hlds_out_goal.m"
            /* direct tailcall eliminated */
#line 787 "hlds_out_goal.m"
            {
#line 787 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Goals__tmp_copy_12 = hlds__hlds_out__hlds_out_goal__TailGoals_21;

#line 787 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__Goals_12 = hlds__hlds_out__hlds_out_goal__Goals__tmp_copy_12;
#line 787 "hlds_out_goal.m"
            }
#line 787 "hlds_out_goal.m"
            continue;
#line 782 "hlds_out_goal.m"
          }
#line 782 "hlds_out_goal.m"
      }
#line 782 "hlds_out_goal.m"
      break;
#line 782 "hlds_out_goal.m"
    }
#line 74 "hlds_out_goal.m"
}

#line 476 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_6(
#line 476 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 476 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 476 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 476 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 476 "hlds_out_goal.m"
{
#line 476 "hlds_out_goal.m"
  {
#line 476 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 476 "hlds_out_goal.m"
    {
#line 476 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(((MR_String) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 476 "hlds_out_goal.m"
      return;
    }
#line 476 "hlds_out_goal.m"
  }
#line 476 "hlds_out_goal.m"
}

#line 326 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_5(
#line 326 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 326 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 326 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 326 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 326 "hlds_out_goal.m"
{
#line 326 "hlds_out_goal.m"
  {
#line 326 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 326 "hlds_out_goal.m"
    {
#line 326 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__326__1_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 326 "hlds_out_goal.m"
      return;
    }
#line 326 "hlds_out_goal.m"
  }
#line 326 "hlds_out_goal.m"
}

#line 322 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_4(
#line 322 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 322 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 322 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 322 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 322 "hlds_out_goal.m"
{
#line 322 "hlds_out_goal.m"
  {
#line 322 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 322 "hlds_out_goal.m"
    {
#line 322 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__322__1_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 322 "hlds_out_goal.m"
      return;
    }
#line 322 "hlds_out_goal.m"
  }
#line 322 "hlds_out_goal.m"
}

#line 318 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_3(
#line 318 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 318 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 318 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 318 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 318 "hlds_out_goal.m"
{
#line 318 "hlds_out_goal.m"
  {
#line 318 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 318 "hlds_out_goal.m"
    {
#line 318 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__318__1_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 318 "hlds_out_goal.m"
      return;
    }
#line 318 "hlds_out_goal.m"
  }
#line 318 "hlds_out_goal.m"
}

#line 314 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_2(
#line 314 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 314 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 314 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 314 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 314 "hlds_out_goal.m"
{
#line 314 "hlds_out_goal.m"
  {
#line 314 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 314 "hlds_out_goal.m"
    {
#line 314 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__314__1_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 314 "hlds_out_goal.m"
      return;
    }
#line 314 "hlds_out_goal.m"
  }
#line 314 "hlds_out_goal.m"
}

#line 310 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_1(
#line 310 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 310 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 310 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 310 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 310 "hlds_out_goal.m"
{
#line 310 "hlds_out_goal.m"
  {
#line 310 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 310 "hlds_out_goal.m"
    {
#line 310 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__310__1_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 310 "hlds_out_goal.m"
      return;
    }
#line 310 "hlds_out_goal.m"
  }
#line 310 "hlds_out_goal.m"
}

#line 61 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(
#line 61 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 61 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goal_12,
#line 61 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 61 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 61 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_15,
#line 61 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 61 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 61 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_18)
#line 61 "hlds_out_goal.m"
{
#line 166 "hlds_out_goal.m"
  {
#line 166 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 166 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Goal_12, (MR_Integer) 0)));
#line 166 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Goal_12, (MR_Integer) 1)));
#line 166 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 166 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__CodeGenInfo_80;
#line 170 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_300_300 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 170 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 170 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 170 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));

#line 171 "hlds_out_goal.m"
    {
#line 171 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 99);
    }
#line 185 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 172 "hlds_out_goal.m"
      {
#line 172 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Context_23;
#line 172 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__FileName_24;
#line 172 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__LineNumber_25;

#line 172 "hlds_out_goal.m"
        {
#line 172 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 173 "hlds_out_goal.m"
        {
#line 173 "hlds_out_goal.m"
          mercury__term__context_file_2_p_0(hlds__hlds_out__hlds_out_goal__Context_23, &hlds__hlds_out__hlds_out_goal__FileName_24);
        }
#line 174 "hlds_out_goal.m"
        {
#line 174 "hlds_out_goal.m"
          mercury__term__context_line_2_p_0(hlds__hlds_out__hlds_out_goal__Context_23, &hlds__hlds_out__hlds_out_goal__LineNumber_25);
        }
#line 175 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = (strcmp(hlds__hlds_out__hlds_out_goal__FileName_24, (MR_String) "") == 0);
#line 175 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = !(hlds__hlds_out__hlds_out_goal__succeeded);
#line 182 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 176 "hlds_out_goal.m"
          {
#line 176 "hlds_out_goal.m"
            {
#line 176 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 177 "hlds_out_goal.m"
            {
#line 177 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
            }
#line 178 "hlds_out_goal.m"
            {
#line 178 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__FileName_24);
            }
#line 179 "hlds_out_goal.m"
            {
#line 179 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\', line ");
            }
#line 180 "hlds_out_goal.m"
            {
#line 180 "hlds_out_goal.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__LineNumber_25);
            }
#line 181 "hlds_out_goal.m"
            {
#line 181 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 176 "hlds_out_goal.m"
          }
#line 182 "hlds_out_goal.m"
        else
#line 182 "hlds_out_goal.m"
          {
#line 182 "hlds_out_goal.m"
          }
#line 172 "hlds_out_goal.m"
      }
#line 185 "hlds_out_goal.m"
    else
#line 185 "hlds_out_goal.m"
      {
#line 185 "hlds_out_goal.m"
      }
#line 188 "hlds_out_goal.m"
    {
#line 188 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 80);
    }
#line 199 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 189 "hlds_out_goal.m"
      {
#line 189 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__GoalId_26;
#line 189 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__GoalIdNum_27;

#line 189 "hlds_out_goal.m"
        {
#line 189 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__GoalId_26 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 190 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__GoalIdNum_27 = (MR_Integer) hlds__hlds_out__hlds_out_goal__GoalId_26;
#line 191 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__GoalIdNum_27 < (MR_Integer) 0);
#line 193 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 193 "hlds_out_goal.m"
          {
#line 193 "hlds_out_goal.m"
          }
#line 193 "hlds_out_goal.m"
        else
#line 194 "hlds_out_goal.m"
          {
#line 194 "hlds_out_goal.m"
            {
#line 194 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 195 "hlds_out_goal.m"
            {
#line 195 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% goal id: ");
            }
#line 196 "hlds_out_goal.m"
            {
#line 196 "hlds_out_goal.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__GoalIdNum_27);
            }
#line 197 "hlds_out_goal.m"
            {
#line 197 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 194 "hlds_out_goal.m"
          }
#line 189 "hlds_out_goal.m"
      }
#line 199 "hlds_out_goal.m"
    else
#line 199 "hlds_out_goal.m"
      {
#line 199 "hlds_out_goal.m"
      }
#line 202 "hlds_out_goal.m"
    {
#line 202 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 110);
    }
#line 214 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 203 "hlds_out_goal.m"
      {
#line 203 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_304_304;
#line 203 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__NonLocalsSet_28;
#line 203 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__NonLocalsList_29;

#line 203 "hlds_out_goal.m"
        {
#line 203 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__NonLocalsSet_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 10095 "hlds.hlds_out.hlds_out_goal.c"
        hlds__hlds_out__hlds_out_goal__TypeCtorInfo_304_304 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 204 "hlds_out_goal.m"
        {
#line 204 "hlds_out_goal.m"
          parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_304_304, hlds__hlds_out__hlds_out_goal__NonLocalsSet_28, &hlds__hlds_out__hlds_out_goal__NonLocalsList_29);
        }
#line 211 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__NonLocalsList_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 212 "hlds_out_goal.m"
          {
#line 212 "hlds_out_goal.m"
          }
#line 211 "hlds_out_goal.m"
        else
#line 206 "hlds_out_goal.m"
          {
#line 207 "hlds_out_goal.m"
            {
#line 207 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 208 "hlds_out_goal.m"
            {
#line 208 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% nonlocals: ");
            }
#line 209 "hlds_out_goal.m"
            {
#line 209 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_304_304, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__NonLocalsList_29);
            }
#line 210 "hlds_out_goal.m"
            {
#line 210 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 206 "hlds_out_goal.m"
          }
#line 203 "hlds_out_goal.m"
      }
#line 214 "hlds_out_goal.m"
    else
#line 214 "hlds_out_goal.m"
      {
#line 214 "hlds_out_goal.m"
      }
#line 217 "hlds_out_goal.m"
    {
#line 217 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 112);
    }
#line 242 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 229 "hlds_out_goal.m"
      {
#line 227 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PreDeathList_33;
#line 219 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_305_305;
#line 219 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PreDeaths_32;
#line 221 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_34_34;
#line 221 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_35_35;
#line 239 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PreBirthList_37;
#line 231 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_307_307;
#line 231 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PreBirths_36;
#line 233 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_38_38;
#line 233 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_39_39;

#line 219 "hlds_out_goal.m"
        {
#line 219 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21, &hlds__hlds_out__hlds_out_goal__PreDeaths_32);
        }
#line 219 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 219 "hlds_out_goal.m"
          {
#line 10181 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_305_305 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 220 "hlds_out_goal.m"
            {
#line 220 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__PreDeathList_33 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_305_305, hlds__hlds_out__hlds_out_goal__PreDeaths_32);
            }
#line 221 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PreDeathList_33)) == (MR_mktag((MR_Integer) 1)));
#line 221 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 221 "hlds_out_goal.m"
              {
#line 221 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PreDeathList_33, (MR_Integer) 0)));
#line 221 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PreDeathList_33, (MR_Integer) 1)));
#line 221 "hlds_out_goal.m"
              }
#line 219 "hlds_out_goal.m"
          }
#line 227 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 223 "hlds_out_goal.m"
          {
#line 223 "hlds_out_goal.m"
            {
#line 223 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 224 "hlds_out_goal.m"
            {
#line 224 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% pre-deaths: ");
            }
#line 225 "hlds_out_goal.m"
            {
#line 225 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__PreDeathList_33);
            }
#line 226 "hlds_out_goal.m"
            {
#line 226 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 223 "hlds_out_goal.m"
          }
#line 227 "hlds_out_goal.m"
        else
#line 227 "hlds_out_goal.m"
          {
#line 227 "hlds_out_goal.m"
          }
#line 231 "hlds_out_goal.m"
        {
#line 231 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_births_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21, &hlds__hlds_out__hlds_out_goal__PreBirths_36);
        }
#line 231 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 231 "hlds_out_goal.m"
          {
#line 10243 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_307_307 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 232 "hlds_out_goal.m"
            {
#line 232 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__PreBirthList_37 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_307_307, hlds__hlds_out__hlds_out_goal__PreBirths_36);
            }
#line 233 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PreBirthList_37)) == (MR_mktag((MR_Integer) 1)));
#line 233 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 233 "hlds_out_goal.m"
              {
#line 233 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PreBirthList_37, (MR_Integer) 0)));
#line 233 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PreBirthList_37, (MR_Integer) 1)));
#line 233 "hlds_out_goal.m"
              }
#line 231 "hlds_out_goal.m"
          }
#line 239 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 235 "hlds_out_goal.m"
          {
#line 235 "hlds_out_goal.m"
            {
#line 235 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 236 "hlds_out_goal.m"
            {
#line 236 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% pre-births: ");
            }
#line 237 "hlds_out_goal.m"
            {
#line 237 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__PreBirthList_37);
            }
#line 238 "hlds_out_goal.m"
            {
#line 238 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 235 "hlds_out_goal.m"
          }
#line 239 "hlds_out_goal.m"
        else
#line 239 "hlds_out_goal.m"
          {
#line 239 "hlds_out_goal.m"
          }
#line 229 "hlds_out_goal.m"
      }
#line 242 "hlds_out_goal.m"
    else
#line 242 "hlds_out_goal.m"
      {
#line 242 "hlds_out_goal.m"
      }
#line 245 "hlds_out_goal.m"
    {
#line 245 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 66);
    }
#line 291 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 246 "hlds_out_goal.m"
      {
#line 246 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ProducingVars_40;
#line 246 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ConsumingVars_42;
#line 246 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__MakeVisibleVars_44;
#line 246 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__NeedVisibleVars_46;

#line 246 "hlds_out_goal.m"
        {
#line 246 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ProducingVars_40 = hlds__hlds_goal__producing_vars_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 247 "hlds_out_goal.m"
        {
#line 247 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ProducingVars_40);
        }
#line 253 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 248 "hlds_out_goal.m"
          {
#line 248 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_310_310 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 248 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__ProducingVarsList_41;

#line 248 "hlds_out_goal.m"
            {
#line 248 "hlds_out_goal.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_310_310, hlds__hlds_out__hlds_out_goal__ProducingVars_40, &hlds__hlds_out__hlds_out_goal__ProducingVarsList_41);
            }
#line 249 "hlds_out_goal.m"
            {
#line 249 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 250 "hlds_out_goal.m"
            {
#line 250 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% producing vars: ");
            }
#line 251 "hlds_out_goal.m"
            {
#line 251 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_310_310, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__ProducingVarsList_41);
            }
#line 252 "hlds_out_goal.m"
            {
#line 252 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 248 "hlds_out_goal.m"
          }
#line 253 "hlds_out_goal.m"
        else
#line 253 "hlds_out_goal.m"
          {
#line 253 "hlds_out_goal.m"
          }
#line 257 "hlds_out_goal.m"
        {
#line 257 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ConsumingVars_42 = hlds__hlds_goal__consuming_vars_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 258 "hlds_out_goal.m"
        {
#line 258 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ConsumingVars_42);
        }
#line 264 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 259 "hlds_out_goal.m"
          {
#line 259 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_312_312 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 259 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__ConsumingVarsList_43;

#line 259 "hlds_out_goal.m"
            {
#line 259 "hlds_out_goal.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_312_312, hlds__hlds_out__hlds_out_goal__ConsumingVars_42, &hlds__hlds_out__hlds_out_goal__ConsumingVarsList_43);
            }
#line 260 "hlds_out_goal.m"
            {
#line 260 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 261 "hlds_out_goal.m"
            {
#line 261 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% consuming vars: ");
            }
#line 262 "hlds_out_goal.m"
            {
#line 262 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_312_312, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__ConsumingVarsList_43);
            }
#line 263 "hlds_out_goal.m"
            {
#line 263 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 259 "hlds_out_goal.m"
          }
#line 264 "hlds_out_goal.m"
        else
#line 264 "hlds_out_goal.m"
          {
#line 264 "hlds_out_goal.m"
          }
#line 268 "hlds_out_goal.m"
        {
#line 268 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__MakeVisibleVars_44 = hlds__hlds_goal__make_visible_vars_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 269 "hlds_out_goal.m"
        {
#line 269 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__MakeVisibleVars_44);
        }
#line 276 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 270 "hlds_out_goal.m"
          {
#line 270 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_314_314 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 270 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__MakeVisibleVarsList_45;

#line 270 "hlds_out_goal.m"
            {
#line 270 "hlds_out_goal.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_314_314, hlds__hlds_out__hlds_out_goal__MakeVisibleVars_44, &hlds__hlds_out__hlds_out_goal__MakeVisibleVarsList_45);
            }
#line 271 "hlds_out_goal.m"
            {
#line 271 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 272 "hlds_out_goal.m"
            {
#line 272 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% make_visible vars: ");
            }
#line 273 "hlds_out_goal.m"
            {
#line 273 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_314_314, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__MakeVisibleVarsList_45);
            }
#line 275 "hlds_out_goal.m"
            {
#line 275 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 270 "hlds_out_goal.m"
          }
#line 276 "hlds_out_goal.m"
        else
#line 276 "hlds_out_goal.m"
          {
#line 276 "hlds_out_goal.m"
          }
#line 280 "hlds_out_goal.m"
        {
#line 280 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__NeedVisibleVars_46 = hlds__hlds_goal__need_visible_vars_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 281 "hlds_out_goal.m"
        {
#line 281 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__NeedVisibleVars_46);
        }
#line 288 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 282 "hlds_out_goal.m"
          {
#line 282 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_316_316 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 282 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__NeedVisibleVarsList_47;

#line 282 "hlds_out_goal.m"
            {
#line 282 "hlds_out_goal.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_316_316, hlds__hlds_out__hlds_out_goal__NeedVisibleVars_46, &hlds__hlds_out__hlds_out_goal__NeedVisibleVarsList_47);
            }
#line 283 "hlds_out_goal.m"
            {
#line 283 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 284 "hlds_out_goal.m"
            {
#line 284 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% need_visible vars: ");
            }
#line 285 "hlds_out_goal.m"
            {
#line 285 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_316_316, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__NeedVisibleVarsList_47);
            }
#line 287 "hlds_out_goal.m"
            {
#line 287 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 282 "hlds_out_goal.m"
          }
#line 288 "hlds_out_goal.m"
        else
#line 288 "hlds_out_goal.m"
          {
#line 288 "hlds_out_goal.m"
          }
#line 246 "hlds_out_goal.m"
      }
#line 291 "hlds_out_goal.m"
    else
#line 291 "hlds_out_goal.m"
      {
#line 291 "hlds_out_goal.m"
      }
#line 294 "hlds_out_goal.m"
    {
#line 294 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 100);
    }
#line 300 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 295 "hlds_out_goal.m"
      {
#line 295 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Determinism_48;
#line 295 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__V_155_155;

#line 295 "hlds_out_goal.m"
        {
#line 295 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 296 "hlds_out_goal.m"
        {
#line 296 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% determinism: ");
        }
#line 297 "hlds_out_goal.m"
        {
#line 297 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Determinism_48 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 298 "hlds_out_goal.m"
        {
#line 298 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_155_155 = parse_tree__prog_out__determinism_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__Determinism_48);
        }
#line 298 "hlds_out_goal.m"
        {
#line 298 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_155_155);
        }
#line 299 "hlds_out_goal.m"
        {
#line 299 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 295 "hlds_out_goal.m"
      }
#line 300 "hlds_out_goal.m"
    else
#line 300 "hlds_out_goal.m"
      {
#line 300 "hlds_out_goal.m"
      }
#line 303 "hlds_out_goal.m"
    {
#line 303 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 101);
    }
#line 331 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 304 "hlds_out_goal.m"
      {
#line 304 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__MaybeRbmmInfo_49;

#line 304 "hlds_out_goal.m"
        {
#line 304 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__MaybeRbmmInfo_49 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 328 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__MaybeRbmmInfo_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 329 "hlds_out_goal.m"
          {
#line 329 "hlds_out_goal.m"
          }
#line 328 "hlds_out_goal.m"
        else
#line 306 "hlds_out_goal.m"
          {
#line 306 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeInfo_317_317;
#line 306 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__RbmmInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeRbmmInfo_49, (MR_Integer) 0)));
#line 306 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Created_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 0)));
#line 306 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Removed_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 1)));
#line 306 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Carried_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 2)));
#line 306 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Alloc_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 3)));
#line 306 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Used_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 4)));
#line 306 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_163_163;
#line 306 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_171_171;
#line 306 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_179_179;
#line 306 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_187_187;
#line 306 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_195_195;

#line 308 "hlds_out_goal.m"
            {
#line 308 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 309 "hlds_out_goal.m"
            {
#line 309 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Created regions: ");
            }
#line 10652 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeInfo_317_317 = (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0];
#line 310 "hlds_out_goal.m"
            {
#line 310 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_163_163 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Created_51);
            }
#line 310 "hlds_out_goal.m"
            {
#line 310 "hlds_out_goal.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_163_163, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[0]);
            }
#line 311 "hlds_out_goal.m"
            {
#line 311 "hlds_out_goal.m"
              mercury__io__nl_2_p_0();
            }
#line 312 "hlds_out_goal.m"
            {
#line 312 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 313 "hlds_out_goal.m"
            {
#line 313 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Removed regions: ");
            }
#line 314 "hlds_out_goal.m"
            {
#line 314 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_171_171 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Removed_52);
            }
#line 314 "hlds_out_goal.m"
            {
#line 314 "hlds_out_goal.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_171_171, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[1]);
            }
#line 315 "hlds_out_goal.m"
            {
#line 315 "hlds_out_goal.m"
              mercury__io__nl_2_p_0();
            }
#line 316 "hlds_out_goal.m"
            {
#line 316 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 317 "hlds_out_goal.m"
            {
#line 317 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Carried regions: ");
            }
#line 318 "hlds_out_goal.m"
            {
#line 318 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_179_179 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Carried_53);
            }
#line 318 "hlds_out_goal.m"
            {
#line 318 "hlds_out_goal.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_179_179, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[2]);
            }
#line 319 "hlds_out_goal.m"
            {
#line 319 "hlds_out_goal.m"
              mercury__io__nl_2_p_0();
            }
#line 320 "hlds_out_goal.m"
            {
#line 320 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 321 "hlds_out_goal.m"
            {
#line 321 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Allocated into regions: ");
            }
#line 322 "hlds_out_goal.m"
            {
#line 322 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_187_187 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Alloc_54);
            }
#line 322 "hlds_out_goal.m"
            {
#line 322 "hlds_out_goal.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_187_187, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[3]);
            }
#line 323 "hlds_out_goal.m"
            {
#line 323 "hlds_out_goal.m"
              mercury__io__nl_2_p_0();
            }
#line 324 "hlds_out_goal.m"
            {
#line 324 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 325 "hlds_out_goal.m"
            {
#line 325 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Used regions: ");
            }
#line 326 "hlds_out_goal.m"
            {
#line 326 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_195_195 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Used_55);
            }
#line 326 "hlds_out_goal.m"
            {
#line 326 "hlds_out_goal.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_195_195, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[4]);
            }
#line 327 "hlds_out_goal.m"
            {
#line 327 "hlds_out_goal.m"
              mercury__io__nl_2_p_0();
            }
#line 306 "hlds_out_goal.m"
          }
#line 304 "hlds_out_goal.m"
      }
#line 331 "hlds_out_goal.m"
    else
#line 331 "hlds_out_goal.m"
      {
#line 331 "hlds_out_goal.m"
      }
#line 334 "hlds_out_goal.m"
    {
#line 334 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 122);
    }
#line 347 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 335 "hlds_out_goal.m"
      {
#line 335 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Purity_56;

#line 335 "hlds_out_goal.m"
        {
#line 335 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Purity_56 = hlds__hlds_goal__goal_info_get_purity_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 338 "hlds_out_goal.m"
#line 338 "hlds_out_goal.m"
        switch (hlds__hlds_out__hlds_out_goal__Purity_56) {
#line 338 "hlds_out_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 338 "hlds_out_goal.m"
          case (MR_Integer) 2:
#line 343 "hlds_out_goal.m"
            {
#line 344 "hlds_out_goal.m"
              {
#line 344 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 345 "hlds_out_goal.m"
              {
#line 345 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% impure\n");
              }
#line 343 "hlds_out_goal.m"
            }
#line 338 "hlds_out_goal.m"
            break;
#line 338 "hlds_out_goal.m"
          case (MR_Integer) 0:
#line 337 "hlds_out_goal.m"
            {
#line 337 "hlds_out_goal.m"
            }
#line 338 "hlds_out_goal.m"
            break;
#line 338 "hlds_out_goal.m"
          case (MR_Integer) 1:
#line 339 "hlds_out_goal.m"
            {
#line 340 "hlds_out_goal.m"
              {
#line 340 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 341 "hlds_out_goal.m"
              {
#line 341 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% semipure\n");
              }
#line 339 "hlds_out_goal.m"
            }
#line 338 "hlds_out_goal.m"
            break;
#line 338 "hlds_out_goal.m"
        }
#line 335 "hlds_out_goal.m"
      }
#line 347 "hlds_out_goal.m"
    else
#line 347 "hlds_out_goal.m"
      {
#line 347 "hlds_out_goal.m"
      }
#line 350 "hlds_out_goal.m"
    {
#line 350 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 69);
    }
#line 390 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 351 "hlds_out_goal.m"
      {
#line 351 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__MaybeDPInfo_57;

#line 351 "hlds_out_goal.m"
        {
#line 351 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__MaybeDPInfo_57 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 387 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__MaybeDPInfo_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 388 "hlds_out_goal.m"
          {
#line 388 "hlds_out_goal.m"
          }
#line 387 "hlds_out_goal.m"
        else
#line 353 "hlds_out_goal.m"
          {
#line 353 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__MdprofInst_58;
#line 353 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__MaybeDPCoverageInfo_59;
#line 353 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeDPInfo_57, (MR_Integer) 0)));

#line 353 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__MdprofInst_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_208_208, (MR_Integer) 0)));
#line 353 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__MaybeDPCoverageInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_208_208, (MR_Integer) 1)));
#line 358 "hlds_out_goal.m"
#line 358 "hlds_out_goal.m"
            switch (hlds__hlds_out__hlds_out_goal__MdprofInst_58) {
#line 358 "hlds_out_goal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 358 "hlds_out_goal.m"
              case (MR_Integer) 0:
#line 355 "hlds_out_goal.m"
                {
#line 356 "hlds_out_goal.m"
                  {
#line 356 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                  }
#line 357 "hlds_out_goal.m"
                  {
#line 357 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "% mdprof instrumentation\n");
                  }
#line 355 "hlds_out_goal.m"
                }
#line 358 "hlds_out_goal.m"
                break;
#line 358 "hlds_out_goal.m"
              case (MR_Integer) 1:
#line 359 "hlds_out_goal.m"
                {
#line 359 "hlds_out_goal.m"
                }
#line 358 "hlds_out_goal.m"
                break;
#line 358 "hlds_out_goal.m"
            }
#line 384 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__MaybeDPCoverageInfo_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "hlds_out_goal.m"
              {
#line 385 "hlds_out_goal.m"
              }
#line 384 "hlds_out_goal.m"
            else
#line 362 "hlds_out_goal.m"
              {
#line 362 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__CoverageInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeDPCoverageInfo_59, (MR_Integer) 0)));
#line 362 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__IsTrivial_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CoverageInfo_60, (MR_Integer) 0)));
#line 362 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__PortCountsGiveCoverageAfter_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CoverageInfo_60, (MR_Integer) 1)));

#line 365 "hlds_out_goal.m"
                {
#line 365 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 369 "hlds_out_goal.m"
#line 369 "hlds_out_goal.m"
                switch (hlds__hlds_out__hlds_out_goal__IsTrivial_61) {
#line 369 "hlds_out_goal.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 369 "hlds_out_goal.m"
                  case (MR_Integer) 1:
#line 370 "hlds_out_goal.m"
                    {
#line 371 "hlds_out_goal.m"
                      {
#line 371 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "% nontrivial goal\n");
                      }
#line 370 "hlds_out_goal.m"
                    }
#line 369 "hlds_out_goal.m"
                    break;
#line 369 "hlds_out_goal.m"
                  case (MR_Integer) 0:
#line 367 "hlds_out_goal.m"
                    {
#line 368 "hlds_out_goal.m"
                      {
#line 368 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "% trivial goal\n");
                      }
#line 367 "hlds_out_goal.m"
                    }
#line 369 "hlds_out_goal.m"
                    break;
#line 369 "hlds_out_goal.m"
                }
#line 373 "hlds_out_goal.m"
                {
#line 373 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 378 "hlds_out_goal.m"
#line 378 "hlds_out_goal.m"
                switch (hlds__hlds_out__hlds_out_goal__PortCountsGiveCoverageAfter_62) {
#line 378 "hlds_out_goal.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 378 "hlds_out_goal.m"
                  case (MR_Integer) 1:
#line 380 "hlds_out_goal.m"
                    {
#line 381 "hlds_out_goal.m"
                      {
#line 381 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "% no port counts give coverage after\n");
                      }
#line 380 "hlds_out_goal.m"
                    }
#line 378 "hlds_out_goal.m"
                    break;
#line 378 "hlds_out_goal.m"
                  case (MR_Integer) 0:
#line 376 "hlds_out_goal.m"
                    {
#line 377 "hlds_out_goal.m"
                      {
#line 377 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "% port counts give coverage after\n");
                      }
#line 376 "hlds_out_goal.m"
                    }
#line 378 "hlds_out_goal.m"
                    break;
#line 378 "hlds_out_goal.m"
                }
#line 362 "hlds_out_goal.m"
              }
#line 353 "hlds_out_goal.m"
          }
#line 351 "hlds_out_goal.m"
      }
#line 390 "hlds_out_goal.m"
    else
#line 390 "hlds_out_goal.m"
      {
#line 390 "hlds_out_goal.m"
      }
#line 393 "hlds_out_goal.m"
    {
#line 393 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_goal_expr_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalExpr_20, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__TypeQual_18);
    }
#line 395 "hlds_out_goal.m"
    {
#line 395 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 105);
    }
#line 417 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 396 "hlds_out_goal.m"
      {
#line 396 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_63;
#line 398 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_338_338;
#line 398 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Vars_64;

#line 396 "hlds_out_goal.m"
        {
#line 396 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__InstMapDelta_63 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 398 "hlds_out_goal.m"
        {
#line 398 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_63);
        }
#line 398 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 398 "hlds_out_goal.m"
          {
#line 399 "hlds_out_goal.m"
            {
#line 399 "hlds_out_goal.m"
              hlds__instmap__instmap_delta_changed_vars_2_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_63, &hlds__hlds_out__hlds_out_goal__Vars_64);
            }
#line 11071 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_338_338 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 400 "hlds_out_goal.m"
            {
#line 400 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_338_338, hlds__hlds_out__hlds_out_goal__Vars_64);
            }
#line 398 "hlds_out_goal.m"
          }
#line 403 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 403 "hlds_out_goal.m"
          {
#line 403 "hlds_out_goal.m"
          }
#line 403 "hlds_out_goal.m"
        else
#line 404 "hlds_out_goal.m"
          {
#line 404 "hlds_out_goal.m"
            {
#line 404 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 405 "hlds_out_goal.m"
            {
#line 405 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 68);
            }
#line 410 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 406 "hlds_out_goal.m"
              {
#line 406 "hlds_out_goal.m"
                {
#line 406 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% new insts: ");
                }
#line 407 "hlds_out_goal.m"
                {
#line 407 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_63, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 409 "hlds_out_goal.m"
                {
#line 409 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 406 "hlds_out_goal.m"
              }
#line 410 "hlds_out_goal.m"
            else
#line 411 "hlds_out_goal.m"
              {
#line 411 "hlds_out_goal.m"
                {
#line 411 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% vars with new insts: ");
                }
#line 412 "hlds_out_goal.m"
                {
#line 412 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_63, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
                }
#line 414 "hlds_out_goal.m"
                {
#line 414 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 411 "hlds_out_goal.m"
              }
#line 404 "hlds_out_goal.m"
          }
#line 396 "hlds_out_goal.m"
      }
#line 417 "hlds_out_goal.m"
    else
#line 417 "hlds_out_goal.m"
      {
#line 417 "hlds_out_goal.m"
      }
#line 420 "hlds_out_goal.m"
    {
#line 420 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 112);
    }
#line 445 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 432 "hlds_out_goal.m"
      {
#line 430 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PostDeathList_66;
#line 422 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_339_339;
#line 422 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PostDeaths_65;
#line 424 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_67_67;
#line 424 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_68_68;
#line 442 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PostBirthList_70;
#line 434 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_341_341;
#line 434 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PostBirths_69;
#line 436 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_71_71;
#line 436 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_72_72;

#line 422 "hlds_out_goal.m"
        {
#line 422 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21, &hlds__hlds_out__hlds_out_goal__PostDeaths_65);
        }
#line 422 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 422 "hlds_out_goal.m"
          {
#line 11191 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_339_339 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 423 "hlds_out_goal.m"
            {
#line 423 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__PostDeathList_66 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_339_339, hlds__hlds_out__hlds_out_goal__PostDeaths_65);
            }
#line 424 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PostDeathList_66)) == (MR_mktag((MR_Integer) 1)));
#line 424 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 424 "hlds_out_goal.m"
              {
#line 424 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PostDeathList_66, (MR_Integer) 0)));
#line 424 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PostDeathList_66, (MR_Integer) 1)));
#line 424 "hlds_out_goal.m"
              }
#line 422 "hlds_out_goal.m"
          }
#line 430 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 426 "hlds_out_goal.m"
          {
#line 426 "hlds_out_goal.m"
            {
#line 426 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 427 "hlds_out_goal.m"
            {
#line 427 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% post-deaths: ");
            }
#line 428 "hlds_out_goal.m"
            {
#line 428 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__PostDeathList_66);
            }
#line 429 "hlds_out_goal.m"
            {
#line 429 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 426 "hlds_out_goal.m"
          }
#line 430 "hlds_out_goal.m"
        else
#line 430 "hlds_out_goal.m"
          {
#line 430 "hlds_out_goal.m"
          }
#line 434 "hlds_out_goal.m"
        {
#line 434 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_llds__goal_info_maybe_get_post_births_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21, &hlds__hlds_out__hlds_out_goal__PostBirths_69);
        }
#line 434 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 434 "hlds_out_goal.m"
          {
#line 11253 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_341_341 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 435 "hlds_out_goal.m"
            {
#line 435 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__PostBirthList_70 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_341_341, hlds__hlds_out__hlds_out_goal__PostBirths_69);
            }
#line 436 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PostBirthList_70)) == (MR_mktag((MR_Integer) 1)));
#line 436 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 436 "hlds_out_goal.m"
              {
#line 436 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PostBirthList_70, (MR_Integer) 0)));
#line 436 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PostBirthList_70, (MR_Integer) 1)));
#line 436 "hlds_out_goal.m"
              }
#line 434 "hlds_out_goal.m"
          }
#line 442 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 438 "hlds_out_goal.m"
          {
#line 438 "hlds_out_goal.m"
            {
#line 438 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 439 "hlds_out_goal.m"
            {
#line 439 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% post-births: ");
            }
#line 440 "hlds_out_goal.m"
            {
#line 440 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__PostBirthList_70);
            }
#line 441 "hlds_out_goal.m"
            {
#line 441 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 438 "hlds_out_goal.m"
          }
#line 442 "hlds_out_goal.m"
        else
#line 442 "hlds_out_goal.m"
          {
#line 442 "hlds_out_goal.m"
          }
#line 432 "hlds_out_goal.m"
      }
#line 445 "hlds_out_goal.m"
    else
#line 445 "hlds_out_goal.m"
      {
#line 445 "hlds_out_goal.m"
      }
#line 448 "hlds_out_goal.m"
    {
#line 448 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 82);
    }
#line 495 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 492 "hlds_out_goal.m"
      {
#line 492 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ReuseDescription_75;
#line 492 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ListLFU_76;
#line 492 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ListLBU_77;
#line 450 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_343_343;
#line 450 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__LFU_73;
#line 450 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__LBU_74;
#line 450 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_250_250;
#line 450 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_251_251;
#line 450 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_252_252;

#line 450 "hlds_out_goal.m"
        {
#line 450 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_250_250 = hlds__hlds_goal__goal_info_get_maybe_lfu_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 450 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__V_250_250)) == (MR_mktag((MR_Integer) 1)));
#line 450 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 450 "hlds_out_goal.m"
          {
#line 450 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__LFU_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_250_250, (MR_Integer) 0)));
#line 451 "hlds_out_goal.m"
            {
#line 451 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_251_251 = hlds__hlds_goal__goal_info_get_maybe_lbu_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
            }
#line 451 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__V_251_251)) == (MR_mktag((MR_Integer) 1)));
#line 451 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 451 "hlds_out_goal.m"
              {
#line 451 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__LBU_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_251_251, (MR_Integer) 0)));
#line 452 "hlds_out_goal.m"
                {
#line 452 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_252_252 = hlds__hlds_goal__goal_info_get_maybe_reuse_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
                }
#line 452 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__V_252_252)) == (MR_mktag((MR_Integer) 1)));
#line 452 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 452 "hlds_out_goal.m"
                  {
#line 452 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__ReuseDescription_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_252_252, (MR_Integer) 0)));
#line 11381 "hlds.hlds_out.hlds_out_goal.c"
                    hlds__hlds_out__hlds_out_goal__TypeCtorInfo_343_343 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 453 "hlds_out_goal.m"
                    {
#line 453 "hlds_out_goal.m"
                      parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_343_343, hlds__hlds_out__hlds_out_goal__LFU_73, &hlds__hlds_out__hlds_out_goal__ListLFU_76);
                    }
#line 454 "hlds_out_goal.m"
                    {
#line 454 "hlds_out_goal.m"
                      parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_343_343, hlds__hlds_out__hlds_out_goal__LBU_74, &hlds__hlds_out__hlds_out_goal__ListLBU_77);
                    }
#line 454 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__succeeded = MR_TRUE;
#line 452 "hlds_out_goal.m"
                  }
#line 451 "hlds_out_goal.m"
              }
#line 450 "hlds_out_goal.m"
          }
#line 492 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 456 "hlds_out_goal.m"
          {
#line 456 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_344_344;

#line 456 "hlds_out_goal.m"
            {
#line 456 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 457 "hlds_out_goal.m"
            {
#line 457 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% LFU: ");
            }
#line 11418 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_344_344 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 458 "hlds_out_goal.m"
            {
#line 458 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_344_344, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__ListLFU_76);
            }
#line 459 "hlds_out_goal.m"
            {
#line 459 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 460 "hlds_out_goal.m"
            {
#line 460 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 461 "hlds_out_goal.m"
            {
#line 461 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% LBU: ");
            }
#line 462 "hlds_out_goal.m"
            {
#line 462 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_344_344, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__ListLBU_77);
            }
#line 463 "hlds_out_goal.m"
            {
#line 463 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 465 "hlds_out_goal.m"
            {
#line 465 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 466 "hlds_out_goal.m"
            {
#line 466 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Reuse: ");
            }
#line 470 "hlds_out_goal.m"
#line 470 "hlds_out_goal.m"
            switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ReuseDescription_75)) {
#line 470 "hlds_out_goal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 470 "hlds_out_goal.m"
              case (MR_Integer) 0:
#line 470 "hlds_out_goal.m"
#line 470 "hlds_out_goal.m"
                switch (MR_unmkbody(hlds__hlds_out__hlds_out_goal__ReuseDescription_75)) {
#line 470 "hlds_out_goal.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 470 "hlds_out_goal.m"
                  case (MR_Integer) 0:
#line 468 "hlds_out_goal.m"
                    {
#line 469 "hlds_out_goal.m"
                      {
#line 469 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "no reuse info");
                      }
#line 468 "hlds_out_goal.m"
                    }
#line 470 "hlds_out_goal.m"
                    break;
#line 470 "hlds_out_goal.m"
                  case (MR_Integer) 1:
#line 471 "hlds_out_goal.m"
                    {
#line 472 "hlds_out_goal.m"
                      {
#line 472 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "no possible reuse");
                      }
#line 471 "hlds_out_goal.m"
                    }
#line 470 "hlds_out_goal.m"
                    break;
#line 470 "hlds_out_goal.m"
                }
#line 470 "hlds_out_goal.m"
                break;
#line 470 "hlds_out_goal.m"
              case (MR_Integer) 1:
#line 474 "hlds_out_goal.m"
                {
#line 474 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__Messages_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ReuseDescription_75, (MR_Integer) 0)));

#line 475 "hlds_out_goal.m"
                  {
#line 475 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "missed (");
                  }
#line 476 "hlds_out_goal.m"
                  {
#line 476 "hlds_out_goal.m"
                    mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_goal__Messages_78, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[5]);
                  }
#line 477 "hlds_out_goal.m"
                  {
#line 477 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 474 "hlds_out_goal.m"
                }
#line 470 "hlds_out_goal.m"
                break;
#line 470 "hlds_out_goal.m"
              case (MR_Integer) 2:
#line 479 "hlds_out_goal.m"
                {
#line 479 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__ShortReuseDescr_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ReuseDescription_75, (MR_Integer) 0)));

#line 480 "hlds_out_goal.m"
                  {
#line 480 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "potential reuse (");
                  }
#line 481 "hlds_out_goal.m"
                  {
#line 481 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(hlds__hlds_out__hlds_out_goal__ShortReuseDescr_79, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
                  }
#line 483 "hlds_out_goal.m"
                  {
#line 483 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 479 "hlds_out_goal.m"
                }
#line 470 "hlds_out_goal.m"
                break;
#line 470 "hlds_out_goal.m"
              case (MR_Integer) 3:
#line 485 "hlds_out_goal.m"
                {
#line 485 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__ShortReuseDescr_299 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ReuseDescription_75, (MR_Integer) 0)));

#line 486 "hlds_out_goal.m"
                  {
#line 486 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "reuse (");
                  }
#line 487 "hlds_out_goal.m"
                  {
#line 487 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(hlds__hlds_out__hlds_out_goal__ShortReuseDescr_299, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15);
                  }
#line 489 "hlds_out_goal.m"
                  {
#line 489 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 485 "hlds_out_goal.m"
                }
#line 470 "hlds_out_goal.m"
                break;
#line 470 "hlds_out_goal.m"
            }
#line 491 "hlds_out_goal.m"
            {
#line 491 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 456 "hlds_out_goal.m"
          }
#line 492 "hlds_out_goal.m"
        else
#line 492 "hlds_out_goal.m"
          {
#line 492 "hlds_out_goal.m"
          }
#line 492 "hlds_out_goal.m"
      }
#line 495 "hlds_out_goal.m"
    else
#line 495 "hlds_out_goal.m"
      {
#line 495 "hlds_out_goal.m"
      }
#line 498 "hlds_out_goal.m"
    {
#line 498 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__CodeGenInfo_80 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
    }
#line 501 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__CodeGenInfo_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 500 "hlds_out_goal.m"
      {
#line 500 "hlds_out_goal.m"
      }
#line 501 "hlds_out_goal.m"
    else
#line 503 "hlds_out_goal.m"
      {
#line 503 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalInfo_21, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__AppendVarNums_15, hlds__hlds_out__hlds_out_goal__Indent_16);
      }
#line 506 "hlds_out_goal.m"
    {
#line 506 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 103);
    }
#line 518 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 507 "hlds_out_goal.m"
      {
#line 507 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Features_82;
#line 507 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__FeatureList_83;

#line 507 "hlds_out_goal.m"
        {
#line 507 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Features_82 = hlds__hlds_goal__goal_info_get_features_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 508 "hlds_out_goal.m"
        {
#line 508 "hlds_out_goal.m"
          mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, hlds__hlds_out__hlds_out_goal__Features_82, &hlds__hlds_out__hlds_out_goal__FeatureList_83);
        }
#line 511 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__FeatureList_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 510 "hlds_out_goal.m"
          {
#line 510 "hlds_out_goal.m"
          }
#line 511 "hlds_out_goal.m"
        else
#line 512 "hlds_out_goal.m"
          {
#line 513 "hlds_out_goal.m"
            {
#line 513 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 514 "hlds_out_goal.m"
            {
#line 514 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Goal features:  ");
            }
#line 515 "hlds_out_goal.m"
            {
#line 515 "hlds_out_goal.m"
              mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[1], ((MR_Box) (hlds__hlds_out__hlds_out_goal__FeatureList_83)));
            }
#line 516 "hlds_out_goal.m"
            {
#line 516 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
#line 516 "hlds_out_goal.m"
              return;
            }
#line 512 "hlds_out_goal.m"
          }
#line 507 "hlds_out_goal.m"
      }
#line 518 "hlds_out_goal.m"
    else
#line 518 "hlds_out_goal.m"
      {
#line 518 "hlds_out_goal.m"
      }
#line 166 "hlds_out_goal.m"
  }
#line 61 "hlds_out_goal.m"
}

#line 55 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(
#line 55 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_10,
#line 55 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goal_11,
#line 55 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 55 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 55 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AppendVarNums_14,
#line 55 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_15,
#line 55 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_16)
#line 55 "hlds_out_goal.m"
{
#line 160 "hlds_out_goal.m"
  {
#line 160 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 162 "hlds_out_goal.m"
    {
#line 162 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_10, hlds__hlds_out__hlds_out_goal__Goal_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__AppendVarNums_14, hlds__hlds_out__hlds_out_goal__Indent_15, hlds__hlds_out__hlds_out_goal__Follow_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 162 "hlds_out_goal.m"
      return;
    }
#line 160 "hlds_out_goal.m"
  }
#line 55 "hlds_out_goal.m"
}

#line 45 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__dump_goal_5_p_0(
#line 45 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_6,
#line 45 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 45 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goal_8)
#line 45 "hlds_out_goal.m"
{
#line 149 "hlds_out_goal.m"
  {
#line 149 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 149 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Globals_10;
#line 149 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Info_11;

#line 150 "hlds_out_goal.m"
    {
#line 150 "hlds_out_goal.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_6, &hlds__hlds_out__hlds_out_goal__Globals_10);
    }
#line 151 "hlds_out_goal.m"
    {
#line 151 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__Info_11 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(hlds__hlds_out__hlds_out_goal__Globals_10, (MR_Integer) 1);
    }
#line 156 "hlds_out_goal.m"
    {
#line 156 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__Goal_8, hlds__hlds_out__hlds_out_goal__ModuleInfo_6, hlds__hlds_out__hlds_out_goal__VarSet_7, (MR_Integer) 1, (MR_Integer) 0, (MR_String) "", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 156 "hlds_out_goal.m"
      return;
    }
#line 149 "hlds_out_goal.m"
  }
#line 45 "hlds_out_goal.m"
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
