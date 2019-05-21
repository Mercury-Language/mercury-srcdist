/*
** Automatically generated from `hlds_out_pred.m'
** by the Mercury compiler,
** version rotd-2017-09-13
** configured for x86_64-pc-linux-gnu.
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


// :- module hlds.hlds_out.hlds_out_pred.
// :- implementation.

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

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__1036__1_5_p_0(
  MR_Word VarNamePrint_15,
  MR_Word VarSet_23,
  MR_Word HeadVar__3_262);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Integer Indent_10,
  MR_Word ConstraintId_11,
  MR_Word ProgConstraint_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_p_0(
  MR_Word TVarSet_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_p_0(
  MR_Word TVarSet_5,
  MR_Word ArgInfo_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_p_0(
  MR_Word CoveragePointInfo_6,
  MR_Integer STATE_VARIABLE_SlotNum_0_11,
  MR_Integer * STATE_VARIABLE_SlotNum_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_p_0(
  MR_Word CallSiteStaticData_6,
  MR_Integer STATE_VARIABLE_SlotNum_0_14,
  MR_Integer * STATE_VARIABLE_SlotNum_15);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Integer Indent_10,
  MR_Word OldVar_11,
  MR_Word NewVars_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(
  MR_Word VarSet_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word RttiVarMaps_12,
  MR_Integer Indent_13,
  MR_Word Var_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(
  MR_Word VarSet_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word RttiVarMaps_12,
  MR_Integer Indent_13,
  MR_Word Constraint_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(
  MR_Word VarSet_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word RttiVarMaps_12,
  MR_Integer Indent_13,
  MR_Word TVar_14);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0(
  MR_Word Markers_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Integer Indent_9,
  MR_Word ConstraintMap_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(
  MR_Word Info_1,
  MR_Word ModuleInfo_2,
  MR_Word PredId_3,
  MR_Word PredStatus_4,
  MR_Word VarNamePrint_5,
  MR_Word ProcTable_6,
  MR_Integer Indent_7,
  MR_Word HeadVar__8_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_p_0(
  MR_Word TVarSet_5,
  MR_Word ProcTableIOInfo_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0(
  MR_Word ProcStatic_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Integer Indent_9,
  MR_Word UntupleInfo_10);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Integer Indent_9,
  MR_Word StackSlots_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(
  MR_Word VarSet_6,
  MR_Word Head_7,
  MR_Word Tail_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(
  MR_Word VarSet_8,
  MR_Word TVarSet_9,
  MR_Word VarNamePrint_10,
  MR_Integer Indent_11,
  MR_Word RttiVarMaps_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(
  MR_Word VarSet_8,
  MR_Word TVarSet_9,
  MR_Word VarNamePrint_10,
  MR_Integer Indent_11,
  MR_Word VarTypes_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(
  MR_Word VarSet_1,
  MR_Word TypeVarSet_2,
  MR_Word VarNamePrint_3,
  MR_Word VarTypes_4,
  MR_Integer Indent_5,
  MR_Word HeadVar__6_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(
  MR_Word Info_14,
  MR_Word Lang_15,
  MR_Word ModuleInfo_16,
  MR_Word PredId_17,
  MR_Word PredOrFunc_18,
  MR_Word VarSet_19,
  MR_Word TypeQual_20,
  MR_Word VarNamePrint_21,
  MR_Integer Indent_22,
  MR_Word HeadVars_23,
  MR_Word Clauses_24);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(
  MR_Word Info_15,
  MR_Word Lang_16,
  MR_Word ModuleInfo_17,
  MR_Word PredId_18,
  MR_Word PredOrFunc_19,
  MR_Word VarSet_20,
  MR_Word TypeQual_21,
  MR_Word VarNamePrint_22,
  MR_Integer Indent_23,
  MR_Word HeadVars_24,
  MR_Word Clauses_25,
  MR_Integer ClauseNum_26);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word VarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word PredId_12,
  MR_Word PredOrFunc_13,
  MR_Word HeadTerms_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Lang_2,
  MR_Word VarSet_3,
  MR_Word VarNamePrint_4,
  MR_Word WriteWhichModes_5,
  MR_Word PredId_6,
  MR_Word PredOrFunc_7,
  MR_Word HeadVar__8_8,
  MR_Word Context_9,
  MR_Word HeadTerms_10);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Lang_14,
  MR_Word VarSet_15,
  MR_Word VarNamePrint_16,
  MR_Word WriteWhichModes_17,
  MR_Word PredId_18,
  MR_Word PredOrFunc_19,
  MR_Integer ProcId_20,
  MR_Word Context_21,
  MR_Word HeadTerms_22);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(
  MR_Word Info_3,
  MR_Word * ClausesInfo_4);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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

static /* final */ const struct hlds__hlds_out__hlds_out_pred__vector_common_type_10_0_s hlds__hlds_out__hlds_out_pred_vector_common_10[52];



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
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
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


