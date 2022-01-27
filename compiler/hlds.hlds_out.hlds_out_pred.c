/*
** Automatically generated from `hlds_out_pred.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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


/* :- module hlds.hlds_out.hlds_out_pred. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_out__hlds_out_pred__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_pred.mih"


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
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
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
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 145 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 148 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 151 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 154 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 157 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_pred__type_ctor_info_table_locn_0;

#line 160 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 166 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 172 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 1049 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__1049__1_5_p_0(
#line 1049 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_13,
#line 1049 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_25,
#line 1049 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_250);

#line 1332 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0_1(
#line 1332 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1332 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1332 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1332 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 1329 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0(
#line 1329 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Markers_4);

#line 1295 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(
#line 1295 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_8,
#line 1295 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 1295 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 1295 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ConstraintId_11,
#line 1295 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProgConstraint_12);

#line 1292 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1(
#line 1292 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1292 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1292 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1292 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1292 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_4);

#line 1286 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(
#line 1286 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_7,
#line 1286 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 1286 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ConstraintMap_9,
#line 1286 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10);

#line 1206 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_p_0(
#line 1206 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1206 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_2);

#line 1191 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_p_0(
#line 1191 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1191 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ArgInfo_6);

#line 1164 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_p_0(
#line 1164 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1164 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_6);

#line 1144 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_p_0(
#line 1144 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__CoveragePointInfo_6,
#line 1144 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_11,
#line 1144 "hlds_out_pred.m"
  MR_Integer * hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_12);

#line 1108 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_p_0(
#line 1108 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6,
#line 1108 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_14,
#line 1108 "hlds_out_pred.m"
  MR_Integer * hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_15);

#line 1106 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_2(
#line 1106 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1106 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1106 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1106 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1106 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_4,
#line 1106 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_5);

#line 1105 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_1(
#line 1105 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1105 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1105 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1105 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1105 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_4,
#line 1105 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_5);

#line 1091 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0(
#line 1091 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcStatic_4);

#line 788 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(
#line 788 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_1,
#line 788 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_2,
#line 788 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_3,
#line 788 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_4,
#line 788 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_5,
#line 788 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_6,
#line 788 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ImportStatus_7,
#line 788 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcTable_8);

#line 778 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_9_p_0(
#line 778 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_10,
#line 778 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_11,
#line 778 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_12,
#line 778 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_13,
#line 778 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_14,
#line 778 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ImportStatus_15,
#line 778 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_16);

#line 756 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(
#line 756 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Head_6,
#line 756 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Tail_7,
#line 756 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8);

#line 745 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(
#line 745 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 745 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_9,
#line 745 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_10,
#line 745 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__OldVar_11,
#line 745 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__NewVars_12);

#line 742 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0_1(
#line 742 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 742 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 742 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 742 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 742 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_4);

#line 735 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0(
#line 735 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__1_1,
#line 735 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 735 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_9,
#line 735 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_10);

#line 731 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0_1(
#line 731 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 731 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1);

#line 726 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(
#line 726 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_7,
#line 726 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__StackSlots_8,
#line 726 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 726 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10);

#line 698 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(
#line 698 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 698 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 698 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_11,
#line 698 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_12,
#line 698 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_13,
#line 698 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Var_14);

#line 685 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(
#line 685 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 685 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 685 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_11,
#line 685 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_12,
#line 685 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_13,
#line 685 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Constraint_14);

#line 650 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(
#line 650 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 650 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 650 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_11,
#line 650 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_12,
#line 650 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_13,
#line 650 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVar_14);

#line 647 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3(
#line 647 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 647 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 647 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 647 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 642 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_2(
#line 642 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 642 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 642 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 642 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 637 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_1(
#line 637 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 637 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 637 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 637 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 630 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(
#line 630 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_8,
#line 630 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_9,
#line 630 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_10,
#line 630 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_11,
#line 630 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_12);

#line 610 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(
#line 610 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__1_1,
#line 610 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_2,
#line 610 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_3,
#line 610 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_4,
#line 610 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_5,
#line 610 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeVarSet_6);

#line 598 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(
#line 598 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_8,
#line 598 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 598 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 598 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_11,
#line 598 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_12);

#line 546 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(
#line 546 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_9,
#line 546 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_10,
#line 546 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_11,
#line 546 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_12,
#line 546 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_13,
#line 546 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_14);

#line 538 "hlds_out_pred.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(
#line 538 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_5,
#line 538 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_6,
#line 538 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_3);

#line 528 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0_1(
#line 528 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 528 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1);

#line 499 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0(
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_13,
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_14,
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_15,
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_16,
#line 499 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_17,
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_18,
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_19,
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_20,
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_21,
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__UseDeclaredModes_22);

#line 483 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_p_0(
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_1,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_2,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_3,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_4,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__5_5,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_6,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_7,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_8,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_9,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__UseDeclaredModes_10);

#line 405 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_15,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_16,
#line 405 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_17,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_18,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_19,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_20,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_21,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_22,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_23,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Clauses0_24,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_25,
#line 405 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__ClauseNum_26);

#line 394 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_14,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_15,
#line 394 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_16,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_17,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_18,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_19,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_20,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_21,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_22,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Clauses0_23,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_24);

#line 355 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(
#line 355 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_3,
#line 355 "hlds_out_pred.m"
  MR_Word * hlds__hlds_out__hlds_out_pred__ClausesInfo_4);

#line 1188 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_2(
#line 1188 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1188 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1188 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1188 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 1181 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_1(
#line 1181 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1181 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1181 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1181 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 1049 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0_1(
#line 1049 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1049 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1049 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1049 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 443 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_14_p_0_1(
#line 443 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 443 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1);

#line 232 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1(
#line 232 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 232 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 232 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 232 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_1[8][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_2[7][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_3[4][8];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_4[2][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_5[2][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_6[3][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_7[3][11];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_8[2][10];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_9[1][6];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[4])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[5])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_clause_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_9[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_3[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "::"))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_6[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_arg_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_pred__type_ctor_info_table_locn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_7[3][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_8[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_9[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1089 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1097 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1105 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1113 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1121 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_pred__type_ctor_info_table_locn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0
  }
};

#line 1130 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1138 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 1147 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1155 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1163 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1171 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1049 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__1049__1_5_p_0(
#line 1049 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_13,
#line 1049 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_25,
#line 1049 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_250)
#line 1049 "hlds_out_pred.m"
{
#line 1049 "hlds_out_pred.m"
  {
#line 1049 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 1049 "hlds_out_pred.m"
    {
#line 1049 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__HeadVar__3_250);
#line 1049 "hlds_out_pred.m"
      return;
    }
#line 1049 "hlds_out_pred.m"
  }
#line 1049 "hlds_out_pred.m"
}

#line 1332 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0_1(
#line 1332 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1332 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1332 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1332 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 1332 "hlds_out_pred.m"
{
#line 1332 "hlds_out_pred.m"
  {
#line 1332 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 1332 "hlds_out_pred.m"
    {
#line 1332 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_marker_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 1332 "hlds_out_pred.m"
      return;
    }
#line 1332 "hlds_out_pred.m"
  }
#line 1332 "hlds_out_pred.m"
}

#line 1329 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0(
#line 1329 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Markers_4)
#line 1329 "hlds_out_pred.m"
{
#line 1331 "hlds_out_pred.m"
  {
#line 1331 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 1332 "hlds_out_pred.m"
    {
#line 1332 "hlds_out_pred.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0, hlds__hlds_out__hlds_out_pred__Markers_4, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[6]);
#line 1332 "hlds_out_pred.m"
      return;
    }
#line 1331 "hlds_out_pred.m"
  }
#line 1329 "hlds_out_pred.m"
}

#line 1295 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(
#line 1295 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_8,
#line 1295 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 1295 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 1295 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ConstraintId_11,
#line 1295 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProgConstraint_12)
#line 1295 "hlds_out_pred.m"
{
#line 1299 "hlds_out_pred.m"
  {
#line 1299 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1299 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ConstraintType_28;
#line 1299 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__GoalId_29;
#line 1299 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__N_30;
#line 1299 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__GoalIdNum_31;

#line 1300 "hlds_out_pred.m"
    {
#line 1300 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_8);
    }
#line 1301 "hlds_out_pred.m"
    {
#line 1301 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 1310 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__ConstraintType_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ConstraintId_11, (MR_Integer) 0)));
#line 1310 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__GoalId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ConstraintId_11, (MR_Integer) 1)));
#line 1310 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__N_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ConstraintId_11, (MR_Integer) 2)));
#line 1314 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__ConstraintType_28 == (MR_Integer) 1))
#line 1312 "hlds_out_pred.m"
      {
#line 1313 "hlds_out_pred.m"
        {
#line 1313 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "(E, ");
        }
#line 1312 "hlds_out_pred.m"
      }
#line 1314 "hlds_out_pred.m"
    else
#line 1315 "hlds_out_pred.m"
      {
#line 1316 "hlds_out_pred.m"
        {
#line 1316 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "(A, ");
        }
#line 1315 "hlds_out_pred.m"
      }
#line 1318 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__GoalIdNum_31 = (MR_Integer) hlds__hlds_out__hlds_out_pred__GoalId_29;
#line 1319 "hlds_out_pred.m"
    {
#line 1319 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__GoalIdNum_31);
    }
#line 1320 "hlds_out_pred.m"
    {
#line 1320 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1321 "hlds_out_pred.m"
    {
#line 1321 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__N_30);
    }
#line 1322 "hlds_out_pred.m"
    {
#line 1322 "hlds_out_pred.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
#line 1303 "hlds_out_pred.m"
    {
#line 1303 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 1304 "hlds_out_pred.m"
    {
#line 1304 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_9, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__ProgConstraint_12);
    }
#line 1305 "hlds_out_pred.m"
    {
#line 1305 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
#line 1305 "hlds_out_pred.m"
      return;
    }
#line 1299 "hlds_out_pred.m"
  }
#line 1295 "hlds_out_pred.m"
}

#line 1292 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1(
#line 1292 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1292 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1292 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1292 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1292 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_4)
#line 1292 "hlds_out_pred.m"
{
#line 1292 "hlds_out_pred.m"
  {
#line 1292 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 1292 "hlds_out_pred.m"
    {
#line 1292 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_2));
#line 1292 "hlds_out_pred.m"
      return;
    }
#line 1292 "hlds_out_pred.m"
  }
#line 1292 "hlds_out_pred.m"
}

#line 1286 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(
#line 1286 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_7,
#line 1286 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 1286 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ConstraintMap_9,
#line 1286 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10)
#line 1286 "hlds_out_pred.m"
{
#line 1289 "hlds_out_pred.m"
  {
#line 1289 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1289 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_17_17;
#line 1292 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_13;

#line 1290 "hlds_out_pred.m"
    {
#line 1290 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_7);
    }
#line 1291 "hlds_out_pred.m"
    {
#line 1291 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% Constraint Map:\n");
    }
#line 1292 "hlds_out_pred.m"
    {
#line 1292 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1292 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[1]));
#line 1292 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1));
#line 1292 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1292 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_7));
#line 1292 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_8));
#line 1292 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__AppendVarNums_10));
#line 1292 "hlds_out_pred.m"
    }
#line 1292 "hlds_out_pred.m"
    {
#line 1292 "hlds_out_pred.m"
      mercury__map__foldl_4_p_2((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_pred__V_17_17, hlds__hlds_out__hlds_out_pred__ConstraintMap_9, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_13);
    }
#line 1289 "hlds_out_pred.m"
  }
#line 1286 "hlds_out_pred.m"
}

#line 1206 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_p_0(
#line 1206 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1206 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_2)
#line 1206 "hlds_out_pred.m"
{
#line 1209 "hlds_out_pred.m"
  {
#line 1209 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1209 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__HeadVar__2_2, (MR_Integer) 0)));
#line 1209 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Locn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__HeadVar__2_2, (MR_Integer) 1)));
#line 1209 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_15_15;

#line 1210 "hlds_out_pred.m"
    {
#line 1210 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% typeinfo for ");
    }
#line 1211 "hlds_out_pred.m"
    {
#line 1211 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_15_15 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_pred__TVarSet_5, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__TVar_6);
    }
#line 1211 "hlds_out_pred.m"
    {
#line 1211 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_15_15);
    }
#line 1212 "hlds_out_pred.m"
    {
#line 1212 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 1216 "hlds_out_pred.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Locn_7)) == (MR_mktag((MR_Integer) 0))))
#line 1214 "hlds_out_pred.m"
      {
#line 1214 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Locn_7, (MR_Integer) 0)));
#line 1214 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_58_58;

#line 1215 "hlds_out_pred.m"
        {
#line 1215 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "direct in register ");
        }
#line 1215 "hlds_out_pred.m"
        {
#line 1215 "hlds_out_pred.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_4[0], hlds__hlds_out__hlds_out_pred__N_9, &hlds__hlds_out__hlds_out_pred__V_58_58);
        }
#line 1215 "hlds_out_pred.m"
        {
#line 1215 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_58_58);
        }
#line 1215 "hlds_out_pred.m"
        {
#line 1215 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1215 "hlds_out_pred.m"
          return;
        }
#line 1214 "hlds_out_pred.m"
      }
#line 1216 "hlds_out_pred.m"
    else
#line 1217 "hlds_out_pred.m"
      {
#line 1217 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__O_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Locn_7, (MR_Integer) 1)));
#line 1217 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__N_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Locn_7, (MR_Integer) 0)));
#line 1217 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_37_37;
#line 1217 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__V_43_43;
#line 1217 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_47_47;

#line 1218 "hlds_out_pred.m"
        {
#line 1218 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "indirect from register ");
        }
#line 1556 "hlds.hlds_out.hlds_out_pred.c"
        hlds__hlds_out__hlds_out_pred__V_43_43 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_4[0];
#line 1218 "hlds_out_pred.m"
        {
#line 1218 "hlds_out_pred.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_43_43, hlds__hlds_out__hlds_out_pred__N_32, &hlds__hlds_out__hlds_out_pred__V_37_37);
        }
#line 1218 "hlds_out_pred.m"
        {
#line 1218 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_37_37);
        }
#line 1218 "hlds_out_pred.m"
        {
#line 1218 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ", offset ");
        }
#line 1218 "hlds_out_pred.m"
        {
#line 1218 "hlds_out_pred.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_43_43, hlds__hlds_out__hlds_out_pred__O_10, &hlds__hlds_out__hlds_out_pred__V_47_47);
        }
#line 1218 "hlds_out_pred.m"
        {
#line 1218 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_47_47);
        }
#line 1218 "hlds_out_pred.m"
        {
#line 1218 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1218 "hlds_out_pred.m"
          return;
        }
#line 1217 "hlds_out_pred.m"
      }
#line 1209 "hlds_out_pred.m"
  }
#line 1206 "hlds_out_pred.m"
}

#line 1191 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_p_0(
#line 1191 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1191 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ArgInfo_6)
#line 1191 "hlds_out_pred.m"
{
#line 1194 "hlds_out_pred.m"
  {
#line 1194 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1194 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__HeadVarNum_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ArgInfo_6, (MR_Integer) 0)));
#line 1194 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__HeadVarName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ArgInfo_6, (MR_Integer) 1)));
#line 1194 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__SlotNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ArgInfo_6, (MR_Integer) 2)));
#line 1194 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ArgInfo_6, (MR_Integer) 3)));
#line 1194 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_25_25;

#line 1196 "hlds_out_pred.m"
    {
#line 1196 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 1197 "hlds_out_pred.m"
    {
#line 1197 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__HeadVarName_9);
    }
#line 1198 "hlds_out_pred.m"
    {
#line 1198 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
#line 1199 "hlds_out_pred.m"
    {
#line 1199 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__HeadVarNum_8);
    }
#line 1200 "hlds_out_pred.m"
    {
#line 1200 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " in slot ");
    }
#line 1201 "hlds_out_pred.m"
    {
#line 1201 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__SlotNum_10);
    }
#line 1202 "hlds_out_pred.m"
    {
#line 1202 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ", type ");
    }
#line 1203 "hlds_out_pred.m"
    {
#line 1203 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_25_25 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(hlds__hlds_out__hlds_out_pred__TVarSet_5, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__Type_11);
    }
#line 1203 "hlds_out_pred.m"
    {
#line 1203 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_25_25);
    }
#line 1204 "hlds_out_pred.m"
    {
#line 1204 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
#line 1204 "hlds_out_pred.m"
      return;
    }
#line 1194 "hlds_out_pred.m"
  }
#line 1191 "hlds_out_pred.m"
}

#line 1164 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_p_0(
#line 1164 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1164 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_6)
#line 1164 "hlds_out_pred.m"
{
#line 1167 "hlds_out_pred.m"
  {
#line 1167 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1167 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeArgInfos_8 = (MR_Word) hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_6;

#line 1172 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__MaybeArgInfos_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1170 "hlds_out_pred.m"
      {
#line 1171 "hlds_out_pred.m"
        {
#line 1171 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% proc table io info: io tabled, no arg_infos\n");
#line 1171 "hlds_out_pred.m"
          return;
        }
#line 1170 "hlds_out_pred.m"
      }
#line 1172 "hlds_out_pred.m"
    else
#line 1173 "hlds_out_pred.m"
      {
#line 1173 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ArgInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeArgInfos_8, (MR_Integer) 0)));

#line 1174 "hlds_out_pred.m"
        {
#line 1174 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% proc table io info: io tabled, arg_infos:\n");
        }
#line 1175 "hlds_out_pred.m"
        {
#line 1175 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_5, hlds__hlds_out__hlds_out_pred__ArgInfos_9);
#line 1175 "hlds_out_pred.m"
          return;
        }
#line 1173 "hlds_out_pred.m"
      }
#line 1167 "hlds_out_pred.m"
  }
#line 1164 "hlds_out_pred.m"
}

#line 1144 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_p_0(
#line 1144 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__CoveragePointInfo_6,
#line 1144 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_11,
#line 1144 "hlds_out_pred.m"
  MR_Integer * hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_12)
#line 1144 "hlds_out_pred.m"
{
#line 1147 "hlds_out_pred.m"
  {
#line 1147 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1147 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__RevGoalPath_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CoveragePointInfo_6, (MR_Integer) 0)));
#line 1147 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__PointType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CoveragePointInfo_6, (MR_Integer) 1)));
#line 1147 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_21_21;
#line 1147 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_24_24;
#line 1147 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_31_31;
#line 1147 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_37_37;
#line 1147 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_41_41;
#line 1147 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_51_51;

#line 1150 "hlds_out_pred.m"
    {
#line 1150 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_21_21 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__RevGoalPath_9);
    }
#line 1156 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__PointType_10 == ((int) MR_cp_type_branch_arm)))
#line 1157 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_24_24 = (MR_String) "branch arm";
#line 1156 "hlds_out_pred.m"
    else
#line 1156 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_24_24 = (MR_String) "after";
#line 1149 "hlds_out_pred.m"
    {
#line 1149 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% coverage point slot ");
    }
#line 1783 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__V_37_37 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_4[0];
#line 1150 "hlds_out_pred.m"
    {
#line 1150 "hlds_out_pred.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_37_37, hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_11, &hlds__hlds_out__hlds_out_pred__V_31_31);
    }
#line 1150 "hlds_out_pred.m"
    {
#line 1150 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_31_31);
    }
#line 1149 "hlds_out_pred.m"
    {
#line 1149 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ": goal path <");
    }
#line 1150 "hlds_out_pred.m"
    {
#line 1150 "hlds_out_pred.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_37_37, hlds__hlds_out__hlds_out_pred__V_21_21, &hlds__hlds_out__hlds_out_pred__V_41_41);
    }
#line 1150 "hlds_out_pred.m"
    {
#line 1150 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_41_41);
    }
#line 1149 "hlds_out_pred.m"
    {
#line 1149 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ">, type ");
    }
#line 1151 "hlds_out_pred.m"
    {
#line 1151 "hlds_out_pred.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_37_37, hlds__hlds_out__hlds_out_pred__V_24_24, &hlds__hlds_out__hlds_out_pred__V_51_51);
    }
#line 1151 "hlds_out_pred.m"
    {
#line 1151 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_51_51);
    }
#line 1149 "hlds_out_pred.m"
    {
#line 1149 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1152 "hlds_out_pred.m"
    *hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_12 = (hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_11 + (MR_Integer) 1);
#line 1147 "hlds_out_pred.m"
  }
#line 1144 "hlds_out_pred.m"
}

#line 1108 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_p_0(
#line 1108 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6,
#line 1108 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_14,
#line 1108 "hlds_out_pred.m"
  MR_Integer * hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_15)
#line 1108 "hlds_out_pred.m"
{
#line 1111 "hlds_out_pred.m"
  {
#line 1111 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1111 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_108_108;
#line 1111 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_114_114;

#line 1112 "hlds_out_pred.m"
    {
#line 1112 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% call site static slot ");
    }
#line 1862 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__V_114_114 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_4[0];
#line 1112 "hlds_out_pred.m"
    {
#line 1112 "hlds_out_pred.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_14, &hlds__hlds_out__hlds_out_pred__V_108_108);
    }
#line 1112 "hlds_out_pred.m"
    {
#line 1112 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_108_108);
    }
#line 1112 "hlds_out_pred.m"
    {
#line 1112 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1123 "hlds_out_pred.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6)) == (MR_mktag((MR_Integer) 2))))
#line 1137 "hlds_out_pred.m"
      {
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_74_74;
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__FileName_76 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 0)));
#line 1137 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_77 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
#line 1137 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_223_223;
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_233_233;
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_243_243;

#line 1130 "hlds_out_pred.m"
        {
#line 1130 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% higher order call\n");
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_74_74 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_78);
        }
#line 1138 "hlds_out_pred.m"
        {
#line 1138 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% filename <");
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__FileName_76, &hlds__hlds_out__hlds_out_pred__V_223_223);
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_223_223);
        }
#line 1138 "hlds_out_pred.m"
        {
#line 1138 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ">, line number <");
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__LineNumber_77, &hlds__hlds_out__hlds_out_pred__V_233_233);
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_233_233);
        }
#line 1138 "hlds_out_pred.m"
        {
#line 1138 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__V_74_74, &hlds__hlds_out__hlds_out_pred__V_243_243);
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_243_243);
        }
#line 1138 "hlds_out_pred.m"
        {
#line 1138 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ">\n");
        }
#line 1137 "hlds_out_pred.m"
      }
#line 1123 "hlds_out_pred.m"
    else
#line 1123 "hlds_out_pred.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6)) == (MR_mktag((MR_Integer) 0))))
#line 1115 "hlds_out_pred.m"
      {
#line 1115 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__CalleeRttiProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 0)));
#line 1115 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__TypeSubst_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
#line 1115 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__FileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
#line 1115 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 3)));
#line 1115 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 4)));
#line 1115 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_51_51;
#line 1115 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_150_150;
#line 1115 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_160_160;
#line 1115 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_171_171;
#line 1115 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_181_181;

#line 1116 "hlds_out_pred.m"
        {
#line 1116 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% normal call to ");
        }
#line 1117 "hlds_out_pred.m"
        {
#line 1117 "hlds_out_pred.m"
          mercury__io__write_3_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__CalleeRttiProcLabel_9)));
        }
#line 1118 "hlds_out_pred.m"
        {
#line 1118 "hlds_out_pred.m"
          mercury__io__nl_2_p_0();
        }
#line 1120 "hlds_out_pred.m"
        {
#line 1120 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_51_51 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_13);
        }
#line 1119 "hlds_out_pred.m"
        {
#line 1119 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% type subst <");
        }
#line 1120 "hlds_out_pred.m"
        {
#line 1120 "hlds_out_pred.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__TypeSubst_10, &hlds__hlds_out__hlds_out_pred__V_150_150);
        }
#line 1120 "hlds_out_pred.m"
        {
#line 1120 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_150_150);
        }
#line 1119 "hlds_out_pred.m"
        {
#line 1119 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
        }
#line 1120 "hlds_out_pred.m"
        {
#line 1120 "hlds_out_pred.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__V_51_51, &hlds__hlds_out__hlds_out_pred__V_160_160);
        }
#line 1120 "hlds_out_pred.m"
        {
#line 1120 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_160_160);
        }
#line 1119 "hlds_out_pred.m"
        {
#line 1119 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ">\n");
        }
#line 1121 "hlds_out_pred.m"
        {
#line 1121 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% filename <");
        }
#line 1122 "hlds_out_pred.m"
        {
#line 1122 "hlds_out_pred.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__FileName_11, &hlds__hlds_out__hlds_out_pred__V_171_171);
        }
#line 1122 "hlds_out_pred.m"
        {
#line 1122 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_171_171);
        }
#line 1121 "hlds_out_pred.m"
        {
#line 1121 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ">, line number <");
        }
#line 1122 "hlds_out_pred.m"
        {
#line 1122 "hlds_out_pred.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__LineNumber_12, &hlds__hlds_out__hlds_out_pred__V_181_181);
        }
#line 1122 "hlds_out_pred.m"
        {
#line 1122 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_181_181);
        }
#line 1121 "hlds_out_pred.m"
        {
#line 1121 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ">\n");
        }
#line 1115 "hlds_out_pred.m"
      }
#line 1123 "hlds_out_pred.m"
    else
#line 1123 "hlds_out_pred.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6)) == (MR_mktag((MR_Integer) 1))))
#line 1137 "hlds_out_pred.m"
      {
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_100_100;
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__FileName_102 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 0)));
#line 1137 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_103 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
#line 1137 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_119_119;
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_129_129;
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_139_139;

#line 1126 "hlds_out_pred.m"
        {
#line 1126 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% special call\n");
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_100_100 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_104);
        }
#line 1138 "hlds_out_pred.m"
        {
#line 1138 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% filename <");
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__FileName_102, &hlds__hlds_out__hlds_out_pred__V_119_119);
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_119_119);
        }
#line 1138 "hlds_out_pred.m"
        {
#line 1138 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ">, line number <");
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__LineNumber_103, &hlds__hlds_out__hlds_out_pred__V_129_129);
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_129_129);
        }
#line 1138 "hlds_out_pred.m"
        {
#line 1138 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__V_100_100, &hlds__hlds_out__hlds_out_pred__V_139_139);
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_139_139);
        }
#line 1138 "hlds_out_pred.m"
        {
#line 1138 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ">\n");
        }
#line 1137 "hlds_out_pred.m"
      }
#line 1123 "hlds_out_pred.m"
    else
#line 1123 "hlds_out_pred.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1137 "hlds_out_pred.m"
      {
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_39_39;
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__FileName_62 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
#line 1137 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
#line 1137 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 3)));
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_254_254;
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_264_264;
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_274_274;

#line 1136 "hlds_out_pred.m"
        {
#line 1136 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% callback\n");
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_39_39 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_64);
        }
#line 1138 "hlds_out_pred.m"
        {
#line 1138 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% filename <");
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__FileName_62, &hlds__hlds_out__hlds_out_pred__V_254_254);
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_254_254);
        }
#line 1138 "hlds_out_pred.m"
        {
#line 1138 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ">, line number <");
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__LineNumber_63, &hlds__hlds_out__hlds_out_pred__V_264_264);
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_264_264);
        }
#line 1138 "hlds_out_pred.m"
        {
#line 1138 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__V_39_39, &hlds__hlds_out__hlds_out_pred__V_274_274);
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_274_274);
        }
#line 1138 "hlds_out_pred.m"
        {
#line 1138 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ">\n");
        }
#line 1137 "hlds_out_pred.m"
      }
#line 1123 "hlds_out_pred.m"
    else
#line 1137 "hlds_out_pred.m"
      {
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_87_87;
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__FileName_89 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
#line 1137 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
#line 1137 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 3)));
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_192_192;
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_202_202;
#line 1137 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_212_212;

#line 1133 "hlds_out_pred.m"
        {
#line 1133 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% method call\n");
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_87_87 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_91);
        }
#line 1138 "hlds_out_pred.m"
        {
#line 1138 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% filename <");
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__FileName_89, &hlds__hlds_out__hlds_out_pred__V_192_192);
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_192_192);
        }
#line 1138 "hlds_out_pred.m"
        {
#line 1138 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ">, line number <");
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__LineNumber_90, &hlds__hlds_out__hlds_out_pred__V_202_202);
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_202_202);
        }
#line 1138 "hlds_out_pred.m"
        {
#line 1138 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__V_87_87, &hlds__hlds_out__hlds_out_pred__V_212_212);
        }
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_212_212);
        }
#line 1138 "hlds_out_pred.m"
        {
#line 1138 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ">\n");
        }
#line 1137 "hlds_out_pred.m"
      }
#line 1142 "hlds_out_pred.m"
    *hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_15 = (hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_14 + (MR_Integer) 1);
#line 1111 "hlds_out_pred.m"
  }
#line 1108 "hlds_out_pred.m"
}

#line 1106 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_2(
#line 1106 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1106 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1106 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1106 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1106 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_4,
#line 1106 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_5)
#line 1106 "hlds_out_pred.m"
{
#line 1106 "hlds_out_pred.m"
  {
#line 1106 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
#line 1106 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__conv3_STATE_VARIABLE_SlotNum_12;

#line 1106 "hlds_out_pred.m"
    {
#line 1106 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_p_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_pred__wrapper_arg_2), &hlds__hlds_out__hlds_out_pred__conv3_STATE_VARIABLE_SlotNum_12);
    }
#line 1106 "hlds_out_pred.m"
    *hlds__hlds_out__hlds_out_pred__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv3_STATE_VARIABLE_SlotNum_12));
#line 1106 "hlds_out_pred.m"
  }
#line 1106 "hlds_out_pred.m"
}

#line 1105 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_1(
#line 1105 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1105 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1105 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1105 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1105 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_4,
#line 1105 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_5)
#line 1105 "hlds_out_pred.m"
{
#line 1105 "hlds_out_pred.m"
  {
#line 1105 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
#line 1105 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_SlotNum_15;

#line 1105 "hlds_out_pred.m"
    {
#line 1105 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_p_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_pred__wrapper_arg_2), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_SlotNum_15);
    }
#line 1105 "hlds_out_pred.m"
    *hlds__hlds_out__hlds_out_pred__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_SlotNum_15));
#line 1105 "hlds_out_pred.m"
  }
#line 1105 "hlds_out_pred.m"
}

#line 1091 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0(
#line 1091 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcStatic_4)
#line 1091 "hlds_out_pred.m"
{
#line 1093 "hlds_out_pred.m"
  {
#line 1093 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1093 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_40_40;
#line 1093 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_41_41;
#line 1093 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__FileName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 0)));
#line 1093 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 1)));
#line 1093 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__InInterface_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 2)));
#line 1093 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__CallSiteStatics_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 3)));
#line 1093 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__CoveragePoints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 4)));
#line 1105 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__V_11_11;
#line 1105 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv2_V_11_11;
#line 1105 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_29_29;
#line 1106 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__V_12_12;
#line 1106 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv5_V_12_12;
#line 1106 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv4_STATE_VARIABLE_IO_14;

#line 1096 "hlds_out_pred.m"
    {
#line 1096 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% proc static filename: ");
    }
#line 1097 "hlds_out_pred.m"
    {
#line 1097 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__FileName_6);
    }
#line 1098 "hlds_out_pred.m"
    {
#line 1098 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
    }
#line 1099 "hlds_out_pred.m"
    {
#line 1099 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% proc static line number: ");
    }
#line 1100 "hlds_out_pred.m"
    {
#line 1100 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__LineNumber_7);
    }
#line 1101 "hlds_out_pred.m"
    {
#line 1101 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
    }
#line 1102 "hlds_out_pred.m"
    {
#line 1102 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% proc static is interface: ");
    }
#line 1103 "hlds_out_pred.m"
    {
#line 1103 "hlds_out_pred.m"
      mercury__io__write_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__InInterface_8)));
    }
#line 1104 "hlds_out_pred.m"
    {
#line 1104 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
    }
#line 2488 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2490 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_41_41 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1105 "hlds_out_pred.m"
    {
#line 1105 "hlds_out_pred.m"
      mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_40_40, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_41_41, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[4], hlds__hlds_out__hlds_out_pred__CallSiteStatics_9, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv2_V_11_11, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_29_29);
    }
#line 1105 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_11_11 = ((MR_Integer) hlds__hlds_out__hlds_out_pred__conv2_V_11_11);
#line 1106 "hlds_out_pred.m"
    {
#line 1106 "hlds_out_pred.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_40_40, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_41_41, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[5], hlds__hlds_out__hlds_out_pred__CoveragePoints_10, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv5_V_12_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv4_STATE_VARIABLE_IO_14);
    }
#line 1106 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_12_12 = ((MR_Integer) hlds__hlds_out__hlds_out_pred__conv5_V_12_12);
#line 1093 "hlds_out_pred.m"
  }
#line 1091 "hlds_out_pred.m"
}

#line 788 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(
#line 788 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_1,
#line 788 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_2,
#line 788 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_3,
#line 788 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_4,
#line 788 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_5,
#line 788 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_6,
#line 788 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ImportStatus_7,
#line 788 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcTable_8)
#line 788 "hlds_out_pred.m"
{
#line 792 "hlds_out_pred.m"
  while (MR_TRUE)
#line 792 "hlds_out_pred.m"
    {
#line 792 "hlds_out_pred.m"
      /* tailcall optimized into a loop */
