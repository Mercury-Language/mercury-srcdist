/*
** Automatically generated from `hlds_out_goal.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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
#include "hlds.status.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_clause.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 152 "hlds.hlds_out.hlds_out_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 1514 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0_1(
#line 1514 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 1514 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 1514 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 1514 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 1486 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0(
#line 1486 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1486 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1486 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1486 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1486 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1486 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

#line 1347 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_50_44_32_52_93_95_48_10_p_0(
#line 1347 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1347 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1347 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1347 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1347 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1347 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

#line 1207 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_50_93_95_48_11_p_0(
#line 1207 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_12,
#line 1207 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ProgVarSet_14,
#line 1207 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_15,
#line 1207 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_16,
#line 1207 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_17,
#line 1207 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ConsId_18,
#line 1207 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_19,
#line 1207 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_20);

#line 1056 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(
#line 1056 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_10,
#line 1056 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ProgVarSet_12,
#line 1056 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_13,
#line 1056 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_14,
#line 1056 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_15,
#line 1056 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Unification_16);

#line 329 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__329__1_3_p_0(
#line 329 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_334);

#line 325 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__325__1_3_p_0(
#line 325 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_330);

#line 321 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__321__1_3_p_0(
#line 321 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_326);

#line 317 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__317__1_3_p_0(
#line 317 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_322);

#line 313 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__313__1_3_p_0(
#line 313 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_318);

#line 2187 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0(
#line 2187 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 2187 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8,
#line 2187 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__CompName_9,
#line 2187 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__CompState_10);

#line 2117 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_p_0(
#line 2117 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 2117 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 2117 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 2117 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 2117 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 2117 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 2117 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 2117 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

#line 2101 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__maybe_add_newline_indent_4_p_0(
#line 2101 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AddCommaNewlineIndent_5,
#line 2101 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_6);

#line 2089 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_indent_4_p_0(
#line 2089 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AddCommaNewlineIndent_5,
#line 2089 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_6);

#line 2078 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_6_p_0(
#line 2078 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_7,
#line 2078 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MutableVar_8,
#line 2078 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_0_13,
#line 2078 "hlds_out_goal.m"
  MR_Word * hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_14);

#line 2047 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_3(
#line 2047 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 2047 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 2047 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 2047 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3,
#line 2047 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_4,
#line 2047 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_5);

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

#line 2018 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_1(
#line 2018 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 2018 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 2018 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 2018 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 1857 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0(
#line 1857 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41,
#line 1857 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1857 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1857 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1857 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1857 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1857 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1857 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

#line 1812 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_p_0(
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1812 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1812 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

#line 1792 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_negation_10_p_0(
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1792 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1792 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

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
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1745 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Var_17,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Case_18);

#line 1727 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_10_p_0(
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1727 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Var_17,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__CasesList_18);

#line 1698 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0(
#line 1698 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1698 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1698 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1698 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1698 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1698 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1698 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1698 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

#line 1669 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_disj_10_p_0(
#line 1669 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1669 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1669 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1669 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1669 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1669 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1669 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1669 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

#line 1634 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(
#line 1634 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_13,
#line 1634 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
#line 1634 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
#line 1634 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_16,
#line 1634 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_17,
#line 1634 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_18,
#line 1634 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_19,
#line 1634 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Separator_20,
#line 1634 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goal1_21,
#line 1634 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goals1_22);

#line 1584 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_conj_10_p_0(
#line 1584 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1584 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1584 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1584 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1584 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1584 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1584 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1584 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

#line 1542 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(
#line 1542 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_1,
#line 1542 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TVarSet_2,
#line 1542 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_3,
#line 1542 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__4_4);

#line 1470 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_reg_3_p_0(
#line 1470 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgReg_4);

#line 1464 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0_1(
#line 1464 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 1464 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 1464 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 1464 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 1456 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(
#line 1456 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_5,
#line 1456 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeArgRegs_6);

#line 1328 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_p_0(
#line 1328 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 1328 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8,
#line 1328 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__PredName_9,
#line 1328 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_10);

#line 1247 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_p_0(
#line 1247 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1247 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1247 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1247 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1247 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1247 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1247 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1247 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

#line 914 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_p_0(
#line 914 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_12,
#line 914 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 914 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 914 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_15,
#line 914 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_16,
#line 914 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_17,
#line 914 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_18,
#line 914 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeType_19,
#line 914 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_20);

#line 903 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(
#line 903 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_13,
#line 903 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
#line 903 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
#line 903 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_16,
#line 903 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_17,
#line 903 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_18,
#line 903 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_19,
#line 903 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_20,
#line 903 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeType_21,
#line 903 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_22);

#line 852 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_unify_10_p_0(
#line 852 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 852 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 852 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 852 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 852 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 852 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 852 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 852 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

#line 795 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_expr_10_p_0(
#line 795 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 795 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 795 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 795 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 795 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 795 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 795 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 795 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

#line 744 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(
#line 744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ShortDescription_6,
#line 744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8);

#line 733 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(
#line 733 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_1,
#line 733 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_2,
#line 733 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__3_3);

#line 721 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_p_0(
#line 721 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_6,
#line 721 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_7,
#line 721 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_8);

#line 710 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_p_0(
#line 710 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 710 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8,
#line 710 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_9,
#line 710 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_10);

#line 525 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_p_0(
#line 525 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_8,
#line 525 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalInfo_9,
#line 525 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_10,
#line 525 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_11,
#line 525 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_12);

#line 479 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_6(
#line 479 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 479 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 479 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 479 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 329 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_5(
#line 329 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 329 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 329 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 329 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

#line 325 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_4(
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
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_3(
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
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_2(
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
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_1(
#line 313 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 313 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 313 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 313 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_1[18][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_2[6][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_3[11][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_4[4][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_5[1][9];




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
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0_1)),
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1127 "hlds.hlds_out.hlds_out_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1514 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0_1(
#line 1514 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 1514 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 1514 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 1514 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 1514 "hlds_out_goal.m"
{
#line 1514 "hlds_out_goal.m"
  {
#line 1514 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 1514 "hlds_out_goal.m"
    {
#line 1514 "hlds_out_goal.m"
      parse_tree__parse_tree_out_clause__mercury_output_trace_runtime_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 1514 "hlds_out_goal.m"
      return;
    }
#line 1514 "hlds_out_goal.m"
  }
#line 1514 "hlds_out_goal.m"
}

#line 1486 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0(
#line 1486 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1486 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1486 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1486 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1486 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1486 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
#line 1486 "hlds_out_goal.m"
{
#line 1492 "hlds_out_goal.m"
  {
#line 1492 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1492 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Attributes_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));
#line 1492 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 2)));
#line 1492 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 3)));
#line 1492 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 4)));
#line 1492 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ExtraArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 5)));
#line 1492 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeTraceRuntimeCond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 6)));
#line 1492 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__PragmaCode_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 7)));
#line 1492 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ForeignLang_27;
#line 1492 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__PredIdInt_28;
#line 1492 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__ProcIdInt_29;
#line 1492 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__TypeVarSet_31;
#line 1492 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__Code_34;
#line 1492 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_41_41;
#line 1535 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_35_35;

#line 1495 "hlds_out_goal.m"
    {
#line 1495 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__ForeignLang_27 = parse_tree__prog_data__get_foreign_language_1_f_0(hlds__hlds_out__hlds_out_goal__Attributes_20);
    }
#line 1496 "hlds_out_goal.m"
    {
#line 1496 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1497 "hlds_out_goal.m"
    {
#line 1497 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\044pragma_foreign_proc(/* ");
    }
#line 1498 "hlds_out_goal.m"
    {
#line 1498 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_41_41 = libs__globals__foreign_language_string_1_f_0(hlds__hlds_out__hlds_out_goal__ForeignLang_27);
    }
#line 1498 "hlds_out_goal.m"
    {
#line 1498 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_41_41);
    }
#line 1499 "hlds_out_goal.m"
    {
#line 1499 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " */, ");
    }
#line 1500 "hlds_out_goal.m"
    {
#line 1500 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__PredId_21);
    }
#line 1501 "hlds_out_goal.m"
    {
#line 1501 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " pred ");
    }
#line 1502 "hlds_out_goal.m"
    {
#line 1502 "hlds_out_goal.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_goal__PredId_21, &hlds__hlds_out__hlds_out_goal__PredIdInt_28);
    }
#line 1503 "hlds_out_goal.m"
    {
#line 1503 "hlds_out_goal.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__PredIdInt_28);
    }
#line 1504 "hlds_out_goal.m"
    {
#line 1504 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " proc ");
    }
#line 1505 "hlds_out_goal.m"
    {
#line 1505 "hlds_out_goal.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_goal__ProcId_22, &hlds__hlds_out__hlds_out_goal__ProcIdInt_29);
    }
#line 1506 "hlds_out_goal.m"
    {
#line 1506 "hlds_out_goal.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__ProcIdInt_29);
    }
#line 1507 "hlds_out_goal.m"
    {
#line 1507 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
#line 1510 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__MaybeTraceRuntimeCond_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1509 "hlds_out_goal.m"
      {
#line 1509 "hlds_out_goal.m"
      }
#line 1510 "hlds_out_goal.m"
    else
#line 1511 "hlds_out_goal.m"
      {
#line 1511 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TraceRuntimeCond_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeTraceRuntimeCond_25, (MR_Integer) 0)));

#line 1512 "hlds_out_goal.m"
        {
#line 1512 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1513 "hlds_out_goal.m"
        {
#line 1513 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% trace_runtime_cond(");
        }
#line 1514 "hlds_out_goal.m"
        {
#line 1514 "hlds_out_goal.m"
          parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[10], hlds__hlds_out__hlds_out_goal__TraceRuntimeCond_30);
        }
#line 1516 "hlds_out_goal.m"
        {
#line 1516 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
#line 1511 "hlds_out_goal.m"
      }
#line 1518 "hlds_out_goal.m"
    {
#line 1518 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1522 "hlds_out_goal.m"
    {
#line 1522 "hlds_out_goal.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_goal__TypeVarSet_31);
    }
#line 1523 "hlds_out_goal.m"
    {
#line 1523 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
#line 1524 "hlds_out_goal.m"
    {
#line 1524 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeVarSet_31, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Args_23);
    }
#line 1525 "hlds_out_goal.m"
    {
#line 1525 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "],\n");
    }
#line 1528 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__ExtraArgs_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1527 "hlds_out_goal.m"
      {
#line 1527 "hlds_out_goal.m"
      }
#line 1528 "hlds_out_goal.m"
    else
#line 1529 "hlds_out_goal.m"
      {
#line 1530 "hlds_out_goal.m"
        {
#line 1530 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1531 "hlds_out_goal.m"
        {
#line 1531 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "{");
        }
#line 1532 "hlds_out_goal.m"
        {
#line 1532 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeVarSet_31, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__ExtraArgs_24);
        }
#line 1533 "hlds_out_goal.m"
        {
#line 1533 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "},\n");
        }
#line 1529 "hlds_out_goal.m"
      }
#line 1535 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__Code_34 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__PragmaCode_26, (MR_Integer) 0)));
#line 1535 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__PragmaCode_26, (MR_Integer) 1)));
#line 1536 "hlds_out_goal.m"
    {
#line 1536 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
#line 1537 "hlds_out_goal.m"
    {
#line 1537 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Code_34);
    }
#line 1538 "hlds_out_goal.m"
    {
#line 1538 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
#line 1539 "hlds_out_goal.m"
    {
#line 1539 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 1540 "hlds_out_goal.m"
    {
#line 1540 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1540 "hlds_out_goal.m"
      return;
    }
#line 1492 "hlds_out_goal.m"
  }
#line 1486 "hlds_out_goal.m"
}

#line 1347 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_50_44_32_52_93_95_48_10_p_0(
#line 1347 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1347 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1347 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1347 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1347 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1347 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
#line 1347 "hlds_out_goal.m"
{
#line 1353 "hlds_out_goal.m"
  {
#line 1353 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1353 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__GenericCall_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));
#line 1353 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 2)));
#line 1353 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Modes_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 3)));
#line 1353 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 4)));
#line 1353 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_25 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 1354 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 5)));
#line 1355 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 1355 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 1355 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 1355 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));

#line 1391 "hlds_out_goal.m"
#line 1391 "hlds_out_goal.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GenericCall_20)) {
#line 1391 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1391 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 1358 "hlds_out_goal.m"
        {
#line 1358 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__PredVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 0)));
#line 1358 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Purity_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 1)));
#line 1358 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__PredOrFunc_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 2)));
#line 1358 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 3)));

#line 1372 "hlds_out_goal.m"
#line 1372 "hlds_out_goal.m"
          switch (hlds__hlds_out__hlds_out_goal__PredOrFunc_28) {
#line 1372 "hlds_out_goal.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1372 "hlds_out_goal.m"
            case (MR_Integer) 1:
#line 1373 "hlds_out_goal.m"
              {
#line 1373 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__FuncArgVars_30;
#line 1373 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__FuncRetVar_31;
#line 1373 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_96_96;
#line 1381 "hlds_out_goal.m"
                MR_Box hlds__hlds_out__hlds_out_goal__conv0_FuncRetVar_31;

#line 1374 "hlds_out_goal.m"
                {
#line 1374 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
                }
#line 1378 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1375 "hlds_out_goal.m"
                  {
#line 1375 "hlds_out_goal.m"
                    {
#line 1375 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1376 "hlds_out_goal.m"
                    {
#line 1376 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% higher-order function application\n");
                    }
#line 1377 "hlds_out_goal.m"
                    {
#line 1377 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
                    }
#line 1375 "hlds_out_goal.m"
                  }
#line 1378 "hlds_out_goal.m"
                else
#line 1378 "hlds_out_goal.m"
                  {
#line 1378 "hlds_out_goal.m"
                  }
#line 1381 "hlds_out_goal.m"
                {
#line 1381 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1381 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_96_96, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__PredVar_26));
#line 1381 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_96_96, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgVars_21));
#line 1381 "hlds_out_goal.m"
                }
#line 1381 "hlds_out_goal.m"
                {
#line 1381 "hlds_out_goal.m"
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], hlds__hlds_out__hlds_out_goal__V_96_96, &hlds__hlds_out__hlds_out_goal__FuncArgVars_30, &hlds__hlds_out__hlds_out_goal__conv0_FuncRetVar_31);
                }
#line 1381 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__FuncRetVar_31 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv0_FuncRetVar_31);
#line 1383 "hlds_out_goal.m"
                {
#line 1383 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 1384 "hlds_out_goal.m"
                {
#line 1384 "hlds_out_goal.m"
                  parse_tree__prog_out__write_purity_prefix_3_p_0(hlds__hlds_out__hlds_out_goal__Purity_27);
                }
#line 1385 "hlds_out_goal.m"
                {
#line 1385 "hlds_out_goal.m"
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__FuncRetVar_31);
                }
#line 1386 "hlds_out_goal.m"
                {
#line 1386 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " = ");
                }
#line 1387 "hlds_out_goal.m"
                {
#line 1387 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_functor_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_4[2], hlds__hlds_out__hlds_out_goal__FuncArgVars_30);
                }
#line 1373 "hlds_out_goal.m"
              }
#line 1372 "hlds_out_goal.m"
              break;
#line 1372 "hlds_out_goal.m"
            case (MR_Integer) 0:
#line 1360 "hlds_out_goal.m"
              {
#line 1360 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_113_113;

#line 1361 "hlds_out_goal.m"
                {
#line 1361 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
                }
#line 1365 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1362 "hlds_out_goal.m"
                  {
#line 1362 "hlds_out_goal.m"
                    {
#line 1362 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1363 "hlds_out_goal.m"
                    {
#line 1363 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% higher-order predicate call\n");
                    }
#line 1364 "hlds_out_goal.m"
                    {
#line 1364 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
                    }
#line 1362 "hlds_out_goal.m"
                  }
#line 1365 "hlds_out_goal.m"
                else
#line 1365 "hlds_out_goal.m"
                  {
#line 1365 "hlds_out_goal.m"
                  }
#line 1368 "hlds_out_goal.m"
                {
#line 1368 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 1369 "hlds_out_goal.m"
                {
#line 1369 "hlds_out_goal.m"
                  parse_tree__prog_out__write_purity_prefix_3_p_0(hlds__hlds_out__hlds_out_goal__Purity_27);
                }
#line 1371 "hlds_out_goal.m"
                {
#line 1371 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1371 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_113_113, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__PredVar_26));
#line 1371 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_113_113, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgVars_21));
#line 1371 "hlds_out_goal.m"
                }
#line 1370 "hlds_out_goal.m"
                {
#line 1370 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_functor_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_4[3], hlds__hlds_out__hlds_out_goal__V_113_113);
                }
#line 1360 "hlds_out_goal.m"
              }
#line 1372 "hlds_out_goal.m"
              break;
#line 1372 "hlds_out_goal.m"
          }
#line 1390 "hlds_out_goal.m"
          {
#line 1390 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1390 "hlds_out_goal.m"
            return;
          }
#line 1358 "hlds_out_goal.m"
        }
#line 1391 "hlds_out_goal.m"
        break;
#line 1391 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 1393 "hlds_out_goal.m"
        {
#line 1393 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_131_131;
#line 1393 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TCInfoVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 0)));
#line 1393 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__MethodNum_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 1)));
#line 1393 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Context_36;
#line 1393 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TCInfoTerm_38;
#line 1393 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__MethodNumTerm_39;
#line 1393 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgTerms_40;
#line 1393 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Term_41;
#line 1393 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_84_84;
#line 1393 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_86_86;
#line 1393 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_87_87;
#line 1392 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal___ClassId_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 2)));
#line 1392 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal___MethodId_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 3)));

#line 1394 "hlds_out_goal.m"
          {
#line 1394 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
          }
#line 1398 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1395 "hlds_out_goal.m"
            {
#line 1395 "hlds_out_goal.m"
              {
#line 1395 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1396 "hlds_out_goal.m"
              {
#line 1396 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% class method call\n");
              }
#line 1397 "hlds_out_goal.m"
              {
#line 1397 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
              }
#line 1395 "hlds_out_goal.m"
            }
#line 1398 "hlds_out_goal.m"
          else
#line 1398 "hlds_out_goal.m"
            {
#line 1398 "hlds_out_goal.m"
            }
#line 1401 "hlds_out_goal.m"
          {
#line 1401 "hlds_out_goal.m"
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_goal__Context_36);
          }
#line 1403 "hlds_out_goal.m"
          {
#line 1403 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__TCInfoTerm_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1403 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TCInfoTerm_38, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__TCInfoVar_32));
#line 1403 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TCInfoTerm_38, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_36));
#line 1403 "hlds_out_goal.m"
          }
#line 1404 "hlds_out_goal.m"
          {
#line 1404 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1404 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_84_84, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__MethodNum_33));
#line 1404 "hlds_out_goal.m"
          }
#line 1404 "hlds_out_goal.m"
          {
#line 1404 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__MethodNumTerm_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1404 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MethodNumTerm_39, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_84_84));
#line 1404 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MethodNumTerm_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1404 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MethodNumTerm_39, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_36));
#line 1404 "hlds_out_goal.m"
          }
#line 1748 "hlds.hlds_out.hlds_out_goal.c"
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_131_131 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1405 "hlds_out_goal.m"
          {
#line 1405 "hlds_out_goal.m"
            mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_131_131, hlds__hlds_out__hlds_out_goal__ArgVars_21, &hlds__hlds_out__hlds_out_goal__ArgTerms_40);
          }
#line 1406 "hlds_out_goal.m"
          {
#line 1406 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_87_87, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__MethodNumTerm_39));
#line 1406 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_87_87, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgTerms_40));
#line 1406 "hlds_out_goal.m"
          }
#line 1406 "hlds_out_goal.m"
          {
#line 1406 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_86_86, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__TCInfoTerm_38));
#line 1406 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_86_86, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_87_87));
#line 1406 "hlds_out_goal.m"
          }
#line 1406 "hlds_out_goal.m"
          {
#line 1406 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Term_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1406 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_41, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[1]));
#line 1406 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_41, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_86_86));
#line 1406 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_41, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_36));
#line 1406 "hlds_out_goal.m"
          }
#line 1408 "hlds_out_goal.m"
          {
#line 1408 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 1409 "hlds_out_goal.m"
          {
#line 1409 "hlds_out_goal.m"
            parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_131_131, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Term_41);
          }
#line 1410 "hlds_out_goal.m"
          {
#line 1410 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1410 "hlds_out_goal.m"
            return;
          }
#line 1393 "hlds_out_goal.m"
        }
#line 1391 "hlds_out_goal.m"
        break;
#line 1391 "hlds_out_goal.m"
      case (MR_Integer) 2:
#line 1412 "hlds_out_goal.m"
        {
#line 1412 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_132_132;
#line 1412 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__EventName_42 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 0)));
#line 1412 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Context_117;
#line 1412 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Functor_118;
#line 1412 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgTerms_119;
#line 1412 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Term_120;

#line 1413 "hlds_out_goal.m"
          {
#line 1413 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
          }
#line 1417 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1414 "hlds_out_goal.m"
            {
#line 1414 "hlds_out_goal.m"
              {
#line 1414 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1415 "hlds_out_goal.m"
              {
#line 1415 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% event call\n");
              }
#line 1416 "hlds_out_goal.m"
              {
#line 1416 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
              }
#line 1414 "hlds_out_goal.m"
            }
#line 1417 "hlds_out_goal.m"
          else
#line 1417 "hlds_out_goal.m"
            {
#line 1417 "hlds_out_goal.m"
            }
#line 1420 "hlds_out_goal.m"
          {
#line 1420 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 1421 "hlds_out_goal.m"
          {
#line 1421 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "event ");
          }
#line 1422 "hlds_out_goal.m"
          {
#line 1422 "hlds_out_goal.m"
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_goal__Context_117);
          }
#line 1423 "hlds_out_goal.m"
          {
#line 1423 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Functor_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1423 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Functor_118, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__EventName_42));
#line 1423 "hlds_out_goal.m"
          }
#line 1880 "hlds.hlds_out.hlds_out_goal.c"
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1424 "hlds_out_goal.m"
          {
#line 1424 "hlds_out_goal.m"
            mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_132_132, hlds__hlds_out__hlds_out_goal__ArgVars_21, &hlds__hlds_out__hlds_out_goal__ArgTerms_119);
          }
#line 1425 "hlds_out_goal.m"
          {
#line 1425 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Term_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1425 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_120, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Functor_118));
#line 1425 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_120, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgTerms_119));
#line 1425 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_120, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_117));
#line 1425 "hlds_out_goal.m"
          }
#line 1426 "hlds_out_goal.m"
          {
#line 1426 "hlds_out_goal.m"
            parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_132_132, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Term_120);
          }
#line 1427 "hlds_out_goal.m"
          {
#line 1427 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1427 "hlds_out_goal.m"
            return;
          }
#line 1412 "hlds_out_goal.m"
        }
#line 1391 "hlds_out_goal.m"
        break;
#line 1391 "hlds_out_goal.m"
      case (MR_Integer) 3:
#line 1429 "hlds_out_goal.m"
        {
#line 1429 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_134_134;
#line 1429 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__CastType_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 0)));
#line 1429 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__CastTypeString_44;
#line 1429 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Context_121;
#line 1429 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Functor_122;
#line 1429 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgTerms_123;
#line 1429 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Term_124;

#line 1430 "hlds_out_goal.m"
          {
#line 1430 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__CastTypeString_44 = hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__CastType_43);
          }
#line 1431 "hlds_out_goal.m"
          {
#line 1431 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
          }
#line 1435 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1432 "hlds_out_goal.m"
            {
#line 1432 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_50_50;
#line 1432 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_53_53;

#line 1432 "hlds_out_goal.m"
              {
#line 1432 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1433 "hlds_out_goal.m"
              {
#line 1433 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1433 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_53_53, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__CastTypeString_44));
#line 1433 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[17])));
#line 1433 "hlds_out_goal.m"
              }
#line 1433 "hlds_out_goal.m"
              {
#line 1433 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1433 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_50_50, 0) = ((MR_Box) ((MR_String) "% "));
#line 1433 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_50_50, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_53_53));
#line 1433 "hlds_out_goal.m"
              }
#line 1433 "hlds_out_goal.m"
              {
#line 1433 "hlds_out_goal.m"
                mercury__io__write_strings_3_p_0(hlds__hlds_out__hlds_out_goal__V_50_50);
              }
#line 1434 "hlds_out_goal.m"
              {
#line 1434 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
              }
#line 1432 "hlds_out_goal.m"
            }
#line 1435 "hlds_out_goal.m"
          else
#line 1435 "hlds_out_goal.m"
            {
#line 1435 "hlds_out_goal.m"
            }
#line 1438 "hlds_out_goal.m"
          {
#line 1438 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 68);
          }
#line 1444 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1439 "hlds_out_goal.m"
            {
#line 1439 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_45;

#line 1439 "hlds_out_goal.m"
              {
#line 1439 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1440 "hlds_out_goal.m"
              {
#line 1440 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% modes: ");
              }
#line 1441 "hlds_out_goal.m"
              {
#line 1441 "hlds_out_goal.m"
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_goal__InstVarSet_45);
              }
#line 1442 "hlds_out_goal.m"
              {
#line 1442 "hlds_out_goal.m"
                parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_goal__InstVarSet_45, hlds__hlds_out__hlds_out_goal__Modes_22);
              }
#line 1443 "hlds_out_goal.m"
              {
#line 1443 "hlds_out_goal.m"
                mercury__io__nl_2_p_0();
              }
#line 1439 "hlds_out_goal.m"
            }
#line 1444 "hlds_out_goal.m"
          else
#line 1444 "hlds_out_goal.m"
            {
#line 1444 "hlds_out_goal.m"
            }
#line 1447 "hlds_out_goal.m"
          {
#line 1447 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Functor_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1447 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Functor_122, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__CastTypeString_44));
#line 1447 "hlds_out_goal.m"
          }
#line 2049 "hlds.hlds_out.hlds_out_goal.c"
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_134_134 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1448 "hlds_out_goal.m"
          {
#line 1448 "hlds_out_goal.m"
            mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_134_134, hlds__hlds_out__hlds_out_goal__ArgVars_21, &hlds__hlds_out__hlds_out_goal__ArgTerms_123);
          }
#line 1449 "hlds_out_goal.m"
          {
#line 1449 "hlds_out_goal.m"
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_goal__Context_121);
          }
#line 1450 "hlds_out_goal.m"
          {
#line 1450 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Term_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1450 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_124, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Functor_122));
#line 1450 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_124, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgTerms_123));
#line 1450 "hlds_out_goal.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_124, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_121));
#line 1450 "hlds_out_goal.m"
          }
#line 1451 "hlds_out_goal.m"
          {
#line 1451 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 1452 "hlds_out_goal.m"
          {
#line 1452 "hlds_out_goal.m"
            parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_134_134, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Term_124);
          }
#line 1453 "hlds_out_goal.m"
          {
#line 1453 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1453 "hlds_out_goal.m"
            return;
          }
#line 1429 "hlds_out_goal.m"
        }
#line 1391 "hlds_out_goal.m"
        break;
#line 1391 "hlds_out_goal.m"
    }
#line 1353 "hlds_out_goal.m"
  }
#line 1347 "hlds_out_goal.m"
}

#line 1207 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_50_93_95_48_11_p_0(
#line 1207 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_12,
#line 1207 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ProgVarSet_14,
#line 1207 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_15,
#line 1207 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_16,
#line 1207 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_17,
#line 1207 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ConsId_18,
#line 1207 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_19,
#line 1207 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_20)
#line 1207 "hlds_out_goal.m"
{
#line 1213 "hlds_out_goal.m"
  {
#line 1213 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1213 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_27_27;

#line 1214 "hlds_out_goal.m"
    {
#line 1214 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_27_27 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__ConsId_18);
    }
#line 1214 "hlds_out_goal.m"
    {
#line 1214 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_27_27);
    }
#line 1218 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__ArgVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1216 "hlds_out_goal.m"
      {
#line 1217 "hlds_out_goal.m"
        {
#line 1217 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1217 "hlds_out_goal.m"
          return;
        }
#line 1216 "hlds_out_goal.m"
      }
#line 1218 "hlds_out_goal.m"
    else
#line 1219 "hlds_out_goal.m"
      {
#line 1219 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_24;
#line 1223 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__V_50_50;
#line 1223 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_51_51;
#line 1223 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_52_52;
#line 1223 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_53_53;

#line 1220 "hlds_out_goal.m"
        {
#line 1220 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) " (");
        }
#line 1221 "hlds_out_goal.m"
        {
#line 1221 "hlds_out_goal.m"
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ProgVarSet_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_16, hlds__hlds_out__hlds_out_goal__ArgVars_19);
        }
#line 1222 "hlds_out_goal.m"
        {
#line 1222 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
#line 1223 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__DumpOptions_24 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 0)));
#line 1223 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 1)));
#line 1223 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 2)));
#line 1223 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 3)));
#line 1223 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 4)));
#line 1224 "hlds_out_goal.m"
        {
#line 1224 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_24, (MR_Char) 97);
        }
#line 1237 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1231 "hlds_out_goal.m"
          {
#line 1225 "hlds_out_goal.m"
            {
#line 1225 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_24, (MR_Char) 121);
            }
#line 1231 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1226 "hlds_out_goal.m"
              {
#line 1226 "hlds_out_goal.m"
                {
#line 1226 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_17);
                }
#line 1227 "hlds_out_goal.m"
                {
#line 1227 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% arg-modes\n");
                }
#line 1229 "hlds_out_goal.m"
                {
#line 1229 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_mode__mercury_output_structured_uni_mode_list_7_p_0(hlds__hlds_out__hlds_out_goal__ArgModes_20, hlds__hlds_out__hlds_out_goal__Indent_17, (MR_Integer) 1, (MR_Integer) 1, hlds__hlds_out__hlds_out_goal__InstVarSet_15);
#line 1229 "hlds_out_goal.m"
                  return;
                }
#line 1226 "hlds_out_goal.m"
              }
#line 1231 "hlds_out_goal.m"
            else
#line 1232 "hlds_out_goal.m"
              {
#line 1232 "hlds_out_goal.m"
                {
#line 1232 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_17);
                }
#line 1233 "hlds_out_goal.m"
                {
#line 1233 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% arg-modes ");
                }
#line 1234 "hlds_out_goal.m"
                {
#line 1234 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_list_4_p_0(hlds__hlds_out__hlds_out_goal__ArgModes_20, hlds__hlds_out__hlds_out_goal__InstVarSet_15);
                }
#line 1235 "hlds_out_goal.m"
                {
#line 1235 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1235 "hlds_out_goal.m"
                  return;
                }
#line 1232 "hlds_out_goal.m"
              }
#line 1231 "hlds_out_goal.m"
          }
#line 1237 "hlds_out_goal.m"
        else
#line 1237 "hlds_out_goal.m"
          {
#line 1237 "hlds_out_goal.m"
          }
#line 1219 "hlds_out_goal.m"
      }
#line 1213 "hlds_out_goal.m"
  }
#line 1207 "hlds_out_goal.m"
}

#line 1056 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(
#line 1056 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_10,
#line 1056 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ProgVarSet_12,
#line 1056 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_13,
#line 1056 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_14,
#line 1056 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_15,
#line 1056 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Unification_16)
#line 1056 "hlds_out_goal.m"
{
#line 1063 "hlds_out_goal.m"
  {
#line 1063 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1063 "hlds_out_goal.m"
#line 1063 "hlds_out_goal.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Unification_16)) {
#line 1063 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1063 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 1080 "hlds_out_goal.m"
        {
#line 1080 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173;
#line 1080 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 0)));
#line 1080 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 1)));
#line 1080 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 2)));
#line 1080 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 3)));
#line 1080 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ConstructHow_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 4)));
#line 1080 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Uniqueness_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 5)));
#line 1080 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__SubInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 6)));
#line 1080 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_27;
#line 1088 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__V_163_163;
#line 1088 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_164_164;
#line 1088 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_165_165;
#line 1088 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_166_166;

#line 1081 "hlds_out_goal.m"
          {
#line 1081 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
          }
#line 1082 "hlds_out_goal.m"
          {
#line 1082 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "% ");
          }
#line 2340 "hlds.hlds_out.hlds_out_goal.c"
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1083 "hlds_out_goal.m"
          {
#line 1083 "hlds_out_goal.m"
            parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__Var_20);
          }
#line 1084 "hlds_out_goal.m"
          {
#line 1084 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) " := ");
          }
#line 1085 "hlds_out_goal.m"
          {
#line 1085 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_50_93_95_48_11_p_0(hlds__hlds_out__hlds_out_goal__Info_10, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__InstVarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__Indent_15, hlds__hlds_out__hlds_out_goal__ConsId_21, hlds__hlds_out__hlds_out_goal__ArgVars_22, hlds__hlds_out__hlds_out_goal__ArgModes_23);
          }
#line 1088 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__DumpOptions_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 0)));
#line 1088 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_163_163 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 1)));
#line 1088 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 2)));
#line 1088 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 3)));
#line 1088 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 4)));
#line 1089 "hlds_out_goal.m"
          {
#line 1089 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_27, (MR_Char) 117);
          }
#line 1160 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1098 "hlds_out_goal.m"
            {
#line 1096 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__TypeCtor_30;
#line 1090 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_28_28;
#line 1090 "hlds_out_goal.m"
              MR_Integer hlds__hlds_out__hlds_out_goal__V_29_29;

#line 1090 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ConsId_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1090 "hlds_out_goal.m"
              if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1090 "hlds_out_goal.m"
                {
#line 1090 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_21, (MR_Integer) 1)));
#line 1090 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_21, (MR_Integer) 2)));
#line 1090 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__TypeCtor_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_21, (MR_Integer) 3)));
#line 1091 "hlds_out_goal.m"
                  {
#line 1091 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorSymName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__TypeCtor_30, (MR_Integer) 0)));
#line 1091 "hlds_out_goal.m"
                    MR_Integer hlds__hlds_out__hlds_out_goal__TypeCtorArity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__TypeCtor_30, (MR_Integer) 1)));
#line 1091 "hlds_out_goal.m"
                    MR_String hlds__hlds_out__hlds_out_goal__TypeCtorSymNameStr_33;
#line 1091 "hlds_out_goal.m"
                    MR_String hlds__hlds_out__hlds_out_goal__V_180_180;
#line 1091 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__V_186_186;
#line 1091 "hlds_out_goal.m"
                    MR_String hlds__hlds_out__hlds_out_goal__V_189_189;

#line 1092 "hlds_out_goal.m"
                    {
#line 1092 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
                    }
#line 1093 "hlds_out_goal.m"
                    {
#line 1093 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__TypeCtorSymNameStr_33 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorSymName_31);
                    }
#line 1094 "hlds_out_goal.m"
                    {
#line 1094 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% cons_id type_ctor: ");
                    }
#line 2425 "hlds.hlds_out.hlds_out_goal.c"
                    hlds__hlds_out__hlds_out_goal__V_186_186 = (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_4[0];
#line 1095 "hlds_out_goal.m"
                    {
#line 1095 "hlds_out_goal.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_goal__V_186_186, hlds__hlds_out__hlds_out_goal__TypeCtorSymNameStr_33, &hlds__hlds_out__hlds_out_goal__V_180_180);
                    }
#line 1095 "hlds_out_goal.m"
                    {
#line 1095 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_180_180);
                    }
#line 1094 "hlds_out_goal.m"
                    {
#line 1094 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "/");
                    }
#line 1095 "hlds_out_goal.m"
                    {
#line 1095 "hlds_out_goal.m"
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_goal__V_186_186, hlds__hlds_out__hlds_out_goal__TypeCtorArity_32, &hlds__hlds_out__hlds_out_goal__V_189_189);
                    }
#line 1095 "hlds_out_goal.m"
                    {
#line 1095 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_189_189);
                    }
#line 1091 "hlds_out_goal.m"
                  }
#line 1090 "hlds_out_goal.m"
                }
#line 1090 "hlds_out_goal.m"
              else
#line 1096 "hlds_out_goal.m"
                {
#line 1096 "hlds_out_goal.m"
                }
#line 1103 "hlds_out_goal.m"
#line 1103 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__Uniqueness_25) {
#line 1103 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1103 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 1104 "hlds_out_goal.m"
                  {
#line 1104 "hlds_out_goal.m"
                  }
#line 1103 "hlds_out_goal.m"
                  break;
#line 1103 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 1100 "hlds_out_goal.m"
                  {
#line 1101 "hlds_out_goal.m"
                    {
#line 1101 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
                    }
#line 1102 "hlds_out_goal.m"
                    {
#line 1102 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% cell_is_unique\n");
                    }
#line 1100 "hlds_out_goal.m"
                  }
#line 1103 "hlds_out_goal.m"
                  break;
#line 1103 "hlds_out_goal.m"
              }
#line 1108 "hlds_out_goal.m"
              if ((hlds__hlds_out__hlds_out_goal__SubInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1107 "hlds_out_goal.m"
                {
#line 1107 "hlds_out_goal.m"
                }
#line 1108 "hlds_out_goal.m"
              else
#line 1109 "hlds_out_goal.m"
                {
#line 1109 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__MaybeTakeAddr_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__SubInfo_26, (MR_Integer) 0)));
#line 1109 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__MaybeSize_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__SubInfo_26, (MR_Integer) 1)));

#line 1116 "hlds_out_goal.m"
                  if ((hlds__hlds_out__hlds_out_goal__MaybeTakeAddr_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1117 "hlds_out_goal.m"
                    {
#line 1117 "hlds_out_goal.m"
                    }
#line 1116 "hlds_out_goal.m"
                  else
#line 1111 "hlds_out_goal.m"
                    {
#line 1111 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal__TakeAddressFields_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeTakeAddr_34, (MR_Integer) 0)));

#line 1112 "hlds_out_goal.m"
                      {
#line 1112 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
                      }
#line 1113 "hlds_out_goal.m"
                      {
#line 1113 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "% take address fields: ");
                      }
#line 1114 "hlds_out_goal.m"
                      {
#line 1114 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(hlds__hlds_out__hlds_out_goal__TakeAddressFields_36);
                      }
#line 1115 "hlds_out_goal.m"
                      {
#line 1115 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "\n");
                      }
#line 1111 "hlds_out_goal.m"
                    }
#line 1135 "hlds_out_goal.m"
                  if ((hlds__hlds_out__hlds_out_goal__MaybeSize_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1136 "hlds_out_goal.m"
                    {
#line 1136 "hlds_out_goal.m"
                    }
#line 1135 "hlds_out_goal.m"
                  else
#line 1120 "hlds_out_goal.m"
                    {
#line 1120 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal__SizeSource_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeSize_35, (MR_Integer) 0)));

#line 1121 "hlds_out_goal.m"
                      {
#line 1121 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
                      }
#line 1122 "hlds_out_goal.m"
                      {
#line 1122 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "% term size ");
                      }
#line 1128 "hlds_out_goal.m"
                      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__SizeSource_37)) == (MR_mktag((MR_Integer) 1))))
#line 1129 "hlds_out_goal.m"
                        {
#line 1129 "hlds_out_goal.m"
                          MR_Word hlds__hlds_out__hlds_out_goal__SizeVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__SizeSource_37, (MR_Integer) 0)));

#line 1130 "hlds_out_goal.m"
                          {
#line 1130 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "var ");
                          }
#line 1131 "hlds_out_goal.m"
                          {
#line 1131 "hlds_out_goal.m"
                            parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__SizeVar_39);
                          }
#line 1133 "hlds_out_goal.m"
                          {
#line 1133 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "\n");
                          }
#line 1129 "hlds_out_goal.m"
                        }
#line 1128 "hlds_out_goal.m"
                      else
#line 1124 "hlds_out_goal.m"
                        {
#line 1124 "hlds_out_goal.m"
                          MR_Integer hlds__hlds_out__hlds_out_goal__KnownSize_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__SizeSource_37, (MR_Integer) 0)));

