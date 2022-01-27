/*
** Automatically generated from `hlds_out_pred.m'
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
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
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 147 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 150 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 153 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 156 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 159 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_pred__type_ctor_info_table_locn_0;

#line 162 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 165 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 168 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 174 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 177 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 1051 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__1051__1_5_p_0(
#line 1051 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_13,
#line 1051 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_25,
#line 1051 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_252);

#line 1334 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0_1(
#line 1334 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1334 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1334 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1334 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 1331 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0(
#line 1331 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Markers_4);

#line 1297 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(
#line 1297 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_8,
#line 1297 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 1297 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 1297 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ConstraintId_11,
#line 1297 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProgConstraint_12);

#line 1294 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1(
#line 1294 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1294 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1294 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1294 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1294 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_4);

#line 1288 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(
#line 1288 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_7,
#line 1288 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 1288 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ConstraintMap_9,
#line 1288 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10);

#line 1208 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_p_0(
#line 1208 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1208 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_2);

#line 1193 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_p_0(
#line 1193 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1193 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ArgInfo_6);

#line 1166 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_p_0(
#line 1166 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1166 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_6);

#line 1146 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_p_0(
#line 1146 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__CoveragePointInfo_6,
#line 1146 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_11,
#line 1146 "hlds_out_pred.m"
  MR_Integer * hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_12);

#line 1110 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_p_0(
#line 1110 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6,
#line 1110 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_14,
#line 1110 "hlds_out_pred.m"
  MR_Integer * hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_15);

#line 1108 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_2(
#line 1108 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1108 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1108 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1108 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1108 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_4,
#line 1108 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_5);

#line 1107 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_1(
#line 1107 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1107 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1107 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1107 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1107 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_4,
#line 1107 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_5);

#line 1093 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0(
#line 1093 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcStatic_4);

#line 789 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(
#line 789 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_1,
#line 789 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_2,
#line 789 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_3,
#line 789 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_4,
#line 789 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_5,
#line 789 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_6,
#line 789 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ImportStatus_7,
#line 789 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcTable_8);

#line 779 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_9_p_0(
#line 779 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_10,
#line 779 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_11,
#line 779 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_12,
#line 779 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_13,
#line 779 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_14,
#line 779 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ImportStatus_15,
#line 779 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_16);

#line 757 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(
#line 757 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Head_6,
#line 757 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Tail_7,
#line 757 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8);

#line 746 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(
#line 746 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 746 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_9,
#line 746 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_10,
#line 746 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__OldVar_11,
#line 746 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__NewVars_12);

#line 743 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0_1(
#line 743 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 743 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 743 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 743 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 743 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_4);

#line 736 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0(
#line 736 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__1_1,
#line 736 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 736 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_9,
#line 736 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_10);

#line 732 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0_1(
#line 732 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 732 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1);

#line 727 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(
#line 727 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_7,
#line 727 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__StackSlots_8,
#line 727 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 727 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10);

#line 699 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(
#line 699 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 699 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 699 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_11,
#line 699 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_12,
#line 699 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_13,
#line 699 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Var_14);

#line 686 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(
#line 686 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 686 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 686 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_11,
#line 686 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_12,
#line 686 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_13,
#line 686 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Constraint_14);

#line 651 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(
#line 651 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 651 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 651 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_11,
#line 651 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_12,
#line 651 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_13,
#line 651 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVar_14);

#line 648 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3(
#line 648 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 648 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 648 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 648 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 643 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_2(
#line 643 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 643 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 643 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 643 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 638 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_1(
#line 638 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 638 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 638 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 638 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 631 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(
#line 631 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_8,
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_9,
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_10,
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_11,
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_12);

#line 611 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__1_1,
#line 611 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_2,
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_3,
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_4,
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_5,
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeVarSet_6);

#line 599 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(
#line 599 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_8,
#line 599 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 599 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 599 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_11,
#line 599 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_12);

#line 547 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(
#line 547 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_9,
#line 547 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_10,
#line 547 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_11,
#line 547 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_12,
#line 547 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_13,
#line 547 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_14);

#line 539 "hlds_out_pred.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(
#line 539 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_5,
#line 539 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_6,
#line 539 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_3);

#line 529 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0_1(
#line 529 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 529 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1);

#line 500 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0(
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_13,
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_14,
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_15,
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_16,
#line 500 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_17,
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_18,
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_19,
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_20,
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_21,
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__UseDeclaredModes_22);

#line 484 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_p_0(
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_1,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_2,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_3,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_4,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__5_5,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_6,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_7,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_8,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_9,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__UseDeclaredModes_10);

#line 406 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_15,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_16,
#line 406 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_17,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_18,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_19,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_20,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_21,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_22,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_23,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Clauses0_24,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_25,
#line 406 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__ClauseNum_26);

#line 395 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_14,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_15,
#line 395 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_16,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_17,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_18,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_19,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_20,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_21,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_22,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Clauses0_23,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_24);

#line 356 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(
#line 356 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_3,
#line 356 "hlds_out_pred.m"
  MR_Word * hlds__hlds_out__hlds_out_pred__ClausesInfo_4);

#line 1190 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_2(
#line 1190 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1190 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1190 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1190 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 1183 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_1(
#line 1183 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1183 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1183 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1183 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 1051 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0_1(
#line 1051 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1051 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1051 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1051 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 444 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_14_p_0_1(
#line 444 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 444 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1);

#line 233 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1(
#line 233 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 233 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 233 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 233 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_1[8][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_2[7][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_3[4][8];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_5[2][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_6[2][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_7[3][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_8[3][11];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_9[2][10];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_10[1][6];


#line 307 "hlds_out_pred.m"
/* sealed */ struct hlds__hlds_out__hlds_out_pred__vector_common_type_4_0_s {
#line 307 "hlds_out_pred.m"
  const MR_String hlds__hlds_out__hlds_out_pred__vector_common_type_4_0__vct_4_f_0;
#line 307 "hlds_out_pred.m"
};

static /* final */ const struct hlds__hlds_out__hlds_out_pred__vector_common_type_4_0_s hlds__hlds_out__hlds_out_pred_vector_common_4[45];



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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_clause_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[1])),
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_10[0])),
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_5[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "::"))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_6[2][5] = {
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_7[3][7] = {
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
    ((MR_Box) (&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_8[3][11] = {
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_9[2][10] = {
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_10[1][6] = {
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


static /* final */ const struct hlds__hlds_out__hlds_out_pred__vector_common_type_4_0_s hlds__hlds_out__hlds_out_pred_vector_common_4[45] = {
  /* row 0 */   {     (MR_String) "std get predicate" },
  /* row 1 */   {     (MR_String) "std set predicate" },
  /* row 2 */   {     (MR_String) "io get predicate" },
  /* row 3 */   {     (MR_String) "io set predicate" },
  /* row 4 */   {     (MR_String) "unsafe get predicate" },
  /* row 5 */   {     (MR_String) "unsafe set predicate" },
  /* row 6 */   {     (MR_String) "constant get predicate" },
  /* row 7 */   {     (MR_String) "constant secret set predicate" },
  /* row 8 */   {     (MR_String) "lock predicate" },
  /* row 9 */   {     (MR_String) "unlock predicate" },
  /* row 10 */   {     (MR_String) "preinit predicate" },
  /* row 11 */   {     (MR_String) "init predicate" },
  /* row 12 */   {     (MR_String) "to ground conversion predicate" },
  /* row 13 */   {     (MR_String) "to any conversion predicate" },
  /* row 14 */   {     (MR_String) "from ground conversion predicate" },
  /* row 15 */   {     (MR_String) "from any conversion predicate" },
  /* row 16 */   {     (MR_String) "imported in the implementation" },
  /* row 17 */   {     (MR_String) "imported in the interface" },
  /* row 18 */   {     (MR_String) "imported by an ancestor" },
  /* row 19 */   {     (MR_String) "imported from an ancestor\'s private interface" },
  /* row 20 */   {     (MR_String) "stub" },
  /* row 21 */   {     (MR_String) "builtin_stub" },
  /* row 22 */   {     (MR_String) "infer_type" },
  /* row 23 */   {     (MR_String) "infer_modes" },
  /* row 24 */   {     (MR_String) "obsolete" },
  /* row 25 */   {     (MR_String) "no_determinism_warning" },
  /* row 26 */   {     (MR_String) "inline" },
  /* row 27 */   {     (MR_String) "no_inline" },
  /* row 28 */   {     (MR_String) "heuristic_inline" },
  /* row 29 */   {     (MR_String) "class_method" },
  /* row 30 */   {     (MR_String) "class_instance_method" },
  /* row 31 */   {     (MR_String) "named_class_instance_method" },
  /* row 32 */   {     (MR_String) "impure" },
  /* row 33 */   {     (MR_String) "semipure" },
  /* row 34 */   {     (MR_String) "promise_pure" },
  /* row 35 */   {     (MR_String) "promise_semipure" },
  /* row 36 */   {     (MR_String) "promise_equivalent_clauses" },
  /* row 37 */   {     (MR_String) "terminates" },
  /* row 38 */   {     (MR_String) "does_not_terminate" },
  /* row 39 */   {     (MR_String) "check_termination" },
  /* row 40 */   {     (MR_String) "calls_are_fully_qualified" },
  /* row 41 */   {     (MR_String) "mode_check_clauses" },
  /* row 42 */   {     (MR_String) "mutable_access_pred" },
  /* row 43 */   {     (MR_String) "has_require_scope" },
  /* row 44 */   {     (MR_String) "has_format_call" },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1142 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1150 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1158 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1166 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1174 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_pred__type_ctor_info_table_locn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0
  }
};

#line 1183 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1191 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 1200 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1208 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1216 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1224 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1051 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__1051__1_5_p_0(
#line 1051 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_13,
#line 1051 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_25,
#line 1051 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_252)
#line 1051 "hlds_out_pred.m"
{
#line 1051 "hlds_out_pred.m"
  {
#line 1051 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 1051 "hlds_out_pred.m"
    {
#line 1051 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__HeadVar__3_252);
#line 1051 "hlds_out_pred.m"
      return;
    }
#line 1051 "hlds_out_pred.m"
  }
#line 1051 "hlds_out_pred.m"
}

#line 1334 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0_1(
#line 1334 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1334 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1334 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1334 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 1334 "hlds_out_pred.m"
{
#line 1334 "hlds_out_pred.m"
  {
#line 1334 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 1334 "hlds_out_pred.m"
    {
#line 1334 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_marker_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 1334 "hlds_out_pred.m"
      return;
    }
#line 1334 "hlds_out_pred.m"
  }
#line 1334 "hlds_out_pred.m"
}

#line 1331 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0(
#line 1331 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Markers_4)
#line 1331 "hlds_out_pred.m"
{
#line 1333 "hlds_out_pred.m"
  {
#line 1333 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 1334 "hlds_out_pred.m"
    {
#line 1334 "hlds_out_pred.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0, hlds__hlds_out__hlds_out_pred__Markers_4, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[6]);
#line 1334 "hlds_out_pred.m"
      return;
    }
#line 1333 "hlds_out_pred.m"
  }
#line 1331 "hlds_out_pred.m"
}

#line 1297 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(
#line 1297 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_8,
#line 1297 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 1297 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 1297 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ConstraintId_11,
#line 1297 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProgConstraint_12)
#line 1297 "hlds_out_pred.m"
{
#line 1301 "hlds_out_pred.m"
  {
#line 1301 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1301 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ConstraintType_28;
#line 1301 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__GoalId_29;
#line 1301 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__N_30;
#line 1301 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__GoalIdNum_31;

#line 1302 "hlds_out_pred.m"
    {
#line 1302 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_8);
    }
#line 1303 "hlds_out_pred.m"
    {
#line 1303 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 1312 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__ConstraintType_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ConstraintId_11, (MR_Integer) 0)));
#line 1312 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__GoalId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ConstraintId_11, (MR_Integer) 1)));
#line 1312 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__N_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ConstraintId_11, (MR_Integer) 2)));
#line 1316 "hlds_out_pred.m"
#line 1316 "hlds_out_pred.m"
    switch (hlds__hlds_out__hlds_out_pred__ConstraintType_28) {
#line 1316 "hlds_out_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1316 "hlds_out_pred.m"
      case (MR_Integer) 1:
#line 1314 "hlds_out_pred.m"
        {
#line 1315 "hlds_out_pred.m"
          {
#line 1315 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "(E, ");
          }
#line 1314 "hlds_out_pred.m"
        }
#line 1316 "hlds_out_pred.m"
        break;
#line 1316 "hlds_out_pred.m"
      case (MR_Integer) 0:
#line 1317 "hlds_out_pred.m"
        {
#line 1318 "hlds_out_pred.m"
          {
#line 1318 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "(A, ");
          }
#line 1317 "hlds_out_pred.m"
        }
#line 1316 "hlds_out_pred.m"
        break;
#line 1316 "hlds_out_pred.m"
    }
#line 1320 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__GoalIdNum_31 = (MR_Integer) hlds__hlds_out__hlds_out_pred__GoalId_29;
#line 1321 "hlds_out_pred.m"
    {
#line 1321 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__GoalIdNum_31);
    }
#line 1322 "hlds_out_pred.m"
    {
#line 1322 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1323 "hlds_out_pred.m"
    {
#line 1323 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__N_30);
    }
#line 1324 "hlds_out_pred.m"
    {
#line 1324 "hlds_out_pred.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
#line 1305 "hlds_out_pred.m"
    {
#line 1305 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 1306 "hlds_out_pred.m"
    {
#line 1306 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_9, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__ProgConstraint_12);
    }
#line 1307 "hlds_out_pred.m"
    {
#line 1307 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
#line 1307 "hlds_out_pred.m"
      return;
    }
#line 1301 "hlds_out_pred.m"
  }
#line 1297 "hlds_out_pred.m"
}

#line 1294 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1(
#line 1294 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1294 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1294 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1294 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1294 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_4)
#line 1294 "hlds_out_pred.m"
{
#line 1294 "hlds_out_pred.m"
  {
#line 1294 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 1294 "hlds_out_pred.m"
    {
#line 1294 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_2));
#line 1294 "hlds_out_pred.m"
      return;
    }
#line 1294 "hlds_out_pred.m"
  }
#line 1294 "hlds_out_pred.m"
}

#line 1288 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(
#line 1288 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_7,
#line 1288 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 1288 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ConstraintMap_9,
#line 1288 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10)
#line 1288 "hlds_out_pred.m"
{
#line 1291 "hlds_out_pred.m"
  {
#line 1291 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1291 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_17_17;
#line 1294 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_13;

#line 1292 "hlds_out_pred.m"
    {
#line 1292 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_7);
    }
#line 1293 "hlds_out_pred.m"
    {
#line 1293 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% Constraint Map:\n");
    }
#line 1294 "hlds_out_pred.m"
    {
#line 1294 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1294 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_9[1]));
#line 1294 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1));
#line 1294 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1294 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_7));
#line 1294 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_8));
#line 1294 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__AppendVarNums_10));
#line 1294 "hlds_out_pred.m"
    }
#line 1294 "hlds_out_pred.m"
    {
#line 1294 "hlds_out_pred.m"
      mercury__map__foldl_4_p_2((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_pred__V_17_17, hlds__hlds_out__hlds_out_pred__ConstraintMap_9, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_13);
    }
#line 1291 "hlds_out_pred.m"
  }
#line 1288 "hlds_out_pred.m"
}

#line 1208 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_p_0(
#line 1208 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1208 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_2)
#line 1208 "hlds_out_pred.m"
{
#line 1211 "hlds_out_pred.m"
  {
#line 1211 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1211 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__HeadVar__2_2, (MR_Integer) 0)));
#line 1211 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Locn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__HeadVar__2_2, (MR_Integer) 1)));
#line 1211 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_15_15;

#line 1212 "hlds_out_pred.m"
    {
#line 1212 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% typeinfo for ");
    }
#line 1213 "hlds_out_pred.m"
    {
#line 1213 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_15_15 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_pred__TVarSet_5, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__TVar_6);
    }
#line 1213 "hlds_out_pred.m"
    {
#line 1213 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_15_15);
    }
#line 1214 "hlds_out_pred.m"
    {
#line 1214 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 1218 "hlds_out_pred.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Locn_7)) == (MR_mktag((MR_Integer) 0))))
#line 1216 "hlds_out_pred.m"
      {
#line 1216 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Locn_7, (MR_Integer) 0)));
#line 1216 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_58_58;

#line 1217 "hlds_out_pred.m"
        {
#line 1217 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "direct in register ");
        }
#line 1217 "hlds_out_pred.m"
        {
#line 1217 "hlds_out_pred.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0], hlds__hlds_out__hlds_out_pred__N_9, &hlds__hlds_out__hlds_out_pred__V_58_58);
        }
#line 1217 "hlds_out_pred.m"
        {
#line 1217 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_58_58);
        }
#line 1217 "hlds_out_pred.m"
        {
#line 1217 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1217 "hlds_out_pred.m"
          return;
        }
#line 1216 "hlds_out_pred.m"
      }
#line 1218 "hlds_out_pred.m"
    else
#line 1219 "hlds_out_pred.m"
      {
#line 1219 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__O_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Locn_7, (MR_Integer) 1)));
#line 1219 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__N_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Locn_7, (MR_Integer) 0)));
#line 1219 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_37_37;
#line 1219 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__V_43_43;
#line 1219 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_47_47;

#line 1220 "hlds_out_pred.m"
        {
#line 1220 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "indirect from register ");
        }
#line 1620 "hlds.hlds_out.hlds_out_pred.c"
        hlds__hlds_out__hlds_out_pred__V_43_43 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0];
#line 1220 "hlds_out_pred.m"
        {
#line 1220 "hlds_out_pred.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_43_43, hlds__hlds_out__hlds_out_pred__N_32, &hlds__hlds_out__hlds_out_pred__V_37_37);
        }
#line 1220 "hlds_out_pred.m"
        {
#line 1220 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_37_37);
        }
#line 1220 "hlds_out_pred.m"
        {
#line 1220 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ", offset ");
        }
#line 1220 "hlds_out_pred.m"
        {
#line 1220 "hlds_out_pred.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_43_43, hlds__hlds_out__hlds_out_pred__O_10, &hlds__hlds_out__hlds_out_pred__V_47_47);
        }
#line 1220 "hlds_out_pred.m"
        {
#line 1220 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_47_47);
        }
#line 1220 "hlds_out_pred.m"
        {
#line 1220 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1220 "hlds_out_pred.m"
          return;
        }
#line 1219 "hlds_out_pred.m"
      }
#line 1211 "hlds_out_pred.m"
  }
#line 1208 "hlds_out_pred.m"
}

#line 1193 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_p_0(
#line 1193 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1193 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ArgInfo_6)
#line 1193 "hlds_out_pred.m"
{
#line 1196 "hlds_out_pred.m"
  {
#line 1196 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1196 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__HeadVarNum_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ArgInfo_6, (MR_Integer) 0)));
#line 1196 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__HeadVarName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ArgInfo_6, (MR_Integer) 1)));
#line 1196 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__SlotNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ArgInfo_6, (MR_Integer) 2)));
#line 1196 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ArgInfo_6, (MR_Integer) 3)));
#line 1196 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_25_25;

#line 1198 "hlds_out_pred.m"
    {
#line 1198 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 1199 "hlds_out_pred.m"
    {
#line 1199 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__HeadVarName_9);
    }
#line 1200 "hlds_out_pred.m"
    {
#line 1200 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
#line 1201 "hlds_out_pred.m"
    {
#line 1201 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__HeadVarNum_8);
    }
#line 1202 "hlds_out_pred.m"
    {
#line 1202 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " in slot ");
    }
#line 1203 "hlds_out_pred.m"
    {
#line 1203 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__SlotNum_10);
    }
#line 1204 "hlds_out_pred.m"
    {
#line 1204 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ", type ");
    }
#line 1205 "hlds_out_pred.m"
    {
#line 1205 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_25_25 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(hlds__hlds_out__hlds_out_pred__TVarSet_5, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__Type_11);
    }
#line 1205 "hlds_out_pred.m"
    {
#line 1205 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_25_25);
    }
#line 1206 "hlds_out_pred.m"
    {
#line 1206 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
#line 1206 "hlds_out_pred.m"
      return;
    }
#line 1196 "hlds_out_pred.m"
  }
#line 1193 "hlds_out_pred.m"
}

#line 1166 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_p_0(
#line 1166 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1166 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_6)
#line 1166 "hlds_out_pred.m"
{
#line 1169 "hlds_out_pred.m"
  {
#line 1169 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1169 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeArgInfos_8 = (MR_Word) hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_6;

#line 1174 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__MaybeArgInfos_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1172 "hlds_out_pred.m"
      {
#line 1173 "hlds_out_pred.m"
        {
#line 1173 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% proc table io info: io tabled, no arg_infos\n");
#line 1173 "hlds_out_pred.m"
          return;
        }
#line 1172 "hlds_out_pred.m"
      }
#line 1174 "hlds_out_pred.m"
    else
#line 1175 "hlds_out_pred.m"
      {
#line 1175 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ArgInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeArgInfos_8, (MR_Integer) 0)));

#line 1176 "hlds_out_pred.m"
        {
#line 1176 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% proc table io info: io tabled, arg_infos:\n");
        }
#line 1177 "hlds_out_pred.m"
        {
#line 1177 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_5, hlds__hlds_out__hlds_out_pred__ArgInfos_9);
#line 1177 "hlds_out_pred.m"
          return;
        }
#line 1175 "hlds_out_pred.m"
      }
#line 1169 "hlds_out_pred.m"
  }
#line 1166 "hlds_out_pred.m"
}

#line 1146 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_p_0(
#line 1146 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__CoveragePointInfo_6,
#line 1146 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_11,
#line 1146 "hlds_out_pred.m"
  MR_Integer * hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_12)
#line 1146 "hlds_out_pred.m"
{
#line 1149 "hlds_out_pred.m"
  {
#line 1149 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1149 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__RevGoalPath_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CoveragePointInfo_6, (MR_Integer) 0)));
#line 1149 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__PointType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CoveragePointInfo_6, (MR_Integer) 1)));
#line 1149 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_21_21;
#line 1149 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_24_24;
#line 1149 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_31_31;
#line 1149 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_37_37;
#line 1149 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_41_41;
#line 1149 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_51_51;

#line 1152 "hlds_out_pred.m"
    {
#line 1152 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_21_21 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__RevGoalPath_9);
    }
#line 1158 "hlds_out_pred.m"
#line 1158 "hlds_out_pred.m"
    switch (hlds__hlds_out__hlds_out_pred__PointType_10) {
#line 1158 "hlds_out_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1158 "hlds_out_pred.m"
      case ((int) MR_cp_type_branch_arm):
#line 1159 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__V_24_24 = (MR_String) "branch arm";
#line 1158 "hlds_out_pred.m"
        break;
#line 1158 "hlds_out_pred.m"
      case ((int) MR_cp_type_coverage_after):
#line 1158 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__V_24_24 = (MR_String) "after";
#line 1158 "hlds_out_pred.m"
        break;
#line 1158 "hlds_out_pred.m"
    }
#line 1151 "hlds_out_pred.m"
    {
#line 1151 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% coverage point slot ");
    }
#line 1858 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__V_37_37 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0];
#line 1152 "hlds_out_pred.m"
    {
#line 1152 "hlds_out_pred.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_37_37, hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_11, &hlds__hlds_out__hlds_out_pred__V_31_31);
    }
#line 1152 "hlds_out_pred.m"
    {
#line 1152 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_31_31);
    }
#line 1151 "hlds_out_pred.m"
    {
#line 1151 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ": goal path <");
    }
#line 1152 "hlds_out_pred.m"
    {
#line 1152 "hlds_out_pred.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_37_37, hlds__hlds_out__hlds_out_pred__V_21_21, &hlds__hlds_out__hlds_out_pred__V_41_41);
    }
#line 1152 "hlds_out_pred.m"
    {
#line 1152 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_41_41);
    }
#line 1151 "hlds_out_pred.m"
    {
#line 1151 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ">, type ");
    }
#line 1153 "hlds_out_pred.m"
    {
#line 1153 "hlds_out_pred.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_37_37, hlds__hlds_out__hlds_out_pred__V_24_24, &hlds__hlds_out__hlds_out_pred__V_51_51);
    }
#line 1153 "hlds_out_pred.m"
    {
#line 1153 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_51_51);
    }
#line 1151 "hlds_out_pred.m"
    {
#line 1151 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1154 "hlds_out_pred.m"
    *hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_12 = (hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_11 + (MR_Integer) 1);
#line 1149 "hlds_out_pred.m"
  }
#line 1146 "hlds_out_pred.m"
}

#line 1110 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_p_0(
#line 1110 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6,
#line 1110 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_14,
#line 1110 "hlds_out_pred.m"
  MR_Integer * hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_15)
#line 1110 "hlds_out_pred.m"
{
#line 1113 "hlds_out_pred.m"
  {
#line 1113 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1113 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_108_108;
#line 1113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_114_114;

#line 1114 "hlds_out_pred.m"
    {
#line 1114 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% call site static slot ");
    }
#line 1937 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__V_114_114 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0];
#line 1114 "hlds_out_pred.m"
    {
#line 1114 "hlds_out_pred.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_14, &hlds__hlds_out__hlds_out_pred__V_108_108);
    }
#line 1114 "hlds_out_pred.m"
    {
#line 1114 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_108_108);
    }
#line 1114 "hlds_out_pred.m"
    {
#line 1114 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1125 "hlds_out_pred.m"
#line 1125 "hlds_out_pred.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6)) {
#line 1125 "hlds_out_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1125 "hlds_out_pred.m"
      case (MR_Integer) 0:
#line 1117 "hlds_out_pred.m"
        {
#line 1117 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__CalleeRttiProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 0)));
#line 1117 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__TypeSubst_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
#line 1117 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__FileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
#line 1117 "hlds_out_pred.m"
          MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 3)));
#line 1117 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 4)));
#line 1117 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_51_51;
#line 1117 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_150_150;
#line 1117 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_160_160;
#line 1117 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_171_171;
#line 1117 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_181_181;

#line 1118 "hlds_out_pred.m"
          {
#line 1118 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "% normal call to ");
          }
#line 1119 "hlds_out_pred.m"
          {
#line 1119 "hlds_out_pred.m"
            mercury__io__write_3_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__CalleeRttiProcLabel_9)));
          }
#line 1120 "hlds_out_pred.m"
          {
#line 1120 "hlds_out_pred.m"
            mercury__io__nl_2_p_0();
          }
#line 1122 "hlds_out_pred.m"
          {
#line 1122 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_51_51 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_13);
          }
#line 1121 "hlds_out_pred.m"
          {
#line 1121 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "% type subst <");
          }
#line 1122 "hlds_out_pred.m"
          {
#line 1122 "hlds_out_pred.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__TypeSubst_10, &hlds__hlds_out__hlds_out_pred__V_150_150);
          }
#line 1122 "hlds_out_pred.m"
          {
#line 1122 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_150_150);
          }
#line 1121 "hlds_out_pred.m"
          {
#line 1121 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
          }
#line 1122 "hlds_out_pred.m"
          {
#line 1122 "hlds_out_pred.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__V_51_51, &hlds__hlds_out__hlds_out_pred__V_160_160);
          }
#line 1122 "hlds_out_pred.m"
          {
#line 1122 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_160_160);
          }
#line 1121 "hlds_out_pred.m"
          {
#line 1121 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">\n");
          }
#line 1123 "hlds_out_pred.m"
          {
#line 1123 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "% filename <");
          }
#line 1124 "hlds_out_pred.m"
          {
#line 1124 "hlds_out_pred.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__FileName_11, &hlds__hlds_out__hlds_out_pred__V_171_171);
          }
#line 1124 "hlds_out_pred.m"
          {
#line 1124 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_171_171);
          }
#line 1123 "hlds_out_pred.m"
          {
#line 1123 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">, line number <");
          }
#line 1124 "hlds_out_pred.m"
          {
#line 1124 "hlds_out_pred.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__LineNumber_12, &hlds__hlds_out__hlds_out_pred__V_181_181);
          }
#line 1124 "hlds_out_pred.m"
          {
#line 1124 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_181_181);
          }
#line 1123 "hlds_out_pred.m"
          {
#line 1123 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">\n");
          }
#line 1117 "hlds_out_pred.m"
        }
#line 1125 "hlds_out_pred.m"
        break;
#line 1125 "hlds_out_pred.m"
      case (MR_Integer) 1:
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_100_100;
#line 1139 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__FileName_102 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 0)));
#line 1139 "hlds_out_pred.m"
          MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_103 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
#line 1139 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
#line 1139 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_119_119;
#line 1139 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_129_129;
#line 1139 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_139_139;

#line 1128 "hlds_out_pred.m"
          {
#line 1128 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "% special call\n");
          }
#line 1141 "hlds_out_pred.m"
          {
#line 1141 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_100_100 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_104);
          }
#line 1140 "hlds_out_pred.m"
          {
#line 1140 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "% filename <");
          }
#line 1141 "hlds_out_pred.m"
          {
#line 1141 "hlds_out_pred.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__FileName_102, &hlds__hlds_out__hlds_out_pred__V_119_119);
          }
#line 1141 "hlds_out_pred.m"
          {
#line 1141 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_119_119);
          }
#line 1140 "hlds_out_pred.m"
          {
#line 1140 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">, line number <");
          }
#line 1141 "hlds_out_pred.m"
          {
#line 1141 "hlds_out_pred.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__LineNumber_103, &hlds__hlds_out__hlds_out_pred__V_129_129);
          }
#line 1141 "hlds_out_pred.m"
          {
#line 1141 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_129_129);
          }
#line 1140 "hlds_out_pred.m"
          {
#line 1140 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
          }
#line 1141 "hlds_out_pred.m"
          {
#line 1141 "hlds_out_pred.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__V_100_100, &hlds__hlds_out__hlds_out_pred__V_139_139);
          }
#line 1141 "hlds_out_pred.m"
          {
#line 1141 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_139_139);
          }
#line 1140 "hlds_out_pred.m"
          {
#line 1140 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">\n");
          }
#line 1139 "hlds_out_pred.m"
        }
#line 1125 "hlds_out_pred.m"
        break;
#line 1125 "hlds_out_pred.m"
      case (MR_Integer) 2:
#line 1139 "hlds_out_pred.m"
        {
#line 1139 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_74_74;
#line 1139 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__FileName_76 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 0)));
#line 1139 "hlds_out_pred.m"
          MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_77 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
#line 1139 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
#line 1139 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_223_223;
#line 1139 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_233_233;
#line 1139 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_243_243;

#line 1132 "hlds_out_pred.m"
          {
#line 1132 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "% higher order call\n");
          }
#line 1141 "hlds_out_pred.m"
          {
#line 1141 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_74_74 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_78);
          }
#line 1140 "hlds_out_pred.m"
          {
#line 1140 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "% filename <");
          }
#line 1141 "hlds_out_pred.m"
          {
#line 1141 "hlds_out_pred.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__FileName_76, &hlds__hlds_out__hlds_out_pred__V_223_223);
          }
#line 1141 "hlds_out_pred.m"
          {
#line 1141 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_223_223);
          }
#line 1140 "hlds_out_pred.m"
          {
#line 1140 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">, line number <");
          }
#line 1141 "hlds_out_pred.m"
          {
#line 1141 "hlds_out_pred.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__LineNumber_77, &hlds__hlds_out__hlds_out_pred__V_233_233);
          }
#line 1141 "hlds_out_pred.m"
          {
#line 1141 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_233_233);
          }
#line 1140 "hlds_out_pred.m"
          {
#line 1140 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
          }
#line 1141 "hlds_out_pred.m"
          {
#line 1141 "hlds_out_pred.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__V_74_74, &hlds__hlds_out__hlds_out_pred__V_243_243);
          }
#line 1141 "hlds_out_pred.m"
          {
#line 1141 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_243_243);
          }
#line 1140 "hlds_out_pred.m"
          {
#line 1140 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">\n");
          }
#line 1139 "hlds_out_pred.m"
        }
#line 1125 "hlds_out_pred.m"
        break;
#line 1125 "hlds_out_pred.m"
      case (MR_Integer) 3:
#line 1125 "hlds_out_pred.m"
#line 1125 "hlds_out_pred.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 0)))) {
#line 1125 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1125 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 1139 "hlds_out_pred.m"
            {
#line 1139 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_87_87;
#line 1139 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__FileName_89 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
#line 1139 "hlds_out_pred.m"
              MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
#line 1139 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 3)));
#line 1139 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_192_192;
#line 1139 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_202_202;
#line 1139 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_212_212;

#line 1135 "hlds_out_pred.m"
              {
#line 1135 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% method call\n");
              }
#line 1141 "hlds_out_pred.m"
              {
#line 1141 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__V_87_87 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_91);
              }
#line 1140 "hlds_out_pred.m"
              {
#line 1140 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% filename <");
              }
#line 1141 "hlds_out_pred.m"
              {
#line 1141 "hlds_out_pred.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__FileName_89, &hlds__hlds_out__hlds_out_pred__V_192_192);
              }
#line 1141 "hlds_out_pred.m"
              {
#line 1141 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_192_192);
              }
#line 1140 "hlds_out_pred.m"
              {
#line 1140 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) ">, line number <");
              }
#line 1141 "hlds_out_pred.m"
              {
#line 1141 "hlds_out_pred.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__LineNumber_90, &hlds__hlds_out__hlds_out_pred__V_202_202);
              }
#line 1141 "hlds_out_pred.m"
              {
#line 1141 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_202_202);
              }
#line 1140 "hlds_out_pred.m"
              {
#line 1140 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
              }
#line 1141 "hlds_out_pred.m"
              {
#line 1141 "hlds_out_pred.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__V_87_87, &hlds__hlds_out__hlds_out_pred__V_212_212);
              }
#line 1141 "hlds_out_pred.m"
              {
#line 1141 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_212_212);
              }
#line 1140 "hlds_out_pred.m"
              {
#line 1140 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) ">\n");
              }
#line 1139 "hlds_out_pred.m"
            }
#line 1125 "hlds_out_pred.m"
            break;
#line 1125 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 1139 "hlds_out_pred.m"
            {
#line 1139 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_39_39;
#line 1139 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__FileName_62 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
#line 1139 "hlds_out_pred.m"
              MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
#line 1139 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 3)));
#line 1139 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_254_254;
#line 1139 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_264_264;
#line 1139 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_274_274;

#line 1138 "hlds_out_pred.m"
              {
#line 1138 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% callback\n");
              }
#line 1141 "hlds_out_pred.m"
              {
#line 1141 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__V_39_39 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_64);
              }
#line 1140 "hlds_out_pred.m"
              {
#line 1140 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% filename <");
              }
#line 1141 "hlds_out_pred.m"
              {
#line 1141 "hlds_out_pred.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__FileName_62, &hlds__hlds_out__hlds_out_pred__V_254_254);
              }
#line 1141 "hlds_out_pred.m"
              {
#line 1141 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_254_254);
              }
#line 1140 "hlds_out_pred.m"
              {
#line 1140 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) ">, line number <");
              }
#line 1141 "hlds_out_pred.m"
              {
#line 1141 "hlds_out_pred.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__LineNumber_63, &hlds__hlds_out__hlds_out_pred__V_264_264);
              }
#line 1141 "hlds_out_pred.m"
              {
#line 1141 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_264_264);
              }
#line 1140 "hlds_out_pred.m"
              {
#line 1140 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
              }
#line 1141 "hlds_out_pred.m"
              {
#line 1141 "hlds_out_pred.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__V_39_39, &hlds__hlds_out__hlds_out_pred__V_274_274);
              }
#line 1141 "hlds_out_pred.m"
              {
#line 1141 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_274_274);
              }
#line 1140 "hlds_out_pred.m"
              {
#line 1140 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) ">\n");
              }
#line 1139 "hlds_out_pred.m"
            }
#line 1125 "hlds_out_pred.m"
            break;
#line 1125 "hlds_out_pred.m"
        }
#line 1125 "hlds_out_pred.m"
        break;
#line 1125 "hlds_out_pred.m"
    }
#line 1144 "hlds_out_pred.m"
    *hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_15 = (hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_14 + (MR_Integer) 1);
#line 1113 "hlds_out_pred.m"
  }
#line 1110 "hlds_out_pred.m"
}

#line 1108 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_2(
#line 1108 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1108 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1108 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1108 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1108 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_4,
#line 1108 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_5)
#line 1108 "hlds_out_pred.m"
{
#line 1108 "hlds_out_pred.m"
  {
#line 1108 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
#line 1108 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__conv3_STATE_VARIABLE_SlotNum_12;

#line 1108 "hlds_out_pred.m"
    {
#line 1108 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_p_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_pred__wrapper_arg_2), &hlds__hlds_out__hlds_out_pred__conv3_STATE_VARIABLE_SlotNum_12);
    }
#line 1108 "hlds_out_pred.m"
    *hlds__hlds_out__hlds_out_pred__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv3_STATE_VARIABLE_SlotNum_12));
#line 1108 "hlds_out_pred.m"
  }
#line 1108 "hlds_out_pred.m"
}

#line 1107 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_1(
#line 1107 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1107 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1107 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1107 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1107 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_4,
#line 1107 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_5)
#line 1107 "hlds_out_pred.m"
{
#line 1107 "hlds_out_pred.m"
  {
#line 1107 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
#line 1107 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_SlotNum_15;

#line 1107 "hlds_out_pred.m"
    {
#line 1107 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_p_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_pred__wrapper_arg_2), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_SlotNum_15);
    }
#line 1107 "hlds_out_pred.m"
    *hlds__hlds_out__hlds_out_pred__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_SlotNum_15));
#line 1107 "hlds_out_pred.m"
  }
#line 1107 "hlds_out_pred.m"
}

