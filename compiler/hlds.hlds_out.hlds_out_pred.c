/*
** Automatically generated from `hlds_out_pred.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pragma.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 153 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 156 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 159 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 162 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 165 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_pred__type_ctor_info_table_locn_0;

#line 168 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 174 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 177 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 180 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 183 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 186 "hlds.hlds_out.hlds_out_pred.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_0;

#line 189 "hlds.hlds_out.hlds_out_pred.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_1;

#line 192 "hlds.hlds_out.hlds_out_pred.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_value_ordered_write_which_modes_0[2];

#line 195 "hlds.hlds_out.hlds_out_pred.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_name_ordered_write_which_modes_0[2];

#line 198 "hlds.hlds_out.hlds_out_pred.c"
static const MR_Integer hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__functor_number_map_write_which_modes_0[2];

#line 201 "hlds.hlds_out.hlds_out_pred.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0_10001(
#line 204 "hlds.hlds_out.hlds_out_pred.c"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 206 "hlds.hlds_out.hlds_out_pred.c"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2);

#line 209 "hlds.hlds_out.hlds_out_pred.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0_10001(
#line 212 "hlds.hlds_out.hlds_out_pred.c"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 214 "hlds.hlds_out.hlds_out_pred.c"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 216 "hlds.hlds_out.hlds_out_pred.c"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 1021 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__1021__1_5_p_0(
#line 1021 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_15,
#line 1021 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_25,
#line 1021 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_254);

#line 1307 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0_1(
#line 1307 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1307 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1307 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1307 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 1304 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0(
#line 1304 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Markers_4);

#line 1270 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(
#line 1270 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 1270 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_9,
#line 1270 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_10,
#line 1270 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ConstraintId_11,
#line 1270 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProgConstraint_12);

#line 1267 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1(
#line 1267 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1267 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1267 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1267 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1267 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_4);

#line 1261 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(
#line 1261 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_7,
#line 1261 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_8,
#line 1261 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 1261 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ConstraintMap_10);

#line 1179 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_p_0(
#line 1179 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1179 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_2);

#line 1163 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_p_0(
#line 1163 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1163 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ArgInfo_6);

#line 1136 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_p_0(
#line 1136 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1136 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_6);

#line 1116 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_p_0(
#line 1116 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__CoveragePointInfo_6,
#line 1116 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_11,
#line 1116 "hlds_out_pred.m"
  MR_Integer * hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_12);

#line 1080 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_p_0(
#line 1080 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6,
#line 1080 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_14,
#line 1080 "hlds_out_pred.m"
  MR_Integer * hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_15);

#line 1078 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_2(
#line 1078 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1078 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1078 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1078 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1078 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_4,
#line 1078 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_5);

#line 1077 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_1(
#line 1077 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1077 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1077 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1077 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1077 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_4,
#line 1077 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_5);

#line 1063 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0(
#line 1063 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcStatic_4);

#line 759 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(
#line 759 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_1,
#line 759 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_2,
#line 759 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_3,
#line 759 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredStatus_4,
#line 759 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_5,
#line 759 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcTable_6,
#line 759 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_7,
#line 759 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__8_8);

#line 738 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(
#line 738 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_6,
#line 738 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Head_7,
#line 738 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Tail_8);

#line 727 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(
#line 727 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 727 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_9,
#line 727 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_10,
#line 727 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__OldVar_11,
#line 727 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__NewVars_12);

#line 724 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0_1(
#line 724 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 724 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 724 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 724 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 724 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_4);

#line 717 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0(
#line 717 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_7,
#line 717 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_8,
#line 717 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 717 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__UntupleInfo_10);

#line 713 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0_1(
#line 713 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 713 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1);

#line 708 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(
#line 708 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_7,
#line 708 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_8,
#line 708 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 708 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__StackSlots_10);

#line 680 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(
#line 680 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 680 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_10,
#line 680 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_11,
#line 680 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_12,
#line 680 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_13,
#line 680 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Var_14);

#line 666 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(
#line 666 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 666 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_10,
#line 666 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_11,
#line 666 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_12,
#line 666 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_13,
#line 666 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Constraint_14);

#line 631 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_10,
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_11,
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_12,
#line 631 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_13,
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVar_14);

#line 628 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3(
#line 628 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 628 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 628 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 628 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 623 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_2(
#line 623 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 623 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 623 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 623 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 618 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_1(
#line 618 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 618 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 618 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 618 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 611 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_9,
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_10,
#line 611 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_11,
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_12);

#line 591 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(
#line 591 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_1,
#line 591 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeVarSet_2,
#line 591 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_3,
#line 591 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_4,
#line 591 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_5,
#line 591 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__6_6);

#line 579 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(
#line 579 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 579 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_9,
#line 579 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_10,
#line 579 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_11,
#line 579 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_12);

#line 558 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(
#line 558 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_9,
#line 558 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_10,
#line 558 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_11,
#line 558 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_12,
#line 558 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_13,
#line 558 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_14);

#line 550 "hlds_out_pred.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(
#line 550 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_5,
#line 550 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_6,
#line 550 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_3);

#line 540 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0_1(
#line 540 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 540 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1);

#line 509 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0(
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_13,
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_14,
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_15,
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_16,
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__WriteWhichModes_17,
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_18,
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_19,
#line 509 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_20,
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_21,
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_22);

#line 493 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_p_0(
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_1,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_2,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_3,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_4,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__WriteWhichModes_5,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_6,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_7,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__8_8,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_9,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_10);

#line 415 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_15,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_16,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_17,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_18,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_19,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_20,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_21,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_22,
#line 415 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_23,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_24,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Clauses_25,
#line 415 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__ClauseNum_26);

#line 404 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_14,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_15,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_16,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_17,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_18,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_19,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_20,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_21,
#line 404 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_22,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_23,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Clauses_24);

#line 365 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(
#line 365 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_3,
#line 365 "hlds_out_pred.m"
  MR_Word * hlds__hlds_out__hlds_out_pred__ClausesInfo_4);

#line 1160 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_2(
#line 1160 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1160 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1160 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1160 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 1153 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_1(
#line 1153 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1153 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1153 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1153 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 1021 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0_1(
#line 1021 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1021 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1021 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1021 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

#line 453 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_14_p_0_1(
#line 453 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 453 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1);

#line 240 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1(
#line 240 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 240 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 240 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 240 "hlds_out_pred.m"
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


#line 314 "hlds_out_pred.m"
/* sealed */ struct hlds__hlds_out__hlds_out_pred__vector_common_type_4_0_s {
#line 314 "hlds_out_pred.m"
  const MR_String hlds__hlds_out__hlds_out_pred__vector_common_type_4_0__vct_4_f_0;
#line 314 "hlds_out_pred.m"
};

static /* final */ const struct hlds__hlds_out__hlds_out_pred__vector_common_type_4_0_s hlds__hlds_out__hlds_out_pred_vector_common_4[41];



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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
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
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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


static /* final */ const struct hlds__hlds_out__hlds_out_pred__vector_common_type_4_0_s hlds__hlds_out__hlds_out_pred_vector_common_4[41] = {
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
  /* row 16 */   {     (MR_String) "stub" },
  /* row 17 */   {     (MR_String) "builtin_stub" },
  /* row 18 */   {     (MR_String) "infer_type" },
  /* row 19 */   {     (MR_String) "infer_modes" },
  /* row 20 */   {     (MR_String) "obsolete" },
  /* row 21 */   {     (MR_String) "no_determinism_warning" },
  /* row 22 */   {     (MR_String) "inline" },
  /* row 23 */   {     (MR_String) "no_inline" },
  /* row 24 */   {     (MR_String) "heuristic_inline" },
  /* row 25 */   {     (MR_String) "class_method" },
  /* row 26 */   {     (MR_String) "class_instance_method" },
  /* row 27 */   {     (MR_String) "named_class_instance_method" },
  /* row 28 */   {     (MR_String) "impure" },
  /* row 29 */   {     (MR_String) "semipure" },
  /* row 30 */   {     (MR_String) "promise_pure" },
  /* row 31 */   {     (MR_String) "promise_semipure" },
  /* row 32 */   {     (MR_String) "promise_equivalent_clauses" },
  /* row 33 */   {     (MR_String) "terminates" },
  /* row 34 */   {     (MR_String) "does_not_terminate" },
  /* row 35 */   {     (MR_String) "check_termination" },
  /* row 36 */   {     (MR_String) "calls_are_fully_qualified" },
  /* row 37 */   {     (MR_String) "mode_check_clauses" },
  /* row 38 */   {     (MR_String) "mutable_access_pred" },
  /* row 39 */   {     (MR_String) "has_require_scope" },
  /* row 40 */   {     (MR_String) "has_format_call" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



#line 1156 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1164 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1172 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1180 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1188 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_pred__type_ctor_info_table_locn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0
  }
};

#line 1197 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1205 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 1214 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1222 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1230 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1238 "hlds.hlds_out.hlds_out_pred.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1246 "hlds.hlds_out.hlds_out_pred.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_0 = {
  (MR_String) "write_actual_modes",
  (MR_Integer) 0
};

#line 1252 "hlds.hlds_out.hlds_out_pred.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_1 = {
  (MR_String) "write_declared_modes",
  (MR_Integer) 1
};

#line 1258 "hlds.hlds_out.hlds_out_pred.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_value_ordered_write_which_modes_0[2] = {
  &hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_0,
  &hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_1
};

#line 1264 "hlds.hlds_out.hlds_out_pred.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_name_ordered_write_which_modes_0[2] = {
  &hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_0,
  &hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_1
};

#line 1270 "hlds.hlds_out.hlds_out_pred.c"
static const MR_Integer hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__functor_number_map_write_which_modes_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1276 "hlds.hlds_out.hlds_out_pred.c"
const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__type_ctor_info_write_which_modes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_pred",
  (MR_String) "write_which_modes",
  {     hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_name_ordered_write_which_modes_0 },
  {     hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_value_ordered_write_which_modes_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__functor_number_map_write_which_modes_0
};

#line 1293 "hlds.hlds_out.hlds_out_pred.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0_10001(
#line 1296 "hlds.hlds_out.hlds_out_pred.c"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1298 "hlds.hlds_out.hlds_out_pred.c"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2)
#line 1300 "hlds.hlds_out.hlds_out_pred.c"
{
#line 1302 "hlds.hlds_out.hlds_out_pred.c"
  {
#line 1304 "hlds.hlds_out.hlds_out_pred.c"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 1307 "hlds.hlds_out.hlds_out_pred.c"
    {
#line 1309 "hlds.hlds_out.hlds_out_pred.c"
      hlds__hlds_out__hlds_out_pred__succeeded = hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_2));
    }
#line 1312 "hlds.hlds_out.hlds_out_pred.c"
    return hlds__hlds_out__hlds_out_pred__succeeded;
#line 1314 "hlds.hlds_out.hlds_out_pred.c"
  }
#line 1316 "hlds.hlds_out.hlds_out_pred.c"
}

#line 1319 "hlds.hlds_out.hlds_out_pred.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0_10001(
#line 1322 "hlds.hlds_out.hlds_out_pred.c"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1324 "hlds.hlds_out.hlds_out_pred.c"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1326 "hlds.hlds_out.hlds_out_pred.c"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 1328 "hlds.hlds_out.hlds_out_pred.c"
{
#line 1330 "hlds.hlds_out.hlds_out_pred.c"
  {
#line 1332 "hlds.hlds_out.hlds_out_pred.c"
    MR_Word hlds__hlds_out__hlds_out_pred__conv0_HeadVar__1_1;

#line 1335 "hlds.hlds_out.hlds_out_pred.c"
    {
#line 1337 "hlds.hlds_out.hlds_out_pred.c"
      hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0(&hlds__hlds_out__hlds_out_pred__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_3));
    }
#line 1340 "hlds.hlds_out.hlds_out_pred.c"
    *hlds__hlds_out__hlds_out_pred__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv0_HeadVar__1_1));
#line 1342 "hlds.hlds_out.hlds_out_pred.c"
  }
#line 1344 "hlds.hlds_out.hlds_out_pred.c"
}

#line 1021 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__1021__1_5_p_0(
#line 1021 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_15,
#line 1021 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_25,
#line 1021 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_254)
#line 1021 "hlds_out_pred.m"
{
#line 1021 "hlds_out_pred.m"
  {
#line 1021 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 1021 "hlds_out_pred.m"
    {
#line 1021 "hlds_out_pred.m"
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__HeadVar__3_254);
#line 1021 "hlds_out_pred.m"
      return;
    }
#line 1021 "hlds_out_pred.m"
  }
#line 1021 "hlds_out_pred.m"
}

#line 35 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0(
#line 35 "hlds_out_pred.m"
  MR_Word * hlds__hlds_out__hlds_out_pred__HeadVar__1_1,
#line 35 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_2,
#line 35 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_3)
#line 35 "hlds_out_pred.m"
{
#line 35 "hlds_out_pred.m"
  {
#line 35 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 35 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_pred__HeadVar__2_2;
#line 35 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_pred__HeadVar__3_3;

#line 35 "hlds_out_pred.m"
    {
#line 35 "hlds_out_pred.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_pred__HeadVar__1_1, hlds__hlds_out__hlds_out_pred__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_pred__Cast_HeadVar2_5);
#line 35 "hlds_out_pred.m"
      return;
    }
#line 35 "hlds_out_pred.m"
  }
#line 35 "hlds_out_pred.m"
}

#line 35 "hlds_out_pred.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0(
#line 35 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_1,
#line 35 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_2)
#line 35 "hlds_out_pred.m"
{
#line 1416 "hlds.hlds_out.hlds_out_pred.c"
  {
#line 1418 "hlds.hlds_out.hlds_out_pred.c"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__HeadVar__2_1 == hlds__hlds_out__hlds_out_pred__HeadVar__2_2);

#line 1421 "hlds.hlds_out.hlds_out_pred.c"
    return hlds__hlds_out__hlds_out_pred__succeeded;
#line 1423 "hlds.hlds_out.hlds_out_pred.c"
  }
#line 35 "hlds_out_pred.m"
}

#line 1307 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0_1(
#line 1307 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1307 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1307 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1307 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 1307 "hlds_out_pred.m"
{
#line 1307 "hlds_out_pred.m"
  {
#line 1307 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 1307 "hlds_out_pred.m"
    {
#line 1307 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_marker_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 1307 "hlds_out_pred.m"
      return;
    }
#line 1307 "hlds_out_pred.m"
  }
#line 1307 "hlds_out_pred.m"
}

#line 1304 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0(
#line 1304 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Markers_4)
#line 1304 "hlds_out_pred.m"
{
#line 1306 "hlds_out_pred.m"
  {
#line 1306 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 1307 "hlds_out_pred.m"
    {
#line 1307 "hlds_out_pred.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0, hlds__hlds_out__hlds_out_pred__Markers_4, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[6]);
#line 1307 "hlds_out_pred.m"
      return;
    }
#line 1306 "hlds_out_pred.m"
  }
#line 1304 "hlds_out_pred.m"
}