#line 792 "hlds_out_pred.m"
      {
#line 792 "hlds_out_pred.m"
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 792 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 792 "hlds_out_pred.m"
          {
#line 792 "hlds_out_pred.m"
          }
#line 792 "hlds_out_pred.m"
        else
#line 794 "hlds_out_pred.m"
          {
#line 794 "hlds_out_pred.m"
            MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__2_2, (MR_Integer) 0)));
#line 794 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ProcIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__2_2, (MR_Integer) 1)));
#line 794 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ProcInfo_31;
#line 795 "hlds_out_pred.m"
            MR_Box hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_31;

#line 795 "hlds_out_pred.m"
            {
#line 795 "hlds_out_pred.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__hlds_out__hlds_out_pred__ProcTable_8, ((MR_Box) (hlds__hlds_out__hlds_out_pred__ProcId_22)), &hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_31);
            }
#line 795 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__ProcInfo_31 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_31);
#line 796 "hlds_out_pred.m"
            {
#line 796 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_proc_10_p_0(hlds__hlds_out__hlds_out_pred__Info_1, hlds__hlds_out__hlds_out_pred__Indent_5, hlds__hlds_out__hlds_out_pred__AppendVarNums_3, hlds__hlds_out__hlds_out_pred__ModuleInfo_4, hlds__hlds_out__hlds_out_pred__PredId_6, hlds__hlds_out__hlds_out_pred__ProcId_22, hlds__hlds_out__hlds_out_pred__ImportStatus_7, hlds__hlds_out__hlds_out_pred__ProcInfo_31);
            }
#line 798 "hlds_out_pred.m"
            /* direct tailcall eliminated */
#line 798 "hlds_out_pred.m"
            {
#line 798 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2__tmp_copy_2 = hlds__hlds_out__hlds_out_pred__ProcIds_23;

#line 798 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = hlds__hlds_out__hlds_out_pred__HeadVar__2__tmp_copy_2;
#line 798 "hlds_out_pred.m"
            }
#line 798 "hlds_out_pred.m"
            continue;
#line 794 "hlds_out_pred.m"
          }
#line 792 "hlds_out_pred.m"
      }
#line 792 "hlds_out_pred.m"
      break;
#line 792 "hlds_out_pred.m"
    }
#line 788 "hlds_out_pred.m"
}

#line 778 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_9_p_0(
#line 778 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_10,
#line 778 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_11,
#line 778 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_12,
#line 778 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_13,
#line 778 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_14,
#line 778 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ImportStatus_15,
#line 778 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_16)
#line 778 "hlds_out_pred.m"
{
#line 782 "hlds_out_pred.m"
  {
#line 782 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 782 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ProcTable_18;
#line 782 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ProcIds_19;

#line 783 "hlds_out_pred.m"
    {
#line 783 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_16, &hlds__hlds_out__hlds_out_pred__ProcTable_18);
    }
#line 784 "hlds_out_pred.m"
    {
#line 784 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__ProcIds_19 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_16);
    }
#line 785 "hlds_out_pred.m"
    {
#line 785 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(hlds__hlds_out__hlds_out_pred__Info_10, hlds__hlds_out__hlds_out_pred__ProcIds_19, hlds__hlds_out__hlds_out_pred__AppendVarNums_12, hlds__hlds_out__hlds_out_pred__ModuleInfo_13, hlds__hlds_out__hlds_out_pred__Indent_11, hlds__hlds_out__hlds_out_pred__PredId_14, hlds__hlds_out__hlds_out_pred__ImportStatus_15, hlds__hlds_out__hlds_out_pred__ProcTable_18);
#line 785 "hlds_out_pred.m"
      return;
    }
#line 782 "hlds_out_pred.m"
  }
#line 778 "hlds_out_pred.m"
}

#line 756 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(
#line 756 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Head_6,
#line 756 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Tail_7,
#line 756 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8)
#line 756 "hlds_out_pred.m"
{
#line 759 "hlds_out_pred.m"
  while (MR_TRUE)
#line 759 "hlds_out_pred.m"
    {
#line 759 "hlds_out_pred.m"
      /* tailcall optimized into a loop */
#line 759 "hlds_out_pred.m"
      {
#line 759 "hlds_out_pred.m"
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 759 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Head_6, (MR_Integer) 0)));
#line 759 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__NewName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Head_6, (MR_Integer) 1)));

#line 762 "hlds_out_pred.m"
        {
#line 762 "hlds_out_pred.m"
          parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__Var_10);
        }
#line 763 "hlds_out_pred.m"
        {
#line 763 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) " -> ");
        }
#line 764 "hlds_out_pred.m"
        {
#line 764 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__NewName_11);
        }
#line 767 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__Tail_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 766 "hlds_out_pred.m"
          {
#line 766 "hlds_out_pred.m"
          }
#line 767 "hlds_out_pred.m"
        else
#line 768 "hlds_out_pred.m"
          {
#line 768 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TailHead_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Tail_7, (MR_Integer) 0)));
#line 768 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TailTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Tail_7, (MR_Integer) 1)));

#line 769 "hlds_out_pred.m"
            {
#line 769 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 770 "hlds_out_pred.m"
            /* direct tailcall eliminated */
#line 770 "hlds_out_pred.m"
            {
#line 770 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__Head__tmp_copy_6 = hlds__hlds_out__hlds_out_pred__TailHead_13;
#line 770 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__Tail__tmp_copy_7 = hlds__hlds_out__hlds_out_pred__TailTail_14;

#line 770 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__Tail_7 = hlds__hlds_out__hlds_out_pred__Tail__tmp_copy_7;
#line 770 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__Head_6 = hlds__hlds_out__hlds_out_pred__Head__tmp_copy_6;
#line 770 "hlds_out_pred.m"
            }
#line 770 "hlds_out_pred.m"
            continue;
#line 768 "hlds_out_pred.m"
          }
#line 759 "hlds_out_pred.m"
      }
#line 759 "hlds_out_pred.m"
      break;
#line 759 "hlds_out_pred.m"
    }
#line 756 "hlds_out_pred.m"
}

#line 745 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(
#line 745 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 745 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_9,
#line 745 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_10,
#line 745 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__OldVar_11,
#line 745 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__NewVars_12)
#line 745 "hlds_out_pred.m"
{
#line 748 "hlds_out_pred.m"
  {
#line 748 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 748 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_24_24;

#line 749 "hlds_out_pred.m"
    {
#line 749 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_10);
    }
#line 750 "hlds_out_pred.m"
    {
#line 750 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "%\t");
    }
#line 2769 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 751 "hlds_out_pred.m"
    {
#line 751 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_24_24, hlds__hlds_out__hlds_out_pred__VarSet_8, hlds__hlds_out__hlds_out_pred__AppendVarNums_9, hlds__hlds_out__hlds_out_pred__OldVar_11);
    }
#line 752 "hlds_out_pred.m"
    {
#line 752 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-> ");
    }
#line 753 "hlds_out_pred.m"
    {
#line 753 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_24_24, hlds__hlds_out__hlds_out_pred__VarSet_8, hlds__hlds_out__hlds_out_pred__AppendVarNums_9, hlds__hlds_out__hlds_out_pred__NewVars_12);
    }
#line 754 "hlds_out_pred.m"
    {
#line 754 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
#line 754 "hlds_out_pred.m"
      return;
    }
#line 748 "hlds_out_pred.m"
  }
#line 745 "hlds_out_pred.m"
}

#line 742 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0_1(
#line 742 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 742 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 742 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 742 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 742 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_4)
#line 742 "hlds_out_pred.m"
{
#line 742 "hlds_out_pred.m"
  {
#line 742 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 742 "hlds_out_pred.m"
    {
#line 742 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_2));
#line 742 "hlds_out_pred.m"
      return;
    }
#line 742 "hlds_out_pred.m"
  }
#line 742 "hlds_out_pred.m"
}

#line 735 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0(
#line 735 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__1_1,
#line 735 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 735 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_9,
#line 735 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_10)
#line 735 "hlds_out_pred.m"
{
#line 739 "hlds_out_pred.m"
  {
#line 739 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 739 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__UntupleMap_7 = (MR_Word) hlds__hlds_out__hlds_out_pred__HeadVar__1_1;
#line 739 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_17_17;
#line 742 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_13;

#line 740 "hlds_out_pred.m"
    {
#line 740 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_10);
    }
#line 741 "hlds_out_pred.m"
    {
#line 741 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% untuple:\n");
    }
#line 742 "hlds_out_pred.m"
    {
#line 742 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 742 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[0]));
#line 742 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0_1));
#line 742 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 742 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_8));
#line 742 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__AppendVarNums_9));
#line 742 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_10));
#line 742 "hlds_out_pred.m"
    }
#line 742 "hlds_out_pred.m"
    {
#line 742 "hlds_out_pred.m"
      mercury__map__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[6], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_pred__V_17_17, hlds__hlds_out__hlds_out_pred__UntupleMap_7, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_13);
    }
#line 739 "hlds_out_pred.m"
  }
#line 735 "hlds_out_pred.m"
}