#line 1093 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0(
#line 1093 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcStatic_4)
#line 1093 "hlds_out_pred.m"
{
#line 1095 "hlds_out_pred.m"
  {
#line 1095 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1095 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_40_40;
#line 1095 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_41_41;
#line 1095 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__FileName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 0)));
#line 1095 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 1)));
#line 1095 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__InInterface_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 2)));
#line 1095 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__CallSiteStatics_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 3)));
#line 1095 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__CoveragePoints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 4)));
#line 1107 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__V_11_11;
#line 1107 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv2_V_11_11;
#line 1107 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_29_29;
#line 1108 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__V_12_12;
#line 1108 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv5_V_12_12;
#line 1108 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv4_STATE_VARIABLE_IO_14;

#line 1098 "hlds_out_pred.m"
    {
#line 1098 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% proc static filename: ");
    }
#line 1099 "hlds_out_pred.m"
    {
#line 1099 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__FileName_6);
    }
#line 1100 "hlds_out_pred.m"
    {
#line 1100 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
    }
#line 1101 "hlds_out_pred.m"
    {
#line 1101 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% proc static line number: ");
    }
#line 1102 "hlds_out_pred.m"
    {
#line 1102 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__LineNumber_7);
    }
#line 1103 "hlds_out_pred.m"
    {
#line 1103 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
    }
#line 1104 "hlds_out_pred.m"
    {
#line 1104 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% proc static is interface: ");
    }
#line 1105 "hlds_out_pred.m"
    {
#line 1105 "hlds_out_pred.m"
      mercury__io__write_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__InInterface_8)));
    }
#line 1106 "hlds_out_pred.m"
    {
#line 1106 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
    }
#line 2585 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2587 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_41_41 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1107 "hlds_out_pred.m"
    {
#line 1107 "hlds_out_pred.m"
      mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_40_40, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_41_41, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[4], hlds__hlds_out__hlds_out_pred__CallSiteStatics_9, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv2_V_11_11, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_29_29);
    }
#line 1107 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_11_11 = ((MR_Integer) hlds__hlds_out__hlds_out_pred__conv2_V_11_11);
#line 1108 "hlds_out_pred.m"
    {
#line 1108 "hlds_out_pred.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_40_40, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_41_41, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[5], hlds__hlds_out__hlds_out_pred__CoveragePoints_10, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv5_V_12_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv4_STATE_VARIABLE_IO_14);
    }
#line 1108 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_12_12 = ((MR_Integer) hlds__hlds_out__hlds_out_pred__conv5_V_12_12);
#line 1095 "hlds_out_pred.m"
  }
#line 1093 "hlds_out_pred.m"
}

#line 789 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(
#line 789 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_1,
#line 789 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_2,
#line 789 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_3,
#line 789 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_4,
#line 789 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_5,
#line 789 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_6,
#line 789 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ImportStatus_7,
#line 789 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcTable_8)
#line 789 "hlds_out_pred.m"
{
#line 793 "hlds_out_pred.m"
  while (MR_TRUE)
#line 793 "hlds_out_pred.m"
    {
#line 793 "hlds_out_pred.m"
      /* tailcall optimized into a loop */
#line 793 "hlds_out_pred.m"
      {
#line 793 "hlds_out_pred.m"
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 793 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 793 "hlds_out_pred.m"
          {
#line 793 "hlds_out_pred.m"
          }
#line 793 "hlds_out_pred.m"
        else
#line 795 "hlds_out_pred.m"
          {
#line 795 "hlds_out_pred.m"
            MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__2_2, (MR_Integer) 0)));
#line 795 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ProcIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__2_2, (MR_Integer) 1)));
#line 795 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ProcInfo_31;
#line 796 "hlds_out_pred.m"
            MR_Box hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_31;

#line 796 "hlds_out_pred.m"
            {
#line 796 "hlds_out_pred.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__hlds_out__hlds_out_pred__ProcTable_8, hlds__hlds_out__hlds_out_pred__ProcId_22, &hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_31);
            }
#line 796 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__ProcInfo_31 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_31);
#line 797 "hlds_out_pred.m"
            {
#line 797 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_proc_10_p_0(hlds__hlds_out__hlds_out_pred__Info_1, hlds__hlds_out__hlds_out_pred__Indent_5, hlds__hlds_out__hlds_out_pred__AppendVarNums_3, hlds__hlds_out__hlds_out_pred__ModuleInfo_4, hlds__hlds_out__hlds_out_pred__PredId_6, hlds__hlds_out__hlds_out_pred__ProcId_22, hlds__hlds_out__hlds_out_pred__ImportStatus_7, hlds__hlds_out__hlds_out_pred__ProcInfo_31);
            }
#line 799 "hlds_out_pred.m"
            /* direct tailcall eliminated */
#line 799 "hlds_out_pred.m"
            {
#line 799 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2__tmp_copy_2 = hlds__hlds_out__hlds_out_pred__ProcIds_23;

#line 799 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = hlds__hlds_out__hlds_out_pred__HeadVar__2__tmp_copy_2;
#line 799 "hlds_out_pred.m"
            }
#line 799 "hlds_out_pred.m"
            continue;
#line 795 "hlds_out_pred.m"
          }
#line 793 "hlds_out_pred.m"
      }
#line 793 "hlds_out_pred.m"
      break;
#line 793 "hlds_out_pred.m"
    }
#line 789 "hlds_out_pred.m"
}

#line 779 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_9_p_0(
#line 779 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_10,
#line 779 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_11,
#line 779 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_12,
#line 779 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_13,
#line 779 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_14,
#line 779 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ImportStatus_15,
#line 779 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_16)
#line 779 "hlds_out_pred.m"
{
#line 783 "hlds_out_pred.m"
  {
#line 783 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 783 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ProcTable_18;
#line 783 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ProcIds_19;

#line 784 "hlds_out_pred.m"
    {
#line 784 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_16, &hlds__hlds_out__hlds_out_pred__ProcTable_18);
    }
#line 785 "hlds_out_pred.m"
    {
#line 785 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__ProcIds_19 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_16);
    }
#line 786 "hlds_out_pred.m"
    {
#line 786 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(hlds__hlds_out__hlds_out_pred__Info_10, hlds__hlds_out__hlds_out_pred__ProcIds_19, hlds__hlds_out__hlds_out_pred__AppendVarNums_12, hlds__hlds_out__hlds_out_pred__ModuleInfo_13, hlds__hlds_out__hlds_out_pred__Indent_11, hlds__hlds_out__hlds_out_pred__PredId_14, hlds__hlds_out__hlds_out_pred__ImportStatus_15, hlds__hlds_out__hlds_out_pred__ProcTable_18);
#line 786 "hlds_out_pred.m"
      return;
    }
#line 783 "hlds_out_pred.m"
  }
#line 779 "hlds_out_pred.m"
}

#line 757 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(
#line 757 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Head_6,
#line 757 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Tail_7,
#line 757 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8)
#line 757 "hlds_out_pred.m"
{
#line 760 "hlds_out_pred.m"
  while (MR_TRUE)
#line 760 "hlds_out_pred.m"
    {
#line 760 "hlds_out_pred.m"
      /* tailcall optimized into a loop */
#line 760 "hlds_out_pred.m"
      {
#line 760 "hlds_out_pred.m"
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 760 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Head_6, (MR_Integer) 0)));
#line 760 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__NewName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Head_6, (MR_Integer) 1)));

#line 763 "hlds_out_pred.m"
        {
#line 763 "hlds_out_pred.m"
          parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__Var_10);
        }
#line 764 "hlds_out_pred.m"
        {
#line 764 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) " -> ");
        }
#line 765 "hlds_out_pred.m"
        {
#line 765 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__NewName_11);
        }
#line 768 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__Tail_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 767 "hlds_out_pred.m"
          {
#line 767 "hlds_out_pred.m"
          }
#line 768 "hlds_out_pred.m"
        else
#line 769 "hlds_out_pred.m"
          {
#line 769 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TailHead_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Tail_7, (MR_Integer) 0)));
#line 769 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TailTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Tail_7, (MR_Integer) 1)));

#line 770 "hlds_out_pred.m"
            {
#line 770 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 771 "hlds_out_pred.m"
            /* direct tailcall eliminated */
#line 771 "hlds_out_pred.m"
            {
#line 771 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__Head__tmp_copy_6 = hlds__hlds_out__hlds_out_pred__TailHead_13;
#line 771 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__Tail__tmp_copy_7 = hlds__hlds_out__hlds_out_pred__TailTail_14;

#line 771 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__Tail_7 = hlds__hlds_out__hlds_out_pred__Tail__tmp_copy_7;
#line 771 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__Head_6 = hlds__hlds_out__hlds_out_pred__Head__tmp_copy_6;
#line 771 "hlds_out_pred.m"
            }
#line 771 "hlds_out_pred.m"
            continue;
#line 769 "hlds_out_pred.m"
          }
#line 760 "hlds_out_pred.m"
      }