#line 1270 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(
#line 1270 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 1270 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_9,
#line 1270 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_10,
#line 1270 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ConstraintId_11,
#line 1270 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProgConstraint_12)
#line 1270 "hlds_out_pred.m"
{
#line 1274 "hlds_out_pred.m"
  {
#line 1274 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1274 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ConstraintType_28;
#line 1274 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__GoalId_29;
#line 1274 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__N_30;
#line 1274 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__GoalIdNum_31;

#line 1275 "hlds_out_pred.m"
    {
#line 1275 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_10);
    }
#line 1276 "hlds_out_pred.m"
    {
#line 1276 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 1285 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__ConstraintType_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ConstraintId_11, (MR_Integer) 0)));
#line 1285 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__GoalId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ConstraintId_11, (MR_Integer) 1)));
#line 1285 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__N_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ConstraintId_11, (MR_Integer) 2)));
#line 1289 "hlds_out_pred.m"
#line 1289 "hlds_out_pred.m"
    switch (hlds__hlds_out__hlds_out_pred__ConstraintType_28) {
#line 1289 "hlds_out_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1289 "hlds_out_pred.m"
      case (MR_Integer) 1:
#line 1287 "hlds_out_pred.m"
        {
#line 1288 "hlds_out_pred.m"
          {
#line 1288 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "(E, ");
          }
#line 1287 "hlds_out_pred.m"
        }
#line 1289 "hlds_out_pred.m"
        break;
#line 1289 "hlds_out_pred.m"
      case (MR_Integer) 0:
#line 1290 "hlds_out_pred.m"
        {
#line 1291 "hlds_out_pred.m"
          {
#line 1291 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "(A, ");
          }
#line 1290 "hlds_out_pred.m"
        }
#line 1289 "hlds_out_pred.m"
        break;
#line 1289 "hlds_out_pred.m"
    }
#line 1293 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__GoalIdNum_31 = (MR_Integer) hlds__hlds_out__hlds_out_pred__GoalId_29;
#line 1294 "hlds_out_pred.m"
    {
#line 1294 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__GoalIdNum_31);
    }
#line 1295 "hlds_out_pred.m"
    {
#line 1295 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1296 "hlds_out_pred.m"
    {
#line 1296 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__N_30);
    }
#line 1297 "hlds_out_pred.m"
    {
#line 1297 "hlds_out_pred.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
#line 1278 "hlds_out_pred.m"
    {
#line 1278 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 1279 "hlds_out_pred.m"
    {
#line 1279 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_8, hlds__hlds_out__hlds_out_pred__VarNamePrint_9, hlds__hlds_out__hlds_out_pred__ProgConstraint_12);
    }
#line 1280 "hlds_out_pred.m"
    {
#line 1280 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
#line 1280 "hlds_out_pred.m"
      return;
    }
#line 1274 "hlds_out_pred.m"
  }
#line 1270 "hlds_out_pred.m"
}

#line 1267 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1(
#line 1267 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1267 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1267 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1267 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1267 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_4)
#line 1267 "hlds_out_pred.m"
{
#line 1267 "hlds_out_pred.m"
  {
#line 1267 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 1267 "hlds_out_pred.m"
    {
#line 1267 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_2));
#line 1267 "hlds_out_pred.m"
      return;
    }
#line 1267 "hlds_out_pred.m"
  }
#line 1267 "hlds_out_pred.m"
}

#line 1261 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(
#line 1261 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_7,
#line 1261 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_8,
#line 1261 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 1261 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ConstraintMap_10)
#line 1261 "hlds_out_pred.m"
{
#line 1264 "hlds_out_pred.m"
  {
#line 1264 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1264 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_17_17;
#line 1267 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_13;

#line 1265 "hlds_out_pred.m"
    {
#line 1265 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_9);
    }
#line 1266 "hlds_out_pred.m"
    {
#line 1266 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% Constraint Map:\n");
    }
#line 1267 "hlds_out_pred.m"
    {
#line 1267 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1267 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_9[1]));
#line 1267 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1));
#line 1267 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1267 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_7));
#line 1267 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarNamePrint_8));
#line 1267 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_9));
#line 1267 "hlds_out_pred.m"
    }
#line 1267 "hlds_out_pred.m"
    {
#line 1267 "hlds_out_pred.m"
      mercury__map__foldl_4_p_2((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_pred__V_17_17, hlds__hlds_out__hlds_out_pred__ConstraintMap_10, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_13);
    }
#line 1264 "hlds_out_pred.m"
  }
#line 1261 "hlds_out_pred.m"
}

#line 1179 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_p_0(
#line 1179 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1179 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_2)
#line 1179 "hlds_out_pred.m"
{
#line 1182 "hlds_out_pred.m"
  {
#line 1182 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1182 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__HeadVar__2_2, (MR_Integer) 0)));
#line 1182 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Locn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__HeadVar__2_2, (MR_Integer) 1)));
#line 1182 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_15_15;

#line 1183 "hlds_out_pred.m"
    {
#line 1183 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% typeinfo for ");
    }
#line 1184 "hlds_out_pred.m"
    {
#line 1184 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_15_15 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_pred__TVarSet_5, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__TVar_6);
    }
#line 1184 "hlds_out_pred.m"
    {
#line 1184 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_15_15);
    }
#line 1186 "hlds_out_pred.m"
    {
#line 1186 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 1190 "hlds_out_pred.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Locn_7)) == (MR_mktag((MR_Integer) 0))))
#line 1188 "hlds_out_pred.m"
      {
#line 1188 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Locn_7, (MR_Integer) 0)));
#line 1188 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_58_58;

#line 1189 "hlds_out_pred.m"
        {
#line 1189 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "direct in register ");
        }
#line 1189 "hlds_out_pred.m"
        {
#line 1189 "hlds_out_pred.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0], hlds__hlds_out__hlds_out_pred__N_9, &hlds__hlds_out__hlds_out_pred__V_58_58);
        }
#line 1189 "hlds_out_pred.m"
        {
#line 1189 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_58_58);
        }
#line 1189 "hlds_out_pred.m"
        {
#line 1189 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1189 "hlds_out_pred.m"
          return;
        }
#line 1188 "hlds_out_pred.m"
      }
#line 1190 "hlds_out_pred.m"
    else
#line 1191 "hlds_out_pred.m"
      {
#line 1191 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__O_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Locn_7, (MR_Integer) 1)));
#line 1191 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__N_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Locn_7, (MR_Integer) 0)));
#line 1191 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_37_37;
#line 1191 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__V_43_43;
#line 1191 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_47_47;

#line 1192 "hlds_out_pred.m"
        {
#line 1192 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "indirect from register ");
        }
#line 1788 "hlds.hlds_out.hlds_out_pred.c"
        hlds__hlds_out__hlds_out_pred__V_43_43 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0];
#line 1192 "hlds_out_pred.m"
        {
#line 1192 "hlds_out_pred.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_43_43, hlds__hlds_out__hlds_out_pred__N_32, &hlds__hlds_out__hlds_out_pred__V_37_37);
        }
#line 1192 "hlds_out_pred.m"
        {
#line 1192 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_37_37);
        }
#line 1192 "hlds_out_pred.m"
        {
#line 1192 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ", offset ");
        }
#line 1192 "hlds_out_pred.m"
        {
#line 1192 "hlds_out_pred.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_43_43, hlds__hlds_out__hlds_out_pred__O_10, &hlds__hlds_out__hlds_out_pred__V_47_47);
        }
#line 1192 "hlds_out_pred.m"
        {
#line 1192 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_47_47);
        }
#line 1192 "hlds_out_pred.m"
        {
#line 1192 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1192 "hlds_out_pred.m"
          return;
        }
#line 1191 "hlds_out_pred.m"
      }
#line 1182 "hlds_out_pred.m"
  }
#line 1179 "hlds_out_pred.m"
}

#line 1163 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_p_0(
#line 1163 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1163 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ArgInfo_6)
#line 1163 "hlds_out_pred.m"
{
#line 1166 "hlds_out_pred.m"
  {
#line 1166 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1166 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__HeadVarNum_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ArgInfo_6, (MR_Integer) 0)));
#line 1166 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__HeadVarName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ArgInfo_6, (MR_Integer) 1)));
#line 1166 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__SlotNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ArgInfo_6, (MR_Integer) 2)));
#line 1166 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ArgInfo_6, (MR_Integer) 3)));
#line 1166 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_25_25;

#line 1168 "hlds_out_pred.m"
    {
#line 1168 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 1169 "hlds_out_pred.m"
    {
#line 1169 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__HeadVarName_9);
    }
#line 1170 "hlds_out_pred.m"
    {
#line 1170 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
#line 1171 "hlds_out_pred.m"
    {
#line 1171 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__HeadVarNum_8);
    }
#line 1172 "hlds_out_pred.m"
    {
#line 1172 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " in slot ");
    }
#line 1173 "hlds_out_pred.m"
    {
#line 1173 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__SlotNum_10);
    }
#line 1174 "hlds_out_pred.m"
    {
#line 1174 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ", type ");
    }
#line 1175 "hlds_out_pred.m"
    {
#line 1175 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_25_25 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(hlds__hlds_out__hlds_out_pred__TVarSet_5, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__Type_11);
    }
#line 1175 "hlds_out_pred.m"
    {
#line 1175 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_25_25);
    }
#line 1177 "hlds_out_pred.m"
    {
#line 1177 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
#line 1177 "hlds_out_pred.m"
      return;
    }
#line 1166 "hlds_out_pred.m"
  }
#line 1163 "hlds_out_pred.m"
}

#line 1136 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_p_0(
#line 1136 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 1136 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_6)
#line 1136 "hlds_out_pred.m"
{
#line 1139 "hlds_out_pred.m"
  {
#line 1139 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1139 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeArgInfos_8 = (MR_Word) hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_6;

#line 1144 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__MaybeArgInfos_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1142 "hlds_out_pred.m"
      {
#line 1143 "hlds_out_pred.m"
        {
#line 1143 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% proc table io info: io tabled, no arg_infos\n");
#line 1143 "hlds_out_pred.m"
          return;
        }
#line 1142 "hlds_out_pred.m"
      }
#line 1144 "hlds_out_pred.m"
    else
#line 1145 "hlds_out_pred.m"
      {
#line 1145 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ArgInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeArgInfos_8, (MR_Integer) 0)));

#line 1146 "hlds_out_pred.m"
        {
#line 1146 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% proc table io info: io tabled, arg_infos:\n");
        }
#line 1147 "hlds_out_pred.m"
        {
#line 1147 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_5, hlds__hlds_out__hlds_out_pred__ArgInfos_9);
#line 1147 "hlds_out_pred.m"
          return;
        }
#line 1145 "hlds_out_pred.m"
      }
#line 1139 "hlds_out_pred.m"
  }
#line 1136 "hlds_out_pred.m"
}

#line 1116 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_p_0(
#line 1116 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__CoveragePointInfo_6,
#line 1116 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_11,
#line 1116 "hlds_out_pred.m"
  MR_Integer * hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_12)
#line 1116 "hlds_out_pred.m"
{
#line 1119 "hlds_out_pred.m"
  {
#line 1119 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1119 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__RevGoalPath_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CoveragePointInfo_6, (MR_Integer) 0)));
#line 1119 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__PointType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CoveragePointInfo_6, (MR_Integer) 1)));
#line 1119 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_21_21;
#line 1119 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_24_24;
#line 1119 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_31_31;
#line 1119 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_37_37;
#line 1119 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_41_41;
#line 1119 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_51_51;

#line 1122 "hlds_out_pred.m"
    {
#line 1122 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_21_21 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__RevGoalPath_9);
    }
#line 1128 "hlds_out_pred.m"
#line 1128 "hlds_out_pred.m"
    switch (hlds__hlds_out__hlds_out_pred__PointType_10) {
#line 1128 "hlds_out_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1128 "hlds_out_pred.m"
      case ((int) MR_cp_type_branch_arm):
#line 1129 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__V_24_24 = (MR_String) "branch arm";
#line 1128 "hlds_out_pred.m"
        break;
#line 1128 "hlds_out_pred.m"
      case ((int) MR_cp_type_coverage_after):
#line 1128 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__V_24_24 = (MR_String) "after";
#line 1128 "hlds_out_pred.m"
        break;
#line 1128 "hlds_out_pred.m"
    }
#line 1121 "hlds_out_pred.m"
    {
#line 1121 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% coverage point slot ");
    }
#line 2026 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__V_37_37 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0];
#line 1122 "hlds_out_pred.m"
    {
#line 1122 "hlds_out_pred.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_37_37, hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_11, &hlds__hlds_out__hlds_out_pred__V_31_31);
    }
#line 1122 "hlds_out_pred.m"
    {
#line 1122 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_31_31);
    }
#line 1121 "hlds_out_pred.m"
    {
#line 1121 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ": goal path <");
    }
#line 1122 "hlds_out_pred.m"
    {
#line 1122 "hlds_out_pred.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_37_37, hlds__hlds_out__hlds_out_pred__V_21_21, &hlds__hlds_out__hlds_out_pred__V_41_41);
    }
#line 1122 "hlds_out_pred.m"
    {
#line 1122 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_41_41);
    }
#line 1121 "hlds_out_pred.m"
    {
#line 1121 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ">, type ");
    }
#line 1123 "hlds_out_pred.m"
    {
#line 1123 "hlds_out_pred.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_37_37, hlds__hlds_out__hlds_out_pred__V_24_24, &hlds__hlds_out__hlds_out_pred__V_51_51);
    }
#line 1123 "hlds_out_pred.m"
    {
#line 1123 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_51_51);
    }
#line 1121 "hlds_out_pred.m"
    {
#line 1121 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1124 "hlds_out_pred.m"
    *hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_12 = (hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_11 + (MR_Integer) 1);
#line 1119 "hlds_out_pred.m"
  }
#line 1116 "hlds_out_pred.m"
}

#line 1080 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_p_0(
#line 1080 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6,
#line 1080 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_14,
#line 1080 "hlds_out_pred.m"
  MR_Integer * hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_15)
#line 1080 "hlds_out_pred.m"
{
#line 1083 "hlds_out_pred.m"
  {
#line 1083 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1083 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_108_108;
#line 1083 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_114_114;

#line 1084 "hlds_out_pred.m"
    {
#line 1084 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% call site static slot ");
    }
#line 2105 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__V_114_114 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0];
#line 1084 "hlds_out_pred.m"
    {
#line 1084 "hlds_out_pred.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_14, &hlds__hlds_out__hlds_out_pred__V_108_108);
    }
#line 1084 "hlds_out_pred.m"
    {
#line 1084 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_108_108);
    }
#line 1084 "hlds_out_pred.m"
    {
#line 1084 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1095 "hlds_out_pred.m"
#line 1095 "hlds_out_pred.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6)) {
#line 1095 "hlds_out_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1095 "hlds_out_pred.m"
      case (MR_Integer) 0:
#line 1087 "hlds_out_pred.m"
        {
#line 1087 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__CalleeRttiProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 0)));
#line 1087 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__TypeSubst_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
#line 1087 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__FileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
#line 1087 "hlds_out_pred.m"
          MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 3)));
#line 1087 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 4)));
#line 1087 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_51_51;
#line 1087 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_150_150;
#line 1087 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_160_160;
#line 1087 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_171_171;
#line 1087 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_181_181;

#line 1088 "hlds_out_pred.m"
          {
#line 1088 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "% normal call to ");
          }
#line 1089 "hlds_out_pred.m"
          {
#line 1089 "hlds_out_pred.m"
            mercury__io__write_3_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__CalleeRttiProcLabel_9)));
          }
#line 1090 "hlds_out_pred.m"
          {
#line 1090 "hlds_out_pred.m"
            mercury__io__nl_2_p_0();
          }
#line 1092 "hlds_out_pred.m"
          {
#line 1092 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_51_51 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_13);
          }
#line 1091 "hlds_out_pred.m"
          {
#line 1091 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "% type subst <");
          }
#line 1092 "hlds_out_pred.m"
          {
#line 1092 "hlds_out_pred.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__TypeSubst_10, &hlds__hlds_out__hlds_out_pred__V_150_150);
          }
#line 1092 "hlds_out_pred.m"
          {
#line 1092 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_150_150);
          }
#line 1091 "hlds_out_pred.m"
          {
#line 1091 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
          }
#line 1092 "hlds_out_pred.m"
          {
#line 1092 "hlds_out_pred.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__V_51_51, &hlds__hlds_out__hlds_out_pred__V_160_160);
          }
#line 1092 "hlds_out_pred.m"
          {
#line 1092 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_160_160);
          }
#line 1091 "hlds_out_pred.m"
          {
#line 1091 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">\n");
          }
#line 1093 "hlds_out_pred.m"
          {
#line 1093 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "% filename <");
          }
#line 1094 "hlds_out_pred.m"
          {
#line 1094 "hlds_out_pred.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__FileName_11, &hlds__hlds_out__hlds_out_pred__V_171_171);
          }
#line 1094 "hlds_out_pred.m"
          {
#line 1094 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_171_171);
          }
#line 1093 "hlds_out_pred.m"
          {
#line 1093 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">, line number <");
          }
#line 1094 "hlds_out_pred.m"
          {
#line 1094 "hlds_out_pred.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__LineNumber_12, &hlds__hlds_out__hlds_out_pred__V_181_181);
          }
#line 1094 "hlds_out_pred.m"
          {
#line 1094 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_181_181);
          }
#line 1093 "hlds_out_pred.m"
          {
#line 1093 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">\n");
          }
#line 1087 "hlds_out_pred.m"
        }
#line 1095 "hlds_out_pred.m"
        break;
#line 1095 "hlds_out_pred.m"
      case (MR_Integer) 1:
#line 1109 "hlds_out_pred.m"
        {
#line 1109 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_100_100;
#line 1109 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__FileName_102 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 0)));
#line 1109 "hlds_out_pred.m"
          MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_103 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
#line 1109 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
#line 1109 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_119_119;
#line 1109 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_129_129;
#line 1109 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_139_139;

#line 1098 "hlds_out_pred.m"
          {
#line 1098 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "% special call\n");
          }
#line 1111 "hlds_out_pred.m"
          {
#line 1111 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_100_100 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_104);
          }
#line 1110 "hlds_out_pred.m"
          {
#line 1110 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "% filename <");
          }
#line 1111 "hlds_out_pred.m"
          {
#line 1111 "hlds_out_pred.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__FileName_102, &hlds__hlds_out__hlds_out_pred__V_119_119);
          }
#line 1111 "hlds_out_pred.m"
          {
#line 1111 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_119_119);
          }
#line 1110 "hlds_out_pred.m"
          {
#line 1110 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">, line number <");
          }
#line 1111 "hlds_out_pred.m"
          {
#line 1111 "hlds_out_pred.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__LineNumber_103, &hlds__hlds_out__hlds_out_pred__V_129_129);
          }
#line 1111 "hlds_out_pred.m"
          {
#line 1111 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_129_129);
          }
#line 1110 "hlds_out_pred.m"
          {
#line 1110 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
          }
#line 1111 "hlds_out_pred.m"
          {
#line 1111 "hlds_out_pred.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__V_100_100, &hlds__hlds_out__hlds_out_pred__V_139_139);
          }
#line 1111 "hlds_out_pred.m"
          {
#line 1111 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_139_139);
          }
#line 1110 "hlds_out_pred.m"
          {
#line 1110 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">\n");
          }
#line 1109 "hlds_out_pred.m"
        }
#line 1095 "hlds_out_pred.m"
        break;
#line 1095 "hlds_out_pred.m"
      case (MR_Integer) 2:
#line 1109 "hlds_out_pred.m"
        {
#line 1109 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_74_74;
#line 1109 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__FileName_76 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 0)));
#line 1109 "hlds_out_pred.m"
          MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_77 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
#line 1109 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
#line 1109 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_223_223;
#line 1109 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_233_233;
#line 1109 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_243_243;

#line 1102 "hlds_out_pred.m"
          {
#line 1102 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "% higher order call\n");
          }
#line 1111 "hlds_out_pred.m"
          {
#line 1111 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_74_74 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_78);
          }
#line 1110 "hlds_out_pred.m"
          {
#line 1110 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "% filename <");
          }
#line 1111 "hlds_out_pred.m"
          {
#line 1111 "hlds_out_pred.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__FileName_76, &hlds__hlds_out__hlds_out_pred__V_223_223);
          }
#line 1111 "hlds_out_pred.m"
          {
#line 1111 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_223_223);
          }
#line 1110 "hlds_out_pred.m"
          {
#line 1110 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">, line number <");
          }
#line 1111 "hlds_out_pred.m"
          {
#line 1111 "hlds_out_pred.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__LineNumber_77, &hlds__hlds_out__hlds_out_pred__V_233_233);
          }
#line 1111 "hlds_out_pred.m"
          {
#line 1111 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_233_233);
          }
#line 1110 "hlds_out_pred.m"
          {
#line 1110 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
          }
#line 1111 "hlds_out_pred.m"
          {
#line 1111 "hlds_out_pred.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__V_74_74, &hlds__hlds_out__hlds_out_pred__V_243_243);
          }
#line 1111 "hlds_out_pred.m"
          {
#line 1111 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_243_243);
          }
#line 1110 "hlds_out_pred.m"
          {
#line 1110 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) ">\n");
          }
#line 1109 "hlds_out_pred.m"
        }
#line 1095 "hlds_out_pred.m"
        break;
#line 1095 "hlds_out_pred.m"
      case (MR_Integer) 3:
#line 1095 "hlds_out_pred.m"
#line 1095 "hlds_out_pred.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 0)))) {
#line 1095 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1095 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 1109 "hlds_out_pred.m"
            {
#line 1109 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_87_87;
#line 1109 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__FileName_89 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
#line 1109 "hlds_out_pred.m"
              MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
#line 1109 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 3)));
#line 1109 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_192_192;
#line 1109 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_202_202;
#line 1109 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_212_212;

#line 1105 "hlds_out_pred.m"
              {
#line 1105 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% method call\n");
              }
#line 1111 "hlds_out_pred.m"
              {
#line 1111 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__V_87_87 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_91);
              }
#line 1110 "hlds_out_pred.m"
              {
#line 1110 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% filename <");
              }
#line 1111 "hlds_out_pred.m"
              {
#line 1111 "hlds_out_pred.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__FileName_89, &hlds__hlds_out__hlds_out_pred__V_192_192);
              }
#line 1111 "hlds_out_pred.m"
              {
#line 1111 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_192_192);
              }
#line 1110 "hlds_out_pred.m"
              {
#line 1110 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) ">, line number <");
              }
#line 1111 "hlds_out_pred.m"
              {
#line 1111 "hlds_out_pred.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__LineNumber_90, &hlds__hlds_out__hlds_out_pred__V_202_202);
              }
#line 1111 "hlds_out_pred.m"
              {
#line 1111 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_202_202);
              }
#line 1110 "hlds_out_pred.m"
              {
#line 1110 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
              }
#line 1111 "hlds_out_pred.m"
              {
#line 1111 "hlds_out_pred.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__V_87_87, &hlds__hlds_out__hlds_out_pred__V_212_212);
              }
#line 1111 "hlds_out_pred.m"
              {
#line 1111 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_212_212);
              }
#line 1110 "hlds_out_pred.m"
              {
#line 1110 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) ">\n");
              }
#line 1109 "hlds_out_pred.m"
            }
#line 1095 "hlds_out_pred.m"
            break;
#line 1095 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 1109 "hlds_out_pred.m"
            {
#line 1109 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_39_39;
#line 1109 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__FileName_62 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
#line 1109 "hlds_out_pred.m"
              MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
#line 1109 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 3)));
#line 1109 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_254_254;
#line 1109 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_264_264;
#line 1109 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_274_274;

#line 1108 "hlds_out_pred.m"
              {
#line 1108 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% callback\n");
              }
#line 1111 "hlds_out_pred.m"
              {
#line 1111 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__V_39_39 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_64);
              }
#line 1110 "hlds_out_pred.m"
              {
#line 1110 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% filename <");
              }
#line 1111 "hlds_out_pred.m"
              {
#line 1111 "hlds_out_pred.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__FileName_62, &hlds__hlds_out__hlds_out_pred__V_254_254);
              }
#line 1111 "hlds_out_pred.m"
              {
#line 1111 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_254_254);
              }
#line 1110 "hlds_out_pred.m"
              {
#line 1110 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) ">, line number <");
              }
#line 1111 "hlds_out_pred.m"
              {
#line 1111 "hlds_out_pred.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__LineNumber_63, &hlds__hlds_out__hlds_out_pred__V_264_264);
              }
#line 1111 "hlds_out_pred.m"
              {
#line 1111 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_264_264);
              }
#line 1110 "hlds_out_pred.m"
              {
#line 1110 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
              }
#line 1111 "hlds_out_pred.m"
              {
#line 1111 "hlds_out_pred.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_114_114, hlds__hlds_out__hlds_out_pred__V_39_39, &hlds__hlds_out__hlds_out_pred__V_274_274);
              }
#line 1111 "hlds_out_pred.m"
              {
#line 1111 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_274_274);
              }
#line 1110 "hlds_out_pred.m"
              {
#line 1110 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) ">\n");
              }
#line 1109 "hlds_out_pred.m"
            }
#line 1095 "hlds_out_pred.m"
            break;
#line 1095 "hlds_out_pred.m"
        }
#line 1095 "hlds_out_pred.m"
        break;
#line 1095 "hlds_out_pred.m"
    }
#line 1114 "hlds_out_pred.m"
    *hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_15 = (hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_14 + (MR_Integer) 1);
#line 1083 "hlds_out_pred.m"
  }
#line 1080 "hlds_out_pred.m"
}

#line 1078 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_2(
#line 1078 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1078 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1078 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1078 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1078 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_4,
#line 1078 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_5)
#line 1078 "hlds_out_pred.m"
{
#line 1078 "hlds_out_pred.m"
  {
#line 1078 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
#line 1078 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__conv3_STATE_VARIABLE_SlotNum_12;

#line 1078 "hlds_out_pred.m"
    {
#line 1078 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_p_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_pred__wrapper_arg_2), &hlds__hlds_out__hlds_out_pred__conv3_STATE_VARIABLE_SlotNum_12);
    }
#line 1078 "hlds_out_pred.m"
    *hlds__hlds_out__hlds_out_pred__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv3_STATE_VARIABLE_SlotNum_12));
#line 1078 "hlds_out_pred.m"
  }
#line 1078 "hlds_out_pred.m"
}

#line 1077 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_1(
#line 1077 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1077 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1077 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1077 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 1077 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_4,
#line 1077 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_5)
#line 1077 "hlds_out_pred.m"
{
#line 1077 "hlds_out_pred.m"
  {
#line 1077 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
#line 1077 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_SlotNum_15;

#line 1077 "hlds_out_pred.m"
    {
#line 1077 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_p_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_pred__wrapper_arg_2), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_SlotNum_15);
    }
#line 1077 "hlds_out_pred.m"
    *hlds__hlds_out__hlds_out_pred__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_SlotNum_15));
#line 1077 "hlds_out_pred.m"
  }
#line 1077 "hlds_out_pred.m"
}

#line 1063 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0(
#line 1063 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcStatic_4)
#line 1063 "hlds_out_pred.m"
{
#line 1065 "hlds_out_pred.m"
  {
#line 1065 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1065 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_40_40;
#line 1065 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_41_41;
#line 1065 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__FileName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 0)));
#line 1065 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 1)));
#line 1065 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__InInterface_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 2)));
#line 1065 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__CallSiteStatics_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 3)));
#line 1065 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__CoveragePoints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 4)));
#line 1077 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__V_11_11;
#line 1077 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv2_V_11_11;
#line 1077 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_29_29;
#line 1078 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__V_12_12;
#line 1078 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv5_V_12_12;
#line 1078 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv4_STATE_VARIABLE_IO_14;

#line 1068 "hlds_out_pred.m"
    {
#line 1068 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% proc static filename: ");
    }
#line 1069 "hlds_out_pred.m"
    {
#line 1069 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__FileName_6);
    }
#line 1070 "hlds_out_pred.m"
    {
#line 1070 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
    }
#line 1071 "hlds_out_pred.m"
    {
#line 1071 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% proc static line number: ");
    }
#line 1072 "hlds_out_pred.m"
    {
#line 1072 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__LineNumber_7);
    }
#line 1073 "hlds_out_pred.m"
    {
#line 1073 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
    }
#line 1074 "hlds_out_pred.m"
    {
#line 1074 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% proc static is interface: ");
    }
#line 1075 "hlds_out_pred.m"
    {
#line 1075 "hlds_out_pred.m"
      mercury__io__write_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__InInterface_8)));
    }
#line 1076 "hlds_out_pred.m"
    {
#line 1076 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
    }
#line 2753 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2755 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_41_41 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1077 "hlds_out_pred.m"
    {
#line 1077 "hlds_out_pred.m"
      mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_40_40, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_41_41, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[4], hlds__hlds_out__hlds_out_pred__CallSiteStatics_9, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv2_V_11_11, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_29_29);
    }
#line 1077 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_11_11 = ((MR_Integer) hlds__hlds_out__hlds_out_pred__conv2_V_11_11);
#line 1078 "hlds_out_pred.m"
    {
#line 1078 "hlds_out_pred.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_40_40, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_41_41, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[5], hlds__hlds_out__hlds_out_pred__CoveragePoints_10, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv5_V_12_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv4_STATE_VARIABLE_IO_14);
    }
#line 1078 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_12_12 = ((MR_Integer) hlds__hlds_out__hlds_out_pred__conv5_V_12_12);
#line 1065 "hlds_out_pred.m"
  }
#line 1063 "hlds_out_pred.m"
}

#line 759 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(
#line 759 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_1,
#line 759 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_2,
#line 759 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_3,
#line 759 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredStatus_4,
#line 759 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_5,
#line 759 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcTable_6,
#line 759 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_7,
#line 759 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__8_8)
#line 759 "hlds_out_pred.m"
{
#line 763 "hlds_out_pred.m"
  while (MR_TRUE)
#line 763 "hlds_out_pred.m"
    {
#line 763 "hlds_out_pred.m"
      /* tailcall optimized into a loop */
#line 763 "hlds_out_pred.m"
      {
#line 763 "hlds_out_pred.m"
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 763 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__HeadVar__8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "hlds_out_pred.m"
          {
#line 763 "hlds_out_pred.m"
          }
#line 763 "hlds_out_pred.m"
        else
#line 765 "hlds_out_pred.m"
          {
#line 765 "hlds_out_pred.m"
            MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__8_8, (MR_Integer) 0)));
#line 765 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ProcIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__8_8, (MR_Integer) 1)));
#line 765 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ProcInfo_31;
#line 766 "hlds_out_pred.m"
            MR_Box hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_31;

#line 766 "hlds_out_pred.m"
            {
#line 766 "hlds_out_pred.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__hlds_out__hlds_out_pred__ProcTable_6, hlds__hlds_out__hlds_out_pred__ProcId_28, &hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_31);
            }
#line 766 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__ProcInfo_31 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_31);
#line 767 "hlds_out_pred.m"
            {
#line 767 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_proc_10_p_0(hlds__hlds_out__hlds_out_pred__Info_1, hlds__hlds_out__hlds_out_pred__ModuleInfo_2, hlds__hlds_out__hlds_out_pred__PredId_3, hlds__hlds_out__hlds_out_pred__PredStatus_4, hlds__hlds_out__hlds_out_pred__VarNamePrint_5, hlds__hlds_out__hlds_out_pred__Indent_7, hlds__hlds_out__hlds_out_pred__ProcId_28, hlds__hlds_out__hlds_out_pred__ProcInfo_31);
            }
#line 769 "hlds_out_pred.m"
            /* direct tailcall eliminated */
#line 769 "hlds_out_pred.m"
            {
#line 769 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__8__tmp_copy_8 = hlds__hlds_out__hlds_out_pred__ProcIds_29;

#line 769 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__HeadVar__8_8 = hlds__hlds_out__hlds_out_pred__HeadVar__8__tmp_copy_8;
#line 769 "hlds_out_pred.m"
            }
#line 769 "hlds_out_pred.m"
            continue;
#line 765 "hlds_out_pred.m"
          }