#line 1125 "hlds_out_goal.m"
                          {
#line 1125 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "const ");
                          }
#line 1126 "hlds_out_goal.m"
                          {
#line 1126 "hlds_out_goal.m"
                            mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__KnownSize_38);
                          }
#line 1127 "hlds_out_goal.m"
                          {
#line 1127 "hlds_out_goal.m"
                            mercury__io__write_string_3_p_0((MR_String) "\n");
                          }
#line 1124 "hlds_out_goal.m"
                        }
#line 1120 "hlds_out_goal.m"
                    }
#line 1109 "hlds_out_goal.m"
                }
#line 1141 "hlds_out_goal.m"
#line 1141 "hlds_out_goal.m"
              switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ConstructHow_24)) {
#line 1141 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1141 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 1141 "hlds_out_goal.m"
#line 1141 "hlds_out_goal.m"
                  switch (MR_unmkbody(hlds__hlds_out__hlds_out_goal__ConstructHow_24)) {
#line 1141 "hlds_out_goal.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1141 "hlds_out_goal.m"
                    case (MR_Integer) 0:
#line 1142 "hlds_out_goal.m"
                      {
#line 1143 "hlds_out_goal.m"
                        {
#line 1143 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
                        }
#line 1144 "hlds_out_goal.m"
                        {
#line 1144 "hlds_out_goal.m"
                          mercury__io__write_string_3_p_0((MR_String) "% construct statically\n");
#line 1144 "hlds_out_goal.m"
                          return;
                        }
#line 1142 "hlds_out_goal.m"
                      }
#line 1141 "hlds_out_goal.m"
                      break;
#line 1141 "hlds_out_goal.m"
                    case (MR_Integer) 1:
#line 1140 "hlds_out_goal.m"
                      {
#line 1140 "hlds_out_goal.m"
                      }
#line 1141 "hlds_out_goal.m"
                      break;
#line 1141 "hlds_out_goal.m"
                  }
#line 1141 "hlds_out_goal.m"
                  break;
#line 1141 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 1146 "hlds_out_goal.m"
                  {
#line 1146 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__CellToReuse_40 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_goal__ConstructHow_24), (MR_Integer) 1);
#line 1146 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__ReuseVar_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CellToReuse_40, (MR_Integer) 0)));
#line 1147 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal___ReuseConsIds_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CellToReuse_40, (MR_Integer) 1)));
#line 1147 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal___FieldAssigns_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CellToReuse_40, (MR_Integer) 2)));

#line 1149 "hlds_out_goal.m"
                    {
#line 1149 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
                    }
#line 1150 "hlds_out_goal.m"
                    {
#line 1150 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% reuse cell: ");
                    }
#line 1151 "hlds_out_goal.m"
                    {
#line 1151 "hlds_out_goal.m"
                      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__ReuseVar_41);
                    }
#line 1152 "hlds_out_goal.m"
                    {
#line 1152 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1152 "hlds_out_goal.m"
                      return;
                    }
#line 1146 "hlds_out_goal.m"
                  }
#line 1141 "hlds_out_goal.m"
                  break;
#line 1141 "hlds_out_goal.m"
                case (MR_Integer) 2:
#line 1154 "hlds_out_goal.m"
                  {
#line 1154 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__RegVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ConstructHow_24, (MR_Integer) 0)));

#line 1155 "hlds_out_goal.m"
                    {
#line 1155 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
                    }
#line 1156 "hlds_out_goal.m"
                    {
#line 1156 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% construct in region: ");
                    }
#line 1157 "hlds_out_goal.m"
                    {
#line 1157 "hlds_out_goal.m"
                      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__RegVar_44);
                    }
#line 1158 "hlds_out_goal.m"
                    {
#line 1158 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1158 "hlds_out_goal.m"
                      return;
                    }
#line 1154 "hlds_out_goal.m"
                  }
#line 1141 "hlds_out_goal.m"
                  break;
#line 1141 "hlds_out_goal.m"
              }
#line 1098 "hlds_out_goal.m"
            }
#line 1160 "hlds_out_goal.m"
          else
#line 1160 "hlds_out_goal.m"
            {
#line 1160 "hlds_out_goal.m"
            }
#line 1080 "hlds_out_goal.m"
        }
#line 1063 "hlds_out_goal.m"
        break;
#line 1063 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 1165 "hlds_out_goal.m"
        {
#line 1165 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__CanFail_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 4)));
#line 1165 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__CanCGC_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 5)));
#line 1165 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 0)));
#line 1165 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 1)));
#line 1165 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 2)));
#line 1165 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_160 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 3)));
#line 1165 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_161 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 0)));
#line 1166 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__V_167_167 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 1)));
#line 1166 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 2)));
#line 1166 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 3)));
#line 1166 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 4)));

#line 1167 "hlds_out_goal.m"
          {
#line 1167 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_161, (MR_Char) 71);
          }
#line 1172 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1168 "hlds_out_goal.m"
            {
#line 1168 "hlds_out_goal.m"
              {
#line 1168 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
              }
#line 1169 "hlds_out_goal.m"
              {
#line 1169 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% Compile time garbage collect: ");
              }
#line 1170 "hlds_out_goal.m"
              {
#line 1170 "hlds_out_goal.m"
                mercury__io__write_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_can_cgc_0, ((MR_Box) (hlds__hlds_out__hlds_out_goal__CanCGC_46)));
              }
#line 1171 "hlds_out_goal.m"
              {
#line 1171 "hlds_out_goal.m"
                mercury__io__nl_2_p_0();
              }
#line 1168 "hlds_out_goal.m"
            }
#line 1172 "hlds_out_goal.m"
          else
#line 1172 "hlds_out_goal.m"
            {
#line 1172 "hlds_out_goal.m"
            }
#line 1175 "hlds_out_goal.m"
          {
#line 1175 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
          }
#line 1176 "hlds_out_goal.m"
          {
#line 1176 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "% ");
          }
#line 1177 "hlds_out_goal.m"
          {
#line 1177 "hlds_out_goal.m"
            parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__Var_157);
          }
#line 1181 "hlds_out_goal.m"
#line 1181 "hlds_out_goal.m"
          switch (hlds__hlds_out__hlds_out_goal__CanFail_45) {
#line 1181 "hlds_out_goal.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1181 "hlds_out_goal.m"
            case (MR_Integer) 0:
#line 1179 "hlds_out_goal.m"
              {
#line 1180 "hlds_out_goal.m"
                {
#line 1180 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " \?= ");
                }
#line 1179 "hlds_out_goal.m"
              }
#line 1181 "hlds_out_goal.m"
              break;
#line 1181 "hlds_out_goal.m"
            case (MR_Integer) 1:
#line 1182 "hlds_out_goal.m"
              {
#line 1183 "hlds_out_goal.m"
                {
#line 1183 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " => ");
                }
#line 1182 "hlds_out_goal.m"
              }
#line 1181 "hlds_out_goal.m"
              break;
#line 1181 "hlds_out_goal.m"
          }
#line 1185 "hlds_out_goal.m"
          {
#line 1185 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_50_93_95_48_11_p_0(hlds__hlds_out__hlds_out_goal__Info_10, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__InstVarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__Indent_15, hlds__hlds_out__hlds_out_goal__ConsId_158, hlds__hlds_out__hlds_out_goal__ArgVars_159, hlds__hlds_out__hlds_out_goal__ArgModes_160);
#line 1185 "hlds_out_goal.m"
            return;
          }
#line 1165 "hlds_out_goal.m"
        }
#line 1063 "hlds_out_goal.m"
        break;
#line 1063 "hlds_out_goal.m"
      case (MR_Integer) 2:
#line 1063 "hlds_out_goal.m"
        {
#line 1063 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_171_171;
#line 1063 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__X_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 0)));
#line 1063 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Y_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 1)));

#line 1064 "hlds_out_goal.m"
          {
#line 1064 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
          }
#line 1065 "hlds_out_goal.m"
          {
#line 1065 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "% ");
          }
#line 2894 "hlds.hlds_out.hlds_out_goal.c"
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_171_171 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1066 "hlds_out_goal.m"
          {
#line 1066 "hlds_out_goal.m"
            parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_171_171, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__X_18);
          }
#line 1067 "hlds_out_goal.m"
          {
#line 1067 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) " := ");
          }
#line 1068 "hlds_out_goal.m"
          {
#line 1068 "hlds_out_goal.m"
            parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_171_171, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__Y_19);
          }
#line 1069 "hlds_out_goal.m"
          {
#line 1069 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1069 "hlds_out_goal.m"
            return;
          }
#line 1063 "hlds_out_goal.m"
        }
#line 1063 "hlds_out_goal.m"
        break;
#line 1063 "hlds_out_goal.m"
      case (MR_Integer) 3:
#line 1063 "hlds_out_goal.m"
#line 1063 "hlds_out_goal.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 0)))) {
#line 1063 "hlds_out_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1063 "hlds_out_goal.m"
          case (MR_Integer) 0:
#line 1071 "hlds_out_goal.m"
            {
#line 1071 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_172_172;
#line 1071 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__X_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 1)));
#line 1071 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Y_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 2)));

#line 1072 "hlds_out_goal.m"
              {
#line 1072 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
              }
#line 1073 "hlds_out_goal.m"
              {
#line 1073 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% ");
              }
#line 2950 "hlds.hlds_out.hlds_out_goal.c"
              hlds__hlds_out__hlds_out_goal__TypeCtorInfo_172_172 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1074 "hlds_out_goal.m"
              {
#line 1074 "hlds_out_goal.m"
                parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_172_172, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__X_155);
              }
#line 1075 "hlds_out_goal.m"
              {
#line 1075 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) " == ");
              }
#line 1076 "hlds_out_goal.m"
              {
#line 1076 "hlds_out_goal.m"
                parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_172_172, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__Y_156);
              }
#line 1077 "hlds_out_goal.m"
              {
#line 1077 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1077 "hlds_out_goal.m"
                return;
              }
#line 1071 "hlds_out_goal.m"
            }
#line 1063 "hlds_out_goal.m"
            break;
#line 1063 "hlds_out_goal.m"
          case (MR_Integer) 1:
#line 1188 "hlds_out_goal.m"
            {
#line 1188 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Mode_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 1)));
#line 1188 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__TypeInfoVars_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 3)));
#line 1188 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__CanFail_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 2)));

#line 1189 "hlds_out_goal.m"
              {
#line 1189 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
              }
#line 1190 "hlds_out_goal.m"
              {
#line 1190 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% ");
              }
#line 1194 "hlds_out_goal.m"
#line 1194 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__CanFail_162) {
#line 1194 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1194 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 1192 "hlds_out_goal.m"
                  {
#line 1193 "hlds_out_goal.m"
                    {
#line 1193 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "can_fail, ");
                    }
#line 1192 "hlds_out_goal.m"
                  }
#line 1194 "hlds_out_goal.m"
                  break;
#line 1194 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 1195 "hlds_out_goal.m"
                  {
#line 1196 "hlds_out_goal.m"
                    {
#line 1196 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "cannot_fail, ");
                    }
#line 1195 "hlds_out_goal.m"
                  }
#line 1194 "hlds_out_goal.m"
                  break;
#line 1194 "hlds_out_goal.m"
              }
#line 1198 "hlds_out_goal.m"
              {
#line 1198 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "mode: ");
              }
#line 1199 "hlds_out_goal.m"
              {
#line 1199 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_p_0(hlds__hlds_out__hlds_out_goal__Mode_47, hlds__hlds_out__hlds_out_goal__InstVarSet_13);
              }
#line 1200 "hlds_out_goal.m"
              {
#line 1200 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 1201 "hlds_out_goal.m"
              {
#line 1201 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
              }
#line 1202 "hlds_out_goal.m"
              {
#line 1202 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% type-info vars: ");
              }
#line 1203 "hlds_out_goal.m"
              {
#line 1203 "hlds_out_goal.m"
                parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__TypeInfoVars_48);
              }
#line 1204 "hlds_out_goal.m"
              {
#line 1204 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1204 "hlds_out_goal.m"
                return;
              }
#line 1188 "hlds_out_goal.m"
            }
#line 1063 "hlds_out_goal.m"
            break;
#line 1063 "hlds_out_goal.m"
        }
#line 1063 "hlds_out_goal.m"
        break;
#line 1063 "hlds_out_goal.m"
    }
#line 1063 "hlds_out_goal.m"
  }
#line 1056 "hlds_out_goal.m"
}

#line 329 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__329__1_3_p_0(
#line 329 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_334)
#line 329 "hlds_out_goal.m"
{
#line 329 "hlds_out_goal.m"
  {
#line 329 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 329 "hlds_out_goal.m"
    {
#line 329 "hlds_out_goal.m"
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_334)));
#line 329 "hlds_out_goal.m"
      return;
    }
#line 329 "hlds_out_goal.m"
  }
#line 329 "hlds_out_goal.m"
}

#line 325 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__325__1_3_p_0(
#line 325 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_330)
#line 325 "hlds_out_goal.m"
{
#line 325 "hlds_out_goal.m"
  {
#line 325 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 325 "hlds_out_goal.m"
    {
#line 325 "hlds_out_goal.m"
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_330)));
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
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_326)
#line 321 "hlds_out_goal.m"
{
#line 321 "hlds_out_goal.m"
  {
#line 321 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 321 "hlds_out_goal.m"
    {
#line 321 "hlds_out_goal.m"
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_326)));
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
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_322)
#line 317 "hlds_out_goal.m"
{
#line 317 "hlds_out_goal.m"
  {
#line 317 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 317 "hlds_out_goal.m"
    {
#line 317 "hlds_out_goal.m"
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_322)));
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
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_318)
#line 313 "hlds_out_goal.m"
{
#line 313 "hlds_out_goal.m"
  {
#line 313 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 313 "hlds_out_goal.m"
    {
#line 313 "hlds_out_goal.m"
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_318)));
#line 313 "hlds_out_goal.m"
      return;
    }
#line 313 "hlds_out_goal.m"
  }
#line 313 "hlds_out_goal.m"
}

#line 2187 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0(
#line 2187 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 2187 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8,
#line 2187 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__CompName_9,
#line 2187 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__CompState_10)
#line 2187 "hlds_out_goal.m"
{
#line 2190 "hlds_out_goal.m"
  {
#line 2190 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 2190 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_25_25;
#line 2190 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Var1_12;
#line 2190 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Var2_13;

#line 2191 "hlds_out_goal.m"
    {
#line 2191 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__CompName_9);
    }
#line 2192 "hlds_out_goal.m"
    {
#line 2192 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 2193 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__Var1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CompState_10, (MR_Integer) 0)));
#line 2193 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__Var2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CompState_10, (MR_Integer) 1)));
#line 3242 "hlds.hlds_out.hlds_out_goal.c"
    hlds__hlds_out__hlds_out_goal__TypeCtorInfo_25_25 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2194 "hlds_out_goal.m"
    {
#line 2194 "hlds_out_goal.m"
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_25_25, hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__VarNamePrint_8, hlds__hlds_out__hlds_out_goal__Var1_12);
    }
#line 2195 "hlds_out_goal.m"
    {
#line 2195 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 2196 "hlds_out_goal.m"
    {
#line 2196 "hlds_out_goal.m"
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_25_25, hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__VarNamePrint_8, hlds__hlds_out__hlds_out_goal__Var2_13);
    }
#line 2197 "hlds_out_goal.m"
    {
#line 2197 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 2197 "hlds_out_goal.m"
      return;
    }
#line 2190 "hlds_out_goal.m"
  }
#line 2187 "hlds_out_goal.m"
}