#line 760 "hlds_out_pred.m"
      break;
#line 760 "hlds_out_pred.m"
    }
#line 757 "hlds_out_pred.m"
}

#line 746 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(
#line 746 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 746 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_9,
#line 746 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_10,
#line 746 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__OldVar_11,
#line 746 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__NewVars_12)
#line 746 "hlds_out_pred.m"
{
#line 749 "hlds_out_pred.m"
  {
#line 749 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 749 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_24_24;

#line 750 "hlds_out_pred.m"
    {
#line 750 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_10);
    }
#line 751 "hlds_out_pred.m"
    {
#line 751 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "%\t");
    }
#line 2866 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 752 "hlds_out_pred.m"
    {
#line 752 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_24_24, hlds__hlds_out__hlds_out_pred__VarSet_8, hlds__hlds_out__hlds_out_pred__AppendVarNums_9, hlds__hlds_out__hlds_out_pred__OldVar_11);
    }
#line 753 "hlds_out_pred.m"
    {
#line 753 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-> ");
    }
#line 754 "hlds_out_pred.m"
    {
#line 754 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_24_24, hlds__hlds_out__hlds_out_pred__VarSet_8, hlds__hlds_out__hlds_out_pred__AppendVarNums_9, hlds__hlds_out__hlds_out_pred__NewVars_12);
    }
#line 755 "hlds_out_pred.m"
    {
#line 755 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
#line 755 "hlds_out_pred.m"
      return;
    }
#line 749 "hlds_out_pred.m"
  }
#line 746 "hlds_out_pred.m"
}

#line 743 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0_1(
#line 743 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 743 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 743 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 743 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 743 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_4)
#line 743 "hlds_out_pred.m"
{
#line 743 "hlds_out_pred.m"
  {
#line 743 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 743 "hlds_out_pred.m"
    {
#line 743 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_2));
#line 743 "hlds_out_pred.m"
      return;
    }
#line 743 "hlds_out_pred.m"
  }
#line 743 "hlds_out_pred.m"
}

#line 736 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0(
#line 736 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__1_1,
#line 736 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 736 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_9,
#line 736 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_10)
#line 736 "hlds_out_pred.m"
{
#line 740 "hlds_out_pred.m"
  {
#line 740 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 740 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__UntupleMap_7 = (MR_Word) hlds__hlds_out__hlds_out_pred__HeadVar__1_1;
#line 740 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_17_17;
#line 743 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_13;

#line 741 "hlds_out_pred.m"
    {
#line 741 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_10);
    }
#line 742 "hlds_out_pred.m"
    {
#line 742 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% untuple:\n");
    }
#line 743 "hlds_out_pred.m"
    {
#line 743 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 743 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_9[0]));
#line 743 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0_1));
#line 743 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 743 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_8));
#line 743 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__AppendVarNums_9));
#line 743 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_10));
#line 743 "hlds_out_pred.m"
    }
#line 743 "hlds_out_pred.m"
    {
#line 743 "hlds_out_pred.m"
      mercury__map__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[6], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_pred__V_17_17, hlds__hlds_out__hlds_out_pred__UntupleMap_7, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_13);
    }
#line 740 "hlds_out_pred.m"
  }
#line 736 "hlds_out_pred.m"
}

#line 732 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0_1(
#line 732 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 732 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1)
#line 732 "hlds_out_pred.m"
{
#line 732 "hlds_out_pred.m"
  {
#line 732 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 732 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
#line 732 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2;

#line 732 "hlds_out_pred.m"
    {
#line 732 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
#line 732 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2));
#line 732 "hlds_out_pred.m"
    return hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 732 "hlds_out_pred.m"
  }
#line 732 "hlds_out_pred.m"
}

#line 727 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(
#line 727 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_7,
#line 727 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__StackSlots_8,
#line 727 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 727 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10)
#line 727 "hlds_out_pred.m"
{
#line 730 "hlds_out_pred.m"
  {
#line 730 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 730 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_18_18 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0];
#line 730 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0;
#line 730 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarSlotList0_12;
#line 730 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarSlotList_13;

#line 731 "hlds_out_pred.m"
    {
#line 731 "hlds_out_pred.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_18_18, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_19_19, hlds__hlds_out__hlds_out_pred__StackSlots_8, &hlds__hlds_out__hlds_out_pred__VarSlotList0_12);
    }
#line 732 "hlds_out_pred.m"
    {
#line 732 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__VarSlotList_13 = mercury__assoc_list__map_values_only_2_f_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_19_19, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, hlds__hlds_out__hlds_out_pred__TypeInfo_18_18, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[3], hlds__hlds_out__hlds_out_pred__VarSlotList0_12);
    }
#line 734 "hlds_out_pred.m"
    {
#line 734 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(hlds__hlds_out__hlds_out_pred__VarSlotList_13, hlds__hlds_out__hlds_out_pred__VarSet_9, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__Indent_7);
#line 734 "hlds_out_pred.m"
      return;
    }
#line 730 "hlds_out_pred.m"
  }
#line 727 "hlds_out_pred.m"
}

#line 699 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(
#line 699 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 699 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 699 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_11,
#line 699 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_12,
#line 699 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_13,
#line 699 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Var_14)
#line 699 "hlds_out_pred.m"
{
#line 703 "hlds_out_pred.m"
  {
#line 703 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 703 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_43_43;
#line 703 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__VarNum_16;
#line 703 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarInfo_17;

#line 704 "hlds_out_pred.m"
    {
#line 704 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_9);
    }
#line 705 "hlds_out_pred.m"
    {
#line 705 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 3107 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 706 "hlds_out_pred.m"
    {
#line 706 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_43_43, hlds__hlds_out__hlds_out_pred__VarSet_12, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__Var_14);
    }
#line 707 "hlds_out_pred.m"
    {
#line 707 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " (number ");
    }
#line 708 "hlds_out_pred.m"
    {
#line 708 "hlds_out_pred.m"
      mercury__term__var_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_43_43, hlds__hlds_out__hlds_out_pred__Var_14, &hlds__hlds_out__hlds_out_pred__VarNum_16);
    }
#line 709 "hlds_out_pred.m"
    {
#line 709 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__VarNum_16);
    }
#line 710 "hlds_out_pred.m"
    {
#line 710 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ") ");
    }
#line 711 "hlds_out_pred.m"
    {
#line 711 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 712 "hlds_out_pred.m"
    {
#line 712 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_11, hlds__hlds_out__hlds_out_pred__Var_14, &hlds__hlds_out__hlds_out_pred__VarInfo_17);
    }
#line 717 "hlds_out_pred.m"
#line 717 "hlds_out_pred.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__VarInfo_17)) {
#line 717 "hlds_out_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 717 "hlds_out_pred.m"
      case (MR_Integer) 0:
#line 722 "hlds_out_pred.m"
        {
#line 723 "hlds_out_pred.m"
          {
#line 723 "hlds_out_pred.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_pred", (MR_String) "predicate \140hlds.hlds_out.hlds_out_pred.write_rtti_var_info\'/8", (MR_String) "non rtti var");
#line 723 "hlds_out_pred.m"
            return;
          }
#line 722 "hlds_out_pred.m"
        }
#line 717 "hlds_out_pred.m"
        break;
#line 717 "hlds_out_pred.m"
      case (MR_Integer) 1:
#line 714 "hlds_out_pred.m"
        {
#line 714 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarInfo_17, (MR_Integer) 0)));

#line 715 "hlds_out_pred.m"
          {
#line 715 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "type_info for ");
          }
#line 716 "hlds_out_pred.m"
          {
#line 716 "hlds_out_pred.m"
            parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_13, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__Type_18);
          }
#line 714 "hlds_out_pred.m"
        }
#line 717 "hlds_out_pred.m"
        break;
#line 717 "hlds_out_pred.m"
      case (MR_Integer) 2:
#line 718 "hlds_out_pred.m"
        {
#line 718 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__Constraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__VarInfo_17, (MR_Integer) 0)));

#line 719 "hlds_out_pred.m"
          {
#line 719 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "typeclass_info for ");
          }
#line 720 "hlds_out_pred.m"
          {
#line 720 "hlds_out_pred.m"
            parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_13, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__Constraint_19);
          }
#line 718 "hlds_out_pred.m"
        }
#line 717 "hlds_out_pred.m"
        break;
#line 717 "hlds_out_pred.m"
    }
#line 725 "hlds_out_pred.m"
    {
#line 725 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
#line 725 "hlds_out_pred.m"
      return;
    }
#line 703 "hlds_out_pred.m"
  }
#line 699 "hlds_out_pred.m"
}