#line 763 "hlds_out_pred.m"
      }
#line 763 "hlds_out_pred.m"
      break;
#line 763 "hlds_out_pred.m"
    }
#line 759 "hlds_out_pred.m"
}

#line 738 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(
#line 738 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_6,
#line 738 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Head_7,
#line 738 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Tail_8)
#line 738 "hlds_out_pred.m"
{
#line 741 "hlds_out_pred.m"
  while (MR_TRUE)
#line 741 "hlds_out_pred.m"
    {
#line 741 "hlds_out_pred.m"
      /* tailcall optimized into a loop */
#line 741 "hlds_out_pred.m"
      {
#line 741 "hlds_out_pred.m"
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 741 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Head_7, (MR_Integer) 0)));
#line 741 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__NewName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Head_7, (MR_Integer) 1)));

#line 743 "hlds_out_pred.m"
        {
#line 743 "hlds_out_pred.m"
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_6, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__Var_10);
        }
#line 744 "hlds_out_pred.m"
        {
#line 744 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) " -> ");
        }
#line 745 "hlds_out_pred.m"
        {
#line 745 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__NewName_11);
        }
#line 748 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__Tail_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 747 "hlds_out_pred.m"
          {
#line 747 "hlds_out_pred.m"
          }
#line 748 "hlds_out_pred.m"
        else
#line 749 "hlds_out_pred.m"
          {
#line 749 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TailHead_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Tail_8, (MR_Integer) 0)));
#line 749 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TailTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Tail_8, (MR_Integer) 1)));

#line 750 "hlds_out_pred.m"
            {
#line 750 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 751 "hlds_out_pred.m"
            /* direct tailcall eliminated */
#line 751 "hlds_out_pred.m"
            {
#line 751 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__Head__tmp_copy_7 = hlds__hlds_out__hlds_out_pred__TailHead_12;
#line 751 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__Tail__tmp_copy_8 = hlds__hlds_out__hlds_out_pred__TailTail_13;

#line 751 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__Tail_8 = hlds__hlds_out__hlds_out_pred__Tail__tmp_copy_8;
#line 751 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__Head_7 = hlds__hlds_out__hlds_out_pred__Head__tmp_copy_7;
#line 751 "hlds_out_pred.m"
            }
#line 751 "hlds_out_pred.m"
            continue;
#line 749 "hlds_out_pred.m"
          }
#line 741 "hlds_out_pred.m"
      }
#line 741 "hlds_out_pred.m"
      break;
#line 741 "hlds_out_pred.m"
    }
#line 738 "hlds_out_pred.m"
}

#line 727 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(
#line 727 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 727 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_9,
#line 727 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_10,
#line 727 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__OldVar_11,
#line 727 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__NewVars_12)
#line 727 "hlds_out_pred.m"
{
#line 730 "hlds_out_pred.m"
  {
#line 730 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 730 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_24_24;

#line 731 "hlds_out_pred.m"
    {
#line 731 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_10);
    }
#line 732 "hlds_out_pred.m"
    {
#line 732 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "%\t");
    }
#line 2984 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 733 "hlds_out_pred.m"
    {
#line 733 "hlds_out_pred.m"
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_24_24, hlds__hlds_out__hlds_out_pred__VarSet_8, hlds__hlds_out__hlds_out_pred__VarNamePrint_9, hlds__hlds_out__hlds_out_pred__OldVar_11);
    }
#line 734 "hlds_out_pred.m"
    {
#line 734 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-> ");
    }
#line 735 "hlds_out_pred.m"
    {
#line 735 "hlds_out_pred.m"
      parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_24_24, hlds__hlds_out__hlds_out_pred__VarSet_8, hlds__hlds_out__hlds_out_pred__VarNamePrint_9, hlds__hlds_out__hlds_out_pred__NewVars_12);
    }
#line 736 "hlds_out_pred.m"
    {
#line 736 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
#line 736 "hlds_out_pred.m"
      return;
    }
#line 730 "hlds_out_pred.m"
  }
#line 727 "hlds_out_pred.m"
}

#line 724 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0_1(
#line 724 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 724 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 724 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 724 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
#line 724 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_4)
#line 724 "hlds_out_pred.m"
{
#line 724 "hlds_out_pred.m"
  {
#line 724 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 724 "hlds_out_pred.m"
    {
#line 724 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_2));
#line 724 "hlds_out_pred.m"
      return;
    }
#line 724 "hlds_out_pred.m"
  }
#line 724 "hlds_out_pred.m"
}

#line 717 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0(
#line 717 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_7,
#line 717 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_8,
#line 717 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 717 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__UntupleInfo_10)
#line 717 "hlds_out_pred.m"
{
#line 720 "hlds_out_pred.m"
  {
#line 720 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 720 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__UntupleMap_12 = (MR_Word) hlds__hlds_out__hlds_out_pred__UntupleInfo_10;
#line 720 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_18_18;
#line 724 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_14;

#line 722 "hlds_out_pred.m"
    {
#line 722 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_9);
    }
#line 723 "hlds_out_pred.m"
    {
#line 723 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% untuple:\n");
    }
#line 724 "hlds_out_pred.m"
    {
#line 724 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 724 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_18_18, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_9[0]));
#line 724 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_18_18, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0_1));
#line 724 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 724 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_18_18, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_7));
#line 724 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_18_18, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarNamePrint_8));
#line 724 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_18_18, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_9));
#line 724 "hlds_out_pred.m"
    }
#line 724 "hlds_out_pred.m"
    {
#line 724 "hlds_out_pred.m"
      mercury__map__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[6], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_pred__V_18_18, hlds__hlds_out__hlds_out_pred__UntupleMap_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_14);
    }
#line 720 "hlds_out_pred.m"
  }
#line 717 "hlds_out_pred.m"
}

#line 713 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0_1(
#line 713 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 713 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1)
#line 713 "hlds_out_pred.m"
{
#line 713 "hlds_out_pred.m"
  {
#line 713 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 713 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
#line 713 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2;

#line 713 "hlds_out_pred.m"
    {
#line 713 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
#line 713 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2));
#line 713 "hlds_out_pred.m"
    return hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 713 "hlds_out_pred.m"
  }
#line 713 "hlds_out_pred.m"
}

#line 708 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(
#line 708 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_7,
#line 708 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_8,
#line 708 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
#line 708 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__StackSlots_10)
#line 708 "hlds_out_pred.m"
{
#line 711 "hlds_out_pred.m"
  {
#line 711 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 711 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_18_18 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0];
#line 711 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0;
#line 711 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarSlotList0_12;
#line 711 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarSlotList_13;

#line 712 "hlds_out_pred.m"
    {
#line 712 "hlds_out_pred.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_18_18, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_19_19, hlds__hlds_out__hlds_out_pred__StackSlots_10, &hlds__hlds_out__hlds_out_pred__VarSlotList0_12);
    }
#line 713 "hlds_out_pred.m"
    {
#line 713 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__VarSlotList_13 = mercury__assoc_list__map_values_only_2_f_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_19_19, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, hlds__hlds_out__hlds_out_pred__TypeInfo_18_18, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[3], hlds__hlds_out__hlds_out_pred__VarSlotList0_12);
    }
#line 715 "hlds_out_pred.m"
    {
#line 715 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(hlds__hlds_out__hlds_out_pred__VarSet_7, hlds__hlds_out__hlds_out_pred__VarNamePrint_8, hlds__hlds_out__hlds_out_pred__Indent_9, hlds__hlds_out__hlds_out_pred__VarSlotList_13);
#line 715 "hlds_out_pred.m"
      return;
    }
#line 711 "hlds_out_pred.m"
  }
#line 708 "hlds_out_pred.m"
}

#line 680 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(
#line 680 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 680 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_10,
#line 680 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_11,
#line 680 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_12,
#line 680 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_13,
#line 680 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Var_14)
#line 680 "hlds_out_pred.m"
{
#line 684 "hlds_out_pred.m"
  {
#line 684 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 684 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_43_43;
#line 684 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__VarNum_16;
#line 684 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarInfo_17;

#line 685 "hlds_out_pred.m"
    {
#line 685 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_13);
    }
#line 686 "hlds_out_pred.m"
    {
#line 686 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 3225 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 687 "hlds_out_pred.m"
    {
#line 687 "hlds_out_pred.m"
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_43_43, hlds__hlds_out__hlds_out_pred__VarSet_9, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__Var_14);
    }
#line 688 "hlds_out_pred.m"
    {
#line 688 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " (number ");
    }
#line 689 "hlds_out_pred.m"
    {
#line 689 "hlds_out_pred.m"
      mercury__term__var_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_43_43, hlds__hlds_out__hlds_out_pred__Var_14, &hlds__hlds_out__hlds_out_pred__VarNum_16);
    }
#line 690 "hlds_out_pred.m"
    {
#line 690 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__VarNum_16);
    }
#line 691 "hlds_out_pred.m"
    {
#line 691 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ") ");
    }
#line 692 "hlds_out_pred.m"
    {
#line 692 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 693 "hlds_out_pred.m"
    {
#line 693 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_12, hlds__hlds_out__hlds_out_pred__Var_14, &hlds__hlds_out__hlds_out_pred__VarInfo_17);
    }
#line 698 "hlds_out_pred.m"
#line 698 "hlds_out_pred.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__VarInfo_17)) {
#line 698 "hlds_out_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 698 "hlds_out_pred.m"
      case (MR_Integer) 0:
#line 703 "hlds_out_pred.m"
        {
#line 704 "hlds_out_pred.m"
          {
#line 704 "hlds_out_pred.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_pred", (MR_String) "predicate \140hlds.hlds_out.hlds_out_pred.write_rtti_var_info\'/8", (MR_String) "non rtti var");
#line 704 "hlds_out_pred.m"
            return;
          }
#line 703 "hlds_out_pred.m"
        }
#line 698 "hlds_out_pred.m"
        break;
#line 698 "hlds_out_pred.m"
      case (MR_Integer) 1:
#line 695 "hlds_out_pred.m"
        {
#line 695 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarInfo_17, (MR_Integer) 0)));

#line 696 "hlds_out_pred.m"
          {
#line 696 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "type_info for ");
          }
#line 697 "hlds_out_pred.m"
          {
#line 697 "hlds_out_pred.m"
            parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_10, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__Type_18);
          }
#line 695 "hlds_out_pred.m"
        }
#line 698 "hlds_out_pred.m"
        break;
#line 698 "hlds_out_pred.m"
      case (MR_Integer) 2:
#line 699 "hlds_out_pred.m"
        {
#line 699 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__Constraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__VarInfo_17, (MR_Integer) 0)));

#line 700 "hlds_out_pred.m"
          {
#line 700 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) "typeclass_info for ");
          }
#line 701 "hlds_out_pred.m"
          {
#line 701 "hlds_out_pred.m"
            parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_10, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__Constraint_19);
          }
#line 699 "hlds_out_pred.m"
        }
#line 698 "hlds_out_pred.m"
        break;
#line 698 "hlds_out_pred.m"
    }
#line 706 "hlds_out_pred.m"
    {
#line 706 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
#line 706 "hlds_out_pred.m"
      return;
    }
#line 684 "hlds_out_pred.m"
  }
#line 680 "hlds_out_pred.m"
}

#line 666 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(
#line 666 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 666 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_10,
#line 666 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_11,
#line 666 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_12,
#line 666 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_13,
#line 666 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Constraint_14)
#line 666 "hlds_out_pred.m"
{
#line 671 "hlds_out_pred.m"
  {
#line 671 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 671 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Var_16;

#line 672 "hlds_out_pred.m"
    {
#line 672 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_13);
    }
#line 673 "hlds_out_pred.m"
    {
#line 673 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 674 "hlds_out_pred.m"
    {
#line 674 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_10, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__Constraint_14);
    }
#line 675 "hlds_out_pred.m"
    {
#line 675 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 676 "hlds_out_pred.m"
    {
#line 676 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_12, hlds__hlds_out__hlds_out_pred__Constraint_14, &hlds__hlds_out__hlds_out_pred__Var_16);
    }
#line 677 "hlds_out_pred.m"
    {
#line 677 "hlds_out_pred.m"
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_9, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__Var_16);
    }
#line 678 "hlds_out_pred.m"
    {
#line 678 "hlds_out_pred.m"
      mercury__io__nl_2_p_0();
#line 678 "hlds_out_pred.m"
      return;
    }
#line 671 "hlds_out_pred.m"
  }
#line 666 "hlds_out_pred.m"
}

#line 631 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_10,
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_11,
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_12,
#line 631 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_13,
#line 631 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVar_14)
#line 631 "hlds_out_pred.m"
{
#line 635 "hlds_out_pred.m"
  {
#line 635 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 635 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_54_54;
#line 635 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__TVarNum_16;
#line 635 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Locn_17;
#line 635 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Var_18;
#line 635 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__VarNum_20;

#line 636 "hlds_out_pred.m"
    {
#line 636 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_13);
    }
#line 637 "hlds_out_pred.m"
    {
#line 637 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 3446 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 639 "hlds_out_pred.m"
    {
#line 639 "hlds_out_pred.m"
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_54_54, hlds__hlds_out__hlds_out_pred__TVarSet_10, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__TVar_14);
    }
#line 640 "hlds_out_pred.m"
    {
#line 640 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " (number ");
    }
#line 641 "hlds_out_pred.m"
    {
#line 641 "hlds_out_pred.m"
      mercury__term__var_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_54_54, hlds__hlds_out__hlds_out_pred__TVar_14, &hlds__hlds_out__hlds_out_pred__TVarNum_16);
    }
#line 642 "hlds_out_pred.m"
    {
#line 642 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__TVarNum_16);
    }
#line 643 "hlds_out_pred.m"
    {
#line 643 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 645 "hlds_out_pred.m"
    {
#line 645 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 646 "hlds_out_pred.m"
    {
#line 646 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_12, hlds__hlds_out__hlds_out_pred__TVar_14, &hlds__hlds_out__hlds_out_pred__Locn_17);
    }
#line 652 "hlds_out_pred.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Locn_17)) == (MR_mktag((MR_Integer) 0))))
#line 648 "hlds_out_pred.m"
      {
#line 648 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Locn_17, (MR_Integer) 0)));
#line 649 "hlds_out_pred.m"
        {
#line 649 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "type_info(");
        }
#line 650 "hlds_out_pred.m"
        {
#line 650 "hlds_out_pred.m"
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_9, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__Var_18);
        }
#line 651 "hlds_out_pred.m"
        {
#line 651 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ") ");
        }
#line 648 "hlds_out_pred.m"
      }
#line 652 "hlds_out_pred.m"
    else
#line 653 "hlds_out_pred.m"
      {
#line 653 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__Index_19;

#line 653 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Locn_17, (MR_Integer) 0)));
#line 653 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__Index_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Locn_17, (MR_Integer) 1)));
#line 654 "hlds_out_pred.m"
        {
#line 654 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "typeclass_info(");
        }
#line 655 "hlds_out_pred.m"
        {
#line 655 "hlds_out_pred.m"
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_9, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__Var_18);
        }
#line 656 "hlds_out_pred.m"
        {
#line 656 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 657 "hlds_out_pred.m"
        {
#line 657 "hlds_out_pred.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__Index_19);
        }
#line 658 "hlds_out_pred.m"
        {
#line 658 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ") ");
        }
#line 653 "hlds_out_pred.m"
      }
#line 660 "hlds_out_pred.m"
    {
#line 660 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " (number ");
    }
#line 661 "hlds_out_pred.m"
    {
#line 661 "hlds_out_pred.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__Var_18, &hlds__hlds_out__hlds_out_pred__VarNum_20);
    }
#line 662 "hlds_out_pred.m"
    {
#line 662 "hlds_out_pred.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__VarNum_20);
    }
#line 663 "hlds_out_pred.m"
    {
#line 663 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 664 "hlds_out_pred.m"
    {
#line 664 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 664 "hlds_out_pred.m"
      return;
    }
#line 635 "hlds_out_pred.m"
  }
#line 631 "hlds_out_pred.m"
}

#line 628 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3(
#line 628 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 628 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 628 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 628 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 628 "hlds_out_pred.m"
{
#line 628 "hlds_out_pred.m"
  {
#line 628 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 628 "hlds_out_pred.m"
    {
#line 628 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 6))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 7))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 628 "hlds_out_pred.m"
      return;
    }
#line 628 "hlds_out_pred.m"
  }
#line 628 "hlds_out_pred.m"
}

#line 623 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_2(
#line 623 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 623 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 623 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 623 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 623 "hlds_out_pred.m"
{
#line 623 "hlds_out_pred.m"
  {
#line 623 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 623 "hlds_out_pred.m"
    {
#line 623 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 6))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 7))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 623 "hlds_out_pred.m"
      return;
    }
#line 623 "hlds_out_pred.m"
  }
#line 623 "hlds_out_pred.m"
}

#line 618 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_1(
#line 618 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 618 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 618 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 618 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 618 "hlds_out_pred.m"
{
#line 618 "hlds_out_pred.m"
  {
#line 618 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 618 "hlds_out_pred.m"
    {
#line 618 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 6))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 7))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 618 "hlds_out_pred.m"
      return;
    }
#line 618 "hlds_out_pred.m"
  }
#line 618 "hlds_out_pred.m"
}

#line 611 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_9,
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_10,
#line 611 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_11,
#line 611 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_12)
#line 611 "hlds_out_pred.m"
{
#line 614 "hlds_out_pred.m"
  {
#line 614 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 614 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38;
#line 614 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeVars_14;
#line 614 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Constraints_15;
#line 614 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ProgVars_16;
#line 614 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_22_22;
#line 614 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_27_27;
#line 614 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_32_32;
#line 618 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_23_23;
#line 623 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_28_28;
#line 628 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv2_STATE_VARIABLE_IO_18;

#line 615 "hlds_out_pred.m"
    {
#line 615 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_11);
    }
#line 616 "hlds_out_pred.m"
    {
#line 616 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% type_info varmap:\n");
    }
#line 617 "hlds_out_pred.m"
    {
#line 617 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_12, &hlds__hlds_out__hlds_out_pred__TypeVars_14);
    }
#line 618 "hlds_out_pred.m"
    {
#line 618 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 618 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[0]));
#line 618 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_1));
#line 618 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 618 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_8));
#line 618 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_9));
#line 618 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarNamePrint_10));
#line 618 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 6) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__RttiVarMaps_12));
#line 618 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 7) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_11));
#line 618 "hlds_out_pred.m"
    }
#line 3743 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 618 "hlds_out_pred.m"
    {
#line 618 "hlds_out_pred.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[4], hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38, hlds__hlds_out__hlds_out_pred__V_22_22, hlds__hlds_out__hlds_out_pred__TypeVars_14, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_23_23);
    }
#line 620 "hlds_out_pred.m"
    {
#line 620 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_11);
    }
#line 621 "hlds_out_pred.m"
    {
#line 621 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% typeclass_info varmap:\n");
    }
#line 622 "hlds_out_pred.m"
    {
#line 622 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_12, &hlds__hlds_out__hlds_out_pred__Constraints_15);
    }
#line 623 "hlds_out_pred.m"
    {
#line 623 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 623 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[1]));
#line 623 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_2));
#line 623 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 623 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_8));
#line 623 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_9));
#line 623 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarNamePrint_10));
#line 623 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 6) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__RttiVarMaps_12));
#line 623 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_27_27, 7) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_11));
#line 623 "hlds_out_pred.m"
    }
#line 623 "hlds_out_pred.m"
    {
#line 623 "hlds_out_pred.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38, hlds__hlds_out__hlds_out_pred__V_27_27, hlds__hlds_out__hlds_out_pred__Constraints_15, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_28_28);
    }
#line 625 "hlds_out_pred.m"
    {
#line 625 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_11);
    }
#line 626 "hlds_out_pred.m"
    {
#line 626 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% rtti_var_info:\n");
    }
#line 627 "hlds_out_pred.m"
    {
#line 627 "hlds_out_pred.m"
      hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_12, &hlds__hlds_out__hlds_out_pred__ProgVars_16);
    }
#line 628 "hlds_out_pred.m"
    {
#line 628 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 628 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[2]));
#line 628 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3));
#line 628 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 628 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_8));
#line 628 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_9));
#line 628 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarNamePrint_10));
#line 628 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 6) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__RttiVarMaps_12));
#line 628 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 7) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_11));
#line 628 "hlds_out_pred.m"
    }
#line 628 "hlds_out_pred.m"
    {
#line 628 "hlds_out_pred.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38, hlds__hlds_out__hlds_out_pred__V_32_32, hlds__hlds_out__hlds_out_pred__ProgVars_16, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv2_STATE_VARIABLE_IO_18);
    }
#line 614 "hlds_out_pred.m"
  }
#line 611 "hlds_out_pred.m"
}

#line 591 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(
#line 591 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_1,
#line 591 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeVarSet_2,
#line 591 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_3,
#line 591 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_4,
#line 591 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_5,
#line 591 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__6_6)
#line 591 "hlds_out_pred.m"
{
#line 594 "hlds_out_pred.m"
  while (MR_TRUE)
#line 594 "hlds_out_pred.m"
    {
#line 594 "hlds_out_pred.m"
      /* tailcall optimized into a loop */
#line 594 "hlds_out_pred.m"
      {
#line 594 "hlds_out_pred.m"
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 594 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 594 "hlds_out_pred.m"
          {
#line 594 "hlds_out_pred.m"
          }
#line 594 "hlds_out_pred.m"
        else
#line 596 "hlds_out_pred.m"
          {
#line 596 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_44_44;
#line 596 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__6_6, (MR_Integer) 0)));
#line 596 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__6_6, (MR_Integer) 1)));
#line 596 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__Type_25;
#line 596 "hlds_out_pred.m"
            MR_Integer hlds__hlds_out__hlds_out_pred__VarNum_26;

#line 597 "hlds_out_pred.m"
            {
#line 597 "hlds_out_pred.m"
              hlds__vartypes__lookup_var_type_3_p_0(hlds__hlds_out__hlds_out_pred__VarTypes_4, hlds__hlds_out__hlds_out_pred__Var_22, &hlds__hlds_out__hlds_out_pred__Type_25);
            }
#line 598 "hlds_out_pred.m"
            {
#line 598 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_5);
            }
#line 599 "hlds_out_pred.m"
            {
#line 599 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% ");
            }
#line 3903 "hlds.hlds_out.hlds_out_pred.c"
            hlds__hlds_out__hlds_out_pred__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 600 "hlds_out_pred.m"
            {
#line 600 "hlds_out_pred.m"
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_pred__VarSet_1, hlds__hlds_out__hlds_out_pred__VarNamePrint_3, hlds__hlds_out__hlds_out_pred__Var_22);
            }
#line 601 "hlds_out_pred.m"
            {
#line 601 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) " (number ");
            }
#line 602 "hlds_out_pred.m"
            {
#line 602 "hlds_out_pred.m"
              mercury__term__var_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_pred__Var_22, &hlds__hlds_out__hlds_out_pred__VarNum_26);
            }
#line 603 "hlds_out_pred.m"
            {
#line 603 "hlds_out_pred.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__VarNum_26);
            }
#line 604 "hlds_out_pred.m"
            {
#line 604 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
#line 605 "hlds_out_pred.m"
            {
#line 605 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) ": ");
            }
#line 606 "hlds_out_pred.m"
            {
#line 606 "hlds_out_pred.m"
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_pred__TypeVarSet_2, hlds__hlds_out__hlds_out_pred__VarNamePrint_3, hlds__hlds_out__hlds_out_pred__Type_25);
            }
#line 607 "hlds_out_pred.m"
            {
#line 607 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 608 "hlds_out_pred.m"
            /* direct tailcall eliminated */
#line 608 "hlds_out_pred.m"
            {
#line 608 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__6__tmp_copy_6 = hlds__hlds_out__hlds_out_pred__Vars_23;

#line 608 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__HeadVar__6_6 = hlds__hlds_out__hlds_out_pred__HeadVar__6__tmp_copy_6;
#line 608 "hlds_out_pred.m"
            }
#line 608 "hlds_out_pred.m"
            continue;
#line 596 "hlds_out_pred.m"
          }
#line 594 "hlds_out_pred.m"
      }
#line 594 "hlds_out_pred.m"
      break;
#line 594 "hlds_out_pred.m"
    }
#line 591 "hlds_out_pred.m"
}