#line 731 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0_1(
#line 731 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 731 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1)
#line 731 "hlds_out_pred.m"
{
#line 731 "hlds_out_pred.m"
  {
#line 731 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 731 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
#line 731 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2;

#line 731 "hlds_out_pred.m"
    {
#line 731 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
#line 731 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2));
#line 731 "hlds_out_pred.m"
    return hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 731 "hlds_out_pred.m"
  }
#line 731 "hlds_out_pred.m"
}

#line 726 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(
#line 726 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_7,
#line 726 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__StackSlots_8,
#line 726 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 726 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10)
#line 726 "hlds_out_pred.m"
{
#line 729 "hlds_out_pred.m"
  {
#line 729 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 729 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_18_18 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0];
#line 729 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0;
#line 729 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarSlotList0_12;
#line 729 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarSlotList_13;

#line 730 "hlds_out_pred.m"
    {
#line 730 "hlds_out_pred.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_18_18, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_19_19, hlds__hlds_out__hlds_out_pred__StackSlots_8, &hlds__hlds_out__hlds_out_pred__VarSlotList0_12);
    }
#line 731 "hlds_out_pred.m"
    {
#line 731 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__VarSlotList_13 = mercury__assoc_list__map_values_only_2_f_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_19_19, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, hlds__hlds_out__hlds_out_pred__TypeInfo_18_18, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[3], hlds__hlds_out__hlds_out_pred__VarSlotList0_12);
    }
#line 733 "hlds_out_pred.m"
    {
#line 733 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(hlds__hlds_out__hlds_out_pred__VarSlotList_13, hlds__hlds_out__hlds_out_pred__VarSet_9, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__Indent_7);
#line 733 "hlds_out_pred.m"
      return;
    }
#line 729 "hlds_out_pred.m"
  }
#line 726 "hlds_out_pred.m"
}

#line 698 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(
#line 698 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 698 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 698 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_11,
#line 698 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_12,
#line 698 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_13,
#line 698 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Var_14)
#line 698 "hlds_out_pred.m"
{
#line 702 "hlds_out_pred.m"
  {
#line 702 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 702 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_43_43;
#line 702 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__VarNum_16;
#line 702 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarInfo_17;

#line 703 "hlds_out_pred.m"
    {
#line 703 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_9);
    }
#line 704 "hlds_out_pred.m"
    {
#line 704 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 3010 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 705 "hlds_out_pred.m"
    {
#line 705 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_43_43, hlds__hlds_out__hlds_out_pred__VarSet_12, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__Var_14);
    }
#line 706 "hlds_out_pred.m"
    {
#line 706 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " (number ");
    }
#line 707 "hlds_out_pred.m"
    {
#line 707 "hlds_out_pred.m"
      mercury__term__var_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_43_43, hlds__hlds_out__hlds_out_pred__Var_14, &hlds__hlds_out__hlds_out_pred__VarNum_16);
    }
#line 708 "hlds_out_pred.m"
    {
#line 708 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__VarNum_16);
    }
#line 709 "hlds_out_pred.m"
    {
#line 709 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ") ");
    }
#line 710 "hlds_out_pred.m"
    {
#line 710 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 711 "hlds_out_pred.m"
    {
#line 711 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_11, hlds__hlds_out__hlds_out_pred__Var_14, &hlds__hlds_out__hlds_out_pred__VarInfo_17);
    }
#line 716 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__VarInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 721 "hlds_out_pred.m"
      {
#line 722 "hlds_out_pred.m"
        {
#line 722 "hlds_out_pred.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_pred", (MR_String) "predicate \140hlds.hlds_out.hlds_out_pred.write_rtti_var_info\'/8", (MR_String) "non rtti var");
#line 722 "hlds_out_pred.m"
          return;
        }
#line 721 "hlds_out_pred.m"
      }
#line 716 "hlds_out_pred.m"
    else
#line 716 "hlds_out_pred.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__VarInfo_17)) == (MR_mktag((MR_Integer) 1))))
#line 713 "hlds_out_pred.m"
      {
#line 713 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarInfo_17, (MR_Integer) 0)));

#line 714 "hlds_out_pred.m"
        {
#line 714 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "type_info for ");
        }
#line 715 "hlds_out_pred.m"
        {
#line 715 "hlds_out_pred.m"
          parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_13, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__Type_18);
        }
#line 713 "hlds_out_pred.m"
      }
#line 716 "hlds_out_pred.m"
    else
#line 717 "hlds_out_pred.m"
      {
#line 717 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__Constraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__VarInfo_17, (MR_Integer) 0)));

#line 718 "hlds_out_pred.m"
        {
#line 718 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "typeclass_info for ");
        }
#line 719 "hlds_out_pred.m"
        {
#line 719 "hlds_out_pred.m"
          parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_13, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__Constraint_19);
        }
#line 717 "hlds_out_pred.m"
      }
#line 724 "hlds_out_pred.m"
    {
#line 724 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
#line 724 "hlds_out_pred.m"
      return;
    }
#line 702 "hlds_out_pred.m"
  }
#line 698 "hlds_out_pred.m"
}

#line 685 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(
#line 685 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 685 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 685 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_11,
#line 685 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_12,
#line 685 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_13,
#line 685 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Constraint_14)
#line 685 "hlds_out_pred.m"
{
#line 689 "hlds_out_pred.m"
  {
#line 689 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 689 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Var_16;

#line 690 "hlds_out_pred.m"
    {
#line 690 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_9);
    }
#line 691 "hlds_out_pred.m"
    {
#line 691 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 692 "hlds_out_pred.m"
    {
#line 692 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_13, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__Constraint_14);
    }
#line 693 "hlds_out_pred.m"
    {
#line 693 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 694 "hlds_out_pred.m"
    {
#line 694 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_11, hlds__hlds_out__hlds_out_pred__Constraint_14, &hlds__hlds_out__hlds_out_pred__Var_16);
    }
#line 695 "hlds_out_pred.m"
    {
#line 695 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_12, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__Var_16);
    }
#line 696 "hlds_out_pred.m"
    {
#line 696 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
#line 696 "hlds_out_pred.m"
      return;
    }
#line 689 "hlds_out_pred.m"
  }
#line 685 "hlds_out_pred.m"
}

#line 650 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(
#line 650 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 650 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 650 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_11,
#line 650 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_12,
#line 650 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_13,
#line 650 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVar_14)
#line 650 "hlds_out_pred.m"
{
#line 654 "hlds_out_pred.m"
  {
#line 654 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 654 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_54_54;
#line 654 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__TVarNum_16;
#line 654 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Locn_17;
#line 654 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Var_18;
#line 654 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__VarNum_20;

#line 655 "hlds_out_pred.m"
    {
#line 655 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_9);
    }
#line 656 "hlds_out_pred.m"
    {
#line 656 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 3220 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 658 "hlds_out_pred.m"
    {
#line 658 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_54_54, hlds__hlds_out__hlds_out_pred__TVarSet_13, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__TVar_14);
    }
#line 659 "hlds_out_pred.m"
    {
#line 659 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " (number ");
    }
#line 660 "hlds_out_pred.m"
    {
#line 660 "hlds_out_pred.m"
      mercury__term__var_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_54_54, hlds__hlds_out__hlds_out_pred__TVar_14, &hlds__hlds_out__hlds_out_pred__TVarNum_16);
    }
#line 661 "hlds_out_pred.m"
    {
#line 661 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__TVarNum_16);
    }
#line 662 "hlds_out_pred.m"
    {
#line 662 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 664 "hlds_out_pred.m"
    {
#line 664 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 665 "hlds_out_pred.m"
    {
#line 665 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_11, hlds__hlds_out__hlds_out_pred__TVar_14, &hlds__hlds_out__hlds_out_pred__Locn_17);
    }
#line 671 "hlds_out_pred.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Locn_17)) == (MR_mktag((MR_Integer) 0))))
#line 667 "hlds_out_pred.m"
      {
#line 667 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Locn_17, (MR_Integer) 0)));
#line 668 "hlds_out_pred.m"
        {
#line 668 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "type_info(");
        }
#line 669 "hlds_out_pred.m"
        {
#line 669 "hlds_out_pred.m"
          parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_12, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__Var_18);
        }
#line 670 "hlds_out_pred.m"
        {
#line 670 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ") ");
        }
#line 667 "hlds_out_pred.m"
      }
#line 671 "hlds_out_pred.m"
    else
#line 672 "hlds_out_pred.m"
      {
#line 672 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__Index_19;

#line 672 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Locn_17, (MR_Integer) 0)));
#line 672 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__Index_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Locn_17, (MR_Integer) 1)));
#line 673 "hlds_out_pred.m"
        {
#line 673 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "typeclass_info(");
        }
#line 674 "hlds_out_pred.m"
        {
#line 674 "hlds_out_pred.m"
          parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_12, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__Var_18);
        }
#line 675 "hlds_out_pred.m"
        {
#line 675 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 676 "hlds_out_pred.m"
        {
#line 676 "hlds_out_pred.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__Index_19);
        }
#line 677 "hlds_out_pred.m"
        {
#line 677 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ") ");
        }
#line 672 "hlds_out_pred.m"
      }
#line 679 "hlds_out_pred.m"
    {
#line 679 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " (number ");
    }
#line 680 "hlds_out_pred.m"
    {
#line 680 "hlds_out_pred.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__Var_18, &hlds__hlds_out__hlds_out_pred__VarNum_20);
    }
#line 681 "hlds_out_pred.m"
    {
#line 681 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__VarNum_20);
    }
#line 682 "hlds_out_pred.m"
    {
#line 682 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 683 "hlds_out_pred.m"
    {
#line 683 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 683 "hlds_out_pred.m"
      return;
    }
#line 654 "hlds_out_pred.m"
  }
#line 650 "hlds_out_pred.m"
}

#line 647 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3(
#line 647 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 647 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 647 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 647 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 647 "hlds_out_pred.m"
{
#line 647 "hlds_out_pred.m"
  {
#line 647 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 647 "hlds_out_pred.m"
    {
#line 647 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 7))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 647 "hlds_out_pred.m"
      return;
    }
#line 647 "hlds_out_pred.m"
  }
#line 647 "hlds_out_pred.m"
}

#line 642 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_2(
#line 642 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 642 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 642 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 642 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 642 "hlds_out_pred.m"
{
#line 642 "hlds_out_pred.m"
  {
#line 642 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 642 "hlds_out_pred.m"
    {
#line 642 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 7))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 642 "hlds_out_pred.m"
      return;
    }
#line 642 "hlds_out_pred.m"
  }
#line 642 "hlds_out_pred.m"
}

#line 637 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_1(
#line 637 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 637 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 637 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 637 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 637 "hlds_out_pred.m"
{
#line 637 "hlds_out_pred.m"
  {
#line 637 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 637 "hlds_out_pred.m"
    {
#line 637 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 7))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 637 "hlds_out_pred.m"
      return;
    }
#line 637 "hlds_out_pred.m"
  }
#line 637 "hlds_out_pred.m"
}

#line 630 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(
#line 630 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_8,
#line 630 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_9,
#line 630 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_10,
#line 630 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_11,
#line 630 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_12)
#line 630 "hlds_out_pred.m"
{
#line 633 "hlds_out_pred.m"
  {
#line 633 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 633 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38;
#line 633 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeVars_14;
#line 633 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Constraints_15;
#line 633 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ProgVars_16;
#line 633 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_22_22;
#line 633 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_27_27;
#line 633 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_32_32;
#line 637 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_23_23;
#line 642 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_28_28;
#line 647 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv2_STATE_VARIABLE_IO_18;

#line 634 "hlds_out_pred.m"
    {
#line 634 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_8);
    }
#line 635 "hlds_out_pred.m"
    {
#line 635 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% type_info varmap:\n");
    }
#line 636 "hlds_out_pred.m"
    {
#line 636 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_10, &hlds__hlds_out__hlds_out_pred__TypeVars_14);
    }
#line 637 "hlds_out_pred.m"
    {
#line 637 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 637 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[0]));
#line 637 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_1));
#line 637 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 637 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_8));
#line 637 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__AppendVarNums_9));
#line 637 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__RttiVarMaps_10));
#line 637 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 6) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_11));
#line 637 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 7) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_12));
#line 637 "hlds_out_pred.m"
    }
#line 3517 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 637 "hlds_out_pred.m"
    {
#line 637 "hlds_out_pred.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[4], hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38, hlds__hlds_out__hlds_out_pred__V_22_22, hlds__hlds_out__hlds_out_pred__TypeVars_14, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_23_23);
    }
#line 639 "hlds_out_pred.m"
    {
#line 639 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_8);
    }
#line 640 "hlds_out_pred.m"
    {
#line 640 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% typeclass_info varmap:\n");
    }
#line 641 "hlds_out_pred.m"
    {
#line 641 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_10, &hlds__hlds_out__hlds_out_pred__Constraints_15);
    }
#line 642 "hlds_out_pred.m"
    {
#line 642 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 642 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[1]));
#line 642 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_2));
#line 642 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 642 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_8));
#line 642 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__AppendVarNums_9));
#line 642 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__RttiVarMaps_10));
#line 642 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 6) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_11));
#line 642 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 7) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_12));
#line 642 "hlds_out_pred.m"
    }
#line 642 "hlds_out_pred.m"
    {
#line 642 "hlds_out_pred.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38, hlds__hlds_out__hlds_out_pred__V_27_27, hlds__hlds_out__hlds_out_pred__Constraints_15, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_28_28);
    }
#line 644 "hlds_out_pred.m"
    {
#line 644 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_8);
    }
#line 645 "hlds_out_pred.m"
    {
#line 645 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% rtti_var_info:\n");
    }
#line 646 "hlds_out_pred.m"
    {
#line 646 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_10, &hlds__hlds_out__hlds_out_pred__ProgVars_16);
    }
#line 647 "hlds_out_pred.m"
    {
#line 647 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 647 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[2]));
#line 647 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3));
#line 647 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 647 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_8));
#line 647 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__AppendVarNums_9));
#line 647 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__RttiVarMaps_10));
#line 647 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 6) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_11));
#line 647 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 7) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_12));
#line 647 "hlds_out_pred.m"
    }
#line 647 "hlds_out_pred.m"
    {
#line 647 "hlds_out_pred.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38, hlds__hlds_out__hlds_out_pred__V_32_32, hlds__hlds_out__hlds_out_pred__ProgVars_16, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv2_STATE_VARIABLE_IO_18);
    }
#line 633 "hlds_out_pred.m"
  }
#line 630 "hlds_out_pred.m"
}

#line 610 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(
#line 610 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__1_1,
#line 610 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_2,
#line 610 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_3,
#line 610 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_4,
#line 610 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_5,
#line 610 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeVarSet_6)
#line 610 "hlds_out_pred.m"
{
#line 613 "hlds_out_pred.m"
  while (MR_TRUE)
#line 613 "hlds_out_pred.m"
    {
#line 613 "hlds_out_pred.m"
      /* tailcall optimized into a loop */
#line 613 "hlds_out_pred.m"
      {
#line 613 "hlds_out_pred.m"
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 613 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 613 "hlds_out_pred.m"
          {
#line 613 "hlds_out_pred.m"
          }
#line 613 "hlds_out_pred.m"
        else
#line 615 "hlds_out_pred.m"
          {
#line 615 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_44_44;
#line 615 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__1_1, (MR_Integer) 0)));
#line 615 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__1_1, (MR_Integer) 1)));
#line 615 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__Type_25;
#line 615 "hlds_out_pred.m"
            MR_Integer hlds__hlds_out__hlds_out_pred__VarNum_26;

#line 616 "hlds_out_pred.m"
            {
#line 616 "hlds_out_pred.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(hlds__hlds_out__hlds_out_pred__VarTypes_5, hlds__hlds_out__hlds_out_pred__Var_17, &hlds__hlds_out__hlds_out_pred__Type_25);
            }
#line 617 "hlds_out_pred.m"
            {
#line 617 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_2);
            }
#line 618 "hlds_out_pred.m"
            {
#line 618 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% ");
            }
#line 3677 "hlds.hlds_out.hlds_out_pred.c"
            hlds__hlds_out__hlds_out_pred__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 619 "hlds_out_pred.m"
            {
#line 619 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_pred__VarSet_3, hlds__hlds_out__hlds_out_pred__AppendVarNums_4, hlds__hlds_out__hlds_out_pred__Var_17);
            }
#line 620 "hlds_out_pred.m"
            {
#line 620 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) " (number ");
            }
#line 621 "hlds_out_pred.m"
            {
#line 621 "hlds_out_pred.m"
              mercury__term__var_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_pred__Var_17, &hlds__hlds_out__hlds_out_pred__VarNum_26);
            }
#line 622 "hlds_out_pred.m"
            {
#line 622 "hlds_out_pred.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__VarNum_26);
            }
#line 623 "hlds_out_pred.m"
            {
#line 623 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
#line 624 "hlds_out_pred.m"
            {
#line 624 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) ": ");
            }
#line 625 "hlds_out_pred.m"
            {
#line 625 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_pred__TypeVarSet_6, hlds__hlds_out__hlds_out_pred__AppendVarNums_4, hlds__hlds_out__hlds_out_pred__Type_25);
            }
#line 626 "hlds_out_pred.m"
            {
#line 626 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 627 "hlds_out_pred.m"
            /* direct tailcall eliminated */
#line 627 "hlds_out_pred.m"
            {
#line 627 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_pred__Vars_18;

#line 627 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__HeadVar__1_1 = hlds__hlds_out__hlds_out_pred__HeadVar__1__tmp_copy_1;
#line 627 "hlds_out_pred.m"
            }
#line 627 "hlds_out_pred.m"
            continue;
#line 615 "hlds_out_pred.m"
          }
#line 613 "hlds_out_pred.m"
      }
#line 613 "hlds_out_pred.m"
      break;
#line 613 "hlds_out_pred.m"
    }
#line 610 "hlds_out_pred.m"
}

#line 598 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(
#line 598 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_8,
#line 598 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 598 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 598 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_11,
#line 598 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_12)
#line 598 "hlds_out_pred.m"
{
#line 601 "hlds_out_pred.m"
  {
#line 601 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 601 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__NumVarTypes_14;
#line 601 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Vars_15;
#line 601 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_30_30;

#line 602 "hlds_out_pred.m"
    {
#line 602 "hlds_out_pred.m"
      parse_tree__prog_data__vartypes_count_2_p_0(hlds__hlds_out__hlds_out_pred__VarTypes_11, &hlds__hlds_out__hlds_out_pred__NumVarTypes_14);
    }
#line 603 "hlds_out_pred.m"
    {
#line 603 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_8);
    }
#line 604 "hlds_out_pred.m"
    {
#line 604 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% variable types map ");
    }
#line 605 "hlds_out_pred.m"
    {
#line 605 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 605 "hlds_out_pred.m"
    {
#line 605 "hlds_out_pred.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_4[0], hlds__hlds_out__hlds_out_pred__NumVarTypes_14, &hlds__hlds_out__hlds_out_pred__V_30_30);
    }
#line 605 "hlds_out_pred.m"
    {
#line 605 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_30_30);
    }
#line 605 "hlds_out_pred.m"
    {
#line 605 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " entries):\n");
    }
#line 606 "hlds_out_pred.m"
    {
#line 606 "hlds_out_pred.m"
      parse_tree__prog_data__vartypes_vars_2_p_0(hlds__hlds_out__hlds_out_pred__VarTypes_11, &hlds__hlds_out__hlds_out_pred__Vars_15);
    }
#line 607 "hlds_out_pred.m"
    {
#line 607 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(hlds__hlds_out__hlds_out_pred__Vars_15, hlds__hlds_out__hlds_out_pred__Indent_8, hlds__hlds_out__hlds_out_pred__VarSet_9, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__VarTypes_11, hlds__hlds_out__hlds_out_pred__TVarSet_12);
#line 607 "hlds_out_pred.m"
      return;
    }
#line 601 "hlds_out_pred.m"
  }
#line 598 "hlds_out_pred.m"
}

#line 546 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(
#line 546 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_9,
#line 546 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_10,
#line 546 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_11,
#line 546 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_12,
#line 546 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_13,
#line 546 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_14)
#line 546 "hlds_out_pred.m"
{
#line 551 "hlds_out_pred.m"
  {
#line 551 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 551 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__PredName_16;
#line 551 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ModuleName_17;

#line 552 "hlds_out_pred.m"
    {
#line 552 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__PredName_16 = hlds__hlds_module__predicate_name_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_9, hlds__hlds_out__hlds_out_pred__PredId_10);
    }
#line 553 "hlds_out_pred.m"
    {
#line 553 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__ModuleName_17 = hlds__hlds_module__predicate_module_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_9, hlds__hlds_out__hlds_out_pred__PredId_10);
    }
#line 562 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__PredOrFunc_14 == (MR_Integer) 1))
#line 555 "hlds_out_pred.m"
      {
#line 555 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__FuncArgs_18;
#line 555 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__RetVal_19;
#line 555 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__V_24_24;
#line 556 "hlds_out_pred.m"
        MR_Box hlds__hlds_out__hlds_out_pred__conv0_RetVal_19;

#line 556 "hlds_out_pred.m"
        {
#line 556 "hlds_out_pred.m"
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[5], hlds__hlds_out__hlds_out_pred__HeadTerms_13, &hlds__hlds_out__hlds_out_pred__FuncArgs_18, &hlds__hlds_out__hlds_out_pred__conv0_RetVal_19);
        }
#line 556 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__RetVal_19 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_RetVal_19);
#line 558 "hlds_out_pred.m"
        {
#line 558 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 558 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_16));
#line 558 "hlds_out_pred.m"
        }
#line 557 "hlds_out_pred.m"
        {
#line 557 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(hlds__hlds_out__hlds_out_pred__ModuleName_17, hlds__hlds_out__hlds_out_pred__V_24_24, hlds__hlds_out__hlds_out_pred__FuncArgs_18, hlds__hlds_out__hlds_out_pred__VarSet_11, hlds__hlds_out__hlds_out_pred__AppendVarNums_12);
        }
#line 559 "hlds_out_pred.m"
        {
#line 559 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) " = ");
        }
#line 560 "hlds_out_pred.m"
        {
#line 560 "hlds_out_pred.m"
          parse_tree__mercury_to_mercury__mercury_output_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_11, hlds__hlds_out__hlds_out_pred__AppendVarNums_12, (MR_Integer) 0, hlds__hlds_out__hlds_out_pred__RetVal_19);
#line 560 "hlds_out_pred.m"
          return;
        }
#line 555 "hlds_out_pred.m"
      }
#line 562 "hlds_out_pred.m"
    else
#line 563 "hlds_out_pred.m"
      {
#line 563 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__V_22_22;

#line 565 "hlds_out_pred.m"
        {
#line 565 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 565 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_16));
#line 565 "hlds_out_pred.m"
        }
#line 564 "hlds_out_pred.m"
        {
#line 564 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(hlds__hlds_out__hlds_out_pred__ModuleName_17, hlds__hlds_out__hlds_out_pred__V_22_22, hlds__hlds_out__hlds_out_pred__HeadTerms_13, hlds__hlds_out__hlds_out_pred__VarSet_11, hlds__hlds_out__hlds_out_pred__AppendVarNums_12);
#line 564 "hlds_out_pred.m"
          return;
        }
#line 563 "hlds_out_pred.m"
      }
#line 551 "hlds_out_pred.m"
  }
#line 546 "hlds_out_pred.m"
}

#line 538 "hlds_out_pred.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(
#line 538 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_5,
#line 538 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_6,
#line 538 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_3)
#line 538 "hlds_out_pred.m"
{
#line 541 "hlds_out_pred.m"
  {
#line 541 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 541 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__AnnotatedTerm_9;
#line 541 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__HeadVar__3_3, (MR_Integer) 0)));
#line 541 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__HeadVar__3_3, (MR_Integer) 1)));
#line 541 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_11_11;
#line 541 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_13_13;
#line 541 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_14_14;

#line 543 "hlds_out_pred.m"
    {
#line 543 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_14_14 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_pred__Lang_5, hlds__hlds_out__hlds_out_pred__Context_6, hlds__hlds_out__hlds_out_pred__Mode_8);
    }
#line 543 "hlds_out_pred.m"
    {
#line 543 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_13_13, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_14_14));
#line 543 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "hlds_out_pred.m"
    }
#line 543 "hlds_out_pred.m"
    {
#line 543 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_11_11, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__HeadTerm_7));
#line 543 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_11_11, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_13_13));
#line 543 "hlds_out_pred.m"
    }
#line 542 "hlds_out_pred.m"
    {
#line 542 "hlds_out_pred.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_4[1], hlds__hlds_out__hlds_out_pred__V_11_11, hlds__hlds_out__hlds_out_pred__Context_6, &hlds__hlds_out__hlds_out_pred__AnnotatedTerm_9);
    }
#line 541 "hlds_out_pred.m"
    return hlds__hlds_out__hlds_out_pred__AnnotatedTerm_9;
#line 541 "hlds_out_pred.m"
  }
#line 538 "hlds_out_pred.m"
}

#line 528 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0_1(
#line 528 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 528 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1)
#line 528 "hlds_out_pred.m"
{
#line 528 "hlds_out_pred.m"
  {
#line 528 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 528 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
#line 528 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__conv1_AnnotatedTerm_9;

#line 528 "hlds_out_pred.m"
    {
#line 528 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__conv1_AnnotatedTerm_9 = hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
#line 528 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv1_AnnotatedTerm_9));
#line 528 "hlds_out_pred.m"
    return hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 528 "hlds_out_pred.m"
  }
#line 528 "hlds_out_pred.m"
}

#line 499 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0(
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_13,
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_14,
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_15,
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_16,
#line 499 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_17,
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_18,
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_19,
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_20,
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_21,
#line 499 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__UseDeclaredModes_22)
#line 499 "hlds_out_pred.m"
{
#line 504 "hlds_out_pred.m"
  {
#line 504 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 504 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_24;
#line 504 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Procedures_25;
#line 532 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ProcInfo_26;
#line 507 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_26;

#line 505 "hlds_out_pred.m"
    {
#line 505 "hlds_out_pred.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_13, hlds__hlds_out__hlds_out_pred__PredId_16, &hlds__hlds_out__hlds_out_pred__PredInfo_24);
    }
#line 506 "hlds_out_pred.m"
    {
#line 506 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_24, &hlds__hlds_out__hlds_out_pred__Procedures_25);
    }
#line 507 "hlds_out_pred.m"
    {
#line 507 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__hlds_out__hlds_out_pred__Procedures_25, ((MR_Box) (hlds__hlds_out__hlds_out_pred__ProcId_17)), &hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_26);
    }
#line 507 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 507 "hlds_out_pred.m"
      {
#line 507 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__ProcInfo_26 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_26);
#line 507 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__succeeded = MR_TRUE;
#line 507 "hlds_out_pred.m"
      }
#line 532 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 525 "hlds_out_pred.m"
      {
#line 525 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_36_36;
#line 525 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ArgModes_27;
#line 525 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__AnnotatedPairs_28;
#line 525 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__AnnotatedHeadTerms_29;
#line 525 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__V_32_32;
#line 525 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__PredName_50;
#line 525 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ModuleName_51;

#line 522 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__UseDeclaredModes_22 == (MR_Integer) 0))
#line 524 "hlds_out_pred.m"
          {
#line 524 "hlds_out_pred.m"
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_26, &hlds__hlds_out__hlds_out_pred__ArgModes_27);
          }
#line 522 "hlds_out_pred.m"
        else
#line 521 "hlds_out_pred.m"
          {
#line 521 "hlds_out_pred.m"
            hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_26, &hlds__hlds_out__hlds_out_pred__ArgModes_27);
          }
#line 4126 "hlds.hlds_out.hlds_out_pred.c"
        hlds__hlds_out__hlds_out_pred__TypeInfo_36_36 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[5];
#line 526 "hlds_out_pred.m"
        {
#line 526 "hlds_out_pred.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_36_36, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_pred__HeadTerms_20, hlds__hlds_out__hlds_out_pred__ArgModes_27, &hlds__hlds_out__hlds_out_pred__AnnotatedPairs_28);
        }
#line 528 "hlds_out_pred.m"
        {
#line 528 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 528 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[2]));
#line 528 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0_1));
#line 528 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 528 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Lang_14));
#line 528 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Context_15));
#line 528 "hlds_out_pred.m"
        }
#line 528 "hlds_out_pred.m"
        {
#line 528 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__AnnotatedHeadTerms_29 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[1], hlds__hlds_out__hlds_out_pred__TypeInfo_36_36, hlds__hlds_out__hlds_out_pred__V_32_32, hlds__hlds_out__hlds_out_pred__AnnotatedPairs_28);
        }
#line 552 "hlds_out_pred.m"
        {
#line 552 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__PredName_50 = hlds__hlds_module__predicate_name_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_13, hlds__hlds_out__hlds_out_pred__PredId_16);
        }
#line 553 "hlds_out_pred.m"
        {
#line 553 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__ModuleName_51 = hlds__hlds_module__predicate_module_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_13, hlds__hlds_out__hlds_out_pred__PredId_16);
        }
#line 562 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__PredOrFunc_21 == (MR_Integer) 1))
#line 555 "hlds_out_pred.m"
          {
#line 555 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__FuncArgs_52;
#line 555 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__RetVal_53;
#line 555 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_56_56;
#line 556 "hlds_out_pred.m"
            MR_Box hlds__hlds_out__hlds_out_pred__conv2_RetVal_53;

#line 556 "hlds_out_pred.m"
            {
#line 556 "hlds_out_pred.m"
              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[5], hlds__hlds_out__hlds_out_pred__AnnotatedHeadTerms_29, &hlds__hlds_out__hlds_out_pred__FuncArgs_52, &hlds__hlds_out__hlds_out_pred__conv2_RetVal_53);
            }
#line 556 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__RetVal_53 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv2_RetVal_53);
#line 558 "hlds_out_pred.m"
            {
#line 558 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 558 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_56_56, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_50));
#line 558 "hlds_out_pred.m"
            }
#line 557 "hlds_out_pred.m"
            {
#line 557 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(hlds__hlds_out__hlds_out_pred__ModuleName_51, hlds__hlds_out__hlds_out_pred__V_56_56, hlds__hlds_out__hlds_out_pred__FuncArgs_52, hlds__hlds_out__hlds_out_pred__VarSet_18, hlds__hlds_out__hlds_out_pred__AppendVarNums_19);
            }
#line 559 "hlds_out_pred.m"
            {
#line 559 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) " = ");
            }
#line 560 "hlds_out_pred.m"
            {
#line 560 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__mercury_output_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_18, hlds__hlds_out__hlds_out_pred__AppendVarNums_19, (MR_Integer) 0, hlds__hlds_out__hlds_out_pred__RetVal_53);
#line 560 "hlds_out_pred.m"
              return;
            }
#line 555 "hlds_out_pred.m"
          }
#line 562 "hlds_out_pred.m"
        else
#line 563 "hlds_out_pred.m"
          {
#line 563 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_54_54;

#line 565 "hlds_out_pred.m"
            {
#line 565 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 565 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_54_54, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_50));
#line 565 "hlds_out_pred.m"
            }
#line 564 "hlds_out_pred.m"
            {
#line 564 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(hlds__hlds_out__hlds_out_pred__ModuleName_51, hlds__hlds_out__hlds_out_pred__V_54_54, hlds__hlds_out__hlds_out_pred__AnnotatedHeadTerms_29, hlds__hlds_out__hlds_out_pred__VarSet_18, hlds__hlds_out__hlds_out_pred__AppendVarNums_19);
#line 564 "hlds_out_pred.m"
              return;
            }
#line 563 "hlds_out_pred.m"
          }
#line 525 "hlds_out_pred.m"
      }
#line 532 "hlds_out_pred.m"
    else
#line 532 "hlds_out_pred.m"
      {
#line 532 "hlds_out_pred.m"
      }
#line 504 "hlds_out_pred.m"
  }
#line 499 "hlds_out_pred.m"
}

#line 483 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_p_0(
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_1,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_2,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_3,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_4,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__5_5,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_6,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_7,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_8,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_9,
#line 483 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__UseDeclaredModes_10)
#line 483 "hlds_out_pred.m"
{
#line 488 "hlds_out_pred.m"
  while (MR_TRUE)
#line 488 "hlds_out_pred.m"
    {
#line 488 "hlds_out_pred.m"
      /* tailcall optimized into a loop */
#line 488 "hlds_out_pred.m"
      {
#line 488 "hlds_out_pred.m"
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 488 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "hlds_out_pred.m"
          {
#line 488 "hlds_out_pred.m"
          }
#line 488 "hlds_out_pred.m"
        else
#line 491 "hlds_out_pred.m"
          {
#line 491 "hlds_out_pred.m"
            MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__5_5, (MR_Integer) 0)));
#line 491 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ProcIds_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__5_5, (MR_Integer) 1)));

#line 492 "hlds_out_pred.m"
            {
#line 492 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_1, hlds__hlds_out__hlds_out_pred__Lang_2, hlds__hlds_out__hlds_out_pred__Context_3, hlds__hlds_out__hlds_out_pred__PredId_4, hlds__hlds_out__hlds_out_pred__ProcId_29, hlds__hlds_out__hlds_out_pred__VarSet_6, hlds__hlds_out__hlds_out_pred__AppendVarNums_7, hlds__hlds_out__hlds_out_pred__HeadTerms_8, hlds__hlds_out__hlds_out_pred__PredOrFunc_9, hlds__hlds_out__hlds_out_pred__UseDeclaredModes_10);
            }
#line 495 "hlds_out_pred.m"
            /* direct tailcall eliminated */
#line 495 "hlds_out_pred.m"
            {
#line 495 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__5__tmp_copy_5 = hlds__hlds_out__hlds_out_pred__ProcIds_30;

#line 495 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__HeadVar__5_5 = hlds__hlds_out__hlds_out_pred__HeadVar__5__tmp_copy_5;
#line 495 "hlds_out_pred.m"
            }
#line 495 "hlds_out_pred.m"
            continue;
#line 491 "hlds_out_pred.m"
          }
#line 488 "hlds_out_pred.m"
      }
#line 488 "hlds_out_pred.m"
      break;
#line 488 "hlds_out_pred.m"
    }