#line 686 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(
#line 686 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 686 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 686 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_11,
#line 686 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_12,
#line 686 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_13,
#line 686 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Constraint_14)
#line 686 "hlds_out_pred.m"
{
#line 690 "hlds_out_pred.m"
  {
#line 690 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 690 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Var_16;

#line 691 "hlds_out_pred.m"
    {
#line 691 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_9);
    }
#line 692 "hlds_out_pred.m"
    {
#line 692 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 693 "hlds_out_pred.m"
    {
#line 693 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_13, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__Constraint_14);
    }
#line 694 "hlds_out_pred.m"
    {
#line 694 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 695 "hlds_out_pred.m"
    {
#line 695 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_11, hlds__hlds_out__hlds_out_pred__Constraint_14, &hlds__hlds_out__hlds_out_pred__Var_16);
    }
#line 696 "hlds_out_pred.m"
    {
#line 696 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_12, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__Var_16);
    }
#line 697 "hlds_out_pred.m"
    {
#line 697 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
#line 697 "hlds_out_pred.m"
      return;
    }
#line 690 "hlds_out_pred.m"
  }
#line 686 "hlds_out_pred.m"
}

#line 651 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(
#line 651 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 651 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 651 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_11,
#line 651 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_12,
#line 651 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_13,
#line 651 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVar_14)
#line 651 "hlds_out_pred.m"
{
#line 655 "hlds_out_pred.m"
  {
#line 655 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 655 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_54_54;
#line 655 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__TVarNum_16;
#line 655 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Locn_17;
#line 655 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Var_18;
#line 655 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__VarNum_20;

#line 656 "hlds_out_pred.m"
    {
#line 656 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_9);
    }
#line 657 "hlds_out_pred.m"
    {
#line 657 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 3328 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 659 "hlds_out_pred.m"
    {
#line 659 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_54_54, hlds__hlds_out__hlds_out_pred__TVarSet_13, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__TVar_14);
    }
#line 660 "hlds_out_pred.m"
    {
#line 660 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " (number ");
    }
#line 661 "hlds_out_pred.m"
    {
#line 661 "hlds_out_pred.m"
      mercury__term__var_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_54_54, hlds__hlds_out__hlds_out_pred__TVar_14, &hlds__hlds_out__hlds_out_pred__TVarNum_16);
    }
#line 662 "hlds_out_pred.m"
    {
#line 662 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__TVarNum_16);
    }
#line 663 "hlds_out_pred.m"
    {
#line 663 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 665 "hlds_out_pred.m"
    {
#line 665 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 666 "hlds_out_pred.m"
    {
#line 666 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_11, hlds__hlds_out__hlds_out_pred__TVar_14, &hlds__hlds_out__hlds_out_pred__Locn_17);
    }
#line 672 "hlds_out_pred.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Locn_17)) == (MR_mktag((MR_Integer) 0))))
#line 668 "hlds_out_pred.m"
      {
#line 668 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Locn_17, (MR_Integer) 0)));
#line 669 "hlds_out_pred.m"
        {
#line 669 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "type_info(");
        }
#line 670 "hlds_out_pred.m"
        {
#line 670 "hlds_out_pred.m"
          parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_12, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__Var_18);
        }
#line 671 "hlds_out_pred.m"
        {
#line 671 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ") ");
        }
#line 668 "hlds_out_pred.m"
      }
#line 672 "hlds_out_pred.m"
    else
#line 673 "hlds_out_pred.m"
      {
#line 673 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__Index_19;

#line 673 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Locn_17, (MR_Integer) 0)));
#line 673 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__Index_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Locn_17, (MR_Integer) 1)));
#line 674 "hlds_out_pred.m"
        {
#line 674 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "typeclass_info(");
        }
#line 675 "hlds_out_pred.m"
        {
#line 675 "hlds_out_pred.m"
          parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_12, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__Var_18);
        }
#line 676 "hlds_out_pred.m"
        {
#line 676 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 677 "hlds_out_pred.m"
        {
#line 677 "hlds_out_pred.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__Index_19);
        }
#line 678 "hlds_out_pred.m"
        {
#line 678 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ") ");
        }
#line 673 "hlds_out_pred.m"
      }
#line 680 "hlds_out_pred.m"
    {
#line 680 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " (number ");
    }
#line 681 "hlds_out_pred.m"
    {
#line 681 "hlds_out_pred.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__Var_18, &hlds__hlds_out__hlds_out_pred__VarNum_20);
    }
#line 682 "hlds_out_pred.m"
    {
#line 682 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__VarNum_20);
    }
#line 683 "hlds_out_pred.m"
    {
#line 683 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 684 "hlds_out_pred.m"
    {
#line 684 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 684 "hlds_out_pred.m"
      return;
    }
#line 655 "hlds_out_pred.m"
  }
#line 651 "hlds_out_pred.m"
}

#line 648 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3(
#line 648 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 648 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 648 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 648 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 648 "hlds_out_pred.m"
{
#line 648 "hlds_out_pred.m"
  {
#line 648 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 648 "hlds_out_pred.m"
    {
#line 648 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 7))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 648 "hlds_out_pred.m"
      return;
    }
#line 648 "hlds_out_pred.m"
  }
#line 648 "hlds_out_pred.m"
}

#line 643 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_2(
#line 643 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 643 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 643 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 643 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 643 "hlds_out_pred.m"
{
#line 643 "hlds_out_pred.m"
  {
#line 643 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 643 "hlds_out_pred.m"
    {
#line 643 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 7))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 643 "hlds_out_pred.m"
      return;
    }
#line 643 "hlds_out_pred.m"
  }
#line 643 "hlds_out_pred.m"
}

#line 638 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_1(
#line 638 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 638 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 638 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 638 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 638 "hlds_out_pred.m"
{
#line 638 "hlds_out_pred.m"
  {
#line 638 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 638 "hlds_out_pred.m"
    {
#line 638 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 7))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 638 "hlds_out_pred.m"
      return;
    }
#line 638 "hlds_out_pred.m"
  }
#line 638 "hlds_out_pred.m"
}

#line 631 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(
#line 631 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_8,
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_9,
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_10,
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_11,
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_12)
#line 631 "hlds_out_pred.m"
{
#line 634 "hlds_out_pred.m"
  {
#line 634 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 634 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38;
#line 634 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeVars_14;
#line 634 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Constraints_15;
#line 634 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ProgVars_16;
#line 634 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_22_22;
#line 634 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_27_27;
#line 634 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_32_32;
#line 638 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_23_23;
#line 643 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_28_28;
#line 648 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv2_STATE_VARIABLE_IO_18;

#line 635 "hlds_out_pred.m"
    {
#line 635 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_8);
    }
#line 636 "hlds_out_pred.m"
    {
#line 636 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% type_info varmap:\n");
    }
#line 637 "hlds_out_pred.m"
    {
#line 637 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_10, &hlds__hlds_out__hlds_out_pred__TypeVars_14);
    }
#line 638 "hlds_out_pred.m"
    {
#line 638 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 638 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[0]));
#line 638 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_1));
#line 638 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 638 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_8));
#line 638 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__AppendVarNums_9));
#line 638 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__RttiVarMaps_10));
#line 638 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 6) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_11));
#line 638 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 7) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_12));
#line 638 "hlds_out_pred.m"
    }
#line 3625 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 638 "hlds_out_pred.m"
    {
#line 638 "hlds_out_pred.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[4], hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38, hlds__hlds_out__hlds_out_pred__V_22_22, hlds__hlds_out__hlds_out_pred__TypeVars_14, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_23_23);
    }
#line 640 "hlds_out_pred.m"
    {
#line 640 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_8);
    }
#line 641 "hlds_out_pred.m"
    {
#line 641 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% typeclass_info varmap:\n");
    }
#line 642 "hlds_out_pred.m"
    {
#line 642 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_10, &hlds__hlds_out__hlds_out_pred__Constraints_15);
    }
#line 643 "hlds_out_pred.m"
    {
#line 643 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 643 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[1]));
#line 643 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_2));
#line 643 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 643 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_8));
#line 643 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__AppendVarNums_9));
#line 643 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__RttiVarMaps_10));
#line 643 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 6) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_11));
#line 643 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 7) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_12));
#line 643 "hlds_out_pred.m"
    }
#line 643 "hlds_out_pred.m"
    {
#line 643 "hlds_out_pred.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38, hlds__hlds_out__hlds_out_pred__V_27_27, hlds__hlds_out__hlds_out_pred__Constraints_15, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_28_28);
    }
#line 645 "hlds_out_pred.m"
    {
#line 645 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_8);
    }
#line 646 "hlds_out_pred.m"
    {
#line 646 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% rtti_var_info:\n");
    }
#line 647 "hlds_out_pred.m"
    {
#line 647 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_10, &hlds__hlds_out__hlds_out_pred__ProgVars_16);
    }
#line 648 "hlds_out_pred.m"
    {
#line 648 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 648 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[2]));
#line 648 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3));
#line 648 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 648 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_8));
#line 648 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__AppendVarNums_9));
#line 648 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__RttiVarMaps_10));
#line 648 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 6) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_11));
#line 648 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 7) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_12));
#line 648 "hlds_out_pred.m"
    }
#line 648 "hlds_out_pred.m"
    {
#line 648 "hlds_out_pred.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38, hlds__hlds_out__hlds_out_pred__V_32_32, hlds__hlds_out__hlds_out_pred__ProgVars_16, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv2_STATE_VARIABLE_IO_18);
    }
#line 634 "hlds_out_pred.m"
  }
#line 631 "hlds_out_pred.m"
}

#line 611 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__1_1,
#line 611 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_2,
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_3,
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_4,
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_5,
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeVarSet_6)
#line 611 "hlds_out_pred.m"
{
#line 614 "hlds_out_pred.m"
  while (MR_TRUE)
#line 614 "hlds_out_pred.m"
    {
#line 614 "hlds_out_pred.m"
      /* tailcall optimized into a loop */
#line 614 "hlds_out_pred.m"
      {
#line 614 "hlds_out_pred.m"
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 614 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 614 "hlds_out_pred.m"
          {
#line 614 "hlds_out_pred.m"
          }
#line 614 "hlds_out_pred.m"
        else
#line 616 "hlds_out_pred.m"
          {
#line 616 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_44_44;
#line 616 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__1_1, (MR_Integer) 0)));
#line 616 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__1_1, (MR_Integer) 1)));
#line 616 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__Type_25;
#line 616 "hlds_out_pred.m"
            MR_Integer hlds__hlds_out__hlds_out_pred__VarNum_26;

#line 617 "hlds_out_pred.m"
            {
#line 617 "hlds_out_pred.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(hlds__hlds_out__hlds_out_pred__VarTypes_5, hlds__hlds_out__hlds_out_pred__Var_17, &hlds__hlds_out__hlds_out_pred__Type_25);
            }
#line 618 "hlds_out_pred.m"
            {
#line 618 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_2);
            }
#line 619 "hlds_out_pred.m"
            {
#line 619 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% ");
            }
#line 3785 "hlds.hlds_out.hlds_out_pred.c"
            hlds__hlds_out__hlds_out_pred__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 620 "hlds_out_pred.m"
            {
#line 620 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_pred__VarSet_3, hlds__hlds_out__hlds_out_pred__AppendVarNums_4, hlds__hlds_out__hlds_out_pred__Var_17);
            }
#line 621 "hlds_out_pred.m"
            {
#line 621 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) " (number ");
            }
#line 622 "hlds_out_pred.m"
            {
#line 622 "hlds_out_pred.m"
              mercury__term__var_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_pred__Var_17, &hlds__hlds_out__hlds_out_pred__VarNum_26);
            }
#line 623 "hlds_out_pred.m"
            {
#line 623 "hlds_out_pred.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__VarNum_26);
            }
#line 624 "hlds_out_pred.m"
            {
#line 624 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
#line 625 "hlds_out_pred.m"
            {
#line 625 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) ": ");
            }
#line 626 "hlds_out_pred.m"
            {
#line 626 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_pred__TypeVarSet_6, hlds__hlds_out__hlds_out_pred__AppendVarNums_4, hlds__hlds_out__hlds_out_pred__Type_25);
            }
#line 627 "hlds_out_pred.m"
            {
#line 627 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 628 "hlds_out_pred.m"
            /* direct tailcall eliminated */
#line 628 "hlds_out_pred.m"
            {
#line 628 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_pred__Vars_18;

#line 628 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__HeadVar__1_1 = hlds__hlds_out__hlds_out_pred__HeadVar__1__tmp_copy_1;
#line 628 "hlds_out_pred.m"
            }
#line 628 "hlds_out_pred.m"
            continue;
#line 616 "hlds_out_pred.m"
          }
#line 614 "hlds_out_pred.m"
      }
#line 614 "hlds_out_pred.m"
      break;
#line 614 "hlds_out_pred.m"
    }
#line 611 "hlds_out_pred.m"
}

#line 599 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(
#line 599 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_8,
#line 599 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 599 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_10,
#line 599 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_11,
#line 599 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_12)
#line 599 "hlds_out_pred.m"
{
#line 602 "hlds_out_pred.m"
  {
#line 602 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 602 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__NumVarTypes_14;
#line 602 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Vars_15;
#line 602 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_30_30;

#line 603 "hlds_out_pred.m"
    {
#line 603 "hlds_out_pred.m"
      parse_tree__prog_data__vartypes_count_2_p_0(hlds__hlds_out__hlds_out_pred__VarTypes_11, &hlds__hlds_out__hlds_out_pred__NumVarTypes_14);
    }
#line 604 "hlds_out_pred.m"
    {
#line 604 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_8);
    }
#line 605 "hlds_out_pred.m"
    {
#line 605 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% variable types map ");
    }
#line 606 "hlds_out_pred.m"
    {
#line 606 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 606 "hlds_out_pred.m"
    {
#line 606 "hlds_out_pred.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0], hlds__hlds_out__hlds_out_pred__NumVarTypes_14, &hlds__hlds_out__hlds_out_pred__V_30_30);
    }
#line 606 "hlds_out_pred.m"
    {
#line 606 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_30_30);
    }
#line 606 "hlds_out_pred.m"
    {
#line 606 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " entries):\n");
    }
#line 607 "hlds_out_pred.m"
    {
#line 607 "hlds_out_pred.m"
      parse_tree__prog_data__vartypes_vars_2_p_0(hlds__hlds_out__hlds_out_pred__VarTypes_11, &hlds__hlds_out__hlds_out_pred__Vars_15);
    }
#line 608 "hlds_out_pred.m"
    {
#line 608 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(hlds__hlds_out__hlds_out_pred__Vars_15, hlds__hlds_out__hlds_out_pred__Indent_8, hlds__hlds_out__hlds_out_pred__VarSet_9, hlds__hlds_out__hlds_out_pred__AppendVarNums_10, hlds__hlds_out__hlds_out_pred__VarTypes_11, hlds__hlds_out__hlds_out_pred__TVarSet_12);
#line 608 "hlds_out_pred.m"
      return;
    }
#line 602 "hlds_out_pred.m"
  }
#line 599 "hlds_out_pred.m"
}

#line 547 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(
#line 547 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_9,
#line 547 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_10,
#line 547 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_11,
#line 547 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_12,
#line 547 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_13,
#line 547 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_14)
#line 547 "hlds_out_pred.m"
{
#line 552 "hlds_out_pred.m"
  {
#line 552 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 552 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__PredName_16;
#line 552 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ModuleName_17;

#line 553 "hlds_out_pred.m"
    {
#line 553 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__PredName_16 = hlds__hlds_module__predicate_name_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_9, hlds__hlds_out__hlds_out_pred__PredId_10);
    }
#line 554 "hlds_out_pred.m"
    {
#line 554 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__ModuleName_17 = hlds__hlds_module__predicate_module_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_9, hlds__hlds_out__hlds_out_pred__PredId_10);
    }
#line 563 "hlds_out_pred.m"
#line 563 "hlds_out_pred.m"
    switch (hlds__hlds_out__hlds_out_pred__PredOrFunc_14) {
#line 563 "hlds_out_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 563 "hlds_out_pred.m"
      case (MR_Integer) 1:
#line 556 "hlds_out_pred.m"
        {
#line 556 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__FuncArgs_18;
#line 556 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__RetVal_19;
#line 556 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__V_24_24;
#line 557 "hlds_out_pred.m"
          MR_Box hlds__hlds_out__hlds_out_pred__conv0_RetVal_19;

#line 557 "hlds_out_pred.m"
          {
#line 557 "hlds_out_pred.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[5], hlds__hlds_out__hlds_out_pred__HeadTerms_13, &hlds__hlds_out__hlds_out_pred__FuncArgs_18, &hlds__hlds_out__hlds_out_pred__conv0_RetVal_19);
          }
#line 557 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__RetVal_19 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_RetVal_19);
#line 559 "hlds_out_pred.m"
          {
#line 559 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 559 "hlds_out_pred.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_16));
#line 559 "hlds_out_pred.m"
          }
#line 558 "hlds_out_pred.m"
          {
#line 558 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(hlds__hlds_out__hlds_out_pred__ModuleName_17, hlds__hlds_out__hlds_out_pred__V_24_24, hlds__hlds_out__hlds_out_pred__FuncArgs_18, hlds__hlds_out__hlds_out_pred__VarSet_11, hlds__hlds_out__hlds_out_pred__AppendVarNums_12);
          }
#line 560 "hlds_out_pred.m"
          {
#line 560 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
#line 561 "hlds_out_pred.m"
          {
#line 561 "hlds_out_pred.m"
            parse_tree__mercury_to_mercury__mercury_output_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_11, hlds__hlds_out__hlds_out_pred__AppendVarNums_12, (MR_Integer) 0, hlds__hlds_out__hlds_out_pred__RetVal_19);
#line 561 "hlds_out_pred.m"
            return;
          }
#line 556 "hlds_out_pred.m"
        }
#line 563 "hlds_out_pred.m"
        break;
#line 563 "hlds_out_pred.m"
      case (MR_Integer) 0:
#line 564 "hlds_out_pred.m"
        {
#line 564 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__V_22_22;

#line 566 "hlds_out_pred.m"
          {
#line 566 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 566 "hlds_out_pred.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_16));
#line 566 "hlds_out_pred.m"
          }
#line 565 "hlds_out_pred.m"
          {
#line 565 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(hlds__hlds_out__hlds_out_pred__ModuleName_17, hlds__hlds_out__hlds_out_pred__V_22_22, hlds__hlds_out__hlds_out_pred__HeadTerms_13, hlds__hlds_out__hlds_out_pred__VarSet_11, hlds__hlds_out__hlds_out_pred__AppendVarNums_12);
#line 565 "hlds_out_pred.m"
            return;
          }
#line 564 "hlds_out_pred.m"
        }
#line 563 "hlds_out_pred.m"
        break;
#line 563 "hlds_out_pred.m"
    }
#line 552 "hlds_out_pred.m"
  }
#line 547 "hlds_out_pred.m"
}

#line 539 "hlds_out_pred.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(
#line 539 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_5,
#line 539 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_6,
#line 539 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_3)
#line 539 "hlds_out_pred.m"
{
#line 542 "hlds_out_pred.m"
  {
#line 542 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 542 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__AnnotatedTerm_9;
#line 542 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__HeadVar__3_3, (MR_Integer) 0)));
#line 542 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__HeadVar__3_3, (MR_Integer) 1)));
#line 542 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_11_11;
#line 542 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_13_13;
#line 542 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_14_14;

#line 544 "hlds_out_pred.m"
    {
#line 544 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_14_14 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_pred__Lang_5, hlds__hlds_out__hlds_out_pred__Context_6, hlds__hlds_out__hlds_out_pred__Mode_8);
    }
#line 544 "hlds_out_pred.m"
    {
#line 544 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_13_13, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_14_14));
#line 544 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "hlds_out_pred.m"
    }
#line 544 "hlds_out_pred.m"
    {
#line 544 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_11_11, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__HeadTerm_7));
#line 544 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_11_11, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_13_13));
#line 544 "hlds_out_pred.m"
    }
#line 543 "hlds_out_pred.m"
    {
#line 543 "hlds_out_pred.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[1], hlds__hlds_out__hlds_out_pred__V_11_11, hlds__hlds_out__hlds_out_pred__Context_6, &hlds__hlds_out__hlds_out_pred__AnnotatedTerm_9);
    }
#line 542 "hlds_out_pred.m"
    return hlds__hlds_out__hlds_out_pred__AnnotatedTerm_9;
#line 542 "hlds_out_pred.m"
  }
#line 539 "hlds_out_pred.m"
}

#line 529 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0_1(
#line 529 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 529 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1)
#line 529 "hlds_out_pred.m"
{
#line 529 "hlds_out_pred.m"
  {
#line 529 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 529 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
#line 529 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__conv1_AnnotatedTerm_9;

#line 529 "hlds_out_pred.m"
    {
#line 529 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__conv1_AnnotatedTerm_9 = hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
#line 529 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv1_AnnotatedTerm_9));
#line 529 "hlds_out_pred.m"
    return hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 529 "hlds_out_pred.m"
  }
#line 529 "hlds_out_pred.m"
}

#line 500 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0(
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_13,
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_14,
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_15,
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_16,
#line 500 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_17,
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_18,
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_19,
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_20,
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_21,
#line 500 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__UseDeclaredModes_22)
#line 500 "hlds_out_pred.m"
{
#line 505 "hlds_out_pred.m"
  {
#line 505 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 505 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_24;
#line 505 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Procedures_25;
#line 533 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ProcInfo_26;
#line 508 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_26;

#line 506 "hlds_out_pred.m"
    {
#line 506 "hlds_out_pred.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_13, hlds__hlds_out__hlds_out_pred__PredId_16, &hlds__hlds_out__hlds_out_pred__PredInfo_24);
    }
#line 507 "hlds_out_pred.m"
    {
#line 507 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_24, &hlds__hlds_out__hlds_out_pred__Procedures_25);
    }
#line 508 "hlds_out_pred.m"
    {
#line 508 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__hlds_out__hlds_out_pred__Procedures_25, hlds__hlds_out__hlds_out_pred__ProcId_17, &hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_26);
    }
#line 508 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 508 "hlds_out_pred.m"
      {
#line 508 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__ProcInfo_26 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_26);
#line 508 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__succeeded = MR_TRUE;
#line 508 "hlds_out_pred.m"
      }
#line 533 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 526 "hlds_out_pred.m"
      {
#line 526 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_36_36;
#line 526 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ArgModes_27;
#line 526 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__AnnotatedPairs_28;
#line 526 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__AnnotatedHeadTerms_29;
#line 526 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__V_32_32;
#line 526 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__PredName_50;
#line 526 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ModuleName_51;

#line 523 "hlds_out_pred.m"
#line 523 "hlds_out_pred.m"
        switch (hlds__hlds_out__hlds_out_pred__UseDeclaredModes_22) {
#line 523 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 523 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 525 "hlds_out_pred.m"
            {
#line 525 "hlds_out_pred.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_26, &hlds__hlds_out__hlds_out_pred__ArgModes_27);
            }
#line 523 "hlds_out_pred.m"
            break;
#line 523 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 522 "hlds_out_pred.m"
            {
#line 522 "hlds_out_pred.m"
              hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_26, &hlds__hlds_out__hlds_out_pred__ArgModes_27);
            }
#line 523 "hlds_out_pred.m"
            break;
#line 523 "hlds_out_pred.m"
        }
#line 4256 "hlds.hlds_out.hlds_out_pred.c"
        hlds__hlds_out__hlds_out_pred__TypeInfo_36_36 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[5];
#line 527 "hlds_out_pred.m"
        {
#line 527 "hlds_out_pred.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_36_36, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_pred__HeadTerms_20, hlds__hlds_out__hlds_out_pred__ArgModes_27, &hlds__hlds_out__hlds_out_pred__AnnotatedPairs_28);
        }
#line 529 "hlds_out_pred.m"
        {
#line 529 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 529 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[2]));
#line 529 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0_1));
#line 529 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 529 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Lang_14));
#line 529 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Context_15));
#line 529 "hlds_out_pred.m"
        }
#line 529 "hlds_out_pred.m"
        {
#line 529 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__AnnotatedHeadTerms_29 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[1], hlds__hlds_out__hlds_out_pred__TypeInfo_36_36, hlds__hlds_out__hlds_out_pred__V_32_32, hlds__hlds_out__hlds_out_pred__AnnotatedPairs_28);
        }
#line 553 "hlds_out_pred.m"
        {
#line 553 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__PredName_50 = hlds__hlds_module__predicate_name_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_13, hlds__hlds_out__hlds_out_pred__PredId_16);
        }
#line 554 "hlds_out_pred.m"
        {
#line 554 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__ModuleName_51 = hlds__hlds_module__predicate_module_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_13, hlds__hlds_out__hlds_out_pred__PredId_16);
        }
#line 563 "hlds_out_pred.m"
#line 563 "hlds_out_pred.m"
        switch (hlds__hlds_out__hlds_out_pred__PredOrFunc_21) {
#line 563 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 563 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 556 "hlds_out_pred.m"
            {
#line 556 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__FuncArgs_52;
#line 556 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__RetVal_53;
#line 556 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__V_56_56;
#line 557 "hlds_out_pred.m"
              MR_Box hlds__hlds_out__hlds_out_pred__conv2_RetVal_53;

#line 557 "hlds_out_pred.m"
              {
#line 557 "hlds_out_pred.m"
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[5], hlds__hlds_out__hlds_out_pred__AnnotatedHeadTerms_29, &hlds__hlds_out__hlds_out_pred__FuncArgs_52, &hlds__hlds_out__hlds_out_pred__conv2_RetVal_53);
              }
#line 557 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__RetVal_53 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv2_RetVal_53);
#line 559 "hlds_out_pred.m"
              {
#line 559 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 559 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_56_56, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_50));
#line 559 "hlds_out_pred.m"
              }
#line 558 "hlds_out_pred.m"
              {
#line 558 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(hlds__hlds_out__hlds_out_pred__ModuleName_51, hlds__hlds_out__hlds_out_pred__V_56_56, hlds__hlds_out__hlds_out_pred__FuncArgs_52, hlds__hlds_out__hlds_out_pred__VarSet_18, hlds__hlds_out__hlds_out_pred__AppendVarNums_19);
              }
#line 560 "hlds_out_pred.m"
              {
#line 560 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
#line 561 "hlds_out_pred.m"
              {
#line 561 "hlds_out_pred.m"
                parse_tree__mercury_to_mercury__mercury_output_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_18, hlds__hlds_out__hlds_out_pred__AppendVarNums_19, (MR_Integer) 0, hlds__hlds_out__hlds_out_pred__RetVal_53);
#line 561 "hlds_out_pred.m"
                return;
              }
#line 556 "hlds_out_pred.m"
            }
#line 563 "hlds_out_pred.m"
            break;
#line 563 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 564 "hlds_out_pred.m"
            {
#line 564 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__V_54_54;

#line 566 "hlds_out_pred.m"
              {
#line 566 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 566 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_54_54, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_50));
#line 566 "hlds_out_pred.m"
              }
#line 565 "hlds_out_pred.m"
              {
#line 565 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(hlds__hlds_out__hlds_out_pred__ModuleName_51, hlds__hlds_out__hlds_out_pred__V_54_54, hlds__hlds_out__hlds_out_pred__AnnotatedHeadTerms_29, hlds__hlds_out__hlds_out_pred__VarSet_18, hlds__hlds_out__hlds_out_pred__AppendVarNums_19);
#line 565 "hlds_out_pred.m"
                return;
              }
#line 564 "hlds_out_pred.m"
            }
#line 563 "hlds_out_pred.m"
            break;
#line 563 "hlds_out_pred.m"
        }
#line 526 "hlds_out_pred.m"
      }
#line 533 "hlds_out_pred.m"
    else
#line 533 "hlds_out_pred.m"
      {
#line 533 "hlds_out_pred.m"
      }
#line 505 "hlds_out_pred.m"
  }
#line 500 "hlds_out_pred.m"
}

#line 484 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_p_0(
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_1,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_2,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_3,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_4,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__5_5,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_6,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_7,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_8,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_9,
#line 484 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__UseDeclaredModes_10)
#line 484 "hlds_out_pred.m"
{
#line 489 "hlds_out_pred.m"
  while (MR_TRUE)
#line 489 "hlds_out_pred.m"
    {
#line 489 "hlds_out_pred.m"
      /* tailcall optimized into a loop */
#line 489 "hlds_out_pred.m"
      {
#line 489 "hlds_out_pred.m"
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 489 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "hlds_out_pred.m"
          {
#line 489 "hlds_out_pred.m"
          }
#line 489 "hlds_out_pred.m"
        else
#line 492 "hlds_out_pred.m"
          {
#line 492 "hlds_out_pred.m"
            MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__5_5, (MR_Integer) 0)));
#line 492 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ProcIds_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__5_5, (MR_Integer) 1)));

#line 493 "hlds_out_pred.m"
            {
#line 493 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_1, hlds__hlds_out__hlds_out_pred__Lang_2, hlds__hlds_out__hlds_out_pred__Context_3, hlds__hlds_out__hlds_out_pred__PredId_4, hlds__hlds_out__hlds_out_pred__ProcId_29, hlds__hlds_out__hlds_out_pred__VarSet_6, hlds__hlds_out__hlds_out_pred__AppendVarNums_7, hlds__hlds_out__hlds_out_pred__HeadTerms_8, hlds__hlds_out__hlds_out_pred__PredOrFunc_9, hlds__hlds_out__hlds_out_pred__UseDeclaredModes_10);
            }
#line 496 "hlds_out_pred.m"
            /* direct tailcall eliminated */
#line 496 "hlds_out_pred.m"
            {
#line 496 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__5__tmp_copy_5 = hlds__hlds_out__hlds_out_pred__ProcIds_30;

#line 496 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__HeadVar__5_5 = hlds__hlds_out__hlds_out_pred__HeadVar__5__tmp_copy_5;
#line 496 "hlds_out_pred.m"
            }
#line 496 "hlds_out_pred.m"
            continue;
#line 492 "hlds_out_pred.m"
          }
#line 489 "hlds_out_pred.m"
      }
#line 489 "hlds_out_pred.m"
      break;
#line 489 "hlds_out_pred.m"
    }
#line 484 "hlds_out_pred.m"
}

#line 406 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_15,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_16,
#line 406 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_17,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_18,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_19,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_20,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_21,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_22,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_23,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Clauses0_24,
#line 406 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_25,
#line 406 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__ClauseNum_26)
#line 406 "hlds_out_pred.m"
{
#line 415 "hlds_out_pred.m"
  while (MR_TRUE)
#line 415 "hlds_out_pred.m"
    {
#line 415 "hlds_out_pred.m"
      /* tailcall optimized into a loop */
#line 415 "hlds_out_pred.m"
      {
#line 415 "hlds_out_pred.m"
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 415 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__Clauses0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "hlds_out_pred.m"
          {
#line 428 "hlds_out_pred.m"
          }
#line 415 "hlds_out_pred.m"
        else
#line 415 "hlds_out_pred.m"
          {
#line 415 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__Clause_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Clauses0_24, (MR_Integer) 0)));
#line 415 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__Clauses_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Clauses0_24, (MR_Integer) 1)));
#line 415 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_30;
#line 415 "hlds_out_pred.m"
            MR_Integer hlds__hlds_out__hlds_out_pred__V_40_40;

#line 416 "hlds_out_pred.m"
            {
#line 416 "hlds_out_pred.m"
              mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__HeadVars_22, &hlds__hlds_out__hlds_out_pred__HeadTerms_30);
            }
#line 418 "hlds_out_pred.m"
            {
#line 418 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% clause ");
            }
#line 419 "hlds_out_pred.m"
            {
#line 419 "hlds_out_pred.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__ClauseNum_26);
            }
#line 420 "hlds_out_pred.m"
            {
#line 420 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 421 "hlds_out_pred.m"
            {
#line 421 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_clause_14_p_0(hlds__hlds_out__hlds_out_pred__Info_15, hlds__hlds_out__hlds_out_pred__Lang_16, hlds__hlds_out__hlds_out_pred__Indent_17, hlds__hlds_out__hlds_out_pred__ModuleInfo_18, hlds__hlds_out__hlds_out_pred__PredId_19, hlds__hlds_out__hlds_out_pred__VarSet_20, hlds__hlds_out__hlds_out_pred__AppendVarNums_21, hlds__hlds_out__hlds_out_pred__HeadTerms_30, hlds__hlds_out__hlds_out_pred__PredOrFunc_23, hlds__hlds_out__hlds_out_pred__Clause_28, (MR_Integer) 0, hlds__hlds_out__hlds_out_pred__TypeQual_25);
            }
#line 426 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_40_40 = (hlds__hlds_out__hlds_out_pred__ClauseNum_26 + (MR_Integer) 1);
#line 424 "hlds_out_pred.m"
            /* direct tailcall eliminated */
#line 424 "hlds_out_pred.m"
            {
#line 424 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__Clauses0__tmp_copy_24 = hlds__hlds_out__hlds_out_pred__Clauses_29;
#line 424 "hlds_out_pred.m"
              MR_Integer hlds__hlds_out__hlds_out_pred__ClauseNum__tmp_copy_26 = hlds__hlds_out__hlds_out_pred__V_40_40;

#line 424 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__ClauseNum_26 = hlds__hlds_out__hlds_out_pred__ClauseNum__tmp_copy_26;
#line 424 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__Clauses0_24 = hlds__hlds_out__hlds_out_pred__Clauses0__tmp_copy_24;
#line 424 "hlds_out_pred.m"
            }
#line 424 "hlds_out_pred.m"
            continue;
#line 415 "hlds_out_pred.m"
          }
#line 415 "hlds_out_pred.m"
      }
#line 415 "hlds_out_pred.m"
      break;
#line 415 "hlds_out_pred.m"
    }
#line 406 "hlds_out_pred.m"
}

#line 395 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_14,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_15,
#line 395 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_16,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_17,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_18,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_19,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_20,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_21,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_22,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Clauses0_23,
#line 395 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_24)
#line 395 "hlds_out_pred.m"
{
#line 401 "hlds_out_pred.m"
  {
#line 401 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 401 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadVarList_26;

#line 402 "hlds_out_pred.m"
    {
#line 402 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__HeadVarList_26 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], hlds__hlds_out__hlds_out_pred__HeadVars_21);
    }
#line 403 "hlds_out_pred.m"
    {
#line 403 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(hlds__hlds_out__hlds_out_pred__Info_14, hlds__hlds_out__hlds_out_pred__Lang_15, hlds__hlds_out__hlds_out_pred__Indent_16, hlds__hlds_out__hlds_out_pred__ModuleInfo_17, hlds__hlds_out__hlds_out_pred__PredId_18, hlds__hlds_out__hlds_out_pred__VarSet_19, hlds__hlds_out__hlds_out_pred__AppendVarNums_20, hlds__hlds_out__hlds_out_pred__HeadVarList_26, hlds__hlds_out__hlds_out_pred__PredOrFunc_22, hlds__hlds_out__hlds_out_pred__Clauses0_23, hlds__hlds_out__hlds_out_pred__TypeQual_24, (MR_Integer) 1);
#line 403 "hlds_out_pred.m"
      return;
    }
#line 401 "hlds_out_pred.m"
  }
#line 395 "hlds_out_pred.m"
}

#line 356 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(
#line 356 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_3,
#line 356 "hlds_out_pred.m"
  MR_Word * hlds__hlds_out__hlds_out_pred__ClausesInfo_4)
#line 356 "hlds_out_pred.m"
{
#line 359 "hlds_out_pred.m"
  {
#line 359 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 359 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__OptionsStr_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 0)));
#line 359 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__DumpStr_6;
#line 359 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9;
#line 359 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12;
#line 359 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15;
#line 359 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18;
#line 360 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 1)));
#line 360 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 2)));
#line 360 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 3)));
#line 360 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 4)));
#line 390 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_28_28;
#line 390 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_29_29;
#line 390 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_30_30;
#line 390 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_31_31;
#line 390 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_27_27;

#line 363 "hlds_out_pred.m"
    {
#line 363 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 99);
    }
#line 365 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 364 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9 = (MR_String) "c";
#line 365 "hlds_out_pred.m"
    else
#line 365 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9 = (MR_String) "";
#line 368 "hlds_out_pred.m"
    {
#line 368 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 110);
    }
#line 370 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 369 "hlds_out_pred.m"
      {
#line 369 "hlds_out_pred.m"
        {
#line 369 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9, (MR_String) "n");
        }
#line 369 "hlds_out_pred.m"
      }
#line 370 "hlds_out_pred.m"
    else
#line 370 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12 = hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9;
#line 373 "hlds_out_pred.m"
    {
#line 373 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 118);
    }
#line 375 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 374 "hlds_out_pred.m"
      {
#line 374 "hlds_out_pred.m"
        {
#line 374 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12, (MR_String) "v");
        }
#line 374 "hlds_out_pred.m"
      }
#line 375 "hlds_out_pred.m"
    else
#line 375 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15 = hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12;
#line 378 "hlds_out_pred.m"
    {
#line 378 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 103);
    }
#line 380 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 379 "hlds_out_pred.m"
      {
#line 379 "hlds_out_pred.m"
        {
#line 379 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15, (MR_String) "g");
        }
#line 379 "hlds_out_pred.m"
      }
#line 380 "hlds_out_pred.m"
    else
#line 380 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18 = hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15;
#line 383 "hlds_out_pred.m"
    {
#line 383 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 80);
    }
#line 385 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 384 "hlds_out_pred.m"
      {
#line 384 "hlds_out_pred.m"
        {
#line 384 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__DumpStr_6 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18, (MR_String) "P");
        }
#line 384 "hlds_out_pred.m"
      }
#line 385 "hlds_out_pred.m"
    else
#line 385 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__DumpStr_6 = hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18;
#line 390 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 0)));
#line 390 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 1)));
#line 390 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 2)));
#line 390 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 3)));
#line 390 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 4)));
#line 390 "hlds_out_pred.m"
    {
#line 390 "hlds_out_pred.m"
      MR_Word base;
#line 390 "hlds_out_pred.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 390 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__ClausesInfo_4 = base;
#line 390 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__DumpStr_6));
#line 390 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_28_28));
#line 390 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_29_29));
#line 390 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_30_30));
#line 390 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_31_31));
#line 390 "hlds_out_pred.m"
    }
#line 359 "hlds_out_pred.m"
  }
#line 356 "hlds_out_pred.m"
}