#line 579 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(
#line 579 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
#line 579 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_9,
#line 579 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_10,
#line 579 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_11,
#line 579 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_12)
#line 579 "hlds_out_pred.m"
{
#line 582 "hlds_out_pred.m"
  {
#line 582 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 582 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__NumVarTypes_14;
#line 582 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Vars_15;
#line 582 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_30_30;

#line 583 "hlds_out_pred.m"
    {
#line 583 "hlds_out_pred.m"
      hlds__vartypes__vartypes_count_2_p_0(hlds__hlds_out__hlds_out_pred__VarTypes_12, &hlds__hlds_out__hlds_out_pred__NumVarTypes_14);
    }
#line 584 "hlds_out_pred.m"
    {
#line 584 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_11);
    }
#line 585 "hlds_out_pred.m"
    {
#line 585 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% variable types map ");
    }
#line 586 "hlds_out_pred.m"
    {
#line 586 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 586 "hlds_out_pred.m"
    {
#line 586 "hlds_out_pred.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0], hlds__hlds_out__hlds_out_pred__NumVarTypes_14, &hlds__hlds_out__hlds_out_pred__V_30_30);
    }
#line 586 "hlds_out_pred.m"
    {
#line 586 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_30_30);
    }
#line 586 "hlds_out_pred.m"
    {
#line 586 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " entries):\n");
    }
#line 587 "hlds_out_pred.m"
    {
#line 587 "hlds_out_pred.m"
      hlds__vartypes__vartypes_vars_2_p_0(hlds__hlds_out__hlds_out_pred__VarTypes_12, &hlds__hlds_out__hlds_out_pred__Vars_15);
    }
#line 588 "hlds_out_pred.m"
    {
#line 588 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(hlds__hlds_out__hlds_out_pred__VarSet_8, hlds__hlds_out__hlds_out_pred__TVarSet_9, hlds__hlds_out__hlds_out_pred__VarNamePrint_10, hlds__hlds_out__hlds_out_pred__VarTypes_12, hlds__hlds_out__hlds_out_pred__Indent_11, hlds__hlds_out__hlds_out_pred__Vars_15);
#line 588 "hlds_out_pred.m"
      return;
    }
#line 582 "hlds_out_pred.m"
  }
#line 579 "hlds_out_pred.m"
}

#line 558 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(
#line 558 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_9,
#line 558 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_10,
#line 558 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_11,
#line 558 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_12,
#line 558 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_13,
#line 558 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_14)
#line 558 "hlds_out_pred.m"
{
#line 562 "hlds_out_pred.m"
  {
#line 562 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 562 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__PredName_16;
#line 562 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ModuleName_17;

#line 563 "hlds_out_pred.m"
    {
#line 563 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__PredName_16 = hlds__hlds_module__predicate_name_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_9, hlds__hlds_out__hlds_out_pred__PredId_12);
    }
#line 564 "hlds_out_pred.m"
    {
#line 564 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__ModuleName_17 = hlds__hlds_module__predicate_module_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_9, hlds__hlds_out__hlds_out_pred__PredId_12);
    }
#line 573 "hlds_out_pred.m"
#line 573 "hlds_out_pred.m"
    switch (hlds__hlds_out__hlds_out_pred__PredOrFunc_13) {
#line 573 "hlds_out_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 573 "hlds_out_pred.m"
      case (MR_Integer) 1:
#line 566 "hlds_out_pred.m"
        {
#line 566 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__FuncArgs_18;
#line 566 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__RetVal_19;
#line 566 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__V_24_24;
#line 567 "hlds_out_pred.m"
          MR_Box hlds__hlds_out__hlds_out_pred__conv0_RetVal_19;

#line 567 "hlds_out_pred.m"
          {
#line 567 "hlds_out_pred.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[5], hlds__hlds_out__hlds_out_pred__HeadTerms_14, &hlds__hlds_out__hlds_out_pred__FuncArgs_18, &hlds__hlds_out__hlds_out_pred__conv0_RetVal_19);
          }
#line 567 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__RetVal_19 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_RetVal_19);
#line 569 "hlds_out_pred.m"
          {
#line 569 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 569 "hlds_out_pred.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_16));
#line 569 "hlds_out_pred.m"
          }
#line 568 "hlds_out_pred.m"
          {
#line 568 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(hlds__hlds_out__hlds_out_pred__VarSet_10, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__ModuleName_17, hlds__hlds_out__hlds_out_pred__V_24_24, hlds__hlds_out__hlds_out_pred__FuncArgs_18);
          }
#line 570 "hlds_out_pred.m"
          {
#line 570 "hlds_out_pred.m"
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
#line 571 "hlds_out_pred.m"
          {
#line 571 "hlds_out_pred.m"
            parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_10, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, (MR_Integer) 0, hlds__hlds_out__hlds_out_pred__RetVal_19);
#line 571 "hlds_out_pred.m"
            return;
          }
#line 566 "hlds_out_pred.m"
        }
#line 573 "hlds_out_pred.m"
        break;
#line 573 "hlds_out_pred.m"
      case (MR_Integer) 0:
#line 574 "hlds_out_pred.m"
        {
#line 574 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__V_22_22;

#line 576 "hlds_out_pred.m"
          {
#line 576 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 576 "hlds_out_pred.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_22_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_16));
#line 576 "hlds_out_pred.m"
          }
#line 575 "hlds_out_pred.m"
          {
#line 575 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(hlds__hlds_out__hlds_out_pred__VarSet_10, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__ModuleName_17, hlds__hlds_out__hlds_out_pred__V_22_22, hlds__hlds_out__hlds_out_pred__HeadTerms_14);
#line 575 "hlds_out_pred.m"
            return;
          }
#line 574 "hlds_out_pred.m"
        }
#line 573 "hlds_out_pred.m"
        break;
#line 573 "hlds_out_pred.m"
    }
#line 562 "hlds_out_pred.m"
  }
#line 558 "hlds_out_pred.m"
}

#line 550 "hlds_out_pred.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(
#line 550 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_5,
#line 550 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_6,
#line 550 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_3)
#line 550 "hlds_out_pred.m"
{
#line 553 "hlds_out_pred.m"
  {
#line 553 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 553 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__AnnotatedTerm_9;
#line 553 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__HeadVar__3_3, (MR_Integer) 0)));
#line 553 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__HeadVar__3_3, (MR_Integer) 1)));
#line 553 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_11_11;
#line 553 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_13_13;
#line 553 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_14_14;

#line 555 "hlds_out_pred.m"
    {
#line 555 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_14_14 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_pred__Lang_5, hlds__hlds_out__hlds_out_pred__Context_6, hlds__hlds_out__hlds_out_pred__Mode_8);
    }
#line 555 "hlds_out_pred.m"
    {
#line 555 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_13_13, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_14_14));
#line 555 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "hlds_out_pred.m"
    }
#line 555 "hlds_out_pred.m"
    {
#line 555 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_11_11, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__HeadTerm_7));
#line 555 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_11_11, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_13_13));
#line 555 "hlds_out_pred.m"
    }
#line 554 "hlds_out_pred.m"
    {
#line 554 "hlds_out_pred.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[1], hlds__hlds_out__hlds_out_pred__V_11_11, hlds__hlds_out__hlds_out_pred__Context_6, &hlds__hlds_out__hlds_out_pred__AnnotatedTerm_9);
    }
#line 553 "hlds_out_pred.m"
    return hlds__hlds_out__hlds_out_pred__AnnotatedTerm_9;
#line 553 "hlds_out_pred.m"
  }
#line 550 "hlds_out_pred.m"
}

#line 540 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0_1(
#line 540 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 540 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1)
#line 540 "hlds_out_pred.m"
{
#line 540 "hlds_out_pred.m"
  {
#line 540 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 540 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
#line 540 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__conv1_AnnotatedTerm_9;

#line 540 "hlds_out_pred.m"
    {
#line 540 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__conv1_AnnotatedTerm_9 = hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
#line 540 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv1_AnnotatedTerm_9));
#line 540 "hlds_out_pred.m"
    return hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 540 "hlds_out_pred.m"
  }
#line 540 "hlds_out_pred.m"
}

#line 509 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0(
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_13,
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_14,
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_15,
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_16,
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__WriteWhichModes_17,
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_18,
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_19,
#line 509 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_20,
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_21,
#line 509 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_22)
#line 509 "hlds_out_pred.m"
{
#line 516 "hlds_out_pred.m"
  {
#line 516 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 516 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_24;
#line 516 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Procedures_25;
#line 544 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ProcInfo_26;
#line 519 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_26;

#line 517 "hlds_out_pred.m"
    {
#line 517 "hlds_out_pred.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_13, hlds__hlds_out__hlds_out_pred__PredId_18, &hlds__hlds_out__hlds_out_pred__PredInfo_24);
    }
#line 518 "hlds_out_pred.m"
    {
#line 518 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_24, &hlds__hlds_out__hlds_out_pred__Procedures_25);
    }
#line 519 "hlds_out_pred.m"
    {
#line 519 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__hlds_out__hlds_out_pred__Procedures_25, hlds__hlds_out__hlds_out_pred__ProcId_20, &hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_26);
    }
#line 519 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 519 "hlds_out_pred.m"
      {
#line 519 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__ProcInfo_26 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_26);
#line 519 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__succeeded = MR_TRUE;
#line 519 "hlds_out_pred.m"
      }
#line 544 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 537 "hlds_out_pred.m"
      {
#line 537 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_36_36;
#line 537 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ArgModes_27;
#line 537 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__AnnotatedPairs_28;
#line 537 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__AnnotatedHeadTerms_29;
#line 537 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__V_32_32;
#line 537 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__PredName_50;
#line 537 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ModuleName_51;

#line 534 "hlds_out_pred.m"
#line 534 "hlds_out_pred.m"
        switch (hlds__hlds_out__hlds_out_pred__WriteWhichModes_17) {
#line 534 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 534 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 533 "hlds_out_pred.m"
            {
#line 533 "hlds_out_pred.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_26, &hlds__hlds_out__hlds_out_pred__ArgModes_27);
            }
#line 534 "hlds_out_pred.m"
            break;
#line 534 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 536 "hlds_out_pred.m"
            {
#line 536 "hlds_out_pred.m"
              hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_26, &hlds__hlds_out__hlds_out_pred__ArgModes_27);
            }
#line 534 "hlds_out_pred.m"
            break;
#line 534 "hlds_out_pred.m"
        }
#line 4374 "hlds.hlds_out.hlds_out_pred.c"
        hlds__hlds_out__hlds_out_pred__TypeInfo_36_36 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[5];
#line 538 "hlds_out_pred.m"
        {
#line 538 "hlds_out_pred.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_36_36, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_pred__HeadTerms_22, hlds__hlds_out__hlds_out_pred__ArgModes_27, &hlds__hlds_out__hlds_out_pred__AnnotatedPairs_28);
        }
#line 540 "hlds_out_pred.m"
        {
#line 540 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 540 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[2]));
#line 540 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0_1));
#line 540 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 540 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Lang_14));
#line 540 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Context_21));
#line 540 "hlds_out_pred.m"
        }
#line 540 "hlds_out_pred.m"
        {
#line 540 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__AnnotatedHeadTerms_29 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[1], hlds__hlds_out__hlds_out_pred__TypeInfo_36_36, hlds__hlds_out__hlds_out_pred__V_32_32, hlds__hlds_out__hlds_out_pred__AnnotatedPairs_28);
        }
#line 563 "hlds_out_pred.m"
        {
#line 563 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__PredName_50 = hlds__hlds_module__predicate_name_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_13, hlds__hlds_out__hlds_out_pred__PredId_18);
        }
#line 564 "hlds_out_pred.m"
        {
#line 564 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__ModuleName_51 = hlds__hlds_module__predicate_module_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_13, hlds__hlds_out__hlds_out_pred__PredId_18);
        }
#line 573 "hlds_out_pred.m"
#line 573 "hlds_out_pred.m"
        switch (hlds__hlds_out__hlds_out_pred__PredOrFunc_19) {
#line 573 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 573 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 566 "hlds_out_pred.m"
            {
#line 566 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__FuncArgs_52;
#line 566 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__RetVal_53;
#line 566 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__V_56_56;
#line 567 "hlds_out_pred.m"
              MR_Box hlds__hlds_out__hlds_out_pred__conv2_RetVal_53;

#line 567 "hlds_out_pred.m"
              {
#line 567 "hlds_out_pred.m"
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[5], hlds__hlds_out__hlds_out_pred__AnnotatedHeadTerms_29, &hlds__hlds_out__hlds_out_pred__FuncArgs_52, &hlds__hlds_out__hlds_out_pred__conv2_RetVal_53);
              }
#line 567 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__RetVal_53 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv2_RetVal_53);
#line 569 "hlds_out_pred.m"
              {
#line 569 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 569 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_56_56, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_50));
#line 569 "hlds_out_pred.m"
              }
#line 568 "hlds_out_pred.m"
              {
#line 568 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(hlds__hlds_out__hlds_out_pred__VarSet_15, hlds__hlds_out__hlds_out_pred__VarNamePrint_16, hlds__hlds_out__hlds_out_pred__ModuleName_51, hlds__hlds_out__hlds_out_pred__V_56_56, hlds__hlds_out__hlds_out_pred__FuncArgs_52);
              }
#line 570 "hlds_out_pred.m"
              {
#line 570 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
#line 571 "hlds_out_pred.m"
              {
#line 571 "hlds_out_pred.m"
                parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_15, hlds__hlds_out__hlds_out_pred__VarNamePrint_16, (MR_Integer) 0, hlds__hlds_out__hlds_out_pred__RetVal_53);
#line 571 "hlds_out_pred.m"
                return;
              }
#line 566 "hlds_out_pred.m"
            }
#line 573 "hlds_out_pred.m"
            break;
#line 573 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 574 "hlds_out_pred.m"
            {
#line 574 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__V_54_54;

#line 576 "hlds_out_pred.m"
              {
#line 576 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 576 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_54_54, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_50));
#line 576 "hlds_out_pred.m"
              }
#line 575 "hlds_out_pred.m"
              {
#line 575 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(hlds__hlds_out__hlds_out_pred__VarSet_15, hlds__hlds_out__hlds_out_pred__VarNamePrint_16, hlds__hlds_out__hlds_out_pred__ModuleName_51, hlds__hlds_out__hlds_out_pred__V_54_54, hlds__hlds_out__hlds_out_pred__AnnotatedHeadTerms_29);
#line 575 "hlds_out_pred.m"
                return;
              }
#line 574 "hlds_out_pred.m"
            }
#line 573 "hlds_out_pred.m"
            break;
#line 573 "hlds_out_pred.m"
        }
#line 537 "hlds_out_pred.m"
      }
#line 544 "hlds_out_pred.m"
    else
#line 544 "hlds_out_pred.m"
      {
#line 544 "hlds_out_pred.m"
      }
#line 516 "hlds_out_pred.m"
  }
#line 509 "hlds_out_pred.m"
}

#line 493 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_p_0(
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_1,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_2,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_3,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_4,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__WriteWhichModes_5,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_6,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_7,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__8_8,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Context_9,
#line 493 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_10)
#line 493 "hlds_out_pred.m"
{
#line 498 "hlds_out_pred.m"
  while (MR_TRUE)
#line 498 "hlds_out_pred.m"
    {
#line 498 "hlds_out_pred.m"
      /* tailcall optimized into a loop */
#line 498 "hlds_out_pred.m"
      {
#line 498 "hlds_out_pred.m"
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 498 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__HeadVar__8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 498 "hlds_out_pred.m"
          {
#line 498 "hlds_out_pred.m"
          }
#line 498 "hlds_out_pred.m"
        else
#line 501 "hlds_out_pred.m"
          {
#line 501 "hlds_out_pred.m"
            MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__8_8, (MR_Integer) 0)));
#line 501 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ProcIds_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__8_8, (MR_Integer) 1)));

#line 502 "hlds_out_pred.m"
            {
#line 502 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_1, hlds__hlds_out__hlds_out_pred__Lang_2, hlds__hlds_out__hlds_out_pred__VarSet_3, hlds__hlds_out__hlds_out_pred__VarNamePrint_4, hlds__hlds_out__hlds_out_pred__WriteWhichModes_5, hlds__hlds_out__hlds_out_pred__PredId_6, hlds__hlds_out__hlds_out_pred__PredOrFunc_7, hlds__hlds_out__hlds_out_pred__ProcId_32, hlds__hlds_out__hlds_out_pred__Context_9, hlds__hlds_out__hlds_out_pred__HeadTerms_10);
            }
#line 505 "hlds_out_pred.m"
            /* direct tailcall eliminated */
#line 505 "hlds_out_pred.m"
            {
#line 505 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__8__tmp_copy_8 = hlds__hlds_out__hlds_out_pred__ProcIds_33;

#line 505 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__HeadVar__8_8 = hlds__hlds_out__hlds_out_pred__HeadVar__8__tmp_copy_8;
#line 505 "hlds_out_pred.m"
            }
#line 505 "hlds_out_pred.m"
            continue;
#line 501 "hlds_out_pred.m"
          }
#line 498 "hlds_out_pred.m"
      }
#line 498 "hlds_out_pred.m"
      break;
#line 498 "hlds_out_pred.m"
    }
#line 493 "hlds_out_pred.m"
}

#line 415 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_15,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_16,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_17,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_18,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_19,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_20,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_21,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_22,
#line 415 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_23,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_24,
#line 415 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Clauses_25,
#line 415 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__ClauseNum_26)
#line 415 "hlds_out_pred.m"
{
#line 424 "hlds_out_pred.m"
  while (MR_TRUE)
#line 424 "hlds_out_pred.m"
    {
#line 424 "hlds_out_pred.m"
      /* tailcall optimized into a loop */
#line 424 "hlds_out_pred.m"
      {
#line 424 "hlds_out_pred.m"
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 424 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__Clauses_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "hlds_out_pred.m"
          {
#line 437 "hlds_out_pred.m"
          }
#line 424 "hlds_out_pred.m"
        else
#line 424 "hlds_out_pred.m"
          {
#line 424 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__FirstClause_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Clauses_25, (MR_Integer) 0)));
#line 424 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__LaterClauses_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Clauses_25, (MR_Integer) 1)));
#line 424 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_30;
#line 424 "hlds_out_pred.m"
            MR_Integer hlds__hlds_out__hlds_out_pred__V_40_40;

#line 426 "hlds_out_pred.m"
            {
#line 426 "hlds_out_pred.m"
              mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__HeadVars_24, &hlds__hlds_out__hlds_out_pred__HeadTerms_30);
            }
#line 427 "hlds_out_pred.m"
            {
#line 427 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% clause ");
            }
#line 428 "hlds_out_pred.m"
            {
#line 428 "hlds_out_pred.m"
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__ClauseNum_26);
            }
#line 429 "hlds_out_pred.m"
            {
#line 429 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 430 "hlds_out_pred.m"
            {
#line 430 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_clause_14_p_0(hlds__hlds_out__hlds_out_pred__Info_15, hlds__hlds_out__hlds_out_pred__Lang_16, hlds__hlds_out__hlds_out_pred__ModuleInfo_17, hlds__hlds_out__hlds_out_pred__PredId_18, hlds__hlds_out__hlds_out_pred__PredOrFunc_19, hlds__hlds_out__hlds_out_pred__VarSet_20, hlds__hlds_out__hlds_out_pred__TypeQual_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_22, (MR_Integer) 0, hlds__hlds_out__hlds_out_pred__Indent_23, hlds__hlds_out__hlds_out_pred__HeadTerms_30, hlds__hlds_out__hlds_out_pred__FirstClause_28);
            }
#line 435 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_40_40 = (hlds__hlds_out__hlds_out_pred__ClauseNum_26 + (MR_Integer) 1);
#line 433 "hlds_out_pred.m"
            /* direct tailcall eliminated */
#line 433 "hlds_out_pred.m"
            {
#line 433 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__Clauses__tmp_copy_25 = hlds__hlds_out__hlds_out_pred__LaterClauses_29;
#line 433 "hlds_out_pred.m"
              MR_Integer hlds__hlds_out__hlds_out_pred__ClauseNum__tmp_copy_26 = hlds__hlds_out__hlds_out_pred__V_40_40;

#line 433 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__ClauseNum_26 = hlds__hlds_out__hlds_out_pred__ClauseNum__tmp_copy_26;
#line 433 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__Clauses_25 = hlds__hlds_out__hlds_out_pred__Clauses__tmp_copy_25;
#line 433 "hlds_out_pred.m"
            }
#line 433 "hlds_out_pred.m"
            continue;
#line 424 "hlds_out_pred.m"
          }
#line 424 "hlds_out_pred.m"
      }
#line 424 "hlds_out_pred.m"
      break;
#line 424 "hlds_out_pred.m"
    }
#line 415 "hlds_out_pred.m"
}

#line 404 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_14,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_15,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_16,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_17,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_18,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_19,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_20,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_21,
#line 404 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_22,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_23,
#line 404 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Clauses_24)
#line 404 "hlds_out_pred.m"
{
#line 410 "hlds_out_pred.m"
  {
#line 410 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 410 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadVarList_26;

#line 411 "hlds_out_pred.m"
    {
#line 411 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__HeadVarList_26 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], hlds__hlds_out__hlds_out_pred__HeadVars_23);
    }
#line 412 "hlds_out_pred.m"
    {
#line 412 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(hlds__hlds_out__hlds_out_pred__Info_14, hlds__hlds_out__hlds_out_pred__Lang_15, hlds__hlds_out__hlds_out_pred__ModuleInfo_16, hlds__hlds_out__hlds_out_pred__PredId_17, hlds__hlds_out__hlds_out_pred__PredOrFunc_18, hlds__hlds_out__hlds_out_pred__VarSet_19, hlds__hlds_out__hlds_out_pred__TypeQual_20, hlds__hlds_out__hlds_out_pred__VarNamePrint_21, hlds__hlds_out__hlds_out_pred__Indent_22, hlds__hlds_out__hlds_out_pred__HeadVarList_26, hlds__hlds_out__hlds_out_pred__Clauses_24, (MR_Integer) 1);
#line 412 "hlds_out_pred.m"
      return;
    }
#line 410 "hlds_out_pred.m"
  }
#line 404 "hlds_out_pred.m"
}

#line 365 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(
#line 365 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_3,
#line 365 "hlds_out_pred.m"
  MR_Word * hlds__hlds_out__hlds_out_pred__ClausesInfo_4)