#line 483 "hlds_out_pred.m"
}

#line 405 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_15,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_16,
#line 405 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_17,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_18,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_19,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_20,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_21,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_22,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_23,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Clauses0_24,
#line 405 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_25,
#line 405 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__ClauseNum_26)
#line 405 "hlds_out_pred.m"
{
#line 414 "hlds_out_pred.m"
  while (MR_TRUE)
#line 414 "hlds_out_pred.m"
    {
#line 414 "hlds_out_pred.m"
      /* tailcall optimized into a loop */
#line 414 "hlds_out_pred.m"
      {
#line 414 "hlds_out_pred.m"
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 414 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__Clauses0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "hlds_out_pred.m"
          {
#line 427 "hlds_out_pred.m"
          }
#line 414 "hlds_out_pred.m"
        else
#line 414 "hlds_out_pred.m"
          {
#line 414 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__Clause_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Clauses0_24, (MR_Integer) 0)));
#line 414 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__Clauses_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Clauses0_24, (MR_Integer) 1)));
#line 414 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_30;
#line 414 "hlds_out_pred.m"
            MR_Integer hlds__hlds_out__hlds_out_pred__V_40_40;

#line 415 "hlds_out_pred.m"
            {
#line 415 "hlds_out_pred.m"
              mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__HeadVars_22, &hlds__hlds_out__hlds_out_pred__HeadTerms_30);
            }
#line 417 "hlds_out_pred.m"
            {
#line 417 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% clause ");
            }
#line 418 "hlds_out_pred.m"
            {
#line 418 "hlds_out_pred.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__ClauseNum_26);
            }
#line 419 "hlds_out_pred.m"
            {
#line 419 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 420 "hlds_out_pred.m"
            {
#line 420 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_clause_14_p_0(hlds__hlds_out__hlds_out_pred__Info_15, hlds__hlds_out__hlds_out_pred__Lang_16, hlds__hlds_out__hlds_out_pred__Indent_17, hlds__hlds_out__hlds_out_pred__ModuleInfo_18, hlds__hlds_out__hlds_out_pred__PredId_19, hlds__hlds_out__hlds_out_pred__VarSet_20, hlds__hlds_out__hlds_out_pred__AppendVarNums_21, hlds__hlds_out__hlds_out_pred__HeadTerms_30, hlds__hlds_out__hlds_out_pred__PredOrFunc_23, hlds__hlds_out__hlds_out_pred__Clause_28, (MR_Integer) 0, hlds__hlds_out__hlds_out_pred__TypeQual_25);
            }
#line 425 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_40_40 = (hlds__hlds_out__hlds_out_pred__ClauseNum_26 + (MR_Integer) 1);
#line 423 "hlds_out_pred.m"
            /* direct tailcall eliminated */
#line 423 "hlds_out_pred.m"
            {
#line 423 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__Clauses0__tmp_copy_24 = hlds__hlds_out__hlds_out_pred__Clauses_29;
#line 423 "hlds_out_pred.m"
              MR_Integer hlds__hlds_out__hlds_out_pred__ClauseNum__tmp_copy_26 = hlds__hlds_out__hlds_out_pred__V_40_40;

#line 423 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__ClauseNum_26 = hlds__hlds_out__hlds_out_pred__ClauseNum__tmp_copy_26;
#line 423 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__Clauses0_24 = hlds__hlds_out__hlds_out_pred__Clauses0__tmp_copy_24;
#line 423 "hlds_out_pred.m"
            }
#line 423 "hlds_out_pred.m"
            continue;
#line 414 "hlds_out_pred.m"
          }
#line 414 "hlds_out_pred.m"
      }
#line 414 "hlds_out_pred.m"
      break;
#line 414 "hlds_out_pred.m"
    }
#line 405 "hlds_out_pred.m"
}

#line 394 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_14,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_15,
#line 394 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_16,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_17,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_18,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_19,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_20,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_21,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_22,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Clauses0_23,
#line 394 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_24)
#line 394 "hlds_out_pred.m"
{
#line 400 "hlds_out_pred.m"
  {
#line 400 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 400 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadVarList_26;

#line 401 "hlds_out_pred.m"
    {
#line 401 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__HeadVarList_26 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], hlds__hlds_out__hlds_out_pred__HeadVars_21);
    }
#line 402 "hlds_out_pred.m"
    {
#line 402 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(hlds__hlds_out__hlds_out_pred__Info_14, hlds__hlds_out__hlds_out_pred__Lang_15, hlds__hlds_out__hlds_out_pred__Indent_16, hlds__hlds_out__hlds_out_pred__ModuleInfo_17, hlds__hlds_out__hlds_out_pred__PredId_18, hlds__hlds_out__hlds_out_pred__VarSet_19, hlds__hlds_out__hlds_out_pred__AppendVarNums_20, hlds__hlds_out__hlds_out_pred__HeadVarList_26, hlds__hlds_out__hlds_out_pred__PredOrFunc_22, hlds__hlds_out__hlds_out_pred__Clauses0_23, hlds__hlds_out__hlds_out_pred__TypeQual_24, (MR_Integer) 1);
#line 402 "hlds_out_pred.m"
      return;
    }
#line 400 "hlds_out_pred.m"
  }
#line 394 "hlds_out_pred.m"
}

#line 355 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(
#line 355 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_3,
#line 355 "hlds_out_pred.m"
  MR_Word * hlds__hlds_out__hlds_out_pred__ClausesInfo_4)
#line 355 "hlds_out_pred.m"
{
#line 358 "hlds_out_pred.m"
  {
#line 358 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 358 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__OptionsStr_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 0)));
#line 358 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__DumpStr_6;
#line 358 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9;
#line 358 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12;
#line 358 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15;
#line 358 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18;
#line 359 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 1)));
#line 359 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 2)));
#line 359 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 3)));
#line 359 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 4)));
#line 389 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_28_28;
#line 389 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_29_29;
#line 389 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_30_30;
#line 389 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_31_31;
#line 389 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_27_27;

#line 362 "hlds_out_pred.m"
    {
#line 362 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 99);
    }
#line 364 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 363 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9 = (MR_String) "c";
#line 364 "hlds_out_pred.m"
    else
#line 364 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9 = (MR_String) "";
#line 367 "hlds_out_pred.m"
    {
#line 367 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 110);
    }
#line 369 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 368 "hlds_out_pred.m"
      {
#line 368 "hlds_out_pred.m"
        {
#line 368 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9, (MR_String) "n");
        }
#line 368 "hlds_out_pred.m"
      }
#line 369 "hlds_out_pred.m"
    else
#line 369 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12 = hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9;
#line 372 "hlds_out_pred.m"
    {
#line 372 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 118);
    }
#line 374 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 373 "hlds_out_pred.m"
      {
#line 373 "hlds_out_pred.m"
        {
#line 373 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12, (MR_String) "v");
        }
#line 373 "hlds_out_pred.m"
      }
#line 374 "hlds_out_pred.m"
    else
#line 374 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15 = hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12;
#line 377 "hlds_out_pred.m"
    {
#line 377 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 103);
    }
#line 379 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 378 "hlds_out_pred.m"
      {
#line 378 "hlds_out_pred.m"
        {
#line 378 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15, (MR_String) "g");
        }
#line 378 "hlds_out_pred.m"
      }
#line 379 "hlds_out_pred.m"
    else
#line 379 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18 = hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15;
#line 382 "hlds_out_pred.m"
    {
#line 382 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 80);
    }
#line 384 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 383 "hlds_out_pred.m"
      {
#line 383 "hlds_out_pred.m"
        {
#line 383 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__DumpStr_6 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18, (MR_String) "P");
        }
#line 383 "hlds_out_pred.m"
      }
#line 384 "hlds_out_pred.m"
    else
#line 384 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__DumpStr_6 = hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18;
#line 389 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 0)));
#line 389 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 1)));
#line 389 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 2)));
#line 389 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 3)));
#line 389 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 4)));
#line 389 "hlds_out_pred.m"
    {
#line 389 "hlds_out_pred.m"
      MR_Word base;
#line 389 "hlds_out_pred.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 389 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__ClausesInfo_4 = base;
#line 389 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__DumpStr_6));
#line 389 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_28_28));
#line 389 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_29_29));
#line 389 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_30_30));
#line 389 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_31_31));
#line 389 "hlds_out_pred.m"
    }
#line 358 "hlds_out_pred.m"
  }
#line 355 "hlds_out_pred.m"
}

#line 67 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(
#line 67 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__1_1,
#line 67 "hlds_out_pred.m"
  MR_String * hlds__hlds_out__hlds_out_pred__HeadVar__2_2)
#line 67 "hlds_out_pred.m"
{
#line 1338 "hlds_out_pred.m"
  {
#line 1338 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 1))
#line 1339 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "builtin_stub";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 20))
#line 1358 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "calls_are_fully_qualified";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 19))
#line 1356 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "check_termination";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 10))
#line 1348 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "class_instance_method";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 9))
#line 1347 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "class_method";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 18))
#line 1357 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "does_not_terminate";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 24))
#line 1362 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "has_format_call";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 23))
#line 1361 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "has_require_scope";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 8))
#line 1344 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "heuristic_inline";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 3))
#line 1341 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "infer_modes";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 2))
#line 1340 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "infer_type";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 12))
#line 1350 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "impure";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 13))
#line 1351 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "semipure";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 21))
#line 1359 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "mode_check_clauses";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 22))
#line 1360 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "mutable_access_pred";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 11))
#line 1349 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "named_class_instance_method";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 5))
#line 1346 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "no_determinism_warning";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 4))
#line 1345 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "obsolete";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 16))
#line 1354 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "promise_equivalent_clauses";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 14))
#line 1352 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "promise_pure";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 15))
#line 1353 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "promise_semipure";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 0))
#line 1338 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "stub";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 17))
#line 1355 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "terminates";
#line 1338 "hlds_out_pred.m"
    else
#line 1338 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == (MR_Integer) 6))
#line 1342 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "inline";
#line 1338 "hlds_out_pred.m"
    else
#line 1343 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "no_inline";
#line 1338 "hlds_out_pred.m"
  }
#line 67 "hlds_out_pred.m"
}