#line 69 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(
#line 69 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__1_1,
#line 69 "hlds_out_pred.m"
  MR_String * hlds__hlds_out__hlds_out_pred__HeadVar__2_2)
#line 69 "hlds_out_pred.m"
{
#line 1340 "hlds_out_pred.m"
  {
#line 1340 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 1340 "hlds_out_pred.m"
    *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_pred_vector_common_4[20 + hlds__hlds_out__hlds_out_pred__HeadVar__1_1]))->hlds__hlds_out__hlds_out_pred__vector_common_type_4_0__vct_4_f_0;
#line 1340 "hlds_out_pred.m"
  }
#line 69 "hlds_out_pred.m"
}

#line 65 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_3_p_0(
#line 65 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Marker_4)
#line 65 "hlds_out_pred.m"
{
#line 1336 "hlds_out_pred.m"
  {
#line 1336 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1336 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__Name_6;

#line 1337 "hlds_out_pred.m"
    {
#line 1337 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(hlds__hlds_out__hlds_out_pred__Marker_4, &hlds__hlds_out__hlds_out_pred__Name_6);
    }
#line 1338 "hlds_out_pred.m"
    {
#line 1338 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Name_6);
#line 1338 "hlds_out_pred.m"
      return;
    }
#line 1336 "hlds_out_pred.m"
  }
#line 65 "hlds_out_pred.m"
}

#line 61 "hlds_out_pred.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_pred__import_status_to_string_1_f_0(
#line 61 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__1_1)
#line 61 "hlds_out_pred.m"
{
#line 569 "hlds_out_pred.m"
  {
#line 569 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 569 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__HeadVar__2_2;

#line 569 "hlds_out_pred.m"
#line 569 "hlds_out_pred.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__HeadVar__1_1)) {
#line 569 "hlds_out_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 569 "hlds_out_pred.m"
      case (MR_Integer) 0:
#line 569 "hlds_out_pred.m"
#line 569 "hlds_out_pred.m"
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_pred__HeadVar__1_1)) {
#line 569 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 569 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 592 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "opt_imported";
#line 569 "hlds_out_pred.m"
            break;
#line 569 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 590 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "abstract_imported";
#line 569 "hlds_out_pred.m"
            break;
#line 569 "hlds_out_pred.m"
          case (MR_Integer) 2:
#line 594 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "pseudo_imported";
#line 569 "hlds_out_pred.m"
            break;
#line 569 "hlds_out_pred.m"
          case (MR_Integer) 3:
#line 571 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "exported";
#line 569 "hlds_out_pred.m"
            break;
#line 569 "hlds_out_pred.m"
          case (MR_Integer) 4:
#line 573 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "opt_exported";
#line 569 "hlds_out_pred.m"
            break;
#line 569 "hlds_out_pred.m"
          case (MR_Integer) 5:
#line 575 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "abstract_exported";
#line 569 "hlds_out_pred.m"
            break;
#line 569 "hlds_out_pred.m"
          case (MR_Integer) 6:
#line 577 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "pseudo_exported";
#line 569 "hlds_out_pred.m"
            break;
#line 569 "hlds_out_pred.m"
          case (MR_Integer) 7:
#line 596 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "exported_to_submodules";
#line 569 "hlds_out_pred.m"
            break;
#line 569 "hlds_out_pred.m"
          case (MR_Integer) 8:
#line 569 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = (MR_String) "local";
#line 569 "hlds_out_pred.m"
            break;
#line 569 "hlds_out_pred.m"
        }
#line 569 "hlds_out_pred.m"
        break;
#line 569 "hlds_out_pred.m"
      case (MR_Integer) 1:
#line 588 "hlds_out_pred.m"
        {
#line 588 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__Status_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__1_1, (MR_Integer) 0)));
#line 588 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_9_9;
#line 588 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_10_10;

#line 589 "hlds_out_pred.m"
          {
#line 589 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_10_10 = hlds__hlds_out__hlds_out_pred__import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__Status_7);
          }
#line 589 "hlds_out_pred.m"
          {
#line 589 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_9_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__V_10_10, (MR_String) ")");
          }
#line 589 "hlds_out_pred.m"
          {
#line 589 "hlds_out_pred.m"
            return hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "external (and ", hlds__hlds_out__hlds_out_pred__V_9_9);
          }
#line 588 "hlds_out_pred.m"
        }
#line 569 "hlds_out_pred.m"
        break;
#line 569 "hlds_out_pred.m"
      case (MR_Integer) 2:
#line 569 "hlds_out_pred.m"
        {
#line 569 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__HeadVar__1_1, (MR_Integer) 0)));

#line 569 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_pred_vector_common_4[16 + hlds__hlds_out__hlds_out_pred__V_12_12]))->hlds__hlds_out__hlds_out_pred__vector_common_type_4_0__vct_4_f_0;
#line 569 "hlds_out_pred.m"
        }
#line 569 "hlds_out_pred.m"
        break;
#line 569 "hlds_out_pred.m"
    }
#line 569 "hlds_out_pred.m"
    return hlds__hlds_out__hlds_out_pred__HeadVar__2_2;
#line 569 "hlds_out_pred.m"
  }
#line 61 "hlds_out_pred.m"
}

#line 56 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_p_0(
#line 56 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 56 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__StepDesc_6)
#line 56 "hlds_out_pred.m"
{
#line 1223 "hlds_out_pred.m"
  {
#line 1223 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1223 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__VarName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StepDesc_6, (MR_Integer) 0)));
#line 1223 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TrieStep_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StepDesc_6, (MR_Integer) 1)));
#line 1223 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_17_17;

#line 1225 "hlds_out_pred.m"
    {
#line 1225 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 1226 "hlds_out_pred.m"
    {
#line 1226 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__VarName_8);
    }
#line 1227 "hlds_out_pred.m"
    {
#line 1227 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
#line 1234 "hlds_out_pred.m"
#line 1234 "hlds_out_pred.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__TrieStep_9)) {
#line 1234 "hlds_out_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1234 "hlds_out_pred.m"
      case (MR_Integer) 0:
#line 1234 "hlds_out_pred.m"
#line 1234 "hlds_out_pred.m"
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_pred__TrieStep_9)) {
#line 1234 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1234 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 1247 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "dummy";
#line 1234 "hlds_out_pred.m"
            break;
#line 1234 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 1235 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "int";
#line 1234 "hlds_out_pred.m"
            break;
#line 1234 "hlds_out_pred.m"
          case (MR_Integer) 2:
#line 1238 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "char";
#line 1234 "hlds_out_pred.m"
            break;
#line 1234 "hlds_out_pred.m"
          case (MR_Integer) 3:
#line 1241 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "string";
#line 1234 "hlds_out_pred.m"
            break;
#line 1234 "hlds_out_pred.m"
          case (MR_Integer) 4:
#line 1244 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "float";
#line 1234 "hlds_out_pred.m"
            break;
#line 1234 "hlds_out_pred.m"
          case (MR_Integer) 5:
#line 1253 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "foreign_enum";
#line 1234 "hlds_out_pred.m"
            break;
#line 1234 "hlds_out_pred.m"
          case (MR_Integer) 6:
#line 1274 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "typeinfo";
#line 1234 "hlds_out_pred.m"
            break;
#line 1234 "hlds_out_pred.m"
          case (MR_Integer) 7:
#line 1277 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "typeclassinfo";
#line 1234 "hlds_out_pred.m"
            break;
#line 1234 "hlds_out_pred.m"
          case (MR_Integer) 8:
#line 1280 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "promise_implied";
#line 1234 "hlds_out_pred.m"
            break;
#line 1234 "hlds_out_pred.m"
        }
#line 1234 "hlds_out_pred.m"
        break;
#line 1234 "hlds_out_pred.m"
      case (MR_Integer) 1:
#line 1249 "hlds_out_pred.m"
        {
#line 1249 "hlds_out_pred.m"
          MR_Integer hlds__hlds_out__hlds_out_pred__N_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__TrieStep_9, (MR_Integer) 0)));
#line 1249 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_40_40;
#line 1249 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_41_41;

#line 1250 "hlds_out_pred.m"
          {
#line 1250 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_41_41 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__N_22);
          }
#line 1250 "hlds_out_pred.m"
          {
#line 1250 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_40_40 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__V_41_41, (MR_String) ")");
          }
#line 1250 "hlds_out_pred.m"
          {
#line 1250 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "enum(", hlds__hlds_out__hlds_out_pred__V_40_40);
          }
#line 1249 "hlds_out_pred.m"
        }
#line 1234 "hlds_out_pred.m"
        break;
#line 1234 "hlds_out_pred.m"
      case (MR_Integer) 2:
#line 1255 "hlds_out_pred.m"
        {
#line 1255 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__TrieStep_9, (MR_Integer) 0)));
#line 1255 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__IsPoly_24 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__TrieStep_9, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 1255 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__IsAddr_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__TrieStep_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1255 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__IsPolyStr_26;
#line 1255 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__IsAddrStr_27;
#line 1255 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_29_29;
#line 1255 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_30_30;
#line 1255 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_32_32;
#line 1255 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_34_34;
#line 1255 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_35_35;
#line 1255 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_37_37;

#line 1259 "hlds_out_pred.m"
#line 1259 "hlds_out_pred.m"
          switch (hlds__hlds_out__hlds_out_pred__IsPoly_24) {
#line 1259 "hlds_out_pred.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1259 "hlds_out_pred.m"
            case (MR_Integer) 0:
#line 1261 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__IsPolyStr_26 = (MR_String) "mono";
#line 1259 "hlds_out_pred.m"
              break;
#line 1259 "hlds_out_pred.m"
            case (MR_Integer) 1:
#line 1258 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__IsPolyStr_26 = (MR_String) "poly";
#line 1259 "hlds_out_pred.m"
              break;
#line 1259 "hlds_out_pred.m"
          }
#line 1266 "hlds_out_pred.m"
#line 1266 "hlds_out_pred.m"
          switch (hlds__hlds_out__hlds_out_pred__IsAddr_25) {
#line 1266 "hlds_out_pred.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1266 "hlds_out_pred.m"
            case (MR_Integer) 1:
#line 1268 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__IsAddrStr_27 = (MR_String) "addr";
#line 1266 "hlds_out_pred.m"
              break;
#line 1266 "hlds_out_pred.m"
            case (MR_Integer) 0:
#line 1265 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__IsAddrStr_27 = (MR_String) "value";
#line 1266 "hlds_out_pred.m"
              break;
#line 1266 "hlds_out_pred.m"
          }
#line 1270 "hlds_out_pred.m"
          {
#line 1270 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_30_30 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(hlds__hlds_out__hlds_out_pred__TVarSet_5, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__Type_23);
          }
#line 1271 "hlds_out_pred.m"
          {
#line 1271 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_37_37 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__IsAddrStr_27, (MR_String) ")");
          }
#line 1271 "hlds_out_pred.m"
          {
#line 1271 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_37_37);
          }
#line 1271 "hlds_out_pred.m"
          {
#line 1271 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_34_34 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__IsPolyStr_26, hlds__hlds_out__hlds_out_pred__V_35_35);
          }
#line 1271 "hlds_out_pred.m"
          {
#line 1271 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_34_34);
          }
#line 1270 "hlds_out_pred.m"
          {
#line 1270 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_29_29 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__V_30_30, hlds__hlds_out__hlds_out_pred__V_32_32);
          }
#line 1270 "hlds_out_pred.m"
          {
#line 1270 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "general(", hlds__hlds_out__hlds_out_pred__V_29_29);
          }
#line 1255 "hlds_out_pred.m"
        }
#line 1234 "hlds_out_pred.m"
        break;
#line 1234 "hlds_out_pred.m"
    }
#line 1228 "hlds_out_pred.m"
    {
#line 1228 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_17_17);
#line 1228 "hlds_out_pred.m"
      return;
    }
#line 1223 "hlds_out_pred.m"
  }
#line 56 "hlds_out_pred.m"
}

#line 1190 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_2(
#line 1190 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1190 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1190 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1190 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 1190 "hlds_out_pred.m"
{
#line 1190 "hlds_out_pred.m"
  {
#line 1190 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 1190 "hlds_out_pred.m"
    {
#line 1190 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 1190 "hlds_out_pred.m"
      return;
    }
#line 1190 "hlds_out_pred.m"
  }
#line 1190 "hlds_out_pred.m"
}

#line 1183 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_1(
#line 1183 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1183 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1183 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1183 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 1183 "hlds_out_pred.m"
{
#line 1183 "hlds_out_pred.m"
  {
#line 1183 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 1183 "hlds_out_pred.m"
    {
#line 1183 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 1183 "hlds_out_pred.m"
      return;
    }
#line 1183 "hlds_out_pred.m"
  }
#line 1183 "hlds_out_pred.m"
}

#line 53 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0(
#line 53 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 53 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TableArgInfos_6)
#line 53 "hlds_out_pred.m"
{
#line 1180 "hlds_out_pred.m"
  {
#line 1180 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1180 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_27_27;
#line 1180 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ArgInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__TableArgInfos_6, (MR_Integer) 0)));
#line 1180 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TVarMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__TableArgInfos_6, (MR_Integer) 1)));
#line 1180 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TVarPairs_10;
#line 1180 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_17_17;
#line 1183 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_18_18;

#line 1182 "hlds_out_pred.m"
    {
#line 1182 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% arg infos:\n");
    }
#line 1183 "hlds_out_pred.m"
    {
#line 1183 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[0]));
#line 1183 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_1));
#line 1183 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1183 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_5));
#line 1183 "hlds_out_pred.m"
    }
#line 5352 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_27_27 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1183 "hlds_out_pred.m"
    {
#line 1183 "hlds_out_pred.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_arg_info_0, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_27_27, hlds__hlds_out__hlds_out_pred__V_17_17, hlds__hlds_out__hlds_out_pred__ArgInfos_8, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_18_18);
    }
#line 1184 "hlds_out_pred.m"
    {
#line 1184 "hlds_out_pred.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[4], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0, hlds__hlds_out__hlds_out_pred__TVarMap_9, &hlds__hlds_out__hlds_out_pred__TVarPairs_10);
    }
#line 1187 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__TVarPairs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1186 "hlds_out_pred.m"
      {
#line 1186 "hlds_out_pred.m"
      }
#line 1187 "hlds_out_pred.m"
    else
#line 1188 "hlds_out_pred.m"
      {
#line 1188 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__V_21_21;
#line 1190 "hlds_out_pred.m"
        MR_Box hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_14;

#line 1189 "hlds_out_pred.m"
        {
#line 1189 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% type var map:\n");
        }
#line 1190 "hlds_out_pred.m"
        {
#line 1190 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1190 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_21_21, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[1]));
#line 1190 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_2));
#line 1190 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1190 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_21_21, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_5));
#line 1190 "hlds_out_pred.m"
        }
#line 1190 "hlds_out_pred.m"
        {
#line 1190 "hlds_out_pred.m"
          mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[0], hlds__hlds_out__hlds_out_pred__TypeCtorInfo_27_27, hlds__hlds_out__hlds_out_pred__V_21_21, hlds__hlds_out__hlds_out_pred__TVarPairs_10, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_14);
        }
#line 1188 "hlds_out_pred.m"
      }
#line 1180 "hlds_out_pred.m"
  }
#line 53 "hlds_out_pred.m"
}

#line 1051 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0_1(
#line 1051 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1051 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1051 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1051 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 1051 "hlds_out_pred.m"
{
#line 1051 "hlds_out_pred.m"
  {
#line 1051 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 1051 "hlds_out_pred.m"
    {
#line 1051 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__1051__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 1051 "hlds_out_pred.m"
      return;
    }
#line 1051 "hlds_out_pred.m"
  }
#line 1051 "hlds_out_pred.m"
}