#line 365 "hlds_out_pred.m"
{
#line 368 "hlds_out_pred.m"
  {
#line 368 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 368 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__OptionsStr_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 0)));
#line 368 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__DumpStr_6;
#line 368 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9;
#line 368 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12;
#line 368 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15;
#line 368 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18;
#line 369 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 1)));
#line 369 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 2)));
#line 369 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 3)));
#line 369 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 4)));
#line 399 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_28_28;
#line 399 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_29_29;
#line 399 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_30_30;
#line 399 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_31_31;
#line 399 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_27_27;

#line 372 "hlds_out_pred.m"
    {
#line 372 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 99);
    }
#line 374 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 373 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9 = (MR_String) "c";
#line 374 "hlds_out_pred.m"
    else
#line 374 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9 = (MR_String) "";
#line 377 "hlds_out_pred.m"
    {
#line 377 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 110);
    }
#line 379 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 378 "hlds_out_pred.m"
      {
#line 378 "hlds_out_pred.m"
        {
#line 378 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9, (MR_String) "n");
        }
#line 378 "hlds_out_pred.m"
      }
#line 379 "hlds_out_pred.m"
    else
#line 379 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12 = hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9;
#line 382 "hlds_out_pred.m"
    {
#line 382 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 118);
    }
#line 384 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 383 "hlds_out_pred.m"
      {
#line 383 "hlds_out_pred.m"
        {
#line 383 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12, (MR_String) "v");
        }
#line 383 "hlds_out_pred.m"
      }
#line 384 "hlds_out_pred.m"
    else
#line 384 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15 = hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12;
#line 387 "hlds_out_pred.m"
    {
#line 387 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 103);
    }
#line 389 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 388 "hlds_out_pred.m"
      {
#line 388 "hlds_out_pred.m"
        {
#line 388 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15, (MR_String) "g");
        }
#line 388 "hlds_out_pred.m"
      }
#line 389 "hlds_out_pred.m"
    else
#line 389 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18 = hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15;
#line 392 "hlds_out_pred.m"
    {
#line 392 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 80);
    }
#line 394 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 393 "hlds_out_pred.m"
      {
#line 393 "hlds_out_pred.m"
        {
#line 393 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__DumpStr_6 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18, (MR_String) "P");
        }
#line 393 "hlds_out_pred.m"
      }
#line 394 "hlds_out_pred.m"
    else
#line 394 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__DumpStr_6 = hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18;
#line 399 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 0)));
#line 399 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 1)));
#line 399 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 2)));
#line 399 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 3)));
#line 399 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 4)));
#line 399 "hlds_out_pred.m"
    {
#line 399 "hlds_out_pred.m"
      MR_Word base;
#line 399 "hlds_out_pred.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 399 "hlds_out_pred.m"
      *hlds__hlds_out__hlds_out_pred__ClausesInfo_4 = base;
#line 399 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__DumpStr_6));
#line 399 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_28_28));
#line 399 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_29_29));
#line 399 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_30_30));
#line 399 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__V_31_31));
#line 399 "hlds_out_pred.m"
    }
#line 368 "hlds_out_pred.m"
  }
#line 365 "hlds_out_pred.m"
}

#line 71 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(
#line 71 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__1_1,
#line 71 "hlds_out_pred.m"
  MR_String * hlds__hlds_out__hlds_out_pred__HeadVar__2_2)
#line 71 "hlds_out_pred.m"
{
#line 1313 "hlds_out_pred.m"
  {
#line 1313 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

#line 1313 "hlds_out_pred.m"
    *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_pred_vector_common_4[16 + hlds__hlds_out__hlds_out_pred__HeadVar__1_1]))->hlds__hlds_out__hlds_out_pred__vector_common_type_4_0__vct_4_f_0;
#line 1313 "hlds_out_pred.m"
  }
#line 71 "hlds_out_pred.m"
}

#line 67 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_3_p_0(
#line 67 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Marker_4)
#line 67 "hlds_out_pred.m"
{
#line 1309 "hlds_out_pred.m"
  {
#line 1309 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1309 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__Name_6;

#line 1310 "hlds_out_pred.m"
    {
#line 1310 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(hlds__hlds_out__hlds_out_pred__Marker_4, &hlds__hlds_out__hlds_out_pred__Name_6);
    }
#line 1311 "hlds_out_pred.m"
    {
#line 1311 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Name_6);
#line 1311 "hlds_out_pred.m"
      return;
    }
#line 1309 "hlds_out_pred.m"
  }
#line 67 "hlds_out_pred.m"
}

#line 60 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_p_0(
#line 60 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 60 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__StepDesc_6)
#line 60 "hlds_out_pred.m"
{
#line 1195 "hlds_out_pred.m"
  {
#line 1195 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1195 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__VarName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StepDesc_6, (MR_Integer) 0)));
#line 1195 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TrieStep_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StepDesc_6, (MR_Integer) 1)));
#line 1195 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_17_17;

#line 1197 "hlds_out_pred.m"
    {
#line 1197 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 1198 "hlds_out_pred.m"
    {
#line 1198 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__VarName_8);
    }
#line 1199 "hlds_out_pred.m"
    {
#line 1199 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
#line 1206 "hlds_out_pred.m"
#line 1206 "hlds_out_pred.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__TrieStep_9)) {
#line 1206 "hlds_out_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1206 "hlds_out_pred.m"
      case (MR_Integer) 0:
#line 1206 "hlds_out_pred.m"
#line 1206 "hlds_out_pred.m"
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_pred__TrieStep_9)) {
#line 1206 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1206 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 1219 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "dummy";
#line 1206 "hlds_out_pred.m"
            break;
#line 1206 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 1207 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "int";
#line 1206 "hlds_out_pred.m"
            break;
#line 1206 "hlds_out_pred.m"
          case (MR_Integer) 2:
#line 1210 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "char";
#line 1206 "hlds_out_pred.m"
            break;
#line 1206 "hlds_out_pred.m"
          case (MR_Integer) 3:
#line 1213 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "string";
#line 1206 "hlds_out_pred.m"
            break;
#line 1206 "hlds_out_pred.m"
          case (MR_Integer) 4:
#line 1216 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "float";
#line 1206 "hlds_out_pred.m"
            break;
#line 1206 "hlds_out_pred.m"
          case (MR_Integer) 5:
#line 1225 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "foreign_enum";
#line 1206 "hlds_out_pred.m"
            break;
#line 1206 "hlds_out_pred.m"
          case (MR_Integer) 6:
#line 1247 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "typeinfo";
#line 1206 "hlds_out_pred.m"
            break;
#line 1206 "hlds_out_pred.m"
          case (MR_Integer) 7:
#line 1250 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "typeclassinfo";
#line 1206 "hlds_out_pred.m"
            break;
#line 1206 "hlds_out_pred.m"
          case (MR_Integer) 8:
#line 1253 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_String) "promise_implied";
#line 1206 "hlds_out_pred.m"
            break;
#line 1206 "hlds_out_pred.m"
        }
#line 1206 "hlds_out_pred.m"
        break;
#line 1206 "hlds_out_pred.m"
      case (MR_Integer) 1:
#line 1221 "hlds_out_pred.m"
        {
#line 1221 "hlds_out_pred.m"
          MR_Integer hlds__hlds_out__hlds_out_pred__N_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__TrieStep_9, (MR_Integer) 0)));
#line 1221 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_40_40;
#line 1221 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_41_41;

#line 1222 "hlds_out_pred.m"
          {
#line 1222 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_41_41 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__N_22);
          }
#line 1222 "hlds_out_pred.m"
          {
#line 1222 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_40_40 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__V_41_41, (MR_String) ")");
          }
#line 1222 "hlds_out_pred.m"
          {
#line 1222 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "enum(", hlds__hlds_out__hlds_out_pred__V_40_40);
          }
#line 1221 "hlds_out_pred.m"
        }
#line 1206 "hlds_out_pred.m"
        break;
#line 1206 "hlds_out_pred.m"
      case (MR_Integer) 2:
#line 1227 "hlds_out_pred.m"
        {
#line 1227 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__TrieStep_9, (MR_Integer) 0)));
#line 1227 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__IsPoly_24 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__TrieStep_9, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 1227 "hlds_out_pred.m"
          MR_Word hlds__hlds_out__hlds_out_pred__IsAddr_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__TrieStep_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1227 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__IsPolyStr_26;
#line 1227 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__IsAddrStr_27;
#line 1227 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_29_29;
#line 1227 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_30_30;
#line 1227 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_32_32;
#line 1227 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_34_34;
#line 1227 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_35_35;
#line 1227 "hlds_out_pred.m"
          MR_String hlds__hlds_out__hlds_out_pred__V_37_37;

#line 1231 "hlds_out_pred.m"
#line 1231 "hlds_out_pred.m"
          switch (hlds__hlds_out__hlds_out_pred__IsPoly_24) {
#line 1231 "hlds_out_pred.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1231 "hlds_out_pred.m"
            case (MR_Integer) 0:
#line 1233 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__IsPolyStr_26 = (MR_String) "mono";
#line 1231 "hlds_out_pred.m"
              break;
#line 1231 "hlds_out_pred.m"
            case (MR_Integer) 1:
#line 1230 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__IsPolyStr_26 = (MR_String) "poly";
#line 1231 "hlds_out_pred.m"
              break;
#line 1231 "hlds_out_pred.m"
          }
#line 1238 "hlds_out_pred.m"
#line 1238 "hlds_out_pred.m"
          switch (hlds__hlds_out__hlds_out_pred__IsAddr_25) {
#line 1238 "hlds_out_pred.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1238 "hlds_out_pred.m"
            case (MR_Integer) 1:
#line 1240 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__IsAddrStr_27 = (MR_String) "addr";
#line 1238 "hlds_out_pred.m"
              break;
#line 1238 "hlds_out_pred.m"
            case (MR_Integer) 0:
#line 1237 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__IsAddrStr_27 = (MR_String) "value";
#line 1238 "hlds_out_pred.m"
              break;
#line 1238 "hlds_out_pred.m"
          }
#line 1243 "hlds_out_pred.m"
          {
#line 1243 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_30_30 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(hlds__hlds_out__hlds_out_pred__TVarSet_5, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__Type_23);
          }
#line 1244 "hlds_out_pred.m"
          {
#line 1244 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_37_37 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__IsAddrStr_27, (MR_String) ")");
          }
#line 1244 "hlds_out_pred.m"
          {
#line 1244 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_37_37);
          }
#line 1244 "hlds_out_pred.m"
          {
#line 1244 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_34_34 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__IsPolyStr_26, hlds__hlds_out__hlds_out_pred__V_35_35);
          }
#line 1244 "hlds_out_pred.m"
          {
#line 1244 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_34_34);
          }
#line 1243 "hlds_out_pred.m"
          {
#line 1243 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_29_29 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__V_30_30, hlds__hlds_out__hlds_out_pred__V_32_32);
          }
#line 1242 "hlds_out_pred.m"
          {
#line 1242 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "general(", hlds__hlds_out__hlds_out_pred__V_29_29);
          }
#line 1227 "hlds_out_pred.m"
        }
#line 1206 "hlds_out_pred.m"
        break;
#line 1206 "hlds_out_pred.m"
    }
#line 1200 "hlds_out_pred.m"
    {
#line 1200 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_17_17);
#line 1200 "hlds_out_pred.m"
      return;
    }
#line 1195 "hlds_out_pred.m"
  }
#line 60 "hlds_out_pred.m"
}

#line 1160 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_2(
#line 1160 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1160 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1160 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1160 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 1160 "hlds_out_pred.m"
{
#line 1160 "hlds_out_pred.m"
  {
#line 1160 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 1160 "hlds_out_pred.m"
    {
#line 1160 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 1160 "hlds_out_pred.m"
      return;
    }
#line 1160 "hlds_out_pred.m"
  }
#line 1160 "hlds_out_pred.m"
}

#line 1153 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_1(
#line 1153 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1153 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1153 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1153 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 1153 "hlds_out_pred.m"
{
#line 1153 "hlds_out_pred.m"
  {
#line 1153 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 1153 "hlds_out_pred.m"
    {
#line 1153 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 1153 "hlds_out_pred.m"
      return;
    }
#line 1153 "hlds_out_pred.m"
  }
#line 1153 "hlds_out_pred.m"
}

#line 57 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0(
#line 57 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
#line 57 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TableArgInfos_6)
#line 57 "hlds_out_pred.m"
{
#line 1150 "hlds_out_pred.m"
  {
#line 1150 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 1150 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_27_27;
#line 1150 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ArgInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__TableArgInfos_6, (MR_Integer) 0)));
#line 1150 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TVarMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__TableArgInfos_6, (MR_Integer) 1)));
#line 1150 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TVarPairs_10;
#line 1150 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_17_17;
#line 1153 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_18_18;

#line 1152 "hlds_out_pred.m"
    {
#line 1152 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "% arg infos:\n");
    }
#line 1153 "hlds_out_pred.m"
    {
#line 1153 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1153 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[0]));
#line 1153 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_1));
#line 1153 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1153 "hlds_out_pred.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_17_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_5));
#line 1153 "hlds_out_pred.m"
    }
#line 5334 "hlds.hlds_out.hlds_out_pred.c"
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_27_27 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1153 "hlds_out_pred.m"
    {
#line 1153 "hlds_out_pred.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_arg_info_0, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_27_27, hlds__hlds_out__hlds_out_pred__V_17_17, hlds__hlds_out__hlds_out_pred__ArgInfos_8, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_18_18);
    }
#line 1154 "hlds_out_pred.m"
    {
#line 1154 "hlds_out_pred.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[4], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0, hlds__hlds_out__hlds_out_pred__TVarMap_9, &hlds__hlds_out__hlds_out_pred__TVarPairs_10);
    }
#line 1157 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__TVarPairs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1156 "hlds_out_pred.m"
      {
#line 1156 "hlds_out_pred.m"
      }
#line 1157 "hlds_out_pred.m"
    else
#line 1158 "hlds_out_pred.m"
      {
#line 1158 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__V_21_21;
#line 1160 "hlds_out_pred.m"
        MR_Box hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_14;

#line 1159 "hlds_out_pred.m"
        {
#line 1159 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% type var map:\n");
        }
#line 1160 "hlds_out_pred.m"
        {
#line 1160 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1160 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_21_21, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[1]));
#line 1160 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_2));
#line 1160 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1160 "hlds_out_pred.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_21_21, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_5));
#line 1160 "hlds_out_pred.m"
        }
#line 1160 "hlds_out_pred.m"
        {
#line 1160 "hlds_out_pred.m"
          mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[0], hlds__hlds_out__hlds_out_pred__TypeCtorInfo_27_27, hlds__hlds_out__hlds_out_pred__V_21_21, hlds__hlds_out__hlds_out_pred__TVarPairs_10, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_14);
        }
#line 1158 "hlds_out_pred.m"
      }
#line 1150 "hlds_out_pred.m"
  }
#line 57 "hlds_out_pred.m"
}

#line 1021 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0_1(
#line 1021 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 1021 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 1021 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 1021 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 1021 "hlds_out_pred.m"
{
#line 1021 "hlds_out_pred.m"
  {
#line 1021 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 1021 "hlds_out_pred.m"
    {
#line 1021 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__1021__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 1021 "hlds_out_pred.m"
      return;
    }
#line 1021 "hlds_out_pred.m"
  }
#line 1021 "hlds_out_pred.m"
}