#line 63 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_3_p_0(
#line 63 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Marker_4)
#line 63 "hlds_out_pred.m"
{
#line 1334 "hlds_out_pred.m"
  {
#line 1334 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1334 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__Name_6;

#line 1335 "hlds_out_pred.m"
    {
#line 1335 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(hlds__hlds_out__hlds_out_pred__Marker_4, &hlds__hlds_out__hlds_out_pred__Name_6);
    }
#line 1336 "hlds_out_pred.m"
    {
#line 1336 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Name_6);
#line 1336 "hlds_out_pred.m"
      return;
    }
#line 1334 "hlds_out_pred.m"
  }
#line 63 "hlds_out_pred.m"
}

#line 59 "hlds_out_pred.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_pred__import_status_to_string_1_f_0(
#line 59 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__1_1)
#line 59 "hlds_out_pred.m"
{
#line 568 "hlds_out_pred.m"
  {
#line 568 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 568 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__HeadVar__2_2;

#line 568 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 574 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "abstract_exported";
#line 568 "hlds_out_pred.m"
    else
#line 568 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 589 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "abstract_imported";
#line 568 "hlds_out_pred.m"
    else
#line 568 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 570 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "exported";
#line 568 "hlds_out_pred.m"
    else
#line 568 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 595 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "exported_to_submodules";
#line 568 "hlds_out_pred.m"
    else
#line 568 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 568 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "local";
#line 568 "hlds_out_pred.m"
    else
#line 568 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 572 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "opt_exported";
#line 568 "hlds_out_pred.m"
    else
#line 568 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 591 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "opt_imported";
#line 568 "hlds_out_pred.m"
    else
#line 568 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 576 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "pseudo_exported";
#line 568 "hlds_out_pred.m"
    else
#line 568 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 593 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "pseudo_imported";
#line 568 "hlds_out_pred.m"
    else
#line 568 "hlds_out_pred.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 587 "hlds_out_pred.m"
      {
#line 587 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__Status_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__1_1, (MR_Integer) 0)));
#line 587 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_9_9;
#line 587 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_10_10;

#line 588 "hlds_out_pred.m"
        {
#line 588 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_10_10 = hlds__hlds_out__hlds_out_pred__import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__Status_7);
        }
#line 588 "hlds_out_pred.m"
        {
#line 588 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_9_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__V_10_10, (MR_String) ")");
        }
#line 588 "hlds_out_pred.m"
        {
#line 588 "hlds_out_pred.m"
          return hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "external (and ", hlds__hlds_out__hlds_out_pred__V_9_9);
        }
#line 587 "hlds_out_pred.m"
      }
#line 568 "hlds_out_pred.m"
    else
#line 568 "hlds_out_pred.m"
      {
#line 568 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__HeadVar__1_1, (MR_Integer) 0)));

#line 568 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__V_12_12 == (MR_Integer) 2))
#line 586 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "imported by an ancestor";
#line 568 "hlds_out_pred.m"
        else
#line 568 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__V_12_12 == (MR_Integer) 3))
#line 584 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "imported from an ancestor\'s private interface";
#line 568 "hlds_out_pred.m"
        else
#line 568 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__V_12_12 == (MR_Integer) 0))
#line 581 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "imported in the implementation";
#line 568 "hlds_out_pred.m"
        else
#line 579 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "imported in the interface";
#line 568 "hlds_out_pred.m"
      }
#line 568 "hlds_out_pred.m"
    return hlds__hlds_out__hlds_out_pred__HeadVar__2_2;
#line 568 "hlds_out_pred.m"
  }
#line 59 "hlds_out_pred.m"
}

#line 54 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_p_0(
#line 54 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 54 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__StepDesc_6)
#line 54 "hlds_out_pred.m"
{
#line 1221 "hlds_out_pred.m"
  {
#line 1221 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1221 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__VarName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StepDesc_6, (MR_Integer) 0)));
#line 1221 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TrieStep_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StepDesc_6, (MR_Integer) 1)));
#line 1221 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_17_17;

#line 1223 "hlds_out_pred.m"
    {
#line 1223 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 1224 "hlds_out_pred.m"
    {
#line 1224 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__VarName_8);
    }
#line 1225 "hlds_out_pred.m"
    {
#line 1225 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
#line 1232 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__TrieStep_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1236 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "char";
#line 1232 "hlds_out_pred.m"
    else
#line 1232 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__TrieStep_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1245 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "dummy";
#line 1232 "hlds_out_pred.m"
    else
#line 1232 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__TrieStep_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1242 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "float";
#line 1232 "hlds_out_pred.m"
    else
#line 1232 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__TrieStep_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1251 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "foreign_enum";
#line 1232 "hlds_out_pred.m"
    else
#line 1232 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__TrieStep_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1233 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "int";
#line 1232 "hlds_out_pred.m"
    else
#line 1232 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__TrieStep_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 1278 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "promise_implied";
#line 1232 "hlds_out_pred.m"
    else
#line 1232 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__TrieStep_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1239 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "string";
#line 1232 "hlds_out_pred.m"
    else
#line 1232 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__TrieStep_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 1275 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "typeclassinfo";
#line 1232 "hlds_out_pred.m"
    else
#line 1232 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__TrieStep_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 1272 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "typeinfo";
#line 1232 "hlds_out_pred.m"
    else
#line 1232 "hlds_out_pred.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__TrieStep_9)) == (MR_mktag((MR_Integer) 1))))
#line 1247 "hlds_out_pred.m"
      {
#line 1247 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__N_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__TrieStep_9, (MR_Integer) 0)));
#line 1247 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_40_40;
#line 1247 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_41_41;

#line 1248 "hlds_out_pred.m"
        {
#line 1248 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_41_41 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__N_22);
        }
#line 1248 "hlds_out_pred.m"
        {
#line 1248 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_40_40 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__V_41_41, (MR_String) ")");
        }
#line 1248 "hlds_out_pred.m"
        {
#line 1248 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "enum(", hlds__hlds_out__hlds_out_pred__V_40_40);
        }
#line 1247 "hlds_out_pred.m"
      }
#line 1232 "hlds_out_pred.m"
    else
#line 1253 "hlds_out_pred.m"
      {
#line 1253 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__TrieStep_9, (MR_Integer) 0)));
#line 1253 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__IsPoly_24 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__TrieStep_9, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 1253 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__IsAddr_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__TrieStep_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1253 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__IsPolyStr_26;
#line 1253 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__IsAddrStr_27;
#line 1253 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_29_29;
#line 1253 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_30_30;
#line 1253 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_32_32;
#line 1253 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_34_34;
#line 1253 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_35_35;
#line 1253 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_37_37;

#line 1257 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__IsPoly_24 == (MR_Integer) 0))
#line 1259 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__IsPolyStr_26 = (MR_String) "mono";
#line 1257 "hlds_out_pred.m"
        else
#line 1256 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__IsPolyStr_26 = (MR_String) "poly";
#line 1264 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__IsAddr_25 == (MR_Integer) 1))
#line 1266 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__IsAddrStr_27 = (MR_String) "addr";
#line 1264 "hlds_out_pred.m"
        else
#line 1263 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__IsAddrStr_27 = (MR_String) "value";
#line 1268 "hlds_out_pred.m"
        {
#line 1268 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_30_30 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(hlds__hlds_out__hlds_out_pred__TVarSet_5, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__Type_23);
        }
#line 1269 "hlds_out_pred.m"
        {
#line 1269 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_37_37 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__IsAddrStr_27, (MR_String) ")");
        }
#line 1269 "hlds_out_pred.m"
        {
#line 1269 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_37_37);
        }
#line 1269 "hlds_out_pred.m"
        {
#line 1269 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_34_34 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__IsPolyStr_26, hlds__hlds_out__hlds_out_pred__V_35_35);
        }
#line 1269 "hlds_out_pred.m"
        {
#line 1269 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_34_34);
        }
#line 1268 "hlds_out_pred.m"
        {
#line 1268 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_29_29 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__V_30_30, hlds__hlds_out__hlds_out_pred__V_32_32);
        }
#line 1268 "hlds_out_pred.m"
        {
#line 1268 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "general(", hlds__hlds_out__hlds_out_pred__V_29_29);
        }
#line 1253 "hlds_out_pred.m"
      }
#line 1226 "hlds_out_pred.m"
    {
#line 1226 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_17_17);
#line 1226 "hlds_out_pred.m"
      return;
    }
#line 1221 "hlds_out_pred.m"
  }
#line 54 "hlds_out_pred.m"
}

#line 1188 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_2(
#line 1188 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1188 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1188 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1188 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 1188 "hlds_out_pred.m"
{
#line 1188 "hlds_out_pred.m"
  {
#line 1188 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 1188 "hlds_out_pred.m"
    {
#line 1188 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 1188 "hlds_out_pred.m"
      return;
    }
#line 1188 "hlds_out_pred.m"
  }
#line 1188 "hlds_out_pred.m"
}

#line 1181 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_1(
#line 1181 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1181 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1181 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1181 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 1181 "hlds_out_pred.m"
{
#line 1181 "hlds_out_pred.m"
  {
#line 1181 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 1181 "hlds_out_pred.m"
    {
#line 1181 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 1181 "hlds_out_pred.m"
      return;
    }
#line 1181 "hlds_out_pred.m"
  }
#line 1181 "hlds_out_pred.m"
}

#line 51 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0(
#line 51 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 51 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TableArgInfos_6)
#line 51 "hlds_out_pred.m"
{
#line 1178 "hlds_out_pred.m"
  {
#line 1178 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1178 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_27_27;
#line 1178 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ArgInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__TableArgInfos_6, (MR_Integer) 0)));
#line 1178 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TVarMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__TableArgInfos_6, (MR_Integer) 1)));
#line 1178 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TVarPairs_10;
#line 1178 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_17_17;
#line 1181 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_18_18;

#line 1180 "hlds_out_pred.m"
    {
#line 1180 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% arg infos:\n");
    }
#line 1181 "hlds_out_pred.m"
    {
#line 1181 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1181 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[0]));
#line 1181 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_1));
#line 1181 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1181 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_5));
#line 1181 "hlds_out_pred.m"
    }
#line 5307 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_27_27 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1181 "hlds_out_pred.m"
    {
#line 1181 "hlds_out_pred.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_arg_info_0, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_27_27, hlds__hlds_out__hlds_out_pred__V_17_17, hlds__hlds_out__hlds_out_pred__ArgInfos_8, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_18_18);
    }
#line 1182 "hlds_out_pred.m"
    {
#line 1182 "hlds_out_pred.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[4], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0, hlds__hlds_out__hlds_out_pred__TVarMap_9, &hlds__hlds_out__hlds_out_pred__TVarPairs_10);
    }
#line 1185 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__TVarPairs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1184 "hlds_out_pred.m"
      {
#line 1184 "hlds_out_pred.m"
      }
#line 1185 "hlds_out_pred.m"
    else
#line 1186 "hlds_out_pred.m"
      {
#line 1186 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__V_21_21;
#line 1188 "hlds_out_pred.m"
        MR_Box hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_14;

#line 1187 "hlds_out_pred.m"
        {
#line 1187 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% type var map:\n");
        }
#line 1188 "hlds_out_pred.m"
        {
#line 1188 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1188 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_21_21, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[1]));
#line 1188 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_2));
#line 1188 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1188 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_21_21, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_5));
#line 1188 "hlds_out_pred.m"
        }
#line 1188 "hlds_out_pred.m"
        {
#line 1188 "hlds_out_pred.m"
          mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[0], hlds__hlds_out__hlds_out_pred__TypeCtorInfo_27_27, hlds__hlds_out__hlds_out_pred__V_21_21, hlds__hlds_out__hlds_out_pred__TVarPairs_10, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_14);
        }
#line 1186 "hlds_out_pred.m"
      }
#line 1178 "hlds_out_pred.m"
  }
#line 51 "hlds_out_pred.m"
}

#line 1049 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0_1(
#line 1049 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1049 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1049 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1049 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 1049 "hlds_out_pred.m"
{
#line 1049 "hlds_out_pred.m"
  {
#line 1049 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 1049 "hlds_out_pred.m"
    {
#line 1049 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__1049__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 1049 "hlds_out_pred.m"
      return;
    }
#line 1049 "hlds_out_pred.m"
  }
#line 1049 "hlds_out_pred.m"
}

#line 45 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0(
#line 45 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_11,
#line 45 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_12,
#line 45 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_13,
#line 45 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_14,
#line 45 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_15,
#line 45 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_16,
#line 45 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ImportStatus_17,
#line 45 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Proc_18)
#line 45 "hlds_out_pred.m"
{
#line 802 "hlds_out_pred.m"
  {
#line 802 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_20;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_21;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_22;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__DeclaredDeterminism_23;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__InferredDeterminism_24;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarSet_25;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_26;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadModes_27;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeArgLives_28;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__RegR_HeadVars_29;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeArgInfos_30;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Goal_31;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ModeContext_32;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeArgSize_33;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeTermination_34;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeStructureSharing_35;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeStructureReuse_36;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_37;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__EvalMethod_38;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__IsAddressTaken_39;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HasParallelConj_40;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HasUserEvent_41;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeProcTableIOInfo_42;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeCallTableTip_43;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeDeepProfileInfo_44;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeUntupleInfo_45;
#line 802 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemap_46;
#line 802 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__Indent1_47;
#line 802 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__DumpOptions_48;
#line 832 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_235_235;
#line 832 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_236_236;
#line 832 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_237_237;
#line 832 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_238_238;

#line 803 "hlds_out_pred.m"
    {
#line 803 "hlds_out_pred.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_14, hlds__hlds_out__hlds_out_pred__PredId_15, &hlds__hlds_out__hlds_out_pred__PredInfo_20);
    }
#line 804 "hlds_out_pred.m"
    {
#line 804 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_20, &hlds__hlds_out__hlds_out_pred__TVarSet_21);
    }
#line 805 "hlds_out_pred.m"
    {
#line 805 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__VarTypes_22);
    }
#line 806 "hlds_out_pred.m"
    {
#line 806 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__DeclaredDeterminism_23);
    }
#line 807 "hlds_out_pred.m"
    {
#line 807 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__InferredDeterminism_24);
    }
#line 808 "hlds_out_pred.m"
    {
#line 808 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__VarSet_25);
    }
#line 809 "hlds_out_pred.m"
    {
#line 809 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__HeadVars_26);
    }
#line 810 "hlds_out_pred.m"
    {
#line 810 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__HeadModes_27);
    }
#line 811 "hlds_out_pred.m"
    {
#line 811 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_arglives_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeArgLives_28);
    }
#line 812 "hlds_out_pred.m"
    {
#line 812 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_reg_r_headvars_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__RegR_HeadVars_29);
    }
#line 813 "hlds_out_pred.m"
    {
#line 813 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_maybe_arg_info_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeArgInfos_30);
    }
#line 814 "hlds_out_pred.m"
    {
#line 814 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__Goal_31);
    }
#line 815 "hlds_out_pred.m"
    {
#line 815 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__ModeContext_32);
    }
#line 816 "hlds_out_pred.m"
    {
#line 816 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeArgSize_33);
    }
#line 817 "hlds_out_pred.m"
    {
#line 817 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeTermination_34);
    }
#line 818 "hlds_out_pred.m"
    {
#line 818 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_structure_sharing_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeStructureSharing_35);
    }
#line 819 "hlds_out_pred.m"
    {
#line 819 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_structure_reuse_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeStructureReuse_36);
    }
#line 820 "hlds_out_pred.m"
    {
#line 820 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__RttiVarMaps_37);
    }
#line 821 "hlds_out_pred.m"
    {
#line 821 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_eval_method_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__EvalMethod_38);
    }
#line 822 "hlds_out_pred.m"
    {
#line 822 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__IsAddressTaken_39);
    }
#line 823 "hlds_out_pred.m"
    {
#line 823 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__HasParallelConj_40);
    }
#line 824 "hlds_out_pred.m"
    {
#line 824 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__HasUserEvent_41);
    }
#line 825 "hlds_out_pred.m"
    {
#line 825 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_proc_table_io_info_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeProcTableIOInfo_42);
    }
#line 826 "hlds_out_pred.m"
    {
#line 826 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeCallTableTip_43);
    }
#line 827 "hlds_out_pred.m"
    {
#line 827 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeDeepProfileInfo_44);
    }
#line 828 "hlds_out_pred.m"
    {
#line 828 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_untuple_info_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeUntupleInfo_45);
    }
#line 829 "hlds_out_pred.m"
    {
#line 829 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__VarNameRemap_46);
    }
#line 830 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__Indent1_47 = (hlds__hlds_out__hlds_out_pred__Indent_12 + (MR_Integer) 1);
#line 832 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__DumpOptions_48 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 0)));
#line 832 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_235_235 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 1)));
#line 832 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 2)));
#line 832 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 3)));
#line 832 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 4)));
#line 833 "hlds_out_pred.m"
    {
#line 833 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_48, (MR_Char) 120);
    }
#line 1082 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 834 "hlds_out_pred.m"
      {
#line 834 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_243_243;
#line 834 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__PredInt_49;
#line 834 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__ProcInt_50;
#line 834 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapList_82;
#line 834 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__PredName_85;
#line 834 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_86;
#line 834 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ModeVarSet_87;
#line 834 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_112_112;
#line 1062 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ArgInfos_91;
#line 1066 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__V_256_256;

#line 834 "hlds_out_pred.m"
        {
#line 834 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent1_47);
        }
#line 835 "hlds_out_pred.m"
        {
#line 835 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% pred id ");
        }
#line 836 "hlds_out_pred.m"
        {
#line 836 "hlds_out_pred.m"
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__PredId_15, &hlds__hlds_out__hlds_out_pred__PredInt_49);
        }
#line 837 "hlds_out_pred.m"
        {
#line 837 "hlds_out_pred.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__PredInt_49);
        }
#line 838 "hlds_out_pred.m"
        {
#line 838 "hlds_out_pred.m"
          mercury__io__nl_2_p_0();
        }
#line 839 "hlds_out_pred.m"
        {
#line 839 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent1_47);
        }
#line 840 "hlds_out_pred.m"
        {
#line 840 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% mode number ");
        }
#line 841 "hlds_out_pred.m"
        {
#line 841 "hlds_out_pred.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__ProcId_16, &hlds__hlds_out__hlds_out_pred__ProcInt_50);
        }
#line 842 "hlds_out_pred.m"
        {
#line 842 "hlds_out_pred.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__ProcInt_50);
        }
#line 843 "hlds_out_pred.m"
        {
#line 843 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) " of ");
        }
#line 844 "hlds_out_pred.m"
        {
#line 844 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_14, hlds__hlds_out__hlds_out_pred__PredId_15);
        }
#line 845 "hlds_out_pred.m"
        {
#line 845 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) " (");
        }
#line 846 "hlds_out_pred.m"
        {
#line 846 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_112_112 = parse_tree__prog_out__determinism_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__InferredDeterminism_24);
        }
#line 846 "hlds_out_pred.m"
        {
#line 846 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_112_112);
        }
#line 847 "hlds_out_pred.m"
        {
#line 847 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "):\n");
        }
#line 849 "hlds_out_pred.m"
        {
#line 849 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_48, (MR_Char) 116);
        }
#line 858 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 850 "hlds_out_pred.m"
          {
#line 850 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_239_239;

#line 850 "hlds_out_pred.m"
            {
#line 850 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 851 "hlds_out_pred.m"
            {
#line 851 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% Arg size properties: ");
            }
#line 5761 "hlds.hlds_out.hlds_out_pred.c"
            hlds__hlds_out__hlds_out_pred__TypeInfo_239_239 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[1];
#line 852 "hlds_out_pred.m"
            {
#line 852 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__write_maybe_arg_size_info_4_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_239_239, hlds__hlds_out__hlds_out_pred__MaybeArgSize_33, (MR_Integer) 1);
            }
#line 853 "hlds_out_pred.m"
            {
#line 853 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 854 "hlds_out_pred.m"
            {
#line 854 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 855 "hlds_out_pred.m"
            {
#line 855 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% Termination properties: ");
            }
#line 856 "hlds_out_pred.m"
            {
#line 856 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__write_maybe_termination_info_4_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, hlds__hlds_out__hlds_out_pred__TypeInfo_239_239, hlds__hlds_out__hlds_out_pred__MaybeTermination_34, (MR_Integer) 1);
            }
#line 857 "hlds_out_pred.m"
            {
#line 857 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 850 "hlds_out_pred.m"
          }
#line 858 "hlds_out_pred.m"
        else
#line 858 "hlds_out_pred.m"
          {
#line 858 "hlds_out_pred.m"
          }
#line 863 "hlds_out_pred.m"
        {
#line 863 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_48, (MR_Char) 83);
        }
#line 876 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 864 "hlds_out_pred.m"
          {
#line 864 "hlds_out_pred.m"
            {
#line 864 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 865 "hlds_out_pred.m"
            {
#line 865 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% Structure sharing: \n");
            }
#line 872 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MaybeStructureSharing_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "hlds_out_pred.m"
              {
#line 874 "hlds_out_pred.m"
                {
#line 874 "hlds_out_pred.m"
                  parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__TVarSet_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                }
#line 873 "hlds_out_pred.m"
              }
#line 872 "hlds_out_pred.m"
            else
#line 867 "hlds_out_pred.m"
              {
#line 867 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__StructureSharing_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeStructureSharing_35, (MR_Integer) 0)));
#line 867 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__SharingAs_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StructureSharing_51, (MR_Integer) 0)));
#line 867 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__V_135_135;
#line 868 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred___Status_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StructureSharing_51, (MR_Integer) 1)));

#line 871 "hlds_out_pred.m"
                {
#line 871 "hlds_out_pred.m"
                  hlds__hlds_out__hlds_out_pred__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 871 "hlds_out_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_135_135, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__SharingAs_52));
#line 871 "hlds_out_pred.m"
                }
#line 870 "hlds_out_pred.m"
                {
#line 870 "hlds_out_pred.m"
                  parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__V_135_135);
                }
#line 867 "hlds_out_pred.m"
              }
#line 864 "hlds_out_pred.m"
          }
#line 876 "hlds_out_pred.m"
        else
#line 876 "hlds_out_pred.m"
          {
#line 876 "hlds_out_pred.m"
          }
#line 881 "hlds_out_pred.m"
        {
#line 881 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_48, (MR_Char) 82);
        }
#line 894 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 882 "hlds_out_pred.m"
          {
#line 882 "hlds_out_pred.m"
            {
#line 882 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 883 "hlds_out_pred.m"
            {
#line 883 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% Structure reuse: \n");
            }
#line 890 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MaybeStructureReuse_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 891 "hlds_out_pred.m"
              {
#line 892 "hlds_out_pred.m"
                {
#line 892 "hlds_out_pred.m"
                  parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__TVarSet_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                }
#line 891 "hlds_out_pred.m"
              }
#line 890 "hlds_out_pred.m"
            else
#line 885 "hlds_out_pred.m"
              {
#line 885 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__StructureReuse_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeStructureReuse_36, (MR_Integer) 0)));
#line 885 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__ReuseAs_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StructureReuse_54, (MR_Integer) 0)));
#line 885 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__V_143_143;
#line 886 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred___ReuseStatus_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StructureReuse_54, (MR_Integer) 1)));

#line 889 "hlds_out_pred.m"
                {
#line 889 "hlds_out_pred.m"
                  hlds__hlds_out__hlds_out_pred__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 889 "hlds_out_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_143_143, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__ReuseAs_55));
#line 889 "hlds_out_pred.m"
                }
#line 888 "hlds_out_pred.m"
                {
#line 888 "hlds_out_pred.m"
                  parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__V_143_143);
                }
#line 885 "hlds_out_pred.m"
              }
#line 882 "hlds_out_pred.m"
          }
#line 894 "hlds_out_pred.m"
        else
#line 894 "hlds_out_pred.m"
          {
#line 894 "hlds_out_pred.m"
          }
#line 898 "hlds_out_pred.m"
        {
#line 898 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
        }
#line 899 "hlds_out_pred.m"
        {
#line 899 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__VarTypes_22, hlds__hlds_out__hlds_out_pred__TVarSet_21);
        }
#line 900 "hlds_out_pred.m"
        {
#line 900 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__RttiVarMaps_37, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__TVarSet_21);
        }
#line 906 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__IsAddressTaken_39 == (MR_Integer) 1))
#line 907 "hlds_out_pred.m"
          {
#line 908 "hlds_out_pred.m"
            {
#line 908 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% address is not taken\n");
            }
#line 907 "hlds_out_pred.m"
          }
#line 906 "hlds_out_pred.m"
        else
#line 904 "hlds_out_pred.m"
          {
#line 905 "hlds_out_pred.m"
            {
#line 905 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% address is taken\n");
            }
#line 904 "hlds_out_pred.m"
          }
#line 913 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__HasParallelConj_40 == (MR_Integer) 1))
#line 914 "hlds_out_pred.m"
          {
#line 915 "hlds_out_pred.m"
            {
#line 915 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% does not contain parallel conjunction\n");
            }
#line 914 "hlds_out_pred.m"
          }
#line 913 "hlds_out_pred.m"
        else
#line 911 "hlds_out_pred.m"
          {
#line 912 "hlds_out_pred.m"
            {
#line 912 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% contains parallel conjunction\n");
            }
#line 911 "hlds_out_pred.m"
          }
#line 920 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__HasUserEvent_41 == (MR_Integer) 1))
#line 921 "hlds_out_pred.m"
          {
#line 922 "hlds_out_pred.m"
            {
#line 922 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% does not contain user event\n");
            }
#line 921 "hlds_out_pred.m"
          }
#line 920 "hlds_out_pred.m"
        else
#line 918 "hlds_out_pred.m"
          {
#line 919 "hlds_out_pred.m"
            {
#line 919 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% contains user event\n");
            }
#line 918 "hlds_out_pred.m"
          }
#line 926 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__EvalMethod_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 925 "hlds_out_pred.m"
          {
#line 925 "hlds_out_pred.m"
          }
#line 926 "hlds_out_pred.m"
        else
#line 931 "hlds_out_pred.m"
          {
#line 932 "hlds_out_pred.m"
            {
#line 932 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% eval method: ");
            }
#line 933 "hlds_out_pred.m"
            {
#line 933 "hlds_out_pred.m"
              parse_tree__prog_out__write_eval_method_3_p_0(hlds__hlds_out__hlds_out_pred__EvalMethod_38);
            }
#line 934 "hlds_out_pred.m"
            {
#line 934 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 931 "hlds_out_pred.m"
          }
#line 939 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MaybeProcTableIOInfo_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 940 "hlds_out_pred.m"
          {
#line 940 "hlds_out_pred.m"
          }
#line 939 "hlds_out_pred.m"
        else
#line 937 "hlds_out_pred.m"
          {
#line 937 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeProcTableIOInfo_42, (MR_Integer) 0)));

#line 938 "hlds_out_pred.m"
            {
#line 938 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_60);
            }
#line 937 "hlds_out_pred.m"
          }
#line 947 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MaybeCallTableTip_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 948 "hlds_out_pred.m"
          {
#line 948 "hlds_out_pred.m"
          }
#line 947 "hlds_out_pred.m"
        else
#line 943 "hlds_out_pred.m"
          {
#line 943 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__CallTableTip_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeCallTableTip_43, (MR_Integer) 0)));

#line 944 "hlds_out_pred.m"
            {
#line 944 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% call table tip: ");
            }
#line 945 "hlds_out_pred.m"
            {
#line 945 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__CallTableTip_61);
            }
#line 946 "hlds_out_pred.m"
            {
#line 946 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 943 "hlds_out_pred.m"
          }
#line 998 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MaybeDeepProfileInfo_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 999 "hlds_out_pred.m"
          {
#line 999 "hlds_out_pred.m"
          }
#line 998 "hlds_out_pred.m"
        else
#line 951 "hlds_out_pred.m"
          {
#line 951 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__DeepProfileInfo_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeDeepProfileInfo_44, (MR_Integer) 0)));
#line 951 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__MaybeRecInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepProfileInfo_62, (MR_Integer) 0)));
#line 951 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__MaybeDeepLayout_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepProfileInfo_62, (MR_Integer) 1)));
#line 952 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepProfileInfo_62, (MR_Integer) 2)));

#line 972 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MaybeRecInfo_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 973 "hlds_out_pred.m"
              {
#line 973 "hlds_out_pred.m"
              }
#line 972 "hlds_out_pred.m"
            else
#line 955 "hlds_out_pred.m"
              {
#line 955 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__DeepRecInfo_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeRecInfo_63, (MR_Integer) 0)));
#line 955 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__Role_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepRecInfo_66, (MR_Integer) 0)));
#line 955 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__DeepPredProcId_69;
#line 955 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__DeepPredId_70;
#line 955 "hlds_out_pred.m"
                MR_Integer hlds__hlds_out__hlds_out_pred__DeepProcId_71;
#line 955 "hlds_out_pred.m"
                MR_Integer hlds__hlds_out__hlds_out_pred__DeepPredInt_72;
#line 955 "hlds_out_pred.m"
                MR_Integer hlds__hlds_out__hlds_out_pred__DeepProcInt_73;
#line 956 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepRecInfo_66, (MR_Integer) 1)));

#line 957 "hlds_out_pred.m"
                {
#line 957 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "% deep recursion info: ");
                }
#line 961 "hlds_out_pred.m"
                if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Role_67)) == (MR_mktag((MR_Integer) 0))))
#line 959 "hlds_out_pred.m"
                  {
#line 959 "hlds_out_pred.m"
                    hlds__hlds_out__hlds_out_pred__DeepPredProcId_69 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_pred__Role_67), (MR_Integer) 0);
#line 960 "hlds_out_pred.m"
                    {
#line 960 "hlds_out_pred.m"
                      mercury__io__write_string_3_p_0((MR_String) "inner, outer is ");
                    }
#line 959 "hlds_out_pred.m"
                  }
#line 961 "hlds_out_pred.m"
                else
#line 962 "hlds_out_pred.m"
                  {
#line 962 "hlds_out_pred.m"
                    hlds__hlds_out__hlds_out_pred__DeepPredProcId_69 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_pred__Role_67), (MR_Integer) 1);
#line 963 "hlds_out_pred.m"
                    {
#line 963 "hlds_out_pred.m"
                      mercury__io__write_string_3_p_0((MR_String) "outer, inner is ");
                    }
#line 962 "hlds_out_pred.m"
                  }
#line 965 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__DeepPredId_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepPredProcId_69, (MR_Integer) 0)));
#line 965 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__DeepProcId_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepPredProcId_69, (MR_Integer) 1)));
#line 966 "hlds_out_pred.m"
                {
#line 966 "hlds_out_pred.m"
                  hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__DeepPredId_70, &hlds__hlds_out__hlds_out_pred__DeepPredInt_72);
                }
#line 967 "hlds_out_pred.m"
                {
#line 967 "hlds_out_pred.m"
                  hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__DeepProcId_71, &hlds__hlds_out__hlds_out_pred__DeepProcInt_73);
                }
#line 968 "hlds_out_pred.m"
                {
#line 968 "hlds_out_pred.m"
                  mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__DeepPredInt_72);
                }