#line 47 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0(
#line 47 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_11,
#line 47 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_12,
#line 47 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_13,
#line 47 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_14,
#line 47 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_15,
#line 47 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_16,
#line 47 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ImportStatus_17,
#line 47 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Proc_18)
#line 47 "hlds_out_pred.m"
{
#line 803 "hlds_out_pred.m"
  {
#line 803 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_20;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_21;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_22;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__DeclaredDeterminism_23;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__InferredDeterminism_24;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarSet_25;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_26;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadModes_27;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeArgLives_28;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__RegR_HeadVars_29;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeArgInfos_30;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Goal_31;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ModeContext_32;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeArgSize_33;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeTermination_34;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeStructureSharing_35;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeStructureReuse_36;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_37;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__EvalMethod_38;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__IsAddressTaken_39;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HasParallelConj_40;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HasUserEvent_41;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeProcTableIOInfo_42;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeCallTableTip_43;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeDeepProfileInfo_44;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeUntupleInfo_45;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemap_46;
#line 803 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__Indent1_47;
#line 803 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__DumpOptions_48;
#line 833 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_237_237;
#line 833 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_238_238;
#line 833 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_239_239;
#line 833 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_240_240;

#line 804 "hlds_out_pred.m"
    {
#line 804 "hlds_out_pred.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_14, hlds__hlds_out__hlds_out_pred__PredId_15, &hlds__hlds_out__hlds_out_pred__PredInfo_20);
    }
#line 805 "hlds_out_pred.m"
    {
#line 805 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_20, &hlds__hlds_out__hlds_out_pred__TVarSet_21);
    }
#line 806 "hlds_out_pred.m"
    {
#line 806 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__VarTypes_22);
    }
#line 807 "hlds_out_pred.m"
    {
#line 807 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__DeclaredDeterminism_23);
    }
#line 808 "hlds_out_pred.m"
    {
#line 808 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__InferredDeterminism_24);
    }
#line 809 "hlds_out_pred.m"
    {
#line 809 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__VarSet_25);
    }
#line 810 "hlds_out_pred.m"
    {
#line 810 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__HeadVars_26);
    }
#line 811 "hlds_out_pred.m"
    {
#line 811 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__HeadModes_27);
    }
#line 812 "hlds_out_pred.m"
    {
#line 812 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_arglives_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeArgLives_28);
    }
#line 813 "hlds_out_pred.m"
    {
#line 813 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_reg_r_headvars_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__RegR_HeadVars_29);
    }
#line 814 "hlds_out_pred.m"
    {
#line 814 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_maybe_arg_info_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeArgInfos_30);
    }
#line 815 "hlds_out_pred.m"
    {
#line 815 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__Goal_31);
    }
#line 816 "hlds_out_pred.m"
    {
#line 816 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__ModeContext_32);
    }
#line 817 "hlds_out_pred.m"
    {
#line 817 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeArgSize_33);
    }
#line 818 "hlds_out_pred.m"
    {
#line 818 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeTermination_34);
    }
#line 819 "hlds_out_pred.m"
    {
#line 819 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_structure_sharing_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeStructureSharing_35);
    }
#line 820 "hlds_out_pred.m"
    {
#line 820 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_structure_reuse_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeStructureReuse_36);
    }
#line 821 "hlds_out_pred.m"
    {
#line 821 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__RttiVarMaps_37);
    }
#line 822 "hlds_out_pred.m"
    {
#line 822 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_eval_method_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__EvalMethod_38);
    }
#line 823 "hlds_out_pred.m"
    {
#line 823 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__IsAddressTaken_39);
    }
#line 824 "hlds_out_pred.m"
    {
#line 824 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__HasParallelConj_40);
    }
#line 825 "hlds_out_pred.m"
    {
#line 825 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__HasUserEvent_41);
    }
#line 826 "hlds_out_pred.m"
    {
#line 826 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_proc_table_io_info_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeProcTableIOInfo_42);
    }
#line 827 "hlds_out_pred.m"
    {
#line 827 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeCallTableTip_43);
    }
#line 828 "hlds_out_pred.m"
    {
#line 828 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeDeepProfileInfo_44);
    }
#line 829 "hlds_out_pred.m"
    {
#line 829 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_untuple_info_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__MaybeUntupleInfo_45);
    }
#line 830 "hlds_out_pred.m"
    {
#line 830 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__VarNameRemap_46);
    }
#line 831 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__Indent1_47 = (hlds__hlds_out__hlds_out_pred__Indent_12 + (MR_Integer) 1);
#line 833 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__DumpOptions_48 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 0)));
#line 833 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_237_237 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 1)));
#line 833 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 2)));
#line 833 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 3)));
#line 833 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 4)));
#line 834 "hlds_out_pred.m"
    {
#line 834 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_48, (MR_Char) 120);
    }
#line 1084 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 835 "hlds_out_pred.m"
      {
#line 835 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_245_245;
#line 835 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__PredInt_49;
#line 835 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__ProcInt_50;
#line 835 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapList_82;
#line 835 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__PredName_85;
#line 835 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_86;
#line 835 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ModeVarSet_87;
#line 835 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_112_112;
#line 1064 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ArgInfos_91;
#line 1068 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__V_258_258;

#line 835 "hlds_out_pred.m"
        {
#line 835 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent1_47);
        }
#line 836 "hlds_out_pred.m"
        {
#line 836 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% pred id ");
        }
#line 837 "hlds_out_pred.m"
        {
#line 837 "hlds_out_pred.m"
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__PredId_15, &hlds__hlds_out__hlds_out_pred__PredInt_49);
        }
#line 838 "hlds_out_pred.m"
        {
#line 838 "hlds_out_pred.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__PredInt_49);
        }
#line 839 "hlds_out_pred.m"
        {
#line 839 "hlds_out_pred.m"
          mercury__io__nl_2_p_0();
        }
#line 840 "hlds_out_pred.m"
        {
#line 840 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent1_47);
        }
#line 841 "hlds_out_pred.m"
        {
#line 841 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% mode number ");
        }
#line 842 "hlds_out_pred.m"
        {
#line 842 "hlds_out_pred.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__ProcId_16, &hlds__hlds_out__hlds_out_pred__ProcInt_50);
        }
#line 843 "hlds_out_pred.m"
        {
#line 843 "hlds_out_pred.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__ProcInt_50);
        }
#line 844 "hlds_out_pred.m"
        {
#line 844 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) " of ");
        }
#line 845 "hlds_out_pred.m"
        {
#line 845 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_14, hlds__hlds_out__hlds_out_pred__PredId_15);
        }
#line 846 "hlds_out_pred.m"
        {
#line 846 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) " (");
        }
#line 847 "hlds_out_pred.m"
        {
#line 847 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_112_112 = parse_tree__prog_out__determinism_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__InferredDeterminism_24);
        }
#line 847 "hlds_out_pred.m"
        {
#line 847 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_112_112);
        }
#line 848 "hlds_out_pred.m"
        {
#line 848 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "):\n");
        }
#line 850 "hlds_out_pred.m"
        {
#line 850 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_48, (MR_Char) 116);
        }
#line 859 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 851 "hlds_out_pred.m"
          {
#line 851 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_241_241;

#line 851 "hlds_out_pred.m"
            {
#line 851 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 852 "hlds_out_pred.m"
            {
#line 852 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% Arg size properties: ");
            }
#line 5806 "hlds.hlds_out.hlds_out_pred.c"
            hlds__hlds_out__hlds_out_pred__TypeInfo_241_241 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[1];
#line 853 "hlds_out_pred.m"
            {
#line 853 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__write_maybe_arg_size_info_4_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_241_241, hlds__hlds_out__hlds_out_pred__MaybeArgSize_33, (MR_Integer) 1);
            }
#line 854 "hlds_out_pred.m"
            {
#line 854 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 855 "hlds_out_pred.m"
            {
#line 855 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 856 "hlds_out_pred.m"
            {
#line 856 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% Termination properties: ");
            }
#line 857 "hlds_out_pred.m"
            {
#line 857 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__write_maybe_termination_info_4_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, hlds__hlds_out__hlds_out_pred__TypeInfo_241_241, hlds__hlds_out__hlds_out_pred__MaybeTermination_34, (MR_Integer) 1);
            }
#line 858 "hlds_out_pred.m"
            {
#line 858 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 851 "hlds_out_pred.m"
          }
#line 859 "hlds_out_pred.m"
        else
#line 859 "hlds_out_pred.m"
          {
#line 859 "hlds_out_pred.m"
          }
#line 864 "hlds_out_pred.m"
        {
#line 864 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_48, (MR_Char) 83);
        }
#line 877 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 865 "hlds_out_pred.m"
          {
#line 865 "hlds_out_pred.m"
            {
#line 865 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 866 "hlds_out_pred.m"
            {
#line 866 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% Structure sharing: \n");
            }
#line 873 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MaybeStructureSharing_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "hlds_out_pred.m"
              {
#line 875 "hlds_out_pred.m"
                {
#line 875 "hlds_out_pred.m"
                  parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__TVarSet_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                }
#line 874 "hlds_out_pred.m"
              }
#line 873 "hlds_out_pred.m"
            else
#line 868 "hlds_out_pred.m"
              {
#line 868 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__StructureSharing_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeStructureSharing_35, (MR_Integer) 0)));
#line 868 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__SharingAs_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StructureSharing_51, (MR_Integer) 0)));
#line 868 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__V_135_135;
#line 869 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred___Status_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StructureSharing_51, (MR_Integer) 1)));

#line 872 "hlds_out_pred.m"
                {
#line 872 "hlds_out_pred.m"
                  hlds__hlds_out__hlds_out_pred__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 872 "hlds_out_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_135_135, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__SharingAs_52));
#line 872 "hlds_out_pred.m"
                }
#line 871 "hlds_out_pred.m"
                {
#line 871 "hlds_out_pred.m"
                  parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__V_135_135);
                }
#line 868 "hlds_out_pred.m"
              }
#line 865 "hlds_out_pred.m"
          }
#line 877 "hlds_out_pred.m"
        else
#line 877 "hlds_out_pred.m"
          {
#line 877 "hlds_out_pred.m"
          }
#line 882 "hlds_out_pred.m"
        {
#line 882 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_48, (MR_Char) 82);
        }
#line 895 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 883 "hlds_out_pred.m"
          {
#line 883 "hlds_out_pred.m"
            {
#line 883 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 884 "hlds_out_pred.m"
            {
#line 884 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% Structure reuse: \n");
            }
#line 891 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MaybeStructureReuse_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 892 "hlds_out_pred.m"
              {
#line 893 "hlds_out_pred.m"
                {
#line 893 "hlds_out_pred.m"
                  parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__TVarSet_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                }
#line 892 "hlds_out_pred.m"
              }
#line 891 "hlds_out_pred.m"
            else
#line 886 "hlds_out_pred.m"
              {
#line 886 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__StructureReuse_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeStructureReuse_36, (MR_Integer) 0)));
#line 886 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__ReuseAs_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StructureReuse_54, (MR_Integer) 0)));
#line 886 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__V_143_143;
#line 887 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred___ReuseStatus_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StructureReuse_54, (MR_Integer) 1)));

#line 890 "hlds_out_pred.m"
                {
#line 890 "hlds_out_pred.m"
                  hlds__hlds_out__hlds_out_pred__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 890 "hlds_out_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_143_143, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__ReuseAs_55));
#line 890 "hlds_out_pred.m"
                }
#line 889 "hlds_out_pred.m"
                {
#line 889 "hlds_out_pred.m"
                  parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__V_143_143);
                }
#line 886 "hlds_out_pred.m"
              }
#line 883 "hlds_out_pred.m"
          }
#line 895 "hlds_out_pred.m"
        else
#line 895 "hlds_out_pred.m"
          {
#line 895 "hlds_out_pred.m"
          }
#line 899 "hlds_out_pred.m"
        {
#line 899 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
        }
#line 900 "hlds_out_pred.m"
        {
#line 900 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__VarTypes_22, hlds__hlds_out__hlds_out_pred__TVarSet_21);
        }
#line 901 "hlds_out_pred.m"
        {
#line 901 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__RttiVarMaps_37, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__TVarSet_21);
        }
#line 907 "hlds_out_pred.m"
#line 907 "hlds_out_pred.m"
        switch (hlds__hlds_out__hlds_out_pred__IsAddressTaken_39) {
#line 907 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 907 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 908 "hlds_out_pred.m"
            {
#line 909 "hlds_out_pred.m"
              {
#line 909 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% address is not taken\n");
              }
#line 908 "hlds_out_pred.m"
            }
#line 907 "hlds_out_pred.m"
            break;
#line 907 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 905 "hlds_out_pred.m"
            {
#line 906 "hlds_out_pred.m"
              {
#line 906 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% address is taken\n");
              }
#line 905 "hlds_out_pred.m"
            }
#line 907 "hlds_out_pred.m"
            break;
#line 907 "hlds_out_pred.m"
        }
#line 914 "hlds_out_pred.m"
#line 914 "hlds_out_pred.m"
        switch (hlds__hlds_out__hlds_out_pred__HasParallelConj_40) {
#line 914 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 914 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 915 "hlds_out_pred.m"
            {
#line 916 "hlds_out_pred.m"
              {
#line 916 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% does not contain parallel conjunction\n");
              }
#line 915 "hlds_out_pred.m"
            }
#line 914 "hlds_out_pred.m"
            break;
#line 914 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 912 "hlds_out_pred.m"
            {
#line 913 "hlds_out_pred.m"
              {
#line 913 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% contains parallel conjunction\n");
              }
#line 912 "hlds_out_pred.m"
            }
#line 914 "hlds_out_pred.m"
            break;
#line 914 "hlds_out_pred.m"
        }
#line 921 "hlds_out_pred.m"
#line 921 "hlds_out_pred.m"
        switch (hlds__hlds_out__hlds_out_pred__HasUserEvent_41) {
#line 921 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 921 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 922 "hlds_out_pred.m"
            {
#line 923 "hlds_out_pred.m"
              {
#line 923 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% does not contain user event\n");
              }
#line 922 "hlds_out_pred.m"
            }
#line 921 "hlds_out_pred.m"
            break;
#line 921 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 919 "hlds_out_pred.m"
            {
#line 920 "hlds_out_pred.m"
              {
#line 920 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% contains user event\n");
              }
#line 919 "hlds_out_pred.m"
            }
#line 921 "hlds_out_pred.m"
            break;
#line 921 "hlds_out_pred.m"
        }
#line 927 "hlds_out_pred.m"
#line 927 "hlds_out_pred.m"
        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__EvalMethod_38)) {
#line 927 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 927 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 927 "hlds_out_pred.m"
#line 927 "hlds_out_pred.m"
            switch (MR_unmkbody(hlds__hlds_out__hlds_out_pred__EvalMethod_38)) {
#line 927 "hlds_out_pred.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 927 "hlds_out_pred.m"
              case (MR_Integer) 0:
#line 926 "hlds_out_pred.m"
                {
#line 926 "hlds_out_pred.m"
                }
#line 927 "hlds_out_pred.m"
                break;
#line 927 "hlds_out_pred.m"
              case (MR_Integer) 1:
#line 927 "hlds_out_pred.m"
              case (MR_Integer) 2:
#line 932 "hlds_out_pred.m"
                {
#line 933 "hlds_out_pred.m"
                  {
#line 933 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "% eval method: ");
                  }
#line 934 "hlds_out_pred.m"
                  {
#line 934 "hlds_out_pred.m"
                    parse_tree__prog_out__write_eval_method_3_p_0(hlds__hlds_out__hlds_out_pred__EvalMethod_38);
                  }
#line 935 "hlds_out_pred.m"
                  {
#line 935 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
#line 932 "hlds_out_pred.m"
                }
#line 927 "hlds_out_pred.m"
                break;
#line 927 "hlds_out_pred.m"
            }
#line 927 "hlds_out_pred.m"
            break;
#line 927 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 927 "hlds_out_pred.m"
          case (MR_Integer) 2:
#line 932 "hlds_out_pred.m"
            {
#line 933 "hlds_out_pred.m"
              {
#line 933 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% eval method: ");
              }
#line 934 "hlds_out_pred.m"
              {
#line 934 "hlds_out_pred.m"
                parse_tree__prog_out__write_eval_method_3_p_0(hlds__hlds_out__hlds_out_pred__EvalMethod_38);
              }
#line 935 "hlds_out_pred.m"
              {
#line 935 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 932 "hlds_out_pred.m"
            }
#line 927 "hlds_out_pred.m"
            break;
#line 927 "hlds_out_pred.m"
        }
#line 940 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MaybeProcTableIOInfo_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 941 "hlds_out_pred.m"
          {
#line 941 "hlds_out_pred.m"
          }
#line 940 "hlds_out_pred.m"
        else
#line 938 "hlds_out_pred.m"
          {
#line 938 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeProcTableIOInfo_42, (MR_Integer) 0)));

#line 939 "hlds_out_pred.m"
            {
#line 939 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_60);
            }
#line 938 "hlds_out_pred.m"
          }
#line 948 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MaybeCallTableTip_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 949 "hlds_out_pred.m"
          {
#line 949 "hlds_out_pred.m"
          }
#line 948 "hlds_out_pred.m"
        else
#line 944 "hlds_out_pred.m"
          {
#line 944 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__CallTableTip_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeCallTableTip_43, (MR_Integer) 0)));

#line 945 "hlds_out_pred.m"
            {
#line 945 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% call table tip: ");
            }
#line 946 "hlds_out_pred.m"
            {
#line 946 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__CallTableTip_61);
            }
#line 947 "hlds_out_pred.m"
            {
#line 947 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 944 "hlds_out_pred.m"
          }
#line 999 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MaybeDeepProfileInfo_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1000 "hlds_out_pred.m"
          {
#line 1000 "hlds_out_pred.m"
          }
#line 999 "hlds_out_pred.m"
        else
#line 952 "hlds_out_pred.m"
          {
#line 952 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__DeepProfileInfo_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeDeepProfileInfo_44, (MR_Integer) 0)));
#line 952 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__MaybeRecInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepProfileInfo_62, (MR_Integer) 0)));
#line 952 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__MaybeDeepLayout_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepProfileInfo_62, (MR_Integer) 1)));
#line 953 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepProfileInfo_62, (MR_Integer) 2)));

#line 973 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MaybeRecInfo_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 974 "hlds_out_pred.m"
              {
#line 974 "hlds_out_pred.m"
              }
#line 973 "hlds_out_pred.m"
            else
#line 956 "hlds_out_pred.m"
              {
#line 956 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__DeepRecInfo_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeRecInfo_63, (MR_Integer) 0)));
#line 956 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__Role_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepRecInfo_66, (MR_Integer) 0)));
#line 956 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__DeepPredProcId_69;
#line 956 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__DeepPredId_70;
#line 956 "hlds_out_pred.m"
                MR_Integer hlds__hlds_out__hlds_out_pred__DeepProcId_71;
#line 956 "hlds_out_pred.m"
                MR_Integer hlds__hlds_out__hlds_out_pred__DeepPredInt_72;
#line 956 "hlds_out_pred.m"
                MR_Integer hlds__hlds_out__hlds_out_pred__DeepProcInt_73;
#line 957 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepRecInfo_66, (MR_Integer) 1)));

#line 958 "hlds_out_pred.m"
                {
#line 958 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "% deep recursion info: ");
                }
#line 962 "hlds_out_pred.m"
                if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Role_67)) == (MR_mktag((MR_Integer) 0))))
#line 960 "hlds_out_pred.m"
                  {
#line 960 "hlds_out_pred.m"
                    hlds__hlds_out__hlds_out_pred__DeepPredProcId_69 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_pred__Role_67), (MR_Integer) 0);
#line 961 "hlds_out_pred.m"
                    {
#line 961 "hlds_out_pred.m"
                      mercury__io__write_string_3_p_0((MR_String) "inner, outer is ");
                    }
#line 960 "hlds_out_pred.m"
                  }
#line 962 "hlds_out_pred.m"
                else
#line 963 "hlds_out_pred.m"
                  {
#line 963 "hlds_out_pred.m"
                    hlds__hlds_out__hlds_out_pred__DeepPredProcId_69 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_pred__Role_67), (MR_Integer) 1);
#line 964 "hlds_out_pred.m"
                    {
#line 964 "hlds_out_pred.m"
                      mercury__io__write_string_3_p_0((MR_String) "outer, inner is ");
                    }
#line 963 "hlds_out_pred.m"
                  }
#line 966 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__DeepPredId_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepPredProcId_69, (MR_Integer) 0)));
#line 966 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__DeepProcId_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepPredProcId_69, (MR_Integer) 1)));
#line 967 "hlds_out_pred.m"
                {
#line 967 "hlds_out_pred.m"
                  hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__DeepPredId_70, &hlds__hlds_out__hlds_out_pred__DeepPredInt_72);
                }
#line 968 "hlds_out_pred.m"
                {
#line 968 "hlds_out_pred.m"
                  hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__DeepProcId_71, &hlds__hlds_out__hlds_out_pred__DeepProcInt_73);
                }
#line 969 "hlds_out_pred.m"
                {
#line 969 "hlds_out_pred.m"
                  mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__DeepPredInt_72);
                }
#line 970 "hlds_out_pred.m"
                {
#line 970 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "/");
                }
#line 971 "hlds_out_pred.m"
                {
#line 971 "hlds_out_pred.m"
                  mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__DeepProcInt_73);
                }
#line 972 "hlds_out_pred.m"
                {
#line 972 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 956 "hlds_out_pred.m"
              }
#line 996 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MaybeDeepLayout_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 997 "hlds_out_pred.m"
              {
#line 997 "hlds_out_pred.m"
              }
#line 996 "hlds_out_pred.m"
            else
#line 977 "hlds_out_pred.m"
              {
#line 977 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_244_244;
#line 977 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__DeepLayout_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeDeepLayout_64, (MR_Integer) 0)));
#line 977 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__ProcStatic_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepLayout_74, (MR_Integer) 0)));
#line 977 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__ExcpVars_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepLayout_74, (MR_Integer) 1)));
#line 977 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__TopCSD_77;
#line 977 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__MiddleCSD_78;
#line 977 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__MaybeOldOutermost_79;

#line 979 "hlds_out_pred.m"
                {
#line 979 "hlds_out_pred.m"
                  hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0(hlds__hlds_out__hlds_out_pred__ProcStatic_75);
                }
#line 980 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__TopCSD_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ExcpVars_76, (MR_Integer) 0)));
#line 980 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__MiddleCSD_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ExcpVars_76, (MR_Integer) 1)));
#line 980 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__MaybeOldOutermost_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ExcpVars_76, (MR_Integer) 2)));
#line 982 "hlds_out_pred.m"
                {
#line 982 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "% deep layout info: ");
                }
#line 983 "hlds_out_pred.m"
                {
#line 983 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "TopCSD is ");
                }
#line 6377 "hlds.hlds_out.hlds_out_pred.c"
                hlds__hlds_out__hlds_out_pred__TypeCtorInfo_244_244 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 984 "hlds_out_pred.m"
                {
#line 984 "hlds_out_pred.m"
                  parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_244_244, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__TopCSD_77);
                }
#line 985 "hlds_out_pred.m"
                {
#line 985 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) ", MiddleCSD is ");
                }
#line 986 "hlds_out_pred.m"
                {
#line 986 "hlds_out_pred.m"
                  parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_244_244, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__MiddleCSD_78);
                }
#line 992 "hlds_out_pred.m"
                if ((hlds__hlds_out__hlds_out_pred__MaybeOldOutermost_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "hlds_out_pred.m"
                  {
#line 993 "hlds_out_pred.m"
                  }
#line 992 "hlds_out_pred.m"
                else
#line 988 "hlds_out_pred.m"
                  {
#line 988 "hlds_out_pred.m"
                    MR_Word hlds__hlds_out__hlds_out_pred__OldOutermost_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeOldOutermost_79, (MR_Integer) 0)));

#line 989 "hlds_out_pred.m"
                    {
#line 989 "hlds_out_pred.m"
                      mercury__io__write_string_3_p_0((MR_String) ", OldOutermost is ");
                    }
#line 990 "hlds_out_pred.m"
                    {
#line 990 "hlds_out_pred.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_244_244, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__OldOutermost_80);
                    }
#line 988 "hlds_out_pred.m"
                  }
#line 995 "hlds_out_pred.m"
                {
#line 995 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 977 "hlds_out_pred.m"
              }
#line 952 "hlds_out_pred.m"
          }
#line 1006 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MaybeUntupleInfo_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1007 "hlds_out_pred.m"
          {
#line 1007 "hlds_out_pred.m"
          }
#line 1006 "hlds_out_pred.m"
        else
#line 1003 "hlds_out_pred.m"
          {
#line 1003 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__UntupleInfo_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeUntupleInfo_45, (MR_Integer) 0)));

#line 1004 "hlds_out_pred.m"
            {
#line 1004 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0(hlds__hlds_out__hlds_out_pred__UntupleInfo_81, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 1003 "hlds_out_pred.m"
          }
#line 6448 "hlds.hlds_out.hlds_out_pred.c"
        hlds__hlds_out__hlds_out_pred__TypeInfo_245_245 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0];
#line 1009 "hlds_out_pred.m"
        {
#line 1009 "hlds_out_pred.m"
          mercury__map__to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_245_245, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_pred__VarNameRemap_46, &hlds__hlds_out__hlds_out_pred__VarNameRemapList_82);
        }
#line 1012 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__VarNameRemapList_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1011 "hlds_out_pred.m"
          {
#line 1011 "hlds_out_pred.m"
          }
#line 1012 "hlds_out_pred.m"
        else
#line 1013 "hlds_out_pred.m"
          {
#line 1013 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapHead_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarNameRemapList_82, (MR_Integer) 0)));
#line 1013 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapTail_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarNameRemapList_82, (MR_Integer) 1)));

#line 1014 "hlds_out_pred.m"
            {
#line 1014 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 1015 "hlds_out_pred.m"
            {
#line 1015 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% var name remap: ");
            }
#line 1016 "hlds_out_pred.m"
            {
#line 1016 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(hlds__hlds_out__hlds_out_pred__VarNameRemapHead_83, hlds__hlds_out__hlds_out_pred__VarNameRemapTail_84, hlds__hlds_out__hlds_out_pred__VarSet_25);
            }
#line 1018 "hlds_out_pred.m"
            {
#line 1018 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 1013 "hlds_out_pred.m"
          }
#line 1021 "hlds_out_pred.m"
        {
#line 1021 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
        }
#line 1022 "hlds_out_pred.m"
        {
#line 1022 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__PredName_85 = hlds__hlds_module__predicate_name_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_14, hlds__hlds_out__hlds_out_pred__PredId_15);
        }
#line 1023 "hlds_out_pred.m"
        {
#line 1023 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__PredOrFunc_86 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_20);
        }
#line 1024 "hlds_out_pred.m"
        {
#line 1024 "hlds_out_pred.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_pred__ModeVarSet_87);
        }
#line 1030 "hlds_out_pred.m"
#line 1030 "hlds_out_pred.m"
        switch (hlds__hlds_out__hlds_out_pred__PredOrFunc_86) {
#line 1030 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1030 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 1031 "hlds_out_pred.m"
            {
#line 1031 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__FuncHeadModes_88;
#line 1031 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__RetHeadMode_89;
#line 1031 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__V_205_205;
#line 1032 "hlds_out_pred.m"
              MR_Box hlds__hlds_out__hlds_out_pred__conv0_RetHeadMode_89;

#line 1032 "hlds_out_pred.m"
              {
#line 1032 "hlds_out_pred.m"
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_pred__HeadModes_27, &hlds__hlds_out__hlds_out_pred__FuncHeadModes_88, &hlds__hlds_out__hlds_out_pred__conv0_RetHeadMode_89);
              }
#line 1032 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__RetHeadMode_89 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_RetHeadMode_89);
#line 1034 "hlds_out_pred.m"
              {
#line 1034 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1034 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_205_205, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_85));
#line 1034 "hlds_out_pred.m"
              }
#line 1033 "hlds_out_pred.m"
              {
#line 1033 "hlds_out_pred.m"
                parse_tree__mercury_to_mercury__mercury_output_func_mode_decl_9_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_pred__ModeVarSet_87, hlds__hlds_out__hlds_out_pred__V_205_205, hlds__hlds_out__hlds_out_pred__FuncHeadModes_88, hlds__hlds_out__hlds_out_pred__RetHeadMode_89, hlds__hlds_out__hlds_out_pred__DeclaredDeterminism_23, hlds__hlds_out__hlds_out_pred__ModeContext_32);
              }
#line 1031 "hlds_out_pred.m"
            }
#line 1030 "hlds_out_pred.m"
            break;
#line 1030 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 1026 "hlds_out_pred.m"
            {
#line 1026 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__V_208_208;

#line 1028 "hlds_out_pred.m"
              {
#line 1028 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__V_208_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1028 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_208_208, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_85));
#line 1028 "hlds_out_pred.m"
              }
#line 1027 "hlds_out_pred.m"
              {
#line 1027 "hlds_out_pred.m"
                parse_tree__mercury_to_mercury__mercury_output_pred_mode_decl_8_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_pred__ModeVarSet_87, hlds__hlds_out__hlds_out_pred__V_208_208, hlds__hlds_out__hlds_out_pred__HeadModes_27, hlds__hlds_out__hlds_out_pred__DeclaredDeterminism_23, hlds__hlds_out__hlds_out_pred__ModeContext_32);
              }
#line 1026 "hlds_out_pred.m"
            }
#line 1030 "hlds_out_pred.m"
            break;
#line 1030 "hlds_out_pred.m"
        }
#line 1044 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MaybeArgLives_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1045 "hlds_out_pred.m"
          {
#line 1045 "hlds_out_pred.m"
          }
#line 1044 "hlds_out_pred.m"
        else
