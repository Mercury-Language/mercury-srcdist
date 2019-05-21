/*
** Automatically generated from `hlds_out_pred.m'
** by the Mercury compiler,
** version rotd-2017-07-15
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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pragma.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_to_term.mih"
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_pred__type_ctor_info_table_locn_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_value_ordered_write_which_modes_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_name_ordered_write_which_modes_0[2];

static const MR_Integer hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__functor_number_map_write_which_modes_0[2];

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0_10001(
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0_10001(
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__1036__1_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_15,
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_23,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_262);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_9,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_10,
  MR_Word hlds__hlds_out__hlds_out_pred__ConstraintId_11,
  MR_Word hlds__hlds_out__hlds_out_pred__ProgConstraint_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
  MR_Word hlds__hlds_out__hlds_out_pred__ArgInfo_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__CoveragePointInfo_6,
  MR_Integer hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_11,
  MR_Integer * hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6,
  MR_Integer hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_14,
  MR_Integer * hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_15);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_9,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_10,
  MR_Word hlds__hlds_out__hlds_out_pred__OldVar_11,
  MR_Word hlds__hlds_out__hlds_out_pred__NewVars_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_10,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_11,
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_12,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_13,
  MR_Word hlds__hlds_out__hlds_out_pred__Var_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_10,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_11,
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_12,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_13,
  MR_Word hlds__hlds_out__hlds_out_pred__Constraint_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_10,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_11,
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_12,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_13,
  MR_Word hlds__hlds_out__hlds_out_pred__TVar_14);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_pred__Context_6,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__Markers_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_8,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_pred__ConstraintMap_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__Info_1,
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_2,
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_3,
  MR_Word hlds__hlds_out__hlds_out_pred__PredStatus_4,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_5,
  MR_Word hlds__hlds_out__hlds_out_pred__ProcTable_6,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__8_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
  MR_Word hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__ProcStatic_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_8,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_pred__UntupleInfo_10);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_8,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_pred__StackSlots_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_6,
  MR_Word hlds__hlds_out__hlds_out_pred__Head_7,
  MR_Word hlds__hlds_out__hlds_out_pred__Tail_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_9,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_10,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_11,
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_9,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_10,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_11,
  MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_1,
  MR_Word hlds__hlds_out__hlds_out_pred__TypeVarSet_2,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_3,
  MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_4,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_5,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__6_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__Info_14,
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_15,
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_16,
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_17,
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_18,
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_19,
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_20,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_21,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_22,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_23,
  MR_Word hlds__hlds_out__hlds_out_pred__Clauses_24);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__Info_15,
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_16,
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_17,
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_18,
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_19,
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_20,
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_21,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_22,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_23,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_24,
  MR_Word hlds__hlds_out__hlds_out_pred__Clauses_25,
  MR_Integer hlds__hlds_out__hlds_out_pred__ClauseNum_26);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_14_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_9,
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_10,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_11,
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_12,
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_13,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_1,
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_2,
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_3,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_4,
  MR_Word hlds__hlds_out__hlds_out_pred__WriteWhichModes_5,
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_6,
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_7,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__8_8,
  MR_Word hlds__hlds_out__hlds_out_pred__Context_9,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_10);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_13,
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_14,
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_15,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_16,
  MR_Word hlds__hlds_out__hlds_out_pred__WriteWhichModes_17,
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_18,
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_19,
  MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_20,
  MR_Word hlds__hlds_out__hlds_out_pred__Context_21,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_22);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__Info_3,
  MR_Word * hlds__hlds_out__hlds_out_pred__ClausesInfo_4);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_1[9][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_2[7][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_3[3][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_4[2][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_5[2][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_6[3][11];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_7[2][10];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_8[4][8];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_9[1][6];


/* sealed */ struct hlds__hlds_out__hlds_out_pred__vector_common_type_10_0_s {
  const MR_String hlds__hlds_out__hlds_out_pred__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_pred__vector_common_type_10_0_s hlds__hlds_out__hlds_out_pred_vector_common_10[44];



static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[0]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[5])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[6])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_clause_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[1])),
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_3[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_arg_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_pred__type_ctor_info_table_locn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_4[2][5] = {
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_6[3][11] = {
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_7[2][10] = {
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_8[4][8] = {
  /* row 0 */
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
  /* row 1 */
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
  /* row 2 */
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
  /* row 3 */
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
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_9[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct hlds__hlds_out__hlds_out_pred__vector_common_type_10_0_s hlds__hlds_out__hlds_out_pred_vector_common_10[44] = {
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
  /* row 20 */   {     (MR_String) "no_pred_decl" },
  /* row 21 */   {     (MR_String) "obsolete" },
  /* row 22 */   {     (MR_String) "no_determinism_warning" },
  /* row 23 */   {     (MR_String) "inline" },
  /* row 24 */   {     (MR_String) "no_inline" },
  /* row 25 */   {     (MR_String) "heuristic_inline" },
  /* row 26 */   {     (MR_String) "consider_used" },
  /* row 27 */   {     (MR_String) "class_method" },
  /* row 28 */   {     (MR_String) "class_instance_method" },
  /* row 29 */   {     (MR_String) "named_class_instance_method" },
  /* row 30 */   {     (MR_String) "impure" },
  /* row 31 */   {     (MR_String) "semipure" },
  /* row 32 */   {     (MR_String) "promise_pure" },
  /* row 33 */   {     (MR_String) "promise_semipure" },
  /* row 34 */   {     (MR_String) "promise_equivalent_clauses" },
  /* row 35 */   {     (MR_String) "terminates" },
  /* row 36 */   {     (MR_String) "does_not_terminate" },
  /* row 37 */   {     (MR_String) "check_termination" },
  /* row 38 */   {     (MR_String) "calls_are_fully_qualified" },
  /* row 39 */   {     (MR_String) "mode_check_clauses" },
  /* row 40 */   {     (MR_String) "mutable_access_pred" },
  /* row 41 */   {     (MR_String) "has_require_scope" },
  /* row 42 */   {     (MR_String) "has_incomplete_switch" },
  /* row 43 */   {     (MR_String) "has_format_call" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_pred__type_ctor_info_table_locn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0
  }
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_0 = {
  (MR_String) "write_actual_modes",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_1 = {
  (MR_String) "write_declared_modes",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_value_ordered_write_which_modes_0[2] = {
  &hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_0,
  &hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_name_ordered_write_which_modes_0[2] = {
  &hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_0,
  &hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_1
};

static const MR_Integer hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__functor_number_map_write_which_modes_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__type_ctor_info_write_which_modes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0_10001(
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

    {
      hlds__hlds_out__hlds_out_pred__succeeded = hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_2));
    }
    return hlds__hlds_out__hlds_out_pred__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0_10001(
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_out__hlds_out_pred__conv0_HeadVar__1_1;

    {
      hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0(&hlds__hlds_out__hlds_out_pred__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_3));
    }
    *hlds__hlds_out__hlds_out_pred__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__1036__1_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_15,
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_23,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_262)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

    {
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_23, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__HeadVar__3_262);
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0(
  MR_Word * hlds__hlds_out__hlds_out_pred__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_2,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Integer hlds__hlds_out__hlds_out_pred__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_pred__HeadVar__2_2;
    MR_Integer hlds__hlds_out__hlds_out_pred__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_pred__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_pred__HeadVar__1_1, hlds__hlds_out__hlds_out_pred__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_pred__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0(
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_1,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__HeadVar__2_1 == hlds__hlds_out__hlds_out_pred__HeadVar__2_2);

    return hlds__hlds_out__hlds_out_pred__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_9,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_10,
  MR_Word hlds__hlds_out__hlds_out_pred__ConstraintId_11,
  MR_Word hlds__hlds_out__hlds_out_pred__ProgConstraint_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__ConstraintType_28;
    MR_Word hlds__hlds_out__hlds_out_pred__GoalId_29;
    MR_Integer hlds__hlds_out__hlds_out_pred__N_30;
    MR_Integer hlds__hlds_out__hlds_out_pred__GoalIdNum_31;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
    hlds__hlds_out__hlds_out_pred__ConstraintType_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ConstraintId_11, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_pred__GoalId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ConstraintId_11, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_pred__N_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ConstraintId_11, (MR_Integer) 2)));
    switch (hlds__hlds_out__hlds_out_pred__ConstraintType_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "(E, ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "(A, ");
          }
        }
        break;
    }
    hlds__hlds_out__hlds_out_pred__GoalIdNum_31 = (MR_Integer) hlds__hlds_out__hlds_out_pred__GoalId_29;
    {
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__GoalIdNum_31);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__N_30);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_8, hlds__hlds_out__hlds_out_pred__VarNamePrint_9, hlds__hlds_out__hlds_out_pred__ProgConstraint_12);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__TVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_pred__Locn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__HeadVar__2_2, (MR_Integer) 1)));
    MR_String hlds__hlds_out__hlds_out_pred__Var_15;

    {
      mercury__io__write_string_3_p_0((MR_String) "% typeinfo for ");
    }
    {
      hlds__hlds_out__hlds_out_pred__Var_15 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_pred__TVarSet_5, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__TVar_6);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Locn_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer hlds__hlds_out__hlds_out_pred__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Locn_7, (MR_Integer) 0)));
        MR_String hlds__hlds_out__hlds_out_pred__Var_58;

        {
          mercury__io__write_string_3_p_0((MR_String) "direct in register ");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0], hlds__hlds_out__hlds_out_pred__N_9, &hlds__hlds_out__hlds_out_pred__Var_58);
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_58);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    else
      {
        MR_Integer hlds__hlds_out__hlds_out_pred__O_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Locn_7, (MR_Integer) 1)));
        MR_Integer hlds__hlds_out__hlds_out_pred__N_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Locn_7, (MR_Integer) 0)));
        MR_String hlds__hlds_out__hlds_out_pred__Var_37;
        MR_Word hlds__hlds_out__hlds_out_pred__Var_43;
        MR_String hlds__hlds_out__hlds_out_pred__Var_47;

        {
          mercury__io__write_string_3_p_0((MR_String) "indirect from register ");
        }
        hlds__hlds_out__hlds_out_pred__Var_43 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0];
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__Var_43, hlds__hlds_out__hlds_out_pred__N_32, &hlds__hlds_out__hlds_out_pred__Var_37);
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_37);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", offset ");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__Var_43, hlds__hlds_out__hlds_out_pred__O_10, &hlds__hlds_out__hlds_out_pred__Var_47);
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_47);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
  MR_Word hlds__hlds_out__hlds_out_pred__ArgInfo_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Integer hlds__hlds_out__hlds_out_pred__HeadVarNum_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ArgInfo_6, (MR_Integer) 0)));
    MR_String hlds__hlds_out__hlds_out_pred__HeadVarName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ArgInfo_6, (MR_Integer) 1)));
    MR_Integer hlds__hlds_out__hlds_out_pred__SlotNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ArgInfo_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_pred__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ArgInfo_6, (MR_Integer) 3)));
    MR_String hlds__hlds_out__hlds_out_pred__Var_25;

    {
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__HeadVarName_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
    {
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__HeadVarNum_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " in slot ");
    }
    {
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__SlotNum_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", type ");
    }
    {
      hlds__hlds_out__hlds_out_pred__Var_25 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(hlds__hlds_out__hlds_out_pred__TVarSet_5, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__Type_11);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_25);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__CoveragePointInfo_6,
  MR_Integer hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_11,
  MR_Integer * hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__RevGoalPath_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CoveragePointInfo_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_pred__PointType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CoveragePointInfo_6, (MR_Integer) 1)));
    MR_String hlds__hlds_out__hlds_out_pred__Var_21;
    MR_String hlds__hlds_out__hlds_out_pred__Var_24;
    MR_String hlds__hlds_out__hlds_out_pred__Var_31;

    {
      hlds__hlds_out__hlds_out_pred__Var_21 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__RevGoalPath_9);
    }
    switch (hlds__hlds_out__hlds_out_pred__PointType_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case ((int) MR_cp_type_branch_arm):
        hlds__hlds_out__hlds_out_pred__Var_24 = (MR_String) "branch arm";
        break;
      case ((int) MR_cp_type_coverage_after):
        hlds__hlds_out__hlds_out_pred__Var_24 = (MR_String) "after";
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% coverage point slot ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0], hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_11, &hlds__hlds_out__hlds_out_pred__Var_31);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_31);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ": goal path <");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_21);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ">, type ");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_24);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    *hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_12 = (hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_11 + (MR_Integer) 1);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6,
  MR_Integer hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_14,
  MR_Integer * hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_15)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_String hlds__hlds_out__hlds_out_pred__Var_108;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_114;

    {
      mercury__io__write_string_3_p_0((MR_String) "% call site static slot ");
    }
    hlds__hlds_out__hlds_out_pred__Var_114 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__Var_114, hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_14, &hlds__hlds_out__hlds_out_pred__Var_108);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_108);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_out__hlds_out_pred__CalleeRttiProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 0)));
          MR_String hlds__hlds_out__hlds_out_pred__TypeSubst_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
          MR_String hlds__hlds_out__hlds_out_pred__FileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
          MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 3)));
          MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 4)));
          MR_String hlds__hlds_out__hlds_out_pred__Var_51;
          MR_String hlds__hlds_out__hlds_out_pred__Var_146;

          {
            mercury__io__write_string_3_p_0((MR_String) "% normal call to ");
          }
          {
            mercury__io__write_3_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__CalleeRttiProcLabel_9)));
          }
          {
            mercury__io__nl_2_p_0();
          }
          {
            hlds__hlds_out__hlds_out_pred__Var_51 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_13);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "% type subst <");
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__TypeSubst_10);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_51);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ">\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "% filename <");
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__FileName_11);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ">, line number <");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__Var_114, hlds__hlds_out__hlds_out_pred__LineNumber_12, &hlds__hlds_out__hlds_out_pred__Var_146);
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_146);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ">\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String hlds__hlds_out__hlds_out_pred__Var_100;
          MR_String hlds__hlds_out__hlds_out_pred__FileName_102 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 0)));
          MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_103 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
          MR_String hlds__hlds_out__hlds_out_pred__Var_122;

          {
            mercury__io__write_string_3_p_0((MR_String) "% special call\n");
          }
          {
            hlds__hlds_out__hlds_out_pred__Var_100 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_104);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "% filename <");
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__FileName_102);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ">, line number <");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__Var_114, hlds__hlds_out__hlds_out_pred__LineNumber_103, &hlds__hlds_out__hlds_out_pred__Var_122);
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_122);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_100);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ">\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String hlds__hlds_out__hlds_out_pred__Var_74;
          MR_String hlds__hlds_out__hlds_out_pred__FileName_76 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 0)));
          MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_77 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
          MR_String hlds__hlds_out__hlds_out_pred__Var_177;

          {
            mercury__io__write_string_3_p_0((MR_String) "% higher order call\n");
          }
          {
            hlds__hlds_out__hlds_out_pred__Var_74 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_78);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "% filename <");
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__FileName_76);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ">, line number <");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__Var_114, hlds__hlds_out__hlds_out_pred__LineNumber_77, &hlds__hlds_out__hlds_out_pred__Var_177);
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_177);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_74);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ">\n");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String hlds__hlds_out__hlds_out_pred__Var_87;
              MR_String hlds__hlds_out__hlds_out_pred__FileName_89 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
              MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 3)));
              MR_String hlds__hlds_out__hlds_out_pred__Var_160;

              {
                mercury__io__write_string_3_p_0((MR_String) "% method call\n");
              }
              {
                hlds__hlds_out__hlds_out_pred__Var_87 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_91);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% filename <");
              }
              {
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__FileName_89);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ">, line number <");
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__Var_114, hlds__hlds_out__hlds_out_pred__LineNumber_90, &hlds__hlds_out__hlds_out_pred__Var_160);
              }
              {
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_160);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
              }
              {
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_87);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ">\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String hlds__hlds_out__hlds_out_pred__Var_39;
              MR_String hlds__hlds_out__hlds_out_pred__FileName_62 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 1)));
              MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_pred__GoalPath_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__CallSiteStaticData_6, (MR_Integer) 3)));
              MR_String hlds__hlds_out__hlds_out_pred__Var_194;

              {
                mercury__io__write_string_3_p_0((MR_String) "% callback\n");
              }
              {
                hlds__hlds_out__hlds_out_pred__Var_39 = mdbcomp__goal_path__goal_path_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__GoalPath_64);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% filename <");
              }
              {
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__FileName_62);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ">, line number <");
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_pred__Var_114, hlds__hlds_out__hlds_out_pred__LineNumber_63, &hlds__hlds_out__hlds_out_pred__Var_194);
              }
              {
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_194);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
              }
              {
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_39);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ">\n");
              }
            }
            break;
        }
        break;
    }
    *hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_15 = (hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_SlotNum_0_14 + (MR_Integer) 1);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_9,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_10,
  MR_Word hlds__hlds_out__hlds_out_pred__OldVar_11,
  MR_Word hlds__hlds_out__hlds_out_pred__NewVars_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_24_24;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "%\t");
    }
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_24_24, hlds__hlds_out__hlds_out_pred__VarSet_8, hlds__hlds_out__hlds_out_pred__VarNamePrint_9, hlds__hlds_out__hlds_out_pred__OldVar_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-> ");
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_24_24, hlds__hlds_out__hlds_out_pred__VarSet_8, hlds__hlds_out__hlds_out_pred__VarNamePrint_9, hlds__hlds_out__hlds_out_pred__NewVars_12);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_10,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_11,
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_12,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_13,
  MR_Word hlds__hlds_out__hlds_out_pred__Var_14)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_43_43;
    MR_Integer hlds__hlds_out__hlds_out_pred__VarNum_16;
    MR_Word hlds__hlds_out__hlds_out_pred__VarInfo_17;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_43_43, hlds__hlds_out__hlds_out_pred__VarSet_9, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__Var_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " (number ");
    }
    {
      mercury__term__var_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_43_43, hlds__hlds_out__hlds_out_pred__Var_14, &hlds__hlds_out__hlds_out_pred__VarNum_16);
    }
    {
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__VarNum_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ") ");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
    {
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_12, hlds__hlds_out__hlds_out_pred__Var_14, &hlds__hlds_out__hlds_out_pred__VarInfo_17);
    }
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__VarInfo_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_pred", (MR_String) "predicate \140hlds.hlds_out.hlds_out_pred.write_rtti_var_info\'/8", (MR_String) "non rtti var");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_pred__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarInfo_17, (MR_Integer) 0)));

          {
            mercury__io__write_string_3_p_0((MR_String) "type_info for ");
          }
          {
            parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_10, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__Type_18);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_out__hlds_out_pred__Constraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__VarInfo_17, (MR_Integer) 0)));

          {
            mercury__io__write_string_3_p_0((MR_String) "typeclass_info for ");
          }
          {
            parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_10, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__Constraint_19);
          }
        }
        break;
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_10,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_11,
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_12,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_13,
  MR_Word hlds__hlds_out__hlds_out_pred__Constraint_14)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_16;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_10, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__Constraint_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
    {
      hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_12, hlds__hlds_out__hlds_out_pred__Constraint_14, &hlds__hlds_out__hlds_out_pred__Var_16);
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_9, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__Var_16);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_9,
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_10,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_11,
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_12,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_13,
  MR_Word hlds__hlds_out__hlds_out_pred__TVar_14)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_54_54;
    MR_Integer hlds__hlds_out__hlds_out_pred__TVarNum_16;
    MR_Word hlds__hlds_out__hlds_out_pred__Locn_17;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_18;
    MR_Integer hlds__hlds_out__hlds_out_pred__VarNum_20;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    {
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_54_54, hlds__hlds_out__hlds_out_pred__TVarSet_10, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__TVar_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " (number ");
    }
    {
      mercury__term__var_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_54_54, hlds__hlds_out__hlds_out_pred__TVar_14, &hlds__hlds_out__hlds_out_pred__TVarNum_16);
    }
    {
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__TVarNum_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
    {
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_12, hlds__hlds_out__hlds_out_pred__TVar_14, &hlds__hlds_out__hlds_out_pred__Locn_17);
    }
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Locn_17)) == (MR_mktag((MR_Integer) 0))))
      {
        hlds__hlds_out__hlds_out_pred__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Locn_17, (MR_Integer) 0)));
        {
          mercury__io__write_string_3_p_0((MR_String) "type_info(");
        }
        {
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_9, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__Var_18);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ") ");
        }
      }
    else
      {
        MR_Integer hlds__hlds_out__hlds_out_pred__Index_19;

        hlds__hlds_out__hlds_out_pred__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Locn_17, (MR_Integer) 0)));
        hlds__hlds_out__hlds_out_pred__Index_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Locn_17, (MR_Integer) 1)));
        {
          mercury__io__write_string_3_p_0((MR_String) "typeclass_info(");
        }
        {
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_9, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__Var_18);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        {
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__Index_19);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ") ");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) " (number ");
    }
    {
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__Var_18, &hlds__hlds_out__hlds_out_pred__VarNum_20);
    }
    {
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__VarNum_20);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_pred__Context_6,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__AnnotatedTerm_9;
    MR_Word hlds__hlds_out__hlds_out_pred__HeadTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_pred__Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_pred__Var_11;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_13;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_14;

    {
      hlds__hlds_out__hlds_out_pred__Var_14 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_pred__Lang_5, hlds__hlds_out__hlds_out_pred__Context_6, hlds__hlds_out__hlds_out_pred__Mode_8);
    }
    {
      hlds__hlds_out__hlds_out_pred__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Var_13, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Var_14));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__hlds_out__hlds_out_pred__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Var_11, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__HeadTerm_7));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Var_11, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Var_13));
    }
    {
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[1], hlds__hlds_out__hlds_out_pred__Var_11, hlds__hlds_out__hlds_out_pred__Context_6, &hlds__hlds_out__hlds_out_pred__AnnotatedTerm_9);
    }
    return hlds__hlds_out__hlds_out_pred__AnnotatedTerm_9;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__Marker_4)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_String hlds__hlds_out__hlds_out_pred__Name_6;

    {
      hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(hlds__hlds_out__hlds_out_pred__Marker_4, &hlds__hlds_out__hlds_out_pred__Name_6);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Name_6);
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__1_1,
  MR_String * hlds__hlds_out__hlds_out_pred__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

    *hlds__hlds_out__hlds_out_pred__HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_pred_vector_common_10[16 + hlds__hlds_out__hlds_out_pred__HeadVar__1_1]))->hlds__hlds_out__hlds_out_pred__vector_common_type_10_0__vct_10_f_0;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
  MR_Word hlds__hlds_out__hlds_out_pred__StepDesc_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_String hlds__hlds_out__hlds_out_pred__VarName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StepDesc_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_pred__TrieStep_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StepDesc_6, (MR_Integer) 1)));
    MR_String hlds__hlds_out__hlds_out_pred__Var_17;

    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__VarName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__TrieStep_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_pred__TrieStep_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__hlds_out__hlds_out_pred__Var_17 = (MR_String) "dummy";
            break;
          case (MR_Integer) 1:
            hlds__hlds_out__hlds_out_pred__Var_17 = (MR_String) "int";
            break;
          case (MR_Integer) 2:
            hlds__hlds_out__hlds_out_pred__Var_17 = (MR_String) "uint";
            break;
          case (MR_Integer) 3:
            hlds__hlds_out__hlds_out_pred__Var_17 = (MR_String) "char";
            break;
          case (MR_Integer) 4:
            hlds__hlds_out__hlds_out_pred__Var_17 = (MR_String) "string";
            break;
          case (MR_Integer) 5:
            hlds__hlds_out__hlds_out_pred__Var_17 = (MR_String) "float";
            break;
          case (MR_Integer) 6:
            hlds__hlds_out__hlds_out_pred__Var_17 = (MR_String) "foreign_enum";
            break;
          case (MR_Integer) 7:
            hlds__hlds_out__hlds_out_pred__Var_17 = (MR_String) "typeinfo";
            break;
          case (MR_Integer) 8:
            hlds__hlds_out__hlds_out_pred__Var_17 = (MR_String) "typeclassinfo";
            break;
          case (MR_Integer) 9:
            hlds__hlds_out__hlds_out_pred__Var_17 = (MR_String) "promise_implied";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer hlds__hlds_out__hlds_out_pred__N_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__TrieStep_9, (MR_Integer) 0)));
          MR_String hlds__hlds_out__hlds_out_pred__Var_40;
          MR_String hlds__hlds_out__hlds_out_pred__Var_41;

          {
            hlds__hlds_out__hlds_out_pred__Var_41 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__N_22);
          }
          {
            hlds__hlds_out__hlds_out_pred__Var_40 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__Var_41, (MR_String) ")");
          }
          {
            hlds__hlds_out__hlds_out_pred__Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "enum(", hlds__hlds_out__hlds_out_pred__Var_40);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_out__hlds_out_pred__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__TrieStep_9, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_pred__IsPoly_24 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__TrieStep_9, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word hlds__hlds_out__hlds_out_pred__IsAddr_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__TrieStep_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_String hlds__hlds_out__hlds_out_pred__IsPolyStr_26;
          MR_String hlds__hlds_out__hlds_out_pred__IsAddrStr_27;
          MR_String hlds__hlds_out__hlds_out_pred__Var_29;
          MR_String hlds__hlds_out__hlds_out_pred__Var_30;
          MR_String hlds__hlds_out__hlds_out_pred__Var_32;
          MR_String hlds__hlds_out__hlds_out_pred__Var_34;
          MR_String hlds__hlds_out__hlds_out_pred__Var_35;
          MR_String hlds__hlds_out__hlds_out_pred__Var_37;

          switch (hlds__hlds_out__hlds_out_pred__IsPoly_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__hlds_out__hlds_out_pred__IsPolyStr_26 = (MR_String) "mono";
              break;
            case (MR_Integer) 1:
              hlds__hlds_out__hlds_out_pred__IsPolyStr_26 = (MR_String) "poly";
              break;
          }
          switch (hlds__hlds_out__hlds_out_pred__IsAddr_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              hlds__hlds_out__hlds_out_pred__IsAddrStr_27 = (MR_String) "addr";
              break;
            case (MR_Integer) 0:
              hlds__hlds_out__hlds_out_pred__IsAddrStr_27 = (MR_String) "value";
              break;
          }
          {
            hlds__hlds_out__hlds_out_pred__Var_30 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(hlds__hlds_out__hlds_out_pred__TVarSet_5, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__Type_23);
          }
          {
            hlds__hlds_out__hlds_out_pred__Var_37 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__IsAddrStr_27, (MR_String) ")");
          }
          {
            hlds__hlds_out__hlds_out_pred__Var_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_pred__Var_37);
          }
          {
            hlds__hlds_out__hlds_out_pred__Var_34 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__IsPolyStr_26, hlds__hlds_out__hlds_out_pred__Var_35);
          }
          {
            hlds__hlds_out__hlds_out_pred__Var_32 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_pred__Var_34);
          }
          {
            hlds__hlds_out__hlds_out_pred__Var_29 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__Var_30, hlds__hlds_out__hlds_out_pred__Var_32);
          }
          {
            hlds__hlds_out__hlds_out_pred__Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "general(", hlds__hlds_out__hlds_out_pred__Var_29);
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_17);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__Info_9,
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_10,
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_11,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_12,
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_13,
  MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_14)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__Module_16;
    MR_String hlds__hlds_out__hlds_out_pred__PredName_17;
    MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_18;
    MR_Word hlds__hlds_out__hlds_out_pred__ArgTypes_19;
    MR_Word hlds__hlds_out__hlds_out_pred__ExistQVars_20;
    MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_21;
    MR_Word hlds__hlds_out__hlds_out_pred__ClausesInfo_22;
    MR_Word hlds__hlds_out__hlds_out_pred__PredStatus_23;
    MR_Word hlds__hlds_out__hlds_out_pred__Markers_24;
    MR_Word hlds__hlds_out__hlds_out_pred__ClassContext_25;
    MR_Word hlds__hlds_out__hlds_out_pred__ProofMap_26;
    MR_Word hlds__hlds_out__hlds_out_pred__ConstraintMap_27;
    MR_Word hlds__hlds_out__hlds_out_pred__Purity_28;
    MR_Word hlds__hlds_out__hlds_out_pred__ExternalTypeParams_29;
    MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemap_30;
    MR_String hlds__hlds_out__hlds_out_pred__DumpOptions_31;
    MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_32;
    MR_Word hlds__hlds_out__hlds_out_pred__VarSet_35;
    MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_38;
    MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_39;
    MR_Word hlds__hlds_out__hlds_out_pred__ClausesRep_40;
    MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_42;
    MR_Word hlds__hlds_out__hlds_out_pred__ProcTable_97;
    MR_Word hlds__hlds_out__hlds_out_pred__ProcIds_98;
    MR_String hlds__hlds_out__hlds_out_pred__Var_224;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_225;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_226;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_227;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_36;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_37;
    MR_Word hlds__hlds_out__hlds_out_pred___ItemNumbers_41;
    MR_Word hlds__hlds_out__hlds_out_pred___HaveForeignClauses_43;
    MR_Word hlds__hlds_out__hlds_out_pred___HadSyntaxErrors_44;

    {
      hlds__hlds_out__hlds_out_pred__Module_16 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_14);
    }
    {
      hlds__hlds_out__hlds_out_pred__PredName_17 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_14);
    }
    {
      hlds__hlds_out__hlds_out_pred__PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_14);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ArgTypes_19);
    }
    {
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ExistQVars_20);
    }
    {
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__TVarSet_21);
    }
    {
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ClausesInfo_22);
    }
    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__PredStatus_23);
    }
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__Markers_24);
    }
    {
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ClassContext_25);
    }
    {
      hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ProofMap_26);
    }
    {
      hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ConstraintMap_27);
    }
    {
      hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__Purity_28);
    }
    {
      hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ExternalTypeParams_29);
    }
    {
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__VarNameRemap_30);
    }
    hlds__hlds_out__hlds_out_pred__DumpOptions_31 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_pred__Var_224 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_pred__Var_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 2)));
    hlds__hlds_out__hlds_out_pred__Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 3)));
    hlds__hlds_out__hlds_out_pred__Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_9, (MR_Integer) 4)));
    {
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_31, (MR_Char) 118);
    }
    if (hlds__hlds_out__hlds_out_pred__succeeded)
      hlds__hlds_out__hlds_out_pred__VarNamePrint_32 = (MR_Integer) 1;
    else
      hlds__hlds_out__hlds_out_pred__VarNamePrint_32 = (MR_Integer) 0;
    {
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_31, (MR_Char) 67);
    }
    if (hlds__hlds_out__hlds_out_pred__succeeded)
      switch (hlds__hlds_out__hlds_out_pred__PredOrFunc_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word hlds__hlds_out__hlds_out_pred__FuncArgTypes_33;
            MR_Word hlds__hlds_out__hlds_out_pred__FuncRetType_34;
            MR_Word hlds__hlds_out__hlds_out_pred__Var_103;
            MR_Box hlds__hlds_out__hlds_out_pred__conv0_FuncRetType_34;

            {
              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_out__hlds_out_pred__ArgTypes_19, &hlds__hlds_out__hlds_out_pred__FuncArgTypes_33, &hlds__hlds_out__hlds_out_pred__conv0_FuncRetType_34);
            }
            hlds__hlds_out__hlds_out_pred__FuncRetType_34 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_FuncRetType_34);
            {
              hlds__hlds_out__hlds_out_pred__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Var_103, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Module_16));
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Var_103, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_17));
            }
            {
              parse_tree__parse_tree_out_pred_decl__mercury_output_func_type_11_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_32, hlds__hlds_out__hlds_out_pred__ExistQVars_20, hlds__hlds_out__hlds_out_pred__Var_103, hlds__hlds_out__hlds_out_pred__FuncArgTypes_33, hlds__hlds_out__hlds_out_pred__FuncRetType_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_pred__Purity_28, hlds__hlds_out__hlds_out_pred__ClassContext_25);
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word hlds__hlds_out__hlds_out_pred__Var_106;

            {
              hlds__hlds_out__hlds_out_pred__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Var_106, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Module_16));
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Var_106, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_17));
            }
            {
              parse_tree__parse_tree_out_pred_decl__mercury_output_pred_type_10_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_32, hlds__hlds_out__hlds_out_pred__ExistQVars_20, hlds__hlds_out__hlds_out_pred__Var_106, hlds__hlds_out__hlds_out_pred__ArgTypes_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_pred__Purity_28, hlds__hlds_out__hlds_out_pred__ClassContext_25);
            }
          }
          break;
      }
    else
      {
      }
    hlds__hlds_out__hlds_out_pred__VarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_pred__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_pred__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 2)));
    hlds__hlds_out__hlds_out_pred__VarTypes_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 3)));
    hlds__hlds_out__hlds_out_pred__HeadVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 4)));
    hlds__hlds_out__hlds_out_pred__ClausesRep_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 5)));
    hlds__hlds_out__hlds_out_pred___ItemNumbers_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 6)));
    hlds__hlds_out__hlds_out_pred__RttiVarMaps_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 7)));
    hlds__hlds_out__hlds_out_pred___HaveForeignClauses_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 8)));
    hlds__hlds_out__hlds_out_pred___HadSyntaxErrors_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClausesInfo_22, (MR_Integer) 9)));
    {
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_31, (MR_Char) 67);
    }
    if (hlds__hlds_out__hlds_out_pred__succeeded)
      {
        MR_Integer hlds__hlds_out__hlds_out_pred__PredInt_45;
        MR_Word hlds__hlds_out__hlds_out_pred__GoalType_46;
        MR_Word hlds__hlds_out__hlds_out_pred__MarkerList_47;
        MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapList_52;
        MR_Word hlds__hlds_out__hlds_out_pred__Clauses_55;
        MR_Word hlds__hlds_out__hlds_out_pred__Origin_59;
        MR_String hlds__hlds_out__hlds_out_pred__Var_119;

        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% pred id: ");
        }
        {
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__PredId_13, &hlds__hlds_out__hlds_out_pred__PredInt_45);
        }
        {
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__PredInt_45);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", category: ");
        }
        {
          parse_tree__prog_out__write_pred_or_func_3_p_0(hlds__hlds_out__hlds_out_pred__PredOrFunc_18);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", status: ");
        }
        {
          hlds__hlds_out__hlds_out_pred__Var_119 = hlds__hlds_out__hlds_out_util__pred_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__PredStatus_23);
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_119);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% goal_type: ");
        }
        {
          hlds__hlds_pred__pred_info_get_goal_type_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__GoalType_46);
        }
        {
          mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_goal_type_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__GoalType_46)));
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          hlds__hlds_pred__markers_to_marker_list_2_p_0(hlds__hlds_out__hlds_out_pred__Markers_24, &hlds__hlds_out__hlds_out_pred__MarkerList_47);
        }
        if ((hlds__hlds_out__hlds_out_pred__MarkerList_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "% markers: ");
            }
            {
              hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0(hlds__hlds_out__hlds_out_pred__MarkerList_47);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        {
          hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(hlds__hlds_out__hlds_out_pred__VarSet_35, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_32, hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__RttiVarMaps_42);
        }
        {
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, hlds__hlds_out__hlds_out_pred__ProofMap_26);
        }
        if (hlds__hlds_out__hlds_out_pred__succeeded)
          {
          }
        else
          {
            {
              hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_32, hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__ProofMap_26);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        {
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_out__hlds_out_pred__ConstraintMap_27);
        }
        if (hlds__hlds_out__hlds_out_pred__succeeded)
          {
          }
        else
          {
            hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_32, hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__ConstraintMap_27);
          }
        if ((hlds__hlds_out__hlds_out_pred__ExternalTypeParams_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "% external_type_params:\n");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% ");
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_32, hlds__hlds_out__hlds_out_pred__ExternalTypeParams_29);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        {
          hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(hlds__hlds_out__hlds_out_pred__VarSet_35, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_32, hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__VarTypes_38);
        }
        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_pred__VarNameRemap_30, &hlds__hlds_out__hlds_out_pred__VarNameRemapList_52);
        }
        if ((hlds__hlds_out__hlds_out_pred__VarNameRemapList_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapHead_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarNameRemapList_52, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapTail_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarNameRemapList_52, (MR_Integer) 1)));

            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_12);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% var name remap: ");
            }
            {
              hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_35, hlds__hlds_out__hlds_out_pred__VarNameRemapHead_53, hlds__hlds_out__hlds_out_pred__VarNameRemapTail_54);
            }
            {
              mercury__io__nl_2_p_0();
            }
          }
        {
          hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(hlds__hlds_out__hlds_out_pred__ClausesRep_40, &hlds__hlds_out__hlds_out_pred__Clauses_55);
        }
        if ((hlds__hlds_out__hlds_out_pred__Clauses_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_pred__InfoForClauses_58;

            {
              hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(hlds__hlds_out__hlds_out_pred__Info_9, &hlds__hlds_out__hlds_out_pred__InfoForClauses_58);
            }
            {
              hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(hlds__hlds_out__hlds_out_pred__InfoForClauses_58, hlds__hlds_out__hlds_out_pred__Lang_10, hlds__hlds_out__hlds_out_pred__ModuleInfo_11, hlds__hlds_out__hlds_out_pred__PredId_13, hlds__hlds_out__hlds_out_pred__PredOrFunc_18, hlds__hlds_out__hlds_out_pred__VarSet_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_pred__VarNamePrint_32, hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__HeadVars_39, hlds__hlds_out__hlds_out_pred__Clauses_55);
            }
          }
        {
          hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__Origin_59);
        }
        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Origin_59)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% special pred\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_240_240;
              MR_Word hlds__hlds_out__hlds_out_pred__MethodConstraints_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_pred__ClassId_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__MethodConstraints_61, (MR_Integer) 0)));
              MR_Word hlds__hlds_out__hlds_out_pred__InstanceTypes_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__MethodConstraints_61, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_pred__InstanceConstraints_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__MethodConstraints_61, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_pred__ClassMethodConstraints_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__MethodConstraints_61, (MR_Integer) 3)));
              MR_Word hlds__hlds_out__hlds_out_pred__ClassName_66;
              MR_Word hlds__hlds_out__hlds_out_pred__MethodUnivConstraints_68;
              MR_Word hlds__hlds_out__hlds_out_pred__MethodExistConstraints_69;
              MR_Word hlds__hlds_out__hlds_out_pred__Var_200;
              MR_Word hlds__hlds_out__hlds_out_pred__Var_206;
              MR_Word hlds__hlds_out__hlds_out_pred__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)));
              MR_Integer hlds__hlds_out__hlds_out_pred__Var_67;

              {
                mercury__io__write_string_3_p_0((MR_String) "% instance method constraints:\n");
              }
              hlds__hlds_out__hlds_out_pred__ClassName_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClassId_62, (MR_Integer) 0)));
              hlds__hlds_out__hlds_out_pred__Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClassId_62, (MR_Integer) 1)));
              {
                hlds__hlds_out__hlds_out_pred__Var_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_200, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__ClassName_66));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_200, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__InstanceTypes_63));
              }
              {
                parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_32, hlds__hlds_out__hlds_out_pred__Var_200);
              }
              {
                mercury__io__nl_2_p_0();
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "instance constraints: ");
              }
              {
                hlds__hlds_out__hlds_out_pred__Var_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_206, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[3]));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_206, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_206, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_206, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_21));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_206, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarNamePrint_32));
              }
              hlds__hlds_out__hlds_out_pred__TypeCtorInfo_240_240 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
              {
                mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_240_240, hlds__hlds_out__hlds_out_pred__InstanceConstraints_64, (MR_String) ", ", hlds__hlds_out__hlds_out_pred__Var_206);
              }
              {
                mercury__io__nl_2_p_0();
              }
              hlds__hlds_out__hlds_out_pred__MethodUnivConstraints_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClassMethodConstraints_65, (MR_Integer) 0)));
              hlds__hlds_out__hlds_out_pred__MethodExistConstraints_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ClassMethodConstraints_65, (MR_Integer) 1)));
              {
                mercury__io__write_string_3_p_0((MR_String) "method univ constraints: ");
              }
              {
                mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_240_240, hlds__hlds_out__hlds_out_pred__MethodUnivConstraints_68, (MR_String) ", ", hlds__hlds_out__hlds_out_pred__Var_206);
              }
              {
                mercury__io__nl_2_p_0();
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "method exist constraints: ");
              }
              {
                mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_240_240, hlds__hlds_out__hlds_out_pred__MethodExistConstraints_69, (MR_String) ", ", hlds__hlds_out__hlds_out_pred__Var_206);
              }
              {
                mercury__io__nl_2_p_0();
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__hlds_out__hlds_out_pred__Transformation_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)));
              MR_Word hlds__hlds_out__hlds_out_pred__OrigPredId_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 2)));
              MR_Integer hlds__hlds_out__hlds_out_pred__OrigPredIdNum_75;
              MR_String hlds__hlds_out__hlds_out_pred__Var_252;
              MR_Word hlds__hlds_out__hlds_out_pred__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));

              {
                hlds__hlds_out__hlds_out_pred__OrigPredIdNum_75 = hlds__hlds_pred__pred_id_to_int_1_f_0(hlds__hlds_out__hlds_out_pred__OrigPredId_74);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% transformed from pred id ");
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0], hlds__hlds_out__hlds_out_pred__OrigPredIdNum_75, &hlds__hlds_out__hlds_out_pred__Var_252);
              }
              {
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_252);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% ");
              }
              {
                hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_11, hlds__hlds_out__hlds_out_pred__OrigPredId_74);
              }
              {
                mercury__io__nl_2_p_0();
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% transformation: ");
              }
              {
                mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_transformation_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__Transformation_72)));
              }
              {
                mercury__io__nl_2_p_0();
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__hlds_out__hlds_out_pred__Creation_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "% created: ");
                  }
                  {
                    mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_creation_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__Creation_76)));
                  }
                  {
                    mercury__io__nl_2_p_0();
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "% assertion\n");
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorSymName_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));
                  MR_Integer hlds__hlds_out__hlds_out_pred__TypeCtorArity_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 2)));
                  MR_Word hlds__hlds_out__hlds_out_pred__SolverAuxPredKind_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 3)));
                  MR_String hlds__hlds_out__hlds_out_pred__TypeCtorStr_82;
                  MR_String hlds__hlds_out__hlds_out_pred__SolverAuxPredKindStr_83;
                  MR_Word hlds__hlds_out__hlds_out_pred__Var_169;

                  {
                    hlds__hlds_out__hlds_out_pred__Var_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_169, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TypeCtorSymName_79));
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_169, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TypeCtorArity_80));
                  }
                  {
                    hlds__hlds_out__hlds_out_pred__TypeCtorStr_82 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__Var_169);
                  }
                  hlds__hlds_out__hlds_out_pred__SolverAuxPredKindStr_83 = ((&hlds__hlds_out__hlds_out_pred_vector_common_10[12 + hlds__hlds_out__hlds_out_pred__SolverAuxPredKind_81]))->hlds__hlds_out__hlds_out_pred__vector_common_type_10_0__vct_10_f_0;
                  {
                    mercury__io__write_string_3_p_0((MR_String) "% ");
                  }
                  {
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__SolverAuxPredKindStr_83);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " for ");
                  }
                  {
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorStr_82);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word hlds__hlds_out__hlds_out_pred__BasePredCallId_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));
                  MR_Word hlds__hlds_out__hlds_out_pred__TablingAuxPredKind_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 2)));
                  MR_String hlds__hlds_out__hlds_out_pred__BasePredStr_86;
                  MR_String hlds__hlds_out__hlds_out_pred__TablingAuxPredKindStr_87;

                  {
                    hlds__hlds_out__hlds_out_pred__BasePredStr_86 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__BasePredCallId_84);
                  }
                  switch (hlds__hlds_out__hlds_out_pred__TablingAuxPredKind_85) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      hlds__hlds_out__hlds_out_pred__TablingAuxPredKindStr_87 = (MR_String) "table reset predicate";
                      break;
                    case (MR_Integer) 0:
                      hlds__hlds_out__hlds_out_pred__TablingAuxPredKindStr_87 = (MR_String) "table statistics predicate";
                      break;
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "% ");
                  }
                  {
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__TablingAuxPredKindStr_87);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " for ");
                  }
                  {
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__BasePredStr_86);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word hlds__hlds_out__hlds_out_pred__MutableModuleName_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 1)));
                  MR_String hlds__hlds_out__hlds_out_pred__MutableName_89 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 2)));
                  MR_Word hlds__hlds_out__hlds_out_pred__MutablePredKind_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Origin_59, (MR_Integer) 3)));
                  MR_String hlds__hlds_out__hlds_out_pred__MutableModuleNameStr_91;
                  MR_String hlds__hlds_out__hlds_out_pred__MutablePredKindStr_92;

                  {
                    hlds__hlds_out__hlds_out_pred__MutableModuleNameStr_91 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__MutableModuleName_88);
                  }
                  hlds__hlds_out__hlds_out_pred__MutablePredKindStr_92 = ((&hlds__hlds_out__hlds_out_pred_vector_common_10[0 + hlds__hlds_out__hlds_out_pred__MutablePredKind_90]))->hlds__hlds_out__hlds_out_pred__vector_common_type_10_0__vct_10_f_0;
                  {
                    mercury__io__write_string_3_p_0((MR_String) "% ");
                  }
                  {
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__MutablePredKindStr_92);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " for mutable ");
                  }
                  {
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__MutableName_89);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " in module ");
                  }
                  {
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__MutableModuleNameStr_91);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                }
                break;
            }
            break;
        }
      }
    else
      {
      }
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_14, &hlds__hlds_out__hlds_out_pred__ProcTable_97);
    }
    {
      hlds__hlds_out__hlds_out_pred__ProcIds_98 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_14);
    }
    {
      hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(hlds__hlds_out__hlds_out_pred__Info_9, hlds__hlds_out__hlds_out_pred__ModuleInfo_11, hlds__hlds_out__hlds_out_pred__PredId_13, hlds__hlds_out__hlds_out_pred__PredStatus_23, hlds__hlds_out__hlds_out_pred__VarNamePrint_32, hlds__hlds_out__hlds_out_pred__ProcTable_97, hlds__hlds_out__hlds_out_pred__Indent_12, hlds__hlds_out__hlds_out_pred__ProcIds_98);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

    {
      hlds__hlds_out__hlds_out_pred__write_marker_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__Markers_4)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

    {
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0, hlds__hlds_out__hlds_out_pred__Markers_4, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[6]);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

    {
      hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_8,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_pred__ConstraintMap_10)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_17;
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_13;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% Constraint map:\n");
    }
    {
      hlds__hlds_out__hlds_out_pred__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_17, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarNamePrint_8));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_17, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_9));
    }
    {
      mercury__map__foldl_4_p_2((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_pred__Var_17, hlds__hlds_out__hlds_out_pred__ConstraintMap_10, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_13);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__Info_1,
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_2,
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_3,
  MR_Word hlds__hlds_out__hlds_out_pred__PredStatus_4,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_5,
  MR_Word hlds__hlds_out__hlds_out_pred__ProcTable_6,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__8_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

        if ((hlds__hlds_out__hlds_out_pred__HeadVar__8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__8_8, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_pred__ProcIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__8_8, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_pred__ProcInfo_31;
            MR_Box hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_31;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__hlds_out__hlds_out_pred__ProcTable_6, hlds__hlds_out__hlds_out_pred__ProcId_28, &hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_31);
            }
            hlds__hlds_out__hlds_out_pred__ProcInfo_31 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_31);
            {
              hlds__hlds_out__hlds_out_pred__write_proc_10_p_0(hlds__hlds_out__hlds_out_pred__Info_1, hlds__hlds_out__hlds_out_pred__ModuleInfo_2, hlds__hlds_out__hlds_out_pred__PredId_3, hlds__hlds_out__hlds_out_pred__PredStatus_4, hlds__hlds_out__hlds_out_pred__VarNamePrint_5, hlds__hlds_out__hlds_out_pred__Indent_7, hlds__hlds_out__hlds_out_pred__ProcId_28, hlds__hlds_out__hlds_out_pred__ProcInfo_31);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_pred__next_value_of_HeadVar__8_8 = hlds__hlds_out__hlds_out_pred__ProcIds_29;

              hlds__hlds_out__hlds_out_pred__HeadVar__8_8 = hlds__hlds_out__hlds_out_pred__next_value_of_HeadVar__8_8;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

    {
      hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__1036__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__Info_11,
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_13,
  MR_Word hlds__hlds_out__hlds_out_pred__PredStatus_14,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_16,
  MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_17,
  MR_Word hlds__hlds_out__hlds_out_pred__ProcInfo_18)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_20;
    MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_21;
    MR_Word hlds__hlds_out__hlds_out_pred__CanProcess_22;
    MR_Word hlds__hlds_out__hlds_out_pred__VarSet_23;
    MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_24;
    MR_Word hlds__hlds_out__hlds_out_pred__DeclaredDeterminism_25;
    MR_Word hlds__hlds_out__hlds_out_pred__InferredDeterminism_26;
    MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_27;
    MR_Word hlds__hlds_out__hlds_out_pred__HeadModes_28;
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeArgLives_29;
    MR_Word hlds__hlds_out__hlds_out_pred__RegR_HeadVars_30;
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeArgInfos_31;
    MR_Word hlds__hlds_out__hlds_out_pred__Goal_32;
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeArgSize_33;
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeTermination_34;
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeStructureSharing_35;
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeStructureReuse_36;
    MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_37;
    MR_Word hlds__hlds_out__hlds_out_pred__EvalMethod_38;
    MR_Word hlds__hlds_out__hlds_out_pred__DeletedCallCalleeSet_39;
    MR_Word hlds__hlds_out__hlds_out_pred__IsAddressTaken_40;
    MR_Word hlds__hlds_out__hlds_out_pred__HasParallelConj_41;
    MR_Word hlds__hlds_out__hlds_out_pred__HasUserEvent_42;
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeProcTableIOInfo_43;
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeCallTableTip_44;
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeDeepProfileInfo_45;
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeUntupleInfo_46;
    MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemap_47;
    MR_Integer hlds__hlds_out__hlds_out_pred__Indent1_48;
    MR_String hlds__hlds_out__hlds_out_pred__DumpOptions_49;
    MR_String hlds__hlds_out__hlds_out_pred__Var_245;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_246;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_247;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_248;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_12, hlds__hlds_out__hlds_out_pred__PredId_13, &hlds__hlds_out__hlds_out_pred__PredInfo_20);
    }
    {
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_20, &hlds__hlds_out__hlds_out_pred__TVarSet_21);
    }
    {
      hlds__hlds_pred__proc_info_get_can_process_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__CanProcess_22);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__VarSet_23);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__VarTypes_24);
    }
    {
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__DeclaredDeterminism_25);
    }
    {
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__InferredDeterminism_26);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__HeadVars_27);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__HeadModes_28);
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_arglives_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeArgLives_29);
    }
    {
      hlds__hlds_pred__proc_info_get_reg_r_headvars_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__RegR_HeadVars_30);
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_arg_info_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeArgInfos_31);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__Goal_32);
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeArgSize_33);
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeTermination_34);
    }
    {
      hlds__hlds_pred__proc_info_get_structure_sharing_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeStructureSharing_35);
    }
    {
      hlds__hlds_pred__proc_info_get_structure_reuse_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeStructureReuse_36);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__RttiVarMaps_37);
    }
    {
      hlds__hlds_pred__proc_info_get_eval_method_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__EvalMethod_38);
    }
    {
      hlds__hlds_pred__proc_info_get_deleted_call_callees_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__DeletedCallCalleeSet_39);
    }
    {
      hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__IsAddressTaken_40);
    }
    {
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__HasParallelConj_41);
    }
    {
      hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__HasUserEvent_42);
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_proc_table_io_info_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeProcTableIOInfo_43);
    }
    {
      hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeCallTableTip_44);
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeDeepProfileInfo_45);
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_untuple_info_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__MaybeUntupleInfo_46);
    }
    {
      hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__VarNameRemap_47);
    }
    hlds__hlds_out__hlds_out_pred__Indent1_48 = (hlds__hlds_out__hlds_out_pred__Indent_16 + (MR_Integer) 1);
    hlds__hlds_out__hlds_out_pred__DumpOptions_49 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_pred__Var_245 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_pred__Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 2)));
    hlds__hlds_out__hlds_out_pred__Var_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 3)));
    hlds__hlds_out__hlds_out_pred__Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_11, (MR_Integer) 4)));
    {
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_49, (MR_Char) 120);
    }
    if (hlds__hlds_out__hlds_out_pred__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_255_255;
        MR_Integer hlds__hlds_out__hlds_out_pred__PredInt_50;
        MR_Integer hlds__hlds_out__hlds_out_pred__ProcInt_51;
        MR_Word hlds__hlds_out__hlds_out_pred__DeletedCallCallees_58;
        MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapList_86;
        MR_String hlds__hlds_out__hlds_out_pred__PredName_89;
        MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_90;
        MR_Word hlds__hlds_out__hlds_out_pred__ModeVarSet_91;
        MR_String hlds__hlds_out__hlds_out_pred__Var_117;
        MR_Word hlds__hlds_out__hlds_out_pred__StructureSharing_52;
        MR_Word hlds__hlds_out__hlds_out_pred__StructureReuse_55;
        MR_Word hlds__hlds_out__hlds_out_pred__ArgInfos_96;
        MR_Word hlds__hlds_out__hlds_out_pred__Var_236;
        MR_Integer hlds__hlds_out__hlds_out_pred__Var_268;

        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent1_48);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% pred id ");
        }
        {
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__PredId_13, &hlds__hlds_out__hlds_out_pred__PredInt_50);
        }
        {
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__PredInt_50);
        }
        {
          mercury__io__nl_2_p_0();
        }
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent1_48);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% mode number ");
        }
        {
          hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__ProcId_17, &hlds__hlds_out__hlds_out_pred__ProcInt_51);
        }
        {
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__ProcInt_51);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " of ");
        }
        {
          hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_12, hlds__hlds_out__hlds_out_pred__PredId_13);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " (");
        }
        {
          hlds__hlds_out__hlds_out_pred__Var_117 = parse_tree__prog_out__determinism_to_string_1_f_0(hlds__hlds_out__hlds_out_pred__InferredDeterminism_26);
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_117);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "):\n");
        }
        switch (hlds__hlds_out__hlds_out_pred__CanProcess_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 0:
            {
              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% cannot_process_yet");
              }
              {
                mercury__io__nl_2_p_0();
              }
            }
            break;
        }
        {
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_49, (MR_Char) 116);
        }
        if (hlds__hlds_out__hlds_out_pred__succeeded)
          {
            MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_249_249;

            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% Arg size properties: ");
            }
            hlds__hlds_out__hlds_out_pred__TypeInfo_249_249 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[1];
            {
              parse_tree__parse_tree_out_pragma__write_maybe_arg_size_info_4_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_249_249, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__MaybeArgSize_33);
            }
            {
              mercury__io__nl_2_p_0();
            }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% Termination properties: ");
            }
            {
              parse_tree__parse_tree_out_pragma__write_maybe_termination_info_4_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, hlds__hlds_out__hlds_out_pred__TypeInfo_249_249, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__MaybeTermination_34);
            }
            {
              mercury__io__nl_2_p_0();
            }
          }
        else
          {
          }
        {
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_49, (MR_Char) 83);
        }
        if (hlds__hlds_out__hlds_out_pred__succeeded)
          {
            hlds__hlds_out__hlds_out_pred__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__MaybeStructureSharing_35)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_out__hlds_out_pred__succeeded)
              hlds__hlds_out__hlds_out_pred__StructureSharing_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeStructureSharing_35, (MR_Integer) 0)));
          }
        if (hlds__hlds_out__hlds_out_pred__succeeded)
          {
            MR_Word hlds__hlds_out__hlds_out_pred__SharingAs_53;
            MR_Word hlds__hlds_out__hlds_out_pred___Status_54;

            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% Structure sharing: \n");
            }
            hlds__hlds_out__hlds_out_pred__SharingAs_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StructureSharing_52, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_pred___Status_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StructureSharing_52, (MR_Integer) 1)));
            {
              parse_tree__prog_ctgc__dump_structure_sharing_domain_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_23, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__SharingAs_53);
            }
          }
        else
          {
          }
        {
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_49, (MR_Char) 82);
        }
        if (hlds__hlds_out__hlds_out_pred__succeeded)
          {
            hlds__hlds_out__hlds_out_pred__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__MaybeStructureReuse_36)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_out__hlds_out_pred__succeeded)
              hlds__hlds_out__hlds_out_pred__StructureReuse_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeStructureReuse_36, (MR_Integer) 0)));
          }
        if (hlds__hlds_out__hlds_out_pred__succeeded)
          {
            MR_Word hlds__hlds_out__hlds_out_pred__ReuseAs_56;
            MR_Word hlds__hlds_out__hlds_out_pred___ReuseStatus_57;

            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% Structure reuse: \n");
            }
            hlds__hlds_out__hlds_out_pred__ReuseAs_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StructureReuse_55, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_pred___ReuseStatus_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__StructureReuse_55, (MR_Integer) 1)));
            {
              parse_tree__prog_ctgc__dump_structure_reuse_domain_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_23, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__ReuseAs_56);
            }
          }
        else
          {
          }
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
        }
        {
          hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(hlds__hlds_out__hlds_out_pred__VarSet_23, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__Indent_16, hlds__hlds_out__hlds_out_pred__VarTypes_24);
        }
        {
          hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(hlds__hlds_out__hlds_out_pred__VarSet_23, hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__Indent_16, hlds__hlds_out__hlds_out_pred__RttiVarMaps_37);
        }
        {
          mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, hlds__hlds_out__hlds_out_pred__DeletedCallCalleeSet_39, &hlds__hlds_out__hlds_out_pred__DeletedCallCallees_58);
        }
        if ((hlds__hlds_out__hlds_out_pred__DeletedCallCallees_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "% procedures called from deleted goals: ");
            }
            {
              mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[2], ((MR_Box) (hlds__hlds_out__hlds_out_pred__DeletedCallCallees_58)));
            }
            {
              mercury__io__nl_2_p_0();
            }
          }
        switch (hlds__hlds_out__hlds_out_pred__IsAddressTaken_40) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% address is not taken\n");
              }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% address is taken\n");
              }
            }
            break;
        }
        switch (hlds__hlds_out__hlds_out_pred__HasParallelConj_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% does not contain parallel conjunction\n");
              }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% contains parallel conjunction\n");
              }
            }
            break;
        }
        switch (hlds__hlds_out__hlds_out_pred__HasUserEvent_42) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% does not contain user event\n");
              }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% contains user event\n");
              }
            }
            break;
        }
        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__EvalMethod_38)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(hlds__hlds_out__hlds_out_pred__EvalMethod_38)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "% eval method: ");
                  }
                  {
                    parse_tree__prog_out__write_eval_method_3_p_0(hlds__hlds_out__hlds_out_pred__EvalMethod_38);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% eval method: ");
              }
              {
                parse_tree__prog_out__write_eval_method_3_p_0(hlds__hlds_out__hlds_out_pred__EvalMethod_38);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
            }
            break;
        }
        if ((hlds__hlds_out__hlds_out_pred__MaybeProcTableIOInfo_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeProcTableIOInfo_43, (MR_Integer) 0)));

            {
              hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_21, hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_64);
            }
          }
        if ((hlds__hlds_out__hlds_out_pred__MaybeCallTableTip_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_pred__CallTableTip_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeCallTableTip_44, (MR_Integer) 0)));

            {
              mercury__io__write_string_3_p_0((MR_String) "% call table tip: ");
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_23, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__CallTableTip_65);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        if ((hlds__hlds_out__hlds_out_pred__MaybeDeepProfileInfo_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_pred__DeepProfileInfo_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeDeepProfileInfo_45, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_pred__MaybeRecInfo_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepProfileInfo_66, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_pred__MaybeDeepLayout_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepProfileInfo_66, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_pred__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepProfileInfo_66, (MR_Integer) 2)));

            if ((hlds__hlds_out__hlds_out_pred__MaybeRecInfo_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                MR_Word hlds__hlds_out__hlds_out_pred__DeepRecInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeRecInfo_67, (MR_Integer) 0)));
                MR_Word hlds__hlds_out__hlds_out_pred__Role_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepRecInfo_70, (MR_Integer) 0)));
                MR_Word hlds__hlds_out__hlds_out_pred__DeepPredProcId_73;
                MR_Word hlds__hlds_out__hlds_out_pred__DeepPredId_74;
                MR_Integer hlds__hlds_out__hlds_out_pred__DeepProcId_75;
                MR_Integer hlds__hlds_out__hlds_out_pred__DeepPredInt_76;
                MR_Integer hlds__hlds_out__hlds_out_pred__DeepProcInt_77;
                MR_Word hlds__hlds_out__hlds_out_pred__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepRecInfo_70, (MR_Integer) 1)));

                {
                  mercury__io__write_string_3_p_0((MR_String) "% deep recursion info: ");
                }
                if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Role_71)) == (MR_mktag((MR_Integer) 0))))
                  {
                    hlds__hlds_out__hlds_out_pred__DeepPredProcId_73 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_pred__Role_71), (MR_Integer) 0);
                    {
                      mercury__io__write_string_3_p_0((MR_String) "inner, outer is ");
                    }
                  }
                else
                  {
                    hlds__hlds_out__hlds_out_pred__DeepPredProcId_73 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_pred__Role_71), (MR_Integer) 1);
                    {
                      mercury__io__write_string_3_p_0((MR_String) "outer, inner is ");
                    }
                  }
                hlds__hlds_out__hlds_out_pred__DeepPredId_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepPredProcId_73, (MR_Integer) 0)));
                hlds__hlds_out__hlds_out_pred__DeepProcId_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepPredProcId_73, (MR_Integer) 1)));
                {
                  hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__DeepPredId_74, &hlds__hlds_out__hlds_out_pred__DeepPredInt_76);
                }
                {
                  hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__DeepProcId_75, &hlds__hlds_out__hlds_out_pred__DeepProcInt_77);
                }
                {
                  mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__DeepPredInt_76);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "/");
                }
                {
                  mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__DeepProcInt_77);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
            if ((hlds__hlds_out__hlds_out_pred__MaybeDeepLayout_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_254_254;
                MR_Word hlds__hlds_out__hlds_out_pred__DeepLayout_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeDeepLayout_68, (MR_Integer) 0)));
                MR_Word hlds__hlds_out__hlds_out_pred__ProcStatic_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepLayout_78, (MR_Integer) 0)));
                MR_Word hlds__hlds_out__hlds_out_pred__ExcpVars_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__DeepLayout_78, (MR_Integer) 1)));
                MR_Word hlds__hlds_out__hlds_out_pred__TopCSD_81;
                MR_Word hlds__hlds_out__hlds_out_pred__MiddleCSD_82;
                MR_Word hlds__hlds_out__hlds_out_pred__MaybeOldOutermost_83;

                {
                  hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0(hlds__hlds_out__hlds_out_pred__ProcStatic_79);
                }
                hlds__hlds_out__hlds_out_pred__TopCSD_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ExcpVars_80, (MR_Integer) 0)));
                hlds__hlds_out__hlds_out_pred__MiddleCSD_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ExcpVars_80, (MR_Integer) 1)));
                hlds__hlds_out__hlds_out_pred__MaybeOldOutermost_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ExcpVars_80, (MR_Integer) 2)));
                {
                  mercury__io__write_string_3_p_0((MR_String) "% deep layout info: ");
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "TopCSD is ");
                }
                hlds__hlds_out__hlds_out_pred__TypeCtorInfo_254_254 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                {
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_254_254, hlds__hlds_out__hlds_out_pred__VarSet_23, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__TopCSD_81);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ", MiddleCSD is ");
                }
                {
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_254_254, hlds__hlds_out__hlds_out_pred__VarSet_23, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__MiddleCSD_82);
                }
                if ((hlds__hlds_out__hlds_out_pred__MaybeOldOutermost_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                  }
                else
                  {
                    MR_Word hlds__hlds_out__hlds_out_pred__OldOutermost_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeOldOutermost_83, (MR_Integer) 0)));

                    {
                      mercury__io__write_string_3_p_0((MR_String) ", OldOutermost is ");
                    }
                    {
                      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_254_254, hlds__hlds_out__hlds_out_pred__VarSet_23, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__OldOutermost_84);
                    }
                  }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
          }
        if ((hlds__hlds_out__hlds_out_pred__MaybeUntupleInfo_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_pred__UntupleInfo_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeUntupleInfo_46, (MR_Integer) 0)));

            {
              hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0(hlds__hlds_out__hlds_out_pred__VarSet_23, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__Indent_16, hlds__hlds_out__hlds_out_pred__UntupleInfo_85);
            }
          }
        hlds__hlds_out__hlds_out_pred__TypeInfo_255_255 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0];
        {
          mercury__map__to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_255_255, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_pred__VarNameRemap_47, &hlds__hlds_out__hlds_out_pred__VarNameRemapList_86);
        }
        if ((hlds__hlds_out__hlds_out_pred__VarNameRemapList_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapHead_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarNameRemapList_86, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_pred__VarNameRemapTail_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__VarNameRemapList_86, (MR_Integer) 1)));

            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% var name remap: ");
            }
            {
              hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(hlds__hlds_out__hlds_out_pred__VarSet_23, hlds__hlds_out__hlds_out_pred__VarNameRemapHead_87, hlds__hlds_out__hlds_out_pred__VarNameRemapTail_88);
            }
            {
              mercury__io__nl_2_p_0();
            }
          }
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
        }
        {
          hlds__hlds_out__hlds_out_pred__PredName_89 = hlds__hlds_module__predicate_name_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_12, hlds__hlds_out__hlds_out_pred__PredId_13);
        }
        {
          hlds__hlds_out__hlds_out_pred__PredOrFunc_90 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_20);
        }
        {
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_pred__ModeVarSet_91);
        }
        switch (hlds__hlds_out__hlds_out_pred__PredOrFunc_90) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_out__hlds_out_pred__FuncHeadModes_93;
              MR_Word hlds__hlds_out__hlds_out_pred__RetHeadMode_94;
              MR_Word hlds__hlds_out__hlds_out_pred__Var_212;
              MR_Box hlds__hlds_out__hlds_out_pred__conv0_RetHeadMode_94;

              {
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_pred__HeadModes_28, &hlds__hlds_out__hlds_out_pred__FuncHeadModes_93, &hlds__hlds_out__hlds_out_pred__conv0_RetHeadMode_94);
              }
              hlds__hlds_out__hlds_out_pred__RetHeadMode_94 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_RetHeadMode_94);
              {
                hlds__hlds_out__hlds_out_pred__Var_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_212, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_89));
              }
              {
                parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_8_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_pred__ModeVarSet_91, hlds__hlds_out__hlds_out_pred__Var_212, hlds__hlds_out__hlds_out_pred__FuncHeadModes_93, hlds__hlds_out__hlds_out_pred__RetHeadMode_94, hlds__hlds_out__hlds_out_pred__DeclaredDeterminism_25);
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_out__hlds_out_pred__Var_215;

              {
                hlds__hlds_out__hlds_out_pred__Var_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_215, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_89));
              }
              {
                parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_8_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_pred__ModeVarSet_91, hlds__hlds_out__hlds_out_pred__Var_215, hlds__hlds_out__hlds_out_pred__HeadModes_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_pred__DeclaredDeterminism_25);
              }
            }
            break;
        }
        if ((hlds__hlds_out__hlds_out_pred__MaybeArgLives_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_pred__ArgLives_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeArgLives_29, (MR_Integer) 0)));

            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% arg lives: ");
            }
            {
              mercury__io__print_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[3], ((MR_Box) (hlds__hlds_out__hlds_out_pred__ArgLives_95)));
            }
            {
              mercury__io__nl_2_p_0();
            }
          }
        {
          hlds__hlds_out__hlds_out_pred__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__RegR_HeadVars_30);
        }
        if (hlds__hlds_out__hlds_out_pred__succeeded)
          {
            MR_Word hlds__hlds_out__hlds_out_pred__Var_225;
            MR_Word hlds__hlds_out__hlds_out_pred__Var_227;

            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% reg_r headvars: ");
            }
            {
              hlds__hlds_out__hlds_out_pred__Var_225 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__RegR_HeadVars_30);
            }
            {
              hlds__hlds_out__hlds_out_pred__Var_227 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_227, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[2]));
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_227, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_proc_10_p_0_1));
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_227, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_227, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarNamePrint_15));
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_227, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_23));
            }
            {
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_255_255, hlds__hlds_out__hlds_out_pred__Var_225, (MR_String) ", ", hlds__hlds_out__hlds_out_pred__Var_227);
            }
            {
              mercury__io__nl_2_p_0();
            }
          }
        else
          {
          }
        {
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_49, (MR_Char) 65);
        }
        if (hlds__hlds_out__hlds_out_pred__succeeded)
          {
            hlds__hlds_out__hlds_out_pred__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__MaybeArgInfos_31)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_out__hlds_out_pred__succeeded)
              hlds__hlds_out__hlds_out_pred__ArgInfos_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeArgInfos_31, (MR_Integer) 0)));
          }
        if (hlds__hlds_out__hlds_out_pred__succeeded)
          {
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% arg_infos: ");
            }
            {
              mercury__io__print_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[4], ((MR_Box) (hlds__hlds_out__hlds_out_pred__ArgInfos_96)));
            }
            {
              mercury__io__nl_2_p_0();
            }
          }
        else
          {
          }
        hlds__hlds_out__hlds_out_pred__Var_236 = (MR_Word) hlds__hlds_out__hlds_out_pred__PredStatus_14;
        hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__Var_236 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
        if (hlds__hlds_out__hlds_out_pred__succeeded)
          {
            {
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&hlds__hlds_out__hlds_out_pred__Var_268);
            }
            hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__ProcId_17 == hlds__hlds_out__hlds_out_pred__Var_268);
          }
        if (hlds__hlds_out__hlds_out_pred__succeeded)
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_pred__StackSlots_97;
            MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_98;

            {
              hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_18, &hlds__hlds_out__hlds_out_pred__StackSlots_97);
            }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
            {
              hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(hlds__hlds_out__hlds_out_pred__VarSet_23, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__Indent_16, hlds__hlds_out__hlds_out_pred__StackSlots_97);
            }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_16);
            }
            {
              mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__HeadVars_27, &hlds__hlds_out__hlds_out_pred__HeadTerms_98);
            }
            {
              hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_12, hlds__hlds_out__hlds_out_pred__VarSet_23, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__PredId_13, hlds__hlds_out__hlds_out_pred__PredOrFunc_90, hlds__hlds_out__hlds_out_pred__HeadTerms_98);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " :-\n");
            }
            {
              hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(hlds__hlds_out__hlds_out_pred__Info_11, hlds__hlds_out__hlds_out_pred__ModuleInfo_12, hlds__hlds_out__hlds_out_pred__VarSet_23, hlds__hlds_out__hlds_out_pred__VarNamePrint_15, hlds__hlds_out__hlds_out_pred__Indent1_48, (MR_String) ".\n", hlds__hlds_out__hlds_out_pred__Goal_32);
            }
          }
      }
    else
      {
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
  MR_Word hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__MaybeArgInfos_8 = (MR_Word) hlds__hlds_out__hlds_out_pred__ProcTableIOInfo_6;

    if ((hlds__hlds_out__hlds_out_pred__MaybeArgInfos_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "% proc table io info: io tabled, no arg_infos\n");
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_pred__ArgInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__MaybeArgInfos_8, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "% proc table io info: io tabled, arg_infos:\n");
        }
        {
          hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0(hlds__hlds_out__hlds_out_pred__TVarSet_5, hlds__hlds_out__hlds_out_pred__ArgInfos_9);
        }
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

    {
      hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

    {
      hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_5,
  MR_Word hlds__hlds_out__hlds_out_pred__TableArgInfos_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_27_27;
    MR_Word hlds__hlds_out__hlds_out_pred__ArgInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__TableArgInfos_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_pred__TVarMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__TableArgInfos_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_pred__TVarPairs_10;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_17;
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_18_18;

    {
      mercury__io__write_string_3_p_0((MR_String) "% arg infos:\n");
    }
    {
      hlds__hlds_out__hlds_out_pred__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_5));
    }
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_27_27 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_arg_info_0, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_27_27, hlds__hlds_out__hlds_out_pred__Var_17, hlds__hlds_out__hlds_out_pred__ArgInfos_8, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_18_18);
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[5], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0, hlds__hlds_out__hlds_out_pred__TVarMap_9, &hlds__hlds_out__hlds_out_pred__TVarPairs_10);
    }
    if ((hlds__hlds_out__hlds_out_pred__TVarPairs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_pred__Var_21;
        MR_Box hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_14;

        {
          mercury__io__write_string_3_p_0((MR_String) "% type var map:\n");
        }
        {
          hlds__hlds_out__hlds_out_pred__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_21, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_2));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_21, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_5));
        }
        {
          mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[0], hlds__hlds_out__hlds_out_pred__TypeCtorInfo_27_27, hlds__hlds_out__hlds_out_pred__Var_21, hlds__hlds_out__hlds_out_pred__TVarPairs_10, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_14);
        }
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_5)
{
  {
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
    MR_Integer hlds__hlds_out__hlds_out_pred__conv3_STATE_VARIABLE_SlotNum_12;

    {
      hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_p_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_pred__wrapper_arg_2), &hlds__hlds_out__hlds_out_pred__conv3_STATE_VARIABLE_SlotNum_12);
    }
    *hlds__hlds_out__hlds_out_pred__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv3_STATE_VARIABLE_SlotNum_12));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_5)
{
  {
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
    MR_Integer hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_SlotNum_15;

    {
      hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_p_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_pred__wrapper_arg_2), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_SlotNum_15);
    }
    *hlds__hlds_out__hlds_out_pred__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_SlotNum_15));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__ProcStatic_4)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_40_40;
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_41_41;
    MR_String hlds__hlds_out__hlds_out_pred__FileName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 0)));
    MR_Integer hlds__hlds_out__hlds_out_pred__LineNumber_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_pred__InInterface_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_pred__CallSiteStatics_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 3)));
    MR_Word hlds__hlds_out__hlds_out_pred__CoveragePoints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__ProcStatic_4, (MR_Integer) 4)));
    MR_Integer hlds__hlds_out__hlds_out_pred__Var_11;
    MR_Box hlds__hlds_out__hlds_out_pred__conv2_Var_11;
    MR_Box hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_29_29;
    MR_Integer hlds__hlds_out__hlds_out_pred__Var_12;
    MR_Box hlds__hlds_out__hlds_out_pred__conv5_Var_12;
    MR_Box hlds__hlds_out__hlds_out_pred__conv4_STATE_VARIABLE_IO_14;

    {
      mercury__io__write_string_3_p_0((MR_String) "% proc static filename: ");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__FileName_6);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% proc static line number: ");
    }
    {
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__LineNumber_7);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% proc static is interface: ");
    }
    {
      mercury__io__write_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__InInterface_8)));
    }
    {
      mercury__io__nl_2_p_0();
    }
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_41_41 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_40_40, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_41_41, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[4], hlds__hlds_out__hlds_out_pred__CallSiteStatics_9, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv2_Var_11, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_29_29);
    }
    hlds__hlds_out__hlds_out_pred__Var_11 = ((MR_Integer) hlds__hlds_out__hlds_out_pred__conv2_Var_11);
    {
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_40_40, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_41_41, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[5], hlds__hlds_out__hlds_out_pred__CoveragePoints_10, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv5_Var_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv4_STATE_VARIABLE_IO_14);
    }
    hlds__hlds_out__hlds_out_pred__Var_12 = ((MR_Integer) hlds__hlds_out__hlds_out_pred__conv5_Var_12);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_3,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

    {
      hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_8,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_pred__UntupleInfo_10)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__UntupleMap_12 = (MR_Word) hlds__hlds_out__hlds_out_pred__UntupleInfo_10;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_18;
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_14;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% untuple:\n");
    }
    {
      hlds__hlds_out__hlds_out_pred__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_18, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_18, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_18, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_18, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarNamePrint_8));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_18, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_9));
    }
    {
      mercury__map__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[7], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_pred__Var_18, hlds__hlds_out__hlds_out_pred__UntupleMap_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_14);
    }
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
    MR_Word hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2;

    {
      hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
    hlds__hlds_out__hlds_out_pred__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2));
    return hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_8,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_pred__StackSlots_10)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_18_18 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0];
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0;
    MR_Word hlds__hlds_out__hlds_out_pred__VarSlotList0_12;
    MR_Word hlds__hlds_out__hlds_out_pred__VarSlotList_13;

    {
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_18_18, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_19_19, hlds__hlds_out__hlds_out_pred__StackSlots_10, &hlds__hlds_out__hlds_out_pred__VarSlotList0_12);
    }
    {
      hlds__hlds_out__hlds_out_pred__VarSlotList_13 = mercury__assoc_list__map_values_only_2_f_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_19_19, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, hlds__hlds_out__hlds_out_pred__TypeInfo_18_18, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[3], hlds__hlds_out__hlds_out_pred__VarSlotList0_12);
    }
    {
      hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(hlds__hlds_out__hlds_out_pred__VarSet_7, hlds__hlds_out__hlds_out_pred__VarNamePrint_8, hlds__hlds_out__hlds_out_pred__Indent_9, hlds__hlds_out__hlds_out_pred__VarSlotList_13);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_6,
  MR_Word hlds__hlds_out__hlds_out_pred__Head_7,
  MR_Word hlds__hlds_out__hlds_out_pred__Tail_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
        MR_Word hlds__hlds_out__hlds_out_pred__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Head_7, (MR_Integer) 0)));
        MR_String hlds__hlds_out__hlds_out_pred__NewName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Head_7, (MR_Integer) 1)));

        {
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_6, (MR_Integer) 1, hlds__hlds_out__hlds_out_pred__Var_10);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " -> ");
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__NewName_11);
        }
        if ((hlds__hlds_out__hlds_out_pred__Tail_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_pred__TailHead_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Tail_8, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_pred__TailTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Tail_8, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_pred__next_value_of_Head_7 = hlds__hlds_out__hlds_out_pred__TailHead_12;
              MR_Word hlds__hlds_out__hlds_out_pred__next_value_of_Tail_8 = hlds__hlds_out__hlds_out_pred__TailTail_13;

              hlds__hlds_out__hlds_out_pred__Tail_8 = hlds__hlds_out__hlds_out_pred__next_value_of_Tail_8;
              hlds__hlds_out__hlds_out_pred__Head_7 = hlds__hlds_out__hlds_out_pred__next_value_of_Head_7;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

    {
      hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 6))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 7))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

    {
      hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 6))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 7))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_pred__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;

    {
      hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 6))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 7))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_9,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_10,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_11,
  MR_Word hlds__hlds_out__hlds_out_pred__RttiVarMaps_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38;
    MR_Word hlds__hlds_out__hlds_out_pred__TypeVars_14;
    MR_Word hlds__hlds_out__hlds_out_pred__Constraints_15;
    MR_Word hlds__hlds_out__hlds_out_pred__ProgVars_16;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_22;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_27;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_32;
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_23_23;
    MR_Box hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_28_28;
    MR_Box hlds__hlds_out__hlds_out_pred__conv2_STATE_VARIABLE_IO_18;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% type_info varmap:\n");
    }
    {
      hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_12, &hlds__hlds_out__hlds_out_pred__TypeVars_14);
    }
    {
      hlds__hlds_out__hlds_out_pred__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_22, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_8));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_22, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_22, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarNamePrint_10));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_22, 6) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__RttiVarMaps_12));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_22, 7) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_11));
    }
    hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[5], hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38, hlds__hlds_out__hlds_out_pred__Var_22, hlds__hlds_out__hlds_out_pred__TypeVars_14, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv0_STATE_VARIABLE_IO_23_23);
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% typeclass_info varmap:\n");
    }
    {
      hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_12, &hlds__hlds_out__hlds_out_pred__Constraints_15);
    }
    {
      hlds__hlds_out__hlds_out_pred__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_27, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_27, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_8));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_27, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_27, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarNamePrint_10));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_27, 6) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__RttiVarMaps_12));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_27, 7) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_11));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38, hlds__hlds_out__hlds_out_pred__Var_27, hlds__hlds_out__hlds_out_pred__Constraints_15, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv1_STATE_VARIABLE_IO_28_28);
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% rtti_var_info:\n");
    }
    {
      hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(hlds__hlds_out__hlds_out_pred__RttiVarMaps_12, &hlds__hlds_out__hlds_out_pred__ProgVars_16);
    }
    {
      hlds__hlds_out__hlds_out_pred__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarSet_8));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__TVarSet_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_32, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__VarNamePrint_10));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_32, 6) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__RttiVarMaps_12));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_32, 7) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Indent_11));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], hlds__hlds_out__hlds_out_pred__TypeCtorInfo_38_38, hlds__hlds_out__hlds_out_pred__Var_32, hlds__hlds_out__hlds_out_pred__ProgVars_16, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_pred__conv2_STATE_VARIABLE_IO_18);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_8,
  MR_Word hlds__hlds_out__hlds_out_pred__TVarSet_9,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_10,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_11,
  MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Integer hlds__hlds_out__hlds_out_pred__NumVarTypes_14;
    MR_Word hlds__hlds_out__hlds_out_pred__Vars_15;
    MR_String hlds__hlds_out__hlds_out_pred__Var_30;

    {
      hlds__vartypes__vartypes_count_2_p_0(hlds__hlds_out__hlds_out_pred__VarTypes_12, &hlds__hlds_out__hlds_out_pred__NumVarTypes_14);
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% variable types map ");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0], hlds__hlds_out__hlds_out_pred__NumVarTypes_14, &hlds__hlds_out__hlds_out_pred__Var_30);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_pred__Var_30);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " entries):\n");
    }
    {
      hlds__vartypes__vartypes_vars_2_p_0(hlds__hlds_out__hlds_out_pred__VarTypes_12, &hlds__hlds_out__hlds_out_pred__Vars_15);
    }
    {
      hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(hlds__hlds_out__hlds_out_pred__VarSet_8, hlds__hlds_out__hlds_out_pred__TVarSet_9, hlds__hlds_out__hlds_out_pred__VarNamePrint_10, hlds__hlds_out__hlds_out_pred__VarTypes_12, hlds__hlds_out__hlds_out_pred__Indent_11, hlds__hlds_out__hlds_out_pred__Vars_15);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_1,
  MR_Word hlds__hlds_out__hlds_out_pred__TypeVarSet_2,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_3,
  MR_Word hlds__hlds_out__hlds_out_pred__VarTypes_4,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_5,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

        if ((hlds__hlds_out__hlds_out_pred__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_44_44;
            MR_Word hlds__hlds_out__hlds_out_pred__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__6_6, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_pred__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__6_6, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_pred__Type_25;
            MR_Integer hlds__hlds_out__hlds_out_pred__VarNum_26;

            {
              hlds__vartypes__lookup_var_type_3_p_0(hlds__hlds_out__hlds_out_pred__VarTypes_4, hlds__hlds_out__hlds_out_pred__Var_22, &hlds__hlds_out__hlds_out_pred__Type_25);
            }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_5);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% ");
            }
            hlds__hlds_out__hlds_out_pred__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_pred__VarSet_1, hlds__hlds_out__hlds_out_pred__VarNamePrint_3, hlds__hlds_out__hlds_out_pred__Var_22);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " (number ");
            }
            {
              mercury__term__var_to_int_2_p_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_pred__Var_22, &hlds__hlds_out__hlds_out_pred__VarNum_26);
            }
            {
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__VarNum_26);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ": ");
            }
            {
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_pred__TypeVarSet_2, hlds__hlds_out__hlds_out_pred__VarNamePrint_3, hlds__hlds_out__hlds_out_pred__Type_25);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_pred__next_value_of_HeadVar__6_6 = hlds__hlds_out__hlds_out_pred__Vars_23;

              hlds__hlds_out__hlds_out_pred__HeadVar__6_6 = hlds__hlds_out__hlds_out_pred__next_value_of_HeadVar__6_6;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__Info_14,
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_15,
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_16,
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_17,
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_18,
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_19,
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_20,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_21,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_22,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_23,
  MR_Word hlds__hlds_out__hlds_out_pred__Clauses_24)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__HeadVarList_26;

    {
      hlds__hlds_out__hlds_out_pred__HeadVarList_26 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], hlds__hlds_out__hlds_out_pred__HeadVars_23);
    }
    {
      hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(hlds__hlds_out__hlds_out_pred__Info_14, hlds__hlds_out__hlds_out_pred__Lang_15, hlds__hlds_out__hlds_out_pred__ModuleInfo_16, hlds__hlds_out__hlds_out_pred__PredId_17, hlds__hlds_out__hlds_out_pred__PredOrFunc_18, hlds__hlds_out__hlds_out_pred__VarSet_19, hlds__hlds_out__hlds_out_pred__TypeQual_20, hlds__hlds_out__hlds_out_pred__VarNamePrint_21, hlds__hlds_out__hlds_out_pred__Indent_22, hlds__hlds_out__hlds_out_pred__HeadVarList_26, hlds__hlds_out__hlds_out_pred__Clauses_24, (MR_Integer) 1);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__Info_15,
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_16,
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_17,
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_18,
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_19,
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_20,
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_21,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_22,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_23,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVars_24,
  MR_Word hlds__hlds_out__hlds_out_pred__Clauses_25,
  MR_Integer hlds__hlds_out__hlds_out_pred__ClauseNum_26)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

        if ((hlds__hlds_out__hlds_out_pred__Clauses_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_pred__FirstClause_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Clauses_25, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_pred__LaterClauses_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__Clauses_25, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_30;
            MR_Integer hlds__hlds_out__hlds_out_pred__Var_40;

            {
              mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__HeadVars_24, &hlds__hlds_out__hlds_out_pred__HeadTerms_30);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% clause ");
            }
            {
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_pred__ClauseNum_26);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            {
              hlds__hlds_out__hlds_out_pred__write_clause_14_p_0(hlds__hlds_out__hlds_out_pred__Info_15, hlds__hlds_out__hlds_out_pred__Lang_16, hlds__hlds_out__hlds_out_pred__ModuleInfo_17, hlds__hlds_out__hlds_out_pred__PredId_18, hlds__hlds_out__hlds_out_pred__PredOrFunc_19, hlds__hlds_out__hlds_out_pred__VarSet_20, hlds__hlds_out__hlds_out_pred__TypeQual_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_22, (MR_Integer) 0, hlds__hlds_out__hlds_out_pred__Indent_23, hlds__hlds_out__hlds_out_pred__HeadTerms_30, hlds__hlds_out__hlds_out_pred__FirstClause_28);
            }
            hlds__hlds_out__hlds_out_pred__Var_40 = (hlds__hlds_out__hlds_out_pred__ClauseNum_26 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_pred__next_value_of_Clauses_25 = hlds__hlds_out__hlds_out_pred__LaterClauses_29;
              MR_Integer hlds__hlds_out__hlds_out_pred__next_value_of_ClauseNum_26 = hlds__hlds_out__hlds_out_pred__Var_40;

              hlds__hlds_out__hlds_out_pred__ClauseNum_26 = hlds__hlds_out__hlds_out_pred__next_value_of_ClauseNum_26;
              hlds__hlds_out__hlds_out_pred__Clauses_25 = hlds__hlds_out__hlds_out_pred__next_value_of_Clauses_25;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_14_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
    MR_Integer hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2;

    {
      hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2 = hlds__hlds_pred__proc_id_to_int_1_f_0(((MR_Integer) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
    hlds__hlds_out__hlds_out_pred__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv0_HeadVar__2_2));
    return hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_14_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__Info_15,
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_16,
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_17,
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_18,
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_19,
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_20,
  MR_Word hlds__hlds_out__hlds_out_pred__TypeQual_21,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_22,
  MR_Word hlds__hlds_out__hlds_out_pred__WriteWhichModes_23,
  MR_Integer hlds__hlds_out__hlds_out_pred__Indent_24,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_25,
  MR_Word hlds__hlds_out__hlds_out_pred__Clause_26)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__ApplicableModes_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_26, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_pred__Goal_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_26, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_pred__ImplLang_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_26, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_pred__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_26, (MR_Integer) 3)));
    MR_Integer hlds__hlds_out__hlds_out_pred__Indent1_33 = (hlds__hlds_out__hlds_out_pred__Indent_24 + (MR_Integer) 1);
    MR_String hlds__hlds_out__hlds_out_pred__DumpOptions_34 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_38;
    MR_Word hlds__hlds_out__hlds_out_pred__AllProcIds_39;
    MR_Word hlds__hlds_out__hlds_out_pred___StateVarWarnings_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Clause_26, (MR_Integer) 4)));
    MR_String hlds__hlds_out__hlds_out_pred__Var_68 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_pred__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_pred__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 3)));
    MR_Word hlds__hlds_out__hlds_out_pred__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_15, (MR_Integer) 4)));
    MR_Word hlds__hlds_out__hlds_out_pred__SelectedProcIds_40;
    MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_76_76;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_59;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_60;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_61;
    MR_Word hlds__hlds_out__hlds_out_pred___GoalInfo_41;

    if ((hlds__hlds_out__hlds_out_pred__ApplicableModes_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_pred__Modes_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__ApplicableModes_28, (MR_Integer) 0)));

        {
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__DumpOptions_34, (MR_Char) 109);
        }
        if (hlds__hlds_out__hlds_out_pred__succeeded)
          {
            MR_Word hlds__hlds_out__hlds_out_pred__TypeCtorInfo_72_72;
            MR_Word hlds__hlds_out__hlds_out_pred__ModeInts_36;

            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_pred__Indent_24);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% Modes for which this clause applies: ");
            }
            hlds__hlds_out__hlds_out_pred__TypeCtorInfo_72_72 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            {
              hlds__hlds_out__hlds_out_pred__ModeInts_36 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_pred__TypeCtorInfo_72_72, hlds__hlds_out__hlds_out_pred__TypeCtorInfo_72_72, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[2], hlds__hlds_out__hlds_out_pred__Modes_35);
            }
            {
              hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(hlds__hlds_out__hlds_out_pred__ModeInts_36);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        else
          {
          }
      }
    if ((hlds__hlds_out__hlds_out_pred__ImplLang_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_pred__ForeignLang_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__ImplLang_30, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "% Language of implementation: ");
        }
        {
          mercury__io__write_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (hlds__hlds_out__hlds_out_pred__ForeignLang_37)));
        }
        {
          mercury__io__nl_2_p_0();
        }
      }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_17, hlds__hlds_out__hlds_out_pred__PredId_18, &hlds__hlds_out__hlds_out_pred__PredInfo_38);
    }
    {
      hlds__hlds_out__hlds_out_pred__AllProcIds_39 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__hlds_out__hlds_out_pred__PredInfo_38);
    }
    hlds__hlds_out__hlds_out_pred__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__ApplicableModes_28)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_out__hlds_out_pred__succeeded)
      {
        hlds__hlds_out__hlds_out_pred__SelectedProcIds_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__ApplicableModes_28, (MR_Integer) 0)));
        hlds__hlds_out__hlds_out_pred__TypeInfo_76_76 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[8];
        {
          hlds__hlds_out__hlds_out_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_76_76, ((MR_Box) (hlds__hlds_out__hlds_out_pred__SelectedProcIds_40)), ((MR_Box) (hlds__hlds_out__hlds_out_pred__AllProcIds_39)));
        }
        hlds__hlds_out__hlds_out_pred__succeeded = !(hlds__hlds_out__hlds_out_pred__succeeded);
      }
    if (hlds__hlds_out__hlds_out_pred__succeeded)
      {
        hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_17, hlds__hlds_out__hlds_out_pred__Lang_16, hlds__hlds_out__hlds_out_pred__VarSet_20, hlds__hlds_out__hlds_out_pred__VarNamePrint_22, hlds__hlds_out__hlds_out_pred__WriteWhichModes_23, hlds__hlds_out__hlds_out_pred__PredId_18, hlds__hlds_out__hlds_out_pred__PredOrFunc_19, hlds__hlds_out__hlds_out_pred__SelectedProcIds_40, hlds__hlds_out__hlds_out_pred__Context_31, hlds__hlds_out__hlds_out_pred__HeadTerms_25);
      }
    else
      {
        hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_17, hlds__hlds_out__hlds_out_pred__VarSet_20, hlds__hlds_out__hlds_out_pred__VarNamePrint_22, hlds__hlds_out__hlds_out_pred__PredId_18, hlds__hlds_out__hlds_out_pred__PredOrFunc_19, hlds__hlds_out__hlds_out_pred__HeadTerms_25);
      }
    hlds__hlds_out__hlds_out_pred__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Goal_29, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_pred___GoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Goal_29, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_pred__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_pred__Var_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Var_59, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (hlds__hlds_out__hlds_out_pred__succeeded)
      {
        hlds__hlds_out__hlds_out_pred__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Var_59, (MR_Integer) 1)));
        hlds__hlds_out__hlds_out_pred__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_pred__Var_59, (MR_Integer) 2)));
        hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__Var_60 == (MR_Integer) 0);
        if (hlds__hlds_out__hlds_out_pred__succeeded)
          hlds__hlds_out__hlds_out_pred__succeeded = (hlds__hlds_out__hlds_out_pred__Var_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (hlds__hlds_out__hlds_out_pred__succeeded)
      {
        {
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
      }
    else
      {
        {
          mercury__io__write_string_3_p_0((MR_String) " :-\n");
        }
        {
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_pred__Info_15, hlds__hlds_out__hlds_out_pred__ModuleInfo_17, hlds__hlds_out__hlds_out_pred__VarSet_20, hlds__hlds_out__hlds_out_pred__TypeQual_21, hlds__hlds_out__hlds_out_pred__VarNamePrint_22, hlds__hlds_out__hlds_out_pred__Indent1_33, (MR_String) ".\n", hlds__hlds_out__hlds_out_pred__Goal_29);
        }
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_9,
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_10,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_11,
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_12,
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_13,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_14)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_String hlds__hlds_out__hlds_out_pred__PredName_16;
    MR_Word hlds__hlds_out__hlds_out_pred__ModuleName_17;

    {
      hlds__hlds_out__hlds_out_pred__PredName_16 = hlds__hlds_module__predicate_name_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_9, hlds__hlds_out__hlds_out_pred__PredId_12);
    }
    {
      hlds__hlds_out__hlds_out_pred__ModuleName_17 = hlds__hlds_module__predicate_module_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_9, hlds__hlds_out__hlds_out_pred__PredId_12);
    }
    switch (hlds__hlds_out__hlds_out_pred__PredOrFunc_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_pred__FuncArgs_18;
          MR_Word hlds__hlds_out__hlds_out_pred__RetVal_19;
          MR_Word hlds__hlds_out__hlds_out_pred__Var_24;
          MR_Box hlds__hlds_out__hlds_out_pred__conv0_RetVal_19;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[6], hlds__hlds_out__hlds_out_pred__HeadTerms_14, &hlds__hlds_out__hlds_out_pred__FuncArgs_18, &hlds__hlds_out__hlds_out_pred__conv0_RetVal_19);
          }
          hlds__hlds_out__hlds_out_pred__RetVal_19 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_RetVal_19);
          {
            hlds__hlds_out__hlds_out_pred__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_16));
          }
          {
            hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(hlds__hlds_out__hlds_out_pred__VarSet_10, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__ModuleName_17, hlds__hlds_out__hlds_out_pred__Var_24, hlds__hlds_out__hlds_out_pred__FuncArgs_18);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
          {
            parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_10, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, (MR_Integer) 0, hlds__hlds_out__hlds_out_pred__RetVal_19);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_out__hlds_out_pred__Var_22;

          {
            hlds__hlds_out__hlds_out_pred__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_16));
          }
          {
            hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(hlds__hlds_out__hlds_out_pred__VarSet_10, hlds__hlds_out__hlds_out_pred__VarNamePrint_11, hlds__hlds_out__hlds_out_pred__ModuleName_17, hlds__hlds_out__hlds_out_pred__Var_22, hlds__hlds_out__hlds_out_pred__HeadTerms_14);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_1,
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_2,
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_3,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_4,
  MR_Word hlds__hlds_out__hlds_out_pred__WriteWhichModes_5,
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_6,
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_7,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadVar__8_8,
  MR_Word hlds__hlds_out__hlds_out_pred__Context_9,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_pred__succeeded;

        if ((hlds__hlds_out__hlds_out_pred__HeadVar__8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__8_8, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_pred__ProcIds_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_pred__HeadVar__8_8, (MR_Integer) 1)));

            {
              hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_1, hlds__hlds_out__hlds_out_pred__Lang_2, hlds__hlds_out__hlds_out_pred__VarSet_3, hlds__hlds_out__hlds_out_pred__VarNamePrint_4, hlds__hlds_out__hlds_out_pred__WriteWhichModes_5, hlds__hlds_out__hlds_out_pred__PredId_6, hlds__hlds_out__hlds_out_pred__PredOrFunc_7, hlds__hlds_out__hlds_out_pred__ProcId_32, hlds__hlds_out__hlds_out_pred__Context_9, hlds__hlds_out__hlds_out_pred__HeadTerms_10);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_pred__next_value_of_HeadVar__8_8 = hlds__hlds_out__hlds_out_pred__ProcIds_33;

              hlds__hlds_out__hlds_out_pred__HeadVar__8_8 = hlds__hlds_out__hlds_out_pred__next_value_of_HeadVar__8_8;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_pred__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
    MR_Box hlds__hlds_out__hlds_out_pred__closure = hlds__hlds_out__hlds_out_pred__closure_arg;
    MR_Word hlds__hlds_out__hlds_out_pred__conv1_AnnotatedTerm_9;

    {
      hlds__hlds_out__hlds_out_pred__conv1_AnnotatedTerm_9 = hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_pred__wrapper_arg_1));
    }
    hlds__hlds_out__hlds_out_pred__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_pred__conv1_AnnotatedTerm_9));
    return hlds__hlds_out__hlds_out_pred__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__ModuleInfo_13,
  MR_Word hlds__hlds_out__hlds_out_pred__Lang_14,
  MR_Word hlds__hlds_out__hlds_out_pred__VarSet_15,
  MR_Word hlds__hlds_out__hlds_out_pred__VarNamePrint_16,
  MR_Word hlds__hlds_out__hlds_out_pred__WriteWhichModes_17,
  MR_Word hlds__hlds_out__hlds_out_pred__PredId_18,
  MR_Word hlds__hlds_out__hlds_out_pred__PredOrFunc_19,
  MR_Integer hlds__hlds_out__hlds_out_pred__ProcId_20,
  MR_Word hlds__hlds_out__hlds_out_pred__Context_21,
  MR_Word hlds__hlds_out__hlds_out_pred__HeadTerms_22)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_Word hlds__hlds_out__hlds_out_pred__PredInfo_24;
    MR_Word hlds__hlds_out__hlds_out_pred__Procedures_25;
    MR_Word hlds__hlds_out__hlds_out_pred__ProcInfo_26;
    MR_Box hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_26;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_13, hlds__hlds_out__hlds_out_pred__PredId_18, &hlds__hlds_out__hlds_out_pred__PredInfo_24);
    }
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__hlds_out__hlds_out_pred__PredInfo_24, &hlds__hlds_out__hlds_out_pred__Procedures_25);
    }
    {
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__hlds_out__hlds_out_pred__Procedures_25, hlds__hlds_out__hlds_out_pred__ProcId_20, &hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_26);
    }
    if (hlds__hlds_out__hlds_out_pred__succeeded)
      {
        hlds__hlds_out__hlds_out_pred__ProcInfo_26 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv0_ProcInfo_26);
        hlds__hlds_out__hlds_out_pred__succeeded = MR_TRUE;
      }
    if (hlds__hlds_out__hlds_out_pred__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_pred__TypeInfo_36_36;
        MR_Word hlds__hlds_out__hlds_out_pred__ArgModes_27;
        MR_Word hlds__hlds_out__hlds_out_pred__AnnotatedPairs_28;
        MR_Word hlds__hlds_out__hlds_out_pred__AnnotatedHeadTerms_29;
        MR_Word hlds__hlds_out__hlds_out_pred__Var_32;
        MR_String hlds__hlds_out__hlds_out_pred__PredName_50;
        MR_Word hlds__hlds_out__hlds_out_pred__ModuleName_51;

        switch (hlds__hlds_out__hlds_out_pred__WriteWhichModes_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_26, &hlds__hlds_out__hlds_out_pred__ArgModes_27);
            }
            break;
          case (MR_Integer) 1:
            {
              hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(hlds__hlds_out__hlds_out_pred__ProcInfo_26, &hlds__hlds_out__hlds_out_pred__ArgModes_27);
            }
            break;
        }
        hlds__hlds_out__hlds_out_pred__TypeInfo_36_36 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[6];
        {
          mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__hlds_out__hlds_out_pred__TypeInfo_36_36, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_pred__HeadTerms_22, hlds__hlds_out__hlds_out_pred__ArgModes_27, &hlds__hlds_out__hlds_out_pred__AnnotatedPairs_28);
        }
        {
          hlds__hlds_out__hlds_out_pred__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Lang_14));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Context_21));
        }
        {
          hlds__hlds_out__hlds_out_pred__AnnotatedHeadTerms_29 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[1], hlds__hlds_out__hlds_out_pred__TypeInfo_36_36, hlds__hlds_out__hlds_out_pred__Var_32, hlds__hlds_out__hlds_out_pred__AnnotatedPairs_28);
        }
        {
          hlds__hlds_out__hlds_out_pred__PredName_50 = hlds__hlds_module__predicate_name_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_13, hlds__hlds_out__hlds_out_pred__PredId_18);
        }
        {
          hlds__hlds_out__hlds_out_pred__ModuleName_51 = hlds__hlds_module__predicate_module_2_f_0(hlds__hlds_out__hlds_out_pred__ModuleInfo_13, hlds__hlds_out__hlds_out_pred__PredId_18);
        }
        switch (hlds__hlds_out__hlds_out_pred__PredOrFunc_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_out__hlds_out_pred__FuncArgs_52;
              MR_Word hlds__hlds_out__hlds_out_pred__RetVal_53;
              MR_Word hlds__hlds_out__hlds_out_pred__Var_56;
              MR_Box hlds__hlds_out__hlds_out_pred__conv2_RetVal_53;

              {
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[6], hlds__hlds_out__hlds_out_pred__AnnotatedHeadTerms_29, &hlds__hlds_out__hlds_out_pred__FuncArgs_52, &hlds__hlds_out__hlds_out_pred__conv2_RetVal_53);
              }
              hlds__hlds_out__hlds_out_pred__RetVal_53 = ((MR_Word) hlds__hlds_out__hlds_out_pred__conv2_RetVal_53);
              {
                hlds__hlds_out__hlds_out_pred__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_56, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_50));
              }
              {
                hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(hlds__hlds_out__hlds_out_pred__VarSet_15, hlds__hlds_out__hlds_out_pred__VarNamePrint_16, hlds__hlds_out__hlds_out_pred__ModuleName_51, hlds__hlds_out__hlds_out_pred__Var_56, hlds__hlds_out__hlds_out_pred__FuncArgs_52);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
              {
                parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_pred__VarSet_15, hlds__hlds_out__hlds_out_pred__VarNamePrint_16, (MR_Integer) 0, hlds__hlds_out__hlds_out_pred__RetVal_53);
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_out__hlds_out_pred__Var_54;

              {
                hlds__hlds_out__hlds_out_pred__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Var_54, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__PredName_50));
              }
              {
                hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(hlds__hlds_out__hlds_out_pred__VarSet_15, hlds__hlds_out__hlds_out_pred__VarNamePrint_16, hlds__hlds_out__hlds_out_pred__ModuleName_51, hlds__hlds_out__hlds_out_pred__Var_54, hlds__hlds_out__hlds_out_pred__AnnotatedHeadTerms_29);
              }
            }
            break;
        }
      }
    else
      {
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(
  MR_Word hlds__hlds_out__hlds_out_pred__Info_3,
  MR_Word * hlds__hlds_out__hlds_out_pred__ClausesInfo_4)
{
  {
    MR_bool hlds__hlds_out__hlds_out_pred__succeeded;
    MR_String hlds__hlds_out__hlds_out_pred__OptionsStr_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 0)));
    MR_String hlds__hlds_out__hlds_out_pred__DumpStr_6;
    MR_String hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9;
    MR_String hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12;
    MR_String hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15;
    MR_String hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18;
    MR_String hlds__hlds_out__hlds_out_pred__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_pred__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_pred__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 3)));
    MR_Word hlds__hlds_out__hlds_out_pred__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 4)));
    MR_String hlds__hlds_out__hlds_out_pred__Var_28;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_29;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_30;
    MR_Word hlds__hlds_out__hlds_out_pred__Var_31;
    MR_String hlds__hlds_out__hlds_out_pred__Var_27;

    {
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 99);
    }
    if (hlds__hlds_out__hlds_out_pred__succeeded)
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9 = (MR_String) "c";
    else
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9 = (MR_String) "";
    {
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 110);
    }
    if (hlds__hlds_out__hlds_out_pred__succeeded)
      {
        {
          hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9, (MR_String) "n");
        }
      }
    else
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12 = hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_9_9;
    {
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 118);
    }
    if (hlds__hlds_out__hlds_out_pred__succeeded)
      {
        {
          hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12, (MR_String) "v");
        }
      }
    else
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15 = hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_12_12;
    {
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 103);
    }
    if (hlds__hlds_out__hlds_out_pred__succeeded)
      {
        {
          hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15, (MR_String) "g");
        }
      }
    else
      hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18 = hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_15_15;
    {
      hlds__hlds_out__hlds_out_pred__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_pred__OptionsStr_5, (MR_Char) 80);
    }
    if (hlds__hlds_out__hlds_out_pred__succeeded)
      {
        {
          hlds__hlds_out__hlds_out_pred__DumpStr_6 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18, (MR_String) "P");
        }
      }
    else
      hlds__hlds_out__hlds_out_pred__DumpStr_6 = hlds__hlds_out__hlds_out_pred__STATE_VARIABLE_DumpStr_18_18;
    hlds__hlds_out__hlds_out_pred__Var_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_pred__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_pred__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 2)));
    hlds__hlds_out__hlds_out_pred__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 3)));
    hlds__hlds_out__hlds_out_pred__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_pred__Info_3, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_out__hlds_out_pred__ClausesInfo_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__DumpStr_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__Var_31));
    }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_out__hlds_out_pred__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.hlds_out.hlds_out_pred. */