#line 51 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0(
#line 51 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_11,
#line 51 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_12,
#line 51 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_13,
#line 51 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredStatus_14,
#line 51 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_15,
#line 51 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_16,
#line 51 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_17,
#line 51 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ProcInfo_18)
#line 51 "hlds_out_pred.m"
{
#line 773 "hlds_out_pred.m"
  {
#line 773 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_20;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_21;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_22;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__DeclaredDeterminism_23;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__InferredDeterminism_24;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarSet_25;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_26;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadModes_27;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeArgLives_28;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__RegR_HeadVars_29;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeArgInfos_30;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Goal_31;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ModeContext_32;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeArgSize_33;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeTermination_34;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeStructureSharing_35;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeStructureReuse_36;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_37;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__EvalMethod_38;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__IsAddressTaken_39;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HasParallelConj_40;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HasUserEvent_41;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeProcTableIOInfo_42;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeCallTableTip_43;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeDeepProfileInfo_44;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeUntupleInfo_45;
#line 773 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemap_46;
#line 773 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__Indent1_47;
#line 773 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__DumpOptions_48;
#line 803 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_239_239;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_240_240;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_241_241;
#line 803 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_242_242;

#line 774 "hlds_out_pred.m"
    {
#line 774 "hlds_out_pred.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_12, hlds__hlds_out__hlds_out_pred__PredId_13, &hlds__hlds_out__hlds_out_pred__PredInfo_20);
    }
#line 775 "hlds_out_pred.m"
    {
#line 775 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_20, &hlds__hlds_out__hlds_out_pred__TVarSet_21);
    }
#line 776 "hlds_out_pred.m"
    {
#line 776 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__VarTypes_22);
    }
#line 777 "hlds_out_pred.m"
    {
#line 777 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__DeclaredDeterminism_23);
    }
#line 778 "hlds_out_pred.m"
    {
#line 778 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__InferredDeterminism_24);
    }
#line 779 "hlds_out_pred.m"
    {
#line 779 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__VarSet_25);
    }
#line 780 "hlds_out_pred.m"
    {
#line 780 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__HeadVars_26);
    }
#line 781 "hlds_out_pred.m"
    {
#line 781 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__HeadModes_27);
    }
#line 782 "hlds_out_pred.m"
    {
#line 782 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_arglives_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeArgLives_28);
    }
#line 783 "hlds_out_pred.m"
    {
#line 783 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_reg_r_headvars_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__RegR_HeadVars_29);
    }
#line 784 "hlds_out_pred.m"
    {
#line 784 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_arg_info_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeArgInfos_30);
    }
#line 785 "hlds_out_pred.m"
    {
#line 785 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__Goal_31);
    }
#line 786 "hlds_out_pred.m"
    {
#line 786 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__ModeContext_32);
    }
#line 787 "hlds_out_pred.m"
    {
#line 787 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeArgSize_33);
    }
#line 788 "hlds_out_pred.m"
    {
#line 788 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeTermination_34);
    }
#line 789 "hlds_out_pred.m"
    {
#line 789 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_structure_sharing_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeStructureSharing_35);
    }
#line 790 "hlds_out_pred.m"
    {
#line 790 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_structure_reuse_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeStructureReuse_36);
    }
#line 791 "hlds_out_pred.m"
    {
#line 791 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__RttiVarMaps_37);
    }
#line 792 "hlds_out_pred.m"
    {
#line 792 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_eval_method_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__EvalMethod_38);
    }
#line 793 "hlds_out_pred.m"
    {
#line 793 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__IsAddressTaken_39);
    }
#line 794 "hlds_out_pred.m"
    {
#line 794 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__HasParallelConj_40);
    }
#line 795 "hlds_out_pred.m"
    {
#line 795 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__HasUserEvent_41);
    }
#line 796 "hlds_out_pred.m"
    {
#line 796 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_proc_table_io_info_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeProcTableIOInfo_42);
    }
#line 797 "hlds_out_pred.m"
    {
#line 797 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeCallTableTip_43);
    }
#line 798 "hlds_out_pred.m"
    {
#line 798 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeDeepProfileInfo_44);
    }
#line 799 "hlds_out_pred.m"
    {
#line 799 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_maybe_untuple_info_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeUntupleInfo_45);
    }
#line 800 "hlds_out_pred.m"
    {
#line 800 "hlds_out_pred.m"
      hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__VarNameRemap_46);
    }
#line 801 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__Indent1_47 = (hlds__hlds_out__hlds_out_pred__Indent_16 + (MR_Integer) 1);
#line 803 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__DumpOptions_48 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 0)));
#line 803 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_239_239 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 1)));
#line 803 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 2)));
#line 803 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 3)));
#line 803 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 4)));
#line 804 "hlds_out_pred.m"
    {
#line 804 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_48, (MR_Char) 120);
    }
#line 1054 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 805 "hlds_out_pred.m"
      {
#line 805 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_247_247;
#line 805 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__PredInt_49;
#line 805 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__ProcInt_50;
#line 805 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapList_82;
#line 805 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__PredName_85;
#line 805 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_86;
#line 805 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ModeVarSet_87;
#line 805 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_113_113;
#line 1034 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ArgInfos_92;
#line 1038 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__V_230_230;
#line 1038 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__V_260_260;

#line 805 "hlds_out_pred.m"
        {
#line 805 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent1_47);
        }
#line 806 "hlds_out_pred.m"
        {
#line 806 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% pred id ");
        }
#line 807 "hlds_out_pred.m"
        {
#line 807 "hlds_out_pred.m"
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__PredId_13, &hlds__hlds_out__hlds_out_pred__PredInt_49);
        }
#line 808 "hlds_out_pred.m"
        {
#line 808 "hlds_out_pred.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__PredInt_49);
        }
#line 809 "hlds_out_pred.m"
        {
#line 809 "hlds_out_pred.m"
          mercury__io__nl_2_p_0();
        }
#line 810 "hlds_out_pred.m"
        {
#line 810 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent1_47);
        }
#line 811 "hlds_out_pred.m"
        {
#line 811 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% mode number ");
        }
#line 812 "hlds_out_pred.m"
        {
#line 812 "hlds_out_pred.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__ProcId_17, &hlds__hlds_out__hlds_out_pred__ProcInt_50);
        }
#line 813 "hlds_out_pred.m"
        {
#line 813 "hlds_out_pred.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__ProcInt_50);
        }
#line 814 "hlds_out_pred.m"
        {
#line 814 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) " of ");
        }
#line 815 "hlds_out_pred.m"
        {
#line 815 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_12, hlds__hlds_out__hlds_out_pred__PredId_13);
        }
#line 816 "hlds_out_pred.m"
        {
#line 816 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) " (");
        }
#line 817 "hlds_out_pred.m"
        {
#line 817 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_113_113 = parse_tree__prog_out__determinism_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__InferredDeterminism_24);
        }
#line 817 "hlds_out_pred.m"
        {
#line 817 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_113_113);
        }
#line 818 "hlds_out_pred.m"
        {
#line 818 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "):\n");
        }
#line 820 "hlds_out_pred.m"
        {
#line 820 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_48, (MR_Char) 116);
        }
#line 829 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 821 "hlds_out_pred.m"
          {
#line 821 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_243_243;

#line 821 "hlds_out_pred.m"
            {
#line 821 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
#line 822 "hlds_out_pred.m"
            {
#line 822 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% Arg size properties: ");
            }
#line 5790 "hlds.hlds_out.hlds_out_pred.c"
            hlds__hlds_out__hlds_out_pred__TypeInfo_243_243 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[1];
#line 823 "hlds_out_pred.m"
            {
#line 823 "hlds_out_pred.m"
              parse_tree__parse_tree_out_pragma__write_maybe_arg_size_info_4_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_243_243, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__MaybeArgSize_33);
            }
#line 824 "hlds_out_pred.m"
            {
#line 824 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 825 "hlds_out_pred.m"
            {
#line 825 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
#line 826 "hlds_out_pred.m"
            {
#line 826 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% Termination properties: ");
            }
#line 827 "hlds_out_pred.m"
            {
#line 827 "hlds_out_pred.m"
              parse_tree__parse_tree_out_pragma__write_maybe_termination_info_4_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, hlds__hlds_out__hlds_out_pred__TypeInfo_243_243, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__MaybeTermination_34);
            }
#line 828 "hlds_out_pred.m"
            {
#line 828 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 821 "hlds_out_pred.m"
          }
#line 829 "hlds_out_pred.m"
        else
#line 829 "hlds_out_pred.m"
          {
#line 829 "hlds_out_pred.m"
          }
#line 834 "hlds_out_pred.m"
        {
#line 834 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_48, (MR_Char) 83);
        }
#line 847 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 835 "hlds_out_pred.m"
          {
#line 835 "hlds_out_pred.m"
            {
#line 835 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
#line 836 "hlds_out_pred.m"
            {
#line 836 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% Structure sharing: \n");
            }
#line 843 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MaybeStructureSharing_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 844 "hlds_out_pred.m"
              {
#line 845 "hlds_out_pred.m"
                {
#line 845 "hlds_out_pred.m"
                  parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__TVarSet_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                }
#line 844 "hlds_out_pred.m"
              }
#line 843 "hlds_out_pred.m"
            else
#line 838 "hlds_out_pred.m"
              {
#line 838 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__StructureSharing_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeStructureSharing_35, (MR_Integer) 0)));
#line 838 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__SharingAs_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StructureSharing_51, (MR_Integer) 0)));
#line 838 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__V_136_136;
#line 839 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred___Status_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StructureSharing_51, (MR_Integer) 1)));

#line 842 "hlds_out_pred.m"
                {
#line 842 "hlds_out_pred.m"
                  hlds__hlds_out__hlds_out_pred__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 842 "hlds_out_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_136_136, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__SharingAs_52));
#line 842 "hlds_out_pred.m"
                }
#line 841 "hlds_out_pred.m"
                {
#line 841 "hlds_out_pred.m"
                  parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__V_136_136);
                }
#line 838 "hlds_out_pred.m"
              }
#line 835 "hlds_out_pred.m"
          }
#line 847 "hlds_out_pred.m"
        else
#line 847 "hlds_out_pred.m"
          {
#line 847 "hlds_out_pred.m"
          }
#line 852 "hlds_out_pred.m"
        {
#line 852 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_48, (MR_Char) 82);
        }
#line 865 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 853 "hlds_out_pred.m"
          {
#line 853 "hlds_out_pred.m"
            {
#line 853 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
#line 854 "hlds_out_pred.m"
            {
#line 854 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% Structure reuse: \n");
            }
#line 861 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MaybeStructureReuse_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 862 "hlds_out_pred.m"
              {
#line 863 "hlds_out_pred.m"
                {
#line 863 "hlds_out_pred.m"
                  parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__TVarSet_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                }
#line 862 "hlds_out_pred.m"
              }
#line 861 "hlds_out_pred.m"
            else
#line 856 "hlds_out_pred.m"
              {
#line 856 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__StructureReuse_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeStructureReuse_36, (MR_Integer) 0)));
#line 856 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__ReuseAs_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StructureReuse_54, (MR_Integer) 0)));
#line 856 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__V_144_144;
#line 857 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred___ReuseStatus_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StructureReuse_54, (MR_Integer) 1)));

#line 860 "hlds_out_pred.m"
                {
#line 860 "hlds_out_pred.m"
                  hlds__hlds_out__hlds_out_pred__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "hlds_out_pred.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_144_144, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__ReuseAs_55));
#line 860 "hlds_out_pred.m"
                }
#line 859 "hlds_out_pred.m"
                {
#line 859 "hlds_out_pred.m"
                  parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__V_144_144);
                }
#line 856 "hlds_out_pred.m"
              }
#line 853 "hlds_out_pred.m"
          }
#line 865 "hlds_out_pred.m"
        else
#line 865 "hlds_out_pred.m"
          {
#line 865 "hlds_out_pred.m"
          }
#line 869 "hlds_out_pred.m"
        {
#line 869 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
        }
#line 870 "hlds_out_pred.m"
        {
#line 870 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__Indent_16, hlds__hlds_out__hlds_out_pred__VarTypes_22);
        }
#line 871 "hlds_out_pred.m"
        {
#line 871 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__Indent_16, hlds__hlds_out__hlds_out_pred__RttiVarMaps_37);
        }
#line 877 "hlds_out_pred.m"
#line 877 "hlds_out_pred.m"
        switch (hlds__hlds_out__hlds_out_pred__IsAddressTaken_39) {
#line 877 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 877 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 878 "hlds_out_pred.m"
            {
#line 879 "hlds_out_pred.m"
              {
#line 879 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% address is not taken\n");
              }
#line 878 "hlds_out_pred.m"
            }
#line 877 "hlds_out_pred.m"
            break;
#line 877 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 875 "hlds_out_pred.m"
            {
#line 876 "hlds_out_pred.m"
              {
#line 876 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% address is taken\n");
              }
#line 875 "hlds_out_pred.m"
            }
#line 877 "hlds_out_pred.m"
            break;
#line 877 "hlds_out_pred.m"
        }
#line 884 "hlds_out_pred.m"
#line 884 "hlds_out_pred.m"
        switch (hlds__hlds_out__hlds_out_pred__HasParallelConj_40) {
#line 884 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 884 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 885 "hlds_out_pred.m"
            {
#line 886 "hlds_out_pred.m"
              {
#line 886 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% does not contain parallel conjunction\n");
              }
#line 885 "hlds_out_pred.m"
            }
#line 884 "hlds_out_pred.m"
            break;
#line 884 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 882 "hlds_out_pred.m"
            {
#line 883 "hlds_out_pred.m"
              {
#line 883 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% contains parallel conjunction\n");
              }
#line 882 "hlds_out_pred.m"
            }
#line 884 "hlds_out_pred.m"
            break;
#line 884 "hlds_out_pred.m"
        }
#line 891 "hlds_out_pred.m"
#line 891 "hlds_out_pred.m"
        switch (hlds__hlds_out__hlds_out_pred__HasUserEvent_41) {
#line 891 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 891 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 892 "hlds_out_pred.m"
            {
#line 893 "hlds_out_pred.m"
              {
#line 893 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% does not contain user event\n");
              }
#line 892 "hlds_out_pred.m"
            }
#line 891 "hlds_out_pred.m"
            break;
#line 891 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 889 "hlds_out_pred.m"
            {
#line 890 "hlds_out_pred.m"
              {
#line 890 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% contains user event\n");
              }
#line 889 "hlds_out_pred.m"
            }
#line 891 "hlds_out_pred.m"
            break;
#line 891 "hlds_out_pred.m"
        }
#line 897 "hlds_out_pred.m"
#line 897 "hlds_out_pred.m"
        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__EvalMethod_38)) {
#line 897 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 897 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 897 "hlds_out_pred.m"
#line 897 "hlds_out_pred.m"
            switch (MR_unmkbody(hlds__hlds_out__hlds_out_pred__EvalMethod_38)) {
#line 897 "hlds_out_pred.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 897 "hlds_out_pred.m"
              case (MR_Integer) 0:
#line 896 "hlds_out_pred.m"
                {
#line 896 "hlds_out_pred.m"
                }
#line 897 "hlds_out_pred.m"
                break;
#line 897 "hlds_out_pred.m"
              case (MR_Integer) 1:
#line 897 "hlds_out_pred.m"
              case (MR_Integer) 2:
#line 902 "hlds_out_pred.m"
                {
#line 903 "hlds_out_pred.m"
                  {
#line 903 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "% eval method: ");
                  }
#line 904 "hlds_out_pred.m"
                  {
#line 904 "hlds_out_pred.m"
                    parse_tree__prog_out__write_eval_method_3_p_0(hlds__hlds_out__hlds_out_pred__EvalMethod_38);
                  }
#line 905 "hlds_out_pred.m"
                  {
#line 905 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
#line 902 "hlds_out_pred.m"
                }
#line 897 "hlds_out_pred.m"
                break;
#line 897 "hlds_out_pred.m"
            }
#line 897 "hlds_out_pred.m"
            break;
#line 897 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 897 "hlds_out_pred.m"
          case (MR_Integer) 2:
#line 902 "hlds_out_pred.m"
            {
#line 903 "hlds_out_pred.m"
              {
#line 903 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% eval method: ");
              }
#line 904 "hlds_out_pred.m"
              {
#line 904 "hlds_out_pred.m"
                parse_tree__prog_out__write_eval_method_3_p_0(hlds__hlds_out__hlds_out_pred__EvalMethod_38);
              }
#line 905 "hlds_out_pred.m"
              {
#line 905 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 902 "hlds_out_pred.m"
            }
#line 897 "hlds_out_pred.m"
            break;
#line 897 "hlds_out_pred.m"
        }
#line 910 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MaybeProcTableIOInfo_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 911 "hlds_out_pred.m"
          {
#line 911 "hlds_out_pred.m"
          }
#line 910 "hlds_out_pred.m"
        else
#line 908 "hlds_out_pred.m"
          {
#line 908 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeProcTableIOInfo_42, (MR_Integer) 0)));

#line 909 "hlds_out_pred.m"
            {
#line 909 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_60);
            }
#line 908 "hlds_out_pred.m"
          }
#line 918 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MaybeCallTableTip_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 919 "hlds_out_pred.m"
          {
#line 919 "hlds_out_pred.m"
          }
#line 918 "hlds_out_pred.m"
        else
#line 914 "hlds_out_pred.m"
          {
#line 914 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__CallTableTip_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeCallTableTip_43, (MR_Integer) 0)));

#line 915 "hlds_out_pred.m"
            {
#line 915 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% call table tip: ");
            }
#line 916 "hlds_out_pred.m"
            {
#line 916 "hlds_out_pred.m"
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__CallTableTip_61);
            }
#line 917 "hlds_out_pred.m"
            {
#line 917 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 914 "hlds_out_pred.m"
          }
#line 969 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MaybeDeepProfileInfo_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 970 "hlds_out_pred.m"
          {
#line 970 "hlds_out_pred.m"
          }
#line 969 "hlds_out_pred.m"
        else
#line 922 "hlds_out_pred.m"
          {
#line 922 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__DeepProfileInfo_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeDeepProfileInfo_44, (MR_Integer) 0)));
#line 922 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__MaybeRecInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepProfileInfo_62, (MR_Integer) 0)));
#line 922 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__MaybeDeepLayout_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepProfileInfo_62, (MR_Integer) 1)));
#line 923 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepProfileInfo_62, (MR_Integer) 2)));

#line 943 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MaybeRecInfo_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 944 "hlds_out_pred.m"
              {
#line 944 "hlds_out_pred.m"
              }
#line 943 "hlds_out_pred.m"
            else
#line 926 "hlds_out_pred.m"
              {
#line 926 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__DeepRecInfo_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeRecInfo_63, (MR_Integer) 0)));
#line 926 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__Role_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepRecInfo_66, (MR_Integer) 0)));
#line 926 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__DeepPredProcId_69;
#line 926 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__DeepPredId_70;
#line 926 "hlds_out_pred.m"
                MR_Integer hlds__hlds_out__hlds_out_pred__DeepProcId_71;
#line 926 "hlds_out_pred.m"
                MR_Integer hlds__hlds_out__hlds_out_pred__DeepPredInt_72;
#line 926 "hlds_out_pred.m"
                MR_Integer hlds__hlds_out__hlds_out_pred__DeepProcInt_73;
#line 927 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepRecInfo_66, (MR_Integer) 1)));

#line 928 "hlds_out_pred.m"
                {
#line 928 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "% deep recursion info: ");
                }
#line 932 "hlds_out_pred.m"
                if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Role_67)) == (MR_mktag((MR_Integer) 0))))
#line 930 "hlds_out_pred.m"
                  {
#line 930 "hlds_out_pred.m"
                    hlds__hlds_out__hlds_out_pred__DeepPredProcId_69 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_pred__Role_67), (MR_Integer) 0);
#line 931 "hlds_out_pred.m"
                    {
#line 931 "hlds_out_pred.m"
                      mercury__io__write_string_3_p_0((MR_String) "inner, outer is ");
                    }
#line 930 "hlds_out_pred.m"
                  }
#line 932 "hlds_out_pred.m"
                else
#line 933 "hlds_out_pred.m"
                  {
#line 933 "hlds_out_pred.m"
                    hlds__hlds_out__hlds_out_pred__DeepPredProcId_69 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_pred__Role_67), (MR_Integer) 1);
#line 934 "hlds_out_pred.m"
                    {
#line 934 "hlds_out_pred.m"
                      mercury__io__write_string_3_p_0((MR_String) "outer, inner is ");
                    }
#line 933 "hlds_out_pred.m"
                  }
#line 936 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__DeepPredId_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepPredProcId_69, (MR_Integer) 0)));
#line 936 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__DeepProcId_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepPredProcId_69, (MR_Integer) 1)));
#line 937 "hlds_out_pred.m"
                {
#line 937 "hlds_out_pred.m"
                  hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__DeepPredId_70, &hlds__hlds_out__hlds_out_pred__DeepPredInt_72);
                }
#line 938 "hlds_out_pred.m"
                {
#line 938 "hlds_out_pred.m"
                  hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__DeepProcId_71, &hlds__hlds_out__hlds_out_pred__DeepProcInt_73);
                }
#line 939 "hlds_out_pred.m"
                {
#line 939 "hlds_out_pred.m"
                  mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__DeepPredInt_72);
                }
#line 940 "hlds_out_pred.m"
                {
#line 940 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "/");
                }
#line 941 "hlds_out_pred.m"
                {
#line 941 "hlds_out_pred.m"
                  mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__DeepProcInt_73);
                }
#line 942 "hlds_out_pred.m"
                {
#line 942 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 926 "hlds_out_pred.m"
              }
#line 966 "hlds_out_pred.m"
            if ((hlds__hlds_out__hlds_out_pred__MaybeDeepLayout_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 967 "hlds_out_pred.m"
              {
#line 967 "hlds_out_pred.m"
              }
#line 966 "hlds_out_pred.m"
            else
#line 947 "hlds_out_pred.m"
              {
#line 947 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_246_246;
#line 947 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__DeepLayout_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeDeepLayout_64, (MR_Integer) 0)));
#line 947 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__ProcStatic_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepLayout_74, (MR_Integer) 0)));
#line 947 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__ExcpVars_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepLayout_74, (MR_Integer) 1)));
#line 947 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__TopCSD_77;
#line 947 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__MiddleCSD_78;
#line 947 "hlds_out_pred.m"
                MR_Word hlds__hlds_out__hlds_out_pred__MaybeOldOutermost_79;

#line 949 "hlds_out_pred.m"
                {
#line 949 "hlds_out_pred.m"
                  hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0(hlds__hlds_out__hlds_out_pred__ProcStatic_75);
                }
#line 950 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__TopCSD_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ExcpVars_76, (MR_Integer) 0)));
#line 950 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__MiddleCSD_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ExcpVars_76, (MR_Integer) 1)));
#line 950 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__MaybeOldOutermost_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ExcpVars_76, (MR_Integer) 2)));
#line 952 "hlds_out_pred.m"
                {
#line 952 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "% deep layout info: ");
                }
#line 953 "hlds_out_pred.m"
                {
#line 953 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "TopCSD is ");
                }
#line 6361 "hlds.hlds_out.hlds_out_pred.c"
                hlds__hlds_out__hlds_out_pred__TypeCtorInfo_246_246 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 954 "hlds_out_pred.m"
                {
#line 954 "hlds_out_pred.m"
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_246_246, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__TopCSD_77);
                }
#line 955 "hlds_out_pred.m"
                {
#line 955 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) ", MiddleCSD is ");
                }
#line 956 "hlds_out_pred.m"
                {
#line 956 "hlds_out_pred.m"
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_246_246, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__MiddleCSD_78);
                }
#line 962 "hlds_out_pred.m"
                if ((hlds__hlds_out__hlds_out_pred__MaybeOldOutermost_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 963 "hlds_out_pred.m"
                  {
#line 963 "hlds_out_pred.m"
                  }
#line 962 "hlds_out_pred.m"
                else
#line 958 "hlds_out_pred.m"
                  {
#line 958 "hlds_out_pred.m"
                    MR_Word hlds__hlds_out__hlds_out_pred__OldOutermost_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeOldOutermost_79, (MR_Integer) 0)));

#line 959 "hlds_out_pred.m"
                    {
#line 959 "hlds_out_pred.m"
                      mercury__io__write_string_3_p_0((MR_String) ", OldOutermost is ");
                    }
#line 960 "hlds_out_pred.m"
                    {
#line 960 "hlds_out_pred.m"
                      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_246_246, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__OldOutermost_80);
                    }
#line 958 "hlds_out_pred.m"
                  }
#line 965 "hlds_out_pred.m"
                {
#line 965 "hlds_out_pred.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 947 "hlds_out_pred.m"
              }
#line 922 "hlds_out_pred.m"
          }
#line 975 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MaybeUntupleInfo_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 976 "hlds_out_pred.m"
          {
#line 976 "hlds_out_pred.m"
          }
#line 975 "hlds_out_pred.m"
        else
#line 973 "hlds_out_pred.m"
          {
#line 973 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__UntupleInfo_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeUntupleInfo_45, (MR_Integer) 0)));

#line 974 "hlds_out_pred.m"
            {
#line 974 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__Indent_16, hlds__hlds_out__hlds_out_pred__UntupleInfo_81);
            }
#line 973 "hlds_out_pred.m"
          }
#line 6432 "hlds.hlds_out.hlds_out_pred.c"
        hlds__hlds_out__hlds_out_pred__TypeInfo_247_247 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0];
#line 978 "hlds_out_pred.m"
        {
#line 978 "hlds_out_pred.m"
          mercury__map__to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_247_247, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_pred__VarNameRemap_46, &hlds__hlds_out__hlds_out_pred__VarNameRemapList_82);
        }
#line 981 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__VarNameRemapList_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 980 "hlds_out_pred.m"
          {
#line 980 "hlds_out_pred.m"
          }
#line 981 "hlds_out_pred.m"
        else
#line 982 "hlds_out_pred.m"
          {
#line 982 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapHead_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarNameRemapList_82, (MR_Integer) 0)));
#line 982 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapTail_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarNameRemapList_82, (MR_Integer) 1)));

#line 983 "hlds_out_pred.m"
            {
#line 983 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
#line 984 "hlds_out_pred.m"
            {
#line 984 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% var name remap: ");
            }
#line 985 "hlds_out_pred.m"
            {
#line 985 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__VarNameRemapHead_83, hlds__hlds_out__hlds_out_pred__VarNameRemapTail_84);
            }
#line 987 "hlds_out_pred.m"
            {
#line 987 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 982 "hlds_out_pred.m"
          }
#line 990 "hlds_out_pred.m"
        {
#line 990 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
        }
#line 991 "hlds_out_pred.m"
        {
#line 991 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__PredName_85 = hlds__hlds_module__predicate_name_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_12, hlds__hlds_out__hlds_out_pred__PredId_13);
        }
#line 992 "hlds_out_pred.m"
        {
#line 992 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__PredOrFunc_86 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_20);
        }
#line 993 "hlds_out_pred.m"
        {
#line 993 "hlds_out_pred.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_pred__ModeVarSet_87);
        }
#line 1000 "hlds_out_pred.m"
#line 1000 "hlds_out_pred.m"
        switch (hlds__hlds_out__hlds_out_pred__PredOrFunc_86) {
#line 1000 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1000 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 1001 "hlds_out_pred.m"
            {
#line 1001 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__FuncHeadModes_89;
#line 1001 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__RetHeadMode_90;
#line 1001 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__V_206_206;
#line 1002 "hlds_out_pred.m"
              MR_Box hlds__hlds_out__hlds_out_pred__conv0_RetHeadMode_90;

#line 1002 "hlds_out_pred.m"
              {
#line 1002 "hlds_out_pred.m"
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_pred__HeadModes_27, &hlds__hlds_out__hlds_out_pred__FuncHeadModes_89, &hlds__hlds_out__hlds_out_pred__conv0_RetHeadMode_90);
              }
#line 1002 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__RetHeadMode_90 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_RetHeadMode_90);
#line 1004 "hlds_out_pred.m"
              {
#line 1004 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__V_206_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1004 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_206_206, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_85));
#line 1004 "hlds_out_pred.m"
              }
#line 1003 "hlds_out_pred.m"
              {
#line 1003 "hlds_out_pred.m"
                parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_9_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_pred__ModeVarSet_87, hlds__hlds_out__hlds_out_pred__V_206_206, hlds__hlds_out__hlds_out_pred__FuncHeadModes_89, hlds__hlds_out__hlds_out_pred__RetHeadMode_90, hlds__hlds_out__hlds_out_pred__DeclaredDeterminism_23, hlds__hlds_out__hlds_out_pred__ModeContext_32);
              }
#line 1001 "hlds_out_pred.m"
            }
#line 1000 "hlds_out_pred.m"
            break;
#line 1000 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 995 "hlds_out_pred.m"
            {
#line 995 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__V_209_209;

#line 998 "hlds_out_pred.m"
              {
#line 998 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__V_209_209 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 998 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_209_209, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_85));
#line 998 "hlds_out_pred.m"
              }
#line 997 "hlds_out_pred.m"
              {
#line 997 "hlds_out_pred.m"
                parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_9_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_pred__ModeVarSet_87, hlds__hlds_out__hlds_out_pred__V_209_209, hlds__hlds_out__hlds_out_pred__HeadModes_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_pred__DeclaredDeterminism_23, hlds__hlds_out__hlds_out_pred__ModeContext_32);
              }
#line 995 "hlds_out_pred.m"
            }
#line 1000 "hlds_out_pred.m"
            break;
#line 1000 "hlds_out_pred.m"
        }
#line 1014 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MaybeArgLives_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1015 "hlds_out_pred.m"
          {
#line 1015 "hlds_out_pred.m"
          }
#line 1014 "hlds_out_pred.m"
        else
#line 1009 "hlds_out_pred.m"
          {
#line 1009 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ArgLives_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeArgLives_28, (MR_Integer) 0)));

#line 1010 "hlds_out_pred.m"
            {
#line 1010 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
#line 1011 "hlds_out_pred.m"
            {
#line 1011 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% arg lives: ");
            }
#line 1012 "hlds_out_pred.m"
            {
#line 1012 "hlds_out_pred.m"
              mercury__io__print_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[2], ((MR_Box) (hlds__hlds_out__hlds_out_pred__ArgLives_91)));
            }
#line 1013 "hlds_out_pred.m"
            {
#line 1013 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 1009 "hlds_out_pred.m"
          }
#line 1017 "hlds_out_pred.m"
        {
#line 1017 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__RegR_HeadVars_29);
        }
#line 1023 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1018 "hlds_out_pred.m"
          {
#line 1018 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_219_219;
#line 1018 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_221_221;

#line 1018 "hlds_out_pred.m"
            {
#line 1018 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
#line 1019 "hlds_out_pred.m"
            {
#line 1019 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% reg_r headvars: ");
            }
#line 1020 "hlds_out_pred.m"
            {
#line 1020 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_219_219 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__RegR_HeadVars_29);
            }
#line 1021 "hlds_out_pred.m"
            {
#line 1021 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_221_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1021 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_221_221, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[1]));
#line 1021 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_221_221, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_proc_10_p_0_1));
#line 1021 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_221_221, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1021 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_221_221, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarNamePrint_15));
#line 1021 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_221_221, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_25));
#line 1021 "hlds_out_pred.m"
            }
#line 1020 "hlds_out_pred.m"
            {
#line 1020 "hlds_out_pred.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_247_247, hlds__hlds_out__hlds_out_pred__V_219_219, (MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_221_221);
            }
#line 1022 "hlds_out_pred.m"
            {
#line 1022 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 1018 "hlds_out_pred.m"
          }
#line 1023 "hlds_out_pred.m"
        else
#line 1023 "hlds_out_pred.m"
          {
#line 1023 "hlds_out_pred.m"
          }
#line 1027 "hlds_out_pred.m"
        {
#line 1027 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_48, (MR_Char) 65);
        }
#line 1027 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1027 "hlds_out_pred.m"
          {
#line 1028 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__MaybeArgInfos_30)) == (MR_mktag((MR_Integer) 1)));
#line 1028 "hlds_out_pred.m"
            if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1028 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__ArgInfos_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeArgInfos_30, (MR_Integer) 0)));
#line 1027 "hlds_out_pred.m"
          }