#line 1039 "hlds_out_pred.m"
          {
#line 1039 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ArgLives_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeArgLives_28, (MR_Integer) 0)));

#line 1040 "hlds_out_pred.m"
            {
#line 1040 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 1041 "hlds_out_pred.m"
            {
#line 1041 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% arg lives: ");
            }
#line 1042 "hlds_out_pred.m"
            {
#line 1042 "hlds_out_pred.m"
              mercury__io__print_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[2], ((MR_Box) (hlds__hlds_out__hlds_out_pred__ArgLives_90)));
            }
#line 1043 "hlds_out_pred.m"
            {
#line 1043 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 1039 "hlds_out_pred.m"
          }
#line 1047 "hlds_out_pred.m"
        {
#line 1047 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__RegR_HeadVars_29);
        }
#line 1053 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1048 "hlds_out_pred.m"
          {
#line 1048 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_218_218;
#line 1048 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_220_220;

#line 1048 "hlds_out_pred.m"
            {
#line 1048 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 1049 "hlds_out_pred.m"
            {
#line 1049 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% reg_r headvars: ");
            }
#line 1050 "hlds_out_pred.m"
            {
#line 1050 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_218_218 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__RegR_HeadVars_29);
            }
#line 1051 "hlds_out_pred.m"
            {
#line 1051 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_220_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1051 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_220_220, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[1]));
#line 1051 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_220_220, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_proc_10_p_0_1));
#line 1051 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_220_220, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1051 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_220_220, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__AppendVarNums_13));
#line 1051 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_220_220, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_25));
#line 1051 "hlds_out_pred.m"
            }
#line 1050 "hlds_out_pred.m"
            {
#line 1050 "hlds_out_pred.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_245_245, hlds__hlds_out__hlds_out_pred__V_218_218, (MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_220_220);
            }
#line 1052 "hlds_out_pred.m"
            {
#line 1052 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 1048 "hlds_out_pred.m"
          }
#line 1053 "hlds_out_pred.m"
        else
#line 1053 "hlds_out_pred.m"
          {
#line 1053 "hlds_out_pred.m"
          }
#line 1057 "hlds_out_pred.m"
        {
#line 1057 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_48, (MR_Char) 65);
        }
#line 1057 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1057 "hlds_out_pred.m"
          {
#line 1058 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__MaybeArgInfos_30)) == (MR_mktag((MR_Integer) 1)));
#line 1058 "hlds_out_pred.m"
            if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1058 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__ArgInfos_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeArgInfos_30, (MR_Integer) 0)));
#line 1057 "hlds_out_pred.m"
          }
#line 1064 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1060 "hlds_out_pred.m"
          {
#line 1060 "hlds_out_pred.m"
            {
#line 1060 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 1061 "hlds_out_pred.m"
            {
#line 1061 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% arg_infos: ");
            }
#line 1062 "hlds_out_pred.m"
            {
#line 1062 "hlds_out_pred.m"
              mercury__io__print_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[3], ((MR_Box) (hlds__hlds_out__hlds_out_pred__ArgInfos_91)));
            }
#line 1063 "hlds_out_pred.m"
            {
#line 1063 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 1060 "hlds_out_pred.m"
          }
#line 1064 "hlds_out_pred.m"
        else
#line 1064 "hlds_out_pred.m"
          {
#line 1064 "hlds_out_pred.m"
          }
#line 1068 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__ImportStatus_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1068 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1068 "hlds_out_pred.m"
          {
#line 1069 "hlds_out_pred.m"
            {
#line 1069 "hlds_out_pred.m"
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&hlds__hlds_out__hlds_out_pred__V_258_258);
            }
#line 1069 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__ProcId_16 == hlds__hlds_out__hlds_out_pred__V_258_258);
#line 1068 "hlds_out_pred.m"
          }
#line 1072 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1072 "hlds_out_pred.m"
          {
#line 1072 "hlds_out_pred.m"
          }
#line 1072 "hlds_out_pred.m"
        else
#line 1073 "hlds_out_pred.m"
          {
#line 1073 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__StackSlots_92;
#line 1073 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_93;

#line 1073 "hlds_out_pred.m"
            {
#line 1073 "hlds_out_pred.m"
              hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(hlds__hlds_out__hlds_out_pred__Proc_18, &hlds__hlds_out__hlds_out_pred__StackSlots_92);
            }
#line 1074 "hlds_out_pred.m"
            {
#line 1074 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 1075 "hlds_out_pred.m"
            {
#line 1075 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__StackSlots_92, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13);
            }
#line 1076 "hlds_out_pred.m"
            {
#line 1076 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 1077 "hlds_out_pred.m"
            {
#line 1077 "hlds_out_pred.m"
              mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__HeadVars_26, &hlds__hlds_out__hlds_out_pred__HeadTerms_93);
            }
#line 1078 "hlds_out_pred.m"
            {
#line 1078 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_14, hlds__hlds_out__hlds_out_pred__PredId_15, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__HeadTerms_93, hlds__hlds_out__hlds_out_pred__PredOrFunc_86);
            }
#line 1080 "hlds_out_pred.m"
            {
#line 1080 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) " :-\n");
            }
#line 1081 "hlds_out_pred.m"
            {
#line 1081 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(hlds__hlds_out__hlds_out_pred__Info_11, hlds__hlds_out__hlds_out_pred__Goal_31, hlds__hlds_out__hlds_out_pred__ModuleInfo_14, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__AppendVarNums_13, hlds__hlds_out__hlds_out_pred__Indent1_47, (MR_String) ".\n");
#line 1081 "hlds_out_pred.m"
              return;
            }
#line 1073 "hlds_out_pred.m"
          }
#line 835 "hlds_out_pred.m"
      }
#line 1084 "hlds_out_pred.m"
    else
#line 1084 "hlds_out_pred.m"
      {
#line 1084 "hlds_out_pred.m"
      }
#line 803 "hlds_out_pred.m"
  }
#line 47 "hlds_out_pred.m"
}

#line 444 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_14_p_0_1(
#line 444 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 444 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1)
#line 444 "hlds_out_pred.m"
{
#line 444 "hlds_out_pred.m"
  {
#line 444 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 444 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
#line 444 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2;

#line 444 "hlds_out_pred.m"
    {
#line 444 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2 = hlds__hlds_pred__proc_id_to_int_1_f_0(((MR_Integer) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
#line 444 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2));
#line 444 "hlds_out_pred.m"
    return hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 444 "hlds_out_pred.m"
  }
#line 444 "hlds_out_pred.m"
}

#line 39 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_14_p_0(
#line 39 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_15,
#line 39 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_16,
#line 39 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_17,
#line 39 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_18,
#line 39 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_19,
#line 39 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_20,
#line 39 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_21,
#line 39 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_22,
#line 39 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_23,
#line 39 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Clause_24,
#line 39 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__UseDeclaredModes_25,
#line 39 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_26)
#line 39 "hlds_out_pred.m"
{
#line 432 "hlds_out_pred.m"
  {
#line 432 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 432 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ApplicableModes_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_24, (MR_Integer) 0)));
#line 432 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Goal_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_24, (MR_Integer) 1)));
#line 432 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ImplLang_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_24, (MR_Integer) 2)));
#line 432 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_24, (MR_Integer) 3)));
#line 432 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__Indent1_33 = (hlds__hlds_out__hlds_out_pred__Indent_17 + (MR_Integer) 1);
#line 432 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__DumpOptions_34 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 0)));
#line 432 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_38;
#line 432 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__AllProcIds_39;
#line 433 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred___StateVarWarnings_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_24, (MR_Integer) 4)));
#line 436 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 1)));
#line 436 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 2)));
#line 436 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 3)));
#line 436 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 4)));
#line 472 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__SelectedProcIds_40;
#line 463 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_76_76;
#line 476 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_59_59;
#line 476 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_60_60;
#line 476 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_61_61;
#line 476 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred___GoalInfo_41;

#line 439 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__ApplicableModes_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 438 "hlds_out_pred.m"
      {
#line 438 "hlds_out_pred.m"
      }
#line 439 "hlds_out_pred.m"
    else
#line 440 "hlds_out_pred.m"
      {
#line 440 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__Modes_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__ApplicableModes_28, (MR_Integer) 0)));

#line 441 "hlds_out_pred.m"
        {
#line 441 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_34, (MR_Char) 109);
        }
#line 447 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 442 "hlds_out_pred.m"
          {
#line 442 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_72_72;
#line 442 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ModeInts_36;

#line 442 "hlds_out_pred.m"
            {
#line 442 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_17);
            }
#line 443 "hlds_out_pred.m"
            {
#line 443 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% Modes for which this clause applies: ");
            }
#line 6955 "hlds.hlds_out.hlds_out_pred.c"
            hlds__hlds_out__hlds_out_pred__TypeCtorInfo_72_72 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 444 "hlds_out_pred.m"
            {
#line 444 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__ModeInts_36 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_72_72, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_72_72, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[2], hlds__hlds_out__hlds_out_pred__Modes_35);
            }
#line 445 "hlds_out_pred.m"
            {
#line 445 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(hlds__hlds_out__hlds_out_pred__ModeInts_36);
            }
#line 446 "hlds_out_pred.m"
            {
#line 446 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 442 "hlds_out_pred.m"
          }
#line 447 "hlds_out_pred.m"
        else
#line 447 "hlds_out_pred.m"
          {
#line 447 "hlds_out_pred.m"
          }
#line 440 "hlds_out_pred.m"
      }
#line 453 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__ImplLang_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 452 "hlds_out_pred.m"
      {
#line 452 "hlds_out_pred.m"
      }
#line 453 "hlds_out_pred.m"
    else
#line 454 "hlds_out_pred.m"
      {
#line 454 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ForeignLang_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__ImplLang_30, (MR_Integer) 0)));

#line 455 "hlds_out_pred.m"
        {
#line 455 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% Language of implementation: ");
        }
#line 456 "hlds_out_pred.m"
        {
#line 456 "hlds_out_pred.m"
          mercury__io__write_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__ForeignLang_37)));
        }
#line 457 "hlds_out_pred.m"
        {
#line 457 "hlds_out_pred.m"
          mercury__io__nl_2_p_0();
        }
#line 454 "hlds_out_pred.m"
      }
#line 459 "hlds_out_pred.m"
    {
#line 459 "hlds_out_pred.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_18, hlds__hlds_out__hlds_out_pred__PredId_19, &hlds__hlds_out__hlds_out_pred__PredInfo_38);
    }
#line 460 "hlds_out_pred.m"
    {
#line 460 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__AllProcIds_39 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_38);
    }
#line 462 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__ApplicableModes_28)) == (MR_mktag((MR_Integer) 1)));
#line 462 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 462 "hlds_out_pred.m"
      {
#line 462 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__SelectedProcIds_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__ApplicableModes_28, (MR_Integer) 0)));
#line 7030 "hlds.hlds_out.hlds_out_pred.c"
        hlds__hlds_out__hlds_out_pred__TypeInfo_76_76 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[7];
#line 463 "hlds_out_pred.m"
        {
#line 463 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_76_76, ((MR_Box) (hlds__hlds_out__hlds_out_pred__SelectedProcIds_40)), ((MR_Box) (hlds__hlds_out__hlds_out_pred__AllProcIds_39)));
        }
#line 463 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__succeeded = !(hlds__hlds_out__hlds_out_pred__succeeded);
#line 462 "hlds_out_pred.m"
      }
#line 472 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 469 "hlds_out_pred.m"
      {
#line 469 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_18, hlds__hlds_out__hlds_out_pred__Lang_16, hlds__hlds_out__hlds_out_pred__Context_31, hlds__hlds_out__hlds_out_pred__PredId_19, hlds__hlds_out__hlds_out_pred__SelectedProcIds_40, hlds__hlds_out__hlds_out_pred__VarSet_20, hlds__hlds_out__hlds_out_pred__AppendVarNums_21, hlds__hlds_out__hlds_out_pred__HeadTerms_22, hlds__hlds_out__hlds_out_pred__PredOrFunc_23, hlds__hlds_out__hlds_out_pred__UseDeclaredModes_25);
      }
#line 472 "hlds_out_pred.m"
    else
#line 473 "hlds_out_pred.m"
      {
#line 473 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_18, hlds__hlds_out__hlds_out_pred__PredId_19, hlds__hlds_out__hlds_out_pred__VarSet_20, hlds__hlds_out__hlds_out_pred__AppendVarNums_21, hlds__hlds_out__hlds_out_pred__HeadTerms_22, hlds__hlds_out__hlds_out_pred__PredOrFunc_23);
      }
#line 476 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Goal_29, (MR_Integer) 0)));
#line 476 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred___GoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Goal_29, (MR_Integer) 1)));
#line 476 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__V_59_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__V_59_59, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 476 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 476 "hlds_out_pred.m"
      {
#line 476 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__V_59_59, (MR_Integer) 1)));
#line 476 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__V_59_59, (MR_Integer) 2)));
#line 476 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__V_60_60 == (MR_Integer) 0);
#line 476 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 476 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "hlds_out_pred.m"
      }
#line 478 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 477 "hlds_out_pred.m"
      {
#line 477 "hlds_out_pred.m"
        {
#line 477 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 477 "hlds_out_pred.m"
          return;
        }
#line 477 "hlds_out_pred.m"
      }
#line 478 "hlds_out_pred.m"
    else
#line 479 "hlds_out_pred.m"
      {
#line 479 "hlds_out_pred.m"
        {
#line 479 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) " :-\n");
        }
#line 480 "hlds_out_pred.m"
        {
#line 480 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_pred__Info_15, hlds__hlds_out__hlds_out_pred__Goal_29, hlds__hlds_out__hlds_out_pred__ModuleInfo_18, hlds__hlds_out__hlds_out_pred__VarSet_20, hlds__hlds_out__hlds_out_pred__AppendVarNums_21, hlds__hlds_out__hlds_out_pred__Indent1_33, (MR_String) ".\n", hlds__hlds_out__hlds_out_pred__TypeQual_26);
#line 480 "hlds_out_pred.m"
          return;
        }
#line 479 "hlds_out_pred.m"
      }
#line 432 "hlds_out_pred.m"
  }
#line 39 "hlds_out_pred.m"
}

#line 233 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1(
#line 233 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 233 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 233 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 233 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 233 "hlds_out_pred.m"
{
#line 233 "hlds_out_pred.m"
  {
#line 233 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 233 "hlds_out_pred.m"
    {
#line 233 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 233 "hlds_out_pred.m"
      return;
    }
#line 233 "hlds_out_pred.m"
  }
#line 233 "hlds_out_pred.m"
}

#line 32 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(
#line 32 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_9,
#line 32 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_10,
#line 32 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_11,
#line 32 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_12,
#line 32 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_13,
#line 32 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_14)
#line 32 "hlds_out_pred.m"
{
#line 106 "hlds_out_pred.m"
  {
#line 106 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Module_16;
#line 106 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__PredName_17;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_18;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ArgTypes_19;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ExistQVars_20;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_21;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ClausesInfo_22;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Context_23;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ImportStatus_24;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Markers_25;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ClassContext_26;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ProofMap_27;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ConstraintMap_28;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Purity_29;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadTypeParams_30;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemap_31;
#line 106 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__DumpOptions_32;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__AppendVarNums_33;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarSet_36;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_39;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_40;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ClausesRep_41;
#line 106 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_43;
#line 123 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_221_221;
#line 123 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_222_222;
#line 123 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_223_223;
#line 123 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_224_224;
#line 146 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_37_37;
#line 146 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_38_38;
#line 146 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred___ItemNumbers_42;
#line 146 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred___HaveForeignClauses_44;

#line 107 "hlds_out_pred.m"
    {
#line 107 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__Module_16 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_14);
    }
#line 108 "hlds_out_pred.m"
    {
#line 108 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__PredName_17 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_14);
    }
#line 109 "hlds_out_pred.m"
    {
#line 109 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_14);
    }
#line 110 "hlds_out_pred.m"
    {
#line 110 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ArgTypes_19);
    }
#line 111 "hlds_out_pred.m"
    {
#line 111 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ExistQVars_20);
    }
#line 112 "hlds_out_pred.m"
    {
#line 112 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__TVarSet_21);
    }
#line 113 "hlds_out_pred.m"
    {
#line 113 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ClausesInfo_22);
    }
#line 114 "hlds_out_pred.m"
    {
#line 114 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__Context_23);
    }
#line 115 "hlds_out_pred.m"
    {
#line 115 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ImportStatus_24);
    }
#line 116 "hlds_out_pred.m"
    {
#line 116 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__Markers_25);
    }
#line 117 "hlds_out_pred.m"
    {
#line 117 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ClassContext_26);
    }
#line 118 "hlds_out_pred.m"
    {
#line 118 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ProofMap_27);
    }
#line 119 "hlds_out_pred.m"
    {
#line 119 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ConstraintMap_28);
    }
#line 120 "hlds_out_pred.m"
    {
#line 120 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__Purity_29);
    }
#line 121 "hlds_out_pred.m"
    {
#line 121 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__HeadTypeParams_30);
    }
#line 122 "hlds_out_pred.m"
    {
#line 122 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__VarNameRemap_31);
    }
#line 123 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__DumpOptions_32 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 0)));
#line 123 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_221_221 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 1)));
#line 123 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 2)));
#line 123 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 3)));
#line 123 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 4)));
#line 124 "hlds_out_pred.m"
    {
#line 124 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_32, (MR_Char) 118);
    }
#line 126 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 125 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__AppendVarNums_33 = (MR_Integer) 1;
#line 126 "hlds_out_pred.m"
    else
#line 127 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__AppendVarNums_33 = (MR_Integer) 0;
#line 129 "hlds_out_pred.m"
    {
#line 129 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_32, (MR_Char) 67);
    }
#line 143 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 136 "hlds_out_pred.m"
#line 136 "hlds_out_pred.m"
      switch (hlds__hlds_out__hlds_out_pred__PredOrFunc_18) {
#line 136 "hlds_out_pred.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 136 "hlds_out_pred.m"
        case (MR_Integer) 1:
#line 137 "hlds_out_pred.m"
          {
#line 137 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__FuncArgTypes_34;
#line 137 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__FuncRetType_35;
#line 137 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_100_100;
#line 138 "hlds_out_pred.m"
            MR_Box hlds__hlds_out__hlds_out_pred__conv0_FuncRetType_35;

#line 138 "hlds_out_pred.m"
            {
#line 138 "hlds_out_pred.m"
              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_out__hlds_out_pred__ArgTypes_19, &hlds__hlds_out__hlds_out_pred__FuncArgTypes_34, &hlds__hlds_out__hlds_out_pred__conv0_FuncRetType_35);
            }
#line 138 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__FuncRetType_35 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_FuncRetType_35);
#line 140 "hlds_out_pred.m"
            {
#line 140 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 140 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_100_100, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Module_16));
#line 140 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_100_100, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_17));
#line 140 "hlds_out_pred.m"
            }
#line 139 "hlds_out_pred.m"
            {
#line 139 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__mercury_output_func_type_12_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__ExistQVars_20, hlds__hlds_out__hlds_out_pred__V_100_100, hlds__hlds_out__hlds_out_pred__FuncArgTypes_34, hlds__hlds_out__hlds_out_pred__FuncRetType_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_pred__Purity_29, hlds__hlds_out__hlds_out_pred__ClassContext_26, hlds__hlds_out__hlds_out_pred__Context_23, hlds__hlds_out__hlds_out_pred__AppendVarNums_33);
            }
#line 137 "hlds_out_pred.m"
          }
#line 136 "hlds_out_pred.m"
          break;
#line 136 "hlds_out_pred.m"
        case (MR_Integer) 0:
#line 132 "hlds_out_pred.m"
          {
#line 132 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_103_103;

#line 134 "hlds_out_pred.m"
            {
#line 134 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 134 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_103_103, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Module_16));
#line 134 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_103_103, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_17));
#line 134 "hlds_out_pred.m"
            }
#line 133 "hlds_out_pred.m"
            {
#line 133 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__mercury_output_pred_type_11_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__ExistQVars_20, hlds__hlds_out__hlds_out_pred__V_103_103, hlds__hlds_out__hlds_out_pred__ArgTypes_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_pred__Purity_29, hlds__hlds_out__hlds_out_pred__ClassContext_26, hlds__hlds_out__hlds_out_pred__Context_23, hlds__hlds_out__hlds_out_pred__AppendVarNums_33);
            }
#line 132 "hlds_out_pred.m"
          }
#line 136 "hlds_out_pred.m"
          break;
#line 136 "hlds_out_pred.m"
      }
#line 143 "hlds_out_pred.m"
    else
#line 143 "hlds_out_pred.m"
      {
#line 143 "hlds_out_pred.m"
      }
#line 146 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__VarSet_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 0)));
#line 146 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 1)));
#line 146 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 2)));
#line 146 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__VarTypes_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 3)));
#line 146 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__HeadVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 4)));
#line 146 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__ClausesRep_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 5)));
#line 146 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred___ItemNumbers_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 6)));
#line 146 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__RttiVarMaps_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 7)));
#line 146 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred___HaveForeignClauses_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 8)));
#line 148 "hlds_out_pred.m"
    {
#line 148 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_32, (MR_Char) 67);
    }
#line 349 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 149 "hlds_out_pred.m"
      {
#line 149 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__PredInt_45;
#line 149 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__GoalType_46;
#line 149 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__MarkerList_47;
#line 149 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapList_52;
#line 149 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__Clauses_55;
#line 149 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__Origin_59;
#line 149 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_116_116;

#line 149 "hlds_out_pred.m"
        {
#line 149 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_11);
        }
#line 150 "hlds_out_pred.m"
        {
#line 150 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% pred id: ");
        }
#line 151 "hlds_out_pred.m"
        {
#line 151 "hlds_out_pred.m"
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__PredId_13, &hlds__hlds_out__hlds_out_pred__PredInt_45);
        }
#line 152 "hlds_out_pred.m"
        {
#line 152 "hlds_out_pred.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__PredInt_45);
        }
#line 153 "hlds_out_pred.m"
        {
#line 153 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ", category: ");
        }
#line 154 "hlds_out_pred.m"
        {
#line 154 "hlds_out_pred.m"
          parse_tree__prog_out__write_pred_or_func_3_p_0(hlds__hlds_out__hlds_out_pred__PredOrFunc_18);
        }
#line 155 "hlds_out_pred.m"
        {
#line 155 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ", status: ");
        }
#line 156 "hlds_out_pred.m"
        {
#line 156 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_116_116 = hlds__hlds_out__hlds_out_pred__import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__ImportStatus_24);
        }
#line 156 "hlds_out_pred.m"
        {
#line 156 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_116_116);
        }
#line 157 "hlds_out_pred.m"
        {
#line 157 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 158 "hlds_out_pred.m"
        {
#line 158 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% goal_type: ");
        }
#line 159 "hlds_out_pred.m"
        {
#line 159 "hlds_out_pred.m"
          hlds__hlds_pred__pred_info_get_goal_type_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__GoalType_46);
        }
#line 160 "hlds_out_pred.m"
        {
#line 160 "hlds_out_pred.m"
          mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_goal_type_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__GoalType_46)));
        }