#line 969 "hlds_out_pred.m"
                {
#line 969 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "/");
                }
#line 970 "hlds_out_pred.m"
                {
#line 970 "hlds_out_pred.m"
                  mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__DeepProcInt_73);
                }
#line 971 "hlds_out_pred.m"
                {
#line 971 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 955 "hlds_out_pred.m"
              }
#line 995 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MaybeDeepLayout_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 996 "hlds_out_pred.m"
              {
#line 996 "hlds_out_pred.m"
              }
#line 995 "hlds_out_pred.m"
            else
#line 976 "hlds_out_pred.m"
              {
#line 976 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_242_242;
#line 976 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__DeepLayout_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeDeepLayout_64, (MR_Integer) 0)));
#line 976 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__ProcStatic_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepLayout_74, (MR_Integer) 0)));
#line 976 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__ExcpVars_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepLayout_74, (MR_Integer) 1)));
#line 976 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__TopCSD_77;
#line 976 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__MiddleCSD_78;
#line 976 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__MaybeOldOutermost_79;

#line 978 "hlds_out_pred.m"
                {
#line 978 "hlds_out_pred.m"
                  hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0(hlds__hlds_out__hlds_out_pred__ProcStatic_75);
                }
#line 979 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__TopCSD_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ExcpVars_76, (MR_Integer) 0)));
#line 979 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__MiddleCSD_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ExcpVars_76, (MR_Integer) 1)));
#line 979 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__MaybeOldOutermost_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ExcpVars_76, (MR_Integer) 2)));
#line 981 "hlds_out_pred.m"
                {
#line 981 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "% deep layout info: ");
                }
#line 982 "hlds_out_pred.m"
                {
#line 982 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "TopCSD is ");
                }
#line 6250 "hlds.hlds_out.hlds_out_pred.c"
                hlds__hlds_out__hlds_out_pred__TypeCtorInfo_242_242 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 983 "hlds_out_pred.m"
                {
#line 983 "hlds_out_pred.m"
                  parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_242_242, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__TopCSD_77);
                }
#line 984 "hlds_out_pred.m"
                {
#line 984 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) ", MiddleCSD is ");
                }
#line 985 "hlds_out_pred.m"
                {
#line 985 "hlds_out_pred.m"
                  parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_242_242, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__MiddleCSD_78);
                }
#line 991 "hlds_out_pred.m"
                if ((hlds__hlds_out__hlds_out_pred__MaybeOldOutermost_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 992 "hlds_out_pred.m"
                  {
#line 992 "hlds_out_pred.m"
                  }
#line 991 "hlds_out_pred.m"
                else
#line 987 "hlds_out_pred.m"
                  {
#line 987 "hlds_out_pred.m"
                    MR_Word hlds__hlds_out__hlds_out_pred__OldOutermost_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeOldOutermost_79, (MR_Integer) 0)));

#line 988 "hlds_out_pred.m"
                    {
#line 988 "hlds_out_pred.m"
                      mercury__io__write_string_3_p_0((MR_String) ", OldOutermost is ");
                    }
#line 989 "hlds_out_pred.m"
                    {
#line 989 "hlds_out_pred.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_242_242, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__OldOutermost_80);
                    }
#line 987 "hlds_out_pred.m"
                  }
#line 994 "hlds_out_pred.m"
                {
#line 994 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 976 "hlds_out_pred.m"
              }
#line 951 "hlds_out_pred.m"
          }
#line 1005 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MaybeUntupleInfo_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1006 "hlds_out_pred.m"
          {
#line 1006 "hlds_out_pred.m"
          }
#line 1005 "hlds_out_pred.m"
        else
#line 1002 "hlds_out_pred.m"
          {
#line 1002 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__UntupleInfo_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeUntupleInfo_45, (MR_Integer) 0)));

#line 1003 "hlds_out_pred.m"
            {
#line 1003 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0(hlds__hlds_out__hlds_out_pred__UntupleInfo_81, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 1002 "hlds_out_pred.m"
          }
#line 6321 "hlds.hlds_out.hlds_out_pred.c"
        hlds__hlds_out__hlds_out_pred__TypeInfo_243_243 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0];
#line 1008 "hlds_out_pred.m"
        {
#line 1008 "hlds_out_pred.m"
          mercury__map__to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_243_243, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_pred__VarNameRemap_46, &hlds__hlds_out__hlds_out_pred__VarNameRemapList_82);
        }
#line 1011 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__VarNameRemapList_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "hlds_out_pred.m"
          {
#line 1010 "hlds_out_pred.m"
          }
#line 1011 "hlds_out_pred.m"
        else
#line 1012 "hlds_out_pred.m"
          {
#line 1012 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapHead_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarNameRemapList_82, (MR_Integer) 0)));
#line 1012 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapTail_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarNameRemapList_82, (MR_Integer) 1)));

#line 1013 "hlds_out_pred.m"
            {
#line 1013 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 1014 "hlds_out_pred.m"
            {
#line 1014 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% var name remap: ");
            }
#line 1015 "hlds_out_pred.m"
            {
#line 1015 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(hlds__hlds_out__hlds_out_pred__VarNameRemapHead_83, hlds__hlds_out__hlds_out_pred__VarNameRemapTail_84, hlds__hlds_out__hlds_out_pred__VarSet_25);
            }
#line 1017 "hlds_out_pred.m"
            {
#line 1017 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 1012 "hlds_out_pred.m"
          }
#line 1020 "hlds_out_pred.m"
        {
#line 1020 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
        }
#line 1021 "hlds_out_pred.m"
        {
#line 1021 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__PredName_85 = hlds__hlds_module__predicate_name_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_14, hlds__hlds_out__hlds_out_pred__PredId_15);
        }
#line 1022 "hlds_out_pred.m"
        {
#line 1022 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__PredOrFunc_86 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_20);
        }
#line 1023 "hlds_out_pred.m"
        {
#line 1023 "hlds_out_pred.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_pred__ModeVarSet_87);
        }
#line 1028 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__PredOrFunc_86 == (MR_Integer) 1))
#line 1029 "hlds_out_pred.m"
          {
#line 1029 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__FuncHeadModes_88;
#line 1029 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__RetHeadMode_89;
#line 1029 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_204_204;
#line 1030 "hlds_out_pred.m"
            MR_Box hlds__hlds_out__hlds_out_pred__conv0_RetHeadMode_89;

#line 1030 "hlds_out_pred.m"
            {
#line 1030 "hlds_out_pred.m"
              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_pred__HeadModes_27, &hlds__hlds_out__hlds_out_pred__FuncHeadModes_88, &hlds__hlds_out__hlds_out_pred__conv0_RetHeadMode_89);
            }
#line 1030 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__RetHeadMode_89 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_RetHeadMode_89);
#line 1031 "hlds_out_pred.m"
            {
#line 1031 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1031 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_204_204, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_85));
#line 1031 "hlds_out_pred.m"
            }
#line 1031 "hlds_out_pred.m"
            {
#line 1031 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__mercury_output_func_mode_decl_8_p_0(hlds__hlds_out__hlds_out_pred__ModeVarSet_87, hlds__hlds_out__hlds_out_pred__V_204_204, hlds__hlds_out__hlds_out_pred__FuncHeadModes_88, hlds__hlds_out__hlds_out_pred__RetHeadMode_89, hlds__hlds_out__hlds_out_pred__DeclaredDeterminism_23, hlds__hlds_out__hlds_out_pred__ModeContext_32);
            }
#line 1029 "hlds_out_pred.m"
          }
#line 1028 "hlds_out_pred.m"
        else
#line 1025 "hlds_out_pred.m"
          {
#line 1025 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_206_206;

#line 1026 "hlds_out_pred.m"
            {
#line 1026 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_206_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_206_206, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_85));
#line 1026 "hlds_out_pred.m"
            }
#line 1026 "hlds_out_pred.m"
            {
#line 1026 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__mercury_output_pred_mode_decl_7_p_0(hlds__hlds_out__hlds_out_pred__ModeVarSet_87, hlds__hlds_out__hlds_out_pred__V_206_206, hlds__hlds_out__hlds_out_pred__HeadModes_27, hlds__hlds_out__hlds_out_pred__DeclaredDeterminism_23, hlds__hlds_out__hlds_out_pred__ModeContext_32);
            }
#line 1025 "hlds_out_pred.m"
          }
#line 1042 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MaybeArgLives_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1043 "hlds_out_pred.m"
          {
#line 1043 "hlds_out_pred.m"
          }
#line 1042 "hlds_out_pred.m"
        else
#line 1037 "hlds_out_pred.m"
          {
#line 1037 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ArgLives_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeArgLives_28, (MR_Integer) 0)));

#line 1038 "hlds_out_pred.m"
            {
#line 1038 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 1039 "hlds_out_pred.m"
            {
#line 1039 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% arg lives: ");
            }
#line 1040 "hlds_out_pred.m"
            {
#line 1040 "hlds_out_pred.m"
              mercury__io__print_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[2], ((MR_Box) (hlds__hlds_out__hlds_out_pred__ArgLives_90)));
            }
#line 1041 "hlds_out_pred.m"
            {
#line 1041 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 1037 "hlds_out_pred.m"
          }
#line 1045 "hlds_out_pred.m"
        {
#line 1045 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__RegR_HeadVars_29);
        }
#line 1051 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1046 "hlds_out_pred.m"
          {
#line 1046 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_216_216;
#line 1046 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_218_218;

#line 1046 "hlds_out_pred.m"
            {
#line 1046 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 1047 "hlds_out_pred.m"
            {
#line 1047 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% reg_r headvars: ");
            }
#line 1048 "hlds_out_pred.m"
            {
#line 1048 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_216_216 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__RegR_HeadVars_29);
            }
#line 1049 "hlds_out_pred.m"
            {
#line 1049 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_218_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_218_218, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[1]));
#line 1049 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_218_218, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_proc_10_p_0_1));
#line 1049 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_218_218, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1049 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_218_218, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__AppendVarNums_13));
#line 1049 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_218_218, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_25));
#line 1049 "hlds_out_pred.m"
            }
#line 1048 "hlds_out_pred.m"
            {
#line 1048 "hlds_out_pred.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_243_243, hlds__hlds_out__hlds_out_pred__V_216_216, (MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_218_218);
            }
#line 1050 "hlds_out_pred.m"
            {
#line 1050 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 1046 "hlds_out_pred.m"
          }
#line 1051 "hlds_out_pred.m"
        else
#line 1051 "hlds_out_pred.m"
          {
#line 1051 "hlds_out_pred.m"
          }
#line 1055 "hlds_out_pred.m"
        {
#line 1055 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_48, (MR_Char) 65);
        }
#line 1055 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1055 "hlds_out_pred.m"
          {
#line 1056 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__MaybeArgInfos_30)) == (MR_mktag((MR_Integer) 1)));
#line 1056 "hlds_out_pred.m"
            if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1056 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__ArgInfos_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeArgInfos_30, (MR_Integer) 0)));
#line 1055 "hlds_out_pred.m"
          }
#line 1062 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1058 "hlds_out_pred.m"
          {
#line 1058 "hlds_out_pred.m"
            {
#line 1058 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 1059 "hlds_out_pred.m"
            {
#line 1059 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% arg_infos: ");
            }
#line 1060 "hlds_out_pred.m"
            {
#line 1060 "hlds_out_pred.m"
              mercury__io__print_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[3], ((MR_Box) (hlds__hlds_out__hlds_out_pred__ArgInfos_91)));
            }
#line 1061 "hlds_out_pred.m"
            {
#line 1061 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 1058 "hlds_out_pred.m"
          }
#line 1062 "hlds_out_pred.m"
        else
#line 1062 "hlds_out_pred.m"
          {
#line 1062 "hlds_out_pred.m"
          }
#line 1066 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__ImportStatus_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1066 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1066 "hlds_out_pred.m"
          {
#line 1067 "hlds_out_pred.m"
            {
#line 1067 "hlds_out_pred.m"
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&hlds__hlds_out__hlds_out_pred__V_256_256);
            }
#line 1067 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__ProcId_16 == hlds__hlds_out__hlds_out_pred__V_256_256);
#line 1066 "hlds_out_pred.m"
          }
#line 1070 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1070 "hlds_out_pred.m"
          {
#line 1070 "hlds_out_pred.m"
          }
#line 1070 "hlds_out_pred.m"
        else
#line 1071 "hlds_out_pred.m"
          {
#line 1071 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__StackSlots_92;
#line 1071 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_93;

#line 1071 "hlds_out_pred.m"
            {
#line 1071 "hlds_out_pred.m"
              hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__StackSlots_92);
            }
#line 1072 "hlds_out_pred.m"
            {
#line 1072 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 1073 "hlds_out_pred.m"
            {
#line 1073 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__StackSlots_92, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13);
            }
#line 1074 "hlds_out_pred.m"
            {
#line 1074 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 1075 "hlds_out_pred.m"
            {
#line 1075 "hlds_out_pred.m"
              mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__HeadVars_26, &hlds__hlds_out__hlds_out_pred__HeadTerms_93);
            }
#line 1076 "hlds_out_pred.m"
            {
#line 1076 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_14, hlds__hlds_out__hlds_out_pred__PredId_15, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__HeadTerms_93, hlds__hlds_out__hlds_out_pred__PredOrFunc_86);
            }
#line 1078 "hlds_out_pred.m"
            {
#line 1078 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) " :-\n");
            }
#line 1079 "hlds_out_pred.m"
            {
#line 1079 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(hlds__hlds_out__hlds_out_pred__Info_11, hlds__hlds_out__hlds_out_pred__Goal_31, hlds__hlds_out__hlds_out_pred__ModuleInfo_14, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__Indent1_47, (MR_String) ".\n");
#line 1079 "hlds_out_pred.m"
              return;
            }
#line 1071 "hlds_out_pred.m"
          }
#line 834 "hlds_out_pred.m"
      }