#line 1034 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1030 "hlds_out_pred.m"
          {
#line 1030 "hlds_out_pred.m"
            {
#line 1030 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
#line 1031 "hlds_out_pred.m"
            {
#line 1031 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% arg_infos: ");
            }
#line 1032 "hlds_out_pred.m"
            {
#line 1032 "hlds_out_pred.m"
              mercury__io__print_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[3], ((MR_Box) (hlds__hlds_out__hlds_out_pred__ArgInfos_92)));
            }
#line 1033 "hlds_out_pred.m"
            {
#line 1033 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 1030 "hlds_out_pred.m"
          }
#line 1034 "hlds_out_pred.m"
        else
#line 1034 "hlds_out_pred.m"
          {
#line 1034 "hlds_out_pred.m"
          }
#line 1038 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__V_230_230 = (MR_Word) hlds__hlds_out__hlds_out_pred__PredStatus_14;
#line 1038 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__V_230_230 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1038 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1038 "hlds_out_pred.m"
          {
#line 1039 "hlds_out_pred.m"
            {
#line 1039 "hlds_out_pred.m"
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&hlds__hlds_out__hlds_out_pred__V_260_260);
            }
#line 1039 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__ProcId_17 == hlds__hlds_out__hlds_out_pred__V_260_260);
#line 1038 "hlds_out_pred.m"
          }
#line 1042 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 1042 "hlds_out_pred.m"
          {
#line 1042 "hlds_out_pred.m"
          }
#line 1042 "hlds_out_pred.m"
        else
#line 1043 "hlds_out_pred.m"
          {
#line 1043 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__StackSlots_93;
#line 1043 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_94;

#line 1043 "hlds_out_pred.m"
            {
#line 1043 "hlds_out_pred.m"
              hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__StackSlots_93);
            }
#line 1044 "hlds_out_pred.m"
            {
#line 1044 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
#line 1045 "hlds_out_pred.m"
            {
#line 1045 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__Indent_16, hlds__hlds_out__hlds_out_pred__StackSlots_93);
            }
#line 1046 "hlds_out_pred.m"
            {
#line 1046 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
#line 1047 "hlds_out_pred.m"
            {
#line 1047 "hlds_out_pred.m"
              mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__HeadVars_26, &hlds__hlds_out__hlds_out_pred__HeadTerms_94);
            }
#line 1048 "hlds_out_pred.m"
            {
#line 1048 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_12, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__PredId_13, hlds__hlds_out__hlds_out_pred__PredOrFunc_86, hlds__hlds_out__hlds_out_pred__HeadTerms_94);
            }
#line 1050 "hlds_out_pred.m"
            {
#line 1050 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) " :-\n");
            }
#line 1051 "hlds_out_pred.m"
            {
#line 1051 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(hlds__hlds_out__hlds_out_pred__Info_11, hlds__hlds_out__hlds_out_pred__ModuleInfo_12, hlds__hlds_out__hlds_out_pred__VarSet_25, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__Indent1_47, (MR_String) ".\n", hlds__hlds_out__hlds_out_pred__Goal_31);
#line 1051 "hlds_out_pred.m"
              return;
            }
#line 1043 "hlds_out_pred.m"
          }
#line 805 "hlds_out_pred.m"
      }
#line 1054 "hlds_out_pred.m"
    else
#line 1054 "hlds_out_pred.m"
      {
#line 1054 "hlds_out_pred.m"
      }
#line 773 "hlds_out_pred.m"
  }
#line 51 "hlds_out_pred.m"
}

#line 453 "hlds_out_pred.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_14_p_0_1(
#line 453 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 453 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1)
#line 453 "hlds_out_pred.m"
{
#line 453 "hlds_out_pred.m"
  {
#line 453 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 453 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
#line 453 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2;

#line 453 "hlds_out_pred.m"
    {
#line 453 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2 = hlds__hlds_pred__proc_id_to_int_1_f_0(((MR_Integer) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
#line 453 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2));
#line 453 "hlds_out_pred.m"
    return hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
#line 453 "hlds_out_pred.m"
  }
#line 453 "hlds_out_pred.m"
}

#line 43 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_14_p_0(
#line 43 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_15,
#line 43 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_16,
#line 43 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_17,
#line 43 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_18,
#line 43 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_19,
#line 43 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_20,
#line 43 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_21,
#line 43 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_22,
#line 43 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__WriteWhichModes_23,
#line 43 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_24,
#line 43 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_25,
#line 43 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Clause_26)
#line 43 "hlds_out_pred.m"
{
#line 441 "hlds_out_pred.m"
  {
#line 441 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 441 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ApplicableModes_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_26, (MR_Integer) 0)));
#line 441 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Goal_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_26, (MR_Integer) 1)));
#line 441 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ImplLang_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_26, (MR_Integer) 2)));
#line 441 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_26, (MR_Integer) 3)));
#line 441 "hlds_out_pred.m"
    MR_Integer hlds__hlds_out__hlds_out_pred__Indent1_33 = (hlds__hlds_out__hlds_out_pred__Indent_24 + (MR_Integer) 1);
#line 441 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__DumpOptions_34 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 0)));
#line 441 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_38;
#line 441 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__AllProcIds_39;
#line 442 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred___StateVarWarnings_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_26, (MR_Integer) 4)));
#line 445 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 1)));
#line 445 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 2)));
#line 445 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 3)));
#line 445 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 4)));
#line 481 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__SelectedProcIds_40;
#line 472 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_76_76;
#line 485 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_59_59;
#line 485 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_60_60;
#line 485 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_61_61;
#line 485 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred___GoalInfo_41;

#line 448 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__ApplicableModes_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 447 "hlds_out_pred.m"
      {
#line 447 "hlds_out_pred.m"
      }
#line 448 "hlds_out_pred.m"
    else
#line 449 "hlds_out_pred.m"
      {
#line 449 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__Modes_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__ApplicableModes_28, (MR_Integer) 0)));

#line 450 "hlds_out_pred.m"
        {
#line 450 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_34, (MR_Char) 109);
        }
#line 456 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 451 "hlds_out_pred.m"
          {
#line 451 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_72_72;
#line 451 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__ModeInts_36;

#line 451 "hlds_out_pred.m"
            {
#line 451 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_24);
            }
#line 452 "hlds_out_pred.m"
            {
#line 452 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% Modes for which this clause applies: ");
            }
#line 6941 "hlds.hlds_out.hlds_out_pred.c"
            hlds__hlds_out__hlds_out_pred__TypeCtorInfo_72_72 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 453 "hlds_out_pred.m"
            {
#line 453 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__ModeInts_36 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_72_72, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_72_72, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[2], hlds__hlds_out__hlds_out_pred__Modes_35);
            }
#line 454 "hlds_out_pred.m"
            {
#line 454 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(hlds__hlds_out__hlds_out_pred__ModeInts_36);
            }
#line 455 "hlds_out_pred.m"
            {
#line 455 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 451 "hlds_out_pred.m"
          }
#line 456 "hlds_out_pred.m"
        else
#line 456 "hlds_out_pred.m"
          {
#line 456 "hlds_out_pred.m"
          }
#line 449 "hlds_out_pred.m"
      }
#line 462 "hlds_out_pred.m"
    if ((hlds__hlds_out__hlds_out_pred__ImplLang_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "hlds_out_pred.m"
      {
#line 461 "hlds_out_pred.m"
      }
#line 462 "hlds_out_pred.m"
    else
#line 463 "hlds_out_pred.m"
      {
#line 463 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__ForeignLang_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__ImplLang_30, (MR_Integer) 0)));

#line 464 "hlds_out_pred.m"
        {
#line 464 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% Language of implementation: ");
        }
#line 465 "hlds_out_pred.m"
        {
#line 465 "hlds_out_pred.m"
          mercury__io__write_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__ForeignLang_37)));
        }
#line 466 "hlds_out_pred.m"
        {
#line 466 "hlds_out_pred.m"
          mercury__io__nl_2_p_0();
        }
#line 463 "hlds_out_pred.m"
      }
#line 468 "hlds_out_pred.m"
    {
#line 468 "hlds_out_pred.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_17, hlds__hlds_out__hlds_out_pred__PredId_18, &hlds__hlds_out__hlds_out_pred__PredInfo_38);
    }
#line 469 "hlds_out_pred.m"
    {
#line 469 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__AllProcIds_39 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_38);
    }
#line 471 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__ApplicableModes_28)) == (MR_mktag((MR_Integer) 1)));
#line 471 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 471 "hlds_out_pred.m"
      {
#line 471 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__SelectedProcIds_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__ApplicableModes_28, (MR_Integer) 0)));
#line 7016 "hlds.hlds_out.hlds_out_pred.c"
        hlds__hlds_out__hlds_out_pred__TypeInfo_76_76 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[7];
#line 472 "hlds_out_pred.m"
        {
#line 472 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_76_76, ((MR_Box) (hlds__hlds_out__hlds_out_pred__SelectedProcIds_40)), ((MR_Box) (hlds__hlds_out__hlds_out_pred__AllProcIds_39)));
        }
#line 472 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__succeeded = !(hlds__hlds_out__hlds_out_pred__succeeded);
#line 471 "hlds_out_pred.m"
      }
#line 481 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 478 "hlds_out_pred.m"
      {
#line 478 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_17, hlds__hlds_out__hlds_out_pred__Lang_16, hlds__hlds_out__hlds_out_pred__VarSet_20, hlds__hlds_out__hlds_out_pred__VarNamePrint_22, hlds__hlds_out__hlds_out_pred__WriteWhichModes_23, hlds__hlds_out__hlds_out_pred__PredId_18, hlds__hlds_out__hlds_out_pred__PredOrFunc_19, hlds__hlds_out__hlds_out_pred__SelectedProcIds_40, hlds__hlds_out__hlds_out_pred__Context_31, hlds__hlds_out__hlds_out_pred__HeadTerms_25);
      }
#line 481 "hlds_out_pred.m"
    else
#line 482 "hlds_out_pred.m"
      {
#line 482 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_17, hlds__hlds_out__hlds_out_pred__VarSet_20, hlds__hlds_out__hlds_out_pred__VarNamePrint_22, hlds__hlds_out__hlds_out_pred__PredId_18, hlds__hlds_out__hlds_out_pred__PredOrFunc_19, hlds__hlds_out__hlds_out_pred__HeadTerms_25);
      }
#line 485 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Goal_29, (MR_Integer) 0)));
#line 485 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred___GoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Goal_29, (MR_Integer) 1)));
#line 485 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__V_59_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__V_59_59, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 485 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 485 "hlds_out_pred.m"
      {
#line 485 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__V_59_59, (MR_Integer) 1)));
#line 485 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__V_59_59, (MR_Integer) 2)));
#line 485 "hlds_out_pred.m"
        hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__V_60_60 == (MR_Integer) 0);
#line 485 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 485 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "hlds_out_pred.m"
      }
#line 487 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 486 "hlds_out_pred.m"
      {
#line 486 "hlds_out_pred.m"
        {
#line 486 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 486 "hlds_out_pred.m"
          return;
        }
#line 486 "hlds_out_pred.m"
      }
#line 487 "hlds_out_pred.m"
    else
#line 488 "hlds_out_pred.m"
      {
#line 488 "hlds_out_pred.m"
        {
#line 488 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) " :-\n");
        }
#line 489 "hlds_out_pred.m"
        {
#line 489 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_pred__Info_15, hlds__hlds_out__hlds_out_pred__ModuleInfo_17, hlds__hlds_out__hlds_out_pred__VarSet_20, hlds__hlds_out__hlds_out_pred__TypeQual_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_22, hlds__hlds_out__hlds_out_pred__Indent1_33, (MR_String) ".\n", hlds__hlds_out__hlds_out_pred__Goal_29);
#line 489 "hlds_out_pred.m"
          return;
        }
#line 488 "hlds_out_pred.m"
      }
#line 441 "hlds_out_pred.m"
  }
#line 43 "hlds_out_pred.m"
}

#line 240 "hlds_out_pred.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1(
#line 240 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
#line 240 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
#line 240 "hlds_out_pred.m"
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
#line 240 "hlds_out_pred.m"
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
#line 240 "hlds_out_pred.m"
{
#line 240 "hlds_out_pred.m"
  {
#line 240 "hlds_out_pred.m"
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

#line 240 "hlds_out_pred.m"
    {
#line 240 "hlds_out_pred.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
#line 240 "hlds_out_pred.m"
      return;
    }
#line 240 "hlds_out_pred.m"
  }
#line 240 "hlds_out_pred.m"
}

#line 32 "hlds_out_pred.m"
void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(
#line 32 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Info_9,
#line 32 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_10,
#line 32 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_11,
#line 32 "hlds_out_pred.m"
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_12,
#line 32 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_13,
#line 32 "hlds_out_pred.m"
  MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_14)
#line 32 "hlds_out_pred.m"
{
#line 113 "hlds_out_pred.m"
  {
#line 113 "hlds_out_pred.m"
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Module_16;
#line 113 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__PredName_17;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_18;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ArgTypes_19;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ExistQVars_20;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_21;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ClausesInfo_22;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Context_23;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__PredStatus_24;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Markers_25;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ClassContext_26;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ProofMap_27;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ConstraintMap_28;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__Purity_29;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadTypeParams_30;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemap_31;
#line 113 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__DumpOptions_32;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_33;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarSet_36;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_39;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_40;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ClausesRep_41;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_43;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ProcTable_97;
#line 113 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__ProcIds_98;
#line 130 "hlds_out_pred.m"
    MR_String hlds__hlds_out__hlds_out_pred__V_224_224;
#line 130 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_225_225;
#line 130 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_226_226;
#line 130 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_227_227;
#line 153 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_37_37;
#line 153 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred__V_38_38;
#line 153 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred___ItemNumbers_42;
#line 153 "hlds_out_pred.m"
    MR_Word hlds__hlds_out__hlds_out_pred___HaveForeignClauses_44;

#line 114 "hlds_out_pred.m"
    {
#line 114 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__Module_16 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_14);
    }
#line 115 "hlds_out_pred.m"
    {
#line 115 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__PredName_17 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_14);
    }
#line 116 "hlds_out_pred.m"
    {
#line 116 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_14);
    }
#line 117 "hlds_out_pred.m"
    {
#line 117 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ArgTypes_19);
    }
#line 118 "hlds_out_pred.m"
    {
#line 118 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ExistQVars_20);
    }
#line 119 "hlds_out_pred.m"
    {
#line 119 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__TVarSet_21);
    }
#line 120 "hlds_out_pred.m"
    {
#line 120 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ClausesInfo_22);
    }
#line 121 "hlds_out_pred.m"
    {
#line 121 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__Context_23);
    }
#line 122 "hlds_out_pred.m"
    {
#line 122 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__PredStatus_24);
    }
#line 123 "hlds_out_pred.m"
    {
#line 123 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__Markers_25);
    }
#line 124 "hlds_out_pred.m"
    {
#line 124 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ClassContext_26);
    }
#line 125 "hlds_out_pred.m"
    {
#line 125 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ProofMap_27);
    }
#line 126 "hlds_out_pred.m"
    {
#line 126 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ConstraintMap_28);
    }
#line 127 "hlds_out_pred.m"
    {
#line 127 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__Purity_29);
    }
#line 128 "hlds_out_pred.m"
    {
#line 128 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__HeadTypeParams_30);
    }
#line 129 "hlds_out_pred.m"
    {
#line 129 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__VarNameRemap_31);
    }
#line 130 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__DumpOptions_32 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 0)));
#line 130 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_224_224 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 1)));
#line 130 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 2)));
#line 130 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 3)));
#line 130 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 4)));
#line 131 "hlds_out_pred.m"
    {
#line 131 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_32, (MR_Char) 118);
    }
#line 133 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 132 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__VarNamePrint_33 = (MR_Integer) 1;
#line 133 "hlds_out_pred.m"
    else
#line 134 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__VarNamePrint_33 = (MR_Integer) 0;
#line 136 "hlds_out_pred.m"
    {
#line 136 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_32, (MR_Char) 67);
    }
#line 150 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 143 "hlds_out_pred.m"
#line 143 "hlds_out_pred.m"
      switch (hlds__hlds_out__hlds_out_pred__PredOrFunc_18) {
#line 143 "hlds_out_pred.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 143 "hlds_out_pred.m"
        case (MR_Integer) 1:
#line 144 "hlds_out_pred.m"
          {
#line 144 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__FuncArgTypes_34;
#line 144 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__FuncRetType_35;
#line 144 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_103_103;
#line 145 "hlds_out_pred.m"
            MR_Box hlds__hlds_out__hlds_out_pred__conv0_FuncRetType_35;

#line 145 "hlds_out_pred.m"
            {
#line 145 "hlds_out_pred.m"
              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_out__hlds_out_pred__ArgTypes_19, &hlds__hlds_out__hlds_out_pred__FuncArgTypes_34, &hlds__hlds_out__hlds_out_pred__conv0_FuncRetType_35);
            }
#line 145 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__FuncRetType_35 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_FuncRetType_35);
#line 147 "hlds_out_pred.m"
            {
#line 147 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_103_103, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Module_16));
#line 147 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_103_103, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_17));
#line 147 "hlds_out_pred.m"
            }
#line 146 "hlds_out_pred.m"
            {
#line 146 "hlds_out_pred.m"
              parse_tree__parse_tree_out_pred_decl__mercury_output_func_type_12_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_33, hlds__hlds_out__hlds_out_pred__ExistQVars_20, hlds__hlds_out__hlds_out_pred__V_103_103, hlds__hlds_out__hlds_out_pred__FuncArgTypes_34, hlds__hlds_out__hlds_out_pred__FuncRetType_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_pred__Purity_29, hlds__hlds_out__hlds_out_pred__ClassContext_26, hlds__hlds_out__hlds_out_pred__Context_23);
            }
#line 144 "hlds_out_pred.m"
          }
#line 143 "hlds_out_pred.m"
          break;
#line 143 "hlds_out_pred.m"
        case (MR_Integer) 0:
#line 139 "hlds_out_pred.m"
          {
#line 139 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__V_106_106;

#line 141 "hlds_out_pred.m"
            {
#line 141 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_106_106, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Module_16));
#line 141 "hlds_out_pred.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__V_106_106, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_17));
#line 141 "hlds_out_pred.m"
            }
#line 140 "hlds_out_pred.m"
            {
#line 140 "hlds_out_pred.m"
              parse_tree__parse_tree_out_pred_decl__mercury_output_pred_type_11_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_33, hlds__hlds_out__hlds_out_pred__ExistQVars_20, hlds__hlds_out__hlds_out_pred__V_106_106, hlds__hlds_out__hlds_out_pred__ArgTypes_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_pred__Purity_29, hlds__hlds_out__hlds_out_pred__ClassContext_26, hlds__hlds_out__hlds_out_pred__Context_23);
            }
#line 139 "hlds_out_pred.m"
          }
#line 143 "hlds_out_pred.m"
          break;
#line 143 "hlds_out_pred.m"
      }
#line 150 "hlds_out_pred.m"
    else
#line 150 "hlds_out_pred.m"
      {
#line 150 "hlds_out_pred.m"
      }
#line 153 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__VarSet_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 0)));
#line 153 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 1)));
#line 153 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 2)));
#line 153 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__VarTypes_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 3)));
#line 153 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__HeadVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 4)));
#line 153 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__ClausesRep_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 5)));
#line 153 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred___ItemNumbers_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 6)));
#line 153 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred__RttiVarMaps_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 7)));
#line 153 "hlds_out_pred.m"
    hlds__hlds_out__hlds_out_pred___HaveForeignClauses_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 8)));
#line 155 "hlds_out_pred.m"
    {
#line 155 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_32, (MR_Char) 67);
    }
#line 356 "hlds_out_pred.m"
    if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 156 "hlds_out_pred.m"
      {
#line 156 "hlds_out_pred.m"
        MR_Integer hlds__hlds_out__hlds_out_pred__PredInt_45;
#line 156 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__GoalType_46;
#line 156 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__MarkerList_47;
#line 156 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapList_52;
#line 156 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__Clauses_55;
#line 156 "hlds_out_pred.m"
        MR_Word hlds__hlds_out__hlds_out_pred__Origin_59;
#line 156 "hlds_out_pred.m"
        MR_String hlds__hlds_out__hlds_out_pred__V_119_119;

#line 156 "hlds_out_pred.m"
        {
#line 156 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
        }
#line 157 "hlds_out_pred.m"
        {
#line 157 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% pred id: ");
        }
#line 158 "hlds_out_pred.m"
        {
#line 158 "hlds_out_pred.m"
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__PredId_13, &hlds__hlds_out__hlds_out_pred__PredInt_45);
        }
#line 159 "hlds_out_pred.m"
        {
#line 159 "hlds_out_pred.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__PredInt_45);
        }
#line 160 "hlds_out_pred.m"
        {
#line 160 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ", category: ");
        }
#line 161 "hlds_out_pred.m"
        {
#line 161 "hlds_out_pred.m"
          parse_tree__prog_out__write_pred_or_func_3_p_0(hlds__hlds_out__hlds_out_pred__PredOrFunc_18);
        }
#line 162 "hlds_out_pred.m"
        {
#line 162 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) ", status: ");
        }
#line 163 "hlds_out_pred.m"
        {
#line 163 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__V_119_119 = hlds__hlds_out__hlds_out_util__pred_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__PredStatus_24);
        }
#line 163 "hlds_out_pred.m"
        {
#line 163 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_119_119);
        }
#line 164 "hlds_out_pred.m"
        {
#line 164 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 165 "hlds_out_pred.m"
        {
#line 165 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "% goal_type: ");
        }
#line 166 "hlds_out_pred.m"
        {
#line 166 "hlds_out_pred.m"
          hlds__hlds_pred__pred_info_get_goal_type_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__GoalType_46);
        }
#line 167 "hlds_out_pred.m"
        {
#line 167 "hlds_out_pred.m"
          mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_goal_type_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__GoalType_46)));
        }