#line 161 "hlds_out_pred.m"
        {
#line 161 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 162 "hlds_out_pred.m"
        {
#line 162 "hlds_out_pred.m"
          hlds__hlds_pred__markers_to_marker_list_2_p_0(hlds__hlds_out__hlds_out_pred__Markers_25, &hlds__hlds_out__hlds_out_pred__MarkerList_47);
        }
#line 165 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MarkerList_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "hlds_out_pred.m"
          {
#line 164 "hlds_out_pred.m"
          }
#line 165 "hlds_out_pred.m"
        else
#line 166 "hlds_out_pred.m"
          {
#line 167 "hlds_out_pred.m"
            {
#line 167 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% markers: ");
            }
#line 168 "hlds_out_pred.m"
            {
#line 168 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0(hlds__hlds_out__hlds_out_pred__MarkerList_47);
            }
#line 169 "hlds_out_pred.m"
            {
#line 169 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 166 "hlds_out_pred.m"
          }
#line 171 "hlds_out_pred.m"
        {
#line 171 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(hlds__hlds_out__hlds_out_pred__Indent_11, hlds__hlds_out__hlds_out_pred__AppendVarNums_33, hlds__hlds_out__hlds_out_pred__RttiVarMaps_43, hlds__hlds_out__hlds_out_pred__VarSet_36, hlds__hlds_out__hlds_out_pred__TVarSet_21);
        }
#line 173 "hlds_out_pred.m"
        {
#line 173 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, hlds__hlds_out__hlds_out_pred__ProofMap_27);
        }
#line 175 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 175 "hlds_out_pred.m"
          {
#line 175 "hlds_out_pred.m"
          }
#line 175 "hlds_out_pred.m"
        else
#line 177 "hlds_out_pred.m"
          {
#line 176 "hlds_out_pred.m"
            {
#line 176 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0(hlds__hlds_out__hlds_out_pred__Indent_11, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__ProofMap_27, hlds__hlds_out__hlds_out_pred__AppendVarNums_33);
            }
#line 178 "hlds_out_pred.m"
            {
#line 178 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 177 "hlds_out_pred.m"
          }
#line 180 "hlds_out_pred.m"
        {
#line 180 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_out__hlds_out_pred__ConstraintMap_28);
        }
#line 182 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 182 "hlds_out_pred.m"
          {
#line 182 "hlds_out_pred.m"
          }
#line 182 "hlds_out_pred.m"
        else
#line 183 "hlds_out_pred.m"
          {
#line 183 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(hlds__hlds_out__hlds_out_pred__Indent_11, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__ConstraintMap_28, hlds__hlds_out__hlds_out_pred__AppendVarNums_33);
          }
#line 193 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__HeadTypeParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "hlds_out_pred.m"
          {
#line 194 "hlds_out_pred.m"
          }
#line 193 "hlds_out_pred.m"
        else
#line 188 "hlds_out_pred.m"
          {
#line 189 "hlds_out_pred.m"
            {
#line 189 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% head_type_params:\n");
            }
#line 190 "hlds_out_pred.m"
            {
#line 190 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% ");
            }
#line 191 "hlds_out_pred.m"
            {
#line 191 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__AppendVarNums_33, hlds__hlds_out__hlds_out_pred__HeadTypeParams_30);
            }
#line 192 "hlds_out_pred.m"
            {
#line 192 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 188 "hlds_out_pred.m"
          }
#line 196 "hlds_out_pred.m"
        {
#line 196 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(hlds__hlds_out__hlds_out_pred__Indent_11, hlds__hlds_out__hlds_out_pred__VarSet_36, hlds__hlds_out__hlds_out_pred__AppendVarNums_33, hlds__hlds_out__hlds_out_pred__VarTypes_39, hlds__hlds_out__hlds_out_pred__TVarSet_21);
        }
#line 198 "hlds_out_pred.m"
        {
#line 198 "hlds_out_pred.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_pred__VarNameRemap_31, &hlds__hlds_out__hlds_out_pred__VarNameRemapList_52);
        }
#line 201 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__VarNameRemapList_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "hlds_out_pred.m"
          {
#line 200 "hlds_out_pred.m"
          }
#line 201 "hlds_out_pred.m"
        else
#line 202 "hlds_out_pred.m"
          {
#line 202 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapHead_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarNameRemapList_52, (MR_Integer) 0)));
#line 202 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapTail_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarNameRemapList_52, (MR_Integer) 1)));

#line 203 "hlds_out_pred.m"
            {
#line 203 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_11);
            }
#line 204 "hlds_out_pred.m"
            {
#line 204 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% var name remap: ");
            }
#line 205 "hlds_out_pred.m"
            {
#line 205 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(hlds__hlds_out__hlds_out_pred__VarNameRemapHead_53, hlds__hlds_out__hlds_out_pred__VarNameRemapTail_54, hlds__hlds_out__hlds_out_pred__VarSet_36);
            }
#line 207 "hlds_out_pred.m"
            {
#line 207 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 202 "hlds_out_pred.m"
          }
#line 210 "hlds_out_pred.m"
        {
#line 210 "hlds_out_pred.m"
          hlds__hlds_clauses__get_clause_list_2_p_0(hlds__hlds_out__hlds_out_pred__ClausesRep_41, &hlds__hlds_out__hlds_out_pred__Clauses_55);
        }
#line 217 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__Clauses_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 218 "hlds_out_pred.m"
          {
#line 218 "hlds_out_pred.m"
          }
#line 217 "hlds_out_pred.m"
        else
#line 212 "hlds_out_pred.m"
          {
#line 212 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__InfoForClauses_58;

#line 213 "hlds_out_pred.m"
            {
#line 213 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(hlds__hlds_out__hlds_out_pred__Info_9, &hlds__hlds_out__hlds_out_pred__InfoForClauses_58);
            }
#line 214 "hlds_out_pred.m"
            {
#line 214 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(hlds__hlds_out__hlds_out_pred__InfoForClauses_58, hlds__hlds_out__hlds_out_pred__Lang_10, hlds__hlds_out__hlds_out_pred__Indent_11, hlds__hlds_out__hlds_out_pred__ModuleInfo_12, hlds__hlds_out__hlds_out_pred__PredId_13, hlds__hlds_out__hlds_out_pred__VarSet_36, hlds__hlds_out__hlds_out_pred__AppendVarNums_33, hlds__hlds_out__hlds_out_pred__HeadVars_40, hlds__hlds_out__hlds_out_pred__PredOrFunc_18, hlds__hlds_out__hlds_out_pred__Clauses_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
#line 212 "hlds_out_pred.m"
          }
#line 221 "hlds_out_pred.m"
        {
#line 221 "hlds_out_pred.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__Origin_59);
        }
#line 246 "hlds_out_pred.m"
#line 246 "hlds_out_pred.m"
        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Origin_59)) {
#line 246 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 246 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 247 "hlds_out_pred.m"
            {
#line 248 "hlds_out_pred.m"
              {
#line 248 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% special pred\n");
              }
#line 247 "hlds_out_pred.m"
            }
#line 246 "hlds_out_pred.m"
            break;
#line 246 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 223 "hlds_out_pred.m"
            {
#line 223 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_237_237;
#line 223 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__MethodConstraints_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));
#line 223 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__ClassId_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__MethodConstraints_61, (MR_Integer) 0)));
#line 223 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__InstanceTypes_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__MethodConstraints_61, (MR_Integer) 1)));
#line 223 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__InstanceConstraints_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__MethodConstraints_61, (MR_Integer) 2)));
#line 223 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__ClassMethodConstraints_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__MethodConstraints_61, (MR_Integer) 3)));
#line 223 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__ClassName_66;
#line 223 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__MethodUnivConstraints_68;
#line 223 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__MethodExistConstraints_69;
#line 223 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__V_197_197;
#line 223 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__V_203_203;
#line 223 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)));
#line 227 "hlds_out_pred.m"
              MR_Integer hlds__hlds_out__hlds_out_pred__V_67_67;

#line 226 "hlds_out_pred.m"
              {
#line 226 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% instance method constraints:\n");
              }
#line 227 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__ClassName_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClassId_62, (MR_Integer) 0)));
#line 227 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClassId_62, (MR_Integer) 1)));
#line 229 "hlds_out_pred.m"
              {
#line 229 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__V_197_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 229 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_197_197, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__ClassName_66));
#line 229 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_197_197, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__InstanceTypes_63));
#line 229 "hlds_out_pred.m"
              }
#line 228 "hlds_out_pred.m"
              {
#line 228 "hlds_out_pred.m"
                parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__AppendVarNums_33, hlds__hlds_out__hlds_out_pred__V_197_197);
              }
#line 230 "hlds_out_pred.m"
              {
#line 230 "hlds_out_pred.m"
                mercury__io__nl_2_p_0();
              }
#line 231 "hlds_out_pred.m"
              {
#line 231 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "instance constraints: ");
              }
#line 233 "hlds_out_pred.m"
              {
#line 233 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__V_203_203 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 233 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_203_203, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]));
#line 233 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_203_203, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1));
#line 233 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_203_203, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 233 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_203_203, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_21));
#line 233 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_203_203, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__AppendVarNums_33));
#line 233 "hlds_out_pred.m"
              }
#line 7822 "hlds.hlds_out.hlds_out_pred.c"
              hlds__hlds_out__hlds_out_pred__TypeCtorInfo_237_237 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 232 "hlds_out_pred.m"
              {
#line 232 "hlds_out_pred.m"
                mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_237_237, hlds__hlds_out__hlds_out_pred__InstanceConstraints_64, (MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_203_203);
              }
#line 234 "hlds_out_pred.m"
              {
#line 234 "hlds_out_pred.m"
                mercury__io__nl_2_p_0();
              }
#line 236 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MethodUnivConstraints_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClassMethodConstraints_65, (MR_Integer) 0)));
#line 236 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MethodExistConstraints_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClassMethodConstraints_65, (MR_Integer) 1)));
#line 238 "hlds_out_pred.m"
              {
#line 238 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "method univ constraints: ");
              }
#line 239 "hlds_out_pred.m"
              {
#line 239 "hlds_out_pred.m"
                mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_237_237, hlds__hlds_out__hlds_out_pred__MethodUnivConstraints_68, (MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_203_203);
              }
#line 241 "hlds_out_pred.m"
              {
#line 241 "hlds_out_pred.m"
                mercury__io__nl_2_p_0();
              }
#line 242 "hlds_out_pred.m"
              {
#line 242 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "method exist constraints: ");
              }
#line 243 "hlds_out_pred.m"
              {
#line 243 "hlds_out_pred.m"
                mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_237_237, hlds__hlds_out__hlds_out_pred__MethodExistConstraints_69, (MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_203_203);
              }
#line 245 "hlds_out_pred.m"
              {
#line 245 "hlds_out_pred.m"
                mercury__io__nl_2_p_0();
              }
#line 223 "hlds_out_pred.m"
            }
#line 246 "hlds_out_pred.m"
            break;
#line 246 "hlds_out_pred.m"
          case (MR_Integer) 2:
#line 250 "hlds_out_pred.m"
            {
#line 250 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__Transformation_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)));
#line 250 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__OrigPredId_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 2)));
#line 250 "hlds_out_pred.m"
              MR_Integer hlds__hlds_out__hlds_out_pred__OrigPredIdNum_74;
#line 250 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_249_249;
#line 250 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));

#line 251 "hlds_out_pred.m"
              {
#line 251 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__OrigPredIdNum_74 = hlds__hlds_pred__pred_id_to_int_1_f_0(hlds__hlds_out__hlds_out_pred__OrigPredId_73);
              }
#line 252 "hlds_out_pred.m"
              {
#line 252 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% transformed from pred id ");
              }
#line 253 "hlds_out_pred.m"
              {
#line 253 "hlds_out_pred.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0], hlds__hlds_out__hlds_out_pred__OrigPredIdNum_74, &hlds__hlds_out__hlds_out_pred__V_249_249);
              }
#line 253 "hlds_out_pred.m"
              {
#line 253 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_249_249);
              }
#line 252 "hlds_out_pred.m"
              {
#line 252 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 254 "hlds_out_pred.m"
              {
#line 254 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% ");
              }
#line 255 "hlds_out_pred.m"
              {
#line 255 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_12, hlds__hlds_out__hlds_out_pred__OrigPredId_73);
              }
#line 256 "hlds_out_pred.m"
              {
#line 256 "hlds_out_pred.m"
                mercury__io__nl_2_p_0();
              }
#line 257 "hlds_out_pred.m"
              {
#line 257 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% transformation: ");
              }
#line 258 "hlds_out_pred.m"
              {
#line 258 "hlds_out_pred.m"
                mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_transformation_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__Transformation_71)));
              }
#line 259 "hlds_out_pred.m"
              {
#line 259 "hlds_out_pred.m"
                mercury__io__nl_2_p_0();
              }
#line 250 "hlds_out_pred.m"
            }
#line 246 "hlds_out_pred.m"
            break;
#line 246 "hlds_out_pred.m"
          case (MR_Integer) 3:
#line 246 "hlds_out_pred.m"
#line 246 "hlds_out_pred.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)))) {
#line 246 "hlds_out_pred.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 246 "hlds_out_pred.m"
              case (MR_Integer) 0:
#line 261 "hlds_out_pred.m"
                {
#line 261 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__Creation_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));

#line 262 "hlds_out_pred.m"
                  {
#line 262 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "% created: ");
                  }
#line 263 "hlds_out_pred.m"
                  {
#line 263 "hlds_out_pred.m"
                    mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_creation_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__Creation_75)));
                  }
#line 264 "hlds_out_pred.m"
                  {
#line 264 "hlds_out_pred.m"
                    mercury__io__nl_2_p_0();
                  }
#line 261 "hlds_out_pred.m"
                }
#line 246 "hlds_out_pred.m"
                break;
#line 246 "hlds_out_pred.m"
              case (MR_Integer) 1:
#line 266 "hlds_out_pred.m"
                {
#line 267 "hlds_out_pred.m"
                  {
#line 267 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "% assertion\n");
                  }
#line 266 "hlds_out_pred.m"
                }
#line 246 "hlds_out_pred.m"
                break;
#line 246 "hlds_out_pred.m"
              case (MR_Integer) 2:
#line 345 "hlds_out_pred.m"
                {
#line 345 "hlds_out_pred.m"
                }
#line 246 "hlds_out_pred.m"
                break;
#line 246 "hlds_out_pred.m"
              case (MR_Integer) 3:
#line 270 "hlds_out_pred.m"
                {
#line 270 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorSymName_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));
#line 270 "hlds_out_pred.m"
                  MR_Integer hlds__hlds_out__hlds_out_pred__TypeCtorArity_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 2)));
#line 270 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__SolverAuxPredKind_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 3)));
#line 270 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__TypeCtorStr_81;
#line 270 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__SolverAuxPredKindStr_82;
#line 270 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__V_166_166;
#line 270 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__V_281_281;
#line 270 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__V_287_287;
#line 270 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__V_291_291;

#line 272 "hlds_out_pred.m"
                  {
#line 272 "hlds_out_pred.m"
                    hlds__hlds_out__hlds_out_pred__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 272 "hlds_out_pred.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_166_166, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TypeCtorSymName_78));
#line 272 "hlds_out_pred.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_166_166, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TypeCtorArity_79));
#line 272 "hlds_out_pred.m"
                  }
#line 272 "hlds_out_pred.m"
                  {
#line 272 "hlds_out_pred.m"
                    hlds__hlds_out__hlds_out_pred__TypeCtorStr_81 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__V_166_166);
                  }
#line 276 "hlds_out_pred.m"
                  hlds__hlds_out__hlds_out_pred__SolverAuxPredKindStr_82 = ((&hlds__hlds_out__hlds_out_pred_vector_common_4[12 + hlds__hlds_out__hlds_out_pred__SolverAuxPredKind_80]))->hlds__hlds_out__hlds_out_pred__vector_common_type_4_0__vct_4_f_0;
#line 286 "hlds_out_pred.m"
                  {
#line 286 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "% ");
                  }
#line 8045 "hlds.hlds_out.hlds_out_pred.c"
                  hlds__hlds_out__hlds_out_pred__V_287_287 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0];
#line 287 "hlds_out_pred.m"
                  {
#line 287 "hlds_out_pred.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_287_287, hlds__hlds_out__hlds_out_pred__SolverAuxPredKindStr_82, &hlds__hlds_out__hlds_out_pred__V_281_281);
                  }
#line 287 "hlds_out_pred.m"
                  {
#line 287 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_281_281);
                  }
#line 286 "hlds_out_pred.m"
                  {
#line 286 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) " for ");
                  }
#line 287 "hlds_out_pred.m"
                  {
#line 287 "hlds_out_pred.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_287_287, hlds__hlds_out__hlds_out_pred__TypeCtorStr_81, &hlds__hlds_out__hlds_out_pred__V_291_291);
                  }
#line 287 "hlds_out_pred.m"
                  {
#line 287 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_291_291);
                  }
#line 286 "hlds_out_pred.m"
                  {
#line 286 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
#line 270 "hlds_out_pred.m"
                }
#line 246 "hlds_out_pred.m"
                break;
#line 246 "hlds_out_pred.m"
              case (MR_Integer) 4:
#line 289 "hlds_out_pred.m"
                {
#line 289 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__BasePredCallId_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));
#line 289 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__TablingAuxPredKind_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 2)));
#line 289 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__BasePredStr_85;
#line 289 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__TablingAuxPredKindStr_86;
#line 289 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__V_260_260;
#line 289 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__V_266_266;
#line 289 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__V_270_270;

#line 290 "hlds_out_pred.m"
                  {
#line 290 "hlds_out_pred.m"
                    hlds__hlds_out__hlds_out_pred__BasePredStr_85 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__BasePredCallId_83);
                  }
#line 294 "hlds_out_pred.m"
#line 294 "hlds_out_pred.m"
                  switch (hlds__hlds_out__hlds_out_pred__TablingAuxPredKind_84) {
#line 294 "hlds_out_pred.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 294 "hlds_out_pred.m"
                    case (MR_Integer) 1:
#line 296 "hlds_out_pred.m"
                      hlds__hlds_out__hlds_out_pred__TablingAuxPredKindStr_86 = (MR_String) "table reset predicate";
#line 294 "hlds_out_pred.m"
                      break;
#line 294 "hlds_out_pred.m"
                    case (MR_Integer) 0:
#line 293 "hlds_out_pred.m"
                      hlds__hlds_out__hlds_out_pred__TablingAuxPredKindStr_86 = (MR_String) "table statistics predicate";
#line 294 "hlds_out_pred.m"
                      break;
#line 294 "hlds_out_pred.m"
                  }
#line 298 "hlds_out_pred.m"
                  {
#line 298 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "% ");
                  }
#line 8129 "hlds.hlds_out.hlds_out_pred.c"
                  hlds__hlds_out__hlds_out_pred__V_266_266 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0];
#line 299 "hlds_out_pred.m"
                  {
#line 299 "hlds_out_pred.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_266_266, hlds__hlds_out__hlds_out_pred__TablingAuxPredKindStr_86, &hlds__hlds_out__hlds_out_pred__V_260_260);
                  }
#line 299 "hlds_out_pred.m"
                  {
#line 299 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_260_260);
                  }
#line 298 "hlds_out_pred.m"
                  {
#line 298 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) " for ");
                  }
#line 299 "hlds_out_pred.m"
                  {
#line 299 "hlds_out_pred.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_266_266, hlds__hlds_out__hlds_out_pred__BasePredStr_85, &hlds__hlds_out__hlds_out_pred__V_270_270);
                  }
#line 299 "hlds_out_pred.m"
                  {
#line 299 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_270_270);
                  }
#line 298 "hlds_out_pred.m"
                  {
#line 298 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
#line 289 "hlds_out_pred.m"
                }
#line 246 "hlds_out_pred.m"
                break;
#line 246 "hlds_out_pred.m"
              case (MR_Integer) 5:
#line 302 "hlds_out_pred.m"
                {
#line 302 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__MutableModuleName_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));
#line 302 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__MutableName_88 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 2)));
#line 302 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__MutablePredKind_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 3)));
#line 302 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__MutableModuleNameStr_90;
#line 302 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91;
#line 302 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__V_302_302;
#line 302 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__V_308_308;
#line 302 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__V_312_312;
#line 302 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__V_322_322;

#line 303 "hlds_out_pred.m"
                  {
#line 303 "hlds_out_pred.m"
                    hlds__hlds_out__hlds_out_pred__MutableModuleNameStr_90 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__MutableModuleName_87);
                  }
#line 307 "hlds_out_pred.m"
                  hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91 = ((&hlds__hlds_out__hlds_out_pred_vector_common_4[0 + hlds__hlds_out__hlds_out_pred__MutablePredKind_89]))->hlds__hlds_out__hlds_out_pred__vector_common_type_4_0__vct_4_f_0;
#line 341 "hlds_out_pred.m"
                  {
#line 341 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "% ");
                  }
#line 8200 "hlds.hlds_out.hlds_out_pred.c"
                  hlds__hlds_out__hlds_out_pred__V_308_308 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0];
#line 342 "hlds_out_pred.m"
                  {
#line 342 "hlds_out_pred.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_308_308, hlds__hlds_out__hlds_out_pred__MutablePredKindStr_91, &hlds__hlds_out__hlds_out_pred__V_302_302);
                  }
#line 342 "hlds_out_pred.m"
                  {
#line 342 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_302_302);
                  }
#line 341 "hlds_out_pred.m"
                  {
#line 341 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) " for mutable ");
                  }
#line 342 "hlds_out_pred.m"
                  {
#line 342 "hlds_out_pred.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_308_308, hlds__hlds_out__hlds_out_pred__MutableName_88, &hlds__hlds_out__hlds_out_pred__V_312_312);
                  }
#line 342 "hlds_out_pred.m"
                  {
#line 342 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_312_312);
                  }
#line 341 "hlds_out_pred.m"
                  {
#line 341 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) " in module ");
                  }
#line 343 "hlds_out_pred.m"
                  {
#line 343 "hlds_out_pred.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_308_308, hlds__hlds_out__hlds_out_pred__MutableModuleNameStr_90, &hlds__hlds_out__hlds_out_pred__V_322_322);
                  }
#line 343 "hlds_out_pred.m"
                  {
#line 343 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_322_322);
                  }
#line 341 "hlds_out_pred.m"
                  {
#line 341 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
#line 302 "hlds_out_pred.m"
                }
#line 246 "hlds_out_pred.m"
                break;
#line 246 "hlds_out_pred.m"
              case (MR_Integer) 6:
#line 346 "hlds_out_pred.m"
                {
#line 346 "hlds_out_pred.m"
                }
#line 246 "hlds_out_pred.m"
                break;
#line 246 "hlds_out_pred.m"
            }
#line 246 "hlds_out_pred.m"
            break;
#line 246 "hlds_out_pred.m"
        }
#line 149 "hlds_out_pred.m"
      }
#line 349 "hlds_out_pred.m"
    else
#line 349 "hlds_out_pred.m"
      {
#line 349 "hlds_out_pred.m"
      }
#line 352 "hlds_out_pred.m"
    {
#line 352 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_procs_9_p_0(hlds__hlds_out__hlds_out_pred__Info_9, hlds__hlds_out__hlds_out_pred__Indent_11, hlds__hlds_out__hlds_out_pred__AppendVarNums_33, hlds__hlds_out__hlds_out_pred__ModuleInfo_12, hlds__hlds_out__hlds_out_pred__PredId_13, hlds__hlds_out__hlds_out_pred__ImportStatus_24, hlds__hlds_out__hlds_out_pred__PredInfo_14);
    }
#line 354 "hlds_out_pred.m"
    {
#line 354 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 354 "hlds_out_pred.m"
      return;
    }
#line 106 "hlds_out_pred.m"
  }
#line 32 "hlds_out_pred.m"
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
