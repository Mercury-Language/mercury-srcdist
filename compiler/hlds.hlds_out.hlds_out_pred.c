/*
** Automatically generated from `hlds_out_pred.m'
** by the Mercury compiler,
** version rotd-2021-07-19
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_pred__type_ctor_info_table_locn_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_ordinal_ordered_write_which_modes_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_name_ordered_write_which_modes_0[2];

static const MR_Integer hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__functor_number_map_write_which_modes_0[2];

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc_arg_info__1195__1_6_p_0(
  MR_Word VarSet_14,
  MR_Word VarNamePrint_15,
  MR_Word HeadVar__3_43,
  MR_Word HeadVar__4_44);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_8_p_0(
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word VarNamePrint_11,
  MR_Word VarSet_12,
  MR_Word ConstraintId_13,
  MR_Word ProgConstraint_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word TVarSet_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_info_5_p_0(
  MR_Word Stream_6,
  MR_Word TVarSet_7,
  MR_Word ArgInfo_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_6_p_0(
  MR_Word Stream_7,
  MR_Word CoveragePointInfo_8,
  MR_Integer STATE_VARIABLE_SlotNum_0_13,
  MR_Integer * STATE_VARIABLE_SlotNum_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_6_p_0(
  MR_Word Stream_7,
  MR_Word CallSiteStaticData_8,
  MR_Integer STATE_VARIABLE_SlotNum_0_16,
  MR_Integer * STATE_VARIABLE_SlotNum_17);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_8_p_0(
  MR_Word Stream_9,
  MR_Word VarSet_10,
  MR_Word VarNamePrint_11,
  MR_Integer Indent_12,
  MR_Word OldVar_13,
  MR_Word NewVars_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_var_info_9_p_0(
  MR_Word Stream_10,
  MR_Word VarSet_11,
  MR_Word TVarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word RttiVarMaps_14,
  MR_Integer Indent_15,
  MR_Word Var_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_9_p_0(
  MR_Word Stream_10,
  MR_Word VarSet_11,
  MR_Word TVarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word RttiVarMaps_14,
  MR_Integer Indent_15,
  MR_Word Constraint_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_type_info_locn_9_p_0(
  MR_Word Stream_10,
  MR_Word VarSet_11,
  MR_Word TVarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word RttiVarMaps_14,
  MR_Integer Indent_15,
  MR_Word TVar_16);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_obsolete_in_favour_of_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word ObsoleteInFavourOf_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word VarNamePrint_4,
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo_7,
  MR_Word HeadVar__8_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Integer Indent_14,
  MR_Word VarNamePrint_15,
  MR_Word ModuleInfo_16,
  MR_Word PredId_17,
  MR_Word PredInfo_18,
  MR_Integer ProcId_19,
  MR_Word ProcInfo_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_deleted_callee_set_4_p_0(
  MR_Word Stream_5,
  MR_Word DeletedCallCalleeSet_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_arg_info_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_arg_info_10_p_0(
  MR_Word Stream_11,
  MR_String DumpOptions_12,
  MR_Integer Indent_13,
  MR_Word VarSet_14,
  MR_Word VarNamePrint_15,
  MR_Word MaybeArgLives_16,
  MR_Word RegR_HeadVars_17,
  MR_Word MaybeArgInfos_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_opt_info_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_opt_info_11_p_0(
  MR_Word Stream_12,
  MR_String DumpOptions_13,
  MR_Integer Indent_14,
  MR_Word VarSet_15,
  MR_Word TVarSet_16,
  MR_Word VarNamePrint_17,
  MR_Word MaybeStructureSharing_18,
  MR_Word MaybeStructureReuse_19,
  MR_Word MaybeUntupleInfo_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_termination_info_6_p_0(
  MR_Word Stream_7,
  MR_String DumpOptions_8,
  MR_Word MaybeArgSize_9,
  MR_Word MaybeTermination_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_deep_profiling_info_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word MaybeDeepProfileInfo_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_4_p_0(
  MR_Word Stream_5,
  MR_Word ProcStatic_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_tabling_info_9_p_0(
  MR_Word Stream_10,
  MR_Word VarSet_11,
  MR_Word TVarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word EvalMethod_14,
  MR_Word MaybeProcTableIOInfo_15,
  MR_Word MaybeCallTableTip_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_flags_7_p_0(
  MR_Word Stream_8,
  MR_Word CanProcess_9,
  MR_Word IsAddressTaken_10,
  MR_Word HasParallelConj_11,
  MR_Word HasUserEvent_12);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_7_p_0(
  MR_Word Stream_8,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Integer Indent_11,
  MR_Word StackSlots_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_8_p_0(
  MR_Word Stream_9,
  MR_Word VarSet_10,
  MR_Word TVarSet_11,
  MR_Word VarNamePrint_12,
  MR_Integer Indent_13,
  MR_Word RttiVarMaps_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_14_p_0(
  MR_Word Info_15,
  MR_Word Stream_16,
  MR_Word Lang_17,
  MR_Word ModuleInfo_18,
  MR_Word PredId_19,
  MR_Word PredOrFunc_20,
  MR_Word VarSet_21,
  MR_Word TypeQual_22,
  MR_Word VarNamePrint_23,
  MR_Integer Indent_24,
  MR_Word HeadVarsVector_25,
  MR_Word Clauses_26);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_loop_15_p_0(
  MR_Word Info_16,
  MR_Word Stream_17,
  MR_Word Lang_18,
  MR_Word ModuleInfo_19,
  MR_Word PredId_20,
  MR_Word PredOrFunc_21,
  MR_Word VarSet_22,
  MR_Word TypeQual_23,
  MR_Word VarNamePrint_24,
  MR_Integer Indent_25,
  MR_Word HeadTerms_26,
  MR_Word Clauses_27,
  MR_Integer ClauseNum_28);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_head_9_p_0(
  MR_Word Stream_10,
  MR_Word ModuleInfo_11,
  MR_Word VarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word PredId_14,
  MR_Word PredOrFunc_15,
  MR_Word HeadTerms_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_13_p_0(
  MR_Word Stream_1,
  MR_Word ModuleInfo_2,
  MR_Word Lang_3,
  MR_Word VarSet_4,
  MR_Word VarNamePrint_5,
  MR_Word WriteWhichModes_6,
  MR_Word PredId_7,
  MR_Word PredOrFunc_8,
  MR_Word HeadVar__9_9,
  MR_Word Context_10,
  MR_Word HeadTerms_11);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_13_p_0(
  MR_Word Stream_14,
  MR_Word ModuleInfo_15,
  MR_Word Lang_16,
  MR_Word VarSet_17,
  MR_Word VarNamePrint_18,
  MR_Word WriteWhichModes_19,
  MR_Word PredId_20,
  MR_Word PredOrFunc_21,
  MR_Integer ProcId_22,
  MR_Word Context_23,
  MR_Word HeadTerms_24);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(
  MR_Word Info_3,
  MR_Word * ClausesInfo_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_origin_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_origin_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word Origin_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_proc_var_name_remap_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_Word VarSet_9,
  MR_Word VarNameRemap_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_name_remap_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Word Head_9,
  MR_Word Tail_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_types_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_types_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_types_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_types_12_p_0(
  MR_Word Stream_13,
  MR_Integer Indent_14,
  MR_Word VarSet_15,
  MR_Word TVarSet_16,
  MR_Word VarNamePrint_17,
  MR_Word RttiVarMaps_18,
  MR_Word ProofMap_19,
  MR_Word ConstraintMap_20,
  MR_Word ExternalTypeParams_21,
  MR_Word VarTypes_22);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_7_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word VarNamePrint_10,
  MR_Word VarSet_11,
  MR_Word ConstraintMap_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_8_p_0(
  MR_Word Stream_9,
  MR_Word VarSet_10,
  MR_Word TVarSet_11,
  MR_Word VarNamePrint_12,
  MR_Integer Indent_13,
  MR_Word VarTypes_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_loop_9_p_0(
  MR_Word Stream_1,
  MR_Word VarSet_2,
  MR_Word TypeVarSet_3,
  MR_Word VarNamePrint_4,
  MR_Word VarTypes_5,
  MR_Integer Indent_6,
  MR_Word HeadVar__7_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_markers_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_markers_4_p_0(
  MR_Word Stream_5,
  MR_Word Markers_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__find_filled_in_procs_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_1[10][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_2[5][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_3[2][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_4[3][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_5[2][11];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_6[3][12];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_7[4][9];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_9[1][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_10[3][8];


/* sealed */ struct hlds__hlds_out__hlds_out_pred__vector_common_type_8_0_s {
  const MR_String hlds__hlds_out__hlds_out_pred__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_pred__vector_common_type_8_0_s hlds__hlds_out__hlds_out_pred_vector_common_8[54];



static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_pred_markers_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_clause_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_stack_slots_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_3[2][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "::"))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_5[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_6[3][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_7[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_9[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_10[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_arg_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_pred__type_ctor_info_table_locn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct hlds__hlds_out__hlds_out_pred__vector_common_type_8_0_s hlds__hlds_out__hlds_out_pred_vector_common_8[54] = {
  /* row 0 */   {     (MR_String) "std get predicate" },
  /* row 1 */   {     (MR_String) "std set predicate" },
  /* row 2 */   {     (MR_String) "io get predicate" },
  /* row 3 */   {     (MR_String) "io set predicate" },
  /* row 4 */   {     (MR_String) "constant get predicate" },
  /* row 5 */   {     (MR_String) "constant secret set predicate" },
  /* row 6 */   {     (MR_String) "unsafe get predicate" },
  /* row 7 */   {     (MR_String) "unsafe set predicate" },
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
  /* row 24 */   {     (MR_String) "int64" },
  /* row 25 */   {     (MR_String) "uint64" },
  /* row 26 */   {     (MR_String) "stub" },
  /* row 27 */   {     (MR_String) "builtin_stub" },
  /* row 28 */   {     (MR_String) "infer_type" },
  /* row 29 */   {     (MR_String) "infer_modes" },
  /* row 30 */   {     (MR_String) "no_pred_decl" },
  /* row 31 */   {     (MR_String) "no_determinism_warning" },
  /* row 32 */   {     (MR_String) "inline" },
  /* row 33 */   {     (MR_String) "no_inline" },
  /* row 34 */   {     (MR_String) "heuristic_inline" },
  /* row 35 */   {     (MR_String) "consider_used" },
  /* row 36 */   {     (MR_String) "class_method" },
  /* row 37 */   {     (MR_String) "class_instance_method" },
  /* row 38 */   {     (MR_String) "named_class_instance_method" },
  /* row 39 */   {     (MR_String) "impure" },
  /* row 40 */   {     (MR_String) "semipure" },
  /* row 41 */   {     (MR_String) "promise_pure" },
  /* row 42 */   {     (MR_String) "promise_semipure" },
  /* row 43 */   {     (MR_String) "promise_equivalent_clauses" },
  /* row 44 */   {     (MR_String) "terminates" },
  /* row 45 */   {     (MR_String) "does_not_terminate" },
  /* row 46 */   {     (MR_String) "check_termination" },
  /* row 47 */   {     (MR_String) "calls_are_fully_qualified" },
  /* row 48 */   {     (MR_String) "mode_check_clauses" },
  /* row 49 */   {     (MR_String) "mutable_access_pred" },
  /* row 50 */   {     (MR_String) "has_require_scope" },
  /* row 51 */   {     (MR_String) "has_incomplete_switch" },
  /* row 52 */   {     (MR_String) "has_format_call" },
  /* row 53 */   {     (MR_String) "fact_table_semantic_errors" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_pred__type_ctor_info_table_locn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_0 = {
  (MR_String) "write_actual_modes",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_1 = {
  (MR_String) "write_declared_modes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_ordinal_ordered_write_which_modes_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_pred",
  (MR_String) "write_which_modes",
  {     hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_name_ordered_write_which_modes_0 },
  {     hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_ordinal_ordered_write_which_modes_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__functor_number_map_write_which_modes_0,

};

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc_arg_info__1195__1_6_p_0(
  MR_Word VarSet_14,
  MR_Word VarNamePrint_15,
  MR_Word HeadVar__3_43,
  MR_Word HeadVar__4_44)
{
  parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_14, VarNamePrint_15, HeadVar__3_43, HeadVar__4_44);
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
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
hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_8_p_0(
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word VarNamePrint_11,
  MR_Word VarSet_12,
  MR_Word ConstraintId_13,
  MR_Word ProgConstraint_14)
{
  {
    MR_Word ConstraintType_31;
    MR_Word GoalId_32;
    MR_Integer N_33;
    MR_Char ConstraintTypeChar_34;
    MR_Integer GoalIdNum_35;
    MR_String Var_48;
    MR_String Var_58;
    MR_String Var_68;

    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_9, Indent_10);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% ");
    ConstraintType_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ConstraintId_13, (MR_Integer) 0))) & (MR_Integer) 1);
    GoalId_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintId_13, (MR_Integer) 1))));
    N_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConstraintId_13, (MR_Integer) 2))));
    switch (ConstraintType_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ConstraintTypeChar_34 = (MR_Char) 69;
        break;
      case (MR_Integer) 0:
        ConstraintTypeChar_34 = (MR_Char) 65;
        break;
    }
    GoalIdNum_35 = (MR_Integer) (GoalId_32);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
    mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), ConstraintTypeChar_34, &Var_48);
    mercury__io__write_string_4_p_0(Stream_9, Var_48);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), GoalIdNum_35, &Var_58);
    mercury__io__write_string_4_p_0(Stream_9, Var_58);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), N_33, &Var_68);
    mercury__io__write_string_4_p_0(Stream_9, Var_68);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ": ");
    parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(VarSet_12, VarNamePrint_11, ProgConstraint_14, Stream_9);
    mercury__io__nl_3_p_0(Stream_9);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word TVarSet_7,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TVar_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Locn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_String TVarStr_11;

    TVarStr_11 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_7, (MR_Integer) 1, TVar_8);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% typeinfo for ");
    mercury__io__write_string_4_p_0(Stream_6, TVarStr_11);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " -> ");
    if (((MR_tag((MR_Word) Locn_9)) == (MR_Integer) 0))
    {
      MR_Integer N_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Locn_9, (MR_Integer) 0))));
      MR_String Var_64;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "direct in register ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), N_12, &Var_64);
      mercury__io__write_string_4_p_0(Stream_6, Var_64);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
    }
    else
    {
      MR_Integer O_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Locn_9, (MR_Integer) 1))));
      MR_Integer N_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Locn_9, (MR_Integer) 0))));
      MR_String Var_43;
      MR_String Var_53;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "indirect from register ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), N_34, &Var_43);
      mercury__io__write_string_4_p_0(Stream_6, Var_43);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", offset ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), O_13, &Var_53);
      mercury__io__write_string_4_p_0(Stream_6, Var_53);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_info_5_p_0(
  MR_Word Stream_6,
  MR_Word TVarSet_7,
  MR_Word ArgInfo_8)
{
  {
    MR_Integer HeadVarNum_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgInfo_8, (MR_Integer) 0))));
    MR_String HeadVarName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), ArgInfo_8, (MR_Integer) 1))));
    MR_Integer SlotNum_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgInfo_8, (MR_Integer) 2))));
    MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfo_8, (MR_Integer) 3))));
    MR_String TVarStr_14;
    MR_String Var_35;
    MR_String Var_45;

    TVarStr_14 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_7, (MR_Integer) 1, Type_13);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% ");
    mercury__io__write_string_4_p_0(Stream_6, HeadVarName_11);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " / ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), HeadVarNum_10, &Var_35);
    mercury__io__write_string_4_p_0(Stream_6, Var_35);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " in slot ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), SlotNum_12, &Var_45);
    mercury__io__write_string_4_p_0(Stream_6, Var_45);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", type ");
    mercury__io__write_string_4_p_0(Stream_6, TVarStr_14);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_6_p_0(
  MR_Word Stream_7,
  MR_Word CoveragePointInfo_8,
  MR_Integer STATE_VARIABLE_SlotNum_0_13,
  MR_Integer * STATE_VARIABLE_SlotNum_14)
{
  {
    MR_Word RevGoalPath_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CoveragePointInfo_8, (MR_Integer) 0))));
    MR_Word PointType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CoveragePointInfo_8, (MR_Integer) 1))));
    MR_String Var_23;
    MR_String Var_26;
    MR_String Var_33;

    Var_23 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(RevGoalPath_11);
    switch (PointType_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case ((int) MR_cp_type_branch_arm):
        Var_26 = (MR_String) "branch arm";
        break;
      case ((int) MR_cp_type_coverage_after):
        Var_26 = (MR_String) "after";
        break;
    }
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% coverage point slot ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), STATE_VARIABLE_SlotNum_0_13, &Var_33);
    mercury__io__write_string_4_p_0(Stream_7, Var_33);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ": goal path <");
    mercury__io__write_string_4_p_0(Stream_7, Var_23);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">, type ");
    mercury__io__write_string_4_p_0(Stream_7, Var_26);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    *STATE_VARIABLE_SlotNum_14 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SlotNum_0_13 + (MR_Unsigned) 1);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_6_p_0(
  MR_Word Stream_7,
  MR_Word CallSiteStaticData_8,
  MR_Integer STATE_VARIABLE_SlotNum_0_16,
  MR_Integer * STATE_VARIABLE_SlotNum_17)
{
  {
    MR_String Var_109;

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% call site static slot ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), STATE_VARIABLE_SlotNum_0_16, &Var_109);
    mercury__io__write_string_4_p_0(Stream_7, Var_109);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    switch (MR_tag((MR_Word) CallSiteStaticData_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CalleeRttiProcLabel_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallSiteStaticData_8, (MR_Integer) 0))));
          MR_String TypeSubst_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), CallSiteStaticData_8, (MR_Integer) 1))));
          MR_String FileName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), CallSiteStaticData_8, (MR_Integer) 2))));
          MR_Integer LineNumber_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CallSiteStaticData_8, (MR_Integer) 3))));
          MR_Word GoalPath_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallSiteStaticData_8, (MR_Integer) 4))));
          MR_String Var_52;
          MR_String Var_147;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% normal call to ");
          mercury__io__write_line_4_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0), Stream_7, ((MR_Box) (CalleeRttiProcLabel_11)));
          Var_52 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_15);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% type subst <");
          mercury__io__write_string_4_p_0(Stream_7, TypeSubst_12);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">, goal path <");
          mercury__io__write_string_4_p_0(Stream_7, Var_52);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">\n");
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% filename <");
          mercury__io__write_string_4_p_0(Stream_7, FileName_13);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">, line number <");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), LineNumber_14, &Var_147);
          mercury__io__write_string_4_p_0(Stream_7, Var_147);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_101;
          MR_String FileName_103 = ((MR_String) ((MR_hl_field(MR_mktag(1), CallSiteStaticData_8, (MR_Integer) 0))));
          MR_Integer LineNumber_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), CallSiteStaticData_8, (MR_Integer) 1))));
          MR_Word GoalPath_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallSiteStaticData_8, (MR_Integer) 2))));
          MR_String Var_123;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% special call\n");
          Var_101 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_105);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% filename <");
          mercury__io__write_string_4_p_0(Stream_7, FileName_103);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">, line number <");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), LineNumber_104, &Var_123);
          mercury__io__write_string_4_p_0(Stream_7, Var_123);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">, goal path <");
          mercury__io__write_string_4_p_0(Stream_7, Var_101);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">\n");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_75;
          MR_String FileName_77 = ((MR_String) ((MR_hl_field(MR_mktag(2), CallSiteStaticData_8, (MR_Integer) 0))));
          MR_Integer LineNumber_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), CallSiteStaticData_8, (MR_Integer) 1))));
          MR_Word GoalPath_79 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallSiteStaticData_8, (MR_Integer) 2))));
          MR_String Var_178;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% higher order call\n");
          Var_75 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_79);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% filename <");
          mercury__io__write_string_4_p_0(Stream_7, FileName_77);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">, line number <");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), LineNumber_78, &Var_178);
          mercury__io__write_string_4_p_0(Stream_7, Var_178);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">, goal path <");
          mercury__io__write_string_4_p_0(Stream_7, Var_75);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">\n");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CallSiteStaticData_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_88;
              MR_String FileName_90 = ((MR_String) ((MR_hl_field(MR_mktag(3), CallSiteStaticData_8, (MR_Integer) 1))));
              MR_Integer LineNumber_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), CallSiteStaticData_8, (MR_Integer) 2))));
              MR_Word GoalPath_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CallSiteStaticData_8, (MR_Integer) 3))));
              MR_String Var_161;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% method call\n");
              Var_88 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_92);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% filename <");
              mercury__io__write_string_4_p_0(Stream_7, FileName_90);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">, line number <");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), LineNumber_91, &Var_161);
              mercury__io__write_string_4_p_0(Stream_7, Var_161);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">, goal path <");
              mercury__io__write_string_4_p_0(Stream_7, Var_88);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">\n");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_41;
              MR_String FileName_63 = ((MR_String) ((MR_hl_field(MR_mktag(3), CallSiteStaticData_8, (MR_Integer) 1))));
              MR_Integer LineNumber_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), CallSiteStaticData_8, (MR_Integer) 2))));
              MR_Word GoalPath_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CallSiteStaticData_8, (MR_Integer) 3))));
              MR_String Var_195;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% callback\n");
              Var_41 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_65);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% filename <");
              mercury__io__write_string_4_p_0(Stream_7, FileName_63);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">, line number <");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), LineNumber_64, &Var_195);
              mercury__io__write_string_4_p_0(Stream_7, Var_195);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">, goal path <");
              mercury__io__write_string_4_p_0(Stream_7, Var_41);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ">\n");
            }
            break;
        }
        break;
    }
    *STATE_VARIABLE_SlotNum_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SlotNum_0_16 + (MR_Unsigned) 1);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_8_p_0(
  MR_Word Stream_9,
  MR_Word VarSet_10,
  MR_Word VarNamePrint_11,
  MR_Integer Indent_12,
  MR_Word OldVar_13,
  MR_Word NewVars_14)
{
  {
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_9, Indent_12);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "%\t");
    parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, VarNamePrint_11, OldVar_13, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\t-> ");
    parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, VarNamePrint_11, NewVars_14, Stream_9);
    mercury__io__nl_3_p_0(Stream_9);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_var_info_9_p_0(
  MR_Word Stream_10,
  MR_Word VarSet_11,
  MR_Word TVarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word RttiVarMaps_14,
  MR_Integer Indent_15,
  MR_Word Var_16)
{
  {
    MR_Integer VarNum_18;
    MR_String VarStr_19;
    MR_Word VarInfo_20;
    MR_String Var_49;

    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_16, &VarNum_18);
    VarStr_19 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, VarNamePrint_13, Var_16);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_10, Indent_15);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% ");
    mercury__io__write_string_4_p_0(Stream_10, VarStr_19);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) " (number ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), VarNum_18, &Var_49);
    mercury__io__write_string_4_p_0(Stream_10, Var_49);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") -> ");
    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(RttiVarMaps_14, Var_16, &VarInfo_20);
    switch (MR_tag((MR_Word) VarInfo_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_out.hlds_out_pred.write_rtti_var_info\'/9", (MR_String) "non rtti var");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Type_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarInfo_20, (MR_Integer) 0))));

          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "type_info for ");
          parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TVarSet_12, VarNamePrint_13, Type_21, Stream_10);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Constraint_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), VarInfo_20, (MR_Integer) 0))));

          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "typeclass_info for ");
          parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(TVarSet_12, VarNamePrint_13, Constraint_22, Stream_10);
        }
        break;
    }
    mercury__io__nl_3_p_0(Stream_10);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_9_p_0(
  MR_Word Stream_10,
  MR_Word VarSet_11,
  MR_Word TVarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word RttiVarMaps_14,
  MR_Integer Indent_15,
  MR_Word Constraint_16)
{
  {
    MR_Word Var_18;

    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_10, Indent_15);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% ");
    parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(TVarSet_12, VarNamePrint_13, Constraint_16, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) " -> ");
    hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(RttiVarMaps_14, Constraint_16, &Var_18);
    parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, VarNamePrint_13, Var_18, Stream_10);
    mercury__io__nl_3_p_0(Stream_10);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_type_info_locn_9_p_0(
  MR_Word Stream_10,
  MR_Word VarSet_11,
  MR_Word TVarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word RttiVarMaps_14,
  MR_Integer Indent_15,
  MR_Word TVar_16)
{
  {
    MR_Integer TVarNum_18;
    MR_Word Locn_19;
    MR_Word Var_20;
    MR_Integer VarNum_22;

    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_10, Indent_15);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% ");
    parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_12, VarNamePrint_13, TVar_16, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) " (number ");
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVar_16, &TVarNum_18);
    mercury__io__write_int_4_p_0(Stream_10, TVarNum_18);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) " -> ");
    hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_14, TVar_16, &Locn_19);
    if (((MR_tag((MR_Word) Locn_19)) == (MR_Integer) 0))
    {
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Locn_19, (MR_Integer) 0))));
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "type_info(");
      parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, VarNamePrint_13, Var_20, Stream_10);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
    }
    else
    {
      MR_Integer Index_21;

      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Locn_19, (MR_Integer) 0))));
      Index_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Locn_19, (MR_Integer) 1))));
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "typeclass_info(");
      parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, VarNamePrint_13, Var_20, Stream_10);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
      mercury__io__write_int_4_p_0(Stream_10, Index_21);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
    }
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) " (number ");
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_20, &VarNum_22);
    mercury__io__write_int_4_p_0(Stream_10, VarNum_22);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
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
    MR_Word HeadTerm_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Mode_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_11;
    MR_Word Var_13;
    MR_Word Var_14;

    Var_14 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(Lang_5, Context_6, Mode_8);
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (HeadTerm_7));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_13));
    }
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[1]), Var_11, Context_6, &AnnotatedTerm_9);
    return AnnotatedTerm_9;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_obsolete_in_favour_of_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word ObsoleteInFavourOf_8)
{
  {
    MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ObsoleteInFavourOf_8, (MR_Integer) 0))));
    MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ObsoleteInFavourOf_8, (MR_Integer) 1))));
    MR_String Var_19;
    MR_String Var_29;

    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_6, Indent_7);
    Var_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_10);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "%    ");
    mercury__io__write_string_4_p_0(Stream_6, Var_19);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "/");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), Arity_11, &Var_29);
    mercury__io__write_string_4_p_0(Stream_6, Var_29);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  *HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_pred_vector_common_8[26 + HeadVar__1_1]))->hlds__hlds_out__hlds_out_pred__vector_common_type_8_0__vct_8_f_0;
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_5_p_0(
  MR_Word Stream_6,
  MR_Word TVarSet_7,
  MR_Word StepDesc_8)
{
  {
    MR_String VarName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), StepDesc_8, (MR_Integer) 0))));
    MR_Word TrieStep_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StepDesc_8, (MR_Integer) 1))));
    MR_String StepDescStr_12;

    switch (MR_tag((MR_Word) TrieStep_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(TrieStep_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            StepDescStr_12 = (MR_String) "dummy";
            break;
          case (MR_Integer) 1:
            StepDescStr_12 = (MR_String) "char";
            break;
          case (MR_Integer) 2:
            StepDescStr_12 = (MR_String) "string";
            break;
          case (MR_Integer) 3:
            StepDescStr_12 = (MR_String) "float";
            break;
          case (MR_Integer) 4:
            StepDescStr_12 = (MR_String) "foreign_enum";
            break;
          case (MR_Integer) 5:
            StepDescStr_12 = (MR_String) "typeinfo";
            break;
          case (MR_Integer) 6:
            StepDescStr_12 = (MR_String) "typeclassinfo";
            break;
          case (MR_Integer) 7:
            StepDescStr_12 = (MR_String) "promise_implied";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), TrieStep_11, (MR_Integer) 0))) & (MR_Integer) 15);

          StepDescStr_12 = ((&hlds__hlds_out__hlds_out_pred_vector_common_8[16 + Var_61]))->hlds__hlds_out__hlds_out_pred__vector_common_type_8_0__vct_8_f_0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer N_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), TrieStep_11, (MR_Integer) 0))));
          MR_String Var_48;
          MR_String Var_49;

          Var_49 = mercury__string__int_to_string_1_f_0(N_30);
          Var_48 = mercury__string__f_43_43_2_f_0(Var_49, (MR_String) ")");
          StepDescStr_12 = mercury__string__f_43_43_2_f_0((MR_String) "enum(", Var_48);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Type_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TrieStep_11, (MR_Integer) 0))));
          MR_Word IsPoly_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TrieStep_11, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
          MR_Word IsAddr_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TrieStep_11, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_String IsPolyStr_34;
          MR_String IsAddrStr_35;
          MR_String Var_37;
          MR_String Var_38;
          MR_String Var_40;
          MR_String Var_42;
          MR_String Var_43;
          MR_String Var_45;

          switch (IsPoly_32) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              IsPolyStr_34 = (MR_String) "mono";
              break;
            case (MR_Integer) 1:
              IsPolyStr_34 = (MR_String) "poly";
              break;
          }
          switch (IsAddr_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              IsAddrStr_35 = (MR_String) "addr";
              break;
            case (MR_Integer) 0:
              IsAddrStr_35 = (MR_String) "value";
              break;
          }
          Var_38 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_7, (MR_Integer) 1, Type_31);
          Var_45 = mercury__string__f_43_43_2_f_0(IsAddrStr_35, (MR_String) ")");
          Var_43 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_45);
          Var_42 = mercury__string__f_43_43_2_f_0(IsPolyStr_34, Var_43);
          Var_40 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_42);
          Var_37 = mercury__string__f_43_43_2_f_0(Var_38, Var_40);
          StepDescStr_12 = mercury__string__f_43_43_2_f_0((MR_String) "general(", Var_37);
        }
        break;
    }
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, VarName_10);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ": ");
    mercury__io__write_string_4_p_0(Stream_6, StepDescStr_12);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_obsolete_in_favour_of_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word Lang_12,
  MR_Word ModuleInfo_13,
  MR_Integer Indent_14,
  MR_Word PredId_15,
  MR_Word PredInfo_16)
{
  {
    MR_bool succeeded;
    MR_Word Module_18;
    MR_String PredName_19;
    MR_Word PredOrFunc_20;
    MR_Word ArgTypes_21;
    MR_Word ExistQVars_22;
    MR_Word TVarSet_23;
    MR_Word ClausesInfo_24;
    MR_Word PredStatus_25;
    MR_Word Markers_26;
    MR_Word ClassContext_27;
    MR_Word ProofMap_28;
    MR_Word ConstraintMap_29;
    MR_Word Purity_30;
    MR_Word ExternalTypeParams_31;
    MR_Word VarNameRemap_32;
    MR_String DumpOptions_33;
    MR_Word VarNamePrint_34;
    MR_Word ProcTable_35;
    MR_Word ProcIdsInfos_36;
    MR_Word FilledInProcIdsInfos_37;

    Module_18 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_16);
    PredName_19 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_16);
    PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_16);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_16, &ArgTypes_21);
    hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_16, &ExistQVars_22);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_16, &TVarSet_23);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_16, &ClausesInfo_24);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_16, &PredStatus_25);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_16, &Markers_26);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_16, &ClassContext_27);
    hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(PredInfo_16, &ProofMap_28);
    hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(PredInfo_16, &ConstraintMap_29);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_16, &Purity_30);
    hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(PredInfo_16, &ExternalTypeParams_31);
    hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo_16, &VarNameRemap_32);
    DumpOptions_33 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 0))));
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_33, (MR_Char) 118);
    if (succeeded)
      VarNamePrint_34 = (MR_Integer) 1;
    else
      VarNamePrint_34 = (MR_Integer) 0;
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_16, &ProcTable_35);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_35, &ProcIdsInfos_36);
    hlds__hlds_out__hlds_out_pred__find_filled_in_procs_2_p_0(ProcIdsInfos_36, &FilledInProcIdsInfos_37);
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_33, (MR_Char) 67);
    if (succeeded)
    {
      MR_Word VarSet_40;
      MR_Word VarTypes_43;
      MR_Word HeadVars_44;
      MR_Word ClausesRep_45;
      MR_Word RttiVarMaps_47;
      MR_Integer PredIdInt_50;
      MR_String PredOrFuncStr_51;
      MR_String PredStatusStr_52;
      MR_Word GoalType_53;
      MR_Word MaybeObsoleteInFavourOf_54;
      MR_Word Clauses_56;
      MR_Word Origin_60;
      MR_String Var_116;

      switch (PredOrFunc_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word FuncArgTypes_38;
            MR_Word FuncRetType_39;
            MR_Word Var_65;
            MR_Box conv0_FuncRetType_39;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_21, &FuncArgTypes_38, &conv0_FuncRetType_39);
            FuncRetType_39 = ((MR_Word) (conv0_FuncRetType_39));
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Module_18));
              MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (PredName_19));
            }
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_type_12_p_0(Stream_11, TVarSet_23, VarNamePrint_34, ExistQVars_22, Var_65, FuncArgTypes_38, FuncRetType_39, (MR_Word) ((MR_Unsigned) 0U), Purity_30, ClassContext_27);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_68;

            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Module_18));
              MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (PredName_19));
            }
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_type_11_p_0(Stream_11, TVarSet_23, VarNamePrint_34, ExistQVars_22, Var_68, ArgTypes_21, (MR_Word) ((MR_Unsigned) 0U), Purity_30, ClassContext_27);
          }
          break;
      }
      VarSet_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo_24, (MR_Integer) 0))));
      VarTypes_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo_24, (MR_Integer) 3))));
      HeadVars_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo_24, (MR_Integer) 4))));
      ClausesRep_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo_24, (MR_Integer) 5))));
      RttiVarMaps_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo_24, (MR_Integer) 7))));
      hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_15, &PredIdInt_50);
      PredOrFuncStr_51 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_20);
      PredStatusStr_52 = hlds__hlds_out__hlds_out_util__pred_import_status_to_string_1_f_0(PredStatus_25);
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_16, &GoalType_53);
      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_11, Indent_14);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "% pred id: ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), PredIdInt_50, &Var_116);
      mercury__io__write_string_4_p_0(Stream_11, Var_116);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) ", category: ");
      mercury__io__write_string_4_p_0(Stream_11, PredOrFuncStr_51);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) ", status ");
      mercury__io__write_string_4_p_0(Stream_11, PredStatusStr_52);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "% goal_type: ");
      mercury__io__write_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_goal_type_0), Stream_11, ((MR_Box) (GoalType_53)));
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
      hlds__hlds_out__hlds_out_pred__write_pred_markers_4_p_0(Stream_11, Markers_26);
      hlds__hlds_pred__pred_info_get_obsolete_in_favour_of_2_p_0(PredInfo_16, &MaybeObsoleteInFavourOf_54);
      if (!((MaybeObsoleteInFavourOf_54 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word ObsoleteInFavourOf_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeObsoleteInFavourOf_54, (MR_Integer) 0))));
        MR_Word Var_90;
        MR_Box conv1_STATE_VARIABLE_IO_91_91;

        hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_11, Indent_14);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "% obsolete in favour of one of\n");
        {
          Var_90 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_10[2]));
          MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_pred_9_p_0_1));
          MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (Stream_11));
          MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (Indent_14));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_90, ObsoleteInFavourOf_55, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_91_91);
      }
      hlds__hlds_out__hlds_out_pred__write_pred_types_12_p_0(Stream_11, Indent_14, VarSet_40, TVarSet_23, VarNamePrint_34, RttiVarMaps_47, ProofMap_28, ConstraintMap_29, ExternalTypeParams_31, VarTypes_43);
      hlds__hlds_out__hlds_out_pred__write_pred_proc_var_name_remap_6_p_0(Stream_11, Indent_14, VarSet_40, VarNameRemap_32);
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_45, &Clauses_56);
      succeeded = (Clauses_56 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (FilledInProcIdsInfos_37 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word InfoForClauses_59;

        hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(Info_10, &InfoForClauses_59);
        hlds__hlds_out__hlds_out_pred__write_clauses_14_p_0(InfoForClauses_59, Stream_11, Lang_12, ModuleInfo_13, PredId_15, PredOrFunc_20, VarSet_40, (MR_Word) ((MR_Unsigned) 0U), VarNamePrint_34, Indent_14, HeadVars_44, Clauses_56);
      }
      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_16, &Origin_60);
      hlds__hlds_out__hlds_out_pred__write_origin_7_p_0(Stream_11, ModuleInfo_13, TVarSet_23, VarNamePrint_34, Origin_60);
    }
    hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(Info_10, Stream_11, Indent_14, VarNamePrint_34, ModuleInfo_13, PredId_15, PredInfo_16, FilledInProcIdsInfos_37);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_loop_10_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word VarNamePrint_4,
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo_7,
  MR_Word HeadVar__8_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer ProcId_28;
      MR_Word ProcInfo_29;
      MR_Word ProcIdsInfos_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__8_8, (MR_Integer) 1))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__8_8, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__8_8;

      ProcId_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0))));
      ProcInfo_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1))));
      hlds__hlds_out__hlds_out_pred__write_proc_11_p_0(Info_1, Stream_2, Indent_3, VarNamePrint_4, ModuleInfo_5, PredId_6, PredInfo_7, ProcId_28, ProcInfo_29);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__8_8 = ProcIdsInfos_30;
      HeadVar__8_8 = next_value_of_HeadVar__8_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Integer Indent_14,
  MR_Word VarNamePrint_15,
  MR_Word ModuleInfo_16,
  MR_Word PredId_17,
  MR_Word PredInfo_18,
  MR_Integer ProcId_19,
  MR_Word ProcInfo_20)
{
  {
    MR_bool succeeded;
    MR_Word TVarSet_22;
    MR_Word CanProcess_23;
    MR_Word VarSet_24;
    MR_Word VarTypes_25;
    MR_Word DeclaredDeterminism_26;
    MR_Word InferredDeterminism_27;
    MR_Word HeadVars_28;
    MR_Word HeadModes_29;
    MR_Word MaybeArgLives_30;
    MR_Word RegR_HeadVars_31;
    MR_Word MaybeArgInfos_32;
    MR_Word Goal_33;
    MR_Word MaybeArgSize_34;
    MR_Word MaybeTermination_35;
    MR_Word MaybeStructureSharing_36;
    MR_Word MaybeStructureReuse_37;
    MR_Word RttiVarMaps_38;
    MR_Word CseNoPullContexts_39;
    MR_Word EvalMethod_40;
    MR_Word DeletedCallCalleeSet_41;
    MR_Word IsAddressTaken_42;
    MR_Word HasParallelConj_43;
    MR_Word HasUserEvent_44;
    MR_Word MaybeProcTableIOInfo_45;
    MR_Word MaybeCallTableTip_46;
    MR_Word MaybeDeepProfileInfo_47;
    MR_Word MaybeUntupleInfo_48;
    MR_Word VarNameRemap_49;
    MR_Integer Indent1_50;
    MR_String DumpOptions_51;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_18, &TVarSet_22);
    hlds__hlds_pred__proc_info_get_can_process_2_p_0(ProcInfo_20, &CanProcess_23);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_20, &VarSet_24);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_20, &VarTypes_25);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_20, &DeclaredDeterminism_26);
    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_20, &InferredDeterminism_27);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_20, &HeadVars_28);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_20, &HeadModes_29);
    hlds__hlds_pred__proc_info_get_maybe_arglives_2_p_0(ProcInfo_20, &MaybeArgLives_30);
    hlds__hlds_pred__proc_info_get_reg_r_headvars_2_p_0(ProcInfo_20, &RegR_HeadVars_31);
    hlds__hlds_pred__proc_info_get_maybe_arg_info_2_p_0(ProcInfo_20, &MaybeArgInfos_32);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_20, &Goal_33);
    hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(ProcInfo_20, &MaybeArgSize_34);
    hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(ProcInfo_20, &MaybeTermination_35);
    hlds__hlds_pred__proc_info_get_structure_sharing_2_p_0(ProcInfo_20, &MaybeStructureSharing_36);
    hlds__hlds_pred__proc_info_get_structure_reuse_2_p_0(ProcInfo_20, &MaybeStructureReuse_37);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_20, &RttiVarMaps_38);
    hlds__hlds_pred__proc_info_get_cse_nopull_contexts_2_p_0(ProcInfo_20, &CseNoPullContexts_39);
    hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_20, &EvalMethod_40);
    hlds__hlds_pred__proc_info_get_deleted_call_callees_2_p_0(ProcInfo_20, &DeletedCallCalleeSet_41);
    hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(ProcInfo_20, &IsAddressTaken_42);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_20, &HasParallelConj_43);
    hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(ProcInfo_20, &HasUserEvent_44);
    hlds__hlds_pred__proc_info_get_maybe_proc_table_io_info_2_p_0(ProcInfo_20, &MaybeProcTableIOInfo_45);
    hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ProcInfo_20, &MaybeCallTableTip_46);
    hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ProcInfo_20, &MaybeDeepProfileInfo_47);
    hlds__hlds_pred__proc_info_get_maybe_untuple_info_2_p_0(ProcInfo_20, &MaybeUntupleInfo_48);
    hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(ProcInfo_20, &VarNameRemap_49);
    Indent1_50 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
    DumpOptions_51 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 0))));
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_51, (MR_Char) 120);
    if (succeeded)
    {
      MR_Integer PredIdInt_52;
      MR_Integer ProcIdInt_53;
      MR_String PredIdStr_54;
      MR_String DetismStr_55;
      MR_Word PredSymName_56;
      MR_Word PredOrFunc_57;
      MR_Word ModeVarSet_58;
      MR_Word PredStatus_62;
      MR_String Var_106;
      MR_String Var_133;
      MR_Word Var_112;
      MR_Integer Var_129;

      hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_17, &PredIdInt_52);
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_19, &ProcIdInt_53);
      PredIdStr_54 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(ModuleInfo_16, PredId_17);
      DetismStr_55 = parse_tree__prog_out__determinism_to_string_1_f_0(InferredDeterminism_27);
      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_13, Indent1_50);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% pred id ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), PredIdInt_52, &Var_133);
      mercury__io__write_string_4_p_0(Stream_13, Var_133);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) ": ");
      mercury__io__write_string_4_p_0(Stream_13, PredIdStr_54);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_13, Indent1_50);
      succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_20);
      if (succeeded)
      {
        MR_String Var_147;

        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% mode number ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), ProcIdInt_53, &Var_147);
        mercury__io__write_string_4_p_0(Stream_13, Var_147);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) " (");
        mercury__io__write_string_4_p_0(Stream_13, DetismStr_55);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")\n");
      }
      else
      {
        MR_String Var_161;

        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% mode number ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), ProcIdInt_53, &Var_161);
        mercury__io__write_string_4_p_0(Stream_13, Var_161);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) " (");
        mercury__io__write_string_4_p_0(Stream_13, DetismStr_55);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) ") INVALID MODE\n");
      }
      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_13, Indent_14);
      hlds__hlds_out__hlds_out_pred__write_var_types_8_p_0(Stream_13, VarSet_24, TVarSet_22, VarNamePrint_15, Indent_14, VarTypes_25);
      hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_8_p_0(Stream_13, VarSet_24, TVarSet_22, VarNamePrint_15, Indent_14, RttiVarMaps_38);
      hlds__hlds_out__hlds_out_pred__write_proc_flags_7_p_0(Stream_13, CanProcess_23, IsAddressTaken_42, HasParallelConj_43, HasUserEvent_44);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% cse_nopull_contexts: ");
      mercury__io__write_line_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[4]), Stream_13, ((MR_Box) (CseNoPullContexts_39)));
      hlds__hlds_out__hlds_out_pred__write_proc_tabling_info_9_p_0(Stream_13, VarSet_24, TVarSet_22, VarNamePrint_15, EvalMethod_40, MaybeProcTableIOInfo_45, MaybeCallTableTip_46);
      hlds__hlds_out__hlds_out_pred__write_proc_deep_profiling_info_6_p_0(Stream_13, VarSet_24, VarNamePrint_15, MaybeDeepProfileInfo_47);
      hlds__hlds_out__hlds_out_pred__write_proc_termination_info_6_p_0(Stream_13, DumpOptions_51, MaybeArgSize_34, MaybeTermination_35);
      hlds__hlds_out__hlds_out_pred__write_proc_opt_info_11_p_0(Stream_13, DumpOptions_51, Indent_14, VarSet_24, TVarSet_22, VarNamePrint_15, MaybeStructureSharing_36, MaybeStructureReuse_37, MaybeUntupleInfo_48);
      hlds__hlds_out__hlds_out_pred__write_proc_deleted_callee_set_4_p_0(Stream_13, DeletedCallCalleeSet_41);
      hlds__hlds_out__hlds_out_pred__write_pred_proc_var_name_remap_6_p_0(Stream_13, Indent_14, VarSet_24, VarNameRemap_49);
      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_13, Indent_14);
      Var_106 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_16, PredId_17);
      {
        PredSymName_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredSymName_56, 0) = ((MR_Box) (Var_106));
      }
      PredOrFunc_57 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_18);
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &ModeVarSet_58);
      switch (PredOrFunc_57) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word FuncHeadModes_60;
            MR_Word RetHeadMode_61;
            MR_Box conv0_RetHeadMode_61;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), HeadModes_29, &FuncHeadModes_60, &conv0_RetHeadMode_61);
            RetHeadMode_61 = ((MR_Word) (conv0_RetHeadMode_61));
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_9_p_0(Stream_13, (MR_Integer) 1, ModeVarSet_58, PredSymName_56, FuncHeadModes_60, RetHeadMode_61, DeclaredDeterminism_26);
          }
          break;
        case (MR_Integer) 0:
          parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_9_p_0(Stream_13, (MR_Integer) 1, ModeVarSet_58, PredSymName_56, HeadModes_29, (MR_Word) ((MR_Unsigned) 0U), DeclaredDeterminism_26);
          break;
      }
      hlds__hlds_out__hlds_out_pred__write_proc_arg_info_10_p_0(Stream_13, DumpOptions_51, Indent_14, VarSet_24, VarNamePrint_15, MaybeArgLives_30, RegR_HeadVars_31, MaybeArgInfos_32);
      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_18, &PredStatus_62);
      Var_112 = (MR_Word) (PredStatus_62);
      succeeded = (Var_112 == (MR_Word) ((MR_Unsigned) 8U));
      if (succeeded)
      {
        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_129);
        succeeded = (ProcId_19 == Var_129);
      }
      if (!(succeeded))
      {
        MR_Word StackSlots_63;
        MR_Word HeadTerms_64;

        hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ProcInfo_20, &StackSlots_63);
        hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_13, Indent_14);
        hlds__hlds_out__hlds_out_pred__write_stack_slots_7_p_0(Stream_13, VarSet_24, VarNamePrint_15, Indent_14, StackSlots_63);
        hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_13, Indent_14);
        mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_28, &HeadTerms_64);
        hlds__hlds_out__hlds_out_pred__write_clause_head_9_p_0(Stream_13, ModuleInfo_16, VarSet_24, VarNamePrint_15, PredId_17, PredOrFunc_57, HeadTerms_64);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) " :-\n");
        hlds__hlds_out__hlds_out_goal__write_goal_10_p_0(Info_12, Stream_13, ModuleInfo_16, VarSet_24, VarNamePrint_15, Indent1_50, (MR_String) ".\n", Goal_33);
      }
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_deleted_callee_set_4_p_0(
  MR_Word Stream_5,
  MR_Word DeletedCallCalleeSet_6)
{
  {
    MR_Word DeletedCallCallees_8;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DeletedCallCalleeSet_6, &DeletedCallCallees_8);
    if (!((DeletedCallCallees_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "% procedures called from deleted goals: ");
      mercury__io__write_line_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[8]), Stream_5, ((MR_Box) (DeletedCallCallees_8)));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_arg_info_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc_arg_info__1195__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_arg_info_10_p_0(
  MR_Word Stream_11,
  MR_String DumpOptions_12,
  MR_Integer Indent_13,
  MR_Word VarSet_14,
  MR_Word VarNamePrint_15,
  MR_Word MaybeArgLives_16,
  MR_Word RegR_HeadVars_17,
  MR_Word MaybeArgInfos_18)
{
  {
    MR_bool succeeded;
    MR_Word ArgInfos_21;

    if (!((MaybeArgLives_16 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ArgLives_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgLives_16, (MR_Integer) 0))));

      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_11, Indent_13);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "% arg lives: ");
      mercury__io__print_line_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[6]), Stream_11, ((MR_Box) (ArgLives_20)));
    }
    succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegR_HeadVars_17);
    if (succeeded)
    {
      MR_Word Var_31;
      MR_Word Var_33;

      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_11, Indent_13);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "% reg_r headvars: ");
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[3]));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_proc_arg_info_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (VarSet_14));
        MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (VarNamePrint_15));
      }
      Var_33 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegR_HeadVars_17);
      parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), Var_31, (MR_String) ", ", Var_33, Stream_11);
      mercury__io__nl_3_p_0(Stream_11);
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_12, (MR_Char) 65);
    if (succeeded)
    {
      succeeded = (MaybeArgInfos_18 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        ArgInfos_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgInfos_18, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_11, Indent_13);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "% arg_infos: ");
      mercury__io__print_line_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[7]), Stream_11, ((MR_Box) (ArgInfos_21)));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_opt_info_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_opt_info_11_p_0(
  MR_Word Stream_12,
  MR_String DumpOptions_13,
  MR_Integer Indent_14,
  MR_Word VarSet_15,
  MR_Word TVarSet_16,
  MR_Word VarNamePrint_17,
  MR_Word MaybeStructureSharing_18,
  MR_Word MaybeStructureReuse_19,
  MR_Word MaybeUntupleInfo_20)
{
  {
    MR_bool succeeded;
    MR_Word StructureSharing_22;
    MR_Word StructureReuse_25;

    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_13, (MR_Char) 83);
    if (succeeded)
    {
      succeeded = (MaybeStructureSharing_18 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        StructureSharing_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeStructureSharing_18, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word SharingAs_23;

      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_12, Indent_14);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% Structure sharing: \n");
      SharingAs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StructureSharing_22, (MR_Integer) 0))));
      parse_tree__prog_ctgc__dump_structure_sharing_domain_6_p_0(Stream_12, VarSet_15, TVarSet_16, SharingAs_23);
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_13, (MR_Char) 82);
    if (succeeded)
    {
      succeeded = (MaybeStructureReuse_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        StructureReuse_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeStructureReuse_19, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word ReuseAs_26;

      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_12, Indent_14);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% Structure reuse: \n");
      ReuseAs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StructureReuse_25, (MR_Integer) 0))));
      parse_tree__prog_ctgc__dump_structure_reuse_domain_6_p_0(Stream_12, VarSet_15, TVarSet_16, ReuseAs_26);
    }
    if (!((MaybeUntupleInfo_20 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word UntupleInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUntupleInfo_20, (MR_Integer) 0))));
      MR_Word UntupleMap_50 = (MR_Word) (UntupleInfo_28);
      MR_Word Var_54;
      MR_Box conv0_STATE_VARIABLE_IO_30;

      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_12, Indent_14);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% untuple:\n");
      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_proc_opt_info_11_p_0_1));
        MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Stream_12));
        MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (VarSet_15));
        MR_hl_field(MR_mktag(0), Var_54, 5) = ((MR_Box) (VarNamePrint_17));
        MR_hl_field(MR_mktag(0), Var_54, 6) = ((MR_Box) (Indent_14));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, UntupleMap_50, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_30);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_termination_info_6_p_0(
  MR_Word Stream_7,
  MR_String DumpOptions_8,
  MR_Word MaybeArgSize_9,
  MR_Word MaybeTermination_10)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_8, (MR_Char) 116);
    if (succeeded)
    {
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Arg size properties: ");
      parse_tree__parse_tree_out_pragma__write_maybe_arg_size_info_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[5]), Stream_7, (MR_Integer) 1, MaybeArgSize_9);
      mercury__io__nl_3_p_0(Stream_7);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Termination properties: ");
      parse_tree__parse_tree_out_pragma__write_maybe_termination_info_5_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[5]), Stream_7, (MR_Integer) 1, MaybeTermination_10);
      mercury__io__nl_3_p_0(Stream_7);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_deep_profiling_info_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word MaybeDeepProfileInfo_10)
{
  if (!((MaybeDeepProfileInfo_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word DeepProfileInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeepProfileInfo_10, (MR_Integer) 0))));
    MR_Word MaybeRecInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeepProfileInfo_12, (MR_Integer) 0))));
    MR_Word MaybeDeepLayout_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeepProfileInfo_12, (MR_Integer) 1))));

    if (!((MaybeRecInfo_13 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word DeepRecInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRecInfo_13, (MR_Integer) 0))));
      MR_Word Role_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeepRecInfo_16, (MR_Integer) 0))));
      MR_Word DeepPredProcId_19;
      MR_Word DeepPredId_20;
      MR_Integer DeepProcId_21;
      MR_Integer DeepPredInt_22;
      MR_Integer DeepProcInt_23;
      MR_String Var_62;
      MR_String Var_72;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% deep recursion info: ");
      if (((MR_tag((MR_Word) Role_17)) == (MR_Integer) 0))
      {
        DeepPredProcId_19 = (MR_Word) ((MR_Word) (Role_17));
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "inner, outer is ");
      }
      else
      {
        DeepPredProcId_19 = (MR_Word) (MR_body((MR_Word) (Role_17), (MR_Integer) 1));
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "outer, inner is ");
      }
      DeepPredId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeepPredProcId_19, (MR_Integer) 0))));
      DeepProcId_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DeepPredProcId_19, (MR_Integer) 1))));
      hlds__hlds_pred__pred_id_to_int_2_p_0(DeepPredId_20, &DeepPredInt_22);
      hlds__hlds_pred__proc_id_to_int_2_p_0(DeepProcId_21, &DeepProcInt_23);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), DeepPredInt_22, &Var_62);
      mercury__io__write_string_4_p_0(Stream_7, Var_62);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), DeepProcInt_23, &Var_72);
      mercury__io__write_string_4_p_0(Stream_7, Var_72);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    }
    if (!((MaybeDeepLayout_14 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word DeepLayout_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeepLayout_14, (MR_Integer) 0))));
      MR_Word ProcStatic_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeepLayout_24, (MR_Integer) 0))));
      MR_Word ExcpVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeepLayout_24, (MR_Integer) 1))));
      MR_Word TopCSD_27;
      MR_Word MiddleCSD_28;
      MR_Word MaybeOldOutermost_29;

      hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_4_p_0(Stream_7, ProcStatic_25);
      TopCSD_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExcpVars_26, (MR_Integer) 0))));
      MiddleCSD_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExcpVars_26, (MR_Integer) 1))));
      MaybeOldOutermost_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExcpVars_26, (MR_Integer) 2))));
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% deep layout info: ");
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "TopCSD is ");
      parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, VarNamePrint_9, TopCSD_27, Stream_7);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", MiddleCSD is ");
      parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, VarNamePrint_9, MiddleCSD_28, Stream_7);
      if (!((MaybeOldOutermost_29 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word OldOutermost_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOldOutermost_29, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", OldOutermost is ");
        parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, VarNamePrint_9, OldOutermost_30, Stream_7);
      }
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv3_STATE_VARIABLE_SlotNum_14;

    hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv3_STATE_VARIABLE_SlotNum_14);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_SlotNum_14));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_SlotNum_17;

    hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_SlotNum_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SlotNum_17));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_4_p_0(
  MR_Word Stream_5,
  MR_Word ProcStatic_6)
{
  {
    MR_String FileName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcStatic_6, (MR_Integer) 0))));
    MR_Integer LineNumber_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcStatic_6, (MR_Integer) 1))));
    MR_Word InInterface_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcStatic_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word CallSiteStatics_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcStatic_6, (MR_Integer) 3))));
    MR_Word CoveragePoints_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcStatic_6, (MR_Integer) 4))));
    MR_Word Var_30;
    MR_Word Var_33;
    MR_String Var_58;
    MR_Box conv2_Var_13;
    MR_Box conv1_STATE_VARIABLE_IO_32_32;
    MR_Box conv5_Var_14;
    MR_Box conv4_STATE_VARIABLE_IO_16;

    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "% proc static filename: ");
    mercury__io__write_string_4_p_0(Stream_5, FileName_8);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "% proc static line number: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), LineNumber_9, &Var_58);
    mercury__io__write_string_4_p_0(Stream_5, Var_58);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "% proc static is interface: ");
    mercury__io__write_line_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Stream_5, ((MR_Box) (InInterface_10)));
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Stream_5));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, CallSiteStatics_11, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_32_32);
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Stream_5));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, CoveragePoints_12, ((MR_Box) ((MR_Integer) 0)), &conv5_Var_14, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_16);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_tabling_info_9_p_0(
  MR_Word Stream_10,
  MR_Word VarSet_11,
  MR_Word TVarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word EvalMethod_14,
  MR_Word MaybeProcTableIOInfo_15,
  MR_Word MaybeCallTableTip_16)
{
  {
    if (!((EvalMethod_14 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word TabledMethod_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EvalMethod_14, (MR_Integer) 0))));
      MR_String Var_27;

      Var_27 = parse_tree__prog_out__tabled_eval_method_to_string_1_f_0(TabledMethod_18);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% eval method: ");
      mercury__io__write_string_4_p_0(Stream_10, Var_27);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
    }
    if (!((MaybeProcTableIOInfo_15 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ProcTableIOInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProcTableIOInfo_15, (MR_Integer) 0))));
      MR_Word MaybeArgInfos_46 = (MR_Word) (ProcTableIOInfo_19);

      if ((MaybeArgInfos_46 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% proc table io info: io tabled, no arg_infos\n");
      else
      {
        MR_Word ArgInfos_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgInfos_46, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% proc table io info: io tabled, arg_infos:\n");
        hlds__hlds_out__hlds_out_pred__write_table_arg_infos_5_p_0(Stream_10, TVarSet_12, ArgInfos_47);
      }
    }
    if (!((MaybeCallTableTip_16 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word CallTableTip_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCallTableTip_16, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% call table tip: ");
      parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, VarNamePrint_13, CallTableTip_20, Stream_10);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_table_arg_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_5_p_0(
  MR_Word Stream_6,
  MR_Word TVarSet_7,
  MR_Word TableArgInfos_8)
{
  {
    MR_Word ArgInfos_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableArgInfos_8, (MR_Integer) 0))));
    MR_Word TVarMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableArgInfos_8, (MR_Integer) 1))));
    MR_Word TVarPairs_12;
    MR_Word Var_19;
    MR_Box conv0_STATE_VARIABLE_IO_20_20;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% arg infos:\n");
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_table_arg_infos_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Stream_6));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (TVarSet_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_arg_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, ArgInfos_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_20_20);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0), TVarMap_11, &TVarPairs_12);
    if (!((TVarPairs_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_23;
      MR_Box conv1_STATE_VARIABLE_IO_16;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% type var map:\n");
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_10[1]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_table_arg_infos_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Stream_6));
        MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (TVarSet_7));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, TVarPairs_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_flags_7_p_0(
  MR_Word Stream_8,
  MR_Word CanProcess_9,
  MR_Word IsAddressTaken_10,
  MR_Word HasParallelConj_11,
  MR_Word HasUserEvent_12)
{
  {
    switch (CanProcess_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% cannot_process_yet\n");
        break;
    }
    switch (IsAddressTaken_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% address is not taken\n");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% address is taken\n");
        break;
    }
    switch (HasParallelConj_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% does not contain parallel conjunction\n");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% contains parallel conjunction\n");
        break;
    }
    switch (HasUserEvent_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% does not contain user event\n");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% contains user event\n");
        break;
    }
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_7_p_0(
  MR_Word Stream_8,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Integer Indent_11,
  MR_Word StackSlots_12)
{
  {
    MR_Word VarSlotList0_14;
    MR_Word VarSlotList_15;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackSlots_12, &VarSlotList0_14);
    VarSlotList_15 = mercury__assoc_list__map_values_only_2_f_0((MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[4]), VarSlotList0_14);
    hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_7_p_0(Stream_8, VarSet_9, VarNamePrint_10, Indent_11, VarSlotList_15);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_rtti_var_info_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_type_info_locn_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_8_p_0(
  MR_Word Stream_9,
  MR_Word VarSet_10,
  MR_Word TVarSet_11,
  MR_Word VarNamePrint_12,
  MR_Integer Indent_13,
  MR_Word RttiVarMaps_14)
{
  {
    MR_Word TypeVars_16;
    MR_Word Constraints_17;
    MR_Word ProgVars_18;
    MR_Word Var_24;
    MR_Word Var_29;
    MR_Word Var_34;
    MR_Box conv0_STATE_VARIABLE_IO_25_25;
    MR_Box conv1_STATE_VARIABLE_IO_30_30;
    MR_Box conv2_STATE_VARIABLE_IO_20;

    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_9, Indent_13);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% type_info varmap:\n");
    hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(RttiVarMaps_14, &TypeVars_16);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Stream_9));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (VarSet_10));
      MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (TVarSet_11));
      MR_hl_field(MR_mktag(0), Var_24, 6) = ((MR_Box) (VarNamePrint_12));
      MR_hl_field(MR_mktag(0), Var_24, 7) = ((MR_Box) (RttiVarMaps_14));
      MR_hl_field(MR_mktag(0), Var_24, 8) = ((MR_Box) (Indent_13));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, TypeVars_16, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25_25);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_9, Indent_13);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% typeclass_info varmap:\n");
    hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(RttiVarMaps_14, &Constraints_17);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Stream_9));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (VarSet_10));
      MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (TVarSet_11));
      MR_hl_field(MR_mktag(0), Var_29, 6) = ((MR_Box) (VarNamePrint_12));
      MR_hl_field(MR_mktag(0), Var_29, 7) = ((MR_Box) (RttiVarMaps_14));
      MR_hl_field(MR_mktag(0), Var_29, 8) = ((MR_Box) (Indent_13));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, Constraints_17, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_30_30);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_9, Indent_13);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% rtti_var_info:\n");
    hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(RttiVarMaps_14, &ProgVars_18);
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_8_p_0_3));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Stream_9));
      MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (VarSet_10));
      MR_hl_field(MR_mktag(0), Var_34, 5) = ((MR_Box) (TVarSet_11));
      MR_hl_field(MR_mktag(0), Var_34, 6) = ((MR_Box) (VarNamePrint_12));
      MR_hl_field(MR_mktag(0), Var_34, 7) = ((MR_Box) (RttiVarMaps_14));
      MR_hl_field(MR_mktag(0), Var_34, 8) = ((MR_Box) (Indent_13));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, ProgVars_18, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_20);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_14_p_0(
  MR_Word Info_15,
  MR_Word Stream_16,
  MR_Word Lang_17,
  MR_Word ModuleInfo_18,
  MR_Word PredId_19,
  MR_Word PredOrFunc_20,
  MR_Word VarSet_21,
  MR_Word TypeQual_22,
  MR_Word VarNamePrint_23,
  MR_Integer Indent_24,
  MR_Word HeadVarsVector_25,
  MR_Word Clauses_26)
{
  {
    MR_Word HeadVars_28;
    MR_Word HeadTerms_29;

    HeadVars_28 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), HeadVarsVector_25);
    mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_28, &HeadTerms_29);
    hlds__hlds_out__hlds_out_pred__write_clauses_loop_15_p_0(Info_15, Stream_16, Lang_17, ModuleInfo_18, PredId_19, PredOrFunc_20, VarSet_21, TypeQual_22, VarNamePrint_23, Indent_24, HeadTerms_29, Clauses_26, (MR_Integer) 1);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_loop_15_p_0(
  MR_Word Info_16,
  MR_Word Stream_17,
  MR_Word Lang_18,
  MR_Word ModuleInfo_19,
  MR_Word PredId_20,
  MR_Word PredOrFunc_21,
  MR_Word VarSet_22,
  MR_Word TypeQual_23,
  MR_Word VarNamePrint_24,
  MR_Integer Indent_25,
  MR_Word HeadTerms_26,
  MR_Word Clauses_27,
  MR_Integer ClauseNum_28)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((Clauses_27 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word FirstClause_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_27, (MR_Integer) 0))));
      MR_Word LaterClauses_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_27, (MR_Integer) 1))));
      MR_Integer Var_41;
      MR_Word next_value_of_Clauses_27;
      MR_Integer next_value_of_ClauseNum_28;

      mercury__io__write_string_4_p_0(Stream_17, (MR_String) "% clause ");
      mercury__io__write_int_4_p_0(Stream_17, ClauseNum_28);
      mercury__io__write_string_4_p_0(Stream_17, (MR_String) "\n");
      hlds__hlds_out__hlds_out_pred__write_clause_15_p_0(Info_16, Stream_17, Lang_18, ModuleInfo_19, PredId_20, PredOrFunc_21, VarSet_22, TypeQual_23, VarNamePrint_24, (MR_Integer) 0, Indent_25, HeadTerms_26, FirstClause_30);
      Var_41 = (MR_Integer) ((MR_Unsigned) ClauseNum_28 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Clauses_27 = LaterClauses_31;
      next_value_of_ClauseNum_28 = Var_41;
      Clauses_27 = next_value_of_Clauses_27;
      ClauseNum_28 = next_value_of_ClauseNum_28;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_pred__proc_id_to_int_1_f_0(((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_15_p_0(
  MR_Word Info_16,
  MR_Word Stream_17,
  MR_Word Lang_18,
  MR_Word ModuleInfo_19,
  MR_Word PredId_20,
  MR_Word PredOrFunc_21,
  MR_Word VarSet_22,
  MR_Word TypeQual_23,
  MR_Word VarNamePrint_24,
  MR_Word WriteWhichModes_25,
  MR_Integer Indent_26,
  MR_Word HeadTerms_27,
  MR_Word Clause_28)
{
  {
    MR_bool succeeded;
    MR_Word ApplicableModes_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_28, (MR_Integer) 0))));
    MR_Word Goal_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_28, (MR_Integer) 1))));
    MR_Word ImplLang_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_28, (MR_Integer) 2))));
    MR_Word Context_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_28, (MR_Integer) 3))));
    MR_Integer Indent1_35 = (MR_Integer) ((MR_Unsigned) Indent_26 + (MR_Unsigned) 1);
    MR_String DumpOptions_36 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_16, (MR_Integer) 0))));
    MR_Word PredInfo_40;
    MR_Word AllProcIds_41;
    MR_Word SelectedProcIds_42;
    MR_Word TypeInfo_86_86;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;

    switch (MR_tag((MR_Word) ApplicableModes_30)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ApplicableModes_30)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              succeeded = mercury__string__contains_char_2_p_0(DumpOptions_36, (MR_Char) 109);
              if (succeeded)
              {
                hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_17, Indent_26);
                mercury__io__write_string_4_p_0(Stream_17, (MR_String) "% This clause applies only to <in,in> unify modes.\n");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              succeeded = mercury__string__contains_char_2_p_0(DumpOptions_36, (MR_Char) 109);
              if (succeeded)
              {
                hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_17, Indent_26);
                mercury__io__write_string_4_p_0(Stream_17, (MR_String) "% This clause applies only to non <in,in> unify modes.\n");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Modes_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ApplicableModes_30, (MR_Integer) 0))));

          succeeded = mercury__string__contains_char_2_p_0(DumpOptions_36, (MR_Char) 109);
          if (succeeded)
          {
            MR_Word ModeInts_38;

            hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_17, Indent_26);
            mercury__io__write_string_4_p_0(Stream_17, (MR_String) "% Modes for which this clause applies: ");
            ModeInts_38 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[3]), Modes_37);
            hlds__hlds_out__hlds_out_util__write_intlist_4_p_0(Stream_17, ModeInts_38);
            mercury__io__write_string_4_p_0(Stream_17, (MR_String) "\n");
          }
        }
        break;
    }
    if (!((ImplLang_32 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ForeignLang_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ImplLang_32, (MR_Integer) 0))) & (MR_Integer) 3);

      mercury__io__write_string_4_p_0(Stream_17, (MR_String) "% Language of implementation: ");
      mercury__io__write_line_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Stream_17, ((MR_Box) (ForeignLang_39)));
    }
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_19, PredId_20, &PredInfo_40);
    AllProcIds_41 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_40);
    succeeded = ((MR_tag((MR_Word) ApplicableModes_30)) == (MR_Integer) 1);
    if (succeeded)
    {
      SelectedProcIds_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ApplicableModes_30, (MR_Integer) 0))));
      TypeInfo_86_86 = (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[9]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_86_86, ((MR_Box) (SelectedProcIds_42)), ((MR_Box) (AllProcIds_41)));
      succeeded = !(succeeded);
    }
    if (succeeded)
      hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_13_p_0(Stream_17, ModuleInfo_19, Lang_18, VarSet_22, VarNamePrint_24, WriteWhichModes_25, PredId_20, PredOrFunc_21, SelectedProcIds_42, Context_33, HeadTerms_27);
    else
      hlds__hlds_out__hlds_out_pred__write_clause_head_9_p_0(Stream_17, ModuleInfo_19, VarSet_22, VarNamePrint_24, PredId_20, PredOrFunc_21, HeadTerms_27);
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_31, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_68)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_68, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_68, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_68, (MR_Integer) 2))));
      succeeded = (Var_69 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      mercury__io__write_string_4_p_0(Stream_17, (MR_String) ".\n");
    else
    {
      mercury__io__write_string_4_p_0(Stream_17, (MR_String) " :-\n");
      hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_16, Stream_17, ModuleInfo_19, VarSet_22, TypeQual_23, VarNamePrint_24, Indent1_35, (MR_String) ".\n", Goal_31);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_head_9_p_0(
  MR_Word Stream_10,
  MR_Word ModuleInfo_11,
  MR_Word VarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word PredId_14,
  MR_Word PredOrFunc_15,
  MR_Word HeadTerms_16)
{
  {
    MR_String PredName_18;
    MR_Word ModuleName_19;

    PredName_18 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_11, PredId_14);
    ModuleName_19 = hlds__hlds_module__predicate_module_2_f_0(ModuleInfo_11, PredId_14);
    switch (PredOrFunc_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgs_20;
          MR_Word RetVal_21;
          MR_String Var_27;
          MR_Word Var_29;
          MR_Box conv0_RetVal_21;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[2]), HeadTerms_16, &FuncArgs_20, &conv0_RetVal_21);
          RetVal_21 = ((MR_Word) (conv0_RetVal_21));
          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (PredName_18));
          }
          Var_27 = hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(VarSet_12, VarNamePrint_13, ModuleName_19, Var_29, FuncArgs_20);
          mercury__io__write_string_4_p_0(Stream_10, Var_27);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = ");
          parse_tree__parse_tree_out_term__mercury_output_term_nq_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_12, VarNamePrint_13, (MR_Integer) 0, RetVal_21, Stream_10);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String Var_24;
          MR_Word Var_26;

          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (PredName_18));
          }
          Var_24 = hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(VarSet_12, VarNamePrint_13, ModuleName_19, Var_26, HeadTerms_16);
          mercury__io__write_string_4_p_0(Stream_10, Var_24);
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_13_p_0(
  MR_Word Stream_1,
  MR_Word ModuleInfo_2,
  MR_Word Lang_3,
  MR_Word VarSet_4,
  MR_Word VarNamePrint_5,
  MR_Word WriteWhichModes_6,
  MR_Word PredId_7,
  MR_Word PredOrFunc_8,
  MR_Word HeadVar__9_9,
  MR_Word Context_10,
  MR_Word HeadTerms_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__9_9 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer ProcId_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 0))));
      MR_Word ProcIds_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__9_9;

      hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_13_p_0(Stream_1, ModuleInfo_2, Lang_3, VarSet_4, VarNamePrint_5, WriteWhichModes_6, PredId_7, PredOrFunc_8, ProcId_35, Context_10, HeadTerms_11);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__9_9 = ProcIds_36;
      HeadVar__9_9 = next_value_of_HeadVar__9_9;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_AnnotatedTerm_9;

    conv1_AnnotatedTerm_9 = hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_AnnotatedTerm_9));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_13_p_0(
  MR_Word Stream_14,
  MR_Word ModuleInfo_15,
  MR_Word Lang_16,
  MR_Word VarSet_17,
  MR_Word VarNamePrint_18,
  MR_Word WriteWhichModes_19,
  MR_Word PredId_20,
  MR_Word PredOrFunc_21,
  MR_Integer ProcId_22,
  MR_Word Context_23,
  MR_Word HeadTerms_24)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_26;
    MR_Word Procedures_27;
    MR_Word ProcInfo_28;
    MR_Box conv0_ProcInfo_28;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_15, PredId_20, &PredInfo_26);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_26, &Procedures_27);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procedures_27, ((MR_Box) (ProcId_22)), &conv0_ProcInfo_28);
    if (succeeded)
    {
      ProcInfo_28 = ((MR_Word) (conv0_ProcInfo_28));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ArgModes_29;
      MR_Word AnnotatedPairs_30;
      MR_Word AnnotatedHeadTerms_31;
      MR_Word Var_34;
      MR_String PredName_53;
      MR_Word ModuleName_54;

      switch (WriteWhichModes_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_28, &ArgModes_29);
          break;
        case (MR_Integer) 1:
          hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_28, &ArgModes_29);
          break;
      }
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), HeadTerms_24, ArgModes_29, &AnnotatedPairs_30);
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_13_p_0_1));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Lang_16));
        MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (Context_23));
      }
      AnnotatedHeadTerms_31 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[2]), Var_34, AnnotatedPairs_30);
      PredName_53 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_15, PredId_20);
      ModuleName_54 = hlds__hlds_module__predicate_module_2_f_0(ModuleInfo_15, PredId_20);
      switch (PredOrFunc_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word FuncArgs_55;
            MR_Word RetVal_56;
            MR_String Var_60;
            MR_Word Var_62;
            MR_Box conv2_RetVal_56;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[2]), AnnotatedHeadTerms_31, &FuncArgs_55, &conv2_RetVal_56);
            RetVal_56 = ((MR_Word) (conv2_RetVal_56));
            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (PredName_53));
            }
            Var_60 = hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(VarSet_17, VarNamePrint_18, ModuleName_54, Var_62, FuncArgs_55);
            mercury__io__write_string_4_p_0(Stream_14, Var_60);
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) " = ");
            parse_tree__parse_tree_out_term__mercury_output_term_nq_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_17, VarNamePrint_18, (MR_Integer) 0, RetVal_56, Stream_14);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_String Var_57;
            MR_Word Var_59;

            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (PredName_53));
            }
            Var_57 = hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(VarSet_17, VarNamePrint_18, ModuleName_54, Var_59, AnnotatedHeadTerms_31);
            mercury__io__write_string_4_p_0(Stream_14, Var_57);
          }
          break;
      }
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
    MR_String OptionsStr_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_String DumpStr_6;
    MR_String STATE_VARIABLE_DumpStr_9_9;
    MR_String STATE_VARIABLE_DumpStr_12_12;
    MR_String STATE_VARIABLE_DumpStr_15_15;
    MR_String STATE_VARIABLE_DumpStr_18_18;
    MR_String Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;

    succeeded = mercury__string__contains_char_2_p_0(OptionsStr_5, (MR_Char) 99);
    if (succeeded)
      STATE_VARIABLE_DumpStr_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "", (MR_String) "c");
    else
      STATE_VARIABLE_DumpStr_9_9 = (MR_String) "";
    succeeded = mercury__string__contains_char_2_p_0(OptionsStr_5, (MR_Char) 110);
    if (succeeded)
      STATE_VARIABLE_DumpStr_12_12 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_DumpStr_9_9, (MR_String) "n");
    else
      STATE_VARIABLE_DumpStr_12_12 = STATE_VARIABLE_DumpStr_9_9;
    succeeded = mercury__string__contains_char_2_p_0(OptionsStr_5, (MR_Char) 118);
    if (succeeded)
      STATE_VARIABLE_DumpStr_15_15 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_DumpStr_12_12, (MR_String) "v");
    else
      STATE_VARIABLE_DumpStr_15_15 = STATE_VARIABLE_DumpStr_12_12;
    succeeded = mercury__string__contains_char_2_p_0(OptionsStr_5, (MR_Char) 103);
    if (succeeded)
      STATE_VARIABLE_DumpStr_18_18 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_DumpStr_15_15, (MR_String) "g");
    else
      STATE_VARIABLE_DumpStr_18_18 = STATE_VARIABLE_DumpStr_15_15;
    succeeded = mercury__string__contains_char_2_p_0(OptionsStr_5, (MR_Char) 80);
    if (succeeded)
      DumpStr_6 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_DumpStr_18_18, (MR_String) "P");
    else
      DumpStr_6 = STATE_VARIABLE_DumpStr_18_18;
    Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *ClausesInfo_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (DumpStr_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_origin_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_origin_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word Origin_12)
{
  switch (MR_tag((MR_Word) Origin_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Origin_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% initialise\n");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% finalise\n");
          break;
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% special pred\n");
      break;
    case (MR_Integer) 2:
      {
        MR_Word MethodConstraints_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin_12, (MR_Integer) 1))));
        MR_Word ClassId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_17, (MR_Integer) 0))));
        MR_Word InstanceTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_17, (MR_Integer) 1))));
        MR_Word InstanceConstraints_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_17, (MR_Integer) 2))));
        MR_Word ClassMethodConstraints_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_17, (MR_Integer) 3))));
        MR_Word ClassName_22;
        MR_Word MethodUnivConstraints_24;
        MR_Word MethodExistConstraints_25;
        MR_Word Var_123;
        MR_Word Var_128;

        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% instance method constraints:\n");
        ClassName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_18, (MR_Integer) 0))));
        {
          Var_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (ClassName_22));
          MR_hl_field(MR_mktag(0), Var_123, 1) = ((MR_Box) (InstanceTypes_19));
        }
        parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(TVarSet_10, VarNamePrint_11, Var_123, Stream_8);
        mercury__io__nl_3_p_0(Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "instance constraints: ");
        {
          Var_128 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_origin_7_p_0_1));
          MR_hl_field(MR_mktag(0), Var_128, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_128, 3) = ((MR_Box) (TVarSet_10));
          MR_hl_field(MR_mktag(0), Var_128, 4) = ((MR_Box) (VarNamePrint_11));
        }
        parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_128, (MR_String) ", ", InstanceConstraints_20, Stream_8);
        mercury__io__nl_3_p_0(Stream_8);
        MethodUnivConstraints_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassMethodConstraints_21, (MR_Integer) 0))));
        MethodExistConstraints_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassMethodConstraints_21, (MR_Integer) 1))));
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "method univ constraints: ");
        parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_128, (MR_String) ", ", MethodUnivConstraints_24, Stream_8);
        mercury__io__nl_3_p_0(Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "method exist constraints: ");
        parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_128, (MR_String) ", ", MethodExistConstraints_25, Stream_8);
        mercury__io__nl_3_p_0(Stream_8);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MethodId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 2))));
            MR_Word ClassSymName_27;
            MR_Integer ClassArity_28;
            MR_Word MethodPredOrFunc_29;
            MR_Word MethodSymName_30;
            MR_Integer MethodArity_31;
            MR_String Var_109;
            MR_String Var_112;
            MR_String Var_117;
            MR_Word ClassId_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 1))));
            MR_String Var_206;
            MR_String Var_219;

            ClassSymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_146, (MR_Integer) 0))));
            ClassArity_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_146, (MR_Integer) 1))));
            MethodPredOrFunc_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), MethodId_26, (MR_Integer) 0))) & (MR_Integer) 1);
            MethodSymName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodId_26, (MR_Integer) 1))));
            MethodArity_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MethodId_26, (MR_Integer) 2))));
            Var_109 = mdbcomp__prim_data__pred_or_func_to_string_1_f_0(MethodPredOrFunc_29);
            Var_112 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MethodSymName_30);
            Var_117 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassSymName_27);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% class method ");
            mercury__io__write_string_4_p_0(Stream_8, Var_109);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_8, Var_112);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), MethodArity_31, &Var_206);
            mercury__io__write_string_4_p_0(Stream_8, Var_206);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " for ");
            mercury__io__write_string_4_p_0(Stream_8, Var_117);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), ClassArity_28, &Var_219);
            mercury__io__write_string_4_p_0(Stream_8, Var_219);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Transformation_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 1))));
            MR_Word OrigPredId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 3))));
            MR_Integer OrigPredIdNum_35;
            MR_String Var_99;
            MR_String Var_165;

            OrigPredIdNum_35 = hlds__hlds_pred__pred_id_to_int_1_f_0(OrigPredId_34);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% transformed from pred id ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), OrigPredIdNum_35, &Var_165);
            mercury__io__write_string_4_p_0(Stream_8, Var_165);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
            Var_99 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(ModuleInfo_9, OrigPredId_34);
            mercury__io__write_string_4_p_0(Stream_8, Var_99);
            mercury__io__nl_3_p_0(Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% transformation: ");
            mercury__io__write_line_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_transformation_0), Stream_8, ((MR_Box) (Transformation_32)));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Creation_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 1))) & (MR_Integer) 1);

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% created: ");
            mercury__io__write_line_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_creation_0), Stream_8, ((MR_Box) (Creation_36)));
          }
          break;
        case (MR_Integer) 3:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% assertion\n");
          break;
        case (MR_Integer) 4:
          {
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TypeCtorSymName_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 1))));
            MR_Integer TypeCtorArity_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 2))));
            MR_Word SolverAuxPredKind_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 3))) & (MR_Integer) 3);
            MR_String TypeCtorStr_42;
            MR_String SolverAuxPredKindStr_43;
            MR_Word Var_79;

            {
              Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (TypeCtorSymName_39));
              MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (TypeCtorArity_40));
            }
            TypeCtorStr_42 = parse_tree__prog_out__sym_name_arity_to_string_1_f_0(Var_79);
            SolverAuxPredKindStr_43 = ((&hlds__hlds_out__hlds_out_pred_vector_common_8[12 + SolverAuxPredKind_41]))->hlds__hlds_out__hlds_out_pred__vector_common_type_8_0__vct_8_f_0;
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
            mercury__io__write_string_4_p_0(Stream_8, SolverAuxPredKindStr_43);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " for ");
            mercury__io__write_string_4_p_0(Stream_8, TypeCtorStr_42);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word BasePredCallId_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 1))));
            MR_Word TablingAuxPredKind_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_String BasePredStr_46;
            MR_String TablingAuxPredKindStr_47;

            BasePredStr_46 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_1_f_0(BasePredCallId_44);
            switch (TablingAuxPredKind_45) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                TablingAuxPredKindStr_47 = (MR_String) "table reset predicate";
                break;
              case (MR_Integer) 0:
                TablingAuxPredKindStr_47 = (MR_String) "table statistics predicate";
                break;
            }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
            mercury__io__write_string_4_p_0(Stream_8, TablingAuxPredKindStr_47);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " for ");
            mercury__io__write_string_4_p_0(Stream_8, BasePredStr_46);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MutableModuleName_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 1))));
            MR_String MutableName_49 = ((MR_String) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 2))));
            MR_Word MutablePredKind_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 3))) & (MR_Integer) 15);
            MR_String MutableModuleNameStr_51;
            MR_String MutablePredKindStr_52;

            MutableModuleNameStr_51 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MutableModuleName_48);
            MutablePredKindStr_52 = ((&hlds__hlds_out__hlds_out_pred_vector_common_8[0 + MutablePredKind_50]))->hlds__hlds_out__hlds_out_pred__vector_common_type_8_0__vct_8_f_0;
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
            mercury__io__write_string_4_p_0(Stream_8, MutablePredKindStr_52);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " for mutable ");
            mercury__io__write_string_4_p_0(Stream_8, MutableName_49);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " in module ");
            mercury__io__write_string_4_p_0(Stream_8, MutableModuleNameStr_51);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 8:
          {
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_proc_var_name_remap_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_Word VarSet_9,
  MR_Word VarNameRemap_10)
{
  {
    MR_Word VarNameRemapList_12;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarNameRemap_10, &VarNameRemapList_12);
    if (!((VarNameRemapList_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word VarNameRemapHead_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarNameRemapList_12, (MR_Integer) 0))));
      MR_Word VarNameRemapTail_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarNameRemapList_12, (MR_Integer) 1))));

      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, Indent_8);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% var name remap: ");
      hlds__hlds_out__hlds_out_pred__write_var_name_remap_6_p_0(Stream_7, VarSet_9, VarNameRemapHead_13, VarNameRemapTail_14);
      mercury__io__nl_3_p_0(Stream_7);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_name_remap_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Word Head_9,
  MR_Word Tail_10)
{
  while (MR_TRUE)
  {
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Head_9, (MR_Integer) 0))));
    MR_String NewName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Head_9, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 1, Var_12, Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) " -> ");
    mercury__io__write_string_4_p_0(Stream_7, NewName_13);
    if (!((Tail_10 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word TailHead_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tail_10, (MR_Integer) 0))));
      MR_Word TailTail_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tail_10, (MR_Integer) 1))));
      MR_Word next_value_of_Head_9;
      MR_Word next_value_of_Tail_10;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_Head_9 = TailHead_14;
      next_value_of_Tail_10 = TailTail_15;
      Head_9 = next_value_of_Head_9;
      Tail_10 = next_value_of_Tail_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_types_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_rtti_var_info_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_types_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_types_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_type_info_locn_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_types_12_p_0(
  MR_Word Stream_13,
  MR_Integer Indent_14,
  MR_Word VarSet_15,
  MR_Word TVarSet_16,
  MR_Word VarNamePrint_17,
  MR_Word RttiVarMaps_18,
  MR_Word ProofMap_19,
  MR_Word ConstraintMap_20,
  MR_Word ExternalTypeParams_21,
  MR_Word VarTypes_22)
{
  {
    MR_bool succeeded;
    MR_Word TypeVars_55;
    MR_Word Constraints_56;
    MR_Word ProgVars_57;
    MR_Word Var_61;
    MR_Word Var_66;
    MR_Word Var_71;
    MR_Box conv0_STATE_VARIABLE_IO_25_62;
    MR_Box conv1_STATE_VARIABLE_IO_30_67;
    MR_Box conv2_STATE_VARIABLE_IO_28_28;

    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_13, Indent_14);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% type_info varmap:\n");
    hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(RttiVarMaps_18, &TypeVars_55);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_pred_types_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Stream_13));
      MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (VarSet_15));
      MR_hl_field(MR_mktag(0), Var_61, 5) = ((MR_Box) (TVarSet_16));
      MR_hl_field(MR_mktag(0), Var_61, 6) = ((MR_Box) (VarNamePrint_17));
      MR_hl_field(MR_mktag(0), Var_61, 7) = ((MR_Box) (RttiVarMaps_18));
      MR_hl_field(MR_mktag(0), Var_61, 8) = ((MR_Box) (Indent_14));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, TypeVars_55, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25_62);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_13, Indent_14);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% typeclass_info varmap:\n");
    hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(RttiVarMaps_18, &Constraints_56);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_pred_types_12_p_0_2));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Stream_13));
      MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (VarSet_15));
      MR_hl_field(MR_mktag(0), Var_66, 5) = ((MR_Box) (TVarSet_16));
      MR_hl_field(MR_mktag(0), Var_66, 6) = ((MR_Box) (VarNamePrint_17));
      MR_hl_field(MR_mktag(0), Var_66, 7) = ((MR_Box) (RttiVarMaps_18));
      MR_hl_field(MR_mktag(0), Var_66, 8) = ((MR_Box) (Indent_14));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_66, Constraints_56, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_30_67);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_13, Indent_14);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% rtti_var_info:\n");
    hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(RttiVarMaps_18, &ProgVars_57);
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_pred_types_12_p_0_3));
      MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Stream_13));
      MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (VarSet_15));
      MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) (TVarSet_16));
      MR_hl_field(MR_mktag(0), Var_71, 6) = ((MR_Box) (VarNamePrint_17));
      MR_hl_field(MR_mktag(0), Var_71, 7) = ((MR_Box) (RttiVarMaps_18));
      MR_hl_field(MR_mktag(0), Var_71, 8) = ((MR_Box) (Indent_14));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_71, ProgVars_57, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_28_28);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap_19);
    if (!(succeeded))
    {
      hlds__hlds_out__hlds_out_util__write_constraint_proof_map_7_p_0(Stream_13, Indent_14, VarNamePrint_17, TVarSet_16, ProofMap_19);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ConstraintMap_20);
    if (!(succeeded))
      hlds__hlds_out__hlds_out_pred__write_constraint_map_7_p_0(Stream_13, Indent_14, VarNamePrint_17, TVarSet_16, ConstraintMap_20);
    if (!((ExternalTypeParams_21 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% external_type_params:\n");
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% ");
      parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_16, VarNamePrint_17, ExternalTypeParams_21, Stream_13);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
    hlds__hlds_out__hlds_out_pred__write_var_types_8_p_0(Stream_13, VarSet_15, TVarSet_16, VarNamePrint_17, Indent_14, VarTypes_22);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_7_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word VarNamePrint_10,
  MR_Word VarSet_11,
  MR_Word ConstraintMap_12)
{
  {
    MR_Word Var_19;
    MR_Box conv0_STATE_VARIABLE_IO_15;

    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% Constraint map:\n");
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_constraint_map_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (Indent_9));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (VarNamePrint_10));
      MR_hl_field(MR_mktag(0), Var_19, 6) = ((MR_Box) (VarSet_11));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, ConstraintMap_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_8_p_0(
  MR_Word Stream_9,
  MR_Word VarSet_10,
  MR_Word TVarSet_11,
  MR_Word VarNamePrint_12,
  MR_Integer Indent_13,
  MR_Word VarTypes_14)
{
  {
    MR_Integer NumVarTypes_16;
    MR_Word Vars_17;
    MR_String Var_32;

    hlds__vartypes__vartypes_count_2_p_0(VarTypes_14, &NumVarTypes_16);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_9, Indent_13);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% variable types map ");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), NumVarTypes_16, &Var_32);
    mercury__io__write_string_4_p_0(Stream_9, Var_32);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " entries):\n");
    hlds__vartypes__vartypes_vars_2_p_0(VarTypes_14, &Vars_17);
    hlds__hlds_out__hlds_out_pred__write_var_types_loop_9_p_0(Stream_9, VarSet_10, TVarSet_11, VarNamePrint_12, VarTypes_14, Indent_13, Vars_17);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_loop_9_p_0(
  MR_Word Stream_1,
  MR_Word VarSet_2,
  MR_Word TypeVarSet_3,
  MR_Word VarNamePrint_4,
  MR_Word VarTypes_5,
  MR_Integer Indent_6,
  MR_Word HeadVar__7_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
      MR_Word Vars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 1))));
      MR_Word Type_28;
      MR_Integer VarNum_29;
      MR_Word next_value_of_HeadVar__7_7;

      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_5, Var_25, &Type_28);
      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_1, Indent_6);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "% ");
      parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_2, VarNamePrint_4, Var_25, Stream_1);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) " (number ");
      mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_25, &VarNum_29);
      mercury__io__write_int_4_p_0(Stream_1, VarNum_29);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ")");
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ": ");
      parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TypeVarSet_3, VarNamePrint_4, Type_28, Stream_1);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = Vars_26;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_markers_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_markers_4_p_0(
  MR_Word Stream_5,
  MR_Word Markers_6)
{
  {
    MR_Word MarkerList_8;

    hlds__hlds_pred__markers_to_marker_list_2_p_0(Markers_6, &MarkerList_8);
    if (!((MarkerList_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word MarkerNames_11;
      MR_String MarkerNamesStr_12;

      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[2]), MarkerList_8, &MarkerNames_11);
      MarkerNamesStr_12 = mercury__string__join_list_2_f_0((MR_String) ", ", MarkerNames_11);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "% markers: ");
      mercury__io__write_string_4_p_0(Stream_5, MarkerNamesStr_12);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__find_filled_in_procs_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ProcIdInfo_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ProcIdsInfos_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TailFilledInProcIdsInfos_6;
      MR_Word ProcInfo_8;
      MR_Word Goal_9;
      MR_Word GoalExpr_10;
      MR_Word Var_12;
      MR_Word Var_13;

      hlds__hlds_out__hlds_out_pred__find_filled_in_procs_2_p_0(ProcIdsInfos_4, &TailFilledInProcIdsInfos_6);
      ProcInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcIdInfo_3, (MR_Integer) 1))));
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_8, &Goal_9);
      GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_9, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) GoalExpr_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))) & (MR_Integer) 1);
        Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
        succeeded = (Var_12 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        *HeadVar__2_2 = TailFilledInProcIdsInfos_6;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcIdInfo_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailFilledInProcIdsInfos_6));
        }
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

    succeeded = hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