#line 168 "hlds_out_pred.m"
        {
#line 168 "hlds_out_pred.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 169 "hlds_out_pred.m"
        {
#line 169 "hlds_out_pred.m"
          hlds__hlds_pred__markers_to_marker_list_2_p_0(hlds__hlds_out__hlds_out_pred__Markers_25, &hlds__hlds_out__hlds_out_pred__MarkerList_47);
        }
#line 172 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__MarkerList_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 171 "hlds_out_pred.m"
          {
#line 171 "hlds_out_pred.m"
          }
#line 172 "hlds_out_pred.m"
        else
#line 173 "hlds_out_pred.m"
          {
#line 174 "hlds_out_pred.m"
            {
#line 174 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% markers: ");
            }
#line 175 "hlds_out_pred.m"
            {
#line 175 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0(hlds__hlds_out__hlds_out_pred__MarkerList_47);
            }
#line 176 "hlds_out_pred.m"
            {
#line 176 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 173 "hlds_out_pred.m"
          }
#line 178 "hlds_out_pred.m"
        {
#line 178 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(hlds__hlds_out__hlds_out_pred__VarSet_36, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_33, hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__RttiVarMaps_43);
        }
#line 180 "hlds_out_pred.m"
        {
#line 180 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, hlds__hlds_out__hlds_out_pred__ProofMap_27);
        }
#line 182 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 182 "hlds_out_pred.m"
          {
#line 182 "hlds_out_pred.m"
          }
#line 182 "hlds_out_pred.m"
        else
#line 184 "hlds_out_pred.m"
          {
#line 183 "hlds_out_pred.m"
            {
#line 183 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_33, hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__ProofMap_27);
            }
#line 185 "hlds_out_pred.m"
            {
#line 185 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 184 "hlds_out_pred.m"
          }
#line 187 "hlds_out_pred.m"
        {
#line 187 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_out__hlds_out_pred__ConstraintMap_28);
        }
#line 189 "hlds_out_pred.m"
        if (hlds__hlds_out__hlds_out_pred__succeeded)
#line 189 "hlds_out_pred.m"
          {
#line 189 "hlds_out_pred.m"
          }
#line 189 "hlds_out_pred.m"
        else
#line 190 "hlds_out_pred.m"
          {
#line 190 "hlds_out_pred.m"
            hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_33, hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__ConstraintMap_28);
          }
#line 200 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__HeadTypeParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 201 "hlds_out_pred.m"
          {
#line 201 "hlds_out_pred.m"
          }
#line 200 "hlds_out_pred.m"
        else
#line 195 "hlds_out_pred.m"
          {
#line 196 "hlds_out_pred.m"
            {
#line 196 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% head_type_params:\n");
            }
#line 197 "hlds_out_pred.m"
            {
#line 197 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% ");
            }
#line 198 "hlds_out_pred.m"
            {
#line 198 "hlds_out_pred.m"
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_33, hlds__hlds_out__hlds_out_pred__HeadTypeParams_30);
            }
#line 199 "hlds_out_pred.m"
            {
#line 199 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 195 "hlds_out_pred.m"
          }
#line 203 "hlds_out_pred.m"
        {
#line 203 "hlds_out_pred.m"
          hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(hlds__hlds_out__hlds_out_pred__VarSet_36, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_33, hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__VarTypes_39);
        }
#line 205 "hlds_out_pred.m"
        {
#line 205 "hlds_out_pred.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_pred__VarNameRemap_31, &hlds__hlds_out__hlds_out_pred__VarNameRemapList_52);
        }
#line 208 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__VarNameRemapList_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 207 "hlds_out_pred.m"
          {
#line 207 "hlds_out_pred.m"
          }
#line 208 "hlds_out_pred.m"
        else
#line 209 "hlds_out_pred.m"
          {
#line 209 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapHead_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarNameRemapList_52, (MR_Integer) 0)));
#line 209 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapTail_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarNameRemapList_52, (MR_Integer) 1)));

#line 210 "hlds_out_pred.m"
            {
#line 210 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
#line 211 "hlds_out_pred.m"
            {
#line 211 "hlds_out_pred.m"
              mercury__io__write_string_3_p_0((MR_String) "% var name remap: ");
            }
#line 212 "hlds_out_pred.m"
            {
#line 212 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_36, hlds__hlds_out__hlds_out_pred__VarNameRemapHead_53, hlds__hlds_out__hlds_out_pred__VarNameRemapTail_54);
            }
#line 214 "hlds_out_pred.m"
            {
#line 214 "hlds_out_pred.m"
              mercury__io__nl_2_p_0();
            }
#line 209 "hlds_out_pred.m"
          }
#line 217 "hlds_out_pred.m"
        {
#line 217 "hlds_out_pred.m"
          hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(hlds__hlds_out__hlds_out_pred__ClausesRep_41, &hlds__hlds_out__hlds_out_pred__Clauses_55);
        }
#line 224 "hlds_out_pred.m"
        if ((hlds__hlds_out__hlds_out_pred__Clauses_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "hlds_out_pred.m"
          {
#line 225 "hlds_out_pred.m"
          }
#line 224 "hlds_out_pred.m"
        else
#line 219 "hlds_out_pred.m"
          {
#line 219 "hlds_out_pred.m"
            MR_Word hlds__hlds_out__hlds_out_pred__InfoForClauses_58;

#line 220 "hlds_out_pred.m"
            {
#line 220 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(hlds__hlds_out__hlds_out_pred__Info_9, &hlds__hlds_out__hlds_out_pred__InfoForClauses_58);
            }
#line 221 "hlds_out_pred.m"
            {
#line 221 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(hlds__hlds_out__hlds_out_pred__InfoForClauses_58, hlds__hlds_out__hlds_out_pred__Lang_10, hlds__hlds_out__hlds_out_pred__ModuleInfo_11, hlds__hlds_out__hlds_out_pred__PredId_13, hlds__hlds_out__hlds_out_pred__PredOrFunc_18, hlds__hlds_out__hlds_out_pred__VarSet_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_pred__VarNamePrint_33, hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__HeadVars_40, hlds__hlds_out__hlds_out_pred__Clauses_55);
            }
#line 219 "hlds_out_pred.m"
          }
#line 228 "hlds_out_pred.m"
        {
#line 228 "hlds_out_pred.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__Origin_59);
        }
#line 253 "hlds_out_pred.m"
#line 253 "hlds_out_pred.m"
        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Origin_59)) {
#line 253 "hlds_out_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 253 "hlds_out_pred.m"
          case (MR_Integer) 0:
#line 254 "hlds_out_pred.m"
            {
#line 255 "hlds_out_pred.m"
              {
#line 255 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% special pred\n");
              }
#line 254 "hlds_out_pred.m"
            }
#line 253 "hlds_out_pred.m"
            break;
#line 253 "hlds_out_pred.m"
          case (MR_Integer) 1:
#line 230 "hlds_out_pred.m"
            {
#line 230 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_240_240;
#line 230 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__MethodConstraints_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));
#line 230 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__ClassId_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__MethodConstraints_61, (MR_Integer) 0)));
#line 230 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__InstanceTypes_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__MethodConstraints_61, (MR_Integer) 1)));
#line 230 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__InstanceConstraints_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__MethodConstraints_61, (MR_Integer) 2)));
#line 230 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__ClassMethodConstraints_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__MethodConstraints_61, (MR_Integer) 3)));
#line 230 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__ClassName_66;
#line 230 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__MethodUnivConstraints_68;
#line 230 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__MethodExistConstraints_69;
#line 230 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__V_200_200;
#line 230 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__V_206_206;
#line 230 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)));
#line 234 "hlds_out_pred.m"
              MR_Integer hlds__hlds_out__hlds_out_pred__V_67_67;

#line 233 "hlds_out_pred.m"
              {
#line 233 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% instance method constraints:\n");
              }
#line 234 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__ClassName_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClassId_62, (MR_Integer) 0)));
#line 234 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClassId_62, (MR_Integer) 1)));
#line 236 "hlds_out_pred.m"
              {
#line 236 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 236 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_200_200, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__ClassName_66));
#line 236 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_200_200, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__InstanceTypes_63));
#line 236 "hlds_out_pred.m"
              }
#line 235 "hlds_out_pred.m"
              {
#line 235 "hlds_out_pred.m"
                parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_33, hlds__hlds_out__hlds_out_pred__V_200_200);
              }
#line 237 "hlds_out_pred.m"
              {
#line 237 "hlds_out_pred.m"
                mercury__io__nl_2_p_0();
              }
#line 238 "hlds_out_pred.m"
              {
#line 238 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "instance constraints: ");
              }
#line 240 "hlds_out_pred.m"
              {
#line 240 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__V_206_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 240 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_206_206, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]));
#line 240 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_206_206, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1));
#line 240 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_206_206, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 240 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_206_206, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_21));
#line 240 "hlds_out_pred.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_206_206, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarNamePrint_33));
#line 240 "hlds_out_pred.m"
              }
#line 7812 "hlds.hlds_out.hlds_out_pred.c"
              hlds__hlds_out__hlds_out_pred__TypeCtorInfo_240_240 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 239 "hlds_out_pred.m"
              {
#line 239 "hlds_out_pred.m"
                mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_240_240, hlds__hlds_out__hlds_out_pred__InstanceConstraints_64, (MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_206_206);
              }
#line 241 "hlds_out_pred.m"
              {
#line 241 "hlds_out_pred.m"
                mercury__io__nl_2_p_0();
              }
#line 243 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MethodUnivConstraints_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClassMethodConstraints_65, (MR_Integer) 0)));
#line 243 "hlds_out_pred.m"
              hlds__hlds_out__hlds_out_pred__MethodExistConstraints_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClassMethodConstraints_65, (MR_Integer) 1)));
#line 245 "hlds_out_pred.m"
              {
#line 245 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "method univ constraints: ");
              }
#line 246 "hlds_out_pred.m"
              {
#line 246 "hlds_out_pred.m"
                mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_240_240, hlds__hlds_out__hlds_out_pred__MethodUnivConstraints_68, (MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_206_206);
              }
#line 248 "hlds_out_pred.m"
              {
#line 248 "hlds_out_pred.m"
                mercury__io__nl_2_p_0();
              }
#line 249 "hlds_out_pred.m"
              {
#line 249 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "method exist constraints: ");
              }
#line 250 "hlds_out_pred.m"
              {
#line 250 "hlds_out_pred.m"
                mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_240_240, hlds__hlds_out__hlds_out_pred__MethodExistConstraints_69, (MR_String) ", ", hlds__hlds_out__hlds_out_pred__V_206_206);
              }
#line 252 "hlds_out_pred.m"
              {
#line 252 "hlds_out_pred.m"
                mercury__io__nl_2_p_0();
              }
#line 230 "hlds_out_pred.m"
            }
#line 253 "hlds_out_pred.m"
            break;
#line 253 "hlds_out_pred.m"
          case (MR_Integer) 2:
#line 257 "hlds_out_pred.m"
            {
#line 257 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__Transformation_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)));
#line 257 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__OrigPredId_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 2)));
#line 257 "hlds_out_pred.m"
              MR_Integer hlds__hlds_out__hlds_out_pred__OrigPredIdNum_75;
#line 257 "hlds_out_pred.m"
              MR_String hlds__hlds_out__hlds_out_pred__V_252_252;
#line 257 "hlds_out_pred.m"
              MR_Word hlds__hlds_out__hlds_out_pred__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));

#line 258 "hlds_out_pred.m"
              {
#line 258 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_pred__OrigPredIdNum_75 = hlds__hlds_pred__pred_id_to_int_1_f_0(hlds__hlds_out__hlds_out_pred__OrigPredId_74);
              }
#line 259 "hlds_out_pred.m"
              {
#line 259 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% transformed from pred id ");
              }
#line 260 "hlds_out_pred.m"
              {
#line 260 "hlds_out_pred.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0], hlds__hlds_out__hlds_out_pred__OrigPredIdNum_75, &hlds__hlds_out__hlds_out_pred__V_252_252);
              }
#line 260 "hlds_out_pred.m"
              {
#line 260 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_252_252);
              }
#line 259 "hlds_out_pred.m"
              {
#line 259 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 261 "hlds_out_pred.m"
              {
#line 261 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% ");
              }
#line 262 "hlds_out_pred.m"
              {
#line 262 "hlds_out_pred.m"
                hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_11, hlds__hlds_out__hlds_out_pred__OrigPredId_74);
              }
#line 263 "hlds_out_pred.m"
              {
#line 263 "hlds_out_pred.m"
                mercury__io__nl_2_p_0();
              }
#line 264 "hlds_out_pred.m"
              {
#line 264 "hlds_out_pred.m"
                mercury__io__write_string_3_p_0((MR_String) "% transformation: ");
              }
#line 265 "hlds_out_pred.m"
              {
#line 265 "hlds_out_pred.m"
                mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_transformation_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__Transformation_72)));
              }
#line 266 "hlds_out_pred.m"
              {
#line 266 "hlds_out_pred.m"
                mercury__io__nl_2_p_0();
              }
#line 257 "hlds_out_pred.m"
            }
#line 253 "hlds_out_pred.m"
            break;
#line 253 "hlds_out_pred.m"
          case (MR_Integer) 3:
#line 253 "hlds_out_pred.m"
#line 253 "hlds_out_pred.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)))) {
#line 253 "hlds_out_pred.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 253 "hlds_out_pred.m"
              case (MR_Integer) 0:
#line 268 "hlds_out_pred.m"
                {
#line 268 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__Creation_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));

#line 269 "hlds_out_pred.m"
                  {
#line 269 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "% created: ");
                  }
#line 270 "hlds_out_pred.m"
                  {
#line 270 "hlds_out_pred.m"
                    mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_creation_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__Creation_76)));
                  }
#line 271 "hlds_out_pred.m"
                  {
#line 271 "hlds_out_pred.m"
                    mercury__io__nl_2_p_0();
                  }
#line 268 "hlds_out_pred.m"
                }
#line 253 "hlds_out_pred.m"
                break;
#line 253 "hlds_out_pred.m"
              case (MR_Integer) 1:
#line 273 "hlds_out_pred.m"
                {
#line 274 "hlds_out_pred.m"
                  {
#line 274 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "% assertion\n");
                  }
#line 273 "hlds_out_pred.m"
                }
#line 253 "hlds_out_pred.m"
                break;
#line 253 "hlds_out_pred.m"
              case (MR_Integer) 2:
#line 352 "hlds_out_pred.m"
                {
#line 352 "hlds_out_pred.m"
                }
#line 253 "hlds_out_pred.m"
                break;
#line 253 "hlds_out_pred.m"
              case (MR_Integer) 3:
#line 277 "hlds_out_pred.m"
                {
#line 277 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorSymName_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));
#line 277 "hlds_out_pred.m"
                  MR_Integer hlds__hlds_out__hlds_out_pred__TypeCtorArity_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 2)));
#line 277 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__SolverAuxPredKind_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 3)));
#line 277 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__TypeCtorStr_82;
#line 277 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__SolverAuxPredKindStr_83;
#line 277 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__V_169_169;
#line 277 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__V_284_284;
#line 277 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__V_290_290;
#line 277 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__V_294_294;

#line 279 "hlds_out_pred.m"
                  {
#line 279 "hlds_out_pred.m"
                    hlds__hlds_out__hlds_out_pred__V_169_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "hlds_out_pred.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_169_169, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TypeCtorSymName_79));
#line 279 "hlds_out_pred.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__V_169_169, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TypeCtorArity_80));
#line 279 "hlds_out_pred.m"
                  }
#line 279 "hlds_out_pred.m"
                  {
#line 279 "hlds_out_pred.m"
                    hlds__hlds_out__hlds_out_pred__TypeCtorStr_82 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__V_169_169);
                  }
#line 283 "hlds_out_pred.m"
                  hlds__hlds_out__hlds_out_pred__SolverAuxPredKindStr_83 = ((&hlds__hlds_out__hlds_out_pred_vector_common_4[12 + hlds__hlds_out__hlds_out_pred__SolverAuxPredKind_81]))->hlds__hlds_out__hlds_out_pred__vector_common_type_4_0__vct_4_f_0;
#line 293 "hlds_out_pred.m"
                  {
#line 293 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "% ");
                  }
#line 8035 "hlds.hlds_out.hlds_out_pred.c"
                  hlds__hlds_out__hlds_out_pred__V_290_290 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0];
#line 294 "hlds_out_pred.m"
                  {
#line 294 "hlds_out_pred.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_290_290, hlds__hlds_out__hlds_out_pred__SolverAuxPredKindStr_83, &hlds__hlds_out__hlds_out_pred__V_284_284);
                  }
#line 294 "hlds_out_pred.m"
                  {
#line 294 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_284_284);
                  }
#line 293 "hlds_out_pred.m"
                  {
#line 293 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) " for ");
                  }
#line 294 "hlds_out_pred.m"
                  {
#line 294 "hlds_out_pred.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_290_290, hlds__hlds_out__hlds_out_pred__TypeCtorStr_82, &hlds__hlds_out__hlds_out_pred__V_294_294);
                  }
#line 294 "hlds_out_pred.m"
                  {
#line 294 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_294_294);
                  }
#line 293 "hlds_out_pred.m"
                  {
#line 293 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
#line 277 "hlds_out_pred.m"
                }
#line 253 "hlds_out_pred.m"
                break;
#line 253 "hlds_out_pred.m"
              case (MR_Integer) 4:
#line 296 "hlds_out_pred.m"
                {
#line 296 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__BasePredCallId_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));
#line 296 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__TablingAuxPredKind_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 2)));
#line 296 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__BasePredStr_86;
#line 296 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__TablingAuxPredKindStr_87;
#line 296 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__V_263_263;
#line 296 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__V_269_269;
#line 296 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__V_273_273;

#line 297 "hlds_out_pred.m"
                  {
#line 297 "hlds_out_pred.m"
                    hlds__hlds_out__hlds_out_pred__BasePredStr_86 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__BasePredCallId_84);
                  }
#line 301 "hlds_out_pred.m"
#line 301 "hlds_out_pred.m"
                  switch (hlds__hlds_out__hlds_out_pred__TablingAuxPredKind_85) {
#line 301 "hlds_out_pred.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 301 "hlds_out_pred.m"
                    case (MR_Integer) 1:
#line 303 "hlds_out_pred.m"
                      hlds__hlds_out__hlds_out_pred__TablingAuxPredKindStr_87 = (MR_String) "table reset predicate";
#line 301 "hlds_out_pred.m"
                      break;
#line 301 "hlds_out_pred.m"
                    case (MR_Integer) 0:
#line 300 "hlds_out_pred.m"
                      hlds__hlds_out__hlds_out_pred__TablingAuxPredKindStr_87 = (MR_String) "table statistics predicate";
#line 301 "hlds_out_pred.m"
                      break;
#line 301 "hlds_out_pred.m"
                  }
#line 305 "hlds_out_pred.m"
                  {
#line 305 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "% ");
                  }
#line 8119 "hlds.hlds_out.hlds_out_pred.c"
                  hlds__hlds_out__hlds_out_pred__V_269_269 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0];
#line 306 "hlds_out_pred.m"
                  {
#line 306 "hlds_out_pred.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_269_269, hlds__hlds_out__hlds_out_pred__TablingAuxPredKindStr_87, &hlds__hlds_out__hlds_out_pred__V_263_263);
                  }
#line 306 "hlds_out_pred.m"
                  {
#line 306 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_263_263);
                  }
#line 305 "hlds_out_pred.m"
                  {
#line 305 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) " for ");
                  }
#line 306 "hlds_out_pred.m"
                  {
#line 306 "hlds_out_pred.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_269_269, hlds__hlds_out__hlds_out_pred__BasePredStr_86, &hlds__hlds_out__hlds_out_pred__V_273_273);
                  }
#line 306 "hlds_out_pred.m"
                  {
#line 306 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_273_273);
                  }
#line 305 "hlds_out_pred.m"
                  {
#line 305 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
#line 296 "hlds_out_pred.m"
                }
#line 253 "hlds_out_pred.m"
                break;
#line 253 "hlds_out_pred.m"
              case (MR_Integer) 5:
#line 309 "hlds_out_pred.m"
                {
#line 309 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__MutableModuleName_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));
#line 309 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__MutableName_89 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 2)));
#line 309 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__MutablePredKind_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 3)));
#line 309 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__MutableModuleNameStr_91;
#line 309 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__MutablePredKindStr_92;
#line 309 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__V_305_305;
#line 309 "hlds_out_pred.m"
                  MR_Word hlds__hlds_out__hlds_out_pred__V_311_311;
#line 309 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__V_315_315;
#line 309 "hlds_out_pred.m"
                  MR_String hlds__hlds_out__hlds_out_pred__V_325_325;

#line 310 "hlds_out_pred.m"
                  {
#line 310 "hlds_out_pred.m"
                    hlds__hlds_out__hlds_out_pred__MutableModuleNameStr_91 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__MutableModuleName_88);
                  }
#line 314 "hlds_out_pred.m"
                  hlds__hlds_out__hlds_out_pred__MutablePredKindStr_92 = ((&hlds__hlds_out__hlds_out_pred_vector_common_4[0 + hlds__hlds_out__hlds_out_pred__MutablePredKind_90]))->hlds__hlds_out__hlds_out_pred__vector_common_type_4_0__vct_4_f_0;
#line 348 "hlds_out_pred.m"
                  {
#line 348 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "% ");
                  }
#line 8190 "hlds.hlds_out.hlds_out_pred.c"
                  hlds__hlds_out__hlds_out_pred__V_311_311 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0];
#line 349 "hlds_out_pred.m"
                  {
#line 349 "hlds_out_pred.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_311_311, hlds__hlds_out__hlds_out_pred__MutablePredKindStr_92, &hlds__hlds_out__hlds_out_pred__V_305_305);
                  }
#line 349 "hlds_out_pred.m"
                  {
#line 349 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_305_305);
                  }
#line 348 "hlds_out_pred.m"
                  {
#line 348 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) " for mutable ");
                  }
#line 349 "hlds_out_pred.m"
                  {
#line 349 "hlds_out_pred.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_311_311, hlds__hlds_out__hlds_out_pred__MutableName_89, &hlds__hlds_out__hlds_out_pred__V_315_315);
                  }
#line 349 "hlds_out_pred.m"
                  {
#line 349 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_315_315);
                  }
#line 348 "hlds_out_pred.m"
                  {
#line 348 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) " in module ");
                  }
#line 350 "hlds_out_pred.m"
                  {
#line 350 "hlds_out_pred.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__V_311_311, hlds__hlds_out__hlds_out_pred__MutableModuleNameStr_91, &hlds__hlds_out__hlds_out_pred__V_325_325);
                  }
#line 350 "hlds_out_pred.m"
                  {
#line 350 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__V_325_325);
                  }
#line 348 "hlds_out_pred.m"
                  {
#line 348 "hlds_out_pred.m"
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
#line 309 "hlds_out_pred.m"
                }
#line 253 "hlds_out_pred.m"
                break;
#line 253 "hlds_out_pred.m"
              case (MR_Integer) 6:
#line 353 "hlds_out_pred.m"
                {
#line 353 "hlds_out_pred.m"
                }
#line 253 "hlds_out_pred.m"
                break;
#line 253 "hlds_out_pred.m"
            }
#line 253 "hlds_out_pred.m"
            break;
#line 253 "hlds_out_pred.m"
        }
#line 156 "hlds_out_pred.m"
      }
#line 356 "hlds_out_pred.m"
    else
#line 356 "hlds_out_pred.m"
      {
#line 356 "hlds_out_pred.m"
      }
#line 359 "hlds_out_pred.m"
    {
#line 359 "hlds_out_pred.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ProcTable_97);
    }
#line 360 "hlds_out_pred.m"
    {
#line 360 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__ProcIds_98 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_14);
    }
#line 361 "hlds_out_pred.m"
    {
#line 361 "hlds_out_pred.m"
      hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(hlds__hlds_out__hlds_out_pred__Info_9, hlds__hlds_out__hlds_out_pred__ModuleInfo_11, hlds__hlds_out__hlds_out_pred__PredId_13, hlds__hlds_out__hlds_out_pred__PredStatus_24, hlds__hlds_out__hlds_out_pred__VarNamePrint_33, hlds__hlds_out__hlds_out_pred__ProcTable_97, hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__ProcIds_98);
    }
#line 363 "hlds_out_pred.m"
    {
#line 363 "hlds_out_pred.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 363 "hlds_out_pred.m"
      return;
    }
#line 113 "hlds_out_pred.m"
  }
#line 32 "hlds_out_pred.m"
}

void mercury__hlds__hlds_out__hlds_out_pred__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_pred__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__type_ctor_info_write_which_modes_0);
}

void mercury__hlds__hlds_out__hlds_out_pred__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_out.hlds_out_pred. */