#line 1082 "hlds_out_pred.m"
    else
#line 1082 "hlds_out_pred.m"
      {
#line 1082 "hlds_out_pred.m"
      }
#line 802 "hlds_out_pred.m"
  }
#line 45 "hlds_out_pred.m"
}

#line 443 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_14_p_0_1(
#line 443 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 443 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1)
#line 443 "hlds_out_pred.m"
{
#line 443 "hlds_out_pred.m"
  {
#line 443 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 443 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
#line 443 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2;

#line 443 "hlds_out_pred.m"
    {
#line 443 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2 = hlds__hlds_pred__proc_id_to_int_1_f_0(((MR_Integer) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
#line 443 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2));
#line 443 "hlds_out_pred.m"
    return hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 443 "hlds_out_pred.m"
  }
#line 443 "hlds_out_pred.m"
}

#line 37 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_14_p_0(
#line 37 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_15,
#line 37 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_16,
#line 37 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_17,
#line 37 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_18,
#line 37 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_19,
#line 37 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_20,
#line 37 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_21,
#line 37 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_22,
#line 37 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_23,
#line 37 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Clause_24,
#line 37 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__UseDeclaredModes_25,
#line 37 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_26)
#line 37 "hlds_out_pred.m"
{
#line 431 "hlds_out_pred.m"
  {
#line 431 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 431 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ApplicableModes_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_24, (MR_Integer) 0)));
#line 431 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Goal_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_24, (MR_Integer) 1)));
#line 431 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ImplLang_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_24, (MR_Integer) 2)));
#line 431 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_24, (MR_Integer) 3)));
#line 431 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__Indent1_33 = (hlds__hlds_out__hlds_out_pred__Indent_17 + (MR_Integer) 1);
#line 431 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__DumpOptions_34 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 0)));
#line 431 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_38;
#line 431 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__AllProcIds_39;
#line 432 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred___StateVarWarnings_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_24, (MR_Integer) 4)));
#line 435 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 1)));
#line 435 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 2)));
#line 435 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 3)));
#line 435 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 4)));
#line 471 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__SelectedProcIds_40;
#line 462 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_77_77;
#line 475 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_59_59;
#line 475 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_60_60;
#line 475 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_61_61;
#line 475 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred___GoalInfo_41;

#line 438 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__ApplicableModes_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "hlds_out_pred.m"
      {
#line 437 "hlds_out_pred.m"
      }
#line 438 "hlds_out_pred.m"
    else
#line 439 "hlds_out_pred.m"
      {
#line 439 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__Modes_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__ApplicableModes_28, (MR_Integer) 0)));

#line 440 "hlds_out_pred.m"
        {
#line 440 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_34, (MR_Char) 109);
        }
#line 446 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 441 "hlds_out_pred.m"
          {
#line 441 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ModeInts_36;

#line 441 "hlds_out_pred.m"
            {
#line 441 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_17);
            }
#line 442 "hlds_out_pred.m"
            {
#line 442 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% Modes for which this clause applies: ");
            }
#line 443 "hlds_out_pred.m"
            {
#line 443 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__ModeInts_36 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[2], hlds__hlds_out__hlds_out_pred__Modes_35);
            }
#line 444 "hlds_out_pred.m"
            {
#line 444 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(hlds__hlds_out__hlds_out_pred__ModeInts_36);
            }
#line 445 "hlds_out_pred.m"
            {
#line 445 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 441 "hlds_out_pred.m"
          }
#line 446 "hlds_out_pred.m"
        else
#line 446 "hlds_out_pred.m"
          {
#line 446 "hlds_out_pred.m"
          }
#line 439 "hlds_out_pred.m"
      }
#line 452 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__ImplLang_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 451 "hlds_out_pred.m"
      {
#line 451 "hlds_out_pred.m"
      }
#line 452 "hlds_out_pred.m"
    else
#line 453 "hlds_out_pred.m"
      {
#line 453 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ForeignLang_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__ImplLang_30, (MR_Integer) 0)));

#line 454 "hlds_out_pred.m"
        {
#line 454 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% Language of implementation: ");
        }
#line 455 "hlds_out_pred.m"
        {
#line 455 "hlds_out_pred.m"
          mercury__io__write_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__ForeignLang_37)));
        }
#line 456 "hlds_out_pred.m"
        {
#line 456 "hlds_out_pred.m"
          mercury__io__nl_2_p_0();
        }
#line 453 "hlds_out_pred.m"
      }
#line 458 "hlds_out_pred.m"
    {
#line 458 "hlds_out_pred.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_18, hlds__hlds_out__hlds_out_pred__PredId_19, &hlds__hlds_out__hlds_out_pred__PredInfo_38);
    }
#line 459 "hlds_out_pred.m"
    {
#line 459 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__AllProcIds_39 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_38);
    }
#line 461 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__ApplicableModes_28)) == (MR_mktag((MR_Integer) 1)));
#line 461 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 461 "hlds_out_pred.m"
      {
#line 461 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__SelectedProcIds_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__ApplicableModes_28, (MR_Integer) 0)));
#line 6888 "hlds.hlds_out.hlds_out_pred.c"
        hlds__hlds_out__hlds_out_pred__TypeInfo_77_77 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[7];
#line 462 "hlds_out_pred.m"
        {
#line 462 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_77_77, ((MR_Box) (hlds__hlds_out__hlds_out_pred__SelectedProcIds_40)), ((MR_Box) (hlds__hlds_out__hlds_out_pred__AllProcIds_39)));
        }
#line 462 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__succeeded = !(hlds__hlds_out__hlds_out_pred__succeeded);
#line 461 "hlds_out_pred.m"
      }
#line 471 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 468 "hlds_out_pred.m"
      {
#line 468 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_18, hlds__hlds_out__hlds_out_pred__Lang_16, hlds__hlds_out__hlds_out_pred__Context_31, hlds__hlds_out__hlds_out_pred__PredId_19, hlds__hlds_out__hlds_out_pred__SelectedProcIds_40, hlds__hlds_out__hlds_out_pred__VarSet_20, hlds__hlds_out__hlds_out_pred__AppendVarNums_21, hlds__hlds_out__hlds_out_pred__HeadTerms_22, hlds__hlds_out__hlds_out_pred__PredOrFunc_23, hlds__hlds_out__hlds_out_pred__UseDeclaredModes_25);
      }
#line 471 "hlds_out_pred.m"
    else
#line 472 "hlds_out_pred.m"
      {
#line 472 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_18, hlds__hlds_out__hlds_out_pred__PredId_19, hlds__hlds_out__hlds_out_pred__VarSet_20, hlds__hlds_out__hlds_out_pred__AppendVarNums_21, hlds__hlds_out__hlds_out_pred__HeadTerms_22, hlds__hlds_out__hlds_out_pred__PredOrFunc_23);
      }
#line 475 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Goal_29, (MR_Integer) 0)));
#line 475 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred___GoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Goal_29, (MR_Integer) 1)));
#line 475 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__V_59_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__V_59_59, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 475 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 475 "hlds_out_pred.m"
      {
#line 475 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__V_59_59, (MR_Integer) 1)));
#line 475 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__V_59_59, (MR_Integer) 2)));
#line 475 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__V_60_60 == (MR_Integer) 0);
#line 475 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 475 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "hlds_out_pred.m"
      }
#line 477 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 476 "hlds_out_pred.m"
      {
#line 476 "hlds_out_pred.m"
        {
#line 476 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 476 "hlds_out_pred.m"
          return;
        }
#line 476 "hlds_out_pred.m"
      }
#line 477 "hlds_out_pred.m"
    else
#line 478 "hlds_out_pred.m"
      {
#line 478 "hlds_out_pred.m"
        {
#line 478 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) " :-\n");
        }
#line 479 "hlds_out_pred.m"
        {
#line 479 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_pred__Info_15, hlds__hlds_out__hlds_out_pred__Goal_29, hlds__hlds_out__hlds_out_pred__ModuleInfo_18, hlds__hlds_out__hlds_out_pred__VarSet_20, hlds__hlds_out__hlds_out_pred__AppendVarNums_21, hlds__hlds_out__hlds_out_pred__Indent1_33, (MR_String) ".\n", hlds__hlds_out__hlds_out_pred__TypeQual_26);
#line 479 "hlds_out_pred.m"
          return;
        }
#line 478 "hlds_out_pred.m"
      }
#line 431 "hlds_out_pred.m"
  }
#line 37 "hlds_out_pred.m"
}

#line 232 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1(
#line 232 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 232 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 232 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 232 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 232 "hlds_out_pred.m"
{
#line 232 "hlds_out_pred.m"
  {
#line 232 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 232 "hlds_out_pred.m"
    {
#line 232 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 232 "hlds_out_pred.m"
      return;
    }
#line 232 "hlds_out_pred.m"
  }
#line 232 "hlds_out_pred.m"
}

#line 30 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(
#line 30 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_9,
#line 30 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_10,
#line 30 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_11,
#line 30 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_12,
#line 30 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_13,
#line 30 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_14)
#line 30 "hlds_out_pred.m"
{
#line 105 "hlds_out_pred.m"
  {
#line 105 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Module_16;
#line 105 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__PredName_17;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_18;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ArgTypes_19;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ExistQVars_20;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_21;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ClausesInfo_22;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Context_23;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ImportStatus_24;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Markers_25;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ClassContext_26;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ProofMap_27;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ConstraintMap_28;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Purity_29;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadTypeParams_30;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemap_31;
#line 105 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__DumpOptions_32;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_33;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarSet_36;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_39;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_40;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ClausesRep_41;
#line 105 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_43;
#line 122 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_221_221;
#line 122 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_222_222;
#line 122 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_223_223;
#line 122 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_224_224;
#line 145 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_37_37;
#line 145 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_38_38;
#line 145 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred___ItemNumbers_42;
#line 145 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred___HaveForeignClauses_44;

#line 106 "hlds_out_pred.m"
    {
#line 106 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__Module_16 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_14);
    }
#line 107 "hlds_out_pred.m"
    {
#line 107 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__PredName_17 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_14);
    }
#line 108 "hlds_out_pred.m"
    {
#line 108 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_14);
    }
#line 109 "hlds_out_pred.m"
    {
#line 109 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ArgTypes_19);
    }
#line 110 "hlds_out_pred.m"
    {
#line 110 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ExistQVars_20);
    }
#line 111 "hlds_out_pred.m"
    {
#line 111 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__TVarSet_21);
    }
#line 112 "hlds_out_pred.m"
    {
#line 112 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ClausesInfo_22);
    }
#line 113 "hlds_out_pred.m"
    {
#line 113 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__Context_23);
    }
#line 114 "hlds_out_pred.m"
    {
#line 114 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ImportStatus_24);
    }
#line 115 "hlds_out_pred.m"
    {
#line 115 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__Markers_25);
    }
#line 116 "hlds_out_pred.m"
    {
#line 116 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ClassContext_26);
    }
#line 117 "hlds_out_pred.m"
    {
#line 117 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ProofMap_27);
    }
#line 118 "hlds_out_pred.m"
    {
#line 118 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ConstraintMap_28);
    }
#line 119 "hlds_out_pred.m"
    {
#line 119 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__Purity_29);
    }
#line 120 "hlds_out_pred.m"
    {
#line 120 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__HeadTypeParams_30);
    }
#line 121 "hlds_out_pred.m"
    {
#line 121 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__VarNameRemap_31);
    }
#line 122 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__DumpOptions_32 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 0)));
#line 122 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_221_221 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 1)));
#line 122 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 2)));
#line 122 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 3)));
#line 122 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 4)));
#line 123 "hlds_out_pred.m"
    {
#line 123 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_32, (MR_Char) 118);
    }
#line 125 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 124 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__AppendVarNums_33 = (MR_Integer) 1;
#line 125 "hlds_out_pred.m"
    else
#line 126 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__AppendVarNums_33 = (MR_Integer) 0;
#line 128 "hlds_out_pred.m"
    {
#line 128 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_32, (MR_Char) 67);
    }
#line 142 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 135 "hlds_out_pred.m"
      if ((hlds__hlds_out__hlds_out_pred__PredOrFunc_18 == (MR_Integer) 1))
#line 136 "hlds_out_pred.m"
        {
#line 136 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__FuncArgTypes_34;
#line 136 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__FuncRetType_35;
#line 136 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__V_100_100;
#line 137 "hlds_out_pred.m"
          MR_Box hlds__hlds_out__hlds_out_pred__conv0_FuncRetType_35;

#line 137 "hlds_out_pred.m"
          {
#line 137 "hlds_out_pred.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_out__hlds_out_pred__ArgTypes_19, &hlds__hlds_out__hlds_out_pred__FuncArgTypes_34, &hlds__hlds_out__hlds_out_pred__conv0_FuncRetType_35);
          }
#line 137 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__FuncRetType_35 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_FuncRetType_35);
#line 139 "hlds_out_pred.m"
          {
#line 139 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 139 "hlds_out_pred.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_100_100, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Module_16));
#line 139 "hlds_out_pred.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_100_100, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_17));
#line 139 "hlds_out_pred.m"
          }
#line 138 "hlds_out_pred.m"
          {
#line 138 "hlds_out_pred.m"
            parse_tree__mercury_to_mercury__mercury_output_func_type_12_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__ExistQVars_20, hlds__hlds_out__hlds_out_pred__V_100_100, hlds__hlds_out__hlds_out_pred__FuncArgTypes_34, hlds__hlds_out__hlds_out_pred__FuncRetType_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_pred__Purity_29, hlds__hlds_out__hlds_out_pred__ClassContext_26, hlds__hlds_out__hlds_out_pred__Context_23, hlds__hlds_out__hlds_out_pred__AppendVarNums_33);
          }
#line 136 "hlds_out_pred.m"
        }
#line 135 "hlds_out_pred.m"
      else
#line 131 "hlds_out_pred.m"
        {
#line 131 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__V_103_103;

#line 133 "hlds_out_pred.m"
          {
#line 133 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "hlds_out_pred.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_103_103, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Module_16));
#line 133 "hlds_out_pred.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_103_103, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_17));
#line 133 "hlds_out_pred.m"
          }
#line 132 "hlds_out_pred.m"
          {
#line 132 "hlds_out_pred.m"
            parse_tree__mercury_to_mercury__mercury_output_pred_type_11_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__ExistQVars_20, hlds__hlds_out__hlds_out_pred__V_103_103, hlds__hlds_out__hlds_out_pred__ArgTypes_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_pred__Purity_29, hlds__hlds_out__hlds_out_pred__ClassContext_26, hlds__hlds_out__hlds_out_pred__Context_23, hlds__hlds_out__hlds_out_pred__AppendVarNums_33);
          }
#line 131 "hlds_out_pred.m"
        }
#line 142 "hlds_out_pred.m"
    else
#line 142 "hlds_out_pred.m"
      {
#line 142 "hlds_out_pred.m"
      }
#line 145 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__VarSet_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 0)));
#line 145 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 1)));
#line 145 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 2)));
#line 145 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__VarTypes_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 3)));
#line 145 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__HeadVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 4)));
#line 145 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__ClausesRep_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 5)));
#line 145 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred___ItemNumbers_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 6)));
#line 145 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__RttiVarMaps_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 7)));
#line 145 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred___HaveForeignClauses_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 8)));
#line 147 "hlds_out_pred.m"
    {
#line 147 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_32, (MR_Char) 67);
    }
#line 348 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 148 "hlds_out_pred.m"
      {
#line 148 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__PredInt_45;
#line 148 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__GoalType_46;
#line 148 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__MarkerList_47;
#line 148 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapList_52;
#line 148 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__Clauses_55;
#line 148 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__Origin_59;
#line 148 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_116_116;

#line 148 "hlds_out_pred.m"
        {
#line 148 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_11);
        }
#line 149 "hlds_out_pred.m"
        {
#line 149 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% pred id: ");
        }
#line 150 "hlds_out_pred.m"
        {
#line 150 "hlds_out_pred.m"
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__PredId_13, &hlds__hlds_out__hlds_out_pred__PredInt_45);
        }
#line 151 "hlds_out_pred.m"
        {
#line 151 "hlds_out_pred.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__PredInt_45);
        }
#line 152 "hlds_out_pred.m"
        {
#line 152 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ", category: ");
        }
#line 153 "hlds_out_pred.m"
        {
#line 153 "hlds_out_pred.m"
          parse_tree__prog_out__write_pred_or_func_3_p_0(hlds__hlds_out__hlds_out_pred__PredOrFunc_18);
        }
#line 154 "hlds_out_pred.m"
        {
#line 154 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ", status: ");
        }
#line 155 "hlds_out_pred.m"
        {
#line 155 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_116_116 = hlds__hlds_out__hlds_out_pred__import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__ImportStatus_24);
        }
#line 155 "hlds_out_pred.m"
        {
#line 155 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_116_116);
        }
#line 156 "hlds_out_pred.m"
        {
#line 156 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 157 "hlds_out_pred.m"
        {
#line 157 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% goal_type: ");
        }
#line 158 "hlds_out_pred.m"
        {
#line 158 "hlds_out_pred.m"
          hlds__hlds_pred__pred_info_get_goal_type_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__GoalType_46);
        }
#line 159 "hlds_out_pred.m"
        {
#line 159 "hlds_out_pred.m"
          mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_goal_type_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__GoalType_46)));
        }