static /* final */ const struct hlds__hlds_out__hlds_out_pred__vector_common_type_10_0_s hlds__hlds_out__hlds_out_pred_vector_common_10[52] = {
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
  /* row 16 */   {     (MR_String) "int" },
  /* row 17 */   {     (MR_String) "uint" },
  /* row 18 */   {     (MR_String) "int8" },
  /* row 19 */   {     (MR_String) "uint8" },
  /* row 20 */   {     (MR_String) "int16" },
  /* row 21 */   {     (MR_String) "uint16" },
  /* row 22 */   {     (MR_String) "int32" },
  /* row 23 */   {     (MR_String) "uint32" },
  /* row 24 */   {     (MR_String) "stub" },
  /* row 25 */   {     (MR_String) "builtin_stub" },
  /* row 26 */   {     (MR_String) "infer_type" },
  /* row 27 */   {     (MR_String) "infer_modes" },
  /* row 28 */   {     (MR_String) "no_pred_decl" },
  /* row 29 */   {     (MR_String) "obsolete" },
  /* row 30 */   {     (MR_String) "no_determinism_warning" },
  /* row 31 */   {     (MR_String) "inline" },
  /* row 32 */   {     (MR_String) "no_inline" },
  /* row 33 */   {     (MR_String) "heuristic_inline" },
  /* row 34 */   {     (MR_String) "consider_used" },
  /* row 35 */   {     (MR_String) "class_method" },
  /* row 36 */   {     (MR_String) "class_instance_method" },
  /* row 37 */   {     (MR_String) "named_class_instance_method" },
  /* row 38 */   {     (MR_String) "impure" },
  /* row 39 */   {     (MR_String) "semipure" },
  /* row 40 */   {     (MR_String) "promise_pure" },
  /* row 41 */   {     (MR_String) "promise_semipure" },
  /* row 42 */   {     (MR_String) "promise_equivalent_clauses" },
  /* row 43 */   {     (MR_String) "terminates" },
  /* row 44 */   {     (MR_String) "does_not_terminate" },
  /* row 45 */   {     (MR_String) "check_termination" },
  /* row 46 */   {     (MR_String) "calls_are_fully_qualified" },
  /* row 47 */   {     (MR_String) "mode_check_clauses" },
  /* row 48 */   {     (MR_String) "mutable_access_pred" },
  /* row 49 */   {     (MR_String) "has_require_scope" },
  /* row 50 */   {     (MR_String) "has_incomplete_switch" },
  /* row 51 */   {     (MR_String) "has_format_call" },
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
  MR_TYPECTOR_REP_ENUM,
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

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__1036__1_5_p_0(
  MR_Word VarNamePrint_15,
  MR_Word VarSet_23,
  MR_Word HeadVar__3_262)
{
  {
    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_23, VarNamePrint_15, HeadVar__3_262);
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Integer Indent_10,
  MR_Word ConstraintId_11,
  MR_Word ProgConstraint_12)
{
  {
    MR_Word ConstraintType_28;
    MR_Word GoalId_29;
    MR_Integer N_30;
    MR_Integer GoalIdNum_31;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_10);
    mercury__io__write_string_3_p_0((MR_String) "% ");
    ConstraintType_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstraintId_11, (MR_Integer) 0)));
    GoalId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstraintId_11, (MR_Integer) 1)));
    N_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConstraintId_11, (MR_Integer) 2)));
    switch (ConstraintType_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "(E, ");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "(A, ");
        }
        break;
    }
    GoalIdNum_31 = (MR_Integer) GoalId_29;
    mercury__io__write_int_3_p_0(GoalIdNum_31);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_int_3_p_0(N_30);
    mercury__io__write_char_3_p_0((MR_Char) 41);
    mercury__io__write_string_3_p_0((MR_String) ": ");
    parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(VarSet_8, VarNamePrint_9, ProgConstraint_12);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_p_0(
  MR_Word TVarSet_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word TVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Locn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_String Var_15;

    mercury__io__write_string_3_p_0((MR_String) "% typeinfo for ");
    Var_15 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet_5, (MR_Integer) 1, TVar_6);
    mercury__io__write_string_3_p_0(Var_15);
    mercury__io__write_string_3_p_0((MR_String) " -> ");
    if (((MR_tag((MR_Word) Locn_7)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Locn_7, (MR_Integer) 0)));
      MR_String Var_58;

      mercury__io__write_string_3_p_0((MR_String) "direct in register ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0], N_9, &Var_58);
      mercury__io__write_string_3_p_0(Var_58);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    else
    {
      MR_Integer O_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Locn_7, (MR_Integer) 1)));
      MR_Integer N_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Locn_7, (MR_Integer) 0)));
      MR_String Var_37;
      MR_Word Var_43;
      MR_String Var_47;

      mercury__io__write_string_3_p_0((MR_String) "indirect from register ");
      Var_43 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0];
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_43, N_32, &Var_37);
      mercury__io__write_string_3_p_0(Var_37);
      mercury__io__write_string_3_p_0((MR_String) ", offset ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_43, O_10, &Var_47);
      mercury__io__write_string_3_p_0(Var_47);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_p_0(
  MR_Word TVarSet_5,
  MR_Word ArgInfo_6)
{
  {
    MR_Integer HeadVarNum_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ArgInfo_6, (MR_Integer) 0)));
    MR_String HeadVarName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ArgInfo_6, (MR_Integer) 1)));
    MR_Integer SlotNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ArgInfo_6, (MR_Integer) 2)));
    MR_Word Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_6, (MR_Integer) 3)));
    MR_String Var_25;

    mercury__io__write_string_3_p_0((MR_String) "% ");
    mercury__io__write_string_3_p_0(HeadVarName_9);
    mercury__io__write_string_3_p_0((MR_String) "/");
    mercury__io__write_int_3_p_0(HeadVarNum_8);
    mercury__io__write_string_3_p_0((MR_String) " in slot ");
    mercury__io__write_int_3_p_0(SlotNum_10);
    mercury__io__write_string_3_p_0((MR_String) ", type ");
    Var_25 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_5, (MR_Integer) 1, Type_11);
    mercury__io__write_string_3_p_0(Var_25);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_p_0(
  MR_Word CoveragePointInfo_6,
  MR_Integer STATE_VARIABLE_SlotNum_0_11,
  MR_Integer * STATE_VARIABLE_SlotNum_12)
{
  {
    MR_Word RevGoalPath_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), CoveragePointInfo_6, (MR_Integer) 0)));
    MR_Word PointType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), CoveragePointInfo_6, (MR_Integer) 1)));
    MR_String Var_21;
    MR_String Var_24;
    MR_String Var_31;

    Var_21 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(RevGoalPath_9);
    switch (PointType_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case ((int) MR_cp_type_branch_arm):
        Var_24 = (MR_String) "branch arm";
        break;
      case ((int) MR_cp_type_coverage_after):
        Var_24 = (MR_String) "after";
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "% coverage point slot ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0], STATE_VARIABLE_SlotNum_0_11, &Var_31);
    mercury__io__write_string_3_p_0(Var_31);
    mercury__io__write_string_3_p_0((MR_String) ": goal path <");
    mercury__io__write_string_3_p_0(Var_21);
    mercury__io__write_string_3_p_0((MR_String) ">, type ");
    mercury__io__write_string_3_p_0(Var_24);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    *STATE_VARIABLE_SlotNum_12 = (STATE_VARIABLE_SlotNum_0_11 + (MR_Integer) 1);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_p_0(
  MR_Word CallSiteStaticData_6,
  MR_Integer STATE_VARIABLE_SlotNum_0_14,
  MR_Integer * STATE_VARIABLE_SlotNum_15)
{
  {
    MR_String Var_108;
    MR_Word Var_114;

    mercury__io__write_string_3_p_0((MR_String) "% call site static slot ");
    Var_114 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0];
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_114, STATE_VARIABLE_SlotNum_0_14, &Var_108);
    mercury__io__write_string_3_p_0(Var_108);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    switch (MR_tag((MR_Word) CallSiteStaticData_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CalleeRttiProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallSiteStaticData_6, (MR_Integer) 0)));
          MR_String TypeSubst_10 = ((MR_String) (MR_hl_field(MR_mktag(0), CallSiteStaticData_6, (MR_Integer) 1)));
          MR_String FileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), CallSiteStaticData_6, (MR_Integer) 2)));
          MR_Integer LineNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CallSiteStaticData_6, (MR_Integer) 3)));
          MR_Word GoalPath_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallSiteStaticData_6, (MR_Integer) 4)));
          MR_String Var_51;
          MR_String Var_146;

          mercury__io__write_string_3_p_0((MR_String) "% normal call to ");
          mercury__io__write_3_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, ((MR_Box) (CalleeRttiProcLabel_9)));
          mercury__io__nl_2_p_0();
          Var_51 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_13);
          mercury__io__write_string_3_p_0((MR_String) "% type subst <");
          mercury__io__write_string_3_p_0(TypeSubst_10);
          mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
          mercury__io__write_string_3_p_0(Var_51);
          mercury__io__write_string_3_p_0((MR_String) ">\n");
          mercury__io__write_string_3_p_0((MR_String) "% filename <");
          mercury__io__write_string_3_p_0(FileName_11);
          mercury__io__write_string_3_p_0((MR_String) ">, line number <");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_114, LineNumber_12, &Var_146);
          mercury__io__write_string_3_p_0(Var_146);
          mercury__io__write_string_3_p_0((MR_String) ">\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_100;
          MR_String FileName_102 = ((MR_String) (MR_hl_field(MR_mktag(1), CallSiteStaticData_6, (MR_Integer) 0)));
          MR_Integer LineNumber_103 = ((MR_Integer) (MR_hl_field(MR_mktag(1), CallSiteStaticData_6, (MR_Integer) 1)));
          MR_Word GoalPath_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), CallSiteStaticData_6, (MR_Integer) 2)));
          MR_String Var_122;

          mercury__io__write_string_3_p_0((MR_String) "% special call\n");
          Var_100 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_104);
          mercury__io__write_string_3_p_0((MR_String) "% filename <");
          mercury__io__write_string_3_p_0(FileName_102);
          mercury__io__write_string_3_p_0((MR_String) ">, line number <");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_114, LineNumber_103, &Var_122);
          mercury__io__write_string_3_p_0(Var_122);
          mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
          mercury__io__write_string_3_p_0(Var_100);
          mercury__io__write_string_3_p_0((MR_String) ">\n");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_74;
          MR_String FileName_76 = ((MR_String) (MR_hl_field(MR_mktag(2), CallSiteStaticData_6, (MR_Integer) 0)));
          MR_Integer LineNumber_77 = ((MR_Integer) (MR_hl_field(MR_mktag(2), CallSiteStaticData_6, (MR_Integer) 1)));
          MR_Word GoalPath_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), CallSiteStaticData_6, (MR_Integer) 2)));
          MR_String Var_177;

          mercury__io__write_string_3_p_0((MR_String) "% higher order call\n");
          Var_74 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_78);
          mercury__io__write_string_3_p_0((MR_String) "% filename <");
          mercury__io__write_string_3_p_0(FileName_76);
          mercury__io__write_string_3_p_0((MR_String) ">, line number <");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_114, LineNumber_77, &Var_177);
          mercury__io__write_string_3_p_0(Var_177);
          mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
          mercury__io__write_string_3_p_0(Var_74);
          mercury__io__write_string_3_p_0((MR_String) ">\n");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CallSiteStaticData_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_87;
              MR_String FileName_89 = ((MR_String) (MR_hl_field(MR_mktag(3), CallSiteStaticData_6, (MR_Integer) 1)));
              MR_Integer LineNumber_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), CallSiteStaticData_6, (MR_Integer) 2)));
              MR_Word GoalPath_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), CallSiteStaticData_6, (MR_Integer) 3)));
              MR_String Var_160;

              mercury__io__write_string_3_p_0((MR_String) "% method call\n");
              Var_87 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_91);
              mercury__io__write_string_3_p_0((MR_String) "% filename <");
              mercury__io__write_string_3_p_0(FileName_89);
              mercury__io__write_string_3_p_0((MR_String) ">, line number <");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_114, LineNumber_90, &Var_160);
              mercury__io__write_string_3_p_0(Var_160);
              mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
              mercury__io__write_string_3_p_0(Var_87);
              mercury__io__write_string_3_p_0((MR_String) ">\n");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_39;
              MR_String FileName_62 = ((MR_String) (MR_hl_field(MR_mktag(3), CallSiteStaticData_6, (MR_Integer) 1)));
              MR_Integer LineNumber_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), CallSiteStaticData_6, (MR_Integer) 2)));
              MR_Word GoalPath_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), CallSiteStaticData_6, (MR_Integer) 3)));
              MR_String Var_194;

              mercury__io__write_string_3_p_0((MR_String) "% callback\n");
              Var_39 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_64);
              mercury__io__write_string_3_p_0((MR_String) "% filename <");
              mercury__io__write_string_3_p_0(FileName_62);
              mercury__io__write_string_3_p_0((MR_String) ">, line number <");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_114, LineNumber_63, &Var_194);
              mercury__io__write_string_3_p_0(Var_194);
              mercury__io__write_string_3_p_0((MR_String) ">, goal path <");
              mercury__io__write_string_3_p_0(Var_39);
              mercury__io__write_string_3_p_0((MR_String) ">\n");
            }
            break;
        }
        break;
    }
    *STATE_VARIABLE_SlotNum_15 = (STATE_VARIABLE_SlotNum_0_14 + (MR_Integer) 1);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Integer Indent_10,
  MR_Word OldVar_11,
  MR_Word NewVars_12)
{
  {
    MR_Word TypeCtorInfo_24_24;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_10);
    mercury__io__write_string_3_p_0((MR_String) "%\t");
    TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(TypeCtorInfo_24_24, VarSet_8, VarNamePrint_9, OldVar_11);
    mercury__io__write_string_3_p_0((MR_String) "\t-> ");
    parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(TypeCtorInfo_24_24, VarSet_8, VarNamePrint_9, NewVars_12);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(
  MR_Word VarSet_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word RttiVarMaps_12,
  MR_Integer Indent_13,
  MR_Word Var_14)
{
  {
    MR_Word TypeCtorInfo_43_43;
    MR_Integer VarNum_16;
    MR_Word VarInfo_17;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_13);
    mercury__io__write_string_3_p_0((MR_String) "% ");
    TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(TypeCtorInfo_43_43, VarSet_9, VarNamePrint_11, Var_14);
    mercury__io__write_string_3_p_0((MR_String) " (number ");
    mercury__term__var_to_int_2_p_0(TypeCtorInfo_43_43, Var_14, &VarNum_16);
    mercury__io__write_int_3_p_0(VarNum_16);
    mercury__io__write_string_3_p_0((MR_String) ") ");
    mercury__io__write_string_3_p_0((MR_String) " -> ");
    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(RttiVarMaps_12, Var_14, &VarInfo_17);
    switch (MR_tag((MR_Word) VarInfo_17)) {
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
          MR_Word Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarInfo_17, (MR_Integer) 0)));

          mercury__io__write_string_3_p_0((MR_String) "type_info for ");
          parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TVarSet_10, VarNamePrint_11, Type_18);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Constraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), VarInfo_17, (MR_Integer) 0)));

          mercury__io__write_string_3_p_0((MR_String) "typeclass_info for ");
          parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(TVarSet_10, VarNamePrint_11, Constraint_19);
        }
        break;
    }
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(
  MR_Word VarSet_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word RttiVarMaps_12,
  MR_Integer Indent_13,
  MR_Word Constraint_14)
{
  {
    MR_Word Var_16;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_13);
    mercury__io__write_string_3_p_0((MR_String) "% ");
    parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(TVarSet_10, VarNamePrint_11, Constraint_14);
    mercury__io__write_string_3_p_0((MR_String) " -> ");
    hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(RttiVarMaps_12, Constraint_14, &Var_16);
    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_9, VarNamePrint_11, Var_16);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(
  MR_Word VarSet_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word RttiVarMaps_12,
  MR_Integer Indent_13,
  MR_Word TVar_14)
{
  {
    MR_Word TypeCtorInfo_54_54;
    MR_Integer TVarNum_16;
    MR_Word Locn_17;
    MR_Word Var_18;
    MR_Integer VarNum_20;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_13);
    mercury__io__write_string_3_p_0((MR_String) "% ");
    TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(TypeCtorInfo_54_54, TVarSet_10, VarNamePrint_11, TVar_14);
    mercury__io__write_string_3_p_0((MR_String) " (number ");
    mercury__term__var_to_int_2_p_0(TypeCtorInfo_54_54, TVar_14, &TVarNum_16);
    mercury__io__write_int_3_p_0(TVarNum_16);
    mercury__io__write_string_3_p_0((MR_String) ")");
    mercury__io__write_string_3_p_0((MR_String) " -> ");
    hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_12, TVar_14, &Locn_17);
    if (((MR_tag((MR_Word) Locn_17)) == (MR_mktag((MR_Integer) 0))))
    {
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Locn_17, (MR_Integer) 0)));
      mercury__io__write_string_3_p_0((MR_String) "type_info(");
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_9, VarNamePrint_11, Var_18);
      mercury__io__write_string_3_p_0((MR_String) ") ");
    }
    else
    {
      MR_Integer Index_19;

      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Locn_17, (MR_Integer) 0)));
      Index_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Locn_17, (MR_Integer) 1)));
      mercury__io__write_string_3_p_0((MR_String) "typeclass_info(");
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_9, VarNamePrint_11, Var_18);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      mercury__io__write_int_3_p_0(Index_19);
      mercury__io__write_string_3_p_0((MR_String) ") ");
    }
    mercury__io__write_string_3_p_0((MR_String) " (number ");
    mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_18, &VarNum_20);
    mercury__io__write_int_3_p_0(VarNum_20);
    mercury__io__write_string_3_p_0((MR_String) ")");
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word AnnotatedTerm_9;
    MR_Word HeadTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word Var_11;
    MR_Word Var_13;
    MR_Word Var_14;

    Var_14 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(Lang_5, Context_6, Mode_8);
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (HeadTerm_7));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_13));
    }
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[1], Var_11, Context_6, &AnnotatedTerm_9);
    return AnnotatedTerm_9;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_3_p_0(
  MR_Word Marker_4)
{
  {
    MR_String Name_6;

    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_4, &Name_6);
    mercury__io__write_string_3_p_0(Name_6);
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  {
    *HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_pred_vector_common_10[24 + HeadVar__1_1]))->hlds__hlds_out__hlds_out_pred__vector_common_type_10_0__vct_10_f_0;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_p_0(
  MR_Word TVarSet_5,
  MR_Word StepDesc_6)
{
  {
    MR_String VarName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), StepDesc_6, (MR_Integer) 0)));
    MR_Word TrieStep_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), StepDesc_6, (MR_Integer) 1)));
    MR_String Var_17;

    mercury__io__write_string_3_p_0((MR_String) " ");
    mercury__io__write_string_3_p_0(VarName_8);
    mercury__io__write_string_3_p_0((MR_String) ":");
    switch (MR_tag((MR_Word) TrieStep_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(TrieStep_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_17 = (MR_String) "dummy";
            break;
          case (MR_Integer) 1:
            Var_17 = (MR_String) "char";
            break;
          case (MR_Integer) 2:
            Var_17 = (MR_String) "string";
            break;
          case (MR_Integer) 3:
            Var_17 = (MR_String) "float";
            break;
          case (MR_Integer) 4:
            Var_17 = (MR_String) "foreign_enum";
            break;
          case (MR_Integer) 5:
            Var_17 = (MR_String) "typeinfo";
            break;
          case (MR_Integer) 6:
            Var_17 = (MR_String) "typeclassinfo";
            break;
          case (MR_Integer) 7:
            Var_17 = (MR_String) "promise_implied";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), TrieStep_9, (MR_Integer) 0)));

          Var_17 = ((&hlds__hlds_out__hlds_out_pred_vector_common_10[16 + Var_51]))->hlds__hlds_out__hlds_out_pred__vector_common_type_10_0__vct_10_f_0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer N_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), TrieStep_9, (MR_Integer) 0)));
          MR_String Var_40;
          MR_String Var_41;

          Var_41 = mercury__string__int_to_string_1_f_0(N_22);
          Var_40 = mercury__string__f_43_43_2_f_0(Var_41, (MR_String) ")");
          Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "enum(", Var_40);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), TrieStep_9, (MR_Integer) 0)));
          MR_Word IsPoly_24 = ((((MR_Word) (MR_hl_field(MR_mktag(3), TrieStep_9, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word IsAddr_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), TrieStep_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_String IsPolyStr_26;
          MR_String IsAddrStr_27;
          MR_String Var_29;
          MR_String Var_30;
          MR_String Var_32;
          MR_String Var_34;
          MR_String Var_35;
          MR_String Var_37;

          switch (IsPoly_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              IsPolyStr_26 = (MR_String) "mono";
              break;
            case (MR_Integer) 1:
              IsPolyStr_26 = (MR_String) "poly";
              break;
          }
          switch (IsAddr_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              IsAddrStr_27 = (MR_String) "addr";
              break;
            case (MR_Integer) 0:
              IsAddrStr_27 = (MR_String) "value";
              break;
          }
          Var_30 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_5, (MR_Integer) 1, Type_23);
          Var_37 = mercury__string__f_43_43_2_f_0(IsAddrStr_27, (MR_String) ")");
          Var_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_37);
          Var_34 = mercury__string__f_43_43_2_f_0(IsPolyStr_26, Var_35);
          Var_32 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_34);
          Var_29 = mercury__string__f_43_43_2_f_0(Var_30, Var_32);
          Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "general(", Var_29);
        }
        break;
    }
    mercury__io__write_string_3_p_0(Var_17);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(
  MR_Word Info_9,
  MR_Word Lang_10,
  MR_Word ModuleInfo_11,
  MR_Integer Indent_12,
  MR_Word PredId_13,
  MR_Word PredInfo_14)
{
  {
    MR_bool succeeded;
    MR_Word Module_16;
    MR_String PredName_17;
    MR_Word PredOrFunc_18;
    MR_Word ArgTypes_19;
    MR_Word ExistQVars_20;
    MR_Word TVarSet_21;
    MR_Word ClausesInfo_22;
    MR_Word PredStatus_23;
    MR_Word Markers_24;
    MR_Word ClassContext_25;
    MR_Word ProofMap_26;
    MR_Word ConstraintMap_27;
    MR_Word Purity_28;
    MR_Word ExternalTypeParams_29;
    MR_Word VarNameRemap_30;
    MR_String DumpOptions_31;
    MR_Word VarNamePrint_32;
    MR_Word VarSet_35;
    MR_Word VarTypes_38;
    MR_Word HeadVars_39;
    MR_Word ClausesRep_40;
    MR_Word RttiVarMaps_42;
    MR_Word ProcTable_97;
    MR_Word ProcIds_98;
    MR_String Var_224;
    MR_Word Var_225;
    MR_Word Var_226;
    MR_Word Var_227;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word _ItemNumbers_41;
    MR_Word _HaveForeignClauses_43;
    MR_Word _HadSyntaxErrors_44;

    Module_16 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_14);
    PredName_17 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_14);
    PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_14);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_14, &ArgTypes_19);
    hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_14, &ExistQVars_20);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_14, &TVarSet_21);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_14, &ClausesInfo_22);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_14, &PredStatus_23);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_14, &Markers_24);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_14, &ClassContext_25);
    hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(PredInfo_14, &ProofMap_26);
    hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(PredInfo_14, &ConstraintMap_27);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_14, &Purity_28);
    hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(PredInfo_14, &ExternalTypeParams_29);
    hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo_14, &VarNameRemap_30);
    DumpOptions_31 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0)));
    Var_224 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)));
    Var_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 2)));
    Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 3)));
    Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 4)));
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_31, (MR_Char) 118);
    if (succeeded)
      VarNamePrint_32 = (MR_Integer) 1;
    else
      VarNamePrint_32 = (MR_Integer) 0;
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_31, (MR_Char) 67);
    if (succeeded)
      switch (PredOrFunc_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word FuncArgTypes_33;
            MR_Word FuncRetType_34;
            MR_Word Var_103;
            MR_Box conv0_FuncRetType_34;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ArgTypes_19, &FuncArgTypes_33, &conv0_FuncRetType_34);
            FuncRetType_34 = ((MR_Word) conv0_FuncRetType_34);
            {
              Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Module_16));
              MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (PredName_17));
            }
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_type_11_p_0(TVarSet_21, VarNamePrint_32, ExistQVars_20, Var_103, FuncArgTypes_33, FuncRetType_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Purity_28, ClassContext_25);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_106;

            {
              Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Module_16));
              MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (PredName_17));
            }
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_type_10_p_0(TVarSet_21, VarNamePrint_32, ExistQVars_20, Var_106, ArgTypes_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Purity_28, ClassContext_25);
          }
          break;
      }
    else
    {
    }
    VarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_22, (MR_Integer) 0)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_22, (MR_Integer) 1)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_22, (MR_Integer) 2)));
    VarTypes_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_22, (MR_Integer) 3)));
    HeadVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_22, (MR_Integer) 4)));
    ClausesRep_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_22, (MR_Integer) 5)));
    _ItemNumbers_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_22, (MR_Integer) 6)));
    RttiVarMaps_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_22, (MR_Integer) 7)));
    _HaveForeignClauses_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_22, (MR_Integer) 8)));
    _HadSyntaxErrors_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_22, (MR_Integer) 9)));
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_31, (MR_Char) 67);
    if (succeeded)
    {
      MR_Integer PredInt_45;
      MR_Word GoalType_46;
      MR_Word MarkerList_47;
      MR_Word VarNameRemapList_52;
      MR_Word Clauses_55;
      MR_Word Origin_59;
      MR_String Var_119;

      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_12);
      mercury__io__write_string_3_p_0((MR_String) "% pred id: ");
      hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_13, &PredInt_45);
      mercury__io__write_int_3_p_0(PredInt_45);
      mercury__io__write_string_3_p_0((MR_String) ", category: ");
      parse_tree__prog_out__write_pred_or_func_3_p_0(PredOrFunc_18);
      mercury__io__write_string_3_p_0((MR_String) ", status: ");
      Var_119 = hlds__hlds_out__hlds_out_util__pred_import_status_to_string_1_f_0(PredStatus_23);
      mercury__io__write_string_3_p_0(Var_119);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      mercury__io__write_string_3_p_0((MR_String) "% goal_type: ");
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_14, &GoalType_46);
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_goal_type_0, ((MR_Box) (GoalType_46)));
      mercury__io__write_string_3_p_0((MR_String) "\n");
      hlds__hlds_pred__markers_to_marker_list_2_p_0(Markers_24, &MarkerList_47);
      if (!((MarkerList_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        mercury__io__write_string_3_p_0((MR_String) "% markers: ");
        hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0(MarkerList_47);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(VarSet_35, TVarSet_21, VarNamePrint_32, Indent_12, RttiVarMaps_42);
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ProofMap_26);
      if (!(succeeded))
      {
        hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0(TVarSet_21, VarNamePrint_32, Indent_12, ProofMap_26);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ConstraintMap_27);
      if (!(succeeded))
        hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(TVarSet_21, VarNamePrint_32, Indent_12, ConstraintMap_27);
      if (!((ExternalTypeParams_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        mercury__io__write_string_3_p_0((MR_String) "% external_type_params:\n");
        mercury__io__write_string_3_p_0((MR_String) "% ");
        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet_21, VarNamePrint_32, ExternalTypeParams_29);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(VarSet_35, TVarSet_21, VarNamePrint_32, Indent_12, VarTypes_38);
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, VarNameRemap_30, &VarNameRemapList_52);
      if (!((VarNameRemapList_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word VarNameRemapHead_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarNameRemapList_52, (MR_Integer) 0)));
        MR_Word VarNameRemapTail_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarNameRemapList_52, (MR_Integer) 1)));

        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_12);
        mercury__io__write_string_3_p_0((MR_String) "% var name remap: ");
        hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(VarSet_35, VarNameRemapHead_53, VarNameRemapTail_54);
        mercury__io__nl_2_p_0();
      }
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_40, &Clauses_55);
      if (!((Clauses_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word InfoForClauses_58;

        hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(Info_9, &InfoForClauses_58);
        hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(InfoForClauses_58, Lang_10, ModuleInfo_11, PredId_13, PredOrFunc_18, VarSet_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), VarNamePrint_32, Indent_12, HeadVars_39, Clauses_55);
      }
      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_14, &Origin_59);
      switch (MR_tag((MR_Word) Origin_59)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "% special pred\n");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorInfo_240_240;
            MR_Word MethodConstraints_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), Origin_59, (MR_Integer) 1)));
            MR_Word ClassId_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), MethodConstraints_61, (MR_Integer) 0)));
            MR_Word InstanceTypes_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), MethodConstraints_61, (MR_Integer) 1)));
            MR_Word InstanceConstraints_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), MethodConstraints_61, (MR_Integer) 2)));
            MR_Word ClassMethodConstraints_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), MethodConstraints_61, (MR_Integer) 3)));
            MR_Word ClassName_66;
            MR_Word MethodUnivConstraints_68;
            MR_Word MethodExistConstraints_69;
            MR_Word Var_200;
            MR_Word Var_206;
            MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), Origin_59, (MR_Integer) 0)));
            MR_Integer Var_67;

            mercury__io__write_string_3_p_0((MR_String) "% instance method constraints:\n");
            ClassName_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_62, (MR_Integer) 0)));
            Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_62, (MR_Integer) 1)));
            {
              Var_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_200, 0) = ((MR_Box) (ClassName_66));
              MR_hl_field(MR_mktag(0), Var_200, 1) = ((MR_Box) (InstanceTypes_63));
            }
            parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(TVarSet_21, VarNamePrint_32, Var_200);
            mercury__io__nl_2_p_0();
            mercury__io__write_string_3_p_0((MR_String) "instance constraints: ");
            {
              Var_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_206, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[3]));
              MR_hl_field(MR_mktag(0), Var_206, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1));
              MR_hl_field(MR_mktag(0), Var_206, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_206, 3) = ((MR_Box) (TVarSet_21));
              MR_hl_field(MR_mktag(0), Var_206, 4) = ((MR_Box) (VarNamePrint_32));
            }
            TypeCtorInfo_240_240 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
            mercury__io__write_list_5_p_0(TypeCtorInfo_240_240, InstanceConstraints_64, (MR_String) ", ", Var_206);
            mercury__io__nl_2_p_0();
            MethodUnivConstraints_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassMethodConstraints_65, (MR_Integer) 0)));
            MethodExistConstraints_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassMethodConstraints_65, (MR_Integer) 1)));
            mercury__io__write_string_3_p_0((MR_String) "method univ constraints: ");
            mercury__io__write_list_5_p_0(TypeCtorInfo_240_240, MethodUnivConstraints_68, (MR_String) ", ", Var_206);
            mercury__io__nl_2_p_0();
            mercury__io__write_string_3_p_0((MR_String) "method exist constraints: ");
            mercury__io__write_list_5_p_0(TypeCtorInfo_240_240, MethodExistConstraints_69, (MR_String) ", ", Var_206);
            mercury__io__nl_2_p_0();
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Transformation_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), Origin_59, (MR_Integer) 0)));
            MR_Word OrigPredId_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), Origin_59, (MR_Integer) 2)));
            MR_Integer OrigPredIdNum_75;
            MR_String Var_252;
            MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), Origin_59, (MR_Integer) 1)));

            OrigPredIdNum_75 = hlds__hlds_pred__pred_id_to_int_1_f_0(OrigPredId_74);
            mercury__io__write_string_3_p_0((MR_String) "% transformed from pred id ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0], OrigPredIdNum_75, &Var_252);
            mercury__io__write_string_3_p_0(Var_252);
            mercury__io__write_string_3_p_0((MR_String) "\n");
            mercury__io__write_string_3_p_0((MR_String) "% ");
            hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(ModuleInfo_11, OrigPredId_74);
            mercury__io__nl_2_p_0();
            mercury__io__write_string_3_p_0((MR_String) "% transformation: ");
            mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_transformation_0, ((MR_Box) (Transformation_72)));
            mercury__io__nl_2_p_0();
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Origin_59, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Creation_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), Origin_59, (MR_Integer) 1)));

                mercury__io__write_string_3_p_0((MR_String) "% created: ");
                mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_creation_0, ((MR_Box) (Creation_76)));
                mercury__io__nl_2_p_0();
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "% assertion\n");
              }
              break;
            case (MR_Integer) 2:
              {
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeCtorSymName_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), Origin_59, (MR_Integer) 1)));
                MR_Integer TypeCtorArity_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Origin_59, (MR_Integer) 2)));
                MR_Word SolverAuxPredKind_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), Origin_59, (MR_Integer) 3)));
                MR_String TypeCtorStr_82;
                MR_String SolverAuxPredKindStr_83;
                MR_Word Var_169;

                {
                  Var_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_169, 0) = ((MR_Box) (TypeCtorSymName_79));
                  MR_hl_field(MR_mktag(0), Var_169, 1) = ((MR_Box) (TypeCtorArity_80));
                }
                TypeCtorStr_82 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(Var_169);
                SolverAuxPredKindStr_83 = ((&hlds__hlds_out__hlds_out_pred_vector_common_10[12 + SolverAuxPredKind_81]))->hlds__hlds_out__hlds_out_pred__vector_common_type_10_0__vct_10_f_0;
                mercury__io__write_string_3_p_0((MR_String) "% ");
                mercury__io__write_string_3_p_0(SolverAuxPredKindStr_83);
                mercury__io__write_string_3_p_0((MR_String) " for ");
                mercury__io__write_string_3_p_0(TypeCtorStr_82);
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word BasePredCallId_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), Origin_59, (MR_Integer) 1)));
                MR_Word TablingAuxPredKind_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), Origin_59, (MR_Integer) 2)));
                MR_String BasePredStr_86;
                MR_String TablingAuxPredKindStr_87;

                BasePredStr_86 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(BasePredCallId_84);
                switch (TablingAuxPredKind_85) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    TablingAuxPredKindStr_87 = (MR_String) "table reset predicate";
                    break;
                  case (MR_Integer) 0:
                    TablingAuxPredKindStr_87 = (MR_String) "table statistics predicate";
                    break;
                }
                mercury__io__write_string_3_p_0((MR_String) "% ");
                mercury__io__write_string_3_p_0(TablingAuxPredKindStr_87);
                mercury__io__write_string_3_p_0((MR_String) " for ");
                mercury__io__write_string_3_p_0(BasePredStr_86);
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word MutableModuleName_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), Origin_59, (MR_Integer) 1)));
                MR_String MutableName_89 = ((MR_String) (MR_hl_field(MR_mktag(3), Origin_59, (MR_Integer) 2)));
                MR_Word MutablePredKind_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), Origin_59, (MR_Integer) 3)));
                MR_String MutableModuleNameStr_91;
                MR_String MutablePredKindStr_92;

                MutableModuleNameStr_91 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MutableModuleName_88);
                MutablePredKindStr_92 = ((&hlds__hlds_out__hlds_out_pred_vector_common_10[0 + MutablePredKind_90]))->hlds__hlds_out__hlds_out_pred__vector_common_type_10_0__vct_10_f_0;
                mercury__io__write_string_3_p_0((MR_String) "% ");
                mercury__io__write_string_3_p_0(MutablePredKindStr_92);
                mercury__io__write_string_3_p_0((MR_String) " for mutable ");
                mercury__io__write_string_3_p_0(MutableName_89);
                mercury__io__write_string_3_p_0((MR_String) " in module ");
                mercury__io__write_string_3_p_0(MutableModuleNameStr_91);
                mercury__io__write_string_3_p_0((MR_String) "\n");
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
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_14, &ProcTable_97);
    ProcIds_98 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_14);
    hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(Info_9, ModuleInfo_11, PredId_13, PredStatus_23, VarNamePrint_32, ProcTable_97, Indent_12, ProcIds_98);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_marker_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_marker_list_3_p_0(
  MR_Word Markers_4)
{
  {
    mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0, Markers_4, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[6]);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Integer Indent_9,
  MR_Word ConstraintMap_10)
{
  {
    MR_Word Var_17;
    MR_Box conv0_STATE_VARIABLE_IO_13;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_9);
    mercury__io__write_string_3_p_0((MR_String) "% Constraint map:\n");
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (VarSet_7));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (VarNamePrint_8));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (Indent_9));
    }
    mercury__map__foldl_4_p_2((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_17, ConstraintMap_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(
  MR_Word Info_1,
  MR_Word ModuleInfo_2,
  MR_Word PredId_3,
  MR_Word PredStatus_4,
  MR_Word VarNamePrint_5,
  MR_Word ProcTable_6,
  MR_Integer Indent_7,
  MR_Word HeadVar__8_8)
{
  while (MR_TRUE)
  {
    // setup for tailcalls optimized into a loop
    if (!((HeadVar__8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Integer ProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__8_8, (MR_Integer) 0)));
      MR_Word ProcIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__8_8, (MR_Integer) 1)));
      MR_Word ProcInfo_31;
      MR_Box conv0_ProcInfo_31;
      MR_Word next_value_of_HeadVar__8_8;

      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ProcTable_6, ((MR_Box) (ProcId_28)), &conv0_ProcInfo_31);
      ProcInfo_31 = ((MR_Word) conv0_ProcInfo_31);
      hlds__hlds_out__hlds_out_pred__write_proc_10_p_0(Info_1, ModuleInfo_2, PredId_3, PredStatus_4, VarNamePrint_5, Indent_7, ProcId_28, ProcInfo_31);
      // direct tailcall eliminated
      next_value_of_HeadVar__8_8 = ProcIds_29;
      HeadVar__8_8 = next_value_of_HeadVar__8_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__1036__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word PredId_13,
  MR_Word PredStatus_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_Integer ProcId_17,
  MR_Word ProcInfo_18)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_20;
    MR_Word TVarSet_21;
    MR_Word CanProcess_22;
    MR_Word VarSet_23;
    MR_Word VarTypes_24;
    MR_Word DeclaredDeterminism_25;
    MR_Word InferredDeterminism_26;
    MR_Word HeadVars_27;
    MR_Word HeadModes_28;
    MR_Word MaybeArgLives_29;
    MR_Word RegR_HeadVars_30;
    MR_Word MaybeArgInfos_31;
    MR_Word Goal_32;
    MR_Word MaybeArgSize_33;
    MR_Word MaybeTermination_34;
    MR_Word MaybeStructureSharing_35;
    MR_Word MaybeStructureReuse_36;
    MR_Word RttiVarMaps_37;
    MR_Word EvalMethod_38;
    MR_Word DeletedCallCalleeSet_39;
    MR_Word IsAddressTaken_40;
    MR_Word HasParallelConj_41;
    MR_Word HasUserEvent_42;
    MR_Word MaybeProcTableIOInfo_43;
    MR_Word MaybeCallTableTip_44;
    MR_Word MaybeDeepProfileInfo_45;
    MR_Word MaybeUntupleInfo_46;
    MR_Word VarNameRemap_47;
    MR_Integer Indent1_48;
    MR_String DumpOptions_49;
    MR_String Var_245;
    MR_Word Var_246;
    MR_Word Var_247;
    MR_Word Var_248;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_12, PredId_13, &PredInfo_20);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_20, &TVarSet_21);
    hlds__hlds_pred__proc_info_get_can_process_2_p_0(ProcInfo_18, &CanProcess_22);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_18, &VarSet_23);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_18, &VarTypes_24);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_18, &DeclaredDeterminism_25);
    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_18, &InferredDeterminism_26);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_18, &HeadVars_27);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_18, &HeadModes_28);
    hlds__hlds_pred__proc_info_get_maybe_arglives_2_p_0(ProcInfo_18, &MaybeArgLives_29);
    hlds__hlds_pred__proc_info_get_reg_r_headvars_2_p_0(ProcInfo_18, &RegR_HeadVars_30);
    hlds__hlds_pred__proc_info_get_maybe_arg_info_2_p_0(ProcInfo_18, &MaybeArgInfos_31);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_18, &Goal_32);
    hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(ProcInfo_18, &MaybeArgSize_33);
    hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(ProcInfo_18, &MaybeTermination_34);
    hlds__hlds_pred__proc_info_get_structure_sharing_2_p_0(ProcInfo_18, &MaybeStructureSharing_35);
    hlds__hlds_pred__proc_info_get_structure_reuse_2_p_0(ProcInfo_18, &MaybeStructureReuse_36);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_18, &RttiVarMaps_37);
    hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_18, &EvalMethod_38);
    hlds__hlds_pred__proc_info_get_deleted_call_callees_2_p_0(ProcInfo_18, &DeletedCallCalleeSet_39);
    hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(ProcInfo_18, &IsAddressTaken_40);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_18, &HasParallelConj_41);
    hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(ProcInfo_18, &HasUserEvent_42);
    hlds__hlds_pred__proc_info_get_maybe_proc_table_io_info_2_p_0(ProcInfo_18, &MaybeProcTableIOInfo_43);
    hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ProcInfo_18, &MaybeCallTableTip_44);
    hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ProcInfo_18, &MaybeDeepProfileInfo_45);
    hlds__hlds_pred__proc_info_get_maybe_untuple_info_2_p_0(ProcInfo_18, &MaybeUntupleInfo_46);
    hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(ProcInfo_18, &VarNameRemap_47);
    Indent1_48 = (Indent_16 + (MR_Integer) 1);
    DumpOptions_49 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0)));
    Var_245 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1)));
    Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 2)));
    Var_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 3)));
    Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 4)));
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_49, (MR_Char) 120);
    if (succeeded)
    {
      MR_Word TypeInfo_255_255;
      MR_Integer PredInt_50;
      MR_Integer ProcInt_51;
      MR_Word DeletedCallCallees_58;
      MR_Word VarNameRemapList_86;
      MR_String PredName_89;
      MR_Word PredOrFunc_90;
      MR_Word ModeVarSet_91;
      MR_String Var_117;
      MR_Word StructureSharing_52;
      MR_Word StructureReuse_55;
      MR_Word ArgInfos_96;
      MR_Word Var_236;
      MR_Integer Var_268;

      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent1_48);
      mercury__io__write_string_3_p_0((MR_String) "% pred id ");
      hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_13, &PredInt_50);
      mercury__io__write_int_3_p_0(PredInt_50);
      mercury__io__nl_2_p_0();
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent1_48);
      mercury__io__write_string_3_p_0((MR_String) "% mode number ");
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_17, &ProcInt_51);
      mercury__io__write_int_3_p_0(ProcInt_51);
      mercury__io__write_string_3_p_0((MR_String) " of ");
      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(ModuleInfo_12, PredId_13);
      mercury__io__write_string_3_p_0((MR_String) " (");
      Var_117 = parse_tree__prog_out__determinism_to_string_1_f_0(InferredDeterminism_26);
      mercury__io__write_string_3_p_0(Var_117);
      mercury__io__write_string_3_p_0((MR_String) "):\n");
      switch (CanProcess_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
          }
          break;
        case (MR_Integer) 0:
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
            mercury__io__write_string_3_p_0((MR_String) "% cannot_process_yet");
            mercury__io__nl_2_p_0();
          }
          break;
      }
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_49, (MR_Char) 116);
      if (succeeded)
      {
        MR_Word TypeInfo_249_249;

        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% Arg size properties: ");
        TypeInfo_249_249 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[1];
        parse_tree__parse_tree_out_pragma__write_maybe_arg_size_info_4_p_0(TypeInfo_249_249, (MR_Integer) 1, MaybeArgSize_33);
        mercury__io__nl_2_p_0();
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% Termination properties: ");
        parse_tree__parse_tree_out_pragma__write_maybe_termination_info_4_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, TypeInfo_249_249, (MR_Integer) 1, MaybeTermination_34);
        mercury__io__nl_2_p_0();
      }
      else
      {
      }
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_49, (MR_Char) 83);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeStructureSharing_35)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          StructureSharing_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeStructureSharing_35, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        MR_Word SharingAs_53;
        MR_Word _Status_54;

        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% Structure sharing: \n");
        SharingAs_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), StructureSharing_52, (MR_Integer) 0)));
        _Status_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), StructureSharing_52, (MR_Integer) 1)));
        parse_tree__prog_ctgc__dump_structure_sharing_domain_5_p_0(VarSet_23, TVarSet_21, SharingAs_53);
      }
      else
      {
      }
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_49, (MR_Char) 82);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeStructureReuse_36)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          StructureReuse_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeStructureReuse_36, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        MR_Word ReuseAs_56;
        MR_Word _ReuseStatus_57;

        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% Structure reuse: \n");
        ReuseAs_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), StructureReuse_55, (MR_Integer) 0)));
        _ReuseStatus_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), StructureReuse_55, (MR_Integer) 1)));
        parse_tree__prog_ctgc__dump_structure_reuse_domain_5_p_0(VarSet_23, TVarSet_21, ReuseAs_56);
      }
      else
      {
      }
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
      hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(VarSet_23, TVarSet_21, VarNamePrint_15, Indent_16, VarTypes_24);
      hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(VarSet_23, TVarSet_21, VarNamePrint_15, Indent_16, RttiVarMaps_37);
      mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, DeletedCallCalleeSet_39, &DeletedCallCallees_58);
      if (!((DeletedCallCallees_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        mercury__io__write_string_3_p_0((MR_String) "% procedures called from deleted goals: ");
        mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[2], ((MR_Box) (DeletedCallCallees_58)));
        mercury__io__nl_2_p_0();
      }
      switch (IsAddressTaken_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "% address is not taken\n");
          }
          break;
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "% address is taken\n");
          }
          break;
      }
      switch (HasParallelConj_41) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "% does not contain parallel conjunction\n");
          }
          break;
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "% contains parallel conjunction\n");
          }
          break;
      }
      switch (HasUserEvent_42) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "% does not contain user event\n");
          }
          break;
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "% contains user event\n");
          }
          break;
      }
      switch (MR_tag((MR_Word) EvalMethod_38)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(EvalMethod_38)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                mercury__io__write_string_3_p_0((MR_String) "% eval method: ");
                parse_tree__prog_out__write_eval_method_3_p_0(EvalMethod_38);
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
              break;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            mercury__io__write_string_3_p_0((MR_String) "% eval method: ");
            parse_tree__prog_out__write_eval_method_3_p_0(EvalMethod_38);
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          break;
      }
      if (!((MaybeProcTableIOInfo_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word ProcTableIOInfo_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeProcTableIOInfo_43, (MR_Integer) 0)));

        hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_p_0(TVarSet_21, ProcTableIOInfo_64);
      }
      if (!((MaybeCallTableTip_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word CallTableTip_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCallTableTip_44, (MR_Integer) 0)));

        mercury__io__write_string_3_p_0((MR_String) "% call table tip: ");
        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_23, VarNamePrint_15, CallTableTip_65);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      if (!((MaybeDeepProfileInfo_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word DeepProfileInfo_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDeepProfileInfo_45, (MR_Integer) 0)));
        MR_Word MaybeRecInfo_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepProfileInfo_66, (MR_Integer) 0)));
        MR_Word MaybeDeepLayout_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepProfileInfo_66, (MR_Integer) 1)));
        MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepProfileInfo_66, (MR_Integer) 2)));

        if (!((MaybeRecInfo_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          MR_Word DeepRecInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRecInfo_67, (MR_Integer) 0)));
          MR_Word Role_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepRecInfo_70, (MR_Integer) 0)));
          MR_Word DeepPredProcId_73;
          MR_Word DeepPredId_74;
          MR_Integer DeepProcId_75;
          MR_Integer DeepPredInt_76;
          MR_Integer DeepProcInt_77;
          MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepRecInfo_70, (MR_Integer) 1)));

          mercury__io__write_string_3_p_0((MR_String) "% deep recursion info: ");
          if (((MR_tag((MR_Word) Role_71)) == (MR_mktag((MR_Integer) 0))))
          {
            DeepPredProcId_73 = (MR_Word) MR_body(((MR_Word) Role_71), (MR_Integer) 0);
            mercury__io__write_string_3_p_0((MR_String) "inner, outer is ");
          }
          else
          {
            DeepPredProcId_73 = (MR_Word) MR_body(((MR_Word) Role_71), (MR_Integer) 1);
            mercury__io__write_string_3_p_0((MR_String) "outer, inner is ");
          }
          DeepPredId_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepPredProcId_73, (MR_Integer) 0)));
          DeepProcId_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DeepPredProcId_73, (MR_Integer) 1)));
          hlds__hlds_pred__pred_id_to_int_2_p_0(DeepPredId_74, &DeepPredInt_76);
          hlds__hlds_pred__proc_id_to_int_2_p_0(DeepProcId_75, &DeepProcInt_77);
          mercury__io__write_int_3_p_0(DeepPredInt_76);
          mercury__io__write_string_3_p_0((MR_String) "/");
          mercury__io__write_int_3_p_0(DeepProcInt_77);
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        if (!((MaybeDeepLayout_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          MR_Word TypeCtorInfo_254_254;
          MR_Word DeepLayout_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDeepLayout_68, (MR_Integer) 0)));
          MR_Word ProcStatic_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepLayout_78, (MR_Integer) 0)));
          MR_Word ExcpVars_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepLayout_78, (MR_Integer) 1)));
          MR_Word TopCSD_81;
          MR_Word MiddleCSD_82;
          MR_Word MaybeOldOutermost_83;

          hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0(ProcStatic_79);
          TopCSD_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExcpVars_80, (MR_Integer) 0)));
          MiddleCSD_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExcpVars_80, (MR_Integer) 1)));
          MaybeOldOutermost_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExcpVars_80, (MR_Integer) 2)));
          mercury__io__write_string_3_p_0((MR_String) "% deep layout info: ");
          mercury__io__write_string_3_p_0((MR_String) "TopCSD is ");
          TypeCtorInfo_254_254 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(TypeCtorInfo_254_254, VarSet_23, VarNamePrint_15, TopCSD_81);
          mercury__io__write_string_3_p_0((MR_String) ", MiddleCSD is ");
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(TypeCtorInfo_254_254, VarSet_23, VarNamePrint_15, MiddleCSD_82);
          if (!((MaybeOldOutermost_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
          {
            MR_Word OldOutermost_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeOldOutermost_83, (MR_Integer) 0)));

            mercury__io__write_string_3_p_0((MR_String) ", OldOutermost is ");
            parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(TypeCtorInfo_254_254, VarSet_23, VarNamePrint_15, OldOutermost_84);
          }
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
      if (!((MaybeUntupleInfo_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word UntupleInfo_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeUntupleInfo_46, (MR_Integer) 0)));

        hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0(VarSet_23, VarNamePrint_15, Indent_16, UntupleInfo_85);
      }
      TypeInfo_255_255 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0];
      mercury__map__to_assoc_list_2_p_0(TypeInfo_255_255, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, VarNameRemap_47, &VarNameRemapList_86);
      if (!((VarNameRemapList_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word VarNameRemapHead_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarNameRemapList_86, (MR_Integer) 0)));
        MR_Word VarNameRemapTail_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarNameRemapList_86, (MR_Integer) 1)));

        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% var name remap: ");
        hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(VarSet_23, VarNameRemapHead_87, VarNameRemapTail_88);
        mercury__io__nl_2_p_0();
      }
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
      PredName_89 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_12, PredId_13);
      PredOrFunc_90 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_20);
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &ModeVarSet_91);
      switch (PredOrFunc_90) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word FuncHeadModes_93;
            MR_Word RetHeadMode_94;
            MR_Word Var_212;
            MR_Box conv0_RetHeadMode_94;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, HeadModes_28, &FuncHeadModes_93, &conv0_RetHeadMode_94);
            RetHeadMode_94 = ((MR_Word) conv0_RetHeadMode_94);
            {
              Var_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_212, 0) = ((MR_Box) (PredName_89));
            }
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_8_p_0((MR_Integer) 1, ModeVarSet_91, Var_212, FuncHeadModes_93, RetHeadMode_94, DeclaredDeterminism_25);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_215;

            {
              Var_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_215, 0) = ((MR_Box) (PredName_89));
            }
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_8_p_0((MR_Integer) 1, ModeVarSet_91, Var_215, HeadModes_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), DeclaredDeterminism_25);
          }
          break;
      }
      if (!((MaybeArgLives_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word ArgLives_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeArgLives_29, (MR_Integer) 0)));

        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% arg lives: ");
        mercury__io__print_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[3], ((MR_Box) (ArgLives_95)));
        mercury__io__nl_2_p_0();
      }
      succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, RegR_HeadVars_30);
      if (succeeded)
      {
        MR_Word Var_225;
        MR_Word Var_227;

        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% reg_r headvars: ");
        Var_225 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, RegR_HeadVars_30);
        {
          Var_227 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_227, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[2]));
          MR_hl_field(MR_mktag(0), Var_227, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_proc_10_p_0_1));
          MR_hl_field(MR_mktag(0), Var_227, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_227, 3) = ((MR_Box) (VarNamePrint_15));
          MR_hl_field(MR_mktag(0), Var_227, 4) = ((MR_Box) (VarSet_23));
        }
        mercury__io__write_list_5_p_0(TypeInfo_255_255, Var_225, (MR_String) ", ", Var_227);
        mercury__io__nl_2_p_0();
      }
      else
      {
      }
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_49, (MR_Char) 65);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeArgInfos_31)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          ArgInfos_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeArgInfos_31, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% arg_infos: ");
        mercury__io__print_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[4], ((MR_Box) (ArgInfos_96)));
        mercury__io__nl_2_p_0();
      }
      else
      {
      }
      Var_236 = (MR_Word) PredStatus_14;
      succeeded = (Var_236 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      if (succeeded)
      {
        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_268);
        succeeded = (ProcId_17 == Var_268);
      }
      if (!(succeeded))
      {
        MR_Word StackSlots_97;
        MR_Word HeadTerms_98;

        hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ProcInfo_18, &StackSlots_97);
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(VarSet_23, VarNamePrint_15, Indent_16, StackSlots_97);
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, HeadVars_27, &HeadTerms_98);
        hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(ModuleInfo_12, VarSet_23, VarNamePrint_15, PredId_13, PredOrFunc_90, HeadTerms_98);
        mercury__io__write_string_3_p_0((MR_String) " :-\n");
        hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(Info_11, ModuleInfo_12, VarSet_23, VarNamePrint_15, Indent1_48, (MR_String) ".\n", Goal_32);
      }
    }
    else
    {
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_p_0(
  MR_Word TVarSet_5,
  MR_Word ProcTableIOInfo_6)
{
  {
    MR_Word MaybeArgInfos_8 = (MR_Word) ProcTableIOInfo_6;

    if ((MaybeArgInfos_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "% proc table io info: io tabled, no arg_infos\n");
    }
    else
    {
      MR_Word ArgInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeArgInfos_8, (MR_Integer) 0)));

      mercury__io__write_string_3_p_0((MR_String) "% proc table io info: io tabled, arg_infos:\n");
      hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0(TVarSet_5, ArgInfos_9);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0(
  MR_Word TVarSet_5,
  MR_Word TableArgInfos_6)
{
  {
    MR_Word TypeCtorInfo_27_27;
    MR_Word ArgInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), TableArgInfos_6, (MR_Integer) 0)));
    MR_Word TVarMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), TableArgInfos_6, (MR_Integer) 1)));
    MR_Word TVarPairs_10;
    MR_Word Var_17;
    MR_Box conv0_STATE_VARIABLE_IO_18_18;

    mercury__io__write_string_3_p_0((MR_String) "% arg infos:\n");
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (TVarSet_5));
    }
    TypeCtorInfo_27_27 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_arg_info_0, TypeCtorInfo_27_27, Var_17, ArgInfos_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_18_18);
    mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[5], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0, TVarMap_9, &TVarPairs_10);
    if (!((TVarPairs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Var_21;
      MR_Box conv1_STATE_VARIABLE_IO_14;

      mercury__io__write_string_3_p_0((MR_String) "% type var map:\n");
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (TVarSet_5));
      }
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[0], TypeCtorInfo_27_27, Var_21, TVarPairs_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv3_STATE_VARIABLE_SlotNum_12;

    hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv3_STATE_VARIABLE_SlotNum_12);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_SlotNum_12));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_SlotNum_15;

    hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv0_STATE_VARIABLE_SlotNum_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SlotNum_15));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_p_0(
  MR_Word ProcStatic_4)
{
  {
    MR_Word TypeCtorInfo_40_40;
    MR_Word TypeCtorInfo_41_41;
    MR_String FileName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ProcStatic_4, (MR_Integer) 0)));
    MR_Integer LineNumber_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcStatic_4, (MR_Integer) 1)));
    MR_Word InInterface_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStatic_4, (MR_Integer) 2)));
    MR_Word CallSiteStatics_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStatic_4, (MR_Integer) 3)));
    MR_Word CoveragePoints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStatic_4, (MR_Integer) 4)));
    MR_Integer Var_11;
    MR_Box conv2_Var_11;
    MR_Box conv1_STATE_VARIABLE_IO_29_29;
    MR_Integer Var_12;
    MR_Box conv5_Var_12;
    MR_Box conv4_STATE_VARIABLE_IO_14;

    mercury__io__write_string_3_p_0((MR_String) "% proc static filename: ");
    mercury__io__write_string_3_p_0(FileName_6);
    mercury__io__nl_2_p_0();
    mercury__io__write_string_3_p_0((MR_String) "% proc static line number: ");
    mercury__io__write_int_3_p_0(LineNumber_7);
    mercury__io__nl_2_p_0();
    mercury__io__write_string_3_p_0((MR_String) "% proc static is interface: ");
    mercury__io__write_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (InInterface_8)));
    mercury__io__nl_2_p_0();
    TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    TypeCtorInfo_41_41 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0, TypeCtorInfo_40_40, TypeCtorInfo_41_41, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[4], CallSiteStatics_9, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29_29);
    Var_11 = ((MR_Integer) conv2_Var_11);
    mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, TypeCtorInfo_40_40, TypeCtorInfo_41_41, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[5], CoveragePoints_10, ((MR_Box) ((MR_Integer) 0)), &conv5_Var_12, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_14);
    Var_12 = ((MR_Integer) conv5_Var_12);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Integer Indent_9,
  MR_Word UntupleInfo_10)
{
  {
    MR_Word UntupleMap_12 = (MR_Word) UntupleInfo_10;
    MR_Word Var_18;
    MR_Box conv0_STATE_VARIABLE_IO_14;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_9);
    mercury__io__write_string_3_p_0((MR_String) "% untuple:\n");
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_untuple_info_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (VarSet_7));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (VarNamePrint_8));
      MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (Indent_9));
    }
    mercury__map__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[7], (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_18, UntupleMap_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14);
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Integer Indent_9,
  MR_Word StackSlots_10)
{
  {
    MR_Word TypeInfo_18_18 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0];
    MR_Word TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0;
    MR_Word VarSlotList0_12;
    MR_Word VarSlotList_13;

    mercury__map__to_assoc_list_2_p_0(TypeInfo_18_18, TypeCtorInfo_19_19, StackSlots_10, &VarSlotList0_12);
    VarSlotList_13 = mercury__assoc_list__map_values_only_2_f_0(TypeCtorInfo_19_19, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, TypeInfo_18_18, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[3], VarSlotList0_12);
    hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(VarSet_7, VarNamePrint_8, Indent_9, VarSlotList_13);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_p_0(
  MR_Word VarSet_6,
  MR_Word Head_7,
  MR_Word Tail_8)
{
  while (MR_TRUE)
  {
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Head_7, (MR_Integer) 0)));
    MR_String NewName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), Head_7, (MR_Integer) 1)));

    // setup for tailcalls optimized into a loop
    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_6, (MR_Integer) 1, Var_10);
    mercury__io__write_string_3_p_0((MR_String) " -> ");
    mercury__io__write_string_3_p_0(NewName_11);
    if (!((Tail_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word TailHead_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Tail_8, (MR_Integer) 0)));
      MR_Word TailTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Tail_8, (MR_Integer) 1)));
      MR_Word next_value_of_Head_7;
      MR_Word next_value_of_Tail_8;

      mercury__io__write_string_3_p_0((MR_String) ", ");
      // direct tailcall eliminated
      next_value_of_Head_7 = TailHead_12;
      next_value_of_Tail_8 = TailTail_13;
      Head_7 = next_value_of_Head_7;
      Tail_8 = next_value_of_Tail_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(
  MR_Word VarSet_8,
  MR_Word TVarSet_9,
  MR_Word VarNamePrint_10,
  MR_Integer Indent_11,
  MR_Word RttiVarMaps_12)
{
  {
    MR_Word TypeCtorInfo_38_38;
    MR_Word TypeVars_14;
    MR_Word Constraints_15;
    MR_Word ProgVars_16;
    MR_Word Var_22;
    MR_Word Var_27;
    MR_Word Var_32;
    MR_Box conv0_STATE_VARIABLE_IO_23_23;
    MR_Box conv1_STATE_VARIABLE_IO_28_28;
    MR_Box conv2_STATE_VARIABLE_IO_18;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_11);
    mercury__io__write_string_3_p_0((MR_String) "% type_info varmap:\n");
    hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(RttiVarMaps_12, &TypeVars_14);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (VarSet_8));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (TVarSet_9));
      MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (VarNamePrint_10));
      MR_hl_field(MR_mktag(0), Var_22, 6) = ((MR_Box) (RttiVarMaps_12));
      MR_hl_field(MR_mktag(0), Var_22, 7) = ((MR_Box) (Indent_11));
    }
    TypeCtorInfo_38_38 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[5], TypeCtorInfo_38_38, Var_22, TypeVars_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_23_23);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_11);
    mercury__io__write_string_3_p_0((MR_String) "% typeclass_info varmap:\n");
    hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(RttiVarMaps_12, &Constraints_15);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (VarSet_8));
      MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (TVarSet_9));
      MR_hl_field(MR_mktag(0), Var_27, 5) = ((MR_Box) (VarNamePrint_10));
      MR_hl_field(MR_mktag(0), Var_27, 6) = ((MR_Box) (RttiVarMaps_12));
      MR_hl_field(MR_mktag(0), Var_27, 7) = ((MR_Box) (Indent_11));
    }
    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, TypeCtorInfo_38_38, Var_27, Constraints_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_28_28);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_11);
    mercury__io__write_string_3_p_0((MR_String) "% rtti_var_info:\n");
    hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(RttiVarMaps_12, &ProgVars_16);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (VarSet_8));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (TVarSet_9));
      MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (VarNamePrint_10));
      MR_hl_field(MR_mktag(0), Var_32, 6) = ((MR_Box) (RttiVarMaps_12));
      MR_hl_field(MR_mktag(0), Var_32, 7) = ((MR_Box) (Indent_11));
    }
    mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], TypeCtorInfo_38_38, Var_32, ProgVars_16, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_18);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(
  MR_Word VarSet_8,
  MR_Word TVarSet_9,
  MR_Word VarNamePrint_10,
  MR_Integer Indent_11,
  MR_Word VarTypes_12)
{
  {
    MR_Integer NumVarTypes_14;
    MR_Word Vars_15;
    MR_String Var_30;

    hlds__vartypes__vartypes_count_2_p_0(VarTypes_12, &NumVarTypes_14);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_11);
    mercury__io__write_string_3_p_0((MR_String) "% variable types map ");
    mercury__io__write_string_3_p_0((MR_String) "(");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_5[0], NumVarTypes_14, &Var_30);
    mercury__io__write_string_3_p_0(Var_30);
    mercury__io__write_string_3_p_0((MR_String) " entries):\n");
    hlds__vartypes__vartypes_vars_2_p_0(VarTypes_12, &Vars_15);
    hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(VarSet_8, TVarSet_9, VarNamePrint_10, VarTypes_12, Indent_11, Vars_15);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(
  MR_Word VarSet_1,
  MR_Word TypeVarSet_2,
  MR_Word VarNamePrint_3,
  MR_Word VarTypes_4,
  MR_Integer Indent_5,
  MR_Word HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for tailcalls optimized into a loop
    if (!((HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word TypeCtorInfo_44_44;
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0)));
      MR_Word Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1)));
      MR_Word Type_25;
      MR_Integer VarNum_26;
      MR_Word next_value_of_HeadVar__6_6;

      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_4, Var_22, &Type_25);
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_5);
      mercury__io__write_string_3_p_0((MR_String) "% ");
      TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(TypeCtorInfo_44_44, VarSet_1, VarNamePrint_3, Var_22);
      mercury__io__write_string_3_p_0((MR_String) " (number ");
      mercury__term__var_to_int_2_p_0(TypeCtorInfo_44_44, Var_22, &VarNum_26);
      mercury__io__write_int_3_p_0(VarNum_26);
      mercury__io__write_string_3_p_0((MR_String) ")");
      mercury__io__write_string_3_p_0((MR_String) ": ");
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TypeVarSet_2, VarNamePrint_3, Type_25);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      // direct tailcall eliminated
      next_value_of_HeadVar__6_6 = Vars_23;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(
  MR_Word Info_14,
  MR_Word Lang_15,
  MR_Word ModuleInfo_16,
  MR_Word PredId_17,
  MR_Word PredOrFunc_18,
  MR_Word VarSet_19,
  MR_Word TypeQual_20,
  MR_Word VarNamePrint_21,
  MR_Integer Indent_22,
  MR_Word HeadVars_23,
  MR_Word Clauses_24)
{
  {
    MR_Word HeadVarList_26;

    HeadVarList_26 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[0], HeadVars_23);
    hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(Info_14, Lang_15, ModuleInfo_16, PredId_17, PredOrFunc_18, VarSet_19, TypeQual_20, VarNamePrint_21, Indent_22, HeadVarList_26, Clauses_24, (MR_Integer) 1);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(
  MR_Word Info_15,
  MR_Word Lang_16,
  MR_Word ModuleInfo_17,
  MR_Word PredId_18,
  MR_Word PredOrFunc_19,
  MR_Word VarSet_20,
  MR_Word TypeQual_21,
  MR_Word VarNamePrint_22,
  MR_Integer Indent_23,
  MR_Word HeadVars_24,
  MR_Word Clauses_25,
  MR_Integer ClauseNum_26)
{
  while (MR_TRUE)
  {
    // setup for tailcalls optimized into a loop
    if (!((Clauses_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word FirstClause_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), Clauses_25, (MR_Integer) 0)));
      MR_Word LaterClauses_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Clauses_25, (MR_Integer) 1)));
      MR_Word HeadTerms_30;
      MR_Integer Var_40;
      MR_Word next_value_of_Clauses_25;
      MR_Integer next_value_of_ClauseNum_26;

      mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, HeadVars_24, &HeadTerms_30);
      mercury__io__write_string_3_p_0((MR_String) "% clause ");
      mercury__io__write_int_3_p_0(ClauseNum_26);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      hlds__hlds_out__hlds_out_pred__write_clause_14_p_0(Info_15, Lang_16, ModuleInfo_17, PredId_18, PredOrFunc_19, VarSet_20, TypeQual_21, VarNamePrint_22, (MR_Integer) 0, Indent_23, HeadTerms_30, FirstClause_28);
      Var_40 = (ClauseNum_26 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_Clauses_25 = LaterClauses_29;
      next_value_of_ClauseNum_26 = Var_40;
      Clauses_25 = next_value_of_Clauses_25;
      ClauseNum_26 = next_value_of_ClauseNum_26;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_pred__proc_id_to_int_1_f_0(((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_14_p_0(
  MR_Word Info_15,
  MR_Word Lang_16,
  MR_Word ModuleInfo_17,
  MR_Word PredId_18,
  MR_Word PredOrFunc_19,
  MR_Word VarSet_20,
  MR_Word TypeQual_21,
  MR_Word VarNamePrint_22,
  MR_Word WriteWhichModes_23,
  MR_Integer Indent_24,
  MR_Word HeadTerms_25,
  MR_Word Clause_26)
{
  {
    MR_bool succeeded;
    MR_Word ApplicableModes_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_26, (MR_Integer) 0)));
    MR_Word Goal_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_26, (MR_Integer) 1)));
    MR_Word ImplLang_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_26, (MR_Integer) 2)));
    MR_Word Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_26, (MR_Integer) 3)));
    MR_Integer Indent1_33 = (Indent_24 + (MR_Integer) 1);
    MR_String DumpOptions_34 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_15, (MR_Integer) 0)));
    MR_Word PredInfo_38;
    MR_Word AllProcIds_39;
    MR_Word _StateVarWarnings_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_26, (MR_Integer) 4)));
    MR_String Var_68 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_15, (MR_Integer) 1)));
    MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_15, (MR_Integer) 2)));
    MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_15, (MR_Integer) 3)));
    MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_15, (MR_Integer) 4)));
    MR_Word SelectedProcIds_40;
    MR_Word TypeInfo_77_77;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word _GoalInfo_41;

    if (!((ApplicableModes_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Modes_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ApplicableModes_28, (MR_Integer) 0)));

      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_34, (MR_Char) 109);
      if (succeeded)
      {
        MR_Word ModeInts_36;

        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_24);
        mercury__io__write_string_3_p_0((MR_String) "% Modes for which this clause applies: ");
        ModeInts_36 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[2], Modes_35);
        hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(ModeInts_36);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      else
      {
      }
    }
    if (!((ImplLang_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word ForeignLang_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ImplLang_30, (MR_Integer) 0)));

      mercury__io__write_string_3_p_0((MR_String) "% Language of implementation: ");
      mercury__io__write_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (ForeignLang_37)));
      mercury__io__nl_2_p_0();
    }
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_17, PredId_18, &PredInfo_38);
    AllProcIds_39 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_38);
    succeeded = ((MR_tag((MR_Word) ApplicableModes_28)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      SelectedProcIds_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ApplicableModes_28, (MR_Integer) 0)));
      TypeInfo_77_77 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[8];
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_77_77, ((MR_Box) (SelectedProcIds_40)), ((MR_Box) (AllProcIds_39)));
      succeeded = !(succeeded);
    }
    if (succeeded)
      hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_p_0(ModuleInfo_17, Lang_16, VarSet_20, VarNamePrint_22, WriteWhichModes_23, PredId_18, PredOrFunc_19, SelectedProcIds_40, Context_31, HeadTerms_25);
    else
      hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(ModuleInfo_17, VarSet_20, VarNamePrint_22, PredId_18, PredOrFunc_19, HeadTerms_25);
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_29, (MR_Integer) 0)));
    _GoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_29, (MR_Integer) 1)));
    succeeded = ((((MR_tag((MR_Word) Var_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_59, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_59, (MR_Integer) 1)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_59, (MR_Integer) 2)));
      succeeded = (Var_60 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Var_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) " :-\n");
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_15, ModuleInfo_17, VarSet_20, TypeQual_21, VarNamePrint_22, Indent1_33, (MR_String) ".\n", Goal_29);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_head_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word VarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word PredId_12,
  MR_Word PredOrFunc_13,
  MR_Word HeadTerms_14)
{
  {
    MR_String PredName_16;
    MR_Word ModuleName_17;

    PredName_16 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_9, PredId_12);
    ModuleName_17 = hlds__hlds_module__predicate_module_2_f_0(ModuleInfo_9, PredId_12);
    switch (PredOrFunc_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgs_18;
          MR_Word RetVal_19;
          MR_Word Var_24;
          MR_Box conv0_RetVal_19;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[6], HeadTerms_14, &FuncArgs_18, &conv0_RetVal_19);
          RetVal_19 = ((MR_Word) conv0_RetVal_19);
          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (PredName_16));
          }
          hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(VarSet_10, VarNamePrint_11, ModuleName_17, Var_24, FuncArgs_18);
          mercury__io__write_string_3_p_0((MR_String) " = ");
          parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_10, VarNamePrint_11, (MR_Integer) 0, RetVal_19);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_22;

          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (PredName_16));
          }
          hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(VarSet_10, VarNamePrint_11, ModuleName_17, Var_22, HeadTerms_14);
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Lang_2,
  MR_Word VarSet_3,
  MR_Word VarNamePrint_4,
  MR_Word WriteWhichModes_5,
  MR_Word PredId_6,
  MR_Word PredOrFunc_7,
  MR_Word HeadVar__8_8,
  MR_Word Context_9,
  MR_Word HeadTerms_10)
{
  while (MR_TRUE)
  {
    // setup for tailcalls optimized into a loop
    if (!((HeadVar__8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Integer ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__8_8, (MR_Integer) 0)));
      MR_Word ProcIds_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__8_8, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__8_8;

      hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0(ModuleInfo_1, Lang_2, VarSet_3, VarNamePrint_4, WriteWhichModes_5, PredId_6, PredOrFunc_7, ProcId_32, Context_9, HeadTerms_10);
      // direct tailcall eliminated
      next_value_of_HeadVar__8_8 = ProcIds_33;
      HeadVar__8_8 = next_value_of_HeadVar__8_8;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_AnnotatedTerm_9;

    conv1_AnnotatedTerm_9 = hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_AnnotatedTerm_9));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Lang_14,
  MR_Word VarSet_15,
  MR_Word VarNamePrint_16,
  MR_Word WriteWhichModes_17,
  MR_Word PredId_18,
  MR_Word PredOrFunc_19,
  MR_Integer ProcId_20,
  MR_Word Context_21,
  MR_Word HeadTerms_22)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_24;
    MR_Word Procedures_25;
    MR_Word ProcInfo_26;
    MR_Box conv0_ProcInfo_26;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_13, PredId_18, &PredInfo_24);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_24, &Procedures_25);
    succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, Procedures_25, ((MR_Box) (ProcId_20)), &conv0_ProcInfo_26);
    if (succeeded)
    {
      ProcInfo_26 = ((MR_Word) conv0_ProcInfo_26);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeInfo_36_36;
      MR_Word ArgModes_27;
      MR_Word AnnotatedPairs_28;
      MR_Word AnnotatedHeadTerms_29;
      MR_Word Var_32;
      MR_String PredName_50;
      MR_Word ModuleName_51;

      switch (WriteWhichModes_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_26, &ArgModes_27);
          break;
        case (MR_Integer) 1:
          hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_26, &ArgModes_27);
          break;
      }
      TypeInfo_36_36 = (MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[6];
      mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_36_36, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, HeadTerms_22, ArgModes_27, &AnnotatedPairs_28);
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_p_0_1));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Lang_14));
        MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (Context_21));
      }
      AnnotatedHeadTerms_29 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_2[1], TypeInfo_36_36, Var_32, AnnotatedPairs_28);
      PredName_50 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_13, PredId_18);
      ModuleName_51 = hlds__hlds_module__predicate_module_2_f_0(ModuleInfo_13, PredId_18);
      switch (PredOrFunc_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word FuncArgs_52;
            MR_Word RetVal_53;
            MR_Word Var_56;
            MR_Box conv2_RetVal_53;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_pred_scalar_common_1[6], AnnotatedHeadTerms_29, &FuncArgs_52, &conv2_RetVal_53);
            RetVal_53 = ((MR_Word) conv2_RetVal_53);
            {
              Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (PredName_50));
            }
            hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(VarSet_15, VarNamePrint_16, ModuleName_51, Var_56, FuncArgs_52);
            mercury__io__write_string_3_p_0((MR_String) " = ");
            parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_15, VarNamePrint_16, (MR_Integer) 0, RetVal_53);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_54;

            {
              Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (PredName_50));
            }
            hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(VarSet_15, VarNamePrint_16, ModuleName_51, Var_54, AnnotatedHeadTerms_29);
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
  MR_Word Info_3,
  MR_Word * ClausesInfo_4)
{
  {
    MR_bool succeeded;
    MR_String OptionsStr_5 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_String DumpStr_6;
    MR_String STATE_VARIABLE_DumpStr_9_9;
    MR_String STATE_VARIABLE_DumpStr_12_12;
    MR_String STATE_VARIABLE_DumpStr_15_15;
    MR_String STATE_VARIABLE_DumpStr_18_18;
    MR_String Var_23 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_String Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_String Var_27;

    succeeded = mercury__string__contains_char_2_p_0(OptionsStr_5, (MR_Char) 99);
    if (succeeded)
      STATE_VARIABLE_DumpStr_9_9 = (MR_String) "c";
    else
      STATE_VARIABLE_DumpStr_9_9 = (MR_String) "";
    succeeded = mercury__string__contains_char_2_p_0(OptionsStr_5, (MR_Char) 110);
    if (succeeded)
    {
      STATE_VARIABLE_DumpStr_12_12 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_DumpStr_9_9, (MR_String) "n");
    }
    else
      STATE_VARIABLE_DumpStr_12_12 = STATE_VARIABLE_DumpStr_9_9;
    succeeded = mercury__string__contains_char_2_p_0(OptionsStr_5, (MR_Char) 118);
    if (succeeded)
    {
      STATE_VARIABLE_DumpStr_15_15 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_DumpStr_12_12, (MR_String) "v");
    }
    else
      STATE_VARIABLE_DumpStr_15_15 = STATE_VARIABLE_DumpStr_12_12;
    succeeded = mercury__string__contains_char_2_p_0(OptionsStr_5, (MR_Char) 103);
    if (succeeded)
    {
      STATE_VARIABLE_DumpStr_18_18 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_DumpStr_15_15, (MR_String) "g");
    }
    else
      STATE_VARIABLE_DumpStr_18_18 = STATE_VARIABLE_DumpStr_15_15;
    succeeded = mercury__string__contains_char_2_p_0(OptionsStr_5, (MR_Char) 80);
    if (succeeded)
    {
      DumpStr_6 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_DumpStr_18_18, (MR_String) "P");
    }
    else
      DumpStr_6 = STATE_VARIABLE_DumpStr_18_18;
    Var_27 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *ClausesInfo_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (DumpStr_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module hlds.hlds_out.hlds_out_pred.