#line 2117 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_p_0(
#line 2117 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 2117 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 2117 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 2117 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 2117 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 2117 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 2117 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 2117 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
#line 2117 "hlds_out_goal.m"
{
#line 2123 "hlds_out_goal.m"
  {
#line 2123 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 2123 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ShortHand_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));

#line 2153 "hlds_out_goal.m"
#line 2153 "hlds_out_goal.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ShortHand_20)) {
#line 2153 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2153 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 2172 "hlds_out_goal.m"
        {
#line 2172 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__GoalA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 0)));
#line 2172 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__GoalB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 1)));
#line 2172 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__Indent1_36;

#line 2173 "hlds_out_goal.m"
          {
#line 2173 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2174 "hlds_out_goal.m"
          {
#line 2174 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "( % bi-implication\n");
          }
#line 2175 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Indent1_36 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2176 "hlds_out_goal.m"
          {
#line 2176 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent1_36, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__GoalA_34);
          }
#line 2178 "hlds_out_goal.m"
          {
#line 2178 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2179 "hlds_out_goal.m"
          {
#line 2179 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "<=>\n");
          }
#line 2180 "hlds_out_goal.m"
          {
#line 2180 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent1_36, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__GoalB_35);
          }
#line 2182 "hlds_out_goal.m"
          {
#line 2182 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2183 "hlds_out_goal.m"
          {
#line 2183 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 2184 "hlds_out_goal.m"
          {
#line 2184 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 2184 "hlds_out_goal.m"
            return;
          }
#line 2172 "hlds_out_goal.m"
        }
#line 2153 "hlds_out_goal.m"
        break;
#line 2153 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 2127 "hlds_out_goal.m"
        {
#line 2127 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Outer_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 1)));
#line 2127 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Inner_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 2)));
#line 2127 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__MaybeOutputVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 3)));
#line 2127 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__MainGoal_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 4)));
#line 2127 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__OrElseGoals_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 5)));
#line 2127 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__V_95_95;
#line 2126 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal___GoalType_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 0)));
#line 2126 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal___OrElseInners_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 6)));

#line 2128 "hlds_out_goal.m"
          {
#line 2128 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2129 "hlds_out_goal.m"
          {
#line 2129 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "atomic [");
          }
#line 2130 "hlds_out_goal.m"
          {
#line 2130 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, (MR_String) "outer", hlds__hlds_out__hlds_out_goal__Outer_22);
          }
#line 2132 "hlds_out_goal.m"
          {
#line 2132 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
#line 2133 "hlds_out_goal.m"
          {
#line 2133 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, (MR_String) "inner", hlds__hlds_out__hlds_out_goal__Inner_23);
          }
#line 2135 "hlds_out_goal.m"
          {
#line 2135 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
#line 2138 "hlds_out_goal.m"
          if ((hlds__hlds_out__hlds_out_goal__MaybeOutputVars_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2137 "hlds_out_goal.m"
            {
#line 2137 "hlds_out_goal.m"
            }
#line 2138 "hlds_out_goal.m"
          else
#line 2139 "hlds_out_goal.m"
            {
#line 2139 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__OutputVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeOutputVars_24, (MR_Integer) 0)));

#line 2140 "hlds_out_goal.m"
              {
#line 2140 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "vars([");
              }
#line 2141 "hlds_out_goal.m"
              {
#line 2141 "hlds_out_goal.m"
                parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__OutputVars_28);
              }
#line 2142 "hlds_out_goal.m"
              {
#line 2142 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "])");
              }
#line 2139 "hlds_out_goal.m"
            }
#line 2144 "hlds_out_goal.m"
          {
#line 2144 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "] (\n");
          }
#line 2147 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_95_95 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2146 "hlds_out_goal.m"
          {
#line 2146 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_95_95, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__MainGoal_25);
          }
#line 2148 "hlds_out_goal.m"
          {
#line 2148 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_String) "or_else\n", hlds__hlds_out__hlds_out_goal__OrElseGoals_26);
          }
#line 2150 "hlds_out_goal.m"
          {
#line 2150 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2151 "hlds_out_goal.m"
          {
#line 2151 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 2152 "hlds_out_goal.m"
          {
#line 2152 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 2152 "hlds_out_goal.m"
            return;
          }
#line 2127 "hlds_out_goal.m"
        }
#line 2153 "hlds_out_goal.m"
        break;
#line 2153 "hlds_out_goal.m"
      case (MR_Integer) 2:
#line 2154 "hlds_out_goal.m"
        {
#line 2154 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__MaybeIO_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 0)));
#line 2154 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__SubGoal_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 2)));
#line 2154 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__V_69_69;
#line 2154 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 1)));

#line 2155 "hlds_out_goal.m"
          {
#line 2155 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2156 "hlds_out_goal.m"
          {
#line 2156 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "( % try\n");
          }
#line 2163 "hlds_out_goal.m"
          if ((hlds__hlds_out__hlds_out_goal__MaybeIO_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2164 "hlds_out_goal.m"
            {
#line 2164 "hlds_out_goal.m"
            }
#line 2163 "hlds_out_goal.m"
          else
#line 2158 "hlds_out_goal.m"
            {
#line 2158 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__IOVarA_32;
#line 2158 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__IOVarB_33;
#line 2158 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeIO_29, (MR_Integer) 0)));
#line 2158 "hlds_out_goal.m"
              MR_Integer hlds__hlds_out__hlds_out_goal__V_58_58;
#line 2158 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_63_63;
#line 2158 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_65_65;

#line 2158 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__IOVarA_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_57_57, (MR_Integer) 0)));
#line 2158 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__IOVarB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_57_57, (MR_Integer) 1)));
#line 2159 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_58_58 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2159 "hlds_out_goal.m"
              {
#line 2159 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__V_58_58);
              }
#line 2160 "hlds_out_goal.m"
              {
#line 2160 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% io(");
              }
#line 2161 "hlds_out_goal.m"
              {
#line 2161 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2161 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_65_65, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__IOVarB_33));
#line 2161 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2161 "hlds_out_goal.m"
              }
#line 2161 "hlds_out_goal.m"
              {
#line 2161 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2161 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_63_63, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__IOVarA_32));
#line 2161 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_63_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_65_65));
#line 2161 "hlds_out_goal.m"
              }
#line 2161 "hlds_out_goal.m"
              {
#line 2161 "hlds_out_goal.m"
                parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_63_63);
              }
#line 2162 "hlds_out_goal.m"
              {
#line 2162 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) ")\n");
              }
#line 2158 "hlds_out_goal.m"
            }
#line 2167 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_69_69 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2166 "hlds_out_goal.m"
          {
#line 2166 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_69_69, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__SubGoal_31);
          }
#line 2168 "hlds_out_goal.m"
          {
#line 2168 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
#line 2169 "hlds_out_goal.m"
          {
#line 2169 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 2170 "hlds_out_goal.m"
          {
#line 2170 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 2170 "hlds_out_goal.m"
            return;
          }
#line 2154 "hlds_out_goal.m"
        }
#line 2153 "hlds_out_goal.m"
        break;
#line 2153 "hlds_out_goal.m"
    }
#line 2123 "hlds_out_goal.m"
  }
#line 2117 "hlds_out_goal.m"
}

#line 2101 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__maybe_add_newline_indent_4_p_0(
#line 2101 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AddCommaNewlineIndent_5,
#line 2101 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_6)
#line 2101 "hlds_out_goal.m"
{
#line 2105 "hlds_out_goal.m"
  {
#line 2105 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 2105 "hlds_out_goal.m"
#line 2105 "hlds_out_goal.m"
    switch (hlds__hlds_out__hlds_out_goal__AddCommaNewlineIndent_5) {
#line 2105 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2105 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 2105 "hlds_out_goal.m"
        {
#line 2105 "hlds_out_goal.m"
        }
#line 2105 "hlds_out_goal.m"
        break;
#line 2105 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 2107 "hlds_out_goal.m"
        {
#line 2108 "hlds_out_goal.m"
          {
#line 2108 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 2109 "hlds_out_goal.m"
          {
#line 2109 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_6);
#line 2109 "hlds_out_goal.m"
            return;
          }
#line 2107 "hlds_out_goal.m"
        }
#line 2105 "hlds_out_goal.m"
        break;
#line 2105 "hlds_out_goal.m"
    }
#line 2105 "hlds_out_goal.m"
  }
#line 2101 "hlds_out_goal.m"
}

#line 2089 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_indent_4_p_0(
#line 2089 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__AddCommaNewlineIndent_5,
#line 2089 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_6)
#line 2089 "hlds_out_goal.m"
{
#line 2094 "hlds_out_goal.m"
  {
#line 2094 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 2094 "hlds_out_goal.m"
#line 2094 "hlds_out_goal.m"
    switch (hlds__hlds_out__hlds_out_goal__AddCommaNewlineIndent_5) {
#line 2094 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2094 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 2094 "hlds_out_goal.m"
        {
#line 2094 "hlds_out_goal.m"
        }
#line 2094 "hlds_out_goal.m"
        break;
#line 2094 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 2096 "hlds_out_goal.m"
        {
#line 2097 "hlds_out_goal.m"
          {
#line 2097 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) ",\n");
          }
#line 2098 "hlds_out_goal.m"
          {
#line 2098 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_6);
#line 2098 "hlds_out_goal.m"
            return;
          }
#line 2096 "hlds_out_goal.m"
        }
#line 2094 "hlds_out_goal.m"
        break;
#line 2094 "hlds_out_goal.m"
    }
#line 2094 "hlds_out_goal.m"
  }
#line 2089 "hlds_out_goal.m"
}

#line 2078 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_6_p_0(
#line 2078 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_7,
#line 2078 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MutableVar_8,
#line 2078 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_0_13,
#line 2078 "hlds_out_goal.m"
  MR_Word * hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_14)
#line 2078 "hlds_out_goal.m"
{
#line 2082 "hlds_out_goal.m"
  {
#line 2082 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 2082 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__MutableName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MutableVar_8, (MR_Integer) 0)));
#line 2082 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__StateVarName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MutableVar_8, (MR_Integer) 1)));
#line 2082 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_18_18;
#line 2082 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_21_21;
#line 2082 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_23_23;
#line 2082 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_26_26;

#line 2105 "hlds_out_goal.m"
#line 2105 "hlds_out_goal.m"
    switch (hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_0_13) {
#line 2105 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2105 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 2105 "hlds_out_goal.m"
        {
#line 2105 "hlds_out_goal.m"
        }
#line 2105 "hlds_out_goal.m"
        break;
#line 2105 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 2107 "hlds_out_goal.m"
        {
#line 2108 "hlds_out_goal.m"
          {
#line 2108 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 2109 "hlds_out_goal.m"
          {
#line 2109 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_7);
          }
#line 2107 "hlds_out_goal.m"
        }
#line 2105 "hlds_out_goal.m"
        break;
#line 2105 "hlds_out_goal.m"
    }
#line 2085 "hlds_out_goal.m"
    {
#line 2085 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_21_21 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__MutableName_11, (MR_String) ", ");
    }
#line 2085 "hlds_out_goal.m"
    {
#line 2085 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) "% state(", hlds__hlds_out__hlds_out_goal__V_21_21);
    }
#line 2085 "hlds_out_goal.m"
    {
#line 2085 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_18_18);
    }
#line 2086 "hlds_out_goal.m"
    {
#line 2086 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_26_26 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__StateVarName_12, (MR_String) ")");
    }
#line 2086 "hlds_out_goal.m"
    {
#line 2086 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__hlds_out__hlds_out_goal__V_26_26);
    }
#line 2086 "hlds_out_goal.m"
    {
#line 2086 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_23_23);
    }
#line 2087 "hlds_out_goal.m"
    *hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_14 = (MR_Integer) 1;
#line 2082 "hlds_out_goal.m"
  }
#line 2078 "hlds_out_goal.m"
}

#line 2047 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_3(
#line 2047 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 2047 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 2047 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 2047 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3,
#line 2047 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_4,
#line 2047 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_5)
#line 2047 "hlds_out_goal.m"
{
#line 2047 "hlds_out_goal.m"
  {
#line 2047 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;
#line 2047 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_AddCommaNewlineIndent_14;

#line 2047 "hlds_out_goal.m"
    {
#line 2047 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_2), &hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_AddCommaNewlineIndent_14);
    }
#line 2047 "hlds_out_goal.m"
    *hlds__hlds_out__hlds_out_goal__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_AddCommaNewlineIndent_14));
#line 2047 "hlds_out_goal.m"
  }
#line 2047 "hlds_out_goal.m"
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
      parse_tree__parse_tree_out_clause__mercury_output_trace_runtime_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 2030 "hlds_out_goal.m"
      return;
    }
#line 2030 "hlds_out_goal.m"
  }
#line 2030 "hlds_out_goal.m"
}

#line 2018 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_1(
#line 2018 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 2018 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 2018 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 2018 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 2018 "hlds_out_goal.m"
{
#line 2018 "hlds_out_goal.m"
  {
#line 2018 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 2018 "hlds_out_goal.m"
    {
#line 2018 "hlds_out_goal.m"
      parse_tree__parse_tree_out_clause__mercury_output_trace_compiletime_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 2018 "hlds_out_goal.m"
      return;
    }
#line 2018 "hlds_out_goal.m"
  }
#line 2018 "hlds_out_goal.m"
}

#line 1857 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0(
#line 1857 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41,
#line 1857 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1857 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1857 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1857 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1857 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1857 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1857 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
#line 1857 "hlds_out_goal.m"
{
#line 1862 "hlds_out_goal.m"
  {
#line 1862 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1862 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Reason_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));
#line 1862 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 2)));
#line 1862 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122;
#line 1862 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__V_215_215;

#line 1864 "hlds_out_goal.m"
    {
#line 1864 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1870 "hlds_out_goal.m"
#line 1870 "hlds_out_goal.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Reason_20)) {
#line 1870 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1870 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 1866 "hlds_out_goal.m"
        {
#line 1866 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)));

#line 1867 "hlds_out_goal.m"
          {
#line 1867 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "some [");
          }
#line 1868 "hlds_out_goal.m"
          {
#line 1868 "hlds_out_goal.m"
            parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Vars_22);
          }
#line 1869 "hlds_out_goal.m"
          {
#line 1869 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "] (\n");
          }
#line 1866 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
#line 1866 "hlds_out_goal.m"
        }
#line 1870 "hlds_out_goal.m"
        break;
#line 1870 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 1884 "hlds_out_goal.m"
        {
#line 1884 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Kind_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));
#line 1884 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Vars_223 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)));

#line 1888 "hlds_out_goal.m"
#line 1888 "hlds_out_goal.m"
          switch (hlds__hlds_out__hlds_out_goal__Kind_24) {
#line 1888 "hlds_out_goal.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1888 "hlds_out_goal.m"
            case (MR_Integer) 1:
#line 1889 "hlds_out_goal.m"
              {
#line 1890 "hlds_out_goal.m"
                {
#line 1890 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "promise_equivalent_solution_sets");
                }
#line 1889 "hlds_out_goal.m"
              }
#line 1888 "hlds_out_goal.m"
              break;
#line 1888 "hlds_out_goal.m"
            case (MR_Integer) 2:
#line 1892 "hlds_out_goal.m"
              {
#line 1893 "hlds_out_goal.m"
                {
#line 1893 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "arbitrary");
                }
#line 1892 "hlds_out_goal.m"
              }
#line 1888 "hlds_out_goal.m"
              break;
#line 1888 "hlds_out_goal.m"
            case (MR_Integer) 0:
#line 1886 "hlds_out_goal.m"
              {
#line 1887 "hlds_out_goal.m"
                {
#line 1887 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "promise_equivalent_solutions");
                }
#line 1886 "hlds_out_goal.m"
              }
#line 1888 "hlds_out_goal.m"
              break;
#line 1888 "hlds_out_goal.m"
          }
#line 1895 "hlds_out_goal.m"
          {
#line 1895 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) " [");
          }
#line 1896 "hlds_out_goal.m"
          {
#line 1896 "hlds_out_goal.m"
            parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Vars_223);
          }
#line 1897 "hlds_out_goal.m"
          {
#line 1897 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "] (\n");
          }
#line 1884 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
#line 1884 "hlds_out_goal.m"
        }
#line 1870 "hlds_out_goal.m"
        break;
#line 1870 "hlds_out_goal.m"
      case (MR_Integer) 2:
#line 1871 "hlds_out_goal.m"
        {
#line 1871 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Purity_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)));

#line 1875 "hlds_out_goal.m"
#line 1875 "hlds_out_goal.m"
          switch (hlds__hlds_out__hlds_out_goal__Purity_23) {
#line 1875 "hlds_out_goal.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1875 "hlds_out_goal.m"
            case (MR_Integer) 2:
#line 1879 "hlds_out_goal.m"
              {
#line 1880 "hlds_out_goal.m"
                {
#line 1880 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "promise_impure (");
                }
#line 1879 "hlds_out_goal.m"
              }
#line 1875 "hlds_out_goal.m"
              break;
#line 1875 "hlds_out_goal.m"
            case (MR_Integer) 0:
#line 1873 "hlds_out_goal.m"
              {
#line 1874 "hlds_out_goal.m"
                {
#line 1874 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "promise_pure (");
                }
#line 1873 "hlds_out_goal.m"
              }
#line 1875 "hlds_out_goal.m"
              break;
#line 1875 "hlds_out_goal.m"
            case (MR_Integer) 1:
#line 1876 "hlds_out_goal.m"
              {
#line 1877 "hlds_out_goal.m"
                {
#line 1877 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "promise_semipure (");
                }
#line 1876 "hlds_out_goal.m"
              }
#line 1875 "hlds_out_goal.m"
              break;
#line 1875 "hlds_out_goal.m"
          }
#line 1882 "hlds_out_goal.m"
          {
#line 1882 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 1871 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
#line 1871 "hlds_out_goal.m"
        }
#line 1870 "hlds_out_goal.m"
        break;
#line 1870 "hlds_out_goal.m"
      case (MR_Integer) 3:
#line 1870 "hlds_out_goal.m"
#line 1870 "hlds_out_goal.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)))) {
#line 1870 "hlds_out_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1870 "hlds_out_goal.m"
          case (MR_Integer) 0:
#line 1899 "hlds_out_goal.m"
            {
#line 1899 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Detism_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

#line 1903 "hlds_out_goal.m"
#line 1903 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__Detism_25) {
#line 1903 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1903 "hlds_out_goal.m"
                case (MR_Integer) 4:
#line 1913 "hlds_out_goal.m"
                  {
#line 1914 "hlds_out_goal.m"
                    {
#line 1914 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_cc_multi");
                    }
#line 1913 "hlds_out_goal.m"
                  }
#line 1903 "hlds_out_goal.m"
                  break;
#line 1903 "hlds_out_goal.m"
                case (MR_Integer) 5:
#line 1916 "hlds_out_goal.m"
                  {
#line 1917 "hlds_out_goal.m"
                    {
#line 1917 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_cc_nondet");
                    }
#line 1916 "hlds_out_goal.m"
                  }
#line 1903 "hlds_out_goal.m"
                  break;
#line 1903 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 1901 "hlds_out_goal.m"
                  {
#line 1902 "hlds_out_goal.m"
                    {
#line 1902 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_det");
                    }
#line 1901 "hlds_out_goal.m"
                  }
#line 1903 "hlds_out_goal.m"
                  break;
#line 1903 "hlds_out_goal.m"
                case (MR_Integer) 6:
#line 1922 "hlds_out_goal.m"
                  {
#line 1923 "hlds_out_goal.m"
                    {
#line 1923 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_erroneous");
                    }
#line 1922 "hlds_out_goal.m"
                  }
#line 1903 "hlds_out_goal.m"
                  break;
#line 1903 "hlds_out_goal.m"
                case (MR_Integer) 7:
#line 1919 "hlds_out_goal.m"
                  {
#line 1920 "hlds_out_goal.m"
                    {
#line 1920 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_failure");
                    }
#line 1919 "hlds_out_goal.m"
                  }
#line 1903 "hlds_out_goal.m"
                  break;
#line 1903 "hlds_out_goal.m"
                case (MR_Integer) 2:
#line 1910 "hlds_out_goal.m"
                  {
#line 1911 "hlds_out_goal.m"
                    {
#line 1911 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_multi");
                    }
#line 1910 "hlds_out_goal.m"
                  }
#line 1903 "hlds_out_goal.m"
                  break;
#line 1903 "hlds_out_goal.m"
                case (MR_Integer) 3:
#line 1907 "hlds_out_goal.m"
                  {
#line 1908 "hlds_out_goal.m"
                    {
#line 1908 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_nondet");
                    }
#line 1907 "hlds_out_goal.m"
                  }
#line 1903 "hlds_out_goal.m"
                  break;
#line 1903 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 1904 "hlds_out_goal.m"
                  {
#line 1905 "hlds_out_goal.m"
                    {
#line 1905 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_semidet");
                    }
#line 1904 "hlds_out_goal.m"
                  }
#line 1903 "hlds_out_goal.m"
                  break;
#line 1903 "hlds_out_goal.m"
              }
#line 1925 "hlds_out_goal.m"
              {
#line 1925 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) " (\n");
              }
#line 1899 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
#line 1899 "hlds_out_goal.m"
            }
#line 1870 "hlds_out_goal.m"
            break;
#line 1870 "hlds_out_goal.m"
          case (MR_Integer) 1:
#line 1927 "hlds_out_goal.m"
            {
#line 1927 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

#line 1928 "hlds_out_goal.m"
              {
#line 1928 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "require_complete_switch [");
              }
#line 1929 "hlds_out_goal.m"
              {
#line 1929 "hlds_out_goal.m"
                parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Var_26);
              }
#line 1930 "hlds_out_goal.m"
              {
#line 1930 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "] (\n");
              }
#line 1927 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
#line 1927 "hlds_out_goal.m"
            }
#line 1870 "hlds_out_goal.m"
            break;
#line 1870 "hlds_out_goal.m"
          case (MR_Integer) 2:
#line 1932 "hlds_out_goal.m"
            {
#line 1932 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Detism_224 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 2)));
#line 1932 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Var_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

#line 1936 "hlds_out_goal.m"
#line 1936 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__Detism_224) {
#line 1936 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1936 "hlds_out_goal.m"
                case (MR_Integer) 4:
#line 1946 "hlds_out_goal.m"
                  {
#line 1947 "hlds_out_goal.m"
                    {
#line 1947 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_multi");
                    }
#line 1946 "hlds_out_goal.m"
                  }
#line 1936 "hlds_out_goal.m"
                  break;
#line 1936 "hlds_out_goal.m"
                case (MR_Integer) 5:
#line 1949 "hlds_out_goal.m"
                  {
#line 1950 "hlds_out_goal.m"
                    {
#line 1950 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_nondet");
                    }
#line 1949 "hlds_out_goal.m"
                  }
#line 1936 "hlds_out_goal.m"
                  break;
#line 1936 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 1934 "hlds_out_goal.m"
                  {
#line 1935 "hlds_out_goal.m"
                    {
#line 1935 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_det");
                    }
#line 1934 "hlds_out_goal.m"
                  }
#line 1936 "hlds_out_goal.m"
                  break;
#line 1936 "hlds_out_goal.m"
                case (MR_Integer) 6:
#line 1955 "hlds_out_goal.m"
                  {
#line 1956 "hlds_out_goal.m"
                    {
#line 1956 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_erroneous");
                    }
#line 1955 "hlds_out_goal.m"
                  }
#line 1936 "hlds_out_goal.m"
                  break;
#line 1936 "hlds_out_goal.m"
                case (MR_Integer) 7:
#line 1952 "hlds_out_goal.m"
                  {
#line 1953 "hlds_out_goal.m"
                    {
#line 1953 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_failure");
                    }
#line 1952 "hlds_out_goal.m"
                  }
#line 1936 "hlds_out_goal.m"
                  break;
#line 1936 "hlds_out_goal.m"
                case (MR_Integer) 2:
#line 1943 "hlds_out_goal.m"
                  {
#line 1944 "hlds_out_goal.m"
                    {
#line 1944 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_multi");
                    }
#line 1943 "hlds_out_goal.m"
                  }
#line 1936 "hlds_out_goal.m"
                  break;
#line 1936 "hlds_out_goal.m"
                case (MR_Integer) 3:
#line 1940 "hlds_out_goal.m"
                  {
#line 1941 "hlds_out_goal.m"
                    {
#line 1941 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_nondet");
                    }
#line 1940 "hlds_out_goal.m"
                  }
#line 1936 "hlds_out_goal.m"
                  break;
#line 1936 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 1937 "hlds_out_goal.m"
                  {
#line 1938 "hlds_out_goal.m"
                    {
#line 1938 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_semidet");
                    }
#line 1937 "hlds_out_goal.m"
                  }
#line 1936 "hlds_out_goal.m"
                  break;
#line 1936 "hlds_out_goal.m"
              }
#line 1958 "hlds_out_goal.m"
              {
#line 1958 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) " [");
              }
#line 1959 "hlds_out_goal.m"
              {
#line 1959 "hlds_out_goal.m"
                parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Var_225);
              }
#line 1960 "hlds_out_goal.m"
              {
#line 1960 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "] (\n");
              }
#line 1932 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
#line 1932 "hlds_out_goal.m"
            }
#line 1870 "hlds_out_goal.m"
            break;
#line 1870 "hlds_out_goal.m"
          case (MR_Integer) 3:
#line 1870 "hlds_out_goal.m"
            {
#line 1870 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

#line 1870 "hlds_out_goal.m"
#line 1870 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__V_261_261) {
#line 1870 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1870 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 1977 "hlds_out_goal.m"
                  {
#line 1978 "hlds_out_goal.m"
                    {
#line 1978 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(\n");
                    }
#line 1979 "hlds_out_goal.m"
                    {
#line 1979 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1980 "hlds_out_goal.m"
                    {
#line 1980 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% commit(dont_force_pruning)\n");
                    }
#line 1977 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
#line 1977 "hlds_out_goal.m"
                  }
#line 1870 "hlds_out_goal.m"
                  break;
#line 1870 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 1972 "hlds_out_goal.m"
                  {
#line 1973 "hlds_out_goal.m"
                    {
#line 1973 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(\n");
                    }
#line 1974 "hlds_out_goal.m"
                    {
#line 1974 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1975 "hlds_out_goal.m"
                    {
#line 1975 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% commit(force_pruning)\n");
                    }
#line 1972 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
#line 1972 "hlds_out_goal.m"
                  }
#line 1870 "hlds_out_goal.m"
                  break;
#line 1870 "hlds_out_goal.m"
              }
#line 1870 "hlds_out_goal.m"
            }
#line 1870 "hlds_out_goal.m"
            break;
#line 1870 "hlds_out_goal.m"
          case (MR_Integer) 4:
#line 1870 "hlds_out_goal.m"
            {
#line 1870 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

#line 1870 "hlds_out_goal.m"
#line 1870 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__V_260_260) {
#line 1870 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1870 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 1967 "hlds_out_goal.m"
                  {
#line 1968 "hlds_out_goal.m"
                    {
#line 1968 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(\n");
                    }
#line 1969 "hlds_out_goal.m"
                    {
#line 1969 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1970 "hlds_out_goal.m"
                    {
#line 1970 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% barrier(not_removable)\n");
                    }
#line 1967 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
#line 1967 "hlds_out_goal.m"
                  }
#line 1870 "hlds_out_goal.m"
                  break;
#line 1870 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 1962 "hlds_out_goal.m"
                  {
#line 1963 "hlds_out_goal.m"
                    {
#line 1963 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(\n");
                    }
#line 1964 "hlds_out_goal.m"
                    {
#line 1964 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
#line 1965 "hlds_out_goal.m"
                    {
#line 1965 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "% barrier(removable)\n");
                    }
#line 1962 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
#line 1962 "hlds_out_goal.m"
                  }
#line 1870 "hlds_out_goal.m"
                  break;
#line 1870 "hlds_out_goal.m"
              }
#line 1870 "hlds_out_goal.m"
            }
#line 1870 "hlds_out_goal.m"
            break;
#line 1870 "hlds_out_goal.m"
          case (MR_Integer) 5:
#line 1982 "hlds_out_goal.m"
            {
#line 1982 "hlds_out_goal.m"
              MR_String hlds__hlds_out__hlds_out_goal__DumpOptionsBackup_27;
#line 1982 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Kind_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 2)));
#line 1982 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));
#line 1982 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_229_229;
#line 1982 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_230_230;
#line 1982 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_231_231;
#line 2006 "hlds_out_goal.m"
              MR_String hlds__hlds_out__hlds_out_goal__V_228_228;

#line 1983 "hlds_out_goal.m"
              {
#line 1983 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "(\n");
              }
#line 1984 "hlds_out_goal.m"
              {
#line 1984 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1985 "hlds_out_goal.m"
              {
#line 1985 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% from_ground_term [");
              }
#line 1986 "hlds_out_goal.m"
              {
#line 1986 "hlds_out_goal.m"
                parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Var_227);
              }
#line 1987 "hlds_out_goal.m"
              {
#line 1987 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
#line 1991 "hlds_out_goal.m"
#line 1991 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__Kind_226) {
#line 1991 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1991 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 1992 "hlds_out_goal.m"
                  {
#line 1993 "hlds_out_goal.m"
                    {
#line 1993 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "construct");
                    }
#line 1992 "hlds_out_goal.m"
                  }
#line 1991 "hlds_out_goal.m"
                  break;
#line 1991 "hlds_out_goal.m"
                case (MR_Integer) 2:
#line 1995 "hlds_out_goal.m"
                  {
#line 1996 "hlds_out_goal.m"
                    {
#line 1996 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "deconstruct");
                    }
#line 1995 "hlds_out_goal.m"
                  }
#line 1991 "hlds_out_goal.m"
                  break;
#line 1991 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 1989 "hlds_out_goal.m"
                  {
#line 1990 "hlds_out_goal.m"
                    {
#line 1990 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "initial");
                    }
#line 1989 "hlds_out_goal.m"
                  }
#line 1991 "hlds_out_goal.m"
                  break;
#line 1991 "hlds_out_goal.m"
                case (MR_Integer) 3:
#line 1998 "hlds_out_goal.m"
                  {
#line 1999 "hlds_out_goal.m"
                    {
#line 1999 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "other");
                    }
#line 1998 "hlds_out_goal.m"
                  }
#line 1991 "hlds_out_goal.m"
                  break;
#line 1991 "hlds_out_goal.m"
              }
#line 2001 "hlds_out_goal.m"
              {
#line 2001 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "]\n");
              }
#line 2006 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_228_228 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 2006 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__DumpOptionsBackup_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 2006 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 2006 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)));
#line 2006 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41, (MR_Integer) 4)));
#line 2007 "hlds_out_goal.m"
              {
#line 2007 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2007 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__DumpOptionsBackup_27));
#line 2007 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__DumpOptionsBackup_27));
#line 2007 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_229_229));
#line 2007 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_230_230));
#line 2007 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_231_231));
#line 2007 "hlds_out_goal.m"
              }
#line 1982 "hlds_out_goal.m"
            }
#line 1870 "hlds_out_goal.m"
            break;
#line 1870 "hlds_out_goal.m"
          case (MR_Integer) 6:
#line 2010 "hlds_out_goal.m"
            {
#line 2010 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__MaybeCompileTime_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));
#line 2010 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__MaybeRunTime_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 2)));
#line 2010 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__MaybeIO_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 3)));
#line 2010 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__MutableVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 4)));
#line 2010 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__QuantVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 5)));
#line 2010 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_68_68;
#line 2010 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_78_78;
#line 2010 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_87_87;
#line 2010 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_88_88;
#line 2010 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_89_89;
#line 2010 "hlds_out_goal.m"
              MR_Integer hlds__hlds_out__hlds_out_goal__V_91_91;
#line 2010 "hlds_out_goal.m"
              MR_Integer hlds__hlds_out__hlds_out_goal__V_93_93;
#line 2047 "hlds_out_goal.m"
              MR_Box hlds__hlds_out__hlds_out_goal__conv2_STATE_VARIABLE_AddCommaNewlineIndent_89_89;
#line 2047 "hlds_out_goal.m"
              MR_Box hlds__hlds_out__hlds_out_goal__conv1_STATE_VARIABLE_IO_90_90;

#line 2011 "hlds_out_goal.m"
              {
#line 2011 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "trace [\n");
              }
#line 2022 "hlds_out_goal.m"
              if ((hlds__hlds_out__hlds_out_goal__MaybeCompileTime_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2023 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_68_68 = (MR_Integer) 0;
#line 2022 "hlds_out_goal.m"
              else
#line 2015 "hlds_out_goal.m"
                {
#line 2015 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__CompileTime_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeCompileTime_28, (MR_Integer) 0)));
#line 2015 "hlds_out_goal.m"
                  MR_Integer hlds__hlds_out__hlds_out_goal__V_59_59 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);

#line 2016 "hlds_out_goal.m"
                  {
#line 2016 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__V_59_59);
                  }
#line 2017 "hlds_out_goal.m"
                  {
#line 2017 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "compile_time(");
                  }
#line 2018 "hlds_out_goal.m"
                  {
#line 2018 "hlds_out_goal.m"
                    parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[8], hlds__hlds_out__hlds_out_goal__CompileTime_34);
                  }
#line 2020 "hlds_out_goal.m"
                  {
#line 2020 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 2021 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_68_68 = (MR_Integer) 1;
#line 2015 "hlds_out_goal.m"
                }
#line 2034 "hlds_out_goal.m"
              if ((hlds__hlds_out__hlds_out_goal__MaybeRunTime_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2035 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_78_78 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_68_68;
#line 2034 "hlds_out_goal.m"
              else
#line 2026 "hlds_out_goal.m"
                {
#line 2026 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__RunTime_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeRunTime_29, (MR_Integer) 0)));
#line 2026 "hlds_out_goal.m"
                  MR_Integer hlds__hlds_out__hlds_out_goal__V_69_69 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);

#line 2027 "hlds_out_goal.m"
                  {
#line 2027 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_indent_4_p_0(hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_68_68, hlds__hlds_out__hlds_out_goal__V_69_69);
                  }
#line 2029 "hlds_out_goal.m"
                  {
#line 2029 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "runtime(");
                  }
#line 2030 "hlds_out_goal.m"
                  {
#line 2030 "hlds_out_goal.m"
                    parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[9], hlds__hlds_out__hlds_out_goal__RunTime_35);
                  }
#line 2032 "hlds_out_goal.m"
                  {
#line 2032 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 2033 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_78_78 = (MR_Integer) 1;
#line 2026 "hlds_out_goal.m"
                }
#line 2043 "hlds_out_goal.m"
              if ((hlds__hlds_out__hlds_out_goal__MaybeIO_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2044 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_87_87 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_78_78;
#line 2043 "hlds_out_goal.m"
              else
#line 2038 "hlds_out_goal.m"
                {
#line 2038 "hlds_out_goal.m"
                  MR_String hlds__hlds_out__hlds_out_goal__IOStateVarName_36 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeIO_30, (MR_Integer) 0)));
#line 2038 "hlds_out_goal.m"
                  MR_Integer hlds__hlds_out__hlds_out_goal__V_79_79 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2038 "hlds_out_goal.m"
                  MR_String hlds__hlds_out__hlds_out_goal__V_82_82;
#line 2038 "hlds_out_goal.m"
                  MR_String hlds__hlds_out__hlds_out_goal__V_85_85;

#line 2039 "hlds_out_goal.m"
                  {
#line 2039 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__maybe_add_newline_indent_4_p_0(hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_78_78, hlds__hlds_out__hlds_out_goal__V_79_79);
                  }
#line 2041 "hlds_out_goal.m"
                  {
#line 2041 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__V_85_85 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__IOStateVarName_36, (MR_String) ")");
                  }
#line 2041 "hlds_out_goal.m"
                  {
#line 2041 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__V_82_82 = mercury__string__f_43_43_2_f_0((MR_String) "% io(!", hlds__hlds_out__hlds_out_goal__V_85_85);
                  }
#line 2041 "hlds_out_goal.m"
                  {
#line 2041 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_82_82);
                  }
#line 2042 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_87_87 = (MR_Integer) 1;
#line 2038 "hlds_out_goal.m"
                }
#line 2047 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_91_91 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2047 "hlds_out_goal.m"
              {
#line 2047 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2047 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_88_88, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]));
#line 2047 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_88_88, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_3));
#line 2047 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_88_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2047 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_88_88, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_91_91));
#line 2047 "hlds_out_goal.m"
              }
#line 2047 "hlds_out_goal.m"
              {
#line 2047 "hlds_out_goal.m"
                mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_goal__V_88_88, hlds__hlds_out__hlds_out_goal__MutableVars_31, ((MR_Box) (hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_87_87)), &hlds__hlds_out__hlds_out_goal__conv2_STATE_VARIABLE_AddCommaNewlineIndent_89_89, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_goal__conv1_STATE_VARIABLE_IO_90_90);
              }
#line 2047 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_89_89 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv2_STATE_VARIABLE_AddCommaNewlineIndent_89_89);
#line 2051 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_93_93 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2050 "hlds_out_goal.m"
              {
#line 2050 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__maybe_add_newline_indent_4_p_0(hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_89_89, hlds__hlds_out__hlds_out_goal__V_93_93);
              }
#line 2052 "hlds_out_goal.m"
              {
#line 2052 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% quantified vars [");
              }
#line 2053 "hlds_out_goal.m"
              {
#line 2053 "hlds_out_goal.m"
                parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__QuantVars_32);
              }
#line 2054 "hlds_out_goal.m"
              {
#line 2054 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
#line 2056 "hlds_out_goal.m"
              {
#line 2056 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__maybe_add_newline_indent_4_p_0(hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_89_89, hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 2057 "hlds_out_goal.m"
              {
#line 2057 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "] (\n");
              }
#line 2010 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
#line 2010 "hlds_out_goal.m"
            }
#line 1870 "hlds_out_goal.m"
            break;
#line 1870 "hlds_out_goal.m"
          case (MR_Integer) 7:
#line 2060 "hlds_out_goal.m"
            {
#line 2060 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__LCVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));
#line 2060 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__LCSVar_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 2)));
#line 2060 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__UseParentStack_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 3)));
#line 2060 "hlds_out_goal.m"
              MR_String hlds__hlds_out__hlds_out_goal__UseParentStackStr_40;
#line 2060 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_50_50;
#line 2060 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_52_52;
#line 2060 "hlds_out_goal.m"
              MR_String hlds__hlds_out__hlds_out_goal__V_265_265;

#line 2064 "hlds_out_goal.m"
#line 2064 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__UseParentStack_39) {
#line 2064 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 2064 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 2065 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__UseParentStackStr_40 = (MR_String) "using_child_stack";
#line 2064 "hlds_out_goal.m"
                  break;
#line 2064 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 2062 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__UseParentStackStr_40 = (MR_String) "using_parent_stack_frame";
#line 2064 "hlds_out_goal.m"
                  break;
#line 2064 "hlds_out_goal.m"
              }
#line 2068 "hlds_out_goal.m"
              {
#line 2068 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "loop_control_spawn_off_");
              }
#line 2068 "hlds_out_goal.m"
              {
#line 2068 "hlds_out_goal.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_4[0], hlds__hlds_out__hlds_out_goal__UseParentStackStr_40, &hlds__hlds_out__hlds_out_goal__V_265_265);
              }
#line 2068 "hlds_out_goal.m"
              {
#line 2068 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_265_265);
              }
#line 2068 "hlds_out_goal.m"
              {
#line 2068 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 2069 "hlds_out_goal.m"
              {
#line 2069 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2069 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_52_52, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__LCSVar_38));
#line 2069 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2069 "hlds_out_goal.m"
              }
#line 2069 "hlds_out_goal.m"
              {
#line 2069 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2069 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_50_50, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__LCVar_37));
#line 2069 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_50_50, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_52_52));
#line 2069 "hlds_out_goal.m"
              }
#line 2069 "hlds_out_goal.m"
              {
#line 2069 "hlds_out_goal.m"
                parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_50_50);
              }
#line 2070 "hlds_out_goal.m"
              {
#line 2070 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) ") (\n");
              }
#line 2060 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
#line 2060 "hlds_out_goal.m"
            }
#line 1870 "hlds_out_goal.m"
            break;
#line 1870 "hlds_out_goal.m"
        }
#line 1870 "hlds_out_goal.m"
        break;
#line 1870 "hlds_out_goal.m"
    }
#line 2073 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_215_215 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 2072 "hlds_out_goal.m"
    {
#line 2072 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_215_215, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_21);
    }
#line 2074 "hlds_out_goal.m"
    {
#line 2074 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 2075 "hlds_out_goal.m"
    {
#line 2075 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 2076 "hlds_out_goal.m"
    {
#line 2076 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 2076 "hlds_out_goal.m"
      return;
    }
#line 1862 "hlds_out_goal.m"
  }
#line 1857 "hlds_out_goal.m"
}

#line 1812 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_p_0(
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1812 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1812 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1812 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
#line 1812 "hlds_out_goal.m"
{
#line 1817 "hlds_out_goal.m"
  {
#line 1817 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1817 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Cond_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 2)));
#line 1817 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Then_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 3)));
#line 1817 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Else_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 4)));
#line 1817 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__Indent1_24;
#line 1817 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_25;
#line 1817 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__ElseIndent_31;
#line 1818 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));
#line 1832 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_58_58;
#line 1832 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_59_59;
#line 1832 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_60_60;
#line 1832 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_61_61;
#line 1834 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_51_51;
#line 1835 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_30_30;
#line 1835 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_26_26;
#line 1835 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_27_27;
#line 1835 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_28_28;
#line 1835 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_29_29;

#line 1819 "hlds_out_goal.m"
    {
#line 1819 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1820 "hlds_out_goal.m"
    {
#line 1820 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "(if");
    }
#line 1822 "hlds_out_goal.m"
    {
#line 1822 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1823 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__Indent1_24 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1824 "hlds_out_goal.m"
    {
#line 1824 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent1_24, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Cond_21);
    }
#line 1826 "hlds_out_goal.m"
    {
#line 1826 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1827 "hlds_out_goal.m"
    {
#line 1827 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "then\n");
    }
#line 1828 "hlds_out_goal.m"
    {
#line 1828 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent1_24, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Then_22);
    }
#line 1830 "hlds_out_goal.m"
    {
#line 1830 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1831 "hlds_out_goal.m"
    {
#line 1831 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "else\n");
    }
#line 1832 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__DumpOptions_25 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 1832 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 1832 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 1832 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 1832 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));
#line 1834 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__succeeded = (strcmp(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_String) "") == 0);
#line 1834 "hlds_out_goal.m"
    hlds__hlds_out__hlds_out_goal__succeeded = !(hlds__hlds_out__hlds_out_goal__succeeded);
#line 1834 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1834 "hlds_out_goal.m"
      {
#line 1835 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Else_23, (MR_Integer) 0)));
#line 1835 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Else_23, (MR_Integer) 1)));
#line 1835 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__V_51_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_51_51, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1835 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1835 "hlds_out_goal.m"
          {
#line 1835 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_51_51, (MR_Integer) 1)));
#line 1835 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_51_51, (MR_Integer) 2)));
#line 1835 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_51_51, (MR_Integer) 3)));
#line 1835 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_51_51, (MR_Integer) 4)));
#line 1835 "hlds_out_goal.m"
          }
#line 1834 "hlds_out_goal.m"
      }
#line 1838 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1837 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__ElseIndent_31 = hlds__hlds_out__hlds_out_goal__Indent_16;
#line 1838 "hlds_out_goal.m"
    else
#line 1839 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__ElseIndent_31 = hlds__hlds_out__hlds_out_goal__Indent1_24;
#line 1841 "hlds_out_goal.m"
    {
#line 1841 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__ElseIndent_31, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Else_23);
    }
#line 1843 "hlds_out_goal.m"
    {
#line 1843 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1844 "hlds_out_goal.m"
    {
#line 1844 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 1845 "hlds_out_goal.m"
    {
#line 1845 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1845 "hlds_out_goal.m"
      return;
    }
#line 1817 "hlds_out_goal.m"
  }
#line 1812 "hlds_out_goal.m"
}

#line 1792 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_negation_10_p_0(
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1792 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1792 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1792 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
#line 1792 "hlds_out_goal.m"
{
#line 1797 "hlds_out_goal.m"
  {
#line 1797 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1797 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Goal_20 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_18), (MR_Integer) 0);
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
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_26_26, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_20);
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
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1745 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Var_17,
#line 1745 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Case_18)
#line 1745 "hlds_out_goal.m"
{
#line 1750 "hlds_out_goal.m"
  {
#line 1750 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1750 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MainConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Case_18, (MR_Integer) 0)));
#line 1750 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__OtherConsIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Case_18, (MR_Integer) 1)));
#line 1750 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Case_18, (MR_Integer) 2)));
#line 1750 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_31_31;
#line 1757 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_IO_34_34;

#line 1752 "hlds_out_goal.m"
    {
#line 1752 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1753 "hlds_out_goal.m"
    {
#line 1753 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 1754 "hlds_out_goal.m"
    {
#line 1754 "hlds_out_goal.m"
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Var_17);
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
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_22);
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
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1727 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Var_17,
#line 1727 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__CasesList_18)
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
        if ((hlds__hlds_out__hlds_out_goal__CasesList_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1742 "hlds_out_goal.m"
          {
#line 1742 "hlds_out_goal.m"
          }
#line 1734 "hlds_out_goal.m"
        else
#line 1734 "hlds_out_goal.m"
          {
#line 1734 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Case_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__CasesList_18, (MR_Integer) 0)));
#line 1734 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Cases_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__CasesList_18, (MR_Integer) 1)));
#line 1734 "hlds_out_goal.m"
            MR_Integer hlds__hlds_out__hlds_out_goal__V_27_27;

#line 1735 "hlds_out_goal.m"
            {
#line 1735 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 1736 "hlds_out_goal.m"
            {
#line 1736 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
#line 1738 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_27_27 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1737 "hlds_out_goal.m"
            {
#line 1737 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_case_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_27_27, hlds__hlds_out__hlds_out_goal__Var_17, hlds__hlds_out__hlds_out_goal__Case_20);
            }
#line 1739 "hlds_out_goal.m"
            /* direct tailcall eliminated */
#line 1739 "hlds_out_goal.m"
            {
#line 1739 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__CasesList__tmp_copy_18 = hlds__hlds_out__hlds_out_goal__Cases_21;

#line 1739 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__CasesList_18 = hlds__hlds_out__hlds_out_goal__CasesList__tmp_copy_18;
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

#line 1698 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0(
#line 1698 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1698 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1698 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1698 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1698 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1698 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1698 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1698 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
#line 1698 "hlds_out_goal.m"
{
#line 1703 "hlds_out_goal.m"
  {
#line 1703 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1703 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));
#line 1703 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__CanFail_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 2)));
#line 1703 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__CasesList_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 3)));
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
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Var_20);
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
          hlds__hlds_out__hlds_out_goal__write_case_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent1_23, hlds__hlds_out__hlds_out_goal__Var_20, hlds__hlds_out__hlds_out_goal__Case_24);
        }
#line 1716 "hlds_out_goal.m"
        {
#line 1716 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_cases_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Var_20, hlds__hlds_out__hlds_out_goal__Cases_25);
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
#line 1698 "hlds_out_goal.m"
}

#line 1669 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_disj_10_p_0(
#line 1669 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1669 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1669 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1669 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1669 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1669 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1669 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1669 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
#line 1669 "hlds_out_goal.m"
{
#line 1674 "hlds_out_goal.m"
  {
#line 1674 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1674 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Disjuncts_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));

#line 1676 "hlds_out_goal.m"
    {
#line 1676 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1687 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__Disjuncts_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1688 "hlds_out_goal.m"
      {
#line 1689 "hlds_out_goal.m"
        {
#line 1689 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "fail");
        }
#line 1690 "hlds_out_goal.m"
        {
#line 1690 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1690 "hlds_out_goal.m"
          return;
        }
#line 1688 "hlds_out_goal.m"
      }
#line 1687 "hlds_out_goal.m"
    else
#line 1678 "hlds_out_goal.m"
      {
#line 1678 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Disjuncts_20, (MR_Integer) 0)));
#line 1678 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Goals_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Disjuncts_20, (MR_Integer) 1)));
#line 1678 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__V_31_31;

#line 1679 "hlds_out_goal.m"
        {
#line 1679 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "( % disjunction\n");
        }
#line 1681 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__V_31_31 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1680 "hlds_out_goal.m"
        {
#line 1680 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_31_31, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_21);
        }
#line 1682 "hlds_out_goal.m"
        {
#line 1682 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_String) ";\n", hlds__hlds_out__hlds_out_goal__Goals_22);
        }
#line 1684 "hlds_out_goal.m"
        {
#line 1684 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1685 "hlds_out_goal.m"
        {
#line 1685 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 1686 "hlds_out_goal.m"
        {
#line 1686 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1686 "hlds_out_goal.m"
          return;
        }
#line 1678 "hlds_out_goal.m"
      }
#line 1674 "hlds_out_goal.m"
  }
#line 1669 "hlds_out_goal.m"
}

#line 1634 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(
#line 1634 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_13,
#line 1634 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
#line 1634 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
#line 1634 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_16,
#line 1634 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_17,
#line 1634 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_18,
#line 1634 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_19,
#line 1634 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Separator_20,
#line 1634 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goal1_21,
#line 1634 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goals1_22)
#line 1634 "hlds_out_goal.m"
{
#line 1642 "hlds_out_goal.m"
  while (MR_TRUE)
#line 1642 "hlds_out_goal.m"
    {
#line 1642 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 1642 "hlds_out_goal.m"
      {
#line 1642 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1642 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__Goals1_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1660 "hlds_out_goal.m"
          {
#line 1660 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_13, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__TypeQual_16, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Indent_18, hlds__hlds_out__hlds_out_goal__Follow_19, hlds__hlds_out__hlds_out_goal__Goal1_21);
#line 1660 "hlds_out_goal.m"
            return;
          }
#line 1642 "hlds_out_goal.m"
        else
#line 1642 "hlds_out_goal.m"
          {
#line 1642 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Goal2_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Goals1_22, (MR_Integer) 0)));
#line 1642 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Goals2_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Goals1_22, (MR_Integer) 1)));
#line 1642 "hlds_out_goal.m"
            MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_26 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 0)));
#line 1643 "hlds_out_goal.m"
            MR_String hlds__hlds_out__hlds_out_goal__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 1)));
#line 1643 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 2)));
#line 1643 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 3)));
#line 1643 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 4)));

#line 1644 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = (strcmp(hlds__hlds_out__hlds_out_goal__DumpOptions_26, (MR_String) "") == 0);
#line 1647 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1645 "hlds_out_goal.m"
              {
#line 1645 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_13, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__TypeQual_16, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Indent_18, hlds__hlds_out__hlds_out_goal__Separator_20, hlds__hlds_out__hlds_out_goal__Goal1_21);
              }
#line 1647 "hlds_out_goal.m"
            else
#line 1652 "hlds_out_goal.m"
              {
#line 1651 "hlds_out_goal.m"
                {
#line 1651 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_13, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__TypeQual_16, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Indent_18, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal1_21);
                }
#line 1653 "hlds_out_goal.m"
                {
#line 1653 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                }
#line 1654 "hlds_out_goal.m"
                {
#line 1654 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Separator_20);
                }
#line 1652 "hlds_out_goal.m"
              }
#line 1656 "hlds_out_goal.m"
            /* direct tailcall eliminated */
#line 1656 "hlds_out_goal.m"
            {
#line 1656 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Goal1__tmp_copy_21 = hlds__hlds_out__hlds_out_goal__Goal2_24;
#line 1656 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Goals1__tmp_copy_22 = hlds__hlds_out__hlds_out_goal__Goals2_25;

#line 1656 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__Goals1_22 = hlds__hlds_out__hlds_out_goal__Goals1__tmp_copy_22;
#line 1656 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__Goal1_21 = hlds__hlds_out__hlds_out_goal__Goal1__tmp_copy_21;
#line 1656 "hlds_out_goal.m"
            }
#line 1656 "hlds_out_goal.m"
            continue;
#line 1642 "hlds_out_goal.m"
          }
#line 1642 "hlds_out_goal.m"
      }
#line 1642 "hlds_out_goal.m"
      break;
#line 1642 "hlds_out_goal.m"
    }
#line 1634 "hlds_out_goal.m"
}

#line 1584 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_conj_10_p_0(
#line 1584 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1584 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1584 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1584 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1584 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1584 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1584 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1584 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
#line 1584 "hlds_out_goal.m"
{
#line 1589 "hlds_out_goal.m"
  {
#line 1589 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1589 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ConjType_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));
#line 1589 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__List_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 2)));

#line 1621 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__List_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1622 "hlds_out_goal.m"
      {
#line 1623 "hlds_out_goal.m"
        {
#line 1623 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1627 "hlds_out_goal.m"
#line 1627 "hlds_out_goal.m"
        switch (hlds__hlds_out__hlds_out_goal__ConjType_20) {
#line 1627 "hlds_out_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1627 "hlds_out_goal.m"
          case (MR_Integer) 1:
#line 1628 "hlds_out_goal.m"
            {
#line 1629 "hlds_out_goal.m"
              {
#line 1629 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "/* parallel */ true");
              }
#line 1628 "hlds_out_goal.m"
            }
#line 1627 "hlds_out_goal.m"
            break;
#line 1627 "hlds_out_goal.m"
          case (MR_Integer) 0:
#line 1625 "hlds_out_goal.m"
            {
#line 1626 "hlds_out_goal.m"
              {
#line 1626 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "true");
              }
#line 1625 "hlds_out_goal.m"
            }
#line 1627 "hlds_out_goal.m"
            break;
#line 1627 "hlds_out_goal.m"
        }
#line 1631 "hlds_out_goal.m"
        {
#line 1631 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1631 "hlds_out_goal.m"
          return;
        }
#line 1622 "hlds_out_goal.m"
      }
#line 1621 "hlds_out_goal.m"
    else
#line 1592 "hlds_out_goal.m"
      {
#line 1592 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__List_21, (MR_Integer) 0)));
#line 1592 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__List_21, (MR_Integer) 1)));

#line 1608 "hlds_out_goal.m"
#line 1608 "hlds_out_goal.m"
        switch (hlds__hlds_out__hlds_out_goal__ConjType_20) {
#line 1608 "hlds_out_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1608 "hlds_out_goal.m"
          case (MR_Integer) 1:
#line 1609 "hlds_out_goal.m"
            {
#line 1609 "hlds_out_goal.m"
              MR_Integer hlds__hlds_out__hlds_out_goal__V_36_36;

#line 1610 "hlds_out_goal.m"
              {
#line 1610 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1611 "hlds_out_goal.m"
              {
#line 1611 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "( % parallel conjunction\n");
              }
#line 1613 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_36_36 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1612 "hlds_out_goal.m"
              {
#line 1612 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_36_36, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_22);
              }
#line 1615 "hlds_out_goal.m"
              {
#line 1615 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_String) "&\n", hlds__hlds_out__hlds_out_goal__Goals_23);
              }
#line 1617 "hlds_out_goal.m"
              {
#line 1617 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 1618 "hlds_out_goal.m"
              {
#line 1618 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 1619 "hlds_out_goal.m"
              {
#line 1619 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1619 "hlds_out_goal.m"
                return;
              }
#line 1609 "hlds_out_goal.m"
            }
#line 1608 "hlds_out_goal.m"
            break;
#line 1608 "hlds_out_goal.m"
          case (MR_Integer) 0:
#line 1594 "hlds_out_goal.m"
            {
#line 1594 "hlds_out_goal.m"
              MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_24 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 1595 "hlds_out_goal.m"
              MR_String hlds__hlds_out__hlds_out_goal__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 1595 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 1595 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 1595 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));

#line 1596 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = (strcmp(hlds__hlds_out__hlds_out_goal__DumpOptions_24, (MR_String) "") == 0);
#line 1599 "hlds_out_goal.m"
              if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1597 "hlds_out_goal.m"
                {
#line 1597 "hlds_out_goal.m"
                  {
#line 1597 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, (MR_String) ",\n", hlds__hlds_out__hlds_out_goal__Goal_22, hlds__hlds_out__hlds_out_goal__Goals_23);
#line 1597 "hlds_out_goal.m"
                    return;
                  }
#line 1597 "hlds_out_goal.m"
                }
#line 1599 "hlds_out_goal.m"
              else
#line 1600 "hlds_out_goal.m"
                {
#line 1600 "hlds_out_goal.m"
                  MR_Integer hlds__hlds_out__hlds_out_goal__V_51_51;

#line 1600 "hlds_out_goal.m"
                  {
#line 1600 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                  }
#line 1601 "hlds_out_goal.m"
                  {
#line 1601 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "( % conjunction\n");
                  }
#line 1603 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_51_51 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 1602 "hlds_out_goal.m"
                  {
#line 1602 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_51_51, (MR_String) "\n", (MR_String) ",\n", hlds__hlds_out__hlds_out_goal__Goal_22, hlds__hlds_out__hlds_out_goal__Goals_23);
                  }
#line 1604 "hlds_out_goal.m"
                  {
#line 1604 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                  }
#line 1605 "hlds_out_goal.m"
                  {
#line 1605 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 1606 "hlds_out_goal.m"
                  {
#line 1606 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
#line 1606 "hlds_out_goal.m"
                    return;
                  }
#line 1600 "hlds_out_goal.m"
                }
#line 1594 "hlds_out_goal.m"
            }
#line 1608 "hlds_out_goal.m"
            break;
#line 1608 "hlds_out_goal.m"
        }
#line 1592 "hlds_out_goal.m"
      }
#line 1589 "hlds_out_goal.m"
  }
#line 1584 "hlds_out_goal.m"
}

#line 1542 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(
#line 1542 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_1,
#line 1542 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TVarSet_2,
#line 1542 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_3,
#line 1542 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__4_4)
#line 1542 "hlds_out_goal.m"
{
#line 1545 "hlds_out_goal.m"
  while (MR_TRUE)
#line 1545 "hlds_out_goal.m"
    {
#line 1545 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 1545 "hlds_out_goal.m"
      {
#line 1545 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1545 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1545 "hlds_out_goal.m"
          {
#line 1545 "hlds_out_goal.m"
          }
#line 1545 "hlds_out_goal.m"
        else
#line 1546 "hlds_out_goal.m"
          {
#line 1546 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Arg_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__4_4, (MR_Integer) 0)));
#line 1546 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__4_4, (MR_Integer) 1)));
#line 1546 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Arg_16, (MR_Integer) 0)));
#line 1546 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__MaybeNameMode_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Arg_16, (MR_Integer) 1)));
#line 1546 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Arg_16, (MR_Integer) 2)));
#line 1546 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__BoxPolicy_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Arg_16, (MR_Integer) 3)));

#line 1548 "hlds_out_goal.m"
            {
#line 1548 "hlds_out_goal.m"
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__VarNamePrint_3, hlds__hlds_out__hlds_out_goal__Var_19);
            }
#line 1560 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__MaybeNameMode_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1561 "hlds_out_goal.m"
              {
#line 1561 "hlds_out_goal.m"
              }
#line 1560 "hlds_out_goal.m"
            else
#line 1550 "hlds_out_goal.m"
              {
#line 1550 "hlds_out_goal.m"
                MR_String hlds__hlds_out__hlds_out_goal__Name_23;
#line 1550 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__Mode_24;
#line 1550 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeNameMode_20, (MR_Integer) 0)));
#line 1550 "hlds_out_goal.m"
                MR_String hlds__hlds_out__hlds_out_goal__V_31_31;
#line 1550 "hlds_out_goal.m"
                MR_String hlds__hlds_out__hlds_out_goal__V_34_34;
#line 1552 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_53_53;

#line 1550 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__Name_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_30_30, (MR_Integer) 0)));
#line 1550 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__Mode_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_30_30, (MR_Integer) 1)));
#line 1551 "hlds_out_goal.m"
                {
#line 1551 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_34_34 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__Name_23, (MR_String) "(");
                }
#line 1551 "hlds_out_goal.m"
                {
#line 1551 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_goal__V_34_34);
                }
#line 1551 "hlds_out_goal.m"
                {
#line 1551 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_31_31);
                }
#line 1552 "hlds_out_goal.m"
                {
#line 1552 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_53_53 = parse_tree__prog_mode__in_mode_0_f_0();
                }
#line 1552 "hlds_out_goal.m"
                {
#line 1552 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(hlds__hlds_out__hlds_out_goal__Mode_24, hlds__hlds_out__hlds_out_goal__V_53_53);
                }
#line 1554 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1553 "hlds_out_goal.m"
                  {
#line 1553 "hlds_out_goal.m"
                    {
#line 1553 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "in");
                    }
#line 1553 "hlds_out_goal.m"
                  }
#line 1554 "hlds_out_goal.m"
                else
#line 1556 "hlds_out_goal.m"
                  {
#line 1554 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__V_54_54;

#line 1554 "hlds_out_goal.m"
                    {
#line 1554 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__V_54_54 = parse_tree__prog_mode__out_mode_0_f_0();
                    }
#line 1554 "hlds_out_goal.m"
                    {
#line 1554 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(hlds__hlds_out__hlds_out_goal__Mode_24, hlds__hlds_out__hlds_out_goal__V_54_54);
                    }
#line 1556 "hlds_out_goal.m"
                    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1555 "hlds_out_goal.m"
                      {
#line 1555 "hlds_out_goal.m"
                        {
#line 1555 "hlds_out_goal.m"
                          mercury__io__write_string_3_p_0((MR_String) "out");
                        }
#line 1555 "hlds_out_goal.m"
                      }
#line 1556 "hlds_out_goal.m"
                    else
#line 1557 "hlds_out_goal.m"
                      {
#line 1557 "hlds_out_goal.m"
                        {
#line 1557 "hlds_out_goal.m"
                          mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, ((MR_Box) (hlds__hlds_out__hlds_out_goal__Mode_24)));
                        }
#line 1557 "hlds_out_goal.m"
                      }
#line 1556 "hlds_out_goal.m"
                  }
#line 1559 "hlds_out_goal.m"
                {
#line 1559 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
#line 1550 "hlds_out_goal.m"
              }
#line 1565 "hlds_out_goal.m"
#line 1565 "hlds_out_goal.m"
            switch (hlds__hlds_out__hlds_out_goal__BoxPolicy_22) {
#line 1565 "hlds_out_goal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1565 "hlds_out_goal.m"
              case (MR_Integer) 1:
#line 1566 "hlds_out_goal.m"
                {
#line 1567 "hlds_out_goal.m"
                  {
#line 1567 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "\044alwaysboxed");
                  }
#line 1566 "hlds_out_goal.m"
                }
#line 1565 "hlds_out_goal.m"
                break;
#line 1565 "hlds_out_goal.m"
              case (MR_Integer) 0:
#line 1564 "hlds_out_goal.m"
                {
#line 1564 "hlds_out_goal.m"
                }
#line 1565 "hlds_out_goal.m"
                break;
#line 1565 "hlds_out_goal.m"
            }
#line 1569 "hlds_out_goal.m"
            {
#line 1569 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\100");
            }
#line 1570 "hlds_out_goal.m"
            {
#line 1570 "hlds_out_goal.m"
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_goal__TVarSet_2, hlds__hlds_out__hlds_out_goal__VarNamePrint_3, hlds__hlds_out__hlds_out_goal__Type_21);
            }
#line 1573 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__Args_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1572 "hlds_out_goal.m"
              {
#line 1572 "hlds_out_goal.m"
              }
#line 1573 "hlds_out_goal.m"
            else
#line 1574 "hlds_out_goal.m"
              {
#line 1575 "hlds_out_goal.m"
                {
#line 1575 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1576 "hlds_out_goal.m"
                /* direct tailcall eliminated */
#line 1576 "hlds_out_goal.m"
                {
#line 1576 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__4__tmp_copy_4 = hlds__hlds_out__hlds_out_goal__Args_17;

#line 1576 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__HeadVar__4_4 = hlds__hlds_out__hlds_out_goal__HeadVar__4__tmp_copy_4;
#line 1576 "hlds_out_goal.m"
                }
#line 1576 "hlds_out_goal.m"
                continue;
#line 1574 "hlds_out_goal.m"
              }
#line 1546 "hlds_out_goal.m"
          }
#line 1545 "hlds_out_goal.m"
      }
#line 1545 "hlds_out_goal.m"
      break;
#line 1545 "hlds_out_goal.m"
    }
#line 1542 "hlds_out_goal.m"
}

#line 1470 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_reg_3_p_0(
#line 1470 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgReg_4)
#line 1470 "hlds_out_goal.m"
{
#line 1474 "hlds_out_goal.m"
  {
#line 1474 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1474 "hlds_out_goal.m"
#line 1474 "hlds_out_goal.m"
    switch (hlds__hlds_out__hlds_out_goal__ArgReg_4) {
#line 1474 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1474 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 1477 "hlds_out_goal.m"
        {
#line 1478 "hlds_out_goal.m"
          {
#line 1478 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "reg_f");
#line 1478 "hlds_out_goal.m"
            return;
          }
#line 1477 "hlds_out_goal.m"
        }
#line 1474 "hlds_out_goal.m"
        break;
#line 1474 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 1474 "hlds_out_goal.m"
        {
#line 1475 "hlds_out_goal.m"
          {
#line 1475 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "reg_r");
#line 1475 "hlds_out_goal.m"
            return;
          }
#line 1474 "hlds_out_goal.m"
        }
#line 1474 "hlds_out_goal.m"
        break;
#line 1474 "hlds_out_goal.m"
    }
#line 1474 "hlds_out_goal.m"
  }
#line 1470 "hlds_out_goal.m"
}

#line 1464 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0_1(
#line 1464 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 1464 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 1464 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 1464 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 1464 "hlds_out_goal.m"
{
#line 1464 "hlds_out_goal.m"
  {
#line 1464 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 1464 "hlds_out_goal.m"
    {
#line 1464 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_ho_arg_reg_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 1464 "hlds_out_goal.m"
      return;
    }
#line 1464 "hlds_out_goal.m"
  }
#line 1464 "hlds_out_goal.m"
}

#line 1456 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(
#line 1456 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_5,
#line 1456 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeArgRegs_6)
#line 1456 "hlds_out_goal.m"
{
#line 1461 "hlds_out_goal.m"
  {
#line 1461 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1461 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__MaybeArgRegs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1467 "hlds_out_goal.m"
      {
#line 1467 "hlds_out_goal.m"
      }
#line 1461 "hlds_out_goal.m"
    else
#line 1461 "hlds_out_goal.m"
      {
#line 1461 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ArgRegs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeArgRegs_6, (MR_Integer) 0)));

#line 1462 "hlds_out_goal.m"
        {
#line 1462 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_5);
        }
#line 1463 "hlds_out_goal.m"
        {
#line 1463 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% arg regs: ");
        }
#line 1464 "hlds_out_goal.m"
        {
#line 1464 "hlds_out_goal.m"
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, hlds__hlds_out__hlds_out_goal__ArgRegs_8, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[6]);
        }
#line 1465 "hlds_out_goal.m"
        {
#line 1465 "hlds_out_goal.m"
          mercury__io__nl_2_p_0();
#line 1465 "hlds_out_goal.m"
          return;
        }
#line 1461 "hlds_out_goal.m"
      }
#line 1461 "hlds_out_goal.m"
  }
#line 1456 "hlds_out_goal.m"
}

#line 1328 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_p_0(
#line 1328 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 1328 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8,
#line 1328 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__PredName_9,
#line 1328 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_10)
#line 1328 "hlds_out_goal.m"
{
#line 1333 "hlds_out_goal.m"
  {
#line 1333 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 1333 "hlds_out_goal.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PredName_9)) == (MR_mktag((MR_Integer) 1))))
#line 1333 "hlds_out_goal.m"
      {
#line 1333 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PredName_9, (MR_Integer) 0)));
#line 1333 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PredName_9, (MR_Integer) 1)));
#line 1333 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_19_19;

#line 1335 "hlds_out_goal.m"
        {
#line 1335 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1335 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_19_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Name_13));
#line 1335 "hlds_out_goal.m"
        }
#line 1334 "hlds_out_goal.m"
        {
#line 1334 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_qualified_functor_7_p_0(hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__VarNamePrint_8, hlds__hlds_out__hlds_out_goal__ModuleName_12, hlds__hlds_out__hlds_out_goal__V_19_19, hlds__hlds_out__hlds_out_goal__ArgVars_10);
#line 1334 "hlds_out_goal.m"
          return;
        }
#line 1333 "hlds_out_goal.m"
      }
#line 1333 "hlds_out_goal.m"
    else
#line 1337 "hlds_out_goal.m"
      {
#line 1337 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_17_17;
#line 1337 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__PredName_9, (MR_Integer) 0)));

#line 1339 "hlds_out_goal.m"
        {
#line 1339 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1339 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_17_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Name_21));
#line 1339 "hlds_out_goal.m"
        }
#line 1338 "hlds_out_goal.m"
        {
#line 1338 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_p_0(hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__VarNamePrint_8, (MR_Integer) 0, hlds__hlds_out__hlds_out_goal__V_17_17, hlds__hlds_out__hlds_out_goal__ArgVars_10);
#line 1338 "hlds_out_goal.m"
          return;
        }
#line 1337 "hlds_out_goal.m"
      }
#line 1333 "hlds_out_goal.m"
  }
#line 1328 "hlds_out_goal.m"
}

#line 1247 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_p_0(
#line 1247 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 1247 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 1247 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 1247 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 1247 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 1247 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 1247 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 1247 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
#line 1247 "hlds_out_goal.m"
{
#line 1253 "hlds_out_goal.m"
  {
#line 1253 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1253 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 0)));
#line 1253 "hlds_out_goal.m"
    MR_Integer hlds__hlds_out__hlds_out_goal__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));
#line 1253 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 2)));
#line 1253 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Builtin_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 3)));
#line 1253 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeUnifyContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 4)));
#line 1253 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 5)));
#line 1253 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_26 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 1253 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__NewArgVars_30;
#line 1256 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 1256 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 1256 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 1256 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));
#line 1273 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_83_83;

#line 1257 "hlds_out_goal.m"
    {
#line 1257 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_26, (MR_Char) 98);
    }
#line 1269 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1262 "hlds_out_goal.m"
#line 1262 "hlds_out_goal.m"
      switch (hlds__hlds_out__hlds_out_goal__Builtin_23) {
#line 1262 "hlds_out_goal.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1262 "hlds_out_goal.m"
        case (MR_Integer) 0:
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
              mercury__io__write_string_3_p_0((MR_String) "% inline builtin\n");
            }
#line 1259 "hlds_out_goal.m"
          }
#line 1262 "hlds_out_goal.m"
          break;
#line 1262 "hlds_out_goal.m"
        case (MR_Integer) 2:
#line 1267 "hlds_out_goal.m"
          {
#line 1267 "hlds_out_goal.m"
          }
#line 1262 "hlds_out_goal.m"
          break;
#line 1262 "hlds_out_goal.m"
        case (MR_Integer) 1:
#line 1263 "hlds_out_goal.m"
          {
#line 1264 "hlds_out_goal.m"
            {
#line 1264 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 1265 "hlds_out_goal.m"
            {
#line 1265 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% out of line builtin\n");
            }
#line 1263 "hlds_out_goal.m"
          }
#line 1262 "hlds_out_goal.m"
          break;
#line 1262 "hlds_out_goal.m"
      }
#line 1269 "hlds_out_goal.m"
    else
#line 1269 "hlds_out_goal.m"
      {
#line 1269 "hlds_out_goal.m"
      }
#line 1272 "hlds_out_goal.m"
    {
#line 1272 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 1273 "hlds_out_goal.m"
    {
#line 1273 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__V_83_83 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 1273 "hlds_out_goal.m"
    {
#line 1273 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__hlds_out__hlds_out_goal__PredId_20, hlds__hlds_out__hlds_out_goal__V_83_83);
    }
#line 6727 "hlds.hlds_out.hlds_out_goal.c"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1284 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__NewArgVars_30 = hlds__hlds_out__hlds_out_goal__ArgVars_22;
#line 6731 "hlds.hlds_out.hlds_out_goal.c"
    else
#line 6733 "hlds.hlds_out.hlds_out_goal.c"
      {
#line 6735 "hlds.hlds_out.hlds_out_goal.c"
        MR_Word hlds__hlds_out__hlds_out_goal__PredInfo_28;
#line 6737 "hlds.hlds_out.hlds_out_goal.c"
        MR_Word hlds__hlds_out__hlds_out_goal__Purity_29;
#line 6739 "hlds.hlds_out.hlds_out_goal.c"
        MR_Word hlds__hlds_out__hlds_out_goal__PredOrFunc_85;

#line 1277 "hlds_out_goal.m"
        {
#line 1277 "hlds_out_goal.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__PredId_20, &hlds__hlds_out__hlds_out_goal__PredInfo_28);
        }
#line 1278 "hlds_out_goal.m"
        {
#line 1278 "hlds_out_goal.m"
          hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__hlds_out__hlds_out_goal__PredInfo_28, &hlds__hlds_out__hlds_out_goal__Purity_29);
        }
#line 1279 "hlds_out_goal.m"
        {
#line 1279 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__PredOrFunc_85 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_goal__PredInfo_28);
        }
#line 1280 "hlds_out_goal.m"
        {
#line 1280 "hlds_out_goal.m"
          parse_tree__prog_out__write_purity_prefix_3_p_0(hlds__hlds_out__hlds_out_goal__Purity_29);
        }
#line 1285 "hlds_out_goal.m"
#line 1285 "hlds_out_goal.m"
        switch (hlds__hlds_out__hlds_out_goal__PredOrFunc_85) {
#line 1285 "hlds_out_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1285 "hlds_out_goal.m"
          case (MR_Integer) 1:
#line 1286 "hlds_out_goal.m"
            {
#line 1286 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__LHSVar_31;
#line 1287 "hlds_out_goal.m"
              MR_Box hlds__hlds_out__hlds_out_goal__conv0_LHSVar_31;

#line 1287 "hlds_out_goal.m"
              {
#line 1287 "hlds_out_goal.m"
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], hlds__hlds_out__hlds_out_goal__ArgVars_22, &hlds__hlds_out__hlds_out_goal__NewArgVars_30, &hlds__hlds_out__hlds_out_goal__conv0_LHSVar_31);
              }
#line 1287 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__LHSVar_31 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv0_LHSVar_31);
#line 1288 "hlds_out_goal.m"
              {
#line 1288 "hlds_out_goal.m"
                parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__LHSVar_31);
              }
#line 1289 "hlds_out_goal.m"
              {
#line 1289 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
#line 1286 "hlds_out_goal.m"
            }
#line 1285 "hlds_out_goal.m"
            break;
#line 1285 "hlds_out_goal.m"
          case (MR_Integer) 0:
#line 1284 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__NewArgVars_30 = hlds__hlds_out__hlds_out_goal__ArgVars_22;
#line 1285 "hlds_out_goal.m"
            break;
#line 1285 "hlds_out_goal.m"
        }
#line 6805 "hlds.hlds_out.hlds_out_goal.c"
      }
#line 1291 "hlds_out_goal.m"
    {
#line 1291 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__PredName_25, hlds__hlds_out__hlds_out_goal__NewArgVars_30);
    }
#line 1292 "hlds_out_goal.m"
    {
#line 1292 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
    }
#line 1293 "hlds_out_goal.m"
    {
#line 1293 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_26, (MR_Char) 108);
    }
#line 1324 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1294 "hlds_out_goal.m"
      {
#line 1294 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__PredNum_32;
#line 1294 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__ProcNum_33;

#line 1294 "hlds_out_goal.m"
        {
#line 1294 "hlds_out_goal.m"
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_goal__PredId_20, &hlds__hlds_out__hlds_out_goal__PredNum_32);
        }
#line 1295 "hlds_out_goal.m"
        {
#line 1295 "hlds_out_goal.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_goal__ProcId_21, &hlds__hlds_out__hlds_out_goal__ProcNum_33);
        }
#line 1296 "hlds_out_goal.m"
        {
#line 1296 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 1297 "hlds_out_goal.m"
        {
#line 1297 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% pred id: ");
        }
#line 1298 "hlds_out_goal.m"
        {
#line 1298 "hlds_out_goal.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__PredNum_32);
        }
#line 1299 "hlds_out_goal.m"
        {
#line 1299 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) ", proc id: ");
        }
#line 1300 "hlds_out_goal.m"
        {
#line 1300 "hlds_out_goal.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__ProcNum_33);
        }
#line 1301 "hlds_out_goal.m"
        {
#line 1301 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
        }
#line 1321 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__MaybeUnifyContext_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1322 "hlds_out_goal.m"
          {
#line 1322 "hlds_out_goal.m"
          }
#line 1321 "hlds_out_goal.m"
        else
#line 1303 "hlds_out_goal.m"
          {
#line 1303 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__CallUnifyContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeUnifyContext_24, (MR_Integer) 0)));
#line 1303 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CallUnifyContext_34, (MR_Integer) 0)));
#line 1303 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__VarType_39;
#line 1303 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__RHS_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CallUnifyContext_34, (MR_Integer) 1)));
#line 1303 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_42;
#line 1312 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal___UnifyContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CallUnifyContext_34, (MR_Integer) 2)));

#line 1308 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__TypeQual_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1310 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__VarType_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1308 "hlds_out_goal.m"
            else
#line 1305 "hlds_out_goal.m"
              {
#line 1305 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__VarTypes_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_14, (MR_Integer) 1)));
#line 1305 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__UniType_38;
#line 1305 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_14, (MR_Integer) 0)));

#line 1306 "hlds_out_goal.m"
                {
#line 1306 "hlds_out_goal.m"
                  hlds__vartypes__lookup_var_type_3_p_0(hlds__hlds_out__hlds_out_goal__VarTypes_36, hlds__hlds_out__hlds_out_goal__Var_37, &hlds__hlds_out__hlds_out_goal__UniType_38);
                }
#line 1307 "hlds_out_goal.m"
                {
#line 1307 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__VarType_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "hlds_out_goal.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__VarType_39, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__UniType_38));
#line 1307 "hlds_out_goal.m"
                }
#line 1305 "hlds_out_goal.m"
              }
#line 1313 "hlds_out_goal.m"
            {
#line 1313 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 1314 "hlds_out_goal.m"
            {
#line 1314 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% unify context: ");
            }
#line 1315 "hlds_out_goal.m"
            {
#line 1315 "hlds_out_goal.m"
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Var_37);
            }
#line 1316 "hlds_out_goal.m"
            {
#line 1316 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) " = ");
            }
#line 1318 "hlds_out_goal.m"
            {
#line 1318 "hlds_out_goal.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_goal__InstVarSet_42);
            }
#line 1319 "hlds_out_goal.m"
            {
#line 1319 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__InstVarSet_42, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__VarType_39, hlds__hlds_out__hlds_out_goal__RHS_40);
#line 1319 "hlds_out_goal.m"
              return;
            }
#line 1303 "hlds_out_goal.m"
          }
#line 1294 "hlds_out_goal.m"
      }
#line 1324 "hlds_out_goal.m"
    else
#line 1324 "hlds_out_goal.m"
      {
#line 1324 "hlds_out_goal.m"
      }
#line 1253 "hlds_out_goal.m"
  }
#line 1247 "hlds_out_goal.m"
}

#line 914 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_p_0(
#line 914 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_12,
#line 914 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
#line 914 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
#line 914 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_15,
#line 914 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_16,
#line 914 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_17,
#line 914 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_18,
#line 914 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeType_19,
#line 914 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_20)
#line 914 "hlds_out_goal.m"
{
#line 921 "hlds_out_goal.m"
  {
#line 921 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 921 "hlds_out_goal.m"
#line 921 "hlds_out_goal.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__RHS_20)) {
#line 921 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 921 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 921 "hlds_out_goal.m"
        {
#line 921 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 0)));

#line 922 "hlds_out_goal.m"
          {
#line 922 "hlds_out_goal.m"
            parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Var_22);
#line 922 "hlds_out_goal.m"
            return;
          }
#line 921 "hlds_out_goal.m"
        }
#line 921 "hlds_out_goal.m"
        break;
#line 921 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 924 "hlds_out_goal.m"
        {
#line 924 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 0)));
#line 924 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__IsExistConstruct_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 1)));
#line 924 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 2)));
#line 924 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId_30;
#line 931 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__SymName0_26;
#line 931 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__Arity_27;
#line 931 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtor_28;
#line 942 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Type_31;
#line 942 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TVarSet_32;
#line 938 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_33_33;

#line 926 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__IsExistConstruct_24 == (MR_Integer) 1);
#line 926 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 926 "hlds_out_goal.m"
            {
#line 927 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ConsId0_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_23, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 927 "hlds_out_goal.m"
              if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 927 "hlds_out_goal.m"
                {
#line 927 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__SymName0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_23, (MR_Integer) 1)));
#line 927 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_23, (MR_Integer) 2)));
#line 927 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__TypeCtor_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_23, (MR_Integer) 3)));
#line 927 "hlds_out_goal.m"
                }
#line 926 "hlds_out_goal.m"
            }
#line 931 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 929 "hlds_out_goal.m"
            {
#line 929 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__SymName_29;

#line 929 "hlds_out_goal.m"
              {
#line 929 "hlds_out_goal.m"
                parse_tree__prog_type__add_new_prefix_2_p_0(hlds__hlds_out__hlds_out_goal__SymName0_26, &hlds__hlds_out__hlds_out_goal__SymName_29);
              }
#line 930 "hlds_out_goal.m"
              {
#line 930 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__ConsId_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 930 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 930 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__SymName_29));
#line 930 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_30, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Arity_27));
#line 930 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_30, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__TypeCtor_28));
#line 930 "hlds_out_goal.m"
              }
#line 929 "hlds_out_goal.m"
            }
#line 931 "hlds_out_goal.m"
          else
#line 932 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__ConsId_30 = hlds__hlds_out__hlds_out_goal__ConsId0_23;
#line 934 "hlds_out_goal.m"
          {
#line 934 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_p_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__ConsId_30, hlds__hlds_out__hlds_out_goal__ArgVars_25);
          }
#line 937 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeType_19)) == (MR_mktag((MR_Integer) 1)));
#line 937 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 937 "hlds_out_goal.m"
            {
#line 937 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeType_19, (MR_Integer) 0)));
#line 938 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__TypeQual_16)) == (MR_mktag((MR_Integer) 1)));
#line 938 "hlds_out_goal.m"
              if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 938 "hlds_out_goal.m"
                {
#line 938 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__TVarSet_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_16, (MR_Integer) 0)));
#line 938 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_16, (MR_Integer) 1)));
#line 938 "hlds_out_goal.m"
                }
#line 937 "hlds_out_goal.m"
            }
#line 942 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 940 "hlds_out_goal.m"
            {
#line 940 "hlds_out_goal.m"
              {
#line 940 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) " : ");
              }
#line 941 "hlds_out_goal.m"
              {
#line 941 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_goal__TVarSet_32, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Type_31);
#line 941 "hlds_out_goal.m"
                return;
              }
#line 940 "hlds_out_goal.m"
            }
#line 942 "hlds_out_goal.m"
          else
#line 942 "hlds_out_goal.m"
            {
#line 942 "hlds_out_goal.m"
            }
#line 924 "hlds_out_goal.m"
        }
#line 921 "hlds_out_goal.m"
        break;
#line 921 "hlds_out_goal.m"
      case (MR_Integer) 2:
#line 947 "hlds_out_goal.m"
        {
#line 947 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Purity_34 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 947 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Groundness_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 947 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__PredOrFunc_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 947 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__NonLocals_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 2)));
#line 947 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Vars_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 3)));
#line 947 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Modes_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 4)));
#line 947 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Det_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 5)));
#line 947 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Goal_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 6)));
#line 947 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__Indent1_43 = (hlds__hlds_out__hlds_out_goal__Indent_18 + (MR_Integer) 1);
#line 947 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_53;
#line 1016 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Type_134;
#line 1016 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TVarSet_135;
#line 1012 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_52_52;
#line 1019 "hlds_out_goal.m"
          MR_String hlds__hlds_out__hlds_out_goal__V_139_139;
#line 1019 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_140_140;
#line 1019 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_141_141;
#line 1019 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_142_142;

#line 949 "hlds_out_goal.m"
          {
#line 949 "hlds_out_goal.m"
            parse_tree__prog_out__write_purity_prefix_3_p_0(hlds__hlds_out__hlds_out_goal__Purity_34);
          }
#line 977 "hlds_out_goal.m"
#line 977 "hlds_out_goal.m"
          switch (hlds__hlds_out__hlds_out_goal__Groundness_35) {
#line 977 "hlds_out_goal.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 977 "hlds_out_goal.m"
            case (MR_Integer) 1:
#line 977 "hlds_out_goal.m"
#line 977 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__PredOrFunc_36) {
#line 977 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 977 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 978 "hlds_out_goal.m"
                  {
#line 978 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_47;
#line 978 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__RetMode_48;
#line 978 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__RetVar_49;
#line 978 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__V_79_79;
#line 978 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_131;
#line 986 "hlds_out_goal.m"
                    MR_Box hlds__hlds_out__hlds_out_goal__conv0_RetMode_48;
#line 987 "hlds_out_goal.m"
                    MR_Box hlds__hlds_out__hlds_out_goal__conv1_RetVar_49;

#line 986 "hlds_out_goal.m"
                    {
#line 986 "hlds_out_goal.m"
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_goal__Modes_40, &hlds__hlds_out__hlds_out_goal__ArgModes_47, &hlds__hlds_out__hlds_out_goal__conv0_RetMode_48);
                    }
#line 986 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__RetMode_48 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv0_RetMode_48);
#line 987 "hlds_out_goal.m"
                    {
#line 987 "hlds_out_goal.m"
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], hlds__hlds_out__hlds_out_goal__Vars_39, &hlds__hlds_out__hlds_out_goal__ArgVars_131, &hlds__hlds_out__hlds_out_goal__conv1_RetVar_49);
                    }
#line 987 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__RetVar_49 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv1_RetVar_49);
#line 988 "hlds_out_goal.m"
                    {
#line 988 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 992 "hlds_out_goal.m"
                    if ((hlds__hlds_out__hlds_out_goal__ArgVars_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "hlds_out_goal.m"
                      {
#line 991 "hlds_out_goal.m"
                        {
#line 991 "hlds_out_goal.m"
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[5]));
                        }
#line 990 "hlds_out_goal.m"
                      }
#line 992 "hlds_out_goal.m"
                    else
#line 993 "hlds_out_goal.m"
                      {
#line 994 "hlds_out_goal.m"
                        {
#line 994 "hlds_out_goal.m"
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[7]));
                        }
#line 995 "hlds_out_goal.m"
                        {
#line 995 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_15, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__ArgVars_131, hlds__hlds_out__hlds_out_goal__ArgModes_47);
                        }
#line 997 "hlds_out_goal.m"
                        {
#line 997 "hlds_out_goal.m"
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
#line 993 "hlds_out_goal.m"
                      }
#line 999 "hlds_out_goal.m"
                    {
#line 999 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) " = (");
                    }
#line 1001 "hlds_out_goal.m"
                    {
#line 1001 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "hlds_out_goal.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_79_79, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__RetVar_49));
#line 1001 "hlds_out_goal.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_79_79, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__RetMode_48));
#line 1001 "hlds_out_goal.m"
                    }
#line 1000 "hlds_out_goal.m"
                    {
#line 1000 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_15, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__V_79_79);
                    }
#line 1002 "hlds_out_goal.m"
                    {
#line 1002 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ") is ");
                    }
#line 1003 "hlds_out_goal.m"
                    {
#line 1003 "hlds_out_goal.m"
                      parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(hlds__hlds_out__hlds_out_goal__Det_41);
                    }
#line 1004 "hlds_out_goal.m"
                    {
#line 1004 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) " :-\n");
                    }
#line 1005 "hlds_out_goal.m"
                    {
#line 1005 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__TypeQual_16, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Indent1_43, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_42);
                    }
#line 1007 "hlds_out_goal.m"
                    {
#line 1007 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                    }
#line 1008 "hlds_out_goal.m"
                    {
#line 1008 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ")\n");
                    }
#line 978 "hlds_out_goal.m"
                  }
#line 977 "hlds_out_goal.m"
                  break;
#line 977 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 951 "hlds_out_goal.m"
                  {
#line 959 "hlds_out_goal.m"
                    {
#line 959 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 963 "hlds_out_goal.m"
                    if ((hlds__hlds_out__hlds_out_goal__Vars_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 961 "hlds_out_goal.m"
                      {
#line 962 "hlds_out_goal.m"
                        {
#line 962 "hlds_out_goal.m"
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[9]));
                        }
#line 961 "hlds_out_goal.m"
                      }
#line 963 "hlds_out_goal.m"
                    else
#line 964 "hlds_out_goal.m"
                      {
#line 965 "hlds_out_goal.m"
                        {
#line 965 "hlds_out_goal.m"
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[10]));
                        }
#line 966 "hlds_out_goal.m"
                        {
#line 966 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_15, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Vars_39, hlds__hlds_out__hlds_out_goal__Modes_40);
                        }
#line 968 "hlds_out_goal.m"
                        {
#line 968 "hlds_out_goal.m"
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
#line 964 "hlds_out_goal.m"
                      }
#line 970 "hlds_out_goal.m"
                    {
#line 970 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) " is ");
                    }
#line 971 "hlds_out_goal.m"
                    {
#line 971 "hlds_out_goal.m"
                      parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(hlds__hlds_out__hlds_out_goal__Det_41);
                    }
#line 972 "hlds_out_goal.m"
                    {
#line 972 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) " :-\n");
                    }
#line 973 "hlds_out_goal.m"
                    {
#line 973 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__TypeQual_16, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Indent1_43, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_42);
                    }
#line 975 "hlds_out_goal.m"
                    {
#line 975 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                    }
#line 976 "hlds_out_goal.m"
                    {
#line 976 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ")\n");
                    }
#line 951 "hlds_out_goal.m"
                  }
#line 977 "hlds_out_goal.m"
                  break;
#line 977 "hlds_out_goal.m"
              }
#line 977 "hlds_out_goal.m"
              break;
#line 977 "hlds_out_goal.m"
            case (MR_Integer) 0:
#line 977 "hlds_out_goal.m"
#line 977 "hlds_out_goal.m"
              switch (hlds__hlds_out__hlds_out_goal__PredOrFunc_36) {
#line 977 "hlds_out_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 977 "hlds_out_goal.m"
                case (MR_Integer) 1:
#line 978 "hlds_out_goal.m"
                  {
#line 978 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_179;
#line 978 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__RetMode_180;
#line 978 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__RetVar_181;
#line 978 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__V_202_202;
#line 978 "hlds_out_goal.m"
                    MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_213;
#line 986 "hlds_out_goal.m"
                    MR_Box hlds__hlds_out__hlds_out_goal__conv2_RetMode_180;
#line 987 "hlds_out_goal.m"
                    MR_Box hlds__hlds_out__hlds_out_goal__conv3_RetVar_181;

#line 986 "hlds_out_goal.m"
                    {
#line 986 "hlds_out_goal.m"
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_goal__Modes_40, &hlds__hlds_out__hlds_out_goal__ArgModes_179, &hlds__hlds_out__hlds_out_goal__conv2_RetMode_180);
                    }
#line 986 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__RetMode_180 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv2_RetMode_180);
#line 987 "hlds_out_goal.m"
                    {
#line 987 "hlds_out_goal.m"
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], hlds__hlds_out__hlds_out_goal__Vars_39, &hlds__hlds_out__hlds_out_goal__ArgVars_213, &hlds__hlds_out__hlds_out_goal__conv3_RetVar_181);
                    }
#line 987 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__RetVar_181 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv3_RetVar_181);
#line 988 "hlds_out_goal.m"
                    {
#line 988 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 992 "hlds_out_goal.m"
                    if ((hlds__hlds_out__hlds_out_goal__ArgVars_213 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "hlds_out_goal.m"
                      {
#line 991 "hlds_out_goal.m"
                        {
#line 991 "hlds_out_goal.m"
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[12]));
                        }
#line 990 "hlds_out_goal.m"
                      }
#line 992 "hlds_out_goal.m"
                    else
#line 993 "hlds_out_goal.m"
                      {
#line 994 "hlds_out_goal.m"
                        {
#line 994 "hlds_out_goal.m"
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[13]));
                        }
#line 995 "hlds_out_goal.m"
                        {
#line 995 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_15, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__ArgVars_213, hlds__hlds_out__hlds_out_goal__ArgModes_179);
                        }
#line 997 "hlds_out_goal.m"
                        {
#line 997 "hlds_out_goal.m"
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
#line 993 "hlds_out_goal.m"
                      }
#line 999 "hlds_out_goal.m"
                    {
#line 999 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) " = (");
                    }
#line 1001 "hlds_out_goal.m"
                    {
#line 1001 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__V_202_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "hlds_out_goal.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_202_202, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__RetVar_181));
#line 1001 "hlds_out_goal.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_202_202, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__RetMode_180));
#line 1001 "hlds_out_goal.m"
                    }
#line 1000 "hlds_out_goal.m"
                    {
#line 1000 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_15, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__V_202_202);
                    }
#line 1002 "hlds_out_goal.m"
                    {
#line 1002 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ") is ");
                    }
#line 1003 "hlds_out_goal.m"
                    {
#line 1003 "hlds_out_goal.m"
                      parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(hlds__hlds_out__hlds_out_goal__Det_41);
                    }
#line 1004 "hlds_out_goal.m"
                    {
#line 1004 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) " :-\n");
                    }
#line 1005 "hlds_out_goal.m"
                    {
#line 1005 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__TypeQual_16, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Indent1_43, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_42);
                    }
#line 1007 "hlds_out_goal.m"
                    {
#line 1007 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                    }
#line 1008 "hlds_out_goal.m"
                    {
#line 1008 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ")\n");
                    }
#line 978 "hlds_out_goal.m"
                  }
#line 977 "hlds_out_goal.m"
                  break;
#line 977 "hlds_out_goal.m"
                case (MR_Integer) 0:
#line 951 "hlds_out_goal.m"
                  {
#line 959 "hlds_out_goal.m"
                    {
#line 959 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 963 "hlds_out_goal.m"
                    if ((hlds__hlds_out__hlds_out_goal__Vars_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 961 "hlds_out_goal.m"
                      {
#line 962 "hlds_out_goal.m"
                        {
#line 962 "hlds_out_goal.m"
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[15]));
                        }
#line 961 "hlds_out_goal.m"
                      }
#line 963 "hlds_out_goal.m"
                    else
#line 964 "hlds_out_goal.m"
                      {
#line 965 "hlds_out_goal.m"
                        {
#line 965 "hlds_out_goal.m"
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[16]));
                        }
#line 966 "hlds_out_goal.m"
                        {
#line 966 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_15, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Vars_39, hlds__hlds_out__hlds_out_goal__Modes_40);
                        }
#line 968 "hlds_out_goal.m"
                        {
#line 968 "hlds_out_goal.m"
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
#line 964 "hlds_out_goal.m"
                      }
#line 970 "hlds_out_goal.m"
                    {
#line 970 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) " is ");
                    }
#line 971 "hlds_out_goal.m"
                    {
#line 971 "hlds_out_goal.m"
                      parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(hlds__hlds_out__hlds_out_goal__Det_41);
                    }
#line 972 "hlds_out_goal.m"
                    {
#line 972 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) " :-\n");
                    }
#line 973 "hlds_out_goal.m"
                    {
#line 973 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__TypeQual_16, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Indent1_43, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_42);
                    }
#line 975 "hlds_out_goal.m"
                    {
#line 975 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                    }
#line 976 "hlds_out_goal.m"
                    {
#line 976 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ")\n");
                    }
#line 951 "hlds_out_goal.m"
                  }
#line 977 "hlds_out_goal.m"
                  break;
#line 977 "hlds_out_goal.m"
              }
#line 977 "hlds_out_goal.m"
              break;
#line 977 "hlds_out_goal.m"
          }
#line 1011 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeType_19)) == (MR_mktag((MR_Integer) 1)));
#line 1011 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1011 "hlds_out_goal.m"
            {
#line 1011 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__Type_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeType_19, (MR_Integer) 0)));
#line 1012 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__TypeQual_16)) == (MR_mktag((MR_Integer) 1)));
#line 1012 "hlds_out_goal.m"
              if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1012 "hlds_out_goal.m"
                {
#line 1012 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__TVarSet_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_16, (MR_Integer) 0)));
#line 1012 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_16, (MR_Integer) 1)));
#line 1012 "hlds_out_goal.m"
                }
#line 1011 "hlds_out_goal.m"
            }
#line 1016 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1014 "hlds_out_goal.m"
            {
#line 1014 "hlds_out_goal.m"
              {
#line 1014 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) " : ");
              }
#line 1015 "hlds_out_goal.m"
              {
#line 1015 "hlds_out_goal.m"
                parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_goal__TVarSet_135, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Type_134);
              }
#line 1014 "hlds_out_goal.m"
            }
#line 1016 "hlds_out_goal.m"
          else
#line 1016 "hlds_out_goal.m"
            {
#line 1016 "hlds_out_goal.m"
            }
#line 1019 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__DumpOptions_53 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 0)));
#line 1019 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_139_139 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 1)));
#line 1019 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 2)));
#line 1019 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 3)));
#line 1019 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 4)));
#line 1020 "hlds_out_goal.m"
          {
#line 1020 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_53, (MR_Char) 110);
          }
#line 1029 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1026 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__NonLocals_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1027 "hlds_out_goal.m"
              {
#line 1027 "hlds_out_goal.m"
              }
#line 1026 "hlds_out_goal.m"
            else
#line 1022 "hlds_out_goal.m"
              {
#line 1023 "hlds_out_goal.m"
                {
#line 1023 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent1_43);
                }
#line 1024 "hlds_out_goal.m"
                {
#line 1024 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% lambda nonlocals: ");
                }
#line 1025 "hlds_out_goal.m"
                {
#line 1025 "hlds_out_goal.m"
                  parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__NonLocals_38);
#line 1025 "hlds_out_goal.m"
                  return;
                }
#line 1022 "hlds_out_goal.m"
              }
#line 1029 "hlds_out_goal.m"
          else
#line 1029 "hlds_out_goal.m"
            {
#line 1029 "hlds_out_goal.m"
            }
#line 947 "hlds_out_goal.m"
        }
#line 921 "hlds_out_goal.m"
        break;
#line 921 "hlds_out_goal.m"
    }
#line 921 "hlds_out_goal.m"
  }
#line 914 "hlds_out_goal.m"
}

#line 903 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(
#line 903 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_13,
#line 903 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
#line 903 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
#line 903 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_16,
#line 903 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_17,
#line 903 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_18,
#line 903 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_19,
#line 903 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_20,
#line 903 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeType_21,
#line 903 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_22)
#line 903 "hlds_out_goal.m"
{
#line 909 "hlds_out_goal.m"
  {
#line 909 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 910 "hlds_out_goal.m"
    {
#line 910 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_p_0(hlds__hlds_out__hlds_out_goal__Info_13, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__InstVarSet_16, hlds__hlds_out__hlds_out_goal__TypeQual_17, hlds__hlds_out__hlds_out_goal__VarNamePrint_18, hlds__hlds_out__hlds_out_goal__Indent_19, hlds__hlds_out__hlds_out_goal__MaybeType_21, hlds__hlds_out__hlds_out_goal__RHS_22);
    }
#line 912 "hlds_out_goal.m"
    {
#line 912 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_20);
#line 912 "hlds_out_goal.m"
      return;
    }
#line 909 "hlds_out_goal.m"
  }
#line 903 "hlds_out_goal.m"
}

#line 852 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_unify_10_p_0(
#line 852 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 852 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 852 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 852 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 852 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 852 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 852 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 852 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
#line 852 "hlds_out_goal.m"
{
#line 858 "hlds_out_goal.m"
  {
#line 858 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 858 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__LHS_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 0)));
#line 858 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__RHS_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));
#line 858 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Unification_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 3)));
#line 858 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_25 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 858 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__VarType_29;
#line 858 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_30;
#line 859 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 2)));
#line 859 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 4)));
#line 860 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 860 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 860 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 860 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));

#line 861 "hlds_out_goal.m"
    {
#line 861 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
#line 862 "hlds_out_goal.m"
    {
#line 862 "hlds_out_goal.m"
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__LHS_20);
    }
#line 863 "hlds_out_goal.m"
    {
#line 863 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
#line 868 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__TypeQual_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 870 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__VarType_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 868 "hlds_out_goal.m"
    else
#line 865 "hlds_out_goal.m"
      {
#line 865 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__VarTypes_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_14, (MR_Integer) 1)));
#line 865 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__UniType_28;
#line 865 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_14, (MR_Integer) 0)));

#line 866 "hlds_out_goal.m"
        {
#line 866 "hlds_out_goal.m"
          hlds__vartypes__lookup_var_type_3_p_0(hlds__hlds_out__hlds_out_goal__VarTypes_27, hlds__hlds_out__hlds_out_goal__LHS_20, &hlds__hlds_out__hlds_out_goal__UniType_28);
        }
#line 867 "hlds_out_goal.m"
        {
#line 867 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__VarType_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 867 "hlds_out_goal.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__VarType_29, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__UniType_28));
#line 867 "hlds_out_goal.m"
        }
#line 865 "hlds_out_goal.m"
      }
#line 873 "hlds_out_goal.m"
    {
#line 873 "hlds_out_goal.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_goal__InstVarSet_30);
    }
#line 874 "hlds_out_goal.m"
    {
#line 874 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__InstVarSet_30, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__VarType_29, hlds__hlds_out__hlds_out_goal__RHS_21);
    }
#line 877 "hlds_out_goal.m"
    {
#line 877 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 117);
    }
#line 878 "hlds_out_goal.m"
    if (!(hlds__hlds_out__hlds_out_goal__succeeded))
#line 878 "hlds_out_goal.m"
      {
#line 878 "hlds_out_goal.m"
        {
#line 878 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 112);
        }
#line 878 "hlds_out_goal.m"
      }
#line 894 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 890 "hlds_out_goal.m"
      {
#line 884 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Mode_31;
#line 884 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CanFail_32;
#line 884 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeInfoVars_33;
#line 886 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_43_43;
#line 886 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_44_44;
#line 886 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_45_45;
#line 886 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_46_46;
#line 886 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_47_47;
#line 886 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_48_48;

#line 884 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Unification_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 884 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 884 "hlds_out_goal.m"
          {
#line 884 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_23, (MR_Integer) 1)));
#line 884 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__CanFail_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_23, (MR_Integer) 2)));
#line 884 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__TypeInfoVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_23, (MR_Integer) 3)));
#line 885 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__CanFail_32 == (MR_Integer) 0);
#line 884 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 884 "hlds_out_goal.m"
              {
#line 886 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Mode_31, (MR_Integer) 0)));
#line 886 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Mode_31, (MR_Integer) 1)));
#line 886 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_43_43, (MR_Integer) 0)));
#line 886 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_43_43, (MR_Integer) 1)));
#line 886 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 886 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 886 "hlds_out_goal.m"
                  {
#line 886 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 886 "hlds_out_goal.m"
                    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 886 "hlds_out_goal.m"
                      {
#line 886 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_goal__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_46_46, (MR_Integer) 0)));
#line 886 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_goal__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_46_46, (MR_Integer) 1)));
#line 886 "hlds_out_goal.m"
                        hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 886 "hlds_out_goal.m"
                        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 886 "hlds_out_goal.m"
                          hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 886 "hlds_out_goal.m"
                      }
#line 886 "hlds_out_goal.m"
                  }
#line 884 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 887 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__TypeInfoVars_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "hlds_out_goal.m"
              }
#line 884 "hlds_out_goal.m"
          }
#line 890 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 890 "hlds_out_goal.m"
          {
#line 890 "hlds_out_goal.m"
          }
#line 890 "hlds_out_goal.m"
        else
#line 891 "hlds_out_goal.m"
          {
#line 891 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__InstVarSet_30, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Unification_23);
#line 891 "hlds_out_goal.m"
            return;
          }
#line 890 "hlds_out_goal.m"
      }
#line 894 "hlds_out_goal.m"
    else
#line 894 "hlds_out_goal.m"
      {
#line 894 "hlds_out_goal.m"
      }
#line 858 "hlds_out_goal.m"
  }
#line 852 "hlds_out_goal.m"
}

#line 795 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_expr_10_p_0(
#line 795 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 795 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 795 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 795 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 795 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 795 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 795 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 795 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
#line 795 "hlds_out_goal.m"
{
#line 802 "hlds_out_goal.m"
  {
#line 802 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 802 "hlds_out_goal.m"
#line 802 "hlds_out_goal.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_18)) {
#line 802 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 802 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 839 "hlds_out_goal.m"
        {
#line 839 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_goal_negation_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
#line 839 "hlds_out_goal.m"
          return;
        }
#line 802 "hlds_out_goal.m"
        break;
#line 802 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 803 "hlds_out_goal.m"
        {
#line 803 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_goal_unify_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
#line 803 "hlds_out_goal.m"
          return;
        }
#line 802 "hlds_out_goal.m"
        break;
#line 802 "hlds_out_goal.m"
      case (MR_Integer) 2:
#line 807 "hlds_out_goal.m"
        {
#line 807 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
#line 807 "hlds_out_goal.m"
          return;
        }
#line 802 "hlds_out_goal.m"
        break;
#line 802 "hlds_out_goal.m"
      case (MR_Integer) 3:
#line 802 "hlds_out_goal.m"
#line 802 "hlds_out_goal.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 0)))) {
#line 802 "hlds_out_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 802 "hlds_out_goal.m"
          case (MR_Integer) 0:
#line 811 "hlds_out_goal.m"
            {
#line 811 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_50_44_32_52_93_95_48_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
#line 811 "hlds_out_goal.m"
              return;
            }
#line 802 "hlds_out_goal.m"
            break;
#line 802 "hlds_out_goal.m"
          case (MR_Integer) 1:
#line 815 "hlds_out_goal.m"
            {
#line 815 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
#line 815 "hlds_out_goal.m"
              return;
            }
#line 802 "hlds_out_goal.m"
            break;
#line 802 "hlds_out_goal.m"
          case (MR_Integer) 2:
#line 819 "hlds_out_goal.m"
            {
#line 819 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_goal_conj_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
#line 819 "hlds_out_goal.m"
              return;
            }
#line 802 "hlds_out_goal.m"
            break;
#line 802 "hlds_out_goal.m"
          case (MR_Integer) 3:
#line 823 "hlds_out_goal.m"
            {
#line 823 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_goal_disj_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
#line 823 "hlds_out_goal.m"
              return;
            }
#line 802 "hlds_out_goal.m"
            break;
#line 802 "hlds_out_goal.m"
          case (MR_Integer) 4:
#line 827 "hlds_out_goal.m"
            {
#line 827 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
#line 827 "hlds_out_goal.m"
              return;
            }
#line 802 "hlds_out_goal.m"
            break;
#line 802 "hlds_out_goal.m"
          case (MR_Integer) 5:
#line 831 "hlds_out_goal.m"
            {
#line 831 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
#line 831 "hlds_out_goal.m"
              return;
            }
#line 802 "hlds_out_goal.m"
            break;
#line 802 "hlds_out_goal.m"
          case (MR_Integer) 6:
#line 835 "hlds_out_goal.m"
            {
#line 835 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
#line 835 "hlds_out_goal.m"
              return;
            }
#line 802 "hlds_out_goal.m"
            break;
#line 802 "hlds_out_goal.m"
          case (MR_Integer) 7:
#line 843 "hlds_out_goal.m"
            {
#line 843 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
#line 843 "hlds_out_goal.m"
              return;
            }
#line 802 "hlds_out_goal.m"
            break;
#line 802 "hlds_out_goal.m"
        }
#line 802 "hlds_out_goal.m"
        break;
#line 802 "hlds_out_goal.m"
    }
#line 802 "hlds_out_goal.m"
  }
#line 795 "hlds_out_goal.m"
}

#line 744 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(
#line 744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ShortDescription_6,
#line 744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 744 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8)
#line 744 "hlds_out_goal.m"
{
#line 749 "hlds_out_goal.m"
  {
#line 749 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 749 "hlds_out_goal.m"
#line 749 "hlds_out_goal.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ShortDescription_6)) {
#line 749 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 749 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 749 "hlds_out_goal.m"
        {
#line 750 "hlds_out_goal.m"
          {
#line 750 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "cell died");
#line 750 "hlds_out_goal.m"
            return;
          }
#line 749 "hlds_out_goal.m"
        }
#line 749 "hlds_out_goal.m"
        break;
#line 749 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 752 "hlds_out_goal.m"
        {
#line 752 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 0)));
#line 752 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__IsConditional_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 1)));
#line 752 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 2)));
#line 752 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 3)));

#line 753 "hlds_out_goal.m"
          {
#line 753 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "cell reuse - ");
          }
#line 754 "hlds_out_goal.m"
          {
#line 754 "hlds_out_goal.m"
            parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__VarNamePrint_8, hlds__hlds_out__hlds_out_goal__Var_10);
          }
#line 755 "hlds_out_goal.m"
          {
#line 755 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) " - ");
          }
#line 769 "hlds_out_goal.m"
#line 769 "hlds_out_goal.m"
          switch (hlds__hlds_out__hlds_out_goal__IsConditional_11) {
#line 769 "hlds_out_goal.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 769 "hlds_out_goal.m"
            case (MR_Integer) 0:
#line 769 "hlds_out_goal.m"
              {
#line 770 "hlds_out_goal.m"
                {
#line 770 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "with condition");
#line 770 "hlds_out_goal.m"
                  return;
                }
#line 769 "hlds_out_goal.m"
              }
#line 769 "hlds_out_goal.m"
              break;
#line 769 "hlds_out_goal.m"
            case (MR_Integer) 1:
#line 772 "hlds_out_goal.m"
              {
#line 773 "hlds_out_goal.m"
                {
#line 773 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "always safe");
#line 773 "hlds_out_goal.m"
                  return;
                }
#line 772 "hlds_out_goal.m"
              }
#line 769 "hlds_out_goal.m"
              break;
#line 769 "hlds_out_goal.m"
          }
#line 752 "hlds_out_goal.m"
        }
#line 749 "hlds_out_goal.m"
        break;
#line 749 "hlds_out_goal.m"
      case (MR_Integer) 2:
#line 758 "hlds_out_goal.m"
        {
#line 758 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__NoClobbers_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 1)));
#line 758 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__IsConditional_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 0)));

#line 759 "hlds_out_goal.m"
          {
#line 759 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) "reuse call - ");
          }
#line 769 "hlds_out_goal.m"
#line 769 "hlds_out_goal.m"
          switch (hlds__hlds_out__hlds_out_goal__IsConditional_31) {
#line 769 "hlds_out_goal.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 769 "hlds_out_goal.m"
            case (MR_Integer) 0:
#line 769 "hlds_out_goal.m"
              {
#line 770 "hlds_out_goal.m"
                {
#line 770 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "with condition");
                }
#line 769 "hlds_out_goal.m"
              }
#line 769 "hlds_out_goal.m"
              break;
#line 769 "hlds_out_goal.m"
            case (MR_Integer) 1:
#line 772 "hlds_out_goal.m"
              {
#line 773 "hlds_out_goal.m"
                {
#line 773 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "always safe");
                }
#line 772 "hlds_out_goal.m"
              }
#line 769 "hlds_out_goal.m"
              break;
#line 769 "hlds_out_goal.m"
          }
#line 761 "hlds_out_goal.m"
          {
#line 761 "hlds_out_goal.m"
            mercury__io__write_string_3_p_0((MR_String) ", no clobbers = ");
          }
#line 762 "hlds_out_goal.m"
          {
#line 762 "hlds_out_goal.m"
            mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[2], ((MR_Box) (hlds__hlds_out__hlds_out_goal__NoClobbers_14)));
#line 762 "hlds_out_goal.m"
            return;
          }
#line 758 "hlds_out_goal.m"
        }
#line 749 "hlds_out_goal.m"
        break;
#line 749 "hlds_out_goal.m"
    }
#line 749 "hlds_out_goal.m"
  }
#line 744 "hlds_out_goal.m"
}

#line 733 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(
#line 733 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_1,
#line 733 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_2,
#line 733 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__3_3)
#line 733 "hlds_out_goal.m"
{
#line 736 "hlds_out_goal.m"
  while (MR_TRUE)
#line 736 "hlds_out_goal.m"
    {
#line 736 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 736 "hlds_out_goal.m"
      {
#line 736 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 736 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 736 "hlds_out_goal.m"
          {
#line 736 "hlds_out_goal.m"
          }
#line 736 "hlds_out_goal.m"
        else
#line 736 "hlds_out_goal.m"
          {
#line 736 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__3_3, (MR_Integer) 1)));
#line 736 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__3_3, (MR_Integer) 0)));

#line 736 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 737 "hlds_out_goal.m"
              {
#line 738 "hlds_out_goal.m"
                {
#line 738 "hlds_out_goal.m"
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__VarNamePrint_2, hlds__hlds_out__hlds_out_goal__V_36_36);
#line 738 "hlds_out_goal.m"
                  return;
                }
#line 737 "hlds_out_goal.m"
              }
#line 736 "hlds_out_goal.m"
            else
#line 739 "hlds_out_goal.m"
              {
#line 739 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_66_66;
#line 739 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__V_67_67;

#line 740 "hlds_out_goal.m"
                {
#line 740 "hlds_out_goal.m"
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__VarNamePrint_2, hlds__hlds_out__hlds_out_goal__V_36_36);
                }
#line 741 "hlds_out_goal.m"
                {
#line 741 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 737 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_35_35, (MR_Integer) 0)));
#line 737 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_35_35, (MR_Integer) 1)));
#line 736 "hlds_out_goal.m"
                if ((hlds__hlds_out__hlds_out_goal__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 737 "hlds_out_goal.m"
                  {
#line 738 "hlds_out_goal.m"
                    {
#line 738 "hlds_out_goal.m"
                      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__VarNamePrint_2, hlds__hlds_out__hlds_out_goal__V_67_67);
#line 738 "hlds_out_goal.m"
                      return;
                    }
#line 737 "hlds_out_goal.m"
                  }
#line 736 "hlds_out_goal.m"
                else
#line 739 "hlds_out_goal.m"
                  {
#line 740 "hlds_out_goal.m"
                    {
#line 740 "hlds_out_goal.m"
                      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__VarNamePrint_2, hlds__hlds_out__hlds_out_goal__V_67_67);
                    }
#line 741 "hlds_out_goal.m"
                    {
#line 741 "hlds_out_goal.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 742 "hlds_out_goal.m"
                    /* direct tailcall eliminated */
#line 742 "hlds_out_goal.m"
                    {
#line 742 "hlds_out_goal.m"
                      MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_goal__V_66_66;

#line 742 "hlds_out_goal.m"
                      hlds__hlds_out__hlds_out_goal__HeadVar__3_3 = hlds__hlds_out__hlds_out_goal__HeadVar__3__tmp_copy_3;
#line 742 "hlds_out_goal.m"
                    }
#line 742 "hlds_out_goal.m"
                    continue;
#line 739 "hlds_out_goal.m"
                  }
#line 739 "hlds_out_goal.m"
              }
#line 736 "hlds_out_goal.m"
          }
#line 736 "hlds_out_goal.m"
      }
#line 736 "hlds_out_goal.m"
      break;
#line 736 "hlds_out_goal.m"
    }
#line 733 "hlds_out_goal.m"
}

#line 721 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_p_0(
#line 721 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_6,
#line 721 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_7,
#line 721 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_8)
#line 721 "hlds_out_goal.m"
{
#line 727 "hlds_out_goal.m"
  {
#line 727 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 725 "hlds_out_goal.m"
    {
#line 725 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_8);
    }
#line 727 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 726 "hlds_out_goal.m"
      {
#line 726 "hlds_out_goal.m"
        {
#line 726 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "unreachable");
#line 726 "hlds_out_goal.m"
          return;
        }
#line 726 "hlds_out_goal.m"
      }
#line 727 "hlds_out_goal.m"
    else
#line 728 "hlds_out_goal.m"
      {
#line 728 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__AssocList_10;
#line 728 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Vars_11;

#line 728 "hlds_out_goal.m"
        {
#line 728 "hlds_out_goal.m"
          hlds__instmap__instmap_delta_to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_8, &hlds__hlds_out__hlds_out_goal__AssocList_10);
        }
#line 729 "hlds_out_goal.m"
        {
#line 729 "hlds_out_goal.m"
          mercury__assoc_list__keys_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__hlds_out__hlds_out_goal__AssocList_10, &hlds__hlds_out__hlds_out_goal__Vars_11);
        }
#line 730 "hlds_out_goal.m"
        {
#line 730 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_6, hlds__hlds_out__hlds_out_goal__VarNamePrint_7, hlds__hlds_out__hlds_out_goal__Vars_11);
#line 730 "hlds_out_goal.m"
          return;
        }
#line 728 "hlds_out_goal.m"
      }
#line 727 "hlds_out_goal.m"
  }
#line 721 "hlds_out_goal.m"
}

#line 710 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_p_0(
#line 710 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 710 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8,
#line 710 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_9,
#line 710 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_10)
#line 710 "hlds_out_goal.m"
{
#line 716 "hlds_out_goal.m"
  {
#line 716 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 714 "hlds_out_goal.m"
    {
#line 714 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_10);
    }
#line 716 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 715 "hlds_out_goal.m"
      {
#line 715 "hlds_out_goal.m"
        {
#line 715 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "unreachable");
#line 715 "hlds_out_goal.m"
          return;
        }
#line 715 "hlds_out_goal.m"
      }
#line 716 "hlds_out_goal.m"
    else
#line 717 "hlds_out_goal.m"
      {
#line 717 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__AssocList_12;

#line 717 "hlds_out_goal.m"
        {
#line 717 "hlds_out_goal.m"
          hlds__instmap__instmap_delta_to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_10, &hlds__hlds_out__hlds_out_goal__AssocList_12);
        }
#line 718 "hlds_out_goal.m"
        {
#line 718 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__VarNamePrint_8, hlds__hlds_out__hlds_out_goal__Indent_9, hlds__hlds_out__hlds_out_goal__AssocList_12);
#line 718 "hlds_out_goal.m"
          return;
        }
#line 717 "hlds_out_goal.m"
      }
#line 716 "hlds_out_goal.m"
  }
#line 710 "hlds_out_goal.m"
}

#line 525 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_p_0(
#line 525 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_8,
#line 525 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__GoalInfo_9,
#line 525 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_10,
#line 525 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_11,
#line 525 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_12)
#line 525 "hlds_out_goal.m"
{
#line 528 "hlds_out_goal.m"
  {
#line 528 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 528 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 0)));
#line 529 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_145_145 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 1)));
#line 529 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 2)));
#line 529 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 3)));
#line 529 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 4)));
#line 586 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__StoreMapList_26;
#line 578 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__TypeInfo_152_152;
#line 578 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_153_153;
#line 578 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__StoreMap_25;
#line 581 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_27_27;
#line 581 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_28_28;
#line 631 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30;
#line 590 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeNeedAcrossCall_29;
#line 673 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__NeedInResume_44;
#line 635 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeNeedInResume_43;
#line 687 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__NeedInParConj_55;
#line 677 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeNeedInParConj_54;

#line 530 "hlds_out_goal.m"
    {
#line 530 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 102);
    }
#line 546 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 531 "hlds_out_goal.m"
      {
#line 531 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__MaybeFollowVars_15;

#line 531 "hlds_out_goal.m"
        {
#line 531 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__MaybeFollowVars_15);
        }
#line 543 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__MaybeFollowVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 544 "hlds_out_goal.m"
          {
#line 544 "hlds_out_goal.m"
          }
#line 543 "hlds_out_goal.m"
        else
#line 533 "hlds_out_goal.m"
          {
#line 533 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__FollowVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeFollowVars_15, (MR_Integer) 0)));
#line 533 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__FollowVarsMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__FollowVars_16, (MR_Integer) 0)));
#line 533 "hlds_out_goal.m"
            MR_Integer hlds__hlds_out__hlds_out_goal__NextRegR_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__FollowVars_16, (MR_Integer) 1)));
#line 533 "hlds_out_goal.m"
            MR_Integer hlds__hlds_out__hlds_out_goal__NextRegF_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__FollowVars_16, (MR_Integer) 2)));
#line 533 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__FVlist_20;

#line 535 "hlds_out_goal.m"
            {
#line 535 "hlds_out_goal.m"
              mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, hlds__hlds_out__hlds_out_goal__FollowVarsMap_17, &hlds__hlds_out__hlds_out_goal__FVlist_20);
            }
#line 536 "hlds_out_goal.m"
            {
#line 536 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
            }
#line 537 "hlds_out_goal.m"
            {
#line 537 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% follow vars: r");
            }
#line 538 "hlds_out_goal.m"
            {
#line 538 "hlds_out_goal.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__NextRegR_18);
            }
#line 539 "hlds_out_goal.m"
            {
#line 539 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) ", f");
            }
#line 540 "hlds_out_goal.m"
            {
#line 540 "hlds_out_goal.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__NextRegF_19);
            }
#line 541 "hlds_out_goal.m"
            {
#line 541 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 542 "hlds_out_goal.m"
            {
#line 542 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__Indent_12, hlds__hlds_out__hlds_out_goal__FVlist_20);
            }
#line 533 "hlds_out_goal.m"
          }
#line 531 "hlds_out_goal.m"
      }
#line 546 "hlds_out_goal.m"
    else
#line 546 "hlds_out_goal.m"
      {
#line 546 "hlds_out_goal.m"
      }
#line 549 "hlds_out_goal.m"
    {
#line 549 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 114);
    }
#line 574 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 550 "hlds_out_goal.m"
      {
#line 550 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Resume_21;

#line 550 "hlds_out_goal.m"
        {
#line 550 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__Resume_21);
        }
#line 553 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__Resume_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "hlds_out_goal.m"
          {
#line 552 "hlds_out_goal.m"
          }
#line 553 "hlds_out_goal.m"
        else
#line 554 "hlds_out_goal.m"
          {
#line 554 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_151_151 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 554 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__ResumeVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Resume_21, (MR_Integer) 0)));
#line 554 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Locs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Resume_21, (MR_Integer) 1)));
#line 554 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__ResumeVarList_24;

#line 555 "hlds_out_goal.m"
            {
#line 555 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__ResumeVarList_24 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_151_151, hlds__hlds_out__hlds_out_goal__ResumeVars_22);
            }
#line 556 "hlds_out_goal.m"
            {
#line 556 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
            }
#line 557 "hlds_out_goal.m"
            {
#line 557 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% resume point ");
            }
#line 561 "hlds_out_goal.m"
#line 561 "hlds_out_goal.m"
            switch (hlds__hlds_out__hlds_out_goal__Locs_23) {
#line 561 "hlds_out_goal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 561 "hlds_out_goal.m"
              case (MR_Integer) 2:
#line 565 "hlds_out_goal.m"
                {
#line 566 "hlds_out_goal.m"
                  {
#line 566 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "orig and stack ");
                  }
#line 565 "hlds_out_goal.m"
                }
#line 561 "hlds_out_goal.m"
                break;
#line 561 "hlds_out_goal.m"
              case (MR_Integer) 0:
#line 559 "hlds_out_goal.m"
                {
#line 560 "hlds_out_goal.m"
                  {
#line 560 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "orig only ");
                  }
#line 559 "hlds_out_goal.m"
                }
#line 561 "hlds_out_goal.m"
                break;
#line 561 "hlds_out_goal.m"
              case (MR_Integer) 3:
#line 568 "hlds_out_goal.m"
                {
#line 569 "hlds_out_goal.m"
                  {
#line 569 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "stack and orig ");
                  }
#line 568 "hlds_out_goal.m"
                }
#line 561 "hlds_out_goal.m"
                break;
#line 561 "hlds_out_goal.m"
              case (MR_Integer) 1:
#line 562 "hlds_out_goal.m"
                {
#line 563 "hlds_out_goal.m"
                  {
#line 563 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "stack only ");
                  }
#line 562 "hlds_out_goal.m"
                }
#line 561 "hlds_out_goal.m"
                break;
#line 561 "hlds_out_goal.m"
            }
#line 571 "hlds_out_goal.m"
            {
#line 571 "hlds_out_goal.m"
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_151_151, hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__ResumeVarList_24);
            }
#line 572 "hlds_out_goal.m"
            {
#line 572 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 554 "hlds_out_goal.m"
          }
#line 550 "hlds_out_goal.m"
      }
#line 574 "hlds_out_goal.m"
    else
#line 574 "hlds_out_goal.m"
      {
#line 574 "hlds_out_goal.m"
      }
#line 578 "hlds_out_goal.m"
    {
#line 578 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 115);
    }
#line 578 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 578 "hlds_out_goal.m"
      {
#line 579 "hlds_out_goal.m"
        {
#line 579 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_store_map_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__StoreMap_25);
        }
#line 8901 "hlds.hlds_out.hlds_out_goal.c"
        hlds__hlds_out__hlds_out_goal__TypeInfo_152_152 = (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0];
#line 8903 "hlds.hlds_out.hlds_out_goal.c"
        hlds__hlds_out__hlds_out_goal__TypeCtorInfo_153_153 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 580 "hlds_out_goal.m"
        {
#line 580 "hlds_out_goal.m"
          mercury__map__to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_152_152, hlds__hlds_out__hlds_out_goal__TypeCtorInfo_153_153, hlds__hlds_out__hlds_out_goal__StoreMap_25, &hlds__hlds_out__hlds_out_goal__StoreMapList_26);
        }
#line 581 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__StoreMapList_26)) == (MR_mktag((MR_Integer) 1)));
#line 581 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 581 "hlds_out_goal.m"
          {
#line 581 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__StoreMapList_26, (MR_Integer) 0)));
#line 581 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__StoreMapList_26, (MR_Integer) 1)));
#line 581 "hlds_out_goal.m"
          }
#line 578 "hlds_out_goal.m"
      }
#line 586 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 583 "hlds_out_goal.m"
      {
#line 583 "hlds_out_goal.m"
        {
#line 583 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 584 "hlds_out_goal.m"
        {
#line 584 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% store map:\n");
        }
#line 585 "hlds_out_goal.m"
        {
#line 585 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__Indent_12, hlds__hlds_out__hlds_out_goal__StoreMapList_26);
        }
#line 583 "hlds_out_goal.m"
      }
#line 586 "hlds_out_goal.m"
    else
#line 586 "hlds_out_goal.m"
      {
#line 586 "hlds_out_goal.m"
      }
#line 590 "hlds_out_goal.m"
    {
#line 590 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 115);
    }
#line 590 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 590 "hlds_out_goal.m"
      {
#line 591 "hlds_out_goal.m"
        {
#line 591 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__MaybeNeedAcrossCall_29);
        }
#line 592 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeNeedAcrossCall_29)) == (MR_mktag((MR_Integer) 1)));
#line 592 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 592 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeNeedAcrossCall_29, (MR_Integer) 0)));
#line 590 "hlds_out_goal.m"
      }
#line 631 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 595 "hlds_out_goal.m"
      {
#line 595 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 595 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallForwardSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30, (MR_Integer) 0)));
#line 595 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallResumeSet_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30, (MR_Integer) 1)));
#line 595 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallNondetSet_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30, (MR_Integer) 2)));
#line 595 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallForwardList_34;
#line 595 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallResumeList_35;
#line 595 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__CallNondetList_36;

#line 596 "hlds_out_goal.m"
        {
#line 596 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__CallForwardList_34 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_154_154, hlds__hlds_out__hlds_out_goal__CallForwardSet_31);
        }
#line 597 "hlds_out_goal.m"
        {
#line 597 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__CallResumeList_35 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_154_154, hlds__hlds_out__hlds_out_goal__CallResumeSet_32);
        }
#line 598 "hlds_out_goal.m"
        {
#line 598 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__CallNondetList_36 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_154_154, hlds__hlds_out__hlds_out_goal__CallNondetSet_33);
        }
#line 599 "hlds_out_goal.m"
        {
#line 599 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 600 "hlds_out_goal.m"
        {
#line 600 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need across call forward vars: ");
        }
#line 604 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__CallForwardList_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 602 "hlds_out_goal.m"
          {
#line 603 "hlds_out_goal.m"
            {
#line 603 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
#line 602 "hlds_out_goal.m"
          }
#line 604 "hlds_out_goal.m"
        else
#line 605 "hlds_out_goal.m"
          {
#line 606 "hlds_out_goal.m"
            {
#line 606 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__CallForwardList_34);
            }
#line 607 "hlds_out_goal.m"
            {
#line 607 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 605 "hlds_out_goal.m"
          }
#line 610 "hlds_out_goal.m"
        {
#line 610 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 611 "hlds_out_goal.m"
        {
#line 611 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need across call resume vars: ");
        }
#line 615 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__CallResumeList_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 613 "hlds_out_goal.m"
          {
#line 614 "hlds_out_goal.m"
            {
#line 614 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
#line 613 "hlds_out_goal.m"
          }
#line 615 "hlds_out_goal.m"
        else
#line 616 "hlds_out_goal.m"
          {
#line 617 "hlds_out_goal.m"
            {
#line 617 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__CallResumeList_35);
            }
#line 618 "hlds_out_goal.m"
            {
#line 618 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 616 "hlds_out_goal.m"
          }
#line 621 "hlds_out_goal.m"
        {
#line 621 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 622 "hlds_out_goal.m"
        {
#line 622 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need across call nondet vars: ");
        }
#line 626 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__CallNondetList_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 624 "hlds_out_goal.m"
          {
#line 625 "hlds_out_goal.m"
            {
#line 625 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
#line 624 "hlds_out_goal.m"
          }
#line 626 "hlds_out_goal.m"
        else
#line 627 "hlds_out_goal.m"
          {
#line 628 "hlds_out_goal.m"
            {
#line 628 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__CallNondetList_36);
            }
#line 629 "hlds_out_goal.m"
            {
#line 629 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 627 "hlds_out_goal.m"
          }
#line 595 "hlds_out_goal.m"
      }
#line 631 "hlds_out_goal.m"
    else
#line 631 "hlds_out_goal.m"
      {
#line 631 "hlds_out_goal.m"
      }
#line 635 "hlds_out_goal.m"
    {
#line 635 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 115);
    }
#line 635 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 635 "hlds_out_goal.m"
      {
#line 636 "hlds_out_goal.m"
        {
#line 636 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__MaybeNeedInResume_43);
        }
#line 637 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeNeedInResume_43)) == (MR_mktag((MR_Integer) 1)));
#line 637 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 637 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__NeedInResume_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeNeedInResume_43, (MR_Integer) 0)));
#line 635 "hlds_out_goal.m"
      }
#line 673 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 640 "hlds_out_goal.m"
      {
#line 640 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_155_155 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 640 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeOnStack_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedInResume_44, (MR_Integer) 0)));
#line 640 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeResumeSet_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedInResume_44, (MR_Integer) 1)));
#line 640 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeNondetSet_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedInResume_44, (MR_Integer) 2)));
#line 640 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeResumeList_48;
#line 640 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeNondetList_49;

#line 641 "hlds_out_goal.m"
        {
#line 641 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ResumeResumeList_48 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_155_155, hlds__hlds_out__hlds_out_goal__ResumeResumeSet_46);
        }
#line 642 "hlds_out_goal.m"
        {
#line 642 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ResumeNondetList_49 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_155_155, hlds__hlds_out__hlds_out_goal__ResumeNondetSet_47);
        }
#line 644 "hlds_out_goal.m"
        {
#line 644 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 648 "hlds_out_goal.m"
#line 648 "hlds_out_goal.m"
        switch (hlds__hlds_out__hlds_out_goal__ResumeOnStack_45) {
#line 648 "hlds_out_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 648 "hlds_out_goal.m"
          case (MR_Integer) 0:
#line 649 "hlds_out_goal.m"
            {
#line 650 "hlds_out_goal.m"
              {
#line 650 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% resume point has no stack label\n");
              }
#line 649 "hlds_out_goal.m"
            }
#line 648 "hlds_out_goal.m"
            break;
#line 648 "hlds_out_goal.m"
          case (MR_Integer) 1:
#line 646 "hlds_out_goal.m"
            {
#line 647 "hlds_out_goal.m"
              {
#line 647 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% resume point has stack label\n");
              }
#line 646 "hlds_out_goal.m"
            }
#line 648 "hlds_out_goal.m"
            break;
#line 648 "hlds_out_goal.m"
        }
#line 652 "hlds_out_goal.m"
        {
#line 652 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 653 "hlds_out_goal.m"
        {
#line 653 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need in resume resume vars: ");
        }
#line 657 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__ResumeResumeList_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 655 "hlds_out_goal.m"
          {
#line 656 "hlds_out_goal.m"
            {
#line 656 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
#line 655 "hlds_out_goal.m"
          }
#line 657 "hlds_out_goal.m"
        else
#line 658 "hlds_out_goal.m"
          {
#line 659 "hlds_out_goal.m"
            {
#line 659 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__ResumeResumeList_48);
            }
#line 660 "hlds_out_goal.m"
            {
#line 660 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 658 "hlds_out_goal.m"
          }
#line 663 "hlds_out_goal.m"
        {
#line 663 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 664 "hlds_out_goal.m"
        {
#line 664 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need in resume nondet vars: ");
        }
#line 668 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__ResumeNondetList_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 666 "hlds_out_goal.m"
          {
#line 667 "hlds_out_goal.m"
            {
#line 667 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
#line 666 "hlds_out_goal.m"
          }
#line 668 "hlds_out_goal.m"
        else
#line 669 "hlds_out_goal.m"
          {
#line 670 "hlds_out_goal.m"
            {
#line 670 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__ResumeNondetList_49);
            }
#line 671 "hlds_out_goal.m"
            {
#line 671 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 669 "hlds_out_goal.m"
          }
#line 640 "hlds_out_goal.m"
      }
#line 673 "hlds_out_goal.m"
    else
#line 673 "hlds_out_goal.m"
      {
#line 673 "hlds_out_goal.m"
      }
#line 677 "hlds_out_goal.m"
    {
#line 677 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 115);
    }
#line 677 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 677 "hlds_out_goal.m"
      {
#line 678 "hlds_out_goal.m"
        {
#line 678 "hlds_out_goal.m"
          hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__MaybeNeedInParConj_54);
        }
#line 679 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeNeedInParConj_54)) == (MR_mktag((MR_Integer) 1)));
#line 679 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 679 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__NeedInParConj_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeNeedInParConj_54, (MR_Integer) 0)));
#line 677 "hlds_out_goal.m"
      }
#line 687 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 681 "hlds_out_goal.m"
      {
#line 681 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ParConjSet_56 = (MR_Word) hlds__hlds_out__hlds_out_goal__NeedInParConj_55;
#line 681 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ParConjList_57;

#line 682 "hlds_out_goal.m"
        {
#line 682 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ParConjList_57 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ParConjSet_56);
        }
#line 683 "hlds_out_goal.m"
        {
#line 683 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
#line 684 "hlds_out_goal.m"
        {
#line 684 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% need in par_conj vars: ");
        }
#line 685 "hlds_out_goal.m"
        {
#line 685 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__ParConjList_57);
        }
#line 686 "hlds_out_goal.m"
        {
#line 686 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 686 "hlds_out_goal.m"
          return;
        }
#line 681 "hlds_out_goal.m"
      }
#line 687 "hlds_out_goal.m"
    else
#line 687 "hlds_out_goal.m"
      {
#line 687 "hlds_out_goal.m"
      }
#line 528 "hlds_out_goal.m"
  }
#line 525 "hlds_out_goal.m"
}

#line 115 "hlds_out_goal.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(
#line 115 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__VarName_5,
#line 115 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__MainConsName_6,
#line 115 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__OtherConsNames_7)
#line 115 "hlds_out_goal.m"
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
#line 115 "hlds_out_goal.m"
}

#line 107 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(
#line 107 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TaggedConsId_4,
#line 107 "hlds_out_goal.m"
  MR_String * hlds__hlds_out__hlds_out_goal__ConsName_5,
#line 107 "hlds_out_goal.m"
  MR_Word * hlds__hlds_out__hlds_out_goal__ConsTag_6)
#line 107 "hlds_out_goal.m"
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
#line 107 "hlds_out_goal.m"
}

#line 100 "hlds_out_goal.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(
#line 100 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_6,
#line 100 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
#line 100 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8,
#line 100 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_9)
#line 100 "hlds_out_goal.m"
{
#line 1036 "hlds_out_goal.m"
  {
#line 1036 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 1036 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__Str_10;

#line 1036 "hlds_out_goal.m"
#line 1036 "hlds_out_goal.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__RHS_9)) {
#line 1036 "hlds_out_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1036 "hlds_out_goal.m"
      case (MR_Integer) 0:
#line 1036 "hlds_out_goal.m"
        {
#line 1036 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RHS_9, (MR_Integer) 0)));

#line 1037 "hlds_out_goal.m"
          {
#line 1037 "hlds_out_goal.m"
            return hlds__hlds_out__hlds_out_goal__Str_10 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__VarNamePrint_8, hlds__hlds_out__hlds_out_goal__Var_11);
          }
#line 1036 "hlds_out_goal.m"
        }
#line 1036 "hlds_out_goal.m"
        break;
#line 1036 "hlds_out_goal.m"
      case (MR_Integer) 1:
#line 1039 "hlds_out_goal.m"
        {
#line 1039 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_9, (MR_Integer) 0)));
#line 1039 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__IsExistConstruct_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_9, (MR_Integer) 1)));
#line 1039 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_9, (MR_Integer) 2)));
#line 1039 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId_19;
#line 1046 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__SymName0_15;
#line 1046 "hlds_out_goal.m"
          MR_Integer hlds__hlds_out__hlds_out_goal__Arity_16;
#line 1046 "hlds_out_goal.m"
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtor_17;

#line 1041 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__IsExistConstruct_13 == (MR_Integer) 1);
#line 1041 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1041 "hlds_out_goal.m"
            {
#line 1042 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ConsId0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1042 "hlds_out_goal.m"
              if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1042 "hlds_out_goal.m"
                {
#line 1042 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__SymName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_12, (MR_Integer) 1)));
#line 1042 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_12, (MR_Integer) 2)));
#line 1042 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__TypeCtor_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_12, (MR_Integer) 3)));
#line 1042 "hlds_out_goal.m"
                }
#line 1041 "hlds_out_goal.m"
            }
#line 1046 "hlds_out_goal.m"
          if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 1044 "hlds_out_goal.m"
            {
#line 1044 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__SymName_18;

#line 1044 "hlds_out_goal.m"
              {
#line 1044 "hlds_out_goal.m"
                parse_tree__prog_type__add_new_prefix_2_p_0(hlds__hlds_out__hlds_out_goal__SymName0_15, &hlds__hlds_out__hlds_out_goal__SymName_18);
              }
#line 1045 "hlds_out_goal.m"
              {
#line 1045 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__ConsId_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1045 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__SymName_18));
#line 1045 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_19, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Arity_16));
#line 1045 "hlds_out_goal.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_19, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__TypeCtor_17));
#line 1045 "hlds_out_goal.m"
              }
#line 1044 "hlds_out_goal.m"
            }
#line 1046 "hlds_out_goal.m"
          else
#line 1047 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__ConsId_19 = hlds__hlds_out__hlds_out_goal__ConsId0_12;
#line 1049 "hlds_out_goal.m"
          {
#line 1049 "hlds_out_goal.m"
            return hlds__hlds_out__hlds_out_goal__Str_10 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_6, hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__VarNamePrint_8, hlds__hlds_out__hlds_out_goal__ConsId_19, hlds__hlds_out__hlds_out_goal__ArgVars_14);
          }
#line 1039 "hlds_out_goal.m"
        }
#line 1036 "hlds_out_goal.m"
        break;
#line 1036 "hlds_out_goal.m"
      case (MR_Integer) 2:
#line 1053 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__Str_10 = (MR_String) "lambda goal";
#line 1036 "hlds_out_goal.m"
        break;
#line 1036 "hlds_out_goal.m"
    }
#line 1036 "hlds_out_goal.m"
    return hlds__hlds_out__hlds_out_goal__Str_10;
#line 1036 "hlds_out_goal.m"
  }
#line 100 "hlds_out_goal.m"
}

#line 91 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_9_p_0(
#line 91 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_10,
#line 91 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_11,
#line 91 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_12,
#line 91 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_13,
#line 91 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_14,
#line 91 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_15,
#line 91 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_16)
#line 91 "hlds_out_goal.m"
{
#line 899 "hlds_out_goal.m"
  {
#line 899 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 900 "hlds_out_goal.m"
    {
#line 900 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_p_0(hlds__hlds_out__hlds_out_goal__Info_10, hlds__hlds_out__hlds_out_goal__ModuleInfo_11, hlds__hlds_out__hlds_out_goal__VarSet_12, hlds__hlds_out__hlds_out_goal__InstVarSet_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__Indent_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_goal__RHS_16);
#line 900 "hlds_out_goal.m"
      return;
    }
#line 899 "hlds_out_goal.m"
  }
#line 91 "hlds_out_goal.m"
}

#line 81 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(
#line 81 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_1,
#line 81 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_2,
#line 81 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_3,
#line 81 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__4_4)
#line 81 "hlds_out_goal.m"
{
#line 691 "hlds_out_goal.m"
  while (MR_TRUE)
#line 691 "hlds_out_goal.m"
    {
#line 691 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 691 "hlds_out_goal.m"
      {
#line 691 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 691 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 691 "hlds_out_goal.m"
          {
#line 691 "hlds_out_goal.m"
          }
#line 691 "hlds_out_goal.m"
        else
#line 693 "hlds_out_goal.m"
          {
#line 693 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Var_16;
#line 693 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Loc_17;
#line 693 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__VarLocs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__4_4, (MR_Integer) 1)));
#line 693 "hlds_out_goal.m"
            MR_String hlds__hlds_out__hlds_out_goal__LocnStr_20;
#line 693 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__MaybeWidth_21;
#line 693 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__4_4, (MR_Integer) 0)));

#line 692 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_25_25, (MR_Integer) 0)));
#line 692 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__Loc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_25_25, (MR_Integer) 1)));
#line 694 "hlds_out_goal.m"
            {
#line 694 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_3);
            }
#line 695 "hlds_out_goal.m"
            {
#line 695 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "%\t");
            }
#line 696 "hlds_out_goal.m"
            {
#line 696 "hlds_out_goal.m"
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__VarNamePrint_2, hlds__hlds_out__hlds_out_goal__Var_16);
            }
#line 697 "hlds_out_goal.m"
            {
#line 697 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\t-> ");
            }
#line 698 "hlds_out_goal.m"
            {
#line 698 "hlds_out_goal.m"
              hlds__hlds_llds__abs_locn_to_string_3_p_0(hlds__hlds_out__hlds_out_goal__Loc_17, &hlds__hlds_out__hlds_out_goal__LocnStr_20, &hlds__hlds_out__hlds_out_goal__MaybeWidth_21);
            }
#line 699 "hlds_out_goal.m"
            {
#line 699 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__LocnStr_20);
            }
#line 704 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__MaybeWidth_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "hlds_out_goal.m"
              {
#line 705 "hlds_out_goal.m"
              }
#line 704 "hlds_out_goal.m"
            else
#line 701 "hlds_out_goal.m"
              {
#line 701 "hlds_out_goal.m"
                MR_String hlds__hlds_out__hlds_out_goal__Width_22 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeWidth_21, (MR_Integer) 0)));

#line 702 "hlds_out_goal.m"
                {
#line 702 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) " ");
                }
#line 703 "hlds_out_goal.m"
                {
#line 703 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Width_22);
                }
#line 701 "hlds_out_goal.m"
              }
#line 707 "hlds_out_goal.m"
            {
#line 707 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 708 "hlds_out_goal.m"
            /* direct tailcall eliminated */
#line 708 "hlds_out_goal.m"
            {
#line 708 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__4__tmp_copy_4 = hlds__hlds_out__hlds_out_goal__VarLocs_18;

#line 708 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__HeadVar__4_4 = hlds__hlds_out__hlds_out_goal__HeadVar__4__tmp_copy_4;
#line 708 "hlds_out_goal.m"
            }
#line 708 "hlds_out_goal.m"
            continue;
#line 693 "hlds_out_goal.m"
          }
#line 691 "hlds_out_goal.m"
      }
#line 691 "hlds_out_goal.m"
      break;
#line 691 "hlds_out_goal.m"
    }
#line 81 "hlds_out_goal.m"
}

#line 73 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(
#line 73 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 73 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 73 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 73 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 73 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 73 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 73 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Separator_17,
#line 73 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goals_18)
#line 73 "hlds_out_goal.m"
{
#line 784 "hlds_out_goal.m"
  while (MR_TRUE)
#line 784 "hlds_out_goal.m"
    {
#line 784 "hlds_out_goal.m"
      /* tailcall optimized into a loop */
#line 784 "hlds_out_goal.m"
      {
#line 784 "hlds_out_goal.m"
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 784 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__Goals_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 792 "hlds_out_goal.m"
          {
#line 792 "hlds_out_goal.m"
          }
#line 784 "hlds_out_goal.m"
        else
#line 784 "hlds_out_goal.m"
          {
#line 784 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__HeadGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Goals_18, (MR_Integer) 0)));
#line 784 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TailGoals_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Goals_18, (MR_Integer) 1)));
#line 784 "hlds_out_goal.m"
            MR_Integer hlds__hlds_out__hlds_out_goal__V_26_26;

#line 785 "hlds_out_goal.m"
            {
#line 785 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 786 "hlds_out_goal.m"
            {
#line 786 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Separator_17);
            }
#line 788 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__V_26_26 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
#line 787 "hlds_out_goal.m"
            {
#line 787 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_26_26, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__HeadGoal_20);
            }
#line 789 "hlds_out_goal.m"
            /* direct tailcall eliminated */
#line 789 "hlds_out_goal.m"
            {
#line 789 "hlds_out_goal.m"
              MR_Word hlds__hlds_out__hlds_out_goal__Goals__tmp_copy_18 = hlds__hlds_out__hlds_out_goal__TailGoals_21;

#line 789 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__Goals_18 = hlds__hlds_out__hlds_out_goal__Goals__tmp_copy_18;
#line 789 "hlds_out_goal.m"
            }
#line 789 "hlds_out_goal.m"
            continue;
#line 784 "hlds_out_goal.m"
          }
#line 784 "hlds_out_goal.m"
      }
#line 784 "hlds_out_goal.m"
      break;
#line 784 "hlds_out_goal.m"
    }
#line 73 "hlds_out_goal.m"
}

#line 479 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_6(
#line 479 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 479 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 479 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 479 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 479 "hlds_out_goal.m"
{
#line 479 "hlds_out_goal.m"
  {
#line 479 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 479 "hlds_out_goal.m"
    {
#line 479 "hlds_out_goal.m"
      mercury__io__write_string_3_p_0(((MR_String) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 479 "hlds_out_goal.m"
      return;
    }
#line 479 "hlds_out_goal.m"
  }
#line 479 "hlds_out_goal.m"
}

#line 329 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_5(
#line 329 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
#line 329 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
#line 329 "hlds_out_goal.m"
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
#line 329 "hlds_out_goal.m"
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
#line 329 "hlds_out_goal.m"
{
#line 329 "hlds_out_goal.m"
  {
#line 329 "hlds_out_goal.m"
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

#line 329 "hlds_out_goal.m"
    {
#line 329 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__329__1_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
#line 329 "hlds_out_goal.m"
      return;
    }
#line 329 "hlds_out_goal.m"
  }
#line 329 "hlds_out_goal.m"
}

#line 325 "hlds_out_goal.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_4(
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
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_3(
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
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_2(
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
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_1(
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

#line 60 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(
#line 60 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
#line 60 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
#line 60 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
#line 60 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
#line 60 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
#line 60 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
#line 60 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
#line 60 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goal_18)
#line 60 "hlds_out_goal.m"
{
#line 169 "hlds_out_goal.m"
  {
#line 169 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 169 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Goal_18, (MR_Integer) 0)));
#line 169 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Goal_18, (MR_Integer) 1)));
#line 169 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
#line 169 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__CodeGenInfo_80;
#line 173 "hlds_out_goal.m"
    MR_String hlds__hlds_out__hlds_out_goal__V_300_300 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
#line 173 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
#line 173 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
#line 173 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));

#line 174 "hlds_out_goal.m"
    {
#line 174 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 99);
    }
#line 188 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 175 "hlds_out_goal.m"
      {
#line 175 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Context_23;
#line 175 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__FileName_24;
#line 175 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__LineNumber_25;

#line 175 "hlds_out_goal.m"
        {
#line 175 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 176 "hlds_out_goal.m"
        {
#line 176 "hlds_out_goal.m"
          mercury__term__context_file_2_p_0(hlds__hlds_out__hlds_out_goal__Context_23, &hlds__hlds_out__hlds_out_goal__FileName_24);
        }
#line 177 "hlds_out_goal.m"
        {
#line 177 "hlds_out_goal.m"
          mercury__term__context_line_2_p_0(hlds__hlds_out__hlds_out_goal__Context_23, &hlds__hlds_out__hlds_out_goal__LineNumber_25);
        }
#line 178 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = (strcmp(hlds__hlds_out__hlds_out_goal__FileName_24, (MR_String) "") == 0);
#line 180 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 180 "hlds_out_goal.m"
          {
#line 180 "hlds_out_goal.m"
          }
#line 180 "hlds_out_goal.m"
        else
#line 181 "hlds_out_goal.m"
          {
#line 181 "hlds_out_goal.m"
            {
#line 181 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 182 "hlds_out_goal.m"
            {
#line 182 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
            }
#line 183 "hlds_out_goal.m"
            {
#line 183 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__FileName_24);
            }
#line 184 "hlds_out_goal.m"
            {
#line 184 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\', line ");
            }
#line 185 "hlds_out_goal.m"
            {
#line 185 "hlds_out_goal.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__LineNumber_25);
            }
#line 186 "hlds_out_goal.m"
            {
#line 186 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 181 "hlds_out_goal.m"
          }
#line 175 "hlds_out_goal.m"
      }
#line 188 "hlds_out_goal.m"
    else
#line 188 "hlds_out_goal.m"
      {
#line 188 "hlds_out_goal.m"
      }
#line 191 "hlds_out_goal.m"
    {
#line 191 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 80);
    }
#line 202 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 192 "hlds_out_goal.m"
      {
#line 192 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__GoalId_26;
#line 192 "hlds_out_goal.m"
        MR_Integer hlds__hlds_out__hlds_out_goal__GoalIdNum_27;

#line 192 "hlds_out_goal.m"
        {
#line 192 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__GoalId_26 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 193 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__GoalIdNum_27 = (MR_Integer) hlds__hlds_out__hlds_out_goal__GoalId_26;
#line 194 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__GoalIdNum_27 < (MR_Integer) 0);
#line 196 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 196 "hlds_out_goal.m"
          {
#line 196 "hlds_out_goal.m"
          }
#line 196 "hlds_out_goal.m"
        else
#line 197 "hlds_out_goal.m"
          {
#line 197 "hlds_out_goal.m"
            {
#line 197 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 198 "hlds_out_goal.m"
            {
#line 198 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% goal id: ");
            }
#line 199 "hlds_out_goal.m"
            {
#line 199 "hlds_out_goal.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__GoalIdNum_27);
            }
#line 200 "hlds_out_goal.m"
            {
#line 200 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 197 "hlds_out_goal.m"
          }
#line 192 "hlds_out_goal.m"
      }
#line 202 "hlds_out_goal.m"
    else
#line 202 "hlds_out_goal.m"
      {
#line 202 "hlds_out_goal.m"
      }
#line 205 "hlds_out_goal.m"
    {
#line 205 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 110);
    }
#line 217 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 206 "hlds_out_goal.m"
      {
#line 206 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_304_304;
#line 206 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__NonLocalsSet_28;
#line 206 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__NonLocalsList_29;

#line 206 "hlds_out_goal.m"
        {
#line 206 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__NonLocalsSet_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 10266 "hlds.hlds_out.hlds_out_goal.c"
        hlds__hlds_out__hlds_out_goal__TypeCtorInfo_304_304 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 207 "hlds_out_goal.m"
        {
#line 207 "hlds_out_goal.m"
          parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_304_304, hlds__hlds_out__hlds_out_goal__NonLocalsSet_28, &hlds__hlds_out__hlds_out_goal__NonLocalsList_29);
        }
#line 214 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__NonLocalsList_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "hlds_out_goal.m"
          {
#line 215 "hlds_out_goal.m"
          }
#line 214 "hlds_out_goal.m"
        else
#line 209 "hlds_out_goal.m"
          {
#line 210 "hlds_out_goal.m"
            {
#line 210 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 211 "hlds_out_goal.m"
            {
#line 211 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% nonlocals: ");
            }
#line 212 "hlds_out_goal.m"
            {
#line 212 "hlds_out_goal.m"
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_304_304, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__NonLocalsList_29);
            }
#line 213 "hlds_out_goal.m"
            {
#line 213 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 209 "hlds_out_goal.m"
          }
#line 206 "hlds_out_goal.m"
      }
#line 217 "hlds_out_goal.m"
    else
#line 217 "hlds_out_goal.m"
      {
#line 217 "hlds_out_goal.m"
      }
#line 220 "hlds_out_goal.m"
    {
#line 220 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 112);
    }
#line 245 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 232 "hlds_out_goal.m"
      {
#line 230 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PreDeathList_33;
#line 222 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_305_305;
#line 222 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PreDeaths_32;
#line 224 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_34_34;
#line 224 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_35_35;
#line 242 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PreBirthList_37;
#line 234 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_307_307;
#line 234 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PreBirths_36;
#line 236 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_38_38;
#line 236 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_39_39;

#line 222 "hlds_out_goal.m"
        {
#line 222 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21, &hlds__hlds_out__hlds_out_goal__PreDeaths_32);
        }
#line 222 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 222 "hlds_out_goal.m"
          {
#line 10352 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_305_305 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 223 "hlds_out_goal.m"
            {
#line 223 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__PreDeathList_33 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_305_305, hlds__hlds_out__hlds_out_goal__PreDeaths_32);
            }
#line 224 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PreDeathList_33)) == (MR_mktag((MR_Integer) 1)));
#line 224 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 224 "hlds_out_goal.m"
              {
#line 224 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PreDeathList_33, (MR_Integer) 0)));
#line 224 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PreDeathList_33, (MR_Integer) 1)));
#line 224 "hlds_out_goal.m"
              }
#line 222 "hlds_out_goal.m"
          }
#line 230 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 226 "hlds_out_goal.m"
          {
#line 226 "hlds_out_goal.m"
            {
#line 226 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 227 "hlds_out_goal.m"
            {
#line 227 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% pre-deaths: ");
            }
#line 228 "hlds_out_goal.m"
            {
#line 228 "hlds_out_goal.m"
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__PreDeathList_33);
            }
#line 229 "hlds_out_goal.m"
            {
#line 229 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 226 "hlds_out_goal.m"
          }
#line 230 "hlds_out_goal.m"
        else
#line 230 "hlds_out_goal.m"
          {
#line 230 "hlds_out_goal.m"
          }
#line 234 "hlds_out_goal.m"
        {
#line 234 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_births_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21, &hlds__hlds_out__hlds_out_goal__PreBirths_36);
        }
#line 234 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 234 "hlds_out_goal.m"
          {
#line 10414 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_307_307 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 235 "hlds_out_goal.m"
            {
#line 235 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__PreBirthList_37 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_307_307, hlds__hlds_out__hlds_out_goal__PreBirths_36);
            }
#line 236 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PreBirthList_37)) == (MR_mktag((MR_Integer) 1)));
#line 236 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 236 "hlds_out_goal.m"
              {
#line 236 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PreBirthList_37, (MR_Integer) 0)));
#line 236 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PreBirthList_37, (MR_Integer) 1)));
#line 236 "hlds_out_goal.m"
              }
#line 234 "hlds_out_goal.m"
          }
#line 242 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 238 "hlds_out_goal.m"
          {
#line 238 "hlds_out_goal.m"
            {
#line 238 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 239 "hlds_out_goal.m"
            {
#line 239 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% pre-births: ");
            }
#line 240 "hlds_out_goal.m"
            {
#line 240 "hlds_out_goal.m"
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__PreBirthList_37);
            }
#line 241 "hlds_out_goal.m"
            {
#line 241 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 238 "hlds_out_goal.m"
          }
#line 242 "hlds_out_goal.m"
        else
#line 242 "hlds_out_goal.m"
          {
#line 242 "hlds_out_goal.m"
          }
#line 232 "hlds_out_goal.m"
      }
#line 245 "hlds_out_goal.m"
    else
#line 245 "hlds_out_goal.m"
      {
#line 245 "hlds_out_goal.m"
      }
#line 248 "hlds_out_goal.m"
    {
#line 248 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 66);
    }
#line 294 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 249 "hlds_out_goal.m"
      {
#line 249 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ProducingVars_40;
#line 249 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ConsumingVars_42;
#line 249 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__MakeVisibleVars_44;
#line 249 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__NeedVisibleVars_46;

#line 249 "hlds_out_goal.m"
        {
#line 249 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ProducingVars_40 = hlds__hlds_goal__producing_vars_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 250 "hlds_out_goal.m"
        {
#line 250 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ProducingVars_40);
        }
#line 256 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 251 "hlds_out_goal.m"
          {
#line 251 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_310_310 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 251 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__ProducingVarsList_41;

#line 251 "hlds_out_goal.m"
            {
#line 251 "hlds_out_goal.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_310_310, hlds__hlds_out__hlds_out_goal__ProducingVars_40, &hlds__hlds_out__hlds_out_goal__ProducingVarsList_41);
            }
#line 252 "hlds_out_goal.m"
            {
#line 252 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 253 "hlds_out_goal.m"
            {
#line 253 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% producing vars: ");
            }
#line 254 "hlds_out_goal.m"
            {
#line 254 "hlds_out_goal.m"
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_310_310, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__ProducingVarsList_41);
            }
#line 255 "hlds_out_goal.m"
            {
#line 255 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 251 "hlds_out_goal.m"
          }
#line 256 "hlds_out_goal.m"
        else
#line 256 "hlds_out_goal.m"
          {
#line 256 "hlds_out_goal.m"
          }
#line 260 "hlds_out_goal.m"
        {
#line 260 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__ConsumingVars_42 = hlds__hlds_goal__consuming_vars_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 261 "hlds_out_goal.m"
        {
#line 261 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ConsumingVars_42);
        }
#line 267 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 262 "hlds_out_goal.m"
          {
#line 262 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_312_312 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 262 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__ConsumingVarsList_43;

#line 262 "hlds_out_goal.m"
            {
#line 262 "hlds_out_goal.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_312_312, hlds__hlds_out__hlds_out_goal__ConsumingVars_42, &hlds__hlds_out__hlds_out_goal__ConsumingVarsList_43);
            }
#line 263 "hlds_out_goal.m"
            {
#line 263 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 264 "hlds_out_goal.m"
            {
#line 264 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% consuming vars: ");
            }
#line 265 "hlds_out_goal.m"
            {
#line 265 "hlds_out_goal.m"
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_312_312, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__ConsumingVarsList_43);
            }
#line 266 "hlds_out_goal.m"
            {
#line 266 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 262 "hlds_out_goal.m"
          }
#line 267 "hlds_out_goal.m"
        else
#line 267 "hlds_out_goal.m"
          {
#line 267 "hlds_out_goal.m"
          }
#line 271 "hlds_out_goal.m"
        {
#line 271 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__MakeVisibleVars_44 = hlds__hlds_goal__make_visible_vars_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 272 "hlds_out_goal.m"
        {
#line 272 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__MakeVisibleVars_44);
        }
#line 279 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 273 "hlds_out_goal.m"
          {
#line 273 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_314_314 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 273 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__MakeVisibleVarsList_45;

#line 273 "hlds_out_goal.m"
            {
#line 273 "hlds_out_goal.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_314_314, hlds__hlds_out__hlds_out_goal__MakeVisibleVars_44, &hlds__hlds_out__hlds_out_goal__MakeVisibleVarsList_45);
            }
#line 274 "hlds_out_goal.m"
            {
#line 274 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 275 "hlds_out_goal.m"
            {
#line 275 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% make_visible vars: ");
            }
#line 276 "hlds_out_goal.m"
            {
#line 276 "hlds_out_goal.m"
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_314_314, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__MakeVisibleVarsList_45);
            }
#line 278 "hlds_out_goal.m"
            {
#line 278 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 273 "hlds_out_goal.m"
          }
#line 279 "hlds_out_goal.m"
        else
#line 279 "hlds_out_goal.m"
          {
#line 279 "hlds_out_goal.m"
          }
#line 283 "hlds_out_goal.m"
        {
#line 283 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__NeedVisibleVars_46 = hlds__hlds_goal__need_visible_vars_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 284 "hlds_out_goal.m"
        {
#line 284 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__NeedVisibleVars_46);
        }
#line 291 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 285 "hlds_out_goal.m"
          {
#line 285 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_316_316 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 285 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__NeedVisibleVarsList_47;

#line 285 "hlds_out_goal.m"
            {
#line 285 "hlds_out_goal.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_316_316, hlds__hlds_out__hlds_out_goal__NeedVisibleVars_46, &hlds__hlds_out__hlds_out_goal__NeedVisibleVarsList_47);
            }
#line 286 "hlds_out_goal.m"
            {
#line 286 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 287 "hlds_out_goal.m"
            {
#line 287 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% need_visible vars: ");
            }
#line 288 "hlds_out_goal.m"
            {
#line 288 "hlds_out_goal.m"
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_316_316, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__NeedVisibleVarsList_47);
            }
#line 290 "hlds_out_goal.m"
            {
#line 290 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 285 "hlds_out_goal.m"
          }
#line 291 "hlds_out_goal.m"
        else
#line 291 "hlds_out_goal.m"
          {
#line 291 "hlds_out_goal.m"
          }
#line 249 "hlds_out_goal.m"
      }
#line 294 "hlds_out_goal.m"
    else
#line 294 "hlds_out_goal.m"
      {
#line 294 "hlds_out_goal.m"
      }
#line 297 "hlds_out_goal.m"
    {
#line 297 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 100);
    }
#line 303 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 298 "hlds_out_goal.m"
      {
#line 298 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Determinism_48;
#line 298 "hlds_out_goal.m"
        MR_String hlds__hlds_out__hlds_out_goal__V_155_155;

#line 298 "hlds_out_goal.m"
        {
#line 298 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
#line 299 "hlds_out_goal.m"
        {
#line 299 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "% determinism: ");
        }
#line 300 "hlds_out_goal.m"
        {
#line 300 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Determinism_48 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 301 "hlds_out_goal.m"
        {
#line 301 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_155_155 = parse_tree__prog_out__determinism_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__Determinism_48);
        }
#line 301 "hlds_out_goal.m"
        {
#line 301 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_155_155);
        }
#line 302 "hlds_out_goal.m"
        {
#line 302 "hlds_out_goal.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 298 "hlds_out_goal.m"
      }
#line 303 "hlds_out_goal.m"
    else
#line 303 "hlds_out_goal.m"
      {
#line 303 "hlds_out_goal.m"
      }
#line 306 "hlds_out_goal.m"
    {
#line 306 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 101);
    }
#line 334 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 307 "hlds_out_goal.m"
      {
#line 307 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__MaybeRbmmInfo_49;

#line 307 "hlds_out_goal.m"
        {
#line 307 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__MaybeRbmmInfo_49 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 331 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__MaybeRbmmInfo_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "hlds_out_goal.m"
          {
#line 332 "hlds_out_goal.m"
          }
#line 331 "hlds_out_goal.m"
        else
#line 309 "hlds_out_goal.m"
          {
#line 309 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeInfo_317_317;
#line 309 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__RbmmInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeRbmmInfo_49, (MR_Integer) 0)));
#line 309 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Created_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 0)));
#line 309 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Removed_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 1)));
#line 309 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Carried_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 2)));
#line 309 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Alloc_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 3)));
#line 309 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__Used_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 4)));
#line 309 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_163_163;
#line 309 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_171_171;
#line 309 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_179_179;
#line 309 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_187_187;
#line 309 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_195_195;

#line 311 "hlds_out_goal.m"
            {
#line 311 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 312 "hlds_out_goal.m"
            {
#line 312 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Created regions: ");
            }
#line 10823 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeInfo_317_317 = (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0];
#line 313 "hlds_out_goal.m"
            {
#line 313 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_163_163 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Created_51);
            }
#line 313 "hlds_out_goal.m"
            {
#line 313 "hlds_out_goal.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_163_163, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[0]);
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
              mercury__io__write_string_3_p_0((MR_String) "% Removed regions: ");
            }
#line 317 "hlds_out_goal.m"
            {
#line 317 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_171_171 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Removed_52);
            }
#line 317 "hlds_out_goal.m"
            {
#line 317 "hlds_out_goal.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_171_171, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[1]);
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
              mercury__io__write_string_3_p_0((MR_String) "% Carried regions: ");
            }
#line 321 "hlds_out_goal.m"
            {
#line 321 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_179_179 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Carried_53);
            }
#line 321 "hlds_out_goal.m"
            {
#line 321 "hlds_out_goal.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_179_179, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[2]);
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
              mercury__io__write_string_3_p_0((MR_String) "% Allocated into regions: ");
            }
#line 325 "hlds_out_goal.m"
            {
#line 325 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_187_187 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Alloc_54);
            }
#line 325 "hlds_out_goal.m"
            {
#line 325 "hlds_out_goal.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_187_187, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[3]);
            }
#line 326 "hlds_out_goal.m"
            {
#line 326 "hlds_out_goal.m"
              mercury__io__nl_2_p_0();
            }
#line 327 "hlds_out_goal.m"
            {
#line 327 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 328 "hlds_out_goal.m"
            {
#line 328 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Used regions: ");
            }
#line 329 "hlds_out_goal.m"
            {
#line 329 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_195_195 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Used_55);
            }
#line 329 "hlds_out_goal.m"
            {
#line 329 "hlds_out_goal.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_195_195, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[4]);
            }
#line 330 "hlds_out_goal.m"
            {
#line 330 "hlds_out_goal.m"
              mercury__io__nl_2_p_0();
            }
#line 309 "hlds_out_goal.m"
          }
#line 307 "hlds_out_goal.m"
      }
#line 334 "hlds_out_goal.m"
    else
#line 334 "hlds_out_goal.m"
      {
#line 334 "hlds_out_goal.m"
      }
#line 337 "hlds_out_goal.m"
    {
#line 337 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 122);
    }
#line 350 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 338 "hlds_out_goal.m"
      {
#line 338 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Purity_56;

#line 338 "hlds_out_goal.m"
        {
#line 338 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Purity_56 = hlds__hlds_goal__goal_info_get_purity_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 341 "hlds_out_goal.m"
#line 341 "hlds_out_goal.m"
        switch (hlds__hlds_out__hlds_out_goal__Purity_56) {
#line 341 "hlds_out_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 341 "hlds_out_goal.m"
          case (MR_Integer) 2:
#line 346 "hlds_out_goal.m"
            {
#line 347 "hlds_out_goal.m"
              {
#line 347 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
#line 348 "hlds_out_goal.m"
              {
#line 348 "hlds_out_goal.m"
                mercury__io__write_string_3_p_0((MR_String) "% impure\n");
              }
#line 346 "hlds_out_goal.m"
            }
#line 341 "hlds_out_goal.m"
            break;
#line 341 "hlds_out_goal.m"
          case (MR_Integer) 0:
#line 340 "hlds_out_goal.m"
            {
#line 340 "hlds_out_goal.m"
            }
#line 341 "hlds_out_goal.m"
            break;
#line 341 "hlds_out_goal.m"
          case (MR_Integer) 1:
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
                mercury__io__write_string_3_p_0((MR_String) "% semipure\n");
              }
#line 342 "hlds_out_goal.m"
            }
#line 341 "hlds_out_goal.m"
            break;
#line 341 "hlds_out_goal.m"
        }
#line 338 "hlds_out_goal.m"
      }
#line 350 "hlds_out_goal.m"
    else
#line 350 "hlds_out_goal.m"
      {
#line 350 "hlds_out_goal.m"
      }
#line 353 "hlds_out_goal.m"
    {
#line 353 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 69);
    }
#line 393 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 354 "hlds_out_goal.m"
      {
#line 354 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__MaybeDPInfo_57;

#line 354 "hlds_out_goal.m"
        {
#line 354 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__MaybeDPInfo_57 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 390 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__MaybeDPInfo_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "hlds_out_goal.m"
          {
#line 391 "hlds_out_goal.m"
          }
#line 390 "hlds_out_goal.m"
        else
#line 356 "hlds_out_goal.m"
          {
#line 356 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__MdprofInst_58;
#line 356 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__MaybeDPCoverageInfo_59;
#line 356 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeDPInfo_57, (MR_Integer) 0)));

#line 356 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__MdprofInst_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_208_208, (MR_Integer) 0)));
#line 356 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__MaybeDPCoverageInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_208_208, (MR_Integer) 1)));
#line 361 "hlds_out_goal.m"
#line 361 "hlds_out_goal.m"
            switch (hlds__hlds_out__hlds_out_goal__MdprofInst_58) {
#line 361 "hlds_out_goal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 361 "hlds_out_goal.m"
              case (MR_Integer) 0:
#line 358 "hlds_out_goal.m"
                {
#line 359 "hlds_out_goal.m"
                  {
#line 359 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                  }
#line 360 "hlds_out_goal.m"
                  {
#line 360 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "% mdprof instrumentation\n");
                  }
#line 358 "hlds_out_goal.m"
                }
#line 361 "hlds_out_goal.m"
                break;
#line 361 "hlds_out_goal.m"
              case (MR_Integer) 1:
#line 362 "hlds_out_goal.m"
                {
#line 362 "hlds_out_goal.m"
                }
#line 361 "hlds_out_goal.m"
                break;
#line 361 "hlds_out_goal.m"
            }
#line 387 "hlds_out_goal.m"
            if ((hlds__hlds_out__hlds_out_goal__MaybeDPCoverageInfo_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 388 "hlds_out_goal.m"
              {
#line 388 "hlds_out_goal.m"
              }
#line 387 "hlds_out_goal.m"
            else
#line 365 "hlds_out_goal.m"
              {
#line 365 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__CoverageInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeDPCoverageInfo_59, (MR_Integer) 0)));
#line 365 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__IsTrivial_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CoverageInfo_60, (MR_Integer) 0)));
#line 365 "hlds_out_goal.m"
                MR_Word hlds__hlds_out__hlds_out_goal__PortCountsGiveCoverageAfter_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CoverageInfo_60, (MR_Integer) 1)));

#line 368 "hlds_out_goal.m"
                {
#line 368 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 372 "hlds_out_goal.m"
#line 372 "hlds_out_goal.m"
                switch (hlds__hlds_out__hlds_out_goal__IsTrivial_61) {
#line 372 "hlds_out_goal.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 372 "hlds_out_goal.m"
                  case (MR_Integer) 1:
#line 373 "hlds_out_goal.m"
                    {
#line 374 "hlds_out_goal.m"
                      {
#line 374 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "% nontrivial goal\n");
                      }
#line 373 "hlds_out_goal.m"
                    }
#line 372 "hlds_out_goal.m"
                    break;
#line 372 "hlds_out_goal.m"
                  case (MR_Integer) 0:
#line 370 "hlds_out_goal.m"
                    {
#line 371 "hlds_out_goal.m"
                      {
#line 371 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "% trivial goal\n");
                      }
#line 370 "hlds_out_goal.m"
                    }
#line 372 "hlds_out_goal.m"
                    break;
#line 372 "hlds_out_goal.m"
                }
#line 376 "hlds_out_goal.m"
                {
#line 376 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
#line 381 "hlds_out_goal.m"
#line 381 "hlds_out_goal.m"
                switch (hlds__hlds_out__hlds_out_goal__PortCountsGiveCoverageAfter_62) {
#line 381 "hlds_out_goal.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 381 "hlds_out_goal.m"
                  case (MR_Integer) 1:
#line 383 "hlds_out_goal.m"
                    {
#line 384 "hlds_out_goal.m"
                      {
#line 384 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "% no port counts give coverage after\n");
                      }
#line 383 "hlds_out_goal.m"
                    }
#line 381 "hlds_out_goal.m"
                    break;
#line 381 "hlds_out_goal.m"
                  case (MR_Integer) 0:
#line 379 "hlds_out_goal.m"
                    {
#line 380 "hlds_out_goal.m"
                      {
#line 380 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "% port counts give coverage after\n");
                      }
#line 379 "hlds_out_goal.m"
                    }
#line 381 "hlds_out_goal.m"
                    break;
#line 381 "hlds_out_goal.m"
                }
#line 365 "hlds_out_goal.m"
              }
#line 356 "hlds_out_goal.m"
          }
#line 354 "hlds_out_goal.m"
      }
#line 393 "hlds_out_goal.m"
    else
#line 393 "hlds_out_goal.m"
      {
#line 393 "hlds_out_goal.m"
      }
#line 396 "hlds_out_goal.m"
    {
#line 396 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__write_goal_expr_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_20);
    }
#line 398 "hlds_out_goal.m"
    {
#line 398 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 105);
    }
#line 420 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 399 "hlds_out_goal.m"
      {
#line 399 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_63;
#line 401 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_338_338;
#line 401 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Vars_64;

#line 399 "hlds_out_goal.m"
        {
#line 399 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__InstMapDelta_63 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 401 "hlds_out_goal.m"
        {
#line 401 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_63);
        }
#line 401 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 401 "hlds_out_goal.m"
          {
#line 402 "hlds_out_goal.m"
            {
#line 402 "hlds_out_goal.m"
              hlds__instmap__instmap_delta_changed_vars_2_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_63, &hlds__hlds_out__hlds_out_goal__Vars_64);
            }
#line 11242 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_338_338 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 403 "hlds_out_goal.m"
            {
#line 403 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_338_338, hlds__hlds_out__hlds_out_goal__Vars_64);
            }
#line 401 "hlds_out_goal.m"
          }
#line 406 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 406 "hlds_out_goal.m"
          {
#line 406 "hlds_out_goal.m"
          }
#line 406 "hlds_out_goal.m"
        else
#line 407 "hlds_out_goal.m"
          {
#line 407 "hlds_out_goal.m"
            {
#line 407 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 408 "hlds_out_goal.m"
            {
#line 408 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 68);
            }
#line 413 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 409 "hlds_out_goal.m"
              {
#line 409 "hlds_out_goal.m"
                {
#line 409 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% new insts: ");
                }
#line 410 "hlds_out_goal.m"
                {
#line 410 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__InstMapDelta_63);
                }
#line 412 "hlds_out_goal.m"
                {
#line 412 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 409 "hlds_out_goal.m"
              }
#line 413 "hlds_out_goal.m"
            else
#line 414 "hlds_out_goal.m"
              {
#line 414 "hlds_out_goal.m"
                {
#line 414 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "% vars with new insts: ");
                }
#line 415 "hlds_out_goal.m"
                {
#line 415 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__InstMapDelta_63);
                }
#line 417 "hlds_out_goal.m"
                {
#line 417 "hlds_out_goal.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 414 "hlds_out_goal.m"
              }
#line 407 "hlds_out_goal.m"
          }
#line 399 "hlds_out_goal.m"
      }
#line 420 "hlds_out_goal.m"
    else
#line 420 "hlds_out_goal.m"
      {
#line 420 "hlds_out_goal.m"
      }
#line 423 "hlds_out_goal.m"
    {
#line 423 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 112);
    }
#line 448 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 435 "hlds_out_goal.m"
      {
#line 433 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PostDeathList_66;
#line 425 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_339_339;
#line 425 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PostDeaths_65;
#line 427 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_67_67;
#line 427 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_68_68;
#line 445 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PostBirthList_70;
#line 437 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_341_341;
#line 437 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__PostBirths_69;
#line 439 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_71_71;
#line 439 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_72_72;

#line 425 "hlds_out_goal.m"
        {
#line 425 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21, &hlds__hlds_out__hlds_out_goal__PostDeaths_65);
        }
#line 425 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 425 "hlds_out_goal.m"
          {
#line 11362 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_339_339 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 426 "hlds_out_goal.m"
            {
#line 426 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__PostDeathList_66 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_339_339, hlds__hlds_out__hlds_out_goal__PostDeaths_65);
            }
#line 427 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PostDeathList_66)) == (MR_mktag((MR_Integer) 1)));
#line 427 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 427 "hlds_out_goal.m"
              {
#line 427 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PostDeathList_66, (MR_Integer) 0)));
#line 427 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PostDeathList_66, (MR_Integer) 1)));
#line 427 "hlds_out_goal.m"
              }
#line 425 "hlds_out_goal.m"
          }
#line 433 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 429 "hlds_out_goal.m"
          {
#line 429 "hlds_out_goal.m"
            {
#line 429 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 430 "hlds_out_goal.m"
            {
#line 430 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% post-deaths: ");
            }
#line 431 "hlds_out_goal.m"
            {
#line 431 "hlds_out_goal.m"
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__PostDeathList_66);
            }
#line 432 "hlds_out_goal.m"
            {
#line 432 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 429 "hlds_out_goal.m"
          }
#line 433 "hlds_out_goal.m"
        else
#line 433 "hlds_out_goal.m"
          {
#line 433 "hlds_out_goal.m"
          }
#line 437 "hlds_out_goal.m"
        {
#line 437 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_llds__goal_info_maybe_get_post_births_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21, &hlds__hlds_out__hlds_out_goal__PostBirths_69);
        }
#line 437 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 437 "hlds_out_goal.m"
          {
#line 11424 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_341_341 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 438 "hlds_out_goal.m"
            {
#line 438 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__PostBirthList_70 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_341_341, hlds__hlds_out__hlds_out_goal__PostBirths_69);
            }
#line 439 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PostBirthList_70)) == (MR_mktag((MR_Integer) 1)));
#line 439 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 439 "hlds_out_goal.m"
              {
#line 439 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PostBirthList_70, (MR_Integer) 0)));
#line 439 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PostBirthList_70, (MR_Integer) 1)));
#line 439 "hlds_out_goal.m"
              }
#line 437 "hlds_out_goal.m"
          }
#line 445 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 441 "hlds_out_goal.m"
          {
#line 441 "hlds_out_goal.m"
            {
#line 441 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 442 "hlds_out_goal.m"
            {
#line 442 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% post-births: ");
            }
#line 443 "hlds_out_goal.m"
            {
#line 443 "hlds_out_goal.m"
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__PostBirthList_70);
            }
#line 444 "hlds_out_goal.m"
            {
#line 444 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 441 "hlds_out_goal.m"
          }
#line 445 "hlds_out_goal.m"
        else
#line 445 "hlds_out_goal.m"
          {
#line 445 "hlds_out_goal.m"
          }
#line 435 "hlds_out_goal.m"
      }
#line 448 "hlds_out_goal.m"
    else
#line 448 "hlds_out_goal.m"
      {
#line 448 "hlds_out_goal.m"
      }
#line 451 "hlds_out_goal.m"
    {
#line 451 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 82);
    }
#line 498 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 495 "hlds_out_goal.m"
      {
#line 495 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ReuseDescription_75;
#line 495 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ListLFU_76;
#line 495 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__ListLBU_77;
#line 453 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_343_343;
#line 453 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__LFU_73;
#line 453 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__LBU_74;
#line 453 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_250_250;
#line 453 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_251_251;
#line 453 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__V_252_252;

#line 453 "hlds_out_goal.m"
        {
#line 453 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__V_250_250 = hlds__hlds_goal__goal_info_get_maybe_lfu_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 453 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__V_250_250)) == (MR_mktag((MR_Integer) 1)));
#line 453 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 453 "hlds_out_goal.m"
          {
#line 453 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__LFU_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_250_250, (MR_Integer) 0)));
#line 454 "hlds_out_goal.m"
            {
#line 454 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_goal__V_251_251 = hlds__hlds_goal__goal_info_get_maybe_lbu_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
            }
#line 454 "hlds_out_goal.m"
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__V_251_251)) == (MR_mktag((MR_Integer) 1)));
#line 454 "hlds_out_goal.m"
            if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 454 "hlds_out_goal.m"
              {
#line 454 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__LBU_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_251_251, (MR_Integer) 0)));
#line 455 "hlds_out_goal.m"
                {
#line 455 "hlds_out_goal.m"
                  hlds__hlds_out__hlds_out_goal__V_252_252 = hlds__hlds_goal__goal_info_get_maybe_reuse_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
                }
#line 455 "hlds_out_goal.m"
                hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__V_252_252)) == (MR_mktag((MR_Integer) 1)));
#line 455 "hlds_out_goal.m"
                if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 455 "hlds_out_goal.m"
                  {
#line 455 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__ReuseDescription_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_252_252, (MR_Integer) 0)));
#line 11552 "hlds.hlds_out.hlds_out_goal.c"
                    hlds__hlds_out__hlds_out_goal__TypeCtorInfo_343_343 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 456 "hlds_out_goal.m"
                    {
#line 456 "hlds_out_goal.m"
                      parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_343_343, hlds__hlds_out__hlds_out_goal__LFU_73, &hlds__hlds_out__hlds_out_goal__ListLFU_76);
                    }
#line 457 "hlds_out_goal.m"
                    {
#line 457 "hlds_out_goal.m"
                      parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_343_343, hlds__hlds_out__hlds_out_goal__LBU_74, &hlds__hlds_out__hlds_out_goal__ListLBU_77);
                    }
#line 457 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__succeeded = MR_TRUE;
#line 455 "hlds_out_goal.m"
                  }
#line 454 "hlds_out_goal.m"
              }
#line 453 "hlds_out_goal.m"
          }
#line 495 "hlds_out_goal.m"
        if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 459 "hlds_out_goal.m"
          {
#line 459 "hlds_out_goal.m"
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_344_344;

#line 459 "hlds_out_goal.m"
            {
#line 459 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 460 "hlds_out_goal.m"
            {
#line 460 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% LFU: ");
            }
#line 11589 "hlds.hlds_out.hlds_out_goal.c"
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_344_344 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 461 "hlds_out_goal.m"
            {
#line 461 "hlds_out_goal.m"
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_344_344, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__ListLFU_76);
            }
#line 462 "hlds_out_goal.m"
            {
#line 462 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 463 "hlds_out_goal.m"
            {
#line 463 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 464 "hlds_out_goal.m"
            {
#line 464 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% LBU: ");
            }
#line 465 "hlds_out_goal.m"
            {
#line 465 "hlds_out_goal.m"
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_344_344, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__ListLBU_77);
            }
#line 466 "hlds_out_goal.m"
            {
#line 466 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 468 "hlds_out_goal.m"
            {
#line 468 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 469 "hlds_out_goal.m"
            {
#line 469 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Reuse: ");
            }
#line 473 "hlds_out_goal.m"
#line 473 "hlds_out_goal.m"
            switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ReuseDescription_75)) {
#line 473 "hlds_out_goal.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 473 "hlds_out_goal.m"
              case (MR_Integer) 0:
#line 473 "hlds_out_goal.m"
#line 473 "hlds_out_goal.m"
                switch (MR_unmkbody(hlds__hlds_out__hlds_out_goal__ReuseDescription_75)) {
#line 473 "hlds_out_goal.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 473 "hlds_out_goal.m"
                  case (MR_Integer) 0:
#line 471 "hlds_out_goal.m"
                    {
#line 472 "hlds_out_goal.m"
                      {
#line 472 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "no reuse info");
                      }
#line 471 "hlds_out_goal.m"
                    }
#line 473 "hlds_out_goal.m"
                    break;
#line 473 "hlds_out_goal.m"
                  case (MR_Integer) 1:
#line 474 "hlds_out_goal.m"
                    {
#line 475 "hlds_out_goal.m"
                      {
#line 475 "hlds_out_goal.m"
                        mercury__io__write_string_3_p_0((MR_String) "no possible reuse");
                      }
#line 474 "hlds_out_goal.m"
                    }
#line 473 "hlds_out_goal.m"
                    break;
#line 473 "hlds_out_goal.m"
                }
#line 473 "hlds_out_goal.m"
                break;
#line 473 "hlds_out_goal.m"
              case (MR_Integer) 1:
#line 477 "hlds_out_goal.m"
                {
#line 477 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__Messages_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ReuseDescription_75, (MR_Integer) 0)));

#line 478 "hlds_out_goal.m"
                  {
#line 478 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "missed (");
                  }
#line 479 "hlds_out_goal.m"
                  {
#line 479 "hlds_out_goal.m"
                    mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_goal__Messages_78, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[5]);
                  }
#line 480 "hlds_out_goal.m"
                  {
#line 480 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 477 "hlds_out_goal.m"
                }
#line 473 "hlds_out_goal.m"
                break;
#line 473 "hlds_out_goal.m"
              case (MR_Integer) 2:
#line 482 "hlds_out_goal.m"
                {
#line 482 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__ShortReuseDescr_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ReuseDescription_75, (MR_Integer) 0)));

#line 483 "hlds_out_goal.m"
                  {
#line 483 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "potential reuse (");
                  }
#line 484 "hlds_out_goal.m"
                  {
#line 484 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(hlds__hlds_out__hlds_out_goal__ShortReuseDescr_79, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15);
                  }
#line 486 "hlds_out_goal.m"
                  {
#line 486 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 482 "hlds_out_goal.m"
                }
#line 473 "hlds_out_goal.m"
                break;
#line 473 "hlds_out_goal.m"
              case (MR_Integer) 3:
#line 488 "hlds_out_goal.m"
                {
#line 488 "hlds_out_goal.m"
                  MR_Word hlds__hlds_out__hlds_out_goal__ShortReuseDescr_299 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ReuseDescription_75, (MR_Integer) 0)));

#line 489 "hlds_out_goal.m"
                  {
#line 489 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) "reuse (");
                  }
#line 490 "hlds_out_goal.m"
                  {
#line 490 "hlds_out_goal.m"
                    hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(hlds__hlds_out__hlds_out_goal__ShortReuseDescr_299, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15);
                  }
#line 492 "hlds_out_goal.m"
                  {
#line 492 "hlds_out_goal.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 488 "hlds_out_goal.m"
                }
#line 473 "hlds_out_goal.m"
                break;
#line 473 "hlds_out_goal.m"
            }
#line 494 "hlds_out_goal.m"
            {
#line 494 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 459 "hlds_out_goal.m"
          }
#line 495 "hlds_out_goal.m"
        else
#line 495 "hlds_out_goal.m"
          {
#line 495 "hlds_out_goal.m"
          }
#line 495 "hlds_out_goal.m"
      }
#line 498 "hlds_out_goal.m"
    else
#line 498 "hlds_out_goal.m"
      {
#line 498 "hlds_out_goal.m"
      }
#line 501 "hlds_out_goal.m"
    {
#line 501 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__CodeGenInfo_80 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
    }
#line 504 "hlds_out_goal.m"
    if ((hlds__hlds_out__hlds_out_goal__CodeGenInfo_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 503 "hlds_out_goal.m"
      {
#line 503 "hlds_out_goal.m"
      }
#line 504 "hlds_out_goal.m"
    else
#line 506 "hlds_out_goal.m"
      {
#line 506 "hlds_out_goal.m"
        hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalInfo_21, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16);
      }
#line 509 "hlds_out_goal.m"
    {
#line 509 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 103);
    }
#line 521 "hlds_out_goal.m"
    if (hlds__hlds_out__hlds_out_goal__succeeded)
#line 510 "hlds_out_goal.m"
      {
#line 510 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__Features_82;
#line 510 "hlds_out_goal.m"
        MR_Word hlds__hlds_out__hlds_out_goal__FeatureList_83;

#line 510 "hlds_out_goal.m"
        {
#line 510 "hlds_out_goal.m"
          hlds__hlds_out__hlds_out_goal__Features_82 = hlds__hlds_goal__goal_info_get_features_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
#line 511 "hlds_out_goal.m"
        {
#line 511 "hlds_out_goal.m"
          mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, hlds__hlds_out__hlds_out_goal__Features_82, &hlds__hlds_out__hlds_out_goal__FeatureList_83);
        }
#line 514 "hlds_out_goal.m"
        if ((hlds__hlds_out__hlds_out_goal__FeatureList_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "hlds_out_goal.m"
          {
#line 513 "hlds_out_goal.m"
          }
#line 514 "hlds_out_goal.m"
        else
#line 515 "hlds_out_goal.m"
          {
#line 516 "hlds_out_goal.m"
            {
#line 516 "hlds_out_goal.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
#line 517 "hlds_out_goal.m"
            {
#line 517 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "% Goal features:  ");
            }
#line 518 "hlds_out_goal.m"
            {
#line 518 "hlds_out_goal.m"
              mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[1], ((MR_Box) (hlds__hlds_out__hlds_out_goal__FeatureList_83)));
            }
#line 519 "hlds_out_goal.m"
            {
#line 519 "hlds_out_goal.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
#line 519 "hlds_out_goal.m"
              return;
            }
#line 515 "hlds_out_goal.m"
          }
#line 510 "hlds_out_goal.m"
      }
#line 521 "hlds_out_goal.m"
    else
#line 521 "hlds_out_goal.m"
      {
#line 521 "hlds_out_goal.m"
      }
#line 169 "hlds_out_goal.m"
  }
#line 60 "hlds_out_goal.m"
}

#line 53 "hlds_out_goal.m"
void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(
#line 53 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Info_10,
#line 53 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_11,
#line 53 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_12,
#line 53 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_13,
#line 53 "hlds_out_goal.m"
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_14,
#line 53 "hlds_out_goal.m"
  MR_String hlds__hlds_out__hlds_out_goal__Follow_15,
#line 53 "hlds_out_goal.m"
  MR_Word hlds__hlds_out__hlds_out_goal__Goal_16)
#line 53 "hlds_out_goal.m"
{
#line 163 "hlds_out_goal.m"
  {
#line 163 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

#line 165 "hlds_out_goal.m"
    {
#line 165 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_10, hlds__hlds_out__hlds_out_goal__ModuleInfo_11, hlds__hlds_out__hlds_out_goal__VarSet_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_goal__VarNamePrint_13, hlds__hlds_out__hlds_out_goal__Indent_14, hlds__hlds_out__hlds_out_goal__Follow_15, hlds__hlds_out__hlds_out_goal__Goal_16);
#line 165 "hlds_out_goal.m"
      return;
    }
#line 163 "hlds_out_goal.m"
  }
#line 53 "hlds_out_goal.m"
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
#line 152 "hlds_out_goal.m"
  {
#line 152 "hlds_out_goal.m"
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
#line 152 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Globals_10;
#line 152 "hlds_out_goal.m"
    MR_Word hlds__hlds_out__hlds_out_goal__Info_11;

#line 153 "hlds_out_goal.m"
    {
#line 153 "hlds_out_goal.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_6, &hlds__hlds_out__hlds_out_goal__Globals_10);
    }
#line 154 "hlds_out_goal.m"
    {
#line 154 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__Info_11 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(hlds__hlds_out__hlds_out_goal__Globals_10, (MR_Integer) 1);
    }
#line 159 "hlds_out_goal.m"
    {
#line 159 "hlds_out_goal.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_6, hlds__hlds_out__hlds_out_goal__VarSet_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 0, (MR_String) "", hlds__hlds_out__hlds_out_goal__Goal_8);
#line 159 "hlds_out_goal.m"
      return;
    }
#line 152 "hlds_out_goal.m"
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