#line 160 "hlds_out_pred.m"
        {
#line 160 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 161 "hlds_out_pred.m"
        {
#line 161 "hlds_out_pred.m"
          hlds__hlds_pred__markers_to_marker_list_2_p_0(hlds__hlds_out__hlds_out_pred__Markers_25, &hlds__hlds_out__hlds_out_pred__MarkerList_47);
        }
#line 164 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MarkerList_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "hlds_out_pred.m"
          {
#line 163 "hlds_out_pred.m"
          }
#line 164 "hlds_out_pred.m"
        else
#line 165 "hlds_out_pred.m"
          {
#line 166 "hlds_out_pred.m"
            {
#line 166 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% markers: ");
            }
#line 167 "hlds_out_pred.m"
            {
#line 167 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0(hlds__hlds_out__hlds_out_pred__MarkerList_47);
            }
#line 168 "hlds_out_pred.m"
            {
#line 168 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 165 "hlds_out_pred.m"
          }
#line 170 "hlds_out_pred.m"
        {
#line 170 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(hlds__hlds_out__hlds_out_pred__Indent_11, hlds__hlds_out__hlds_out_pred__AppendVarNums_33, hlds__hlds_out__hlds_out_pred__RttiVarMaps_43, hlds__hlds_out__hlds_out_pred__VarSet_36, hlds__hlds_out__hlds_out_pred__TVarSet_21);
        }
#line 172 "hlds_out_pred.m"
        {
#line 172 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, hlds__hlds_out__hlds_out_pred__ProofMap_27);
        }
#line 174 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 174 "hlds_out_pred.m"
          {
#line 174 "hlds_out_pred.m"
          }
#line 174 "hlds_out_pred.m"
        else
#line 176 "hlds_out_pred.m"
          {
#line 175 "hlds_out_pred.m"
            {
#line 175 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0(hlds__hlds_out__hlds_out_pred__Indent_11, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__ProofMap_27, hlds__hlds_out__hlds_out_pred__AppendVarNums_33);
            }
#line 177 "hlds_out_pred.m"
            {
#line 177 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 176 "hlds_out_pred.m"
          }
#line 179 "hlds_out_pred.m"
        {
#line 179 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_out__hlds_out_pred__ConstraintMap_28);
        }
#line 181 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 181 "hlds_out_pred.m"
          {
#line 181 "hlds_out_pred.m"
          }
#line 181 "hlds_out_pred.m"
        else
#line 182 "hlds_out_pred.m"
          {
#line 182 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(hlds__hlds_out__hlds_out_pred__Indent_11, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__ConstraintMap_28, hlds__hlds_out__hlds_out_pred__AppendVarNums_33);
          }
#line 192 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__HeadTypeParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "hlds_out_pred.m"
          {
#line 193 "hlds_out_pred.m"
          }
#line 192 "hlds_out_pred.m"
        else
#line 187 "hlds_out_pred.m"
          {
#line 188 "hlds_out_pred.m"
            {
#line 188 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% head_type_params:\n");
            }
#line 189 "hlds_out_pred.m"
            {
#line 189 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% ");
            }
#line 190 "hlds_out_pred.m"
            {
#line 190 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__AppendVarNums_33, hlds__hlds_out__hlds_out_pred__HeadTypeParams_30);
            }
#line 191 "hlds_out_pred.m"
            {
#line 191 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 187 "hlds_out_pred.m"
          }
#line 195 "hlds_out_pred.m"
        {
#line 195 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(hlds__hlds_out__hlds_out_pred__Indent_11, hlds__hlds_out__hlds_out_pred__VarSet_36, hlds__hlds_out__hlds_out_pred__AppendVarNums_33, hlds__hlds_out__hlds_out_pred__VarTypes_39, hlds__hlds_out__hlds_out_pred__TVarSet_21);
        }
#line 197 "hlds_out_pred.m"
        {
#line 197 "hlds_out_pred.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_pred__VarNameRemap_31, &hlds__hlds_out__hlds_out_pred__VarNameRemapList_52);
        }
#line 200 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__VarNameRemapList_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 199 "hlds_out_pred.m"
          {
#line 199 "hlds_out_pred.m"
          }
#line 200 "hlds_out_pred.m"
        else
#line 201 "hlds_out_pred.m"
          {
#line 201 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapHead_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarNameRemapList_52, (MR_Integer) 0)));
#line 201 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapTail_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarNameRemapList_52, (MR_Integer) 1)));

#line 202 "hlds_out_pred.m"
            {
#line 202 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_11);
            }
#line 203 "hlds_out_pred.m"
            {
#line 203 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% var name remap: ");
            }
#line 204 "hlds_out_pred.m"
            {
#line 204 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(hlds__hlds_out__hlds_out_pred__VarNameRemapHead_53, hlds__hlds_out__hlds_out_pred__VarNameRemapTail_54, hlds__hlds_out__hlds_out_pred__VarSet_36);
            }
#line 206 "hlds_out_pred.m"
            {
#line 206 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 201 "hlds_out_pred.m"
          }
#line 209 "hlds_out_pred.m"
        {
#line 209 "hlds_out_pred.m"
          hlds__hlds_clauses__get_clause_list_2_p_0(hlds__hlds_out__hlds_out_pred__ClausesRep_41, &hlds__hlds_out__hlds_out_pred__Clauses_55);
        }
#line 216 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__Clauses_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 217 "hlds_out_pred.m"
          {
#line 217 "hlds_out_pred.m"
          }
#line 216 "hlds_out_pred.m"
        else
#line 211 "hlds_out_pred.m"
          {
#line 211 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__InfoForClauses_58;

#line 212 "hlds_out_pred.m"
            {
#line 212 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(hlds__hlds_out__hlds_out_pred__Info_9, &hlds__hlds_out__hlds_out_pred__InfoForClauses_58);
            }
#line 213 "hlds_out_pred.m"
            {
#line 213 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(hlds__hlds_out__hlds_out_pred__InfoForClauses_58, hlds__hlds_out__hlds_out_pred__Lang_10, hlds__hlds_out__hlds_out_pred__Indent_11, hlds__hlds_out__hlds_out_pred__ModuleInfo_12, hlds__hlds_out__hlds_out_pred__PredId_13, hlds__hlds_out__hlds_out_pred__VarSet_36, hlds__hlds_out__hlds_out_pred__AppendVarNums_33, hlds__hlds_out__hlds_out_pred__HeadVars_40, hlds__hlds_out__hlds_out_pred__PredOrFunc_18, hlds__hlds_out__hlds_out_pred__Clauses_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
#line 211 "hlds_out_pred.m"
          }
#line 220 "hlds_out_pred.m"
        {
#line 220 "hlds_out_pred.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__Origin_59);
        }
#line 245 "hlds_out_pred.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Origin_59)) == (MR_mktag((MR_Integer) 1))))
#line 222 "hlds_out_pred.m"
          {
#line 222 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_237_237;
#line 222 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__MethodConstraints_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));
#line 222 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ClassId_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__MethodConstraints_61, (MR_Integer) 0)));
#line 222 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__InstanceTypes_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__MethodConstraints_61, (MR_Integer) 1)));
#line 222 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__InstanceConstraints_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__MethodConstraints_61, (MR_Integer) 2)));
#line 222 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ClassMethodConstraints_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__MethodConstraints_61, (MR_Integer) 3)));
#line 222 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ClassName_66;
#line 222 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__MethodUnivConstraints_68;
#line 222 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__MethodExistConstraints_69;
#line 222 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_197_197;
#line 222 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_203_203;
#line 222 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)));
#line 226 "hlds_out_pred.m"
            MR_Integer hlds__hlds_out__hlds_out_pred__V_67_67;

#line 225 "hlds_out_pred.m"
            {
#line 225 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% instance method constraints:\n");
            }
#line 226 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__ClassName_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClassId_62, (MR_Integer) 0)));
#line 226 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClassId_62, (MR_Integer) 1)));
#line 228 "hlds_out_pred.m"
            {
#line 228 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_197_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_197_197, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__ClassName_66));
#line 228 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_197_197, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__InstanceTypes_63));
#line 228 "hlds_out_pred.m"
            }
#line 227 "hlds_out_pred.m"
            {
#line 227 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__AppendVarNums_33, hlds__hlds_out__hlds_out_pred__V_197_197);
            }
#line 229 "hlds_out_pred.m"
            {
#line 229 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 230 "hlds_out_pred.m"
            {
#line 230 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "instance constraints: ");
            }
#line 232 "hlds_out_pred.m"
            {
#line 232 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_203_203 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 232 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_203_203, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]));
#line 232 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_203_203, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1));
#line 232 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_203_203, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 232 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_203_203, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_21));
#line 232 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_203_203, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__AppendVarNums_33));
#line 232 "hlds_out_pred.m"
            }
#line 7651 "hlds.hlds_out.hlds_out_pred.c"
            hlds__hlds_out__hlds_out_pred__TypeCtorInfo_237_237 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 231 "hlds_out_pred.m"
            {
#line 231 "hlds_out_pred.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_237_237, hlds__hlds_out__hlds_out_pred__InstanceConstraints_64, (MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_203_203);
            }
#line 233 "hlds_out_pred.m"
            {
#line 233 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 235 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__MethodUnivConstraints_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClassMethodConstraints_65, (MR_Integer) 0)));
#line 235 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__MethodExistConstraints_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClassMethodConstraints_65, (MR_Integer) 1)));
#line 237 "hlds_out_pred.m"
            {
#line 237 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "method univ constraints: ");
            }
#line 238 "hlds_out_pred.m"
            {
#line 238 "hlds_out_pred.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_237_237, hlds__hlds_out__hlds_out_pred__MethodUnivConstraints_68, (MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_203_203);
            }
#line 240 "hlds_out_pred.m"
            {
#line 240 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 241 "hlds_out_pred.m"
            {
#line 241 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "method exist constraints: ");
            }
#line 242 "hlds_out_pred.m"
            {
#line 242 "hlds_out_pred.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_237_237, hlds__hlds_out__hlds_out_pred__MethodExistConstraints_69, (MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_203_203);
            }
#line 244 "hlds_out_pred.m"
            {
#line 244 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 222 "hlds_out_pred.m"
          }
#line 245 "hlds_out_pred.m"
        else
#line 245 "hlds_out_pred.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Origin_59)) == (MR_mktag((MR_Integer) 0))))
#line 246 "hlds_out_pred.m"
          {
#line 247 "hlds_out_pred.m"
            {
#line 247 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% special pred\n");
            }
#line 246 "hlds_out_pred.m"
          }
#line 245 "hlds_out_pred.m"
        else
#line 245 "hlds_out_pred.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Origin_59)) == (MR_mktag((MR_Integer) 2))))
#line 249 "hlds_out_pred.m"
          {
#line 249 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__Transformation_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)));
#line 249 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__OrigPredId_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 2)));
#line 249 "hlds_out_pred.m"
            MR_Integer hlds__hlds_out__hlds_out_pred__OrigPredIdNum_74;
#line 249 "hlds_out_pred.m"
            MR_String hlds__hlds_out__hlds_out_pred__V_249_249;
#line 249 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));

#line 250 "hlds_out_pred.m"
            {
#line 250 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__OrigPredIdNum_74 = hlds__hlds_pred__pred_id_to_int_1_f_0(hlds__hlds_out__hlds_out_pred__OrigPredId_73);
            }
#line 251 "hlds_out_pred.m"
            {
#line 251 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% transformed from pred id ");
            }
#line 252 "hlds_out_pred.m"
            {
#line 252 "hlds_out_pred.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_4[0], hlds__hlds_out__hlds_out_pred__OrigPredIdNum_74, &hlds__hlds_out__hlds_out_pred__V_249_249);
            }
#line 252 "hlds_out_pred.m"
            {
#line 252 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_249_249);
            }
#line 251 "hlds_out_pred.m"
            {
#line 251 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 253 "hlds_out_pred.m"
            {
#line 253 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% ");
            }
#line 254 "hlds_out_pred.m"
            {
#line 254 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_12, hlds__hlds_out__hlds_out_pred__OrigPredId_73);
            }
#line 255 "hlds_out_pred.m"
            {
#line 255 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 256 "hlds_out_pred.m"
            {
#line 256 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% transformation: ");
            }
#line 257 "hlds_out_pred.m"
            {
#line 257 "hlds_out_pred.m"
              mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_transformation_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__Transformation_71)));
            }
#line 258 "hlds_out_pred.m"
            {
#line 258 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 249 "hlds_out_pred.m"
          }
#line 245 "hlds_out_pred.m"
        else
#line 245 "hlds_out_pred.m"
        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Origin_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 265 "hlds_out_pred.m"
          {
#line 266 "hlds_out_pred.m"
            {
#line 266 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% assertion\n");
            }
#line 265 "hlds_out_pred.m"
          }
#line 245 "hlds_out_pred.m"
        else
#line 245 "hlds_out_pred.m"
        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Origin_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 260 "hlds_out_pred.m"
          {
#line 260 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__Creation_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));

#line 261 "hlds_out_pred.m"
            {
#line 261 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% created: ");
            }
#line 262 "hlds_out_pred.m"
            {
#line 262 "hlds_out_pred.m"
              mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_creation_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__Creation_75)));
            }
#line 263 "hlds_out_pred.m"
            {
#line 263 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 260 "hlds_out_pred.m"
          }
#line 245 "hlds_out_pred.m"
        else
#line 245 "hlds_out_pred.m"
        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Origin_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 344 "hlds_out_pred.m"
          {
#line 344 "hlds_out_pred.m"
          }
#line 245 "hlds_out_pred.m"
        else
#line 245 "hlds_out_pred.m"
        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Origin_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 301 "hlds_out_pred.m"
          {
#line 301 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__MutableModuleName_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));
#line 301 "hlds_out_pred.m"
            MR_String hlds__hlds_out__hlds_out_pred__MutableName_88 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 2)));
#line 301 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__MutablePredKind_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 3)));
#line 301 "hlds_out_pred.m"
            MR_String hlds__hlds_out__hlds_out_pred__MutableModuleNameStr_90;
#line 301 "hlds_out_pred.m"
            MR_String hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91;
#line 301 "hlds_out_pred.m"
            MR_String hlds__hlds_out__hlds_out_pred__V_302_302;
#line 301 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_308_308;
#line 301 "hlds_out_pred.m"
            MR_String hlds__hlds_out__hlds_out_pred__V_312_312;
#line 301 "hlds_out_pred.m"
            MR_String hlds__hlds_out__hlds_out_pred__V_322_322;

#line 302 "hlds_out_pred.m"
            {
#line 302 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MutableModuleNameStr_90 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__MutableModuleName_87);
            }
#line 306 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MutablePredKind_89 == (MR_Integer) 6))
#line 323 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91 = (MR_String) "constant get predicate";
#line 306 "hlds_out_pred.m"
            else
#line 306 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MutablePredKind_89 == (MR_Integer) 7))
#line 326 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91 = (MR_String) "constant secret set predicate";
#line 306 "hlds_out_pred.m"
            else
#line 306 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MutablePredKind_89 == (MR_Integer) 11))
#line 338 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91 = (MR_String) "init predicate";
#line 306 "hlds_out_pred.m"
            else
#line 306 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MutablePredKind_89 == (MR_Integer) 2))
#line 311 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91 = (MR_String) "io get predicate";
#line 306 "hlds_out_pred.m"
            else
#line 306 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MutablePredKind_89 == (MR_Integer) 3))
#line 314 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91 = (MR_String) "io set predicate";
#line 306 "hlds_out_pred.m"
            else
#line 306 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MutablePredKind_89 == (MR_Integer) 8))
#line 329 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91 = (MR_String) "lock predicate";
#line 306 "hlds_out_pred.m"
            else
#line 306 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MutablePredKind_89 == (MR_Integer) 10))
#line 335 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91 = (MR_String) "preinit predicate";
#line 306 "hlds_out_pred.m"
            else
#line 306 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MutablePredKind_89 == (MR_Integer) 0))
#line 305 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91 = (MR_String) "std get predicate";
#line 306 "hlds_out_pred.m"
            else
#line 306 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MutablePredKind_89 == (MR_Integer) 1))
#line 308 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91 = (MR_String) "std set predicate";
#line 306 "hlds_out_pred.m"
            else
#line 306 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MutablePredKind_89 == (MR_Integer) 9))
#line 332 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91 = (MR_String) "unlock predicate";
#line 306 "hlds_out_pred.m"
            else
#line 306 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MutablePredKind_89 == (MR_Integer) 4))
#line 317 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91 = (MR_String) "unsafe get predicate";
#line 306 "hlds_out_pred.m"
            else
#line 320 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91 = (MR_String) "unsafe set predicate";
#line 340 "hlds_out_pred.m"
            {
#line 340 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% ");
            }
#line 7936 "hlds.hlds_out.hlds_out_pred.c"
            hlds__hlds_out__hlds_out_pred__V_308_308 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_4[0];
#line 341 "hlds_out_pred.m"
            {
#line 341 "hlds_out_pred.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_308_308, hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91, &hlds__hlds_out__hlds_out_pred__V_302_302);
            }
#line 341 "hlds_out_pred.m"
            {
#line 341 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_302_302);
            }
#line 340 "hlds_out_pred.m"
            {
#line 340 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) " for mutable ");
            }
#line 341 "hlds_out_pred.m"
            {
#line 341 "hlds_out_pred.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_308_308, hlds__hlds_out__hlds_out_pred__MutableName_88, &hlds__hlds_out__hlds_out_pred__V_312_312);
            }
#line 341 "hlds_out_pred.m"
            {
#line 341 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_312_312);
            }
#line 340 "hlds_out_pred.m"
            {
#line 340 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) " in module ");
            }
#line 342 "hlds_out_pred.m"
            {
#line 342 "hlds_out_pred.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_308_308, hlds__hlds_out__hlds_out_pred__MutableModuleNameStr_90, &hlds__hlds_out__hlds_out_pred__V_322_322);
            }
#line 342 "hlds_out_pred.m"
            {
#line 342 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_322_322);
            }
#line 340 "hlds_out_pred.m"
            {
#line 340 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 301 "hlds_out_pred.m"
          }
#line 245 "hlds_out_pred.m"
        else
#line 245 "hlds_out_pred.m"
        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Origin_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 269 "hlds_out_pred.m"
          {
#line 269 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorSymName_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));
#line 269 "hlds_out_pred.m"
            MR_Integer hlds__hlds_out__hlds_out_pred__TypeCtorArity_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 2)));
#line 269 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__SolverAuxPredKind_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 3)));
#line 269 "hlds_out_pred.m"
            MR_String hlds__hlds_out__hlds_out_pred__TypeCtorStr_81;
#line 269 "hlds_out_pred.m"
            MR_String hlds__hlds_out__hlds_out_pred__SolverAuxPredKindStr_82;
#line 269 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_166_166;
#line 269 "hlds_out_pred.m"
            MR_String hlds__hlds_out__hlds_out_pred__V_281_281;
#line 269 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_287_287;
#line 269 "hlds_out_pred.m"
            MR_String hlds__hlds_out__hlds_out_pred__V_291_291;

#line 271 "hlds_out_pred.m"
            {
#line 271 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 271 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_166_166, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TypeCtorSymName_78));
#line 271 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_166_166, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TypeCtorArity_79));
#line 271 "hlds_out_pred.m"
            }
#line 271 "hlds_out_pred.m"
            {
#line 271 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__TypeCtorStr_81 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__V_166_166);
            }
#line 275 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__SolverAuxPredKind_80 == (MR_Integer) 3))
#line 283 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__SolverAuxPredKindStr_82 = (MR_String) "from any conversion predicate";
#line 275 "hlds_out_pred.m"
            else
#line 275 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__SolverAuxPredKind_80 == (MR_Integer) 2))
#line 280 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__SolverAuxPredKindStr_82 = (MR_String) "from ground conversion predicate";
#line 275 "hlds_out_pred.m"
            else
#line 275 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__SolverAuxPredKind_80 == (MR_Integer) 1))
#line 277 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__SolverAuxPredKindStr_82 = (MR_String) "to any conversion predicate";
#line 275 "hlds_out_pred.m"
            else
#line 274 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__SolverAuxPredKindStr_82 = (MR_String) "to ground conversion predicate";
#line 285 "hlds_out_pred.m"
            {
#line 285 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% ");
            }
#line 8050 "hlds.hlds_out.hlds_out_pred.c"
            hlds__hlds_out__hlds_out_pred__V_287_287 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_4[0];
#line 286 "hlds_out_pred.m"
            {
#line 286 "hlds_out_pred.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_287_287, hlds__hlds_out__hlds_out_pred__SolverAuxPredKindStr_82, &hlds__hlds_out__hlds_out_pred__V_281_281);
            }
#line 286 "hlds_out_pred.m"
            {
#line 286 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_281_281);
            }
#line 285 "hlds_out_pred.m"
            {
#line 285 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) " for ");
            }
#line 286 "hlds_out_pred.m"
            {
#line 286 "hlds_out_pred.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_287_287, hlds__hlds_out__hlds_out_pred__TypeCtorStr_81, &hlds__hlds_out__hlds_out_pred__V_291_291);
            }
#line 286 "hlds_out_pred.m"
            {
#line 286 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_291_291);
            }
#line 285 "hlds_out_pred.m"
            {
#line 285 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 269 "hlds_out_pred.m"
          }
#line 245 "hlds_out_pred.m"
        else
#line 245 "hlds_out_pred.m"
        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Origin_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 288 "hlds_out_pred.m"
          {
#line 288 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__BasePredCallId_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));
#line 288 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TablingAuxPredKind_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 2)));
#line 288 "hlds_out_pred.m"
            MR_String hlds__hlds_out__hlds_out_pred__BasePredStr_85;
#line 288 "hlds_out_pred.m"
            MR_String hlds__hlds_out__hlds_out_pred__TablingAuxPredKindStr_86;
#line 288 "hlds_out_pred.m"
            MR_String hlds__hlds_out__hlds_out_pred__V_260_260;
#line 288 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_266_266;
#line 288 "hlds_out_pred.m"
            MR_String hlds__hlds_out__hlds_out_pred__V_270_270;

#line 289 "hlds_out_pred.m"
            {
#line 289 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__BasePredStr_85 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__BasePredCallId_83);
            }
#line 293 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__TablingAuxPredKind_84 == (MR_Integer) 1))
#line 295 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__TablingAuxPredKindStr_86 = (MR_String) "table reset predicate";
#line 293 "hlds_out_pred.m"
            else
#line 292 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__TablingAuxPredKindStr_86 = (MR_String) "table statistics predicate";
#line 297 "hlds_out_pred.m"
            {
#line 297 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% ");
            }
#line 8123 "hlds.hlds_out.hlds_out_pred.c"
            hlds__hlds_out__hlds_out_pred__V_266_266 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_4[0];
#line 298 "hlds_out_pred.m"
            {
#line 298 "hlds_out_pred.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_266_266, hlds__hlds_out__hlds_out_pred__TablingAuxPredKindStr_86, &hlds__hlds_out__hlds_out_pred__V_260_260);
            }
#line 298 "hlds_out_pred.m"
            {
#line 298 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_260_260);
            }
#line 297 "hlds_out_pred.m"
            {
#line 297 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) " for ");
            }
#line 298 "hlds_out_pred.m"
            {
#line 298 "hlds_out_pred.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_266_266, hlds__hlds_out__hlds_out_pred__BasePredStr_85, &hlds__hlds_out__hlds_out_pred__V_270_270);
            }
#line 298 "hlds_out_pred.m"
            {
#line 298 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_270_270);
            }
#line 297 "hlds_out_pred.m"
            {
#line 297 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 288 "hlds_out_pred.m"
          }
#line 245 "hlds_out_pred.m"
        else
#line 345 "hlds_out_pred.m"
          {
#line 345 "hlds_out_pred.m"
          }
#line 148 "hlds_out_pred.m"
      }
#line 348 "hlds_out_pred.m"
    else
#line 348 "hlds_out_pred.m"
      {
#line 348 "hlds_out_pred.m"
      }
#line 351 "hlds_out_pred.m"
    {
#line 351 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_procs_9_p_0(hlds__hlds_out__hlds_out_pred__Info_9, hlds__hlds_out__hlds_out_pred__Indent_11, hlds__hlds_out__hlds_out_pred__AppendVarNums_33, hlds__hlds_out__hlds_out_pred__ModuleInfo_12, hlds__hlds_out__hlds_out_pred__PredId_13, hlds__hlds_out__hlds_out_pred__ImportStatus_24, hlds__hlds_out__hlds_out_pred__PredInfo_14);
    }
#line 353 "hlds_out_pred.m"
    {
#line 353 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 353 "hlds_out_pred.m"
      return;
    }
#line 105 "hlds_out_pred.m"
  }
#line 30 "hlds_out_pred.m"
}

void mercury__hlds__hlds_out__hlds_out_pred__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_pred__init_type_tables(void)
{
}

void mercury__hlds__hlds_out__hlds_out_pred__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_out.hlds_out_pred. */
