/*
** Automatically generated from `hlds_out_pred.m'
** by the Mercury compiler,
** version rotd-2025-10-15
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "term_context.mih"
#include "term_subst.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.var_table_hlds.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_pragma.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_tree_to_term.mih"
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_pred__type_ctor_info_table_locn_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_functor_desc_write_which_modes_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_ordinal_ordered_write_which_modes_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_name_ordered_write_which_modes_0[2];

static const MR_Integer hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__functor_number_map_write_which_modes_0[2];

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__report_clause_count__312__1_2_p_0(
  MR_String HeadVar__1_32,
  MR_String HeadVar__2_48);

static MR_Integer MR_CALL 
hlds__hlds_out__hlds_out_pred__IntroducedFrom__func__format_pred__231__1_1_f_0(
  MR_Word LambdaHeadVar__1_111);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_untuple_info_loop_6_p_0(
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word OldVar_9,
  MR_Word NewVars_10,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_hlds_ps_coverage_point_5_p_0(
  MR_Word CoveragePointInfo_6,
  MR_Integer STATE_VARIABLE_SlotNum_0_11,
  MR_Integer * STATE_VARIABLE_SlotNum_12,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_hlds_ps_call_site_5_p_0(
  MR_Word CallSiteStaticData_6,
  MR_Integer STATE_VARIABLE_SlotNum_0_14,
  MR_Integer * STATE_VARIABLE_SlotNum_15,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_table_tvar_map_entry_4_p_0(
  MR_Word TVarSet_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_table_arg_info_4_p_0(
  MR_Word TVarSet_5,
  MR_Word ArgInfo_6,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_rtti_var_info_7_p_0(
  MR_Word VarNamePrint_8,
  MR_Word TVarSet_9,
  MR_Word VarTable_10,
  MR_Word RttiVarMaps_11,
  MR_Word Var_12,
  MR_Word STATE_VARIABLE_State_0_19,
  MR_Word * STATE_VARIABLE_State_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_typeclass_info_var_7_p_0(
  MR_Word VarNamePrint_8,
  MR_Word TVarSet_9,
  MR_Word VarTable_10,
  MR_Word RttiVarMaps_11,
  MR_Word Constraint_12,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_type_info_locn_7_p_0(
  MR_Word VarNamePrint_8,
  MR_Word TVarSet_9,
  MR_Word VarTable_10,
  MR_Word RttiVarMaps_11,
  MR_Word TVar_12,
  MR_Word STATE_VARIABLE_State_0_21,
  MR_Word * STATE_VARIABLE_State_22);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_constraint_map_entry_6_p_0(
  MR_Word VarNamePrint_7,
  MR_Word VarSet_8,
  MR_Word ConstraintId_9,
  MR_Word ProgConstraint_10,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_obsolete_in_favour_of_3_p_0(
  MR_Word ObsoleteInFavourOf_4,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_procs_loop_8_p_0(
  MR_Word Info_1,
  MR_Word VarNamePrint_2,
  MR_Word ModuleInfo_3,
  MR_Word PredId_4,
  MR_Word PredInfo_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_State_0_7,
  MR_Word * STATE_VARIABLE_State_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_proc_9_p_0(
  MR_Word Info_10,
  MR_Word VarNamePrint_11,
  MR_Word ModuleInfo_12,
  MR_Word PredId_13,
  MR_Word PredInfo_14,
  MR_Integer ProcId_15,
  MR_Word ProcInfo_16,
  MR_Word STATE_VARIABLE_State_0_63,
  MR_Word * STATE_VARIABLE_State_64);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__format_stack_slots_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_stack_slots_5_p_0(
  MR_Word VarTable_6,
  MR_Word VarNamePrint_7,
  MR_Word StackSlots_8,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_proc_arg_info_8_p_0(
  MR_Word DumpOptions_9,
  MR_Word VarTable_10,
  MR_Word VarNamePrint_11,
  MR_Word MaybeArgLives_12,
  MR_Word RegR_HeadVars_13,
  MR_Word MaybeArgInfos_14,
  MR_Word STATE_VARIABLE_State_0_19,
  MR_Word * STATE_VARIABLE_State_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_eff_trace_level_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_proc_var_name_remap_4_p_0(
  MR_Word VarNameSrc_5,
  MR_Word VarNameRemap_6,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_var_name_remap_5_p_0(
  MR_Word VarNameSrc_6,
  MR_Word Head_7,
  MR_Word Tail_8,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_proc_deleted_callee_set_3_p_0(
  MR_Word DeletedCallCalleeSet_4,
  MR_Word STATE_VARIABLE_State_0_9,
  MR_Word * STATE_VARIABLE_State_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_proc_opt_info_9_p_0(
  MR_Word DumpOptions_10,
  MR_Word VarTable_11,
  MR_Word TVarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word MaybeStructureSharing_14,
  MR_Word MaybeStructureReuse_15,
  MR_Word MaybeUntupleInfo_16,
  MR_Word STATE_VARIABLE_State_0_27,
  MR_Word * STATE_VARIABLE_State_28);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_untuple_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_untuple_info_5_p_0(
  MR_Word VarTable_6,
  MR_Word VarNamePrint_7,
  MR_Word UntupleInfo_8,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_proc_termination_info_4_p_0(
  MR_Word MaybeArgSize_5,
  MR_Word MaybeTermination_6,
  MR_Word STATE_VARIABLE_State_0_10,
  MR_Word * STATE_VARIABLE_State_11);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_proc_deep_profiling_info_5_p_0(
  MR_Word VarTable_6,
  MR_Word VarNamePrint_7,
  MR_Word MaybeDeepProfileInfo_8,
  MR_Word STATE_VARIABLE_State_0_29,
  MR_Word * STATE_VARIABLE_State_30);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_hlds_proc_static_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_hlds_proc_static_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_hlds_proc_static_3_p_0(
  MR_Word ProcStatic_4,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_proc_tabling_info_8_p_0(
  MR_Word VarTable_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word EvalMethod_12,
  MR_Word MaybeProcTableIOInfo_13,
  MR_Word MaybeCallTableTip_14,
  MR_Word STATE_VARIABLE_State_0_19,
  MR_Word * STATE_VARIABLE_State_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_table_arg_infos_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_table_arg_infos_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_proc_flags_6_p_0(
  MR_Word CanProcess_7,
  MR_Word IsAddressTaken_8,
  MR_Word HasParallelConj_9,
  MR_Word HasUserEvent_10,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_rtti_varmaps_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_rtti_varmaps_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_rtti_varmaps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_rtti_varmaps_6_p_0(
  MR_Word VarNamePrint_7,
  MR_Word TVarSet_8,
  MR_Word VarTable_9,
  MR_Word RttiVarMaps_10,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_var_types_5_p_0(
  MR_Word VarNamePrint_6,
  MR_Word TVarSet_7,
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_clauses_12_p_0(
  MR_Word Info_13,
  MR_Word Lang_14,
  MR_Word ModuleInfo_15,
  MR_Word PredId_16,
  MR_Word PredOrFunc_17,
  MR_Word VarNameSrc_18,
  MR_Word TypeQual_19,
  MR_Word VarNamePrint_20,
  MR_Word HeadVarsVector_21,
  MR_Word Clauses_22,
  MR_Word STATE_VARIABLE_State_0_26,
  MR_Word * STATE_VARIABLE_State_27);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_clauses_loop_13_p_0(
  MR_Word Info_14,
  MR_Word Lang_15,
  MR_Word ModuleInfo_16,
  MR_Word PredId_17,
  MR_Word PredOrFunc_18,
  MR_Word VarNameSrc_19,
  MR_Word TypeQual_20,
  MR_Word VarNamePrint_21,
  MR_Word HeadTerms_22,
  MR_Integer CurClauseNum_23,
  MR_Word Clauses_24,
  MR_Word STATE_VARIABLE_State_0_28,
  MR_Word * STATE_VARIABLE_State_29);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__format_clause_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_clause_head_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word VarNameSrc_10,
  MR_Word VarNamePrint_11,
  MR_Word PredId_12,
  MR_Word PredOrFunc_13,
  MR_Word HeadTerms_14,
  MR_Word STATE_VARIABLE_State_0_21,
  MR_Word * STATE_VARIABLE_State_22);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__format_annotated_clause_heads_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_annotated_clause_heads_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Lang_2,
  MR_Word VarNameSrc_3,
  MR_Word VarNamePrint_4,
  MR_Word WriteWhichModes_5,
  MR_Word PredId_6,
  MR_Word PredOrFunc_7,
  MR_Word HeadVar__8_8,
  MR_Word Context_9,
  MR_Word HeadTerms_10,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(
  MR_Word Info_3,
  MR_Word * ClausesInfo_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_types_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_types_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_types_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_types_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_types_9_p_0(
  MR_Word VarNamePrint_10,
  MR_Word TVarSet_11,
  MR_Word VarTable_12,
  MR_Word RttiVarMaps_13,
  MR_Word ProofMap_14,
  MR_Word ConstraintMap_15,
  MR_Word ExternalTypeParams_16,
  MR_Word STATE_VARIABLE_State_0_20,
  MR_Word * STATE_VARIABLE_State_21);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_var_types_loop_5_p_0(
  MR_Word VarNamePrint_1,
  MR_Word TypeVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_State_0_4,
  MR_Word * STATE_VARIABLE_State_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_markers_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_markers_3_p_0(
  MR_Word Markers_4,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__find_filled_in_procs_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred__report_clause_count_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_pred__report_clause_count_1_f_0(
  MR_Word Clauses_3);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_pred__clause_count_to_str_2_f_0(
  MR_String LangStr_4,
  MR_Integer Count_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__count_clause_langs_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Mer_0_2,
  MR_Integer * STATE_VARIABLE_Mer_3,
  MR_Integer STATE_VARIABLE_C_0_4,
  MR_Integer * STATE_VARIABLE_C_5,
  MR_Integer STATE_VARIABLE_Cs_0_6,
  MR_Integer * STATE_VARIABLE_Cs_7,
  MR_Integer STATE_VARIABLE_Java_0_8,
  MR_Integer * STATE_VARIABLE_Java_9);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__output_format_string_values_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_State_0_2,
  MR_Word * STATE_VARIABLE_State_3);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_1[11][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_2[3][4];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_3[6][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_4[11][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_5[2][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_6[3][10];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_7[2][9];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_8[3][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_9[2][8];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_10[1][6];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_1[11][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[1])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[3])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_pred_markers_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_clause_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_9[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_hlds_proc_static_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_9[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_hlds_proc_static_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_stack_slots_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_10[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_pred_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[5])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_pred_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_2[3][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__report_clause_count_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_3[6][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_4[11][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[2]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_5[2][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "::")) },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_6[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_7[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_8[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_arg_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_pred__type_ctor_info_table_locn_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_9[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_10[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
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
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_pred__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_pred__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
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
  { hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_name_ordered_write_which_modes_0 },
  { hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__enum_ordinal_ordered_write_which_modes_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_out__hlds_out_pred__hlds__hlds_out__hlds_out_pred__functor_number_map_write_which_modes_0,

};

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__report_clause_count__312__1_2_p_0(
  MR_String HeadVar__1_32,
  MR_String HeadVar__2_48)
{
  MR_bool succeeded = (strcmp(HeadVar__1_32, HeadVar__2_48) == 0);

  return succeeded;
}

static MR_Integer MR_CALL 
hlds__hlds_out__hlds_out_pred__IntroducedFrom__func__format_pred__231__1_1_f_0(
  MR_Word LambdaHeadVar__1_111)
{
  MR_Integer LambdaHeadVar__2_112;
  MR_Integer ProcId_141 = ((MR_Integer) ((MR_hl_field(0, LambdaHeadVar__1_111, 0))));

  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_141, &LambdaHeadVar__2_112);
  return LambdaHeadVar__2_112;
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_untuple_info_loop_6_p_0(
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word OldVar_9,
  MR_Word NewVars_10,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13)
{
  MR_String Var_18;
  MR_String Var_21;
  MR_Word Var_23;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_28;

  Var_18 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_7, VarNamePrint_8, OldVar_9);
  Var_21 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(VarTable_7, VarNamePrint_8, NewVars_10);
  mercury__string__builder__append_string_3_p_0((MR_String) "%\t", STATE_VARIABLE_State_0_12, &Var_23);
  mercury__string__builder__append_string_3_p_0(Var_18, Var_23, &Var_25);
  mercury__string__builder__append_string_3_p_0((MR_String) " -> ", Var_25, &Var_26);
  mercury__string__builder__append_string_3_p_0(Var_21, Var_26, &Var_28);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_28, STATE_VARIABLE_State_13);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_hlds_ps_coverage_point_5_p_0(
  MR_Word CoveragePointInfo_6,
  MR_Integer STATE_VARIABLE_SlotNum_0_11,
  MR_Integer * STATE_VARIABLE_SlotNum_12,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14)
{
  MR_Word RevGoalPath_9 = ((MR_Word) ((MR_hl_field(0, CoveragePointInfo_6, 0))));
  MR_Word PointType_10 = ((MR_Word) ((MR_hl_field(0, CoveragePointInfo_6, 1))));
  MR_String Var_21;
  MR_String Var_24;
  MR_Word Var_28;
  MR_Word Var_30;
  MR_String Var_31;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_43;

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
  mercury__string__builder__append_string_3_p_0((MR_String) "% coverage point slot ", STATE_VARIABLE_State_0_13, &Var_28);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), STATE_VARIABLE_SlotNum_0_11, &Var_31);
  mercury__string__builder__append_string_3_p_0(Var_31, Var_28, &Var_30);
  mercury__string__builder__append_string_3_p_0((MR_String) ": goal path <", Var_30, &Var_38);
  mercury__string__builder__append_string_3_p_0(Var_21, Var_38, &Var_40);
  mercury__string__builder__append_string_3_p_0((MR_String) ">, type ", Var_40, &Var_41);
  mercury__string__builder__append_string_3_p_0(Var_24, Var_41, &Var_43);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_43, STATE_VARIABLE_State_14);
  *STATE_VARIABLE_SlotNum_12 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SlotNum_0_11 + (MR_Unsigned) 1);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_hlds_ps_call_site_5_p_0(
  MR_Word CallSiteStaticData_6,
  MR_Integer STATE_VARIABLE_SlotNum_0_14,
  MR_Integer * STATE_VARIABLE_SlotNum_15,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17)
{
  MR_Word STATE_VARIABLE_State_1_20;
  MR_Word Var_107;
  MR_Word Var_109;
  MR_String Var_110;

  mercury__string__builder__append_string_3_p_0((MR_String) "% call site static slot ", STATE_VARIABLE_State_0_16, &Var_107);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), STATE_VARIABLE_SlotNum_0_14, &Var_110);
  mercury__string__builder__append_string_3_p_0(Var_110, Var_107, &Var_109);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_109, &STATE_VARIABLE_State_1_20);
  switch (MR_tag((MR_Word) CallSiteStaticData_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word CalleeRttiProcLabel_9 = ((MR_Word) ((MR_hl_field(0, CallSiteStaticData_6, 0))));
        MR_String TypeSubst_10 = ((MR_String) ((MR_hl_field(0, CallSiteStaticData_6, 1))));
        MR_String FileName_11 = ((MR_String) ((MR_hl_field(0, CallSiteStaticData_6, 2))));
        MR_Integer LineNumber_12 = ((MR_Integer) ((MR_hl_field(0, CallSiteStaticData_6, 3))));
        MR_Word GoalPath_13 = ((MR_Word) ((MR_hl_field(0, CallSiteStaticData_6, 4))));
        MR_Word STATE_VARIABLE_State_2_25;
        MR_String Var_27;
        MR_Word STATE_VARIABLE_State_3_31;
        MR_String Var_35;
        MR_Word Var_135;
        MR_Word Var_137;
        MR_Word Var_139;
        MR_Word Var_141;
        MR_Word Var_142;
        MR_Word Var_144;
        MR_Word Var_146;
        MR_Word Var_148;
        MR_Word Var_149;
        MR_Word Var_151;
        MR_String Var_152;

        Var_27 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0), ((MR_Box) (CalleeRttiProcLabel_9)));
        mercury__string__builder__append_string_3_p_0((MR_String) "% normal call to ", STATE_VARIABLE_State_1_20, &Var_135);
        mercury__string__builder__append_string_3_p_0(Var_27, Var_135, &Var_137);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_137, &STATE_VARIABLE_State_2_25);
        Var_35 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_13);
        mercury__string__builder__append_string_3_p_0((MR_String) "% type subst <", STATE_VARIABLE_State_2_25, &Var_139);
        mercury__string__builder__append_string_3_p_0(TypeSubst_10, Var_139, &Var_141);
        mercury__string__builder__append_string_3_p_0((MR_String) ">, goal path <", Var_141, &Var_142);
        mercury__string__builder__append_string_3_p_0(Var_35, Var_142, &Var_144);
        mercury__string__builder__append_string_3_p_0((MR_String) ">\n", Var_144, &STATE_VARIABLE_State_3_31);
        mercury__string__builder__append_string_3_p_0((MR_String) "% filename <", STATE_VARIABLE_State_3_31, &Var_146);
        mercury__string__builder__append_string_3_p_0(FileName_11, Var_146, &Var_148);
        mercury__string__builder__append_string_3_p_0((MR_String) ">, line number <", Var_148, &Var_149);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), LineNumber_12, &Var_152);
        mercury__string__builder__append_string_3_p_0(Var_152, Var_149, &Var_151);
        mercury__string__builder__append_string_3_p_0((MR_String) ">\n", Var_151, STATE_VARIABLE_State_17);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_State_5_94;
        MR_String Var_102;
        MR_String FileName_104 = ((MR_String) ((MR_hl_field(1, CallSiteStaticData_6, 0))));
        MR_Integer LineNumber_105 = ((MR_Integer) ((MR_hl_field(1, CallSiteStaticData_6, 1))));
        MR_Word GoalPath_106 = ((MR_Word) ((MR_hl_field(1, CallSiteStaticData_6, 2))));
        MR_Word Var_118;
        MR_Word Var_120;
        MR_Word Var_121;
        MR_Word Var_123;
        MR_String Var_124;
        MR_Word Var_131;
        MR_Word Var_133;

        mercury__string__builder__append_string_3_p_0((MR_String) "% special call\n", STATE_VARIABLE_State_1_20, &STATE_VARIABLE_State_5_94);
        Var_102 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_106);
        mercury__string__builder__append_string_3_p_0((MR_String) "% filename <", STATE_VARIABLE_State_5_94, &Var_118);
        mercury__string__builder__append_string_3_p_0(FileName_104, Var_118, &Var_120);
        mercury__string__builder__append_string_3_p_0((MR_String) ">, line number <", Var_120, &Var_121);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), LineNumber_105, &Var_124);
        mercury__string__builder__append_string_3_p_0(Var_124, Var_121, &Var_123);
        mercury__string__builder__append_string_3_p_0((MR_String) ">, goal path <", Var_123, &Var_131);
        mercury__string__builder__append_string_3_p_0(Var_102, Var_131, &Var_133);
        mercury__string__builder__append_string_3_p_0((MR_String) ">\n", Var_133, STATE_VARIABLE_State_17);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_State_5_68;
        MR_String Var_76;
        MR_String FileName_78 = ((MR_String) ((MR_hl_field(2, CallSiteStaticData_6, 0))));
        MR_Integer LineNumber_79 = ((MR_Integer) ((MR_hl_field(2, CallSiteStaticData_6, 1))));
        MR_Word GoalPath_80 = ((MR_Word) ((MR_hl_field(2, CallSiteStaticData_6, 2))));
        MR_Word Var_177;
        MR_Word Var_179;
        MR_Word Var_180;
        MR_Word Var_182;
        MR_String Var_183;
        MR_Word Var_190;
        MR_Word Var_192;

        mercury__string__builder__append_string_3_p_0((MR_String) "% higher order call\n", STATE_VARIABLE_State_1_20, &STATE_VARIABLE_State_5_68);
        Var_76 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_80);
        mercury__string__builder__append_string_3_p_0((MR_String) "% filename <", STATE_VARIABLE_State_5_68, &Var_177);
        mercury__string__builder__append_string_3_p_0(FileName_78, Var_177, &Var_179);
        mercury__string__builder__append_string_3_p_0((MR_String) ">, line number <", Var_179, &Var_180);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), LineNumber_79, &Var_183);
        mercury__string__builder__append_string_3_p_0(Var_183, Var_180, &Var_182);
        mercury__string__builder__append_string_3_p_0((MR_String) ">, goal path <", Var_182, &Var_190);
        mercury__string__builder__append_string_3_p_0(Var_76, Var_190, &Var_192);
        mercury__string__builder__append_string_3_p_0((MR_String) ">\n", Var_192, STATE_VARIABLE_State_17);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, CallSiteStaticData_6, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_State_5_81;
            MR_String Var_89;
            MR_String FileName_91 = ((MR_String) ((MR_hl_field(3, CallSiteStaticData_6, 1))));
            MR_Integer LineNumber_92 = ((MR_Integer) ((MR_hl_field(3, CallSiteStaticData_6, 2))));
            MR_Word GoalPath_93 = ((MR_Word) ((MR_hl_field(3, CallSiteStaticData_6, 3))));
            MR_Word Var_160;
            MR_Word Var_162;
            MR_Word Var_163;
            MR_Word Var_165;
            MR_String Var_166;
            MR_Word Var_173;
            MR_Word Var_175;

            mercury__string__builder__append_string_3_p_0((MR_String) "% method call\n", STATE_VARIABLE_State_1_20, &STATE_VARIABLE_State_5_81);
            Var_89 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_93);
            mercury__string__builder__append_string_3_p_0((MR_String) "% filename <", STATE_VARIABLE_State_5_81, &Var_160);
            mercury__string__builder__append_string_3_p_0(FileName_91, Var_160, &Var_162);
            mercury__string__builder__append_string_3_p_0((MR_String) ">, line number <", Var_162, &Var_163);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), LineNumber_92, &Var_166);
            mercury__string__builder__append_string_3_p_0(Var_166, Var_163, &Var_165);
            mercury__string__builder__append_string_3_p_0((MR_String) ">, goal path <", Var_165, &Var_173);
            mercury__string__builder__append_string_3_p_0(Var_89, Var_173, &Var_175);
            mercury__string__builder__append_string_3_p_0((MR_String) ">\n", Var_175, STATE_VARIABLE_State_17);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_State_5_45;
            MR_String Var_60;
            MR_String FileName_64 = ((MR_String) ((MR_hl_field(3, CallSiteStaticData_6, 1))));
            MR_Integer LineNumber_65 = ((MR_Integer) ((MR_hl_field(3, CallSiteStaticData_6, 2))));
            MR_Word GoalPath_66 = ((MR_Word) ((MR_hl_field(3, CallSiteStaticData_6, 3))));
            MR_Word Var_194;
            MR_Word Var_196;
            MR_Word Var_197;
            MR_Word Var_199;
            MR_String Var_200;
            MR_Word Var_207;
            MR_Word Var_209;

            mercury__string__builder__append_string_3_p_0((MR_String) "% callback\n", STATE_VARIABLE_State_1_20, &STATE_VARIABLE_State_5_45);
            Var_60 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_66);
            mercury__string__builder__append_string_3_p_0((MR_String) "% filename <", STATE_VARIABLE_State_5_45, &Var_194);
            mercury__string__builder__append_string_3_p_0(FileName_64, Var_194, &Var_196);
            mercury__string__builder__append_string_3_p_0((MR_String) ">, line number <", Var_196, &Var_197);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), LineNumber_65, &Var_200);
            mercury__string__builder__append_string_3_p_0(Var_200, Var_197, &Var_199);
            mercury__string__builder__append_string_3_p_0((MR_String) ">, goal path <", Var_199, &Var_207);
            mercury__string__builder__append_string_3_p_0(Var_60, Var_207, &Var_209);
            mercury__string__builder__append_string_3_p_0((MR_String) ">\n", Var_209, STATE_VARIABLE_State_17);
          }
          break;
      }
      break;
  }
  *STATE_VARIABLE_SlotNum_15 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SlotNum_0_14 + (MR_Unsigned) 1);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_table_tvar_map_entry_4_p_0(
  MR_Word TVarSet_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13)
{
  MR_Word TVar_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word Locn_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_String TVarStr_9;
  MR_Word STATE_VARIABLE_State_1_17;
  MR_Word Var_34;
  MR_Word Var_36;

  TVarStr_9 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_5, (MR_Integer) 1, TVar_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "% typeinfo for ", STATE_VARIABLE_State_0_12, &Var_34);
  mercury__string__builder__append_string_3_p_0(TVarStr_9, Var_34, &Var_36);
  mercury__string__builder__append_string_3_p_0((MR_String) " -> ", Var_36, &STATE_VARIABLE_State_1_17);
  if (((MR_tag((MR_Word) Locn_7)) == (MR_Integer) 0))
  {
    MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(0, Locn_7, 0))));
    MR_Word Var_59;
    MR_Word Var_61;
    MR_String Var_62;

    mercury__string__builder__append_string_3_p_0((MR_String) "direct in register ", STATE_VARIABLE_State_1_17, &Var_59);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), N_10, &Var_62);
    mercury__string__builder__append_string_3_p_0(Var_62, Var_59, &Var_61);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_61, STATE_VARIABLE_State_13);
  }
  else
  {
    MR_Integer O_11 = ((MR_Integer) ((MR_hl_field(1, Locn_7, 1))));
    MR_Integer N_32 = ((MR_Integer) ((MR_hl_field(1, Locn_7, 0))));
    MR_Word Var_38;
    MR_Word Var_40;
    MR_String Var_41;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_String Var_51;

    mercury__string__builder__append_string_3_p_0((MR_String) "indirect from register ", STATE_VARIABLE_State_1_17, &Var_38);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), N_32, &Var_41);
    mercury__string__builder__append_string_3_p_0(Var_41, Var_38, &Var_40);
    mercury__string__builder__append_string_3_p_0((MR_String) ", offset ", Var_40, &Var_48);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), O_11, &Var_51);
    mercury__string__builder__append_string_3_p_0(Var_51, Var_48, &Var_50);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_50, STATE_VARIABLE_State_13);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_table_arg_info_4_p_0(
  MR_Word TVarSet_5,
  MR_Word ArgInfo_6,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14)
{
  MR_Integer HeadVarNum_8 = ((MR_Integer) ((MR_hl_field(0, ArgInfo_6, 0))));
  MR_String HeadVarName_9 = ((MR_String) ((MR_hl_field(0, ArgInfo_6, 1))));
  MR_Integer SlotNum_10 = ((MR_Integer) ((MR_hl_field(0, ArgInfo_6, 2))));
  MR_Word Type_11 = ((MR_Word) ((MR_hl_field(0, ArgInfo_6, 3))));
  MR_String TVarStr_12;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_String Var_33;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_String Var_43;
  MR_Word Var_50;
  MR_Word Var_52;

  TVarStr_12 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_5, (MR_Integer) 1, Type_11);
  mercury__string__builder__append_string_3_p_0((MR_String) "% ", STATE_VARIABLE_State_0_13, &Var_27);
  mercury__string__builder__append_string_3_p_0(HeadVarName_9, Var_27, &Var_29);
  mercury__string__builder__append_string_3_p_0((MR_String) " / ", Var_29, &Var_30);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), HeadVarNum_8, &Var_33);
  mercury__string__builder__append_string_3_p_0(Var_33, Var_30, &Var_32);
  mercury__string__builder__append_string_3_p_0((MR_String) " in slot ", Var_32, &Var_40);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), SlotNum_10, &Var_43);
  mercury__string__builder__append_string_3_p_0(Var_43, Var_40, &Var_42);
  mercury__string__builder__append_string_3_p_0((MR_String) ", type ", Var_42, &Var_50);
  mercury__string__builder__append_string_3_p_0(TVarStr_12, Var_50, &Var_52);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_52, STATE_VARIABLE_State_14);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_rtti_var_info_7_p_0(
  MR_Word VarNamePrint_8,
  MR_Word TVarSet_9,
  MR_Word VarTable_10,
  MR_Word RttiVarMaps_11,
  MR_Word Var_12,
  MR_Word STATE_VARIABLE_State_0_19,
  MR_Word * STATE_VARIABLE_State_20)
{
  MR_Integer VarNum_14;
  MR_String VarStr_15;
  MR_Word VarInfo_16;
  MR_Word STATE_VARIABLE_State_1_23;
  MR_Word STATE_VARIABLE_State_3_31;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_String Var_48;

  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_12, &VarNum_14);
  VarStr_15 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_10, VarNamePrint_8, Var_12);
  mercury__string__builder__append_string_3_p_0((MR_String) "% ", STATE_VARIABLE_State_0_19, &Var_42);
  mercury__string__builder__append_string_3_p_0(VarStr_15, Var_42, &Var_44);
  mercury__string__builder__append_string_3_p_0((MR_String) " (number ", Var_44, &Var_45);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), VarNum_14, &Var_48);
  mercury__string__builder__append_string_3_p_0(Var_48, Var_45, &Var_47);
  mercury__string__builder__append_string_3_p_0((MR_String) ") -> ", Var_47, &STATE_VARIABLE_State_1_23);
  hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(RttiVarMaps_11, Var_12, &VarInfo_16);
  switch (MR_tag((MR_Word) VarInfo_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_out.hlds_out_pred.format_rtti_var_info\'/7", (MR_String) "non rtti var");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Type_17 = ((MR_Word) ((MR_hl_field(1, VarInfo_16, 0))));
        MR_Word STATE_VARIABLE_State_2_29;

        mercury__string__builder__append_string_3_p_0((MR_String) "type_info for ", STATE_VARIABLE_State_1_23, &STATE_VARIABLE_State_2_29);
        parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), TVarSet_9, VarNamePrint_8, Type_17, STATE_VARIABLE_State_2_29, &STATE_VARIABLE_State_3_31);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Constraint_18 = ((MR_Word) ((MR_hl_field(2, VarInfo_16, 0))));
        MR_Word STATE_VARIABLE_State_4_33;

        mercury__string__builder__append_string_3_p_0((MR_String) "typeclass_info for ", STATE_VARIABLE_State_1_23, &STATE_VARIABLE_State_4_33);
        parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_116_114_97_105_110_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), TVarSet_9, VarNamePrint_8, Constraint_18, STATE_VARIABLE_State_4_33, &STATE_VARIABLE_State_3_31);
      }
      break;
  }
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_3_31, STATE_VARIABLE_State_20);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_typeclass_info_var_7_p_0(
  MR_Word VarNamePrint_8,
  MR_Word TVarSet_9,
  MR_Word VarTable_10,
  MR_Word RttiVarMaps_11,
  MR_Word Constraint_12,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16)
{
  MR_Word Var_14;
  MR_Word STATE_VARIABLE_State_1_18;
  MR_Word STATE_VARIABLE_State_2_20;
  MR_Word STATE_VARIABLE_State_3_22;
  MR_Word STATE_VARIABLE_State_4_24;

  mercury__string__builder__append_string_3_p_0((MR_String) "% ", STATE_VARIABLE_State_0_15, &STATE_VARIABLE_State_1_18);
  parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_116_114_97_105_110_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), TVarSet_9, VarNamePrint_8, Constraint_12, STATE_VARIABLE_State_1_18, &STATE_VARIABLE_State_2_20);
  mercury__string__builder__append_string_3_p_0((MR_String) " -> ", STATE_VARIABLE_State_2_20, &STATE_VARIABLE_State_3_22);
  hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(RttiVarMaps_11, Constraint_12, &Var_14);
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), VarTable_10, VarNamePrint_8, Var_14, STATE_VARIABLE_State_3_22, &STATE_VARIABLE_State_4_24);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_4_24, STATE_VARIABLE_State_16);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_type_info_locn_7_p_0(
  MR_Word VarNamePrint_8,
  MR_Word TVarSet_9,
  MR_Word VarTable_10,
  MR_Word RttiVarMaps_11,
  MR_Word TVar_12,
  MR_Word STATE_VARIABLE_State_0_21,
  MR_Word * STATE_VARIABLE_State_22)
{
  MR_String TVarStr_14;
  MR_Integer TVarNum_15;
  MR_Word Locn_16;
  MR_Word Var_17;
  MR_Integer VarNum_20;
  MR_Word STATE_VARIABLE_State_1_25;
  MR_Word STATE_VARIABLE_State_2_32;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_String Var_56;
  MR_Word Var_82;
  MR_Word Var_84;
  MR_String Var_85;

  TVarStr_14 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_9, VarNamePrint_8, TVar_12);
  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVar_12, &TVarNum_15);
  mercury__string__builder__append_string_3_p_0((MR_String) "% ", STATE_VARIABLE_State_0_21, &Var_50);
  mercury__string__builder__append_string_3_p_0(TVarStr_14, Var_50, &Var_52);
  mercury__string__builder__append_string_3_p_0((MR_String) "(number ", Var_52, &Var_53);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), TVarNum_15, &Var_56);
  mercury__string__builder__append_string_3_p_0(Var_56, Var_53, &Var_55);
  mercury__string__builder__append_string_3_p_0((MR_String) ") -> ", Var_55, &STATE_VARIABLE_State_1_25);
  hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_11, TVar_12, &Locn_16);
  if (((MR_tag((MR_Word) Locn_16)) == (MR_Integer) 0))
  {
    MR_String VarStr_18;
    MR_Word Var_78;
    MR_Word Var_80;

    Var_17 = ((MR_Word) ((MR_hl_field(0, Locn_16, 0))));
    VarStr_18 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_10, VarNamePrint_8, Var_17);
    mercury__string__builder__append_string_3_p_0((MR_String) "type_info(", STATE_VARIABLE_State_1_25, &Var_78);
    mercury__string__builder__append_string_3_p_0(VarStr_18, Var_78, &Var_80);
    mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_80, &STATE_VARIABLE_State_2_32);
  }
  else
  {
    MR_Integer Index_19;
    MR_String VarStr_47;
    MR_Word Var_64;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_String Var_70;

    Var_17 = ((MR_Word) ((MR_hl_field(1, Locn_16, 0))));
    Index_19 = ((MR_Integer) ((MR_hl_field(1, Locn_16, 1))));
    VarStr_47 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_10, VarNamePrint_8, Var_17);
    mercury__string__builder__append_string_3_p_0((MR_String) "typeclass_info(", STATE_VARIABLE_State_1_25, &Var_64);
    mercury__string__builder__append_string_3_p_0(VarStr_47, Var_64, &Var_66);
    mercury__string__builder__append_string_3_p_0((MR_String) ", ", Var_66, &Var_67);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), Index_19, &Var_70);
    mercury__string__builder__append_string_3_p_0(Var_70, Var_67, &Var_69);
    mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_69, &STATE_VARIABLE_State_2_32);
  }
  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_17, &VarNum_20);
  mercury__string__builder__append_string_3_p_0((MR_String) " (number ", STATE_VARIABLE_State_2_32, &Var_82);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), VarNum_20, &Var_85);
  mercury__string__builder__append_string_3_p_0(Var_85, Var_82, &Var_84);
  mercury__string__builder__append_string_3_p_0((MR_String) ")\n", Var_84, STATE_VARIABLE_State_22);
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word HeadVar__3_3)
{
  MR_Word AnnotatedTerm_9;
  MR_Word HeadTerm_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word Mode_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_Word Var_11;
  MR_Word Var_13;
  MR_Word Var_14;

  Var_14 = parse_tree__parse_tree_to_term__mode_to_term_with_context_3_f_0(Lang_5, Context_6, Mode_8);
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (HeadTerm_7));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_13));
  }
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[1]), Var_11, Context_6, &AnnotatedTerm_9);
  return AnnotatedTerm_9;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_constraint_map_entry_6_p_0(
  MR_Word VarNamePrint_7,
  MR_Word VarSet_8,
  MR_Word ConstraintId_9,
  MR_Word ProgConstraint_10,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13)
{
  MR_Word STATE_VARIABLE_State_1_15;
  MR_Word STATE_VARIABLE_State_2_16;
  MR_Word STATE_VARIABLE_State_3_18;
  MR_Word STATE_VARIABLE_State_4_20;
  MR_Word ConstraintType_23;
  MR_Word GoalId_24;
  MR_Integer N_25;
  MR_Char ConstraintTypeChar_26;
  MR_Unsigned GoalIdNum_27;
  MR_Word Var_36;
  MR_Word Var_38;
  MR_String Var_39;
  MR_Word Var_46;
  MR_Word Var_48;
  MR_String Var_50;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_String Var_60;

  mercury__string__builder__append_string_3_p_0((MR_String) "% ", STATE_VARIABLE_State_0_12, &STATE_VARIABLE_State_1_15);
  ConstraintType_23 = ((MR_Unsigned) ((MR_hl_field(0, ConstraintId_9, 0))) & (MR_Integer) 1);
  GoalId_24 = ((MR_Word) ((MR_hl_field(0, ConstraintId_9, 1))));
  N_25 = ((MR_Integer) ((MR_hl_field(0, ConstraintId_9, 2))));
  switch (ConstraintType_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ConstraintTypeChar_26 = (MR_Char) 69;
      break;
    case (MR_Integer) 0:
      ConstraintTypeChar_26 = (MR_Char) 65;
      break;
  }
  GoalIdNum_27 = (MR_Unsigned) (GoalId_24);
  mercury__string__builder__append_string_3_p_0((MR_String) "(", STATE_VARIABLE_State_1_15, &Var_36);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), ConstraintTypeChar_26, &Var_39);
  mercury__string__builder__append_string_3_p_0(Var_39, Var_36, &Var_38);
  mercury__string__builder__append_string_3_p_0((MR_String) ", ", Var_38, &Var_46);
  mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), (MR_Integer) 1, GoalIdNum_27, &Var_50);
  mercury__string__builder__append_string_3_p_0(Var_50, Var_46, &Var_48);
  mercury__string__builder__append_string_3_p_0((MR_String) ", ", Var_48, &Var_57);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), N_25, &Var_60);
  mercury__string__builder__append_string_3_p_0(Var_60, Var_57, &Var_59);
  mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_59, &STATE_VARIABLE_State_2_16);
  mercury__string__builder__append_string_3_p_0((MR_String) ": ", STATE_VARIABLE_State_2_16, &STATE_VARIABLE_State_3_18);
  parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_116_114_97_105_110_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), VarSet_8, VarNamePrint_7, ProgConstraint_10, STATE_VARIABLE_State_3_18, &STATE_VARIABLE_State_4_20);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_4_20, STATE_VARIABLE_State_13);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_obsolete_in_favour_of_3_p_0(
  MR_Word ObsoleteInFavourOf_4,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, ObsoleteInFavourOf_4, 0))));
  MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(0, ObsoleteInFavourOf_4, 1))));
  MR_String Var_14;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_String Var_24;

  Var_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "%    ", STATE_VARIABLE_State_0_8, &Var_18);
  mercury__string__builder__append_string_3_p_0(Var_14, Var_18, &Var_20);
  mercury__string__builder__append_string_3_p_0((MR_String) "/", Var_20, &Var_21);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), Arity_7, &Var_24);
  mercury__string__builder__append_string_3_p_0(Var_24, Var_21, &Var_23);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_23, STATE_VARIABLE_State_9);
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_table_arg_infos_5_p_0(
  MR_Word Stream_6,
  MR_Word TVarSet_7,
  MR_Word TableArgInfos_8)
{
  MR_Word State0_10;
  MR_Word State_11;
  MR_String Str_12;

  State0_10 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_pred__format_table_arg_infos_4_p_0(TVarSet_7, TableArgInfos_8, State0_10, &State_11);
  Str_12 = mercury__string__builder__to_string_1_f_0(State_11);
  mercury__io__write_string_4_p_0(Stream_6, Str_12);
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clause_15_p_0(
  MR_Word Info_16,
  MR_Word Stream_17,
  MR_Word Lang_18,
  MR_Word ModuleInfo_19,
  MR_Word PredId_20,
  MR_Word PredOrFunc_21,
  MR_Word VarNameSrc_22,
  MR_Word TypeQual_23,
  MR_Word VarNamePrint_24,
  MR_Word WriteWhichModes_25,
  MR_Unsigned Indent_26,
  MR_Word HeadTerms_27,
  MR_Word Clause_28)
{
  MR_Word State0_30;
  MR_Word State_31;
  MR_String Str_32;

  State0_30 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_pred__format_clause_14_p_0(Info_16, Lang_18, ModuleInfo_19, PredId_20, PredOrFunc_21, VarNameSrc_22, TypeQual_23, VarNamePrint_24, WriteWhichModes_25, Indent_26, HeadTerms_27, Clause_28, State0_30, &State_31);
  Str_32 = mercury__string__builder__to_string_1_f_0(State_31);
  mercury__io__write_string_4_p_0(Stream_17, Str_32);
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Word ModuleInfo_12,
  MR_Word PredId_13,
  MR_Word PredInfo_14)
{
  MR_Word State0_16;
  MR_Word State_17;
  MR_String Str_18;

  State0_16 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_pred__format_pred_7_p_0(Info_9, Lang_11, ModuleInfo_12, PredId_13, PredInfo_14, State0_16, &State_17);
  Str_18 = mercury__string__builder__to_string_1_f_0(State_17);
  mercury__io__write_string_4_p_0(Stream_10, Str_18);
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv3_LambdaHeadVar__2_112;

  conv3_LambdaHeadVar__2_112 = hlds__hlds_out__hlds_out_pred__IntroducedFrom__func__format_pred__231__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_112));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_State_9;

  hlds__hlds_out__hlds_out_pred__format_obsolete_in_favour_of_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_State_9);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_State_9));
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_7_p_0(
  MR_Word Info_8,
  MR_Word Lang_9,
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_Word PredInfo_12,
  MR_Word STATE_VARIABLE_State_0_82,
  MR_Word * STATE_VARIABLE_State_83)
{
  MR_bool succeeded;
  MR_Word PredModuleName_14;
  MR_String PredName_15;
  MR_Word PredOrFunc_16;
  MR_Word ArgTypes_17;
  MR_Word ExistQVars_18;
  MR_Word TVarSet_19;
  MR_Word ClausesInfo_20;
  MR_Word PredStatus_21;
  MR_Word Markers_22;
  MR_Word ClassContext_23;
  MR_Word ProofMap_24;
  MR_Word ConstraintMap_25;
  MR_Word Purity_26;
  MR_Word ExternalTypeParams_27;
  MR_Word VarNameRemap_28;
  MR_Word DumpOptions_29;
  MR_Word DumpVarNums_30;
  MR_Word VarNamePrint_31;
  MR_Word ProcTable_32;
  MR_Word ProcIdsInfos_33;
  MR_Word FilledInProcIdsInfos_34;
  MR_Word DumpClauses_35;
  MR_Word PrintedPred_78;
  MR_Word PrintedProc_81;
  MR_Word STATE_VARIABLE_State_15_135;
  MR_Word STATE_VARIABLE_State_16_136;

  PredModuleName_14 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_12);
  PredName_15 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_12);
  PredOrFunc_16 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_12);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_12, &ArgTypes_17);
  hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_12, &ExistQVars_18);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_12, &TVarSet_19);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_12, &ClausesInfo_20);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_12, &PredStatus_21);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_12, &Markers_22);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_12, &ClassContext_23);
  hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(PredInfo_12, &ProofMap_24);
  hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(PredInfo_12, &ConstraintMap_25);
  hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_12, &Purity_26);
  hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(PredInfo_12, &ExternalTypeParams_27);
  hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo_12, &VarNameRemap_28);
  DumpOptions_29 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
  DumpVarNums_30 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_29, 0))) >> 15)) & (MR_Integer) 1);
  switch (DumpVarNums_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      VarNamePrint_31 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      VarNamePrint_31 = (MR_Integer) 1;
      break;
  }
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_12, &ProcTable_32);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_32, &ProcIdsInfos_33);
  hlds__hlds_out__hlds_out_pred__find_filled_in_procs_2_p_0(ProcIdsInfos_33, &FilledInProcIdsInfos_34);
  DumpClauses_35 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_29, 0))) >> 9)) & (MR_Integer) 1);
  switch (DumpClauses_35) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        PrintedPred_78 = (MR_Integer) 0;
        STATE_VARIABLE_State_15_135 = STATE_VARIABLE_State_0_82;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredSymName_36;
        MR_Word VarSet_40;
        MR_Word ExplicitVarTypes_41;
        MR_Word VarTable0_42;
        MR_Word RttiVarMaps_43;
        MR_Word HeadVars_45;
        MR_Word ClausesRep_46;
        MR_Word VarNameSrc_50;
        MR_Word VarTable_51;
        MR_Integer PredIdInt_52;
        MR_String PredOrFuncStr_53;
        MR_String PredStatusStr_54;
        MR_Word GoalType_55;
        MR_Word MaybeObsoleteInFavourOf_56;
        MR_Word MaybeFormatCall_58;
        MR_Word Clauses_63;
        MR_Word Origin_76;
        MR_String OriginStr_77;
        MR_Word STATE_VARIABLE_State_1_85;
        MR_Word STATE_VARIABLE_State_3_90;
        MR_Word STATE_VARIABLE_State_4_99;
        MR_String Var_101;
        MR_Word STATE_VARIABLE_State_5_103;
        MR_Word STATE_VARIABLE_State_7_107;
        MR_Word STATE_VARIABLE_State_8_108;
        MR_Word STATE_VARIABLE_State_9_109;
        MR_Word STATE_VARIABLE_State_10_110;
        MR_Word STATE_VARIABLE_State_12_124;
        MR_Word Var_240;
        MR_Word Var_242;
        MR_String Var_243;
        MR_Word Var_250;
        MR_Word Var_252;
        MR_Word Var_253;
        MR_Word Var_255;
        MR_Word Var_257;
        MR_Word Var_259;

        {
          PredSymName_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, PredSymName_36, 0) = ((MR_Box) (PredModuleName_14));
          MR_hl_field(1, PredSymName_36, 1) = ((MR_Box) (PredName_15));
        }
        switch (PredOrFunc_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word FuncArgTypes_38;
              MR_Word FuncRetType_39;
              MR_Box conv0_FuncRetType_39;

              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_17, &FuncArgTypes_38, &conv0_FuncRetType_39);
              FuncRetType_39 = ((MR_Word) (conv0_FuncRetType_39));
              parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_12_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), TVarSet_19, VarNamePrint_31, ExistQVars_18, PredSymName_36, FuncArgTypes_38, FuncRetType_39, (MR_Word) ((MR_Unsigned) 0U), Purity_26, ClassContext_23, STATE_VARIABLE_State_0_82, &STATE_VARIABLE_State_1_85);
            }
            break;
          case (MR_Integer) 0:
            parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), TVarSet_19, VarNamePrint_31, ExistQVars_18, PredSymName_36, ArgTypes_17, (MR_Word) ((MR_Unsigned) 0U), Purity_26, ClassContext_23, STATE_VARIABLE_State_0_82, &STATE_VARIABLE_State_1_85);
            break;
        }
        VarSet_40 = ((MR_Word) ((MR_hl_field(0, ClausesInfo_20, 0))));
        ExplicitVarTypes_41 = ((MR_Word) ((MR_hl_field(0, ClausesInfo_20, 1))));
        VarTable0_42 = ((MR_Word) ((MR_hl_field(0, ClausesInfo_20, 2))));
        RttiVarMaps_43 = ((MR_Word) ((MR_hl_field(0, ClausesInfo_20, 3))));
        HeadVars_45 = ((MR_Word) ((MR_hl_field(0, ClausesInfo_20, 5))));
        ClausesRep_46 = ((MR_Word) ((MR_hl_field(0, ClausesInfo_20, 6))));
        succeeded = mercury__varset__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_40);
        if (succeeded)
          {
            VarNameSrc_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, VarNameSrc_50, 0) = ((MR_Box) (VarTable0_42));
          }
        else
          {
            VarNameSrc_50 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, VarNameSrc_50, 0) = ((MR_Box) (VarSet_40));
          }
        succeeded = parse_tree__var_table__var_table_is_empty_1_p_0(VarTable0_42);
        if (succeeded)
          hlds__var_table_hlds__make_var_table_4_p_0(ModuleInfo_10, VarSet_40, ExplicitVarTypes_41, &VarTable_51);
        else
          VarTable_51 = VarTable0_42;
        hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_11, &PredIdInt_52);
        PredOrFuncStr_53 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_16);
        PredStatusStr_54 = hlds__hlds_out__hlds_out_util__pred_import_status_to_string_1_f_0(PredStatus_21);
        hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_12, &GoalType_55);
        mercury__string__builder__append_string_3_p_0((MR_String) "% pred id: ", STATE_VARIABLE_State_1_85, &Var_240);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), PredIdInt_52, &Var_243);
        mercury__string__builder__append_string_3_p_0(Var_243, Var_240, &Var_242);
        mercury__string__builder__append_string_3_p_0((MR_String) ", category: ", Var_242, &Var_250);
        mercury__string__builder__append_string_3_p_0(PredOrFuncStr_53, Var_250, &Var_252);
        mercury__string__builder__append_string_3_p_0((MR_String) ", status ", Var_252, &Var_253);
        mercury__string__builder__append_string_3_p_0(PredStatusStr_54, Var_253, &Var_255);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_255, &STATE_VARIABLE_State_3_90);
        Var_101 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_goal_type_0), ((MR_Box) (GoalType_55)));
        mercury__string__builder__append_string_3_p_0((MR_String) "% goal_type: ", STATE_VARIABLE_State_3_90, &Var_257);
        mercury__string__builder__append_string_3_p_0(Var_101, Var_257, &Var_259);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_259, &STATE_VARIABLE_State_4_99);
        hlds__hlds_out__hlds_out_pred__format_pred_markers_3_p_0(Markers_22, STATE_VARIABLE_State_4_99, &STATE_VARIABLE_State_5_103);
        hlds__hlds_pred__pred_info_get_obsolete_in_favour_of_2_p_0(PredInfo_12, &MaybeObsoleteInFavourOf_56);
        if ((MaybeObsoleteInFavourOf_56 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_State_7_107 = STATE_VARIABLE_State_5_103;
        else
        {
          MR_Word ObsoleteInFavourOf_57 = ((MR_Word) ((MR_hl_field(1, MaybeObsoleteInFavourOf_56, 0))));
          MR_Word STATE_VARIABLE_State_6_105;
          MR_Box conv2_STATE_VARIABLE_State_7_107;

          mercury__string__builder__append_string_3_p_0((MR_String) "% obsolete in favour of one of\n", STATE_VARIABLE_State_5_103, &STATE_VARIABLE_State_6_105);
          mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[9]), ObsoleteInFavourOf_57, ((MR_Box) (STATE_VARIABLE_State_6_105)), &conv2_STATE_VARIABLE_State_7_107);
          STATE_VARIABLE_State_7_107 = ((MR_Word) (conv2_STATE_VARIABLE_State_7_107));
        }
        hlds__hlds_pred__pred_info_get_format_call_info_2_p_0(PredInfo_12, &MaybeFormatCall_58);
        if ((MaybeFormatCall_58 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_State_8_108 = STATE_VARIABLE_State_7_107;
        else
        {
          MR_Word FormatCall_59 = ((MR_Word) ((MR_hl_field(1, MaybeFormatCall_58, 0))));
          MR_Word OoMFormatStringValues_61 = ((MR_Word) ((MR_hl_field(0, FormatCall_59, 1))));
          MR_Word FormatStringValues_62;

          FormatStringValues_62 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0), OoMFormatStringValues_61);
          hlds__hlds_out__hlds_out_pred__output_format_string_values_3_p_0(FormatStringValues_62, STATE_VARIABLE_State_7_107, &STATE_VARIABLE_State_8_108);
        }
        hlds__hlds_out__hlds_out_pred__format_pred_types_9_p_0(VarNamePrint_31, TVarSet_19, VarTable_51, RttiVarMaps_43, ProofMap_24, ConstraintMap_25, ExternalTypeParams_27, STATE_VARIABLE_State_8_108, &STATE_VARIABLE_State_9_109);
        hlds__hlds_out__hlds_out_pred__format_pred_proc_var_name_remap_4_p_0(VarNameSrc_50, VarNameRemap_28, STATE_VARIABLE_State_9_109, &STATE_VARIABLE_State_10_110);
        hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_46, &Clauses_63);
        if ((FilledInProcIdsInfos_34 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word ProcNums_68;
          MR_Word FilledInProcNums_69;
          MR_Word STATE_VARIABLE_State_11_115;
          MR_String Var_117;
          MR_String Var_120;
          MR_Word Var_265;
          MR_Word Var_267;
          MR_Word Var_268;
          MR_Word Var_270;

          ProcNums_68 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[10]), ProcIdsInfos_33);
          FilledInProcNums_69 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[10]), FilledInProcIdsInfos_34);
          Var_117 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[0]), ((MR_Box) (ProcNums_68)));
          Var_120 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[0]), ((MR_Box) (FilledInProcNums_69)));
          mercury__string__builder__append_string_3_p_0((MR_String) "% procedures: ", STATE_VARIABLE_State_10_110, &Var_265);
          mercury__string__builder__append_string_3_p_0(Var_117, Var_265, &Var_267);
          mercury__string__builder__append_string_3_p_0((MR_String) ", filled in ", Var_267, &Var_268);
          mercury__string__builder__append_string_3_p_0(Var_120, Var_268, &Var_270);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_270, &STATE_VARIABLE_State_11_115);
          if ((Clauses_63 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String ClauseCountReport_70;
            MR_Word Var_272;
            MR_Word Var_274;

            ClauseCountReport_70 = hlds__hlds_out__hlds_out_pred__report_clause_count_1_f_0(Clauses_63);
            mercury__string__builder__append_string_3_p_0((MR_String) "% clause count: ", STATE_VARIABLE_State_11_115, &Var_272);
            mercury__string__builder__append_string_3_p_0(ClauseCountReport_70, Var_272, &Var_274);
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_274, &STATE_VARIABLE_State_12_124);
          }
          else
          {
            MR_Word InfoForClauses_73;

            hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(Info_8, &InfoForClauses_73);
            hlds__hlds_out__hlds_out_pred__format_clauses_12_p_0(InfoForClauses_73, Lang_9, ModuleInfo_10, PredId_11, PredOrFunc_16, VarNameSrc_50, (MR_Word) ((MR_Unsigned) 0U), VarNamePrint_31, HeadVars_45, Clauses_63, STATE_VARIABLE_State_11_115, &STATE_VARIABLE_State_12_124);
          }
        }
        else
        {
          MR_String ClauseCountReport_143;
          MR_Word Var_261;
          MR_Word Var_263;

          ClauseCountReport_143 = hlds__hlds_out__hlds_out_pred__report_clause_count_1_f_0(Clauses_63);
          mercury__string__builder__append_string_3_p_0((MR_String) "% clause count: ", STATE_VARIABLE_State_10_110, &Var_261);
          mercury__string__builder__append_string_3_p_0(ClauseCountReport_143, Var_261, &Var_263);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_263, &STATE_VARIABLE_State_12_124);
        }
        hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_12, &Origin_76);
        OriginStr_77 = hlds__pred_name__dump_origin_4_f_0(TVarSet_19, VarNamePrint_31, (MR_String) "% origin: ", Origin_76);
        mercury__string__builder__append_string_3_p_0(OriginStr_77, STATE_VARIABLE_State_12_124, &STATE_VARIABLE_State_15_135);
        PrintedPred_78 = (MR_Integer) 1;
      }
      break;
  }
  if ((FilledInProcIdsInfos_34 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    PrintedProc_81 = (MR_Integer) 0;
    STATE_VARIABLE_State_16_136 = STATE_VARIABLE_State_15_135;
  }
  else
  {
    hlds__hlds_out__hlds_out_pred__format_procs_loop_8_p_0(Info_8, VarNamePrint_31, ModuleInfo_10, PredId_11, PredInfo_12, FilledInProcIdsInfos_34, STATE_VARIABLE_State_15_135, &STATE_VARIABLE_State_16_136);
    PrintedProc_81 = (MR_Integer) 1;
  }
  succeeded = (PrintedPred_78 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (PrintedProc_81 == (MR_Integer) 1);
  if (succeeded)
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_16_136, STATE_VARIABLE_State_83);
  else
    *STATE_VARIABLE_State_83 = STATE_VARIABLE_State_16_136;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_procs_loop_8_p_0(
  MR_Word Info_1,
  MR_Word VarNamePrint_2,
  MR_Word ModuleInfo_3,
  MR_Word PredId_4,
  MR_Word PredInfo_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_State_0_7,
  MR_Word * STATE_VARIABLE_State_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_8 = STATE_VARIABLE_State_0_7;
    else
    {
      MR_Integer ProcId_22;
      MR_Word ProcInfo_23;
      MR_Word ProcIdsInfos_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word STATE_VARIABLE_State_1_29;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_State_0_7;

      ProcId_22 = ((MR_Integer) ((MR_hl_field(0, Var_28, 0))));
      ProcInfo_23 = ((MR_Word) ((MR_hl_field(0, Var_28, 1))));
      hlds__hlds_out__hlds_out_pred__format_proc_9_p_0(Info_1, VarNamePrint_2, ModuleInfo_3, PredId_4, PredInfo_5, ProcId_22, ProcInfo_23, STATE_VARIABLE_State_0_7, &STATE_VARIABLE_State_1_29);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = ProcIdsInfos_24;
      next_value_of_STATE_VARIABLE_State_0_7 = STATE_VARIABLE_State_1_29;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_State_0_7 = next_value_of_STATE_VARIABLE_State_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_proc_9_p_0(
  MR_Word Info_10,
  MR_Word VarNamePrint_11,
  MR_Word ModuleInfo_12,
  MR_Word PredId_13,
  MR_Word PredInfo_14,
  MR_Integer ProcId_15,
  MR_Word ProcInfo_16,
  MR_Word STATE_VARIABLE_State_0_63,
  MR_Word * STATE_VARIABLE_State_64)
{
  MR_bool succeeded;
  MR_Word TVarSet_18;
  MR_Word CanProcess_19;
  MR_Word VarTable_20;
  MR_Word DeclaredDeterminism_21;
  MR_Word InferredDeterminism_22;
  MR_Word HeadVars_23;
  MR_Word HeadModes_24;
  MR_Word MaybeArgLives_25;
  MR_Word RegR_HeadVars_26;
  MR_Word MaybeArgInfos_27;
  MR_Word Goal_28;
  MR_Word MaybeArgSize_29;
  MR_Word MaybeTermination_30;
  MR_Word MaybeStructureSharing_31;
  MR_Word MaybeStructureReuse_32;
  MR_Word RttiVarMaps_33;
  MR_Word CseNoPullContexts_34;
  MR_Word EvalMethod_35;
  MR_Word DeletedCallCalleeSet_36;
  MR_Word IsAddressTaken_37;
  MR_Word HasParallelConj_38;
  MR_Word HasUserEvent_39;
  MR_Word MaybeProcTableIOInfo_40;
  MR_Word MaybeCallTableTip_41;
  MR_Word MaybeDeepProfileInfo_42;
  MR_Word MaybeUntupleInfo_43;
  MR_Word VarNameRemap_44;
  MR_String Indent1Str_46;
  MR_Word DumpOptions_47;
  MR_Integer PredIdInt_48;
  MR_Integer ProcIdInt_49;
  MR_String PredIdStr_50;
  MR_String DetismStr_51;
  MR_Word DumpTermination_52;
  MR_Word PredSymName_53;
  MR_Word PredOrFunc_54;
  MR_Word ModeVarSet_55;
  MR_Word PredStatus_59;
  MR_Word STATE_VARIABLE_State_1_67;
  MR_Word STATE_VARIABLE_State_2_76;
  MR_Word STATE_VARIABLE_State_3_83;
  MR_Word STATE_VARIABLE_State_4_84;
  MR_Word STATE_VARIABLE_State_5_85;
  MR_Word STATE_VARIABLE_State_6_88;
  MR_String Var_90;
  MR_Word STATE_VARIABLE_State_7_92;
  MR_Word STATE_VARIABLE_State_8_93;
  MR_Word STATE_VARIABLE_State_9_94;
  MR_Word STATE_VARIABLE_State_10_95;
  MR_Word STATE_VARIABLE_State_11_96;
  MR_Word Var_97;
  MR_Word STATE_VARIABLE_State_12_98;
  MR_Word STATE_VARIABLE_State_13_99;
  MR_String Var_100;
  MR_Word STATE_VARIABLE_State_14_103;
  MR_Word STATE_VARIABLE_State_16_107;
  MR_Word Var_165;
  MR_Word Var_166;
  MR_Word Var_168;
  MR_String Var_169;
  MR_Word Var_176;
  MR_Word Var_178;
  MR_Word Var_180;
  MR_Word Var_181;
  MR_Word Var_183;
  MR_String Var_184;
  MR_Word Var_191;
  MR_Word Var_193;
  MR_Word Var_195;
  MR_Word Var_197;
  MR_Word Var_108;
  MR_Integer Var_164;

  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_14, &TVarSet_18);
  hlds__hlds_pred__proc_info_get_can_process_2_p_0(ProcInfo_16, &CanProcess_19);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_16, &VarTable_20);
  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_16, &DeclaredDeterminism_21);
  hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_16, &InferredDeterminism_22);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_16, &HeadVars_23);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_16, &HeadModes_24);
  hlds__hlds_pred__proc_info_get_maybe_arglives_2_p_0(ProcInfo_16, &MaybeArgLives_25);
  hlds__hlds_pred__proc_info_get_reg_r_headvars_2_p_0(ProcInfo_16, &RegR_HeadVars_26);
  hlds__hlds_pred__proc_info_get_maybe_arg_info_2_p_0(ProcInfo_16, &MaybeArgInfos_27);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_16, &Goal_28);
  hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(ProcInfo_16, &MaybeArgSize_29);
  hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(ProcInfo_16, &MaybeTermination_30);
  hlds__hlds_pred__proc_info_get_structure_sharing_2_p_0(ProcInfo_16, &MaybeStructureSharing_31);
  hlds__hlds_pred__proc_info_get_structure_reuse_2_p_0(ProcInfo_16, &MaybeStructureReuse_32);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_16, &RttiVarMaps_33);
  hlds__hlds_pred__proc_info_get_cse_nopull_contexts_2_p_0(ProcInfo_16, &CseNoPullContexts_34);
  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_16, &EvalMethod_35);
  hlds__hlds_pred__proc_info_get_deleted_call_callees_2_p_0(ProcInfo_16, &DeletedCallCalleeSet_36);
  hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(ProcInfo_16, &IsAddressTaken_37);
  hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_16, &HasParallelConj_38);
  hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(ProcInfo_16, &HasUserEvent_39);
  hlds__hlds_pred__proc_info_get_maybe_proc_table_io_info_2_p_0(ProcInfo_16, &MaybeProcTableIOInfo_40);
  hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ProcInfo_16, &MaybeCallTableTip_41);
  hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ProcInfo_16, &MaybeDeepProfileInfo_42);
  hlds__hlds_pred__proc_info_get_maybe_untuple_info_2_p_0(ProcInfo_16, &MaybeUntupleInfo_43);
  hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(ProcInfo_16, &VarNameRemap_44);
  Indent1Str_46 = libs__indent__indent2_string_1_f_0((MR_Unsigned) 1U);
  DumpOptions_47 = ((MR_Word) ((MR_hl_field(0, Info_10, 0))));
  hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_13, &PredIdInt_48);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_15, &ProcIdInt_49);
  PredIdStr_50 = hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(ModuleInfo_12, PredId_13);
  DetismStr_51 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(InferredDeterminism_22);
  mercury__string__builder__append_string_3_p_0(Indent1Str_46, STATE_VARIABLE_State_0_63, &Var_165);
  mercury__string__builder__append_string_3_p_0((MR_String) "% pred id ", Var_165, &Var_166);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), PredIdInt_48, &Var_169);
  mercury__string__builder__append_string_3_p_0(Var_169, Var_166, &Var_168);
  mercury__string__builder__append_string_3_p_0((MR_String) ": ", Var_168, &Var_176);
  mercury__string__builder__append_string_3_p_0(PredIdStr_50, Var_176, &Var_178);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_178, &STATE_VARIABLE_State_1_67);
  mercury__string__builder__append_string_3_p_0(Indent1Str_46, STATE_VARIABLE_State_1_67, &Var_180);
  mercury__string__builder__append_string_3_p_0((MR_String) "% mode number ", Var_180, &Var_181);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), ProcIdInt_49, &Var_184);
  mercury__string__builder__append_string_3_p_0(Var_184, Var_181, &Var_183);
  mercury__string__builder__append_string_3_p_0((MR_String) " (", Var_183, &Var_191);
  mercury__string__builder__append_string_3_p_0(DetismStr_51, Var_191, &Var_193);
  mercury__string__builder__append_string_3_p_0((MR_String) ")\n", Var_193, &STATE_VARIABLE_State_2_76);
  hlds__hlds_out__hlds_out_pred__format_var_types_5_p_0(VarNamePrint_11, TVarSet_18, VarTable_20, STATE_VARIABLE_State_2_76, &STATE_VARIABLE_State_3_83);
  hlds__hlds_out__hlds_out_pred__format_rtti_varmaps_6_p_0(VarNamePrint_11, TVarSet_18, VarTable_20, RttiVarMaps_33, STATE_VARIABLE_State_3_83, &STATE_VARIABLE_State_4_84);
  hlds__hlds_out__hlds_out_pred__format_proc_flags_6_p_0(CanProcess_19, IsAddressTaken_37, HasParallelConj_38, HasUserEvent_39, STATE_VARIABLE_State_4_84, &STATE_VARIABLE_State_5_85);
  Var_90 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[4]), ((MR_Box) (CseNoPullContexts_34)));
  mercury__string__builder__append_string_3_p_0((MR_String) "% cse_nopull_contexts: ", STATE_VARIABLE_State_5_85, &Var_195);
  mercury__string__builder__append_string_3_p_0(Var_90, Var_195, &Var_197);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_197, &STATE_VARIABLE_State_6_88);
  hlds__hlds_out__hlds_out_pred__format_proc_tabling_info_8_p_0(VarTable_20, TVarSet_18, VarNamePrint_11, EvalMethod_35, MaybeProcTableIOInfo_40, MaybeCallTableTip_41, STATE_VARIABLE_State_6_88, &STATE_VARIABLE_State_7_92);
  hlds__hlds_out__hlds_out_pred__format_proc_deep_profiling_info_5_p_0(VarTable_20, VarNamePrint_11, MaybeDeepProfileInfo_42, STATE_VARIABLE_State_7_92, &STATE_VARIABLE_State_8_93);
  DumpTermination_52 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_47, 0))) >> 17)) & (MR_Integer) 1);
  switch (DumpTermination_52) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_State_9_94 = STATE_VARIABLE_State_8_93;
      break;
    case (MR_Integer) 1:
      hlds__hlds_out__hlds_out_pred__format_proc_termination_info_4_p_0(MaybeArgSize_29, MaybeTermination_30, STATE_VARIABLE_State_8_93, &STATE_VARIABLE_State_9_94);
      break;
  }
  hlds__hlds_out__hlds_out_pred__format_proc_opt_info_9_p_0(DumpOptions_47, VarTable_20, TVarSet_18, VarNamePrint_11, MaybeStructureSharing_31, MaybeStructureReuse_32, MaybeUntupleInfo_43, STATE_VARIABLE_State_9_94, &STATE_VARIABLE_State_10_95);
  hlds__hlds_out__hlds_out_pred__format_proc_deleted_callee_set_3_p_0(DeletedCallCalleeSet_36, STATE_VARIABLE_State_10_95, &STATE_VARIABLE_State_11_96);
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (VarTable_20));
  }
  hlds__hlds_out__hlds_out_pred__format_pred_proc_var_name_remap_4_p_0(Var_97, VarNameRemap_44, STATE_VARIABLE_State_11_96, &STATE_VARIABLE_State_12_98);
  hlds__hlds_out__hlds_out_pred__format_eff_trace_level_5_p_0(ModuleInfo_12, PredInfo_14, ProcInfo_16, STATE_VARIABLE_State_12_98, &STATE_VARIABLE_State_13_99);
  Var_100 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_12, PredId_13);
  {
    PredSymName_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredSymName_53, 0) = ((MR_Box) (Var_100));
  }
  PredOrFunc_54 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_14);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &ModeVarSet_55);
  switch (PredOrFunc_54) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncHeadModes_57;
        MR_Word RetHeadMode_58;
        MR_Box conv0_RetHeadMode_58;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), HeadModes_24, &FuncHeadModes_57, &conv0_RetHeadMode_58);
        RetHeadMode_58 = ((MR_Word) (conv0_RetHeadMode_58));
        parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), (MR_Integer) 1, ModeVarSet_55, PredSymName_53, FuncHeadModes_57, RetHeadMode_58, DeclaredDeterminism_21, STATE_VARIABLE_State_13_99, &STATE_VARIABLE_State_14_103);
      }
      break;
    case (MR_Integer) 0:
      parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_109_111_100_101_95_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), (MR_Integer) 1, ModeVarSet_55, PredSymName_53, HeadModes_24, (MR_Word) ((MR_Unsigned) 0U), DeclaredDeterminism_21, STATE_VARIABLE_State_13_99, &STATE_VARIABLE_State_14_103);
      break;
  }
  hlds__hlds_out__hlds_out_pred__format_proc_arg_info_8_p_0(DumpOptions_47, VarTable_20, VarNamePrint_11, MaybeArgLives_25, RegR_HeadVars_26, MaybeArgInfos_27, STATE_VARIABLE_State_14_103, &STATE_VARIABLE_State_16_107);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_14, &PredStatus_59);
  Var_108 = (MR_Word) (PredStatus_59);
  succeeded = (Var_108 == (MR_Word) ((MR_Unsigned) 8U));
  if (succeeded)
  {
    hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_164);
    succeeded = (ProcId_15 == Var_164);
  }
  if (succeeded)
    *STATE_VARIABLE_State_64 = STATE_VARIABLE_State_16_107;
  else
  {
    MR_Word StackSlots_60;
    MR_Word HeadTerms_61;
    MR_Word InstVarSet_62;
    MR_Word STATE_VARIABLE_State_17_109;
    MR_Word STATE_VARIABLE_State_18_111;
    MR_Word STATE_VARIABLE_State_19_113;

    hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ProcInfo_16, &StackSlots_60);
    hlds__hlds_out__hlds_out_pred__format_stack_slots_5_p_0(VarTable_20, VarNamePrint_11, StackSlots_60, STATE_VARIABLE_State_16_107, &STATE_VARIABLE_State_17_109);
    mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_23, &HeadTerms_61);
    hlds__hlds_out__hlds_out_pred__format_clause_head_8_p_0(ModuleInfo_12, Var_97, VarNamePrint_11, PredId_13, PredOrFunc_54, HeadTerms_61, STATE_VARIABLE_State_17_109, &STATE_VARIABLE_State_18_111);
    mercury__string__builder__append_string_3_p_0((MR_String) " :-\n", STATE_VARIABLE_State_18_111, &STATE_VARIABLE_State_19_113);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_16, &InstVarSet_62);
    hlds__hlds_out__hlds_out_goal__format_goal_11_p_0(Info_10, ModuleInfo_12, Var_97, VarNamePrint_11, TVarSet_18, InstVarSet_62, (MR_Unsigned) 1U, (MR_String) ".\n", Goal_28, STATE_VARIABLE_State_19_113, STATE_VARIABLE_State_64);
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__format_stack_slots_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_stack_slots_5_p_0(
  MR_Word VarTable_6,
  MR_Word VarNamePrint_7,
  MR_Word StackSlots_8,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13)
{
  MR_Word VarSlotList0_10;
  MR_Word VarSlotList_11;
  MR_Word Var_15;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[2]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackSlots_8, &VarSlotList0_10);
  VarSlotList_11 = mercury__assoc_list__map_values_only_2_f_0((MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[2]), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[8]), VarSlotList0_10);
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (VarTable_6));
  }
  hlds__hlds_out__hlds_out_goal__format_var_to_abs_locns_6_p_0(Var_15, VarNamePrint_7, (MR_Unsigned) 0U, VarSlotList_11, STATE_VARIABLE_State_0_12, STATE_VARIABLE_State_13);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_proc_arg_info_8_p_0(
  MR_Word DumpOptions_9,
  MR_Word VarTable_10,
  MR_Word VarNamePrint_11,
  MR_Word MaybeArgLives_12,
  MR_Word RegR_HeadVars_13,
  MR_Word MaybeArgInfos_14,
  MR_Word STATE_VARIABLE_State_0_19,
  MR_Word * STATE_VARIABLE_State_20)
{
  MR_bool succeeded;
  MR_Word DumpArgPassing_17;
  MR_Word STATE_VARIABLE_State_1_23;
  MR_Word STATE_VARIABLE_State_4_33;
  MR_Word ArgInfos_18;

  if ((MaybeArgLives_12 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_State_1_23 = STATE_VARIABLE_State_0_19;
  else
  {
    MR_Word ArgLives_16 = ((MR_Word) ((MR_hl_field(1, MaybeArgLives_12, 0))));
    MR_String Var_25;
    MR_Word Var_83;
    MR_Word Var_85;

    Var_25 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[8]), ((MR_Box) (ArgLives_16)));
    mercury__string__builder__append_string_3_p_0((MR_String) "% arg lives: ", STATE_VARIABLE_State_0_19, &Var_83);
    mercury__string__builder__append_string_3_p_0(Var_25, Var_83, &Var_85);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_85, &STATE_VARIABLE_State_1_23);
  }
  succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegR_HeadVars_13);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_State_2_28;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_State_3_31;

    mercury__string__builder__append_string_3_p_0((MR_String) "% reg_r headvars: ", STATE_VARIABLE_State_1_23, &STATE_VARIABLE_State_2_28);
    Var_29 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegR_HeadVars_13);
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), VarTable_10, VarNamePrint_11, Var_29, STATE_VARIABLE_State_2_28, &STATE_VARIABLE_State_3_31);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_3_31, &STATE_VARIABLE_State_4_33);
  }
  else
    STATE_VARIABLE_State_4_33 = STATE_VARIABLE_State_1_23;
  DumpArgPassing_17 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_9, 0))) >> 11)) & (MR_Integer) 1);
  succeeded = (DumpArgPassing_17 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (MaybeArgInfos_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      ArgInfos_18 = ((MR_Word) ((MR_hl_field(1, MaybeArgInfos_14, 0))));
  }
  if (succeeded)
  {
    MR_String Var_38;
    MR_Word Var_87;
    MR_Word Var_89;

    Var_38 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[9]), ((MR_Box) (ArgInfos_18)));
    mercury__string__builder__append_string_3_p_0((MR_String) "% arg_infos: ", STATE_VARIABLE_State_4_33, &Var_87);
    mercury__string__builder__append_string_3_p_0(Var_38, Var_87, &Var_89);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_89, STATE_VARIABLE_State_20);
  }
  else
    *STATE_VARIABLE_State_20 = STATE_VARIABLE_State_4_33;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_eff_trace_level_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14)
{
  MR_Word Globals_10;
  MR_Word TraceLevel_11;
  MR_Word EffTraceLevel_12;
  MR_String Var_19;
  MR_Word Var_21;
  MR_Word Var_23;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
  libs__globals__get_trace_level_2_p_0(Globals_10, &TraceLevel_11);
  EffTraceLevel_12 = libs__trace_params__eff_trace_level_for_proc_4_f_0(ModuleInfo_6, PredInfo_7, ProcInfo_8, TraceLevel_11);
  Var_19 = libs__trace_params__eff_trace_level_dump_1_f_0(EffTraceLevel_12);
  mercury__string__builder__append_string_3_p_0((MR_String) "% effective trace level: ", STATE_VARIABLE_State_0_13, &Var_21);
  mercury__string__builder__append_string_3_p_0(Var_19, Var_21, &Var_23);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_23, STATE_VARIABLE_State_14);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_proc_var_name_remap_4_p_0(
  MR_Word VarNameSrc_5,
  MR_Word VarNameRemap_6,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12)
{
  MR_Word VarNameRemapList_8;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarNameRemap_6, &VarNameRemapList_8);
  if ((VarNameRemapList_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_State_12 = STATE_VARIABLE_State_0_11;
  else
  {
    MR_Word VarNameRemapHead_9 = ((MR_Word) ((MR_hl_field(1, VarNameRemapList_8, 0))));
    MR_Word VarNameRemapTail_10 = ((MR_Word) ((MR_hl_field(1, VarNameRemapList_8, 1))));
    MR_Word STATE_VARIABLE_State_1_14;
    MR_Word STATE_VARIABLE_State_2_15;

    mercury__string__builder__append_string_3_p_0((MR_String) "% var name remap: ", STATE_VARIABLE_State_0_11, &STATE_VARIABLE_State_1_14);
    hlds__hlds_out__hlds_out_pred__format_var_name_remap_5_p_0(VarNameSrc_5, VarNameRemapHead_9, VarNameRemapTail_10, STATE_VARIABLE_State_1_14, &STATE_VARIABLE_State_2_15);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_2_15, STATE_VARIABLE_State_12);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_var_name_remap_5_p_0(
  MR_Word VarNameSrc_6,
  MR_Word Head_7,
  MR_Word Tail_8,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16)
{
  while (MR_TRUE)
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, Head_7, 0))));
    MR_String NewName_11 = ((MR_String) ((MR_hl_field(0, Head_7, 1))));
    MR_String VarName_12;
    MR_Word STATE_VARIABLE_State_1_20;
    MR_Word Var_27;
    MR_Word Var_28;

    // setup for model_det tailcalls optimized into a loop
    ;
    VarName_12 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_6, (MR_Integer) 1, Var_10);
    mercury__string__builder__append_string_3_p_0(VarName_12, STATE_VARIABLE_State_0_15, &Var_27);
    mercury__string__builder__append_string_3_p_0((MR_String) " -> ", Var_27, &Var_28);
    mercury__string__builder__append_string_3_p_0(NewName_11, Var_28, &STATE_VARIABLE_State_1_20);
    if ((Tail_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_16 = STATE_VARIABLE_State_1_20;
    else
    {
      MR_Word TailHead_13 = ((MR_Word) ((MR_hl_field(1, Tail_8, 0))));
      MR_Word TailTail_14 = ((MR_Word) ((MR_hl_field(1, Tail_8, 1))));
      MR_Word STATE_VARIABLE_State_2_26;
      MR_Word next_value_of_Head_7;
      MR_Word next_value_of_Tail_8;
      MR_Word next_value_of_STATE_VARIABLE_State_0_15;

      mercury__string__builder__append_string_3_p_0((MR_String) ", ", STATE_VARIABLE_State_1_20, &STATE_VARIABLE_State_2_26);
      // direct tailcall eliminated
      ;
      next_value_of_Head_7 = TailHead_13;
      next_value_of_Tail_8 = TailTail_14;
      next_value_of_STATE_VARIABLE_State_0_15 = STATE_VARIABLE_State_2_26;
      Head_7 = next_value_of_Head_7;
      Tail_8 = next_value_of_Tail_8;
      STATE_VARIABLE_State_0_15 = next_value_of_STATE_VARIABLE_State_0_15;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_proc_deleted_callee_set_3_p_0(
  MR_Word DeletedCallCalleeSet_4,
  MR_Word STATE_VARIABLE_State_0_9,
  MR_Word * STATE_VARIABLE_State_10)
{
  MR_Word DeletedCallCallees_6;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DeletedCallCalleeSet_4, &DeletedCallCallees_6);
  if ((DeletedCallCallees_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_State_10 = STATE_VARIABLE_State_0_9;
  else
  {
    MR_String Var_15;
    MR_Word Var_19;
    MR_Word Var_21;

    Var_15 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[7]), ((MR_Box) (DeletedCallCallees_6)));
    mercury__string__builder__append_string_3_p_0((MR_String) "% procedures called from deleted goals: ", STATE_VARIABLE_State_0_9, &Var_19);
    mercury__string__builder__append_string_3_p_0(Var_15, Var_19, &Var_21);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_21, STATE_VARIABLE_State_10);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_proc_opt_info_9_p_0(
  MR_Word DumpOptions_10,
  MR_Word VarTable_11,
  MR_Word TVarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word MaybeStructureSharing_14,
  MR_Word MaybeStructureReuse_15,
  MR_Word MaybeUntupleInfo_16,
  MR_Word STATE_VARIABLE_State_0_27,
  MR_Word * STATE_VARIABLE_State_28)
{
  MR_bool succeeded;
  MR_Word DumpStructSharing_18 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_10, 1))) >> 6)) & (MR_Integer) 1);
  MR_Word DumpUseReuse_22;
  MR_Word STATE_VARIABLE_State_2_33;
  MR_Word STATE_VARIABLE_State_4_38;
  MR_Word StructureSharing_19;
  MR_Word StructureReuse_23;

  succeeded = (DumpStructSharing_18 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (MaybeStructureSharing_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      StructureSharing_19 = ((MR_Word) ((MR_hl_field(1, MaybeStructureSharing_14, 0))));
  }
  if (succeeded)
  {
    MR_Word SharingAs_20;
    MR_Word STATE_VARIABLE_State_1_30;
    MR_Word Var_32;
    MR_Box conv0_STATE_VARIABLE_State_2_33;

    mercury__string__builder__append_string_3_p_0((MR_String) "% structure sharing: \n", STATE_VARIABLE_State_0_27, &STATE_VARIABLE_State_1_30);
    SharingAs_20 = ((MR_Word) ((MR_hl_field(0, StructureSharing_19, 0))));
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (VarTable_11));
    }
    parse_tree__prog_ctgc__dump_structure_sharing_domain_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), ((MR_Box) ((MR_Integer) 0)), Var_32, TVarSet_12, SharingAs_20, ((MR_Box) (STATE_VARIABLE_State_1_30)), &conv0_STATE_VARIABLE_State_2_33);
    STATE_VARIABLE_State_2_33 = ((MR_Word) (conv0_STATE_VARIABLE_State_2_33));
  }
  else
    STATE_VARIABLE_State_2_33 = STATE_VARIABLE_State_0_27;
  DumpUseReuse_22 = ((MR_Unsigned) ((MR_hl_field(0, DumpOptions_10, 0))) & (MR_Integer) 1);
  succeeded = (DumpUseReuse_22 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (MaybeStructureReuse_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      StructureReuse_23 = ((MR_Word) ((MR_hl_field(1, MaybeStructureReuse_15, 0))));
  }
  if (succeeded)
  {
    MR_Word ReuseAs_24;
    MR_Word STATE_VARIABLE_State_3_35;
    MR_Word Var_37;
    MR_Box conv1_STATE_VARIABLE_State_4_38;

    mercury__string__builder__append_string_3_p_0((MR_String) "% structure reuse: \n", STATE_VARIABLE_State_2_33, &STATE_VARIABLE_State_3_35);
    ReuseAs_24 = ((MR_Word) ((MR_hl_field(0, StructureReuse_23, 0))));
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (VarTable_11));
    }
    parse_tree__prog_ctgc__dump_structure_reuse_domain_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), ((MR_Box) ((MR_Integer) 0)), Var_37, TVarSet_12, ReuseAs_24, ((MR_Box) (STATE_VARIABLE_State_3_35)), &conv1_STATE_VARIABLE_State_4_38);
    STATE_VARIABLE_State_4_38 = ((MR_Word) (conv1_STATE_VARIABLE_State_4_38));
  }
  else
    STATE_VARIABLE_State_4_38 = STATE_VARIABLE_State_2_33;
  if ((MaybeUntupleInfo_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_State_28 = STATE_VARIABLE_State_4_38;
  else
  {
    MR_Word UntupleInfo_26 = ((MR_Word) ((MR_hl_field(1, MaybeUntupleInfo_16, 0))));

    hlds__hlds_out__hlds_out_pred__format_untuple_info_5_p_0(VarTable_11, VarNamePrint_13, UntupleInfo_26, STATE_VARIABLE_State_4_38, STATE_VARIABLE_State_28);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_untuple_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_13;

  hlds__hlds_out__hlds_out_pred__format_untuple_info_loop_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_State_13);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_State_13));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_untuple_info_5_p_0(
  MR_Word VarTable_6,
  MR_Word VarNamePrint_7,
  MR_Word UntupleInfo_8,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12)
{
  MR_Word UntupleMap_10 = (MR_Word) (UntupleInfo_8);
  MR_Word STATE_VARIABLE_State_1_14;
  MR_Word Var_15;
  MR_Box conv1_STATE_VARIABLE_State_12;

  mercury__string__builder__append_string_3_p_0((MR_String) "% untuple:\n", STATE_VARIABLE_State_0_11, &STATE_VARIABLE_State_1_14);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[1]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_untuple_info_5_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (VarTable_6));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (VarNamePrint_7));
  }
  mercury__map__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[2]), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[6]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_15, UntupleMap_10, ((MR_Box) (STATE_VARIABLE_State_1_14)), &conv1_STATE_VARIABLE_State_12);
  *STATE_VARIABLE_State_12 = ((MR_Word) (conv1_STATE_VARIABLE_State_12));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_proc_termination_info_4_p_0(
  MR_Word MaybeArgSize_5,
  MR_Word MaybeTermination_6,
  MR_Word STATE_VARIABLE_State_0_10,
  MR_Word * STATE_VARIABLE_State_11)
{
  MR_String SizeStr_8;
  MR_String TermStr_9;
  MR_Word STATE_VARIABLE_State_1_16;
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_30;
  MR_Word Var_32;

  SizeStr_8 = parse_tree__parse_tree_out_pragma__maybe_arg_size_info_to_string_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[5]), (MR_Integer) 1, MaybeArgSize_5);
  TermStr_9 = parse_tree__parse_tree_out_pragma__maybe_termination_info_to_string_2_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[5]), (MR_Integer) 1, MaybeTermination_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "% arg size properties: ", STATE_VARIABLE_State_0_10, &Var_26);
  mercury__string__builder__append_string_3_p_0(SizeStr_8, Var_26, &Var_28);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_28, &STATE_VARIABLE_State_1_16);
  mercury__string__builder__append_string_3_p_0((MR_String) "% termination properties: ", STATE_VARIABLE_State_1_16, &Var_30);
  mercury__string__builder__append_string_3_p_0(TermStr_9, Var_30, &Var_32);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_32, STATE_VARIABLE_State_11);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_proc_deep_profiling_info_5_p_0(
  MR_Word VarTable_6,
  MR_Word VarNamePrint_7,
  MR_Word MaybeDeepProfileInfo_8,
  MR_Word STATE_VARIABLE_State_0_29,
  MR_Word * STATE_VARIABLE_State_30)
{
  if ((MaybeDeepProfileInfo_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_State_30 = STATE_VARIABLE_State_0_29;
  else
  {
    MR_Word DeepProfileInfo_10 = ((MR_Word) ((MR_hl_field(1, MaybeDeepProfileInfo_8, 0))));
    MR_Word MaybeRecInfo_11 = ((MR_Word) ((MR_hl_field(0, DeepProfileInfo_10, 0))));
    MR_Word MaybeDeepLayout_12 = ((MR_Word) ((MR_hl_field(0, DeepProfileInfo_10, 1))));
    MR_Word STATE_VARIABLE_State_4_39;

    if ((MaybeRecInfo_11 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_State_4_39 = STATE_VARIABLE_State_0_29;
    else
    {
      MR_Word DeepRecInfo_14 = ((MR_Word) ((MR_hl_field(1, MaybeRecInfo_11, 0))));
      MR_Word Role_15 = ((MR_Word) ((MR_hl_field(0, DeepRecInfo_14, 0))));
      MR_Word DeepPredProcId_17;
      MR_Word DeepPredId_18;
      MR_Integer DeepProcId_19;
      MR_Integer DeepPredInt_20;
      MR_Integer DeepProcInt_21;
      MR_Word STATE_VARIABLE_State_1_32;
      MR_Word STATE_VARIABLE_State_2_34;
      MR_Word Var_61;
      MR_String Var_62;
      MR_Word Var_69;
      MR_Word Var_71;
      MR_String Var_72;

      mercury__string__builder__append_string_3_p_0((MR_String) "% deep recursion info: ", STATE_VARIABLE_State_0_29, &STATE_VARIABLE_State_1_32);
      if (((MR_tag((MR_Word) Role_15)) == (MR_Integer) 0))
      {
        DeepPredProcId_17 = (MR_Word) ((MR_Word) (Role_15));
        mercury__string__builder__append_string_3_p_0((MR_String) "inner, outer is ", STATE_VARIABLE_State_1_32, &STATE_VARIABLE_State_2_34);
      }
      else
      {
        DeepPredProcId_17 = (MR_Word) (MR_body((MR_Word) (Role_15), (MR_Integer) 1));
        mercury__string__builder__append_string_3_p_0((MR_String) "outer, inner is ", STATE_VARIABLE_State_1_32, &STATE_VARIABLE_State_2_34);
      }
      DeepPredId_18 = ((MR_Word) ((MR_hl_field(0, DeepPredProcId_17, 0))));
      DeepProcId_19 = ((MR_Integer) ((MR_hl_field(0, DeepPredProcId_17, 1))));
      hlds__hlds_pred__pred_id_to_int_2_p_0(DeepPredId_18, &DeepPredInt_20);
      hlds__hlds_pred__proc_id_to_int_2_p_0(DeepProcId_19, &DeepProcInt_21);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), DeepPredInt_20, &Var_62);
      mercury__string__builder__append_string_3_p_0(Var_62, STATE_VARIABLE_State_2_34, &Var_61);
      mercury__string__builder__append_string_3_p_0((MR_String) "/", Var_61, &Var_69);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), DeepProcInt_21, &Var_72);
      mercury__string__builder__append_string_3_p_0(Var_72, Var_69, &Var_71);
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_71, &STATE_VARIABLE_State_4_39);
    }
    if ((MaybeDeepLayout_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_30 = STATE_VARIABLE_State_4_39;
    else
    {
      MR_Word DeepLayout_22 = ((MR_Word) ((MR_hl_field(1, MaybeDeepLayout_12, 0))));
      MR_Word ProcStatic_23 = ((MR_Word) ((MR_hl_field(0, DeepLayout_22, 0))));
      MR_Word ExcpVars_24 = ((MR_Word) ((MR_hl_field(0, DeepLayout_22, 1))));
      MR_Word TopCSD_25;
      MR_Word MiddleCSD_26;
      MR_Word MaybeOldOutermost_27;
      MR_Word STATE_VARIABLE_State_5_44;
      MR_Word STATE_VARIABLE_State_6_46;
      MR_Word STATE_VARIABLE_State_7_48;
      MR_Word STATE_VARIABLE_State_8_50;
      MR_Word STATE_VARIABLE_State_9_52;
      MR_Word STATE_VARIABLE_State_10_54;
      MR_Word STATE_VARIABLE_State_12_58;

      hlds__hlds_out__hlds_out_pred__format_hlds_proc_static_3_p_0(ProcStatic_23, STATE_VARIABLE_State_4_39, &STATE_VARIABLE_State_5_44);
      TopCSD_25 = ((MR_Word) ((MR_hl_field(0, ExcpVars_24, 0))));
      MiddleCSD_26 = ((MR_Word) ((MR_hl_field(0, ExcpVars_24, 1))));
      MaybeOldOutermost_27 = ((MR_Word) ((MR_hl_field(0, ExcpVars_24, 2))));
      mercury__string__builder__append_string_3_p_0((MR_String) "% deep layout info: ", STATE_VARIABLE_State_5_44, &STATE_VARIABLE_State_6_46);
      mercury__string__builder__append_string_3_p_0((MR_String) "TopCSD is ", STATE_VARIABLE_State_6_46, &STATE_VARIABLE_State_7_48);
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), VarTable_6, VarNamePrint_7, TopCSD_25, STATE_VARIABLE_State_7_48, &STATE_VARIABLE_State_8_50);
      mercury__string__builder__append_string_3_p_0((MR_String) ", MiddleCSD is ", STATE_VARIABLE_State_8_50, &STATE_VARIABLE_State_9_52);
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), VarTable_6, VarNamePrint_7, MiddleCSD_26, STATE_VARIABLE_State_9_52, &STATE_VARIABLE_State_10_54);
      if ((MaybeOldOutermost_27 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_State_12_58 = STATE_VARIABLE_State_10_54;
      else
      {
        MR_Word OldOutermost_28 = ((MR_Word) ((MR_hl_field(1, MaybeOldOutermost_27, 0))));
        MR_Word STATE_VARIABLE_State_11_56;

        mercury__string__builder__append_string_3_p_0((MR_String) ", OldOutermost is ", STATE_VARIABLE_State_10_54, &STATE_VARIABLE_State_11_56);
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), VarTable_6, VarNamePrint_7, OldOutermost_28, STATE_VARIABLE_State_11_56, &STATE_VARIABLE_State_12_58);
      }
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_12_58, STATE_VARIABLE_State_30);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_hlds_proc_static_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv5_STATE_VARIABLE_SlotNum_12;
  MR_Word conv4_STATE_VARIABLE_State_14;

  hlds__hlds_out__hlds_out_pred__format_hlds_ps_coverage_point_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv5_STATE_VARIABLE_SlotNum_12, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_State_14);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_SlotNum_12));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_State_14));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_hlds_proc_static_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_STATE_VARIABLE_SlotNum_15;
  MR_Word conv0_STATE_VARIABLE_State_17;

  hlds__hlds_out__hlds_out_pred__format_hlds_ps_call_site_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_STATE_VARIABLE_SlotNum_15, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_State_17);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_SlotNum_15));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_State_17));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_hlds_proc_static_3_p_0(
  MR_Word ProcStatic_4,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14)
{
  MR_String FileName_6 = ((MR_String) ((MR_hl_field(0, ProcStatic_4, 0))));
  MR_Integer LineNumber_7 = ((MR_Integer) ((MR_hl_field(0, ProcStatic_4, 1))));
  MR_Word InInterface_8 = ((MR_Unsigned) ((MR_hl_field(0, ProcStatic_4, 2))) & (MR_Integer) 1);
  MR_Word CallSiteStatics_9 = ((MR_Word) ((MR_hl_field(0, ProcStatic_4, 3))));
  MR_Word CoveragePoints_10 = ((MR_Word) ((MR_hl_field(0, ProcStatic_4, 4))));
  MR_Word STATE_VARIABLE_State_1_17;
  MR_Word STATE_VARIABLE_State_2_22;
  MR_Word STATE_VARIABLE_State_3_27;
  MR_String Var_29;
  MR_Word STATE_VARIABLE_State_4_33;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_String Var_58;
  MR_Word Var_66;
  MR_Word Var_68;
  MR_Box conv3_Var_11;
  MR_Box conv2_STATE_VARIABLE_State_4_33;
  MR_Box conv7_Var_12;
  MR_Box conv6_STATE_VARIABLE_State_14;

  mercury__string__builder__append_string_3_p_0((MR_String) "% proc static filename: ", STATE_VARIABLE_State_0_13, &Var_51);
  mercury__string__builder__append_string_3_p_0(FileName_6, Var_51, &Var_53);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_53, &STATE_VARIABLE_State_1_17);
  mercury__string__builder__append_string_3_p_0((MR_String) "% proc static line number: ", STATE_VARIABLE_State_1_17, &Var_55);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), LineNumber_7, &Var_58);
  mercury__string__builder__append_string_3_p_0(Var_58, Var_55, &Var_57);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_57, &STATE_VARIABLE_State_2_22);
  Var_29 = mercury__string__string_1_f_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), ((MR_Box) (InInterface_8)));
  mercury__string__builder__append_string_3_p_0((MR_String) "% proc static is interface: ", STATE_VARIABLE_State_2_22, &Var_66);
  mercury__string__builder__append_string_3_p_0(Var_29, Var_66, &Var_68);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_68, &STATE_VARIABLE_State_3_27);
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[6]), CallSiteStatics_9, ((MR_Box) ((MR_Integer) 0)), &conv3_Var_11, ((MR_Box) (STATE_VARIABLE_State_3_27)), &conv2_STATE_VARIABLE_State_4_33);
  STATE_VARIABLE_State_4_33 = ((MR_Word) (conv2_STATE_VARIABLE_State_4_33));
  mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[7]), CoveragePoints_10, ((MR_Box) ((MR_Integer) 0)), &conv7_Var_12, ((MR_Box) (STATE_VARIABLE_State_4_33)), &conv6_STATE_VARIABLE_State_14);
  *STATE_VARIABLE_State_14 = ((MR_Word) (conv6_STATE_VARIABLE_State_14));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_proc_tabling_info_8_p_0(
  MR_Word VarTable_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word EvalMethod_12,
  MR_Word MaybeProcTableIOInfo_13,
  MR_Word MaybeCallTableTip_14,
  MR_Word STATE_VARIABLE_State_0_19,
  MR_Word * STATE_VARIABLE_State_20)
{
  MR_Word STATE_VARIABLE_State_1_23;
  MR_Word STATE_VARIABLE_State_2_27;

  if ((EvalMethod_12 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_State_1_23 = STATE_VARIABLE_State_0_19;
  else
  {
    MR_Word TabledMethod_16 = ((MR_Word) ((MR_hl_field(1, EvalMethod_12, 0))));
    MR_String Var_25;
    MR_Word Var_34;
    MR_Word Var_36;

    Var_25 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_string_1_f_0(TabledMethod_16);
    mercury__string__builder__append_string_3_p_0((MR_String) "% eval method: ", STATE_VARIABLE_State_0_19, &Var_34);
    mercury__string__builder__append_string_3_p_0(Var_25, Var_34, &Var_36);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_36, &STATE_VARIABLE_State_1_23);
  }
  if ((MaybeProcTableIOInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_State_2_27 = STATE_VARIABLE_State_1_23;
  else
  {
    MR_Word ProcTableIOInfo_17 = ((MR_Word) ((MR_hl_field(1, MaybeProcTableIOInfo_13, 0))));
    MR_Word MaybeArgInfos_38 = (MR_Word) (ProcTableIOInfo_17);

    if ((MaybeArgInfos_38 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__string__builder__append_string_3_p_0((MR_String) "% proc table io info: io tabled, no arg_infos\n", STATE_VARIABLE_State_1_23, &STATE_VARIABLE_State_2_27);
    else
    {
      MR_Word ArgInfos_39 = ((MR_Word) ((MR_hl_field(1, MaybeArgInfos_38, 0))));
      MR_Word STATE_VARIABLE_State_2_42;

      mercury__string__builder__append_string_3_p_0((MR_String) "% proc table io info: io tabled, arg_infos:\n", STATE_VARIABLE_State_1_23, &STATE_VARIABLE_State_2_42);
      hlds__hlds_out__hlds_out_pred__format_table_arg_infos_4_p_0(TVarSet_10, ArgInfos_39, STATE_VARIABLE_State_2_42, &STATE_VARIABLE_State_2_27);
    }
  }
  if ((MaybeCallTableTip_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_State_20 = STATE_VARIABLE_State_2_27;
  else
  {
    MR_Word CallTableTip_18 = ((MR_Word) ((MR_hl_field(1, MaybeCallTableTip_14, 0))));
    MR_Word STATE_VARIABLE_State_3_29;
    MR_Word STATE_VARIABLE_State_4_31;

    mercury__string__builder__append_string_3_p_0((MR_String) "% call table tip: ", STATE_VARIABLE_State_2_27, &STATE_VARIABLE_State_3_29);
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), VarTable_9, VarNamePrint_11, CallTableTip_18, STATE_VARIABLE_State_3_29, &STATE_VARIABLE_State_4_31);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_4_31, STATE_VARIABLE_State_20);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_table_arg_infos_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_State_13;

  hlds__hlds_out__hlds_out_pred__format_table_tvar_map_entry_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_State_13);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_State_13));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_table_arg_infos_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_14;

  hlds__hlds_out__hlds_out_pred__format_table_arg_info_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_State_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_State_14));
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_table_arg_infos_4_p_0(
  MR_Word TVarSet_5,
  MR_Word TableArgInfos_6,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14)
{
  MR_Word ArgInfos_8 = ((MR_Word) ((MR_hl_field(0, TableArgInfos_6, 0))));
  MR_Word TVarMap_9 = ((MR_Word) ((MR_hl_field(0, TableArgInfos_6, 1))));
  MR_Word TVarPairs_10;
  MR_Word STATE_VARIABLE_State_1_16;
  MR_Word Var_17;
  MR_Word STATE_VARIABLE_State_2_18;
  MR_Box conv1_STATE_VARIABLE_State_2_18;

  mercury__string__builder__append_string_3_p_0((MR_String) "% arg infos:\n", STATE_VARIABLE_State_0_13, &STATE_VARIABLE_State_1_16);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[1]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_table_arg_infos_4_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (TVarSet_5));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_arg_info_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_17, ArgInfos_8, ((MR_Box) (STATE_VARIABLE_State_1_16)), &conv1_STATE_VARIABLE_State_2_18);
  STATE_VARIABLE_State_2_18 = ((MR_Word) (conv1_STATE_VARIABLE_State_2_18));
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[1]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0), TVarMap_9, &TVarPairs_10);
  if ((TVarPairs_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_State_14 = STATE_VARIABLE_State_2_18;
  else
  {
    MR_Word STATE_VARIABLE_State_3_20;
    MR_Word Var_21;
    MR_Box conv3_STATE_VARIABLE_State_14;

    mercury__string__builder__append_string_3_p_0((MR_String) "% type var map:\n", STATE_VARIABLE_State_2_18, &STATE_VARIABLE_State_3_20);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[2]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_table_arg_infos_4_p_0_2));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (TVarSet_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[2]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_21, TVarPairs_10, ((MR_Box) (STATE_VARIABLE_State_3_20)), &conv3_STATE_VARIABLE_State_14);
    *STATE_VARIABLE_State_14 = ((MR_Word) (conv3_STATE_VARIABLE_State_14));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_proc_flags_6_p_0(
  MR_Word CanProcess_7,
  MR_Word IsAddressTaken_8,
  MR_Word HasParallelConj_9,
  MR_Word HasUserEvent_10,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13)
{
  MR_Word STATE_VARIABLE_State_1_15;
  MR_Word STATE_VARIABLE_State_2_17;
  MR_Word STATE_VARIABLE_State_4_21;

  switch (CanProcess_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      STATE_VARIABLE_State_1_15 = STATE_VARIABLE_State_0_12;
      break;
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "% cannot_process_yet\n", STATE_VARIABLE_State_0_12, &STATE_VARIABLE_State_1_15);
      break;
  }
  switch (IsAddressTaken_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) "% address is not taken\n", STATE_VARIABLE_State_1_15, &STATE_VARIABLE_State_2_17);
      break;
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "% address is taken\n", STATE_VARIABLE_State_1_15, &STATE_VARIABLE_State_2_17);
      break;
  }
  switch (HasParallelConj_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) "% does not contain parallel conjunction\n", STATE_VARIABLE_State_2_17, &STATE_VARIABLE_State_4_21);
      break;
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "% contains parallel conjunction\n", STATE_VARIABLE_State_2_17, &STATE_VARIABLE_State_4_21);
      break;
  }
  switch (HasUserEvent_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) "% does not contain user event\n", STATE_VARIABLE_State_4_21, STATE_VARIABLE_State_13);
      break;
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "% contains user event\n", STATE_VARIABLE_State_4_21, STATE_VARIABLE_State_13);
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_rtti_varmaps_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_State_20;

  hlds__hlds_out__hlds_out_pred__format_rtti_var_info_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_State_20);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_State_20));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_rtti_varmaps_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_State_16;

  hlds__hlds_out__hlds_out_pred__format_typeclass_info_var_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_State_16);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_State_16));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_rtti_varmaps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_22;

  hlds__hlds_out__hlds_out_pred__format_type_info_locn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_State_22);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_State_22));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_rtti_varmaps_6_p_0(
  MR_Word VarNamePrint_7,
  MR_Word TVarSet_8,
  MR_Word VarTable_9,
  MR_Word RttiVarMaps_10,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16)
{
  MR_Word TypeVars_12;
  MR_Word Constraints_13;
  MR_Word ProgVars_14;
  MR_Word STATE_VARIABLE_State_1_18;
  MR_Word Var_19;
  MR_Word STATE_VARIABLE_State_2_20;
  MR_Word STATE_VARIABLE_State_3_22;
  MR_Word Var_23;
  MR_Word STATE_VARIABLE_State_4_24;
  MR_Word STATE_VARIABLE_State_5_26;
  MR_Word Var_27;
  MR_Box conv1_STATE_VARIABLE_State_2_20;
  MR_Box conv3_STATE_VARIABLE_State_4_24;
  MR_Box conv5_STATE_VARIABLE_State_16;

  mercury__string__builder__append_string_3_p_0((MR_String) "% type_info varmap:\n", STATE_VARIABLE_State_0_15, &STATE_VARIABLE_State_1_18);
  hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(RttiVarMaps_10, &TypeVars_12);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_rtti_varmaps_6_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (VarNamePrint_7));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (TVarSet_8));
    MR_hl_field(0, Var_19, 5) = ((MR_Box) (VarTable_9));
    MR_hl_field(0, Var_19, 6) = ((MR_Box) (RttiVarMaps_10));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[1]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_19, TypeVars_12, ((MR_Box) (STATE_VARIABLE_State_1_18)), &conv1_STATE_VARIABLE_State_2_20);
  STATE_VARIABLE_State_2_20 = ((MR_Word) (conv1_STATE_VARIABLE_State_2_20));
  mercury__string__builder__append_string_3_p_0((MR_String) "% typeclass_info varmap:\n", STATE_VARIABLE_State_2_20, &STATE_VARIABLE_State_3_22);
  hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(RttiVarMaps_10, &Constraints_13);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[1]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_rtti_varmaps_6_p_0_2));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (VarNamePrint_7));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (TVarSet_8));
    MR_hl_field(0, Var_23, 5) = ((MR_Box) (VarTable_9));
    MR_hl_field(0, Var_23, 6) = ((MR_Box) (RttiVarMaps_10));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_23, Constraints_13, ((MR_Box) (STATE_VARIABLE_State_3_22)), &conv3_STATE_VARIABLE_State_4_24);
  STATE_VARIABLE_State_4_24 = ((MR_Word) (conv3_STATE_VARIABLE_State_4_24));
  mercury__string__builder__append_string_3_p_0((MR_String) "% rtti_var_info:\n", STATE_VARIABLE_State_4_24, &STATE_VARIABLE_State_5_26);
  hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(RttiVarMaps_10, &ProgVars_14);
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[2]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_rtti_varmaps_6_p_0_3));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (VarNamePrint_7));
    MR_hl_field(0, Var_27, 4) = ((MR_Box) (TVarSet_8));
    MR_hl_field(0, Var_27, 5) = ((MR_Box) (VarTable_9));
    MR_hl_field(0, Var_27, 6) = ((MR_Box) (RttiVarMaps_10));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[2]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_27, ProgVars_14, ((MR_Box) (STATE_VARIABLE_State_5_26)), &conv5_STATE_VARIABLE_State_16);
  *STATE_VARIABLE_State_16 = ((MR_Word) (conv5_STATE_VARIABLE_State_16));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_var_types_5_p_0(
  MR_Word VarNamePrint_6,
  MR_Word TVarSet_7,
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13)
{
  MR_Integer NumVars_10;
  MR_Word VarsEntries_11;
  MR_Word STATE_VARIABLE_State_1_16;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_String Var_22;

  parse_tree__var_table__var_table_count_2_p_0(VarTable_8, &NumVars_10);
  mercury__string__builder__append_string_3_p_0((MR_String) "% variable table (", STATE_VARIABLE_State_0_12, &Var_19);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), NumVars_10, &Var_22);
  mercury__string__builder__append_string_3_p_0(Var_22, Var_19, &Var_21);
  mercury__string__builder__append_string_3_p_0((MR_String) " entries):\n", Var_21, &STATE_VARIABLE_State_1_16);
  parse_tree__var_table__var_table_to_sorted_assoc_list_2_p_0(VarTable_8, &VarsEntries_11);
  hlds__hlds_out__hlds_out_pred__format_var_types_loop_5_p_0(VarNamePrint_6, TVarSet_7, VarsEntries_11, STATE_VARIABLE_State_1_16, STATE_VARIABLE_State_13);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_clauses_12_p_0(
  MR_Word Info_13,
  MR_Word Lang_14,
  MR_Word ModuleInfo_15,
  MR_Word PredId_16,
  MR_Word PredOrFunc_17,
  MR_Word VarNameSrc_18,
  MR_Word TypeQual_19,
  MR_Word VarNamePrint_20,
  MR_Word HeadVarsVector_21,
  MR_Word Clauses_22,
  MR_Word STATE_VARIABLE_State_0_26,
  MR_Word * STATE_VARIABLE_State_27)
{
  MR_Word HeadVars_24;
  MR_Word HeadTerms_25;

  HeadVars_24 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[2]), HeadVarsVector_21);
  mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_24, &HeadTerms_25);
  hlds__hlds_out__hlds_out_pred__format_clauses_loop_13_p_0(Info_13, Lang_14, ModuleInfo_15, PredId_16, PredOrFunc_17, VarNameSrc_18, TypeQual_19, VarNamePrint_20, HeadTerms_25, (MR_Integer) 1, Clauses_22, STATE_VARIABLE_State_0_26, STATE_VARIABLE_State_27);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_clauses_loop_13_p_0(
  MR_Word Info_14,
  MR_Word Lang_15,
  MR_Word ModuleInfo_16,
  MR_Word PredId_17,
  MR_Word PredOrFunc_18,
  MR_Word VarNameSrc_19,
  MR_Word TypeQual_20,
  MR_Word VarNamePrint_21,
  MR_Word HeadTerms_22,
  MR_Integer CurClauseNum_23,
  MR_Word Clauses_24,
  MR_Word STATE_VARIABLE_State_0_28,
  MR_Word * STATE_VARIABLE_State_29)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Clauses_24 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_29 = STATE_VARIABLE_State_0_28;
    else
    {
      MR_Word FirstClause_26 = ((MR_Word) ((MR_hl_field(1, Clauses_24, 0))));
      MR_Word LaterClauses_27 = ((MR_Word) ((MR_hl_field(1, Clauses_24, 1))));
      MR_Word STATE_VARIABLE_State_1_32;
      MR_Word STATE_VARIABLE_State_2_37;
      MR_Integer Var_38;
      MR_Word Var_41;
      MR_Word Var_43;
      MR_String Var_44;
      MR_Integer next_value_of_CurClauseNum_23;
      MR_Word next_value_of_Clauses_24;
      MR_Word next_value_of_STATE_VARIABLE_State_0_28;

      mercury__string__builder__append_string_3_p_0((MR_String) "% clause ", STATE_VARIABLE_State_0_28, &Var_41);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), CurClauseNum_23, &Var_44);
      mercury__string__builder__append_string_3_p_0(Var_44, Var_41, &Var_43);
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_43, &STATE_VARIABLE_State_1_32);
      hlds__hlds_out__hlds_out_pred__format_clause_14_p_0(Info_14, Lang_15, ModuleInfo_16, PredId_17, PredOrFunc_18, VarNameSrc_19, TypeQual_20, VarNamePrint_21, (MR_Integer) 0, (MR_Unsigned) 0U, HeadTerms_22, FirstClause_26, STATE_VARIABLE_State_1_32, &STATE_VARIABLE_State_2_37);
      Var_38 = (MR_Integer) ((MR_Unsigned) CurClauseNum_23 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurClauseNum_23 = Var_38;
      next_value_of_Clauses_24 = LaterClauses_27;
      next_value_of_STATE_VARIABLE_State_0_28 = STATE_VARIABLE_State_2_37;
      CurClauseNum_23 = next_value_of_CurClauseNum_23;
      Clauses_24 = next_value_of_Clauses_24;
      STATE_VARIABLE_State_0_28 = next_value_of_STATE_VARIABLE_State_0_28;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__format_clause_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_pred__proc_id_to_int_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_clause_14_p_0(
  MR_Word Info_15,
  MR_Word Lang_16,
  MR_Word ModuleInfo_17,
  MR_Word PredId_18,
  MR_Word PredOrFunc_19,
  MR_Word VarNameSrc_20,
  MR_Word TypeQual_21,
  MR_Word VarNamePrint_22,
  MR_Word WriteWhichModes_23,
  MR_Unsigned Indent_24,
  MR_Word HeadTerms_25,
  MR_Word Clause_26,
  MR_Word STATE_VARIABLE_State_0_49,
  MR_Word * STATE_VARIABLE_State_50)
{
  MR_bool succeeded;
  MR_Word ApplicableModes_28 = ((MR_Word) ((MR_hl_field(0, Clause_26, 0))));
  MR_Word Goal_29 = ((MR_Word) ((MR_hl_field(0, Clause_26, 1))));
  MR_Word ImplLang_30 = ((MR_Word) ((MR_hl_field(0, Clause_26, 2))));
  MR_Word Context_31 = ((MR_Word) ((MR_hl_field(0, Clause_26, 3))));
  MR_String IndentStr_35;
  MR_Unsigned Indent1_36;
  MR_Word DumpOptions_37;
  MR_Word DumpClauseModes_38;
  MR_Word PredInfo_42;
  MR_Word AllProcIds_43;
  MR_Word STATE_VARIABLE_State_3_60;
  MR_Word STATE_VARIABLE_State_6_73;
  MR_Word STATE_VARIABLE_State_7_79;
  MR_Word SelectedProcIds_44;
  MR_Word TypeInfo_147_147;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;

  IndentStr_35 = libs__indent__indent2_string_1_f_0(Indent_24);
  Indent1_36 = (Indent_24 + (MR_Unsigned) 1U);
  DumpOptions_37 = ((MR_Word) ((MR_hl_field(0, Info_15, 0))));
  DumpClauseModes_38 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_37, 0))) >> 22)) & (MR_Integer) 1);
  switch (MR_tag((MR_Word) ApplicableModes_28)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ApplicableModes_28)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_State_3_60 = STATE_VARIABLE_State_0_49;
          break;
        case (MR_Integer) 1:
          switch (DumpClauseModes_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_State_3_60 = STATE_VARIABLE_State_0_49;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_138;

                mercury__string__builder__append_string_3_p_0(IndentStr_35, STATE_VARIABLE_State_0_49, &Var_138);
                mercury__string__builder__append_string_3_p_0((MR_String) "% this clause applies only to <in,in> unify modes.\n", Var_138, &STATE_VARIABLE_State_3_60);
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          switch (DumpClauseModes_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_State_3_60 = STATE_VARIABLE_State_0_49;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_136;

                mercury__string__builder__append_string_3_p_0(IndentStr_35, STATE_VARIABLE_State_0_49, &Var_136);
                mercury__string__builder__append_string_3_p_0((MR_String) "% this clause applies only to non <in,in> unify modes.\n", Var_136, &STATE_VARIABLE_State_3_60);
              }
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Modes_39 = ((MR_Word) ((MR_hl_field(1, ApplicableModes_28, 0))));

        switch (DumpClauseModes_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_State_3_60 = STATE_VARIABLE_State_0_49;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModeInts_40;
              MR_Word STATE_VARIABLE_State_1_54;
              MR_Word STATE_VARIABLE_State_2_58;
              MR_Word Var_140;

              mercury__string__builder__append_string_3_p_0(IndentStr_35, STATE_VARIABLE_State_0_49, &Var_140);
              mercury__string__builder__append_string_3_p_0((MR_String) "% modes for which this clause applies: ", Var_140, &STATE_VARIABLE_State_1_54);
              ModeInts_40 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[5]), Modes_39);
              hlds__hlds_out__hlds_out_util__format_intlist_3_p_0(ModeInts_40, STATE_VARIABLE_State_1_54, &STATE_VARIABLE_State_2_58);
              mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_2_58, &STATE_VARIABLE_State_3_60);
            }
            break;
        }
      }
      break;
  }
  if ((ImplLang_30 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_State_6_73 = STATE_VARIABLE_State_3_60;
  else
  {
    MR_Word ForeignLang_41 = ((MR_Unsigned) ((MR_hl_field(1, ImplLang_30, 0))) & (MR_Integer) 3);
    MR_String Var_77;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_145;

    Var_77 = libs__globals__foreign_language_string_1_f_0(ForeignLang_41);
    mercury__string__builder__append_string_3_p_0(IndentStr_35, STATE_VARIABLE_State_3_60, &Var_142);
    mercury__string__builder__append_string_3_p_0((MR_String) "% language of implementation: ", Var_142, &Var_143);
    mercury__string__builder__append_string_3_p_0(Var_77, Var_143, &Var_145);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_145, &STATE_VARIABLE_State_6_73);
  }
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_17, PredId_18, &PredInfo_42);
  AllProcIds_43 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_42);
  succeeded = ((MR_tag((MR_Word) ApplicableModes_28)) == (MR_Integer) 1);
  if (succeeded)
  {
    SelectedProcIds_44 = ((MR_Word) ((MR_hl_field(1, ApplicableModes_28, 0))));
    TypeInfo_147_147 = (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[10]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_147_147, ((MR_Box) (SelectedProcIds_44)), ((MR_Box) (AllProcIds_43)));
    succeeded = !(succeeded);
  }
  if (succeeded)
    hlds__hlds_out__hlds_out_pred__format_annotated_clause_heads_12_p_0(ModuleInfo_17, Lang_16, VarNameSrc_20, VarNamePrint_22, WriteWhichModes_23, PredId_18, PredOrFunc_19, SelectedProcIds_44, Context_31, HeadTerms_25, STATE_VARIABLE_State_6_73, &STATE_VARIABLE_State_7_79);
  else
    hlds__hlds_out__hlds_out_pred__format_clause_head_8_p_0(ModuleInfo_17, VarNameSrc_20, VarNamePrint_22, PredId_18, PredOrFunc_19, HeadTerms_25, STATE_VARIABLE_State_6_73, &STATE_VARIABLE_State_7_79);
  Var_81 = ((MR_Word) ((MR_hl_field(0, Goal_29, 0))));
  succeeded = ((((MR_tag((MR_Word) Var_81)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_81, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_82 = ((MR_Unsigned) ((MR_hl_field(3, Var_81, 1))) & (MR_Integer) 1);
    Var_83 = ((MR_Word) ((MR_hl_field(3, Var_81, 2))));
    succeeded = (Var_82 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Var_83 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    mercury__string__builder__append_string_3_p_0((MR_String) ".\n", STATE_VARIABLE_State_7_79, STATE_VARIABLE_State_50);
  else
  {
    MR_Word TVarSet_46;
    MR_Word InstVarSet_47;
    MR_Word InfoGoal_48;
    MR_Word STATE_VARIABLE_State_10_87;

    mercury__string__builder__append_string_3_p_0((MR_String) " :-\n", STATE_VARIABLE_State_7_79, &STATE_VARIABLE_State_10_87);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_42, &TVarSet_46);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_47);
    {
      InfoGoal_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InfoGoal_48, 0) = ((MR_Box) (Info_15));
      MR_hl_field(0, InfoGoal_48, 1) = ((MR_Box) (ModuleInfo_17));
      MR_hl_field(0, InfoGoal_48, 2) = ((MR_Box) (VarNameSrc_20));
      MR_hl_field(0, InfoGoal_48, 3) = (MR_Box) ((MR_Unsigned) (VarNamePrint_22));
      MR_hl_field(0, InfoGoal_48, 4) = ((MR_Box) (TVarSet_46));
      MR_hl_field(0, InfoGoal_48, 5) = ((MR_Box) (InstVarSet_47));
      MR_hl_field(0, InfoGoal_48, 6) = ((MR_Box) (TypeQual_21));
    }
    hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_48, Indent1_36, (MR_String) ".\n", Goal_29, STATE_VARIABLE_State_10_87, STATE_VARIABLE_State_50);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_clause_head_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word VarNameSrc_10,
  MR_Word VarNamePrint_11,
  MR_Word PredId_12,
  MR_Word PredOrFunc_13,
  MR_Word HeadTerms_14,
  MR_Word STATE_VARIABLE_State_0_21,
  MR_Word * STATE_VARIABLE_State_22)
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
        MR_String ArgsStr_20;
        MR_Word Var_23;
        MR_Word STATE_VARIABLE_State_1_24;
        MR_Word STATE_VARIABLE_State_2_26;
        MR_Box conv0_RetVal_19;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[3]), HeadTerms_14, &FuncArgs_18, &conv0_RetVal_19);
        RetVal_19 = ((MR_Word) (conv0_RetVal_19));
        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_23, 0) = ((MR_Box) (PredName_16));
        }
        ArgsStr_20 = hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(VarNameSrc_10, VarNamePrint_11, ModuleName_17, Var_23, FuncArgs_18);
        mercury__string__builder__append_string_3_p_0(ArgsStr_20, STATE_VARIABLE_State_0_21, &STATE_VARIABLE_State_1_24);
        mercury__string__builder__append_string_3_p_0((MR_String) " = ", STATE_VARIABLE_State_1_24, &STATE_VARIABLE_State_2_26);
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), VarNameSrc_10, VarNamePrint_11, (MR_Integer) 0, RetVal_19, STATE_VARIABLE_State_2_26, STATE_VARIABLE_State_22);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_30;
        MR_String ArgsStr_32;

        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_30, 0) = ((MR_Box) (PredName_16));
        }
        ArgsStr_32 = hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(VarNameSrc_10, VarNamePrint_11, ModuleName_17, Var_30, HeadTerms_14);
        mercury__string__builder__append_string_3_p_0(ArgsStr_32, STATE_VARIABLE_State_0_21, STATE_VARIABLE_State_22);
      }
      break;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__format_annotated_clause_heads_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_AnnotatedTerm_9;

  conv1_AnnotatedTerm_9 = hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_AnnotatedTerm_9));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_annotated_clause_heads_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Lang_2,
  MR_Word VarNameSrc_3,
  MR_Word VarNamePrint_4,
  MR_Word WriteWhichModes_5,
  MR_Word PredId_6,
  MR_Word PredOrFunc_7,
  MR_Word HeadVar__8_8,
  MR_Word Context_9,
  MR_Word HeadTerms_10,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_12 = STATE_VARIABLE_State_0_11;
    else
    {
      MR_Integer ProcId_32 = ((MR_Integer) ((MR_hl_field(1, HeadVar__8_8, 0))));
      MR_Word ProcIds_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, 1))));
      MR_Word STATE_VARIABLE_State_1_39;
      MR_Word PredInfo_40;
      MR_Word Procedures_41;
      MR_Word ProcInfo_42;
      MR_Box conv0_ProcInfo_42;
      MR_Word next_value_of_HeadVar__8_8;
      MR_Word next_value_of_STATE_VARIABLE_State_0_11;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_6, &PredInfo_40);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_40, &Procedures_41);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procedures_41, ((MR_Box) (ProcId_32)), &conv0_ProcInfo_42);
      if (succeeded)
      {
        ProcInfo_42 = ((MR_Word) (conv0_ProcInfo_42));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word ArgModes_43;
        MR_Word AnnotatedPairs_44;
        MR_Word AnnotatedHeadTerms_45;
        MR_Word Var_46;
        MR_String PredName_52;
        MR_Word ModuleName_53;

        switch (WriteWhichModes_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_42, &ArgModes_43);
            break;
          case (MR_Integer) 1:
            hlds__hlds_proc_util__proc_info_declared_argmodes_2_p_0(ProcInfo_42, &ArgModes_43);
            break;
        }
        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), HeadTerms_10, ArgModes_43, &AnnotatedPairs_44);
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_8[0]));
          MR_hl_field(0, Var_46, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_annotated_clause_heads_12_p_0_1));
          MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_46, 3) = ((MR_Box) (Lang_2));
          MR_hl_field(0, Var_46, 4) = ((MR_Box) (Context_9));
        }
        AnnotatedHeadTerms_45 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[3]), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[3]), Var_46, AnnotatedPairs_44);
        PredName_52 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_1, PredId_6);
        ModuleName_53 = hlds__hlds_module__predicate_module_2_f_0(ModuleInfo_1, PredId_6);
        switch (PredOrFunc_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word FuncArgs_54;
              MR_Word RetVal_55;
              MR_String ArgsStr_56;
              MR_Word Var_57;
              MR_Word STATE_VARIABLE_State_1_58;
              MR_Word STATE_VARIABLE_State_2_60;
              MR_Box conv2_RetVal_55;

              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[3]), AnnotatedHeadTerms_45, &FuncArgs_54, &conv2_RetVal_55);
              RetVal_55 = ((MR_Word) (conv2_RetVal_55));
              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_57, 0) = ((MR_Box) (PredName_52));
              }
              ArgsStr_56 = hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(VarNameSrc_3, VarNamePrint_4, ModuleName_53, Var_57, FuncArgs_54);
              mercury__string__builder__append_string_3_p_0(ArgsStr_56, STATE_VARIABLE_State_0_11, &STATE_VARIABLE_State_1_58);
              mercury__string__builder__append_string_3_p_0((MR_String) " = ", STATE_VARIABLE_State_1_58, &STATE_VARIABLE_State_2_60);
              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), VarNameSrc_3, VarNamePrint_4, (MR_Integer) 0, RetVal_55, STATE_VARIABLE_State_2_60, &STATE_VARIABLE_State_1_39);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_63;
              MR_String ArgsStr_64;

              {
                Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_63, 0) = ((MR_Box) (PredName_52));
              }
              ArgsStr_64 = hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(VarNameSrc_3, VarNamePrint_4, ModuleName_53, Var_63, AnnotatedHeadTerms_45);
              mercury__string__builder__append_string_3_p_0(ArgsStr_64, STATE_VARIABLE_State_0_11, &STATE_VARIABLE_State_1_39);
            }
            break;
        }
      }
      else
        STATE_VARIABLE_State_1_39 = STATE_VARIABLE_State_0_11;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__8_8 = ProcIds_33;
      next_value_of_STATE_VARIABLE_State_0_11 = STATE_VARIABLE_State_1_39;
      HeadVar__8_8 = next_value_of_HeadVar__8_8;
      STATE_VARIABLE_State_0_11 = next_value_of_STATE_VARIABLE_State_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(
  MR_Word Info_3,
  MR_Word * ClausesInfo_4)
{
  MR_Word GenOptions_5 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));
  MR_Word STATE_VARIABLE_ClauseOptions_1_7;
  MR_Word Var_9;
  MR_Word STATE_VARIABLE_ClauseOptions_6_16;
  MR_Word Var_27;
  MR_Word Var_31;
  MR_Word Var_37;
  MR_Word Var_51;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_91;
  MR_Unsigned packed_word_0;
  MR_Word Var_408;
  MR_Word Var_409;
  MR_Word Var_410;
  MR_Word Var_411;

  STATE_VARIABLE_ClauseOptions_1_7 = hlds__hlds_out__hlds_out_util__empty_dump_options_0_f_0();
  Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, GenOptions_5, 0))) >> 29)) & (MR_Integer) 1);
  Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, GenOptions_5, 0))) >> 25)) & (MR_Integer) 1);
  Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, GenOptions_5, 0))) >> 21)) & (MR_Integer) 1);
  Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, GenOptions_5, 0))) >> 15)) & (MR_Integer) 1);
  Var_51 = ((((MR_Unsigned) ((MR_hl_field(0, GenOptions_5, 0))) >> 1)) & (MR_Integer) 1);
  Var_60 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 31)) & (MR_Integer) 1);
  Var_61 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 30)) & (MR_Integer) 1);
  Var_63 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 28)) & (MR_Integer) 1);
  Var_64 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 27)) & (MR_Integer) 1);
  Var_65 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 26)) & (MR_Integer) 1);
  Var_67 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 24)) & (MR_Integer) 1);
  Var_68 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 23)) & (MR_Integer) 1);
  Var_69 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 22)) & (MR_Integer) 1);
  Var_71 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 20)) & (MR_Integer) 1);
  Var_72 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 19)) & (MR_Integer) 1);
  Var_73 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 18)) & (MR_Integer) 1);
  Var_74 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 17)) & (MR_Integer) 1);
  Var_75 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 16)) & (MR_Integer) 1);
  Var_77 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 14)) & (MR_Integer) 1);
  Var_78 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 13)) & (MR_Integer) 1);
  Var_79 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 12)) & (MR_Integer) 1);
  Var_80 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 11)) & (MR_Integer) 1);
  Var_81 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 10)) & (MR_Integer) 1);
  Var_82 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 9)) & (MR_Integer) 1);
  Var_83 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 8)) & (MR_Integer) 1);
  Var_84 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 7)) & (MR_Integer) 1);
  Var_85 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 6)) & (MR_Integer) 1);
  Var_86 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 5)) & (MR_Integer) 1);
  Var_87 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 4)) & (MR_Integer) 1);
  Var_88 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 3)) & (MR_Integer) 1);
  Var_89 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) >> 2)) & (MR_Integer) 1);
  Var_91 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 0))) & (MR_Integer) 1);
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClauseOptions_1_7, 1)));
  {
    STATE_VARIABLE_ClauseOptions_6_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_ClauseOptions_6_16, 0) = (MR_Box) (((((MR_Unsigned) (Var_60) << 31)) | (((((MR_Unsigned) (Var_61) << 30)) | (((((MR_Unsigned) (Var_9) << 29)) | (((((MR_Unsigned) (Var_63) << 28)) | (((((MR_Unsigned) (Var_64) << 27)) | (((((MR_Unsigned) (Var_65) << 26)) | (((((MR_Unsigned) (Var_27) << 25)) | (((((MR_Unsigned) (Var_67) << 24)) | (((((MR_Unsigned) (Var_68) << 23)) | (((((MR_Unsigned) (Var_69) << 22)) | (((((MR_Unsigned) (Var_31) << 21)) | (((((MR_Unsigned) (Var_71) << 20)) | (((((MR_Unsigned) (Var_72) << 19)) | (((((MR_Unsigned) (Var_73) << 18)) | (((((MR_Unsigned) (Var_74) << 17)) | (((((MR_Unsigned) (Var_75) << 16)) | (((((MR_Unsigned) (Var_37) << 15)) | (((((MR_Unsigned) (Var_77) << 14)) | (((((MR_Unsigned) (Var_78) << 13)) | (((((MR_Unsigned) (Var_79) << 12)) | (((((MR_Unsigned) (Var_80) << 11)) | (((((MR_Unsigned) (Var_81) << 10)) | (((((MR_Unsigned) (Var_82) << 9)) | (((((MR_Unsigned) (Var_83) << 8)) | (((((MR_Unsigned) (Var_84) << 7)) | (((((MR_Unsigned) (Var_85) << 6)) | (((((MR_Unsigned) (Var_86) << 5)) | (((((MR_Unsigned) (Var_87) << 4)) | (((((MR_Unsigned) (Var_88) << 3)) | (((((MR_Unsigned) (Var_89) << 2)) | (((((MR_Unsigned) (Var_51) << 1)) | (MR_Unsigned) (Var_91)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, STATE_VARIABLE_ClauseOptions_6_16, 1) = (MR_Box) (packed_word_0);
  }
  Var_408 = ((MR_Word) ((MR_hl_field(0, Info_3, 1))));
  Var_409 = ((MR_Word) ((MR_hl_field(0, Info_3, 2))));
  Var_410 = ((MR_Word) ((MR_hl_field(0, Info_3, 3))));
  Var_411 = ((MR_Word) ((MR_hl_field(0, Info_3, 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *ClausesInfo_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_ClauseOptions_6_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_408));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_409));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_410));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_411));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_types_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_State_13;

  hlds__hlds_out__hlds_out_pred__format_constraint_map_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_State_13);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_State_13));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_types_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_State_20;

  hlds__hlds_out__hlds_out_pred__format_rtti_var_info_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_State_20);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_State_20));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_types_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_State_16;

  hlds__hlds_out__hlds_out_pred__format_typeclass_info_var_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_State_16);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_State_16));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_types_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_22;

  hlds__hlds_out__hlds_out_pred__format_type_info_locn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_State_22);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_State_22));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_types_9_p_0(
  MR_Word VarNamePrint_10,
  MR_Word TVarSet_11,
  MR_Word VarTable_12,
  MR_Word RttiVarMaps_13,
  MR_Word ProofMap_14,
  MR_Word ConstraintMap_15,
  MR_Word ExternalTypeParams_16,
  MR_Word STATE_VARIABLE_State_0_20,
  MR_Word * STATE_VARIABLE_State_21)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_State_1_22;
  MR_Word STATE_VARIABLE_State_3_26;
  MR_Word STATE_VARIABLE_State_4_27;
  MR_Word STATE_VARIABLE_State_8_35;
  MR_Word TypeVars_42;
  MR_Word Constraints_43;
  MR_Word ProgVars_44;
  MR_Word STATE_VARIABLE_State_1_46;
  MR_Word Var_47;
  MR_Word STATE_VARIABLE_State_2_48;
  MR_Word STATE_VARIABLE_State_3_50;
  MR_Word Var_51;
  MR_Word STATE_VARIABLE_State_4_52;
  MR_Word STATE_VARIABLE_State_5_54;
  MR_Word Var_55;
  MR_Integer NumVars_66;
  MR_Word VarsEntries_67;
  MR_Word STATE_VARIABLE_State_1_70;
  MR_Word Var_73;
  MR_Word Var_75;
  MR_String Var_76;
  MR_Box conv1_STATE_VARIABLE_State_2_48;
  MR_Box conv3_STATE_VARIABLE_State_4_52;
  MR_Box conv5_STATE_VARIABLE_State_1_22;

  mercury__string__builder__append_string_3_p_0((MR_String) "% type_info varmap:\n", STATE_VARIABLE_State_0_20, &STATE_VARIABLE_State_1_46);
  hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(RttiVarMaps_13, &TypeVars_42);
  {
    Var_47 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_47, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[0]));
    MR_hl_field(0, Var_47, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_pred_types_9_p_0_1));
    MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_47, 3) = ((MR_Box) (VarNamePrint_10));
    MR_hl_field(0, Var_47, 4) = ((MR_Box) (TVarSet_11));
    MR_hl_field(0, Var_47, 5) = ((MR_Box) (VarTable_12));
    MR_hl_field(0, Var_47, 6) = ((MR_Box) (RttiVarMaps_13));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[1]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_47, TypeVars_42, ((MR_Box) (STATE_VARIABLE_State_1_46)), &conv1_STATE_VARIABLE_State_2_48);
  STATE_VARIABLE_State_2_48 = ((MR_Word) (conv1_STATE_VARIABLE_State_2_48));
  mercury__string__builder__append_string_3_p_0((MR_String) "% typeclass_info varmap:\n", STATE_VARIABLE_State_2_48, &STATE_VARIABLE_State_3_50);
  hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(RttiVarMaps_13, &Constraints_43);
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[1]));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_pred_types_9_p_0_2));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_51, 3) = ((MR_Box) (VarNamePrint_10));
    MR_hl_field(0, Var_51, 4) = ((MR_Box) (TVarSet_11));
    MR_hl_field(0, Var_51, 5) = ((MR_Box) (VarTable_12));
    MR_hl_field(0, Var_51, 6) = ((MR_Box) (RttiVarMaps_13));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_51, Constraints_43, ((MR_Box) (STATE_VARIABLE_State_3_50)), &conv3_STATE_VARIABLE_State_4_52);
  STATE_VARIABLE_State_4_52 = ((MR_Word) (conv3_STATE_VARIABLE_State_4_52));
  mercury__string__builder__append_string_3_p_0((MR_String) "% rtti_var_info:\n", STATE_VARIABLE_State_4_52, &STATE_VARIABLE_State_5_54);
  hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(RttiVarMaps_13, &ProgVars_44);
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[2]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_pred_types_9_p_0_3));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (VarNamePrint_10));
    MR_hl_field(0, Var_55, 4) = ((MR_Box) (TVarSet_11));
    MR_hl_field(0, Var_55, 5) = ((MR_Box) (VarTable_12));
    MR_hl_field(0, Var_55, 6) = ((MR_Box) (RttiVarMaps_13));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_4[2]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_55, ProgVars_44, ((MR_Box) (STATE_VARIABLE_State_5_54)), &conv5_STATE_VARIABLE_State_1_22);
  STATE_VARIABLE_State_1_22 = ((MR_Word) (conv5_STATE_VARIABLE_State_1_22));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap_14);
  if (succeeded)
    STATE_VARIABLE_State_3_26 = STATE_VARIABLE_State_1_22;
  else
  {
    MR_Word STATE_VARIABLE_State_2_24;

    hlds__hlds_out__hlds_out_util__format_constraint_proof_map_6_p_0((MR_Unsigned) 0U, VarNamePrint_10, TVarSet_11, ProofMap_14, STATE_VARIABLE_State_1_22, &STATE_VARIABLE_State_2_24);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_2_24, &STATE_VARIABLE_State_3_26);
  }
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ConstraintMap_15);
  if (succeeded)
    STATE_VARIABLE_State_4_27 = STATE_VARIABLE_State_3_26;
  else
  {
    MR_Word STATE_VARIABLE_State_1_61;
    MR_Word Var_62;
    MR_Box conv7_STATE_VARIABLE_State_4_27;

    mercury__string__builder__append_string_3_p_0((MR_String) "% constraint map:\n", STATE_VARIABLE_State_3_26, &STATE_VARIABLE_State_1_61);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_62, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[0]));
      MR_hl_field(0, Var_62, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__format_pred_types_9_p_0_4));
      MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_62, 3) = ((MR_Box) (VarNamePrint_10));
      MR_hl_field(0, Var_62, 4) = ((MR_Box) (TVarSet_11));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_62, ConstraintMap_15, ((MR_Box) (STATE_VARIABLE_State_1_61)), &conv7_STATE_VARIABLE_State_4_27);
    STATE_VARIABLE_State_4_27 = ((MR_Word) (conv7_STATE_VARIABLE_State_4_27));
  }
  if ((ExternalTypeParams_16 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_State_8_35 = STATE_VARIABLE_State_4_27;
  else
  {
    MR_Word STATE_VARIABLE_State_5_29;
    MR_Word STATE_VARIABLE_State_6_31;
    MR_Word STATE_VARIABLE_State_7_33;

    mercury__string__builder__append_string_3_p_0((MR_String) "% external_type_params:\n", STATE_VARIABLE_State_4_27, &STATE_VARIABLE_State_5_29);
    mercury__string__builder__append_string_3_p_0((MR_String) "% ", STATE_VARIABLE_State_5_29, &STATE_VARIABLE_State_6_31);
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[1]), TVarSet_11, VarNamePrint_10, ExternalTypeParams_16, STATE_VARIABLE_State_6_31, &STATE_VARIABLE_State_7_33);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_7_33, &STATE_VARIABLE_State_8_35);
  }
  parse_tree__var_table__var_table_count_2_p_0(VarTable_12, &NumVars_66);
  mercury__string__builder__append_string_3_p_0((MR_String) "% variable table (", STATE_VARIABLE_State_8_35, &Var_73);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), NumVars_66, &Var_76);
  mercury__string__builder__append_string_3_p_0(Var_76, Var_73, &Var_75);
  mercury__string__builder__append_string_3_p_0((MR_String) " entries):\n", Var_75, &STATE_VARIABLE_State_1_70);
  parse_tree__var_table__var_table_to_sorted_assoc_list_2_p_0(VarTable_12, &VarsEntries_67);
  hlds__hlds_out__hlds_out_pred__format_var_types_loop_5_p_0(VarNamePrint_10, TVarSet_11, VarsEntries_67, STATE_VARIABLE_State_1_70, STATE_VARIABLE_State_21);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_var_types_loop_5_p_0(
  MR_Word VarNamePrint_1,
  MR_Word TypeVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_State_0_4,
  MR_Word * STATE_VARIABLE_State_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_5 = STATE_VARIABLE_State_0_4;
    else
    {
      MR_Word Var_13;
      MR_Word Entry_14;
      MR_Word VarsEntries_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_String Name_17;
      MR_Word Type_18;
      MR_Word IsDummy_19;
      MR_Integer VarNum_20;
      MR_String VarStr_21;
      MR_String TypeStr_22;
      MR_String DummySuffix_23;
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word STATE_VARIABLE_State_1_29;
      MR_Word Var_39;
      MR_Word Var_41;
      MR_String Var_42;
      MR_Word Var_49;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_State_0_4;

      Var_13 = ((MR_Word) ((MR_hl_field(0, Var_26, 0))));
      Entry_14 = ((MR_Word) ((MR_hl_field(0, Var_26, 1))));
      Name_17 = ((MR_String) ((MR_hl_field(0, Entry_14, 0))));
      Type_18 = ((MR_Word) ((MR_hl_field(0, Entry_14, 1))));
      IsDummy_19 = ((MR_Unsigned) ((MR_hl_field(0, Entry_14, 2))) & (MR_Integer) 1);
      mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_13, &VarNum_20);
      VarStr_21 = parse_tree__parse_tree_out_term__mercury_var_raw_to_string_3_f_0(VarNamePrint_1, Var_13, Name_17);
      TypeStr_22 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TypeVarSet_2, VarNamePrint_1, Type_18);
      switch (IsDummy_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          DummySuffix_23 = (MR_String) " (dummy type)";
          break;
        case (MR_Integer) 1:
          DummySuffix_23 = (MR_String) "";
          break;
      }
      mercury__string__builder__append_string_3_p_0((MR_String) "% var #", STATE_VARIABLE_State_0_4, &Var_39);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), VarNum_20, &Var_42);
      mercury__string__builder__append_string_3_p_0(Var_42, Var_39, &Var_41);
      mercury__string__builder__append_string_3_p_0((MR_String) ", ", Var_41, &Var_49);
      mercury__string__builder__append_string_3_p_0(VarStr_21, Var_49, &Var_51);
      mercury__string__builder__append_string_3_p_0((MR_String) ": ", Var_51, &Var_52);
      mercury__string__builder__append_string_3_p_0(TypeStr_22, Var_52, &Var_54);
      mercury__string__builder__append_string_3_p_0(DummySuffix_23, Var_54, &Var_55);
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_55, &STATE_VARIABLE_State_1_29);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = VarsEntries_15;
      next_value_of_STATE_VARIABLE_State_0_4 = STATE_VARIABLE_State_1_29;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_State_0_4 = next_value_of_STATE_VARIABLE_State_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_markers_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  hlds__hlds_markers__marker_name_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__format_pred_markers_3_p_0(
  MR_Word Markers_4,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12)
{
  MR_Word MarkerList_6;

  hlds__hlds_markers__markers_to_marker_list_2_p_0(Markers_4, &MarkerList_6);
  if ((MarkerList_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_State_12 = STATE_VARIABLE_State_0_11;
  else
  {
    MR_Word MarkerNames_9;
    MR_String MarkerNamesStr_10;
    MR_Word Var_24;
    MR_Word Var_26;

    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[4]), MarkerList_6, &MarkerNames_9);
    MarkerNamesStr_10 = mercury__string__join_list_2_f_0((MR_String) ", ", MarkerNames_9);
    mercury__string__builder__append_string_3_p_0((MR_String) "% markers: ", STATE_VARIABLE_State_0_11, &Var_24);
    mercury__string__builder__append_string_3_p_0(MarkerNamesStr_10, Var_24, &Var_26);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_26, STATE_VARIABLE_State_12);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__find_filled_in_procs_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ProcIdInfo_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ProcIdsInfos_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word TailFilledInProcIdsInfos_6;
    MR_Word ProcInfo_8;
    MR_Word Goal_9;
    MR_Word GoalExpr_10;
    MR_Word Var_12;
    MR_Word Var_13;

    hlds__hlds_out__hlds_out_pred__find_filled_in_procs_2_p_0(ProcIdsInfos_4, &TailFilledInProcIdsInfos_6);
    ProcInfo_8 = ((MR_Word) ((MR_hl_field(0, ProcIdInfo_3, 1))));
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_8, &Goal_9);
    GoalExpr_10 = ((MR_Word) ((MR_hl_field(0, Goal_9, 0))));
    succeeded = ((((MR_tag((MR_Word) GoalExpr_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_10, 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_12 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_10, 1))) & (MR_Integer) 1);
      Var_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
      succeeded = (Var_12 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      *HeadVar__2_2 = TailFilledInProcIdsInfos_6;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ProcIdInfo_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailFilledInProcIdsInfos_6));
      }
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred__report_clause_count_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__report_clause_count__312__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_pred__report_clause_count_1_f_0(
  MR_Word Clauses_3)
{
  MR_bool succeeded;
  MR_String Report_4;
  MR_Integer Mer_5;
  MR_Integer C_6;
  MR_Integer Cs_7;
  MR_Integer Java_8;
  MR_Integer Total_9;
  MR_Integer Var_24;
  MR_Integer Var_25;

  hlds__hlds_out__hlds_out_pred__count_clause_langs_9_p_0(Clauses_3, (MR_Integer) 0, &Mer_5, (MR_Integer) 0, &C_6, (MR_Integer) 0, &Cs_7, (MR_Integer) 0, &Java_8);
  Var_25 = (MR_Integer) ((MR_Unsigned) Mer_5 + (MR_Unsigned) C_6);
  Var_24 = (MR_Integer) ((MR_Unsigned) Var_25 + (MR_Unsigned) Cs_7);
  Total_9 = (MR_Integer) ((MR_Unsigned) Var_24 + (MR_Unsigned) Java_8);
  succeeded = (Total_9 == (MR_Integer) 0);
  if (succeeded)
    Report_4 = (MR_String) "0";
  else
  {
    MR_String MerStr_10;
    MR_String CStr_11;
    MR_String CsStr_12;
    MR_String JavaStr_13;
    MR_Word LangStrs_15;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_14;

    succeeded = (Mer_5 == (MR_Integer) 0);
    if (succeeded)
      MerStr_10 = (MR_String) "";
    else
    {
      MR_String Var_72;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), Mer_5, &Var_72);
      MerStr_10 = mercury__string__f_43_43_2_f_0(Var_72, (MR_String) " Mercury");
    }
    succeeded = (C_6 == (MR_Integer) 0);
    if (succeeded)
      CStr_11 = (MR_String) "";
    else
    {
      MR_String Var_87;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), C_6, &Var_87);
      CStr_11 = mercury__string__f_43_43_2_f_0(Var_87, (MR_String) " C");
    }
    succeeded = (Cs_7 == (MR_Integer) 0);
    if (succeeded)
      CsStr_12 = (MR_String) "";
    else
    {
      MR_String Var_102;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), Cs_7, &Var_102);
      CsStr_12 = mercury__string__f_43_43_2_f_0(Var_102, (MR_String) " C#");
    }
    JavaStr_13 = hlds__hlds_out__hlds_out_pred__clause_count_to_str_2_f_0((MR_String) "Java", Java_8);
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (JavaStr_13));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (CsStr_12));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (CStr_11));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (MerStr_10));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
    }
    mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[2]), Var_31, &Var_14, &LangStrs_15);
    if ((LangStrs_15 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.hlds_out.hlds_out_pred.report_clause_count\'/1", (MR_String) "LangStrs = []");
    else
    {
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(1, LangStrs_15, 1))));
      MR_String Var_52 = ((MR_String) ((MR_hl_field(1, LangStrs_15, 0))));

      if ((Var_51 == (MR_Word) ((MR_Unsigned) 0U)))
        Report_4 = Var_52;
      else
      {
        MR_String LangsStr_19;
        MR_String Var_54;
        MR_String Var_56;
        MR_String Var_57;

        LangsStr_19 = mercury__string__join_list_2_f_0((MR_String) ", ", LangStrs_15);
        Var_54 = mercury__string__f_43_43_2_f_0(LangsStr_19, (MR_String) ")");
        Var_56 = mercury__string__f_43_43_2_f_0((MR_String) " total (", Var_54);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), Total_9, &Var_57);
        Report_4 = mercury__string__f_43_43_2_f_0(Var_57, Var_56);
      }
    }
  }
  return Report_4;
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_pred__clause_count_to_str_2_f_0(
  MR_String LangStr_4,
  MR_Integer Count_5)
{
  MR_bool succeeded = (Count_5 == (MR_Integer) 0);
  MR_String LangReport_6;

  if (succeeded)
    LangReport_6 = (MR_String) "";
  else
  {
    MR_String Var_14;
    MR_String Var_15;

    Var_14 = mercury__string__f_43_43_2_f_0((MR_String) " ", LangStr_4);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), Count_5, &Var_15);
    LangReport_6 = mercury__string__f_43_43_2_f_0(Var_15, Var_14);
  }
  return LangReport_6;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__count_clause_langs_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Mer_0_2,
  MR_Integer * STATE_VARIABLE_Mer_3,
  MR_Integer STATE_VARIABLE_C_0_4,
  MR_Integer * STATE_VARIABLE_C_5,
  MR_Integer STATE_VARIABLE_Cs_0_6,
  MR_Integer * STATE_VARIABLE_Cs_7,
  MR_Integer STATE_VARIABLE_Java_0_8,
  MR_Integer * STATE_VARIABLE_Java_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Java_9 = STATE_VARIABLE_Java_0_8;
      *STATE_VARIABLE_Cs_7 = STATE_VARIABLE_Cs_0_6;
      *STATE_VARIABLE_C_5 = STATE_VARIABLE_C_0_4;
      *STATE_VARIABLE_Mer_3 = STATE_VARIABLE_Mer_0_2;
    }
    else
    {
      MR_Word Clause_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Clauses_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Lang_28 = ((MR_Word) ((MR_hl_field(0, Clause_22, 2))));
      MR_Integer STATE_VARIABLE_Mer_1_38;
      MR_Integer STATE_VARIABLE_C_1_40;
      MR_Integer STATE_VARIABLE_Cs_1_42;
      MR_Integer STATE_VARIABLE_Java_1_44;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_Mer_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_C_0_4;
      MR_Integer next_value_of_STATE_VARIABLE_Cs_0_6;
      MR_Integer next_value_of_STATE_VARIABLE_Java_0_8;

      if ((Lang_28 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_Mer_1_38 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Mer_0_2 + (MR_Unsigned) 1);
        STATE_VARIABLE_C_1_40 = STATE_VARIABLE_C_0_4;
        STATE_VARIABLE_Cs_1_42 = STATE_VARIABLE_Cs_0_6;
        STATE_VARIABLE_Java_1_44 = STATE_VARIABLE_Java_0_8;
      }
      else
      {
        MR_Word ForeignLang_29 = ((MR_Unsigned) ((MR_hl_field(1, Lang_28, 0))) & (MR_Integer) 3);

        switch (ForeignLang_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_C_1_40 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_C_0_4 + (MR_Unsigned) 1);
              STATE_VARIABLE_Cs_1_42 = STATE_VARIABLE_Cs_0_6;
              STATE_VARIABLE_Java_1_44 = STATE_VARIABLE_Java_0_8;
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_Cs_1_42 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Cs_0_6 + (MR_Unsigned) 1);
              STATE_VARIABLE_C_1_40 = STATE_VARIABLE_C_0_4;
              STATE_VARIABLE_Java_1_44 = STATE_VARIABLE_Java_0_8;
            }
            break;
          case (MR_Integer) 2:
            {
              STATE_VARIABLE_Java_1_44 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Java_0_8 + (MR_Unsigned) 1);
              STATE_VARIABLE_C_1_40 = STATE_VARIABLE_C_0_4;
              STATE_VARIABLE_Cs_1_42 = STATE_VARIABLE_Cs_0_6;
            }
            break;
        }
        STATE_VARIABLE_Mer_1_38 = STATE_VARIABLE_Mer_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Clauses_23;
      next_value_of_STATE_VARIABLE_Mer_0_2 = STATE_VARIABLE_Mer_1_38;
      next_value_of_STATE_VARIABLE_C_0_4 = STATE_VARIABLE_C_1_40;
      next_value_of_STATE_VARIABLE_Cs_0_6 = STATE_VARIABLE_Cs_1_42;
      next_value_of_STATE_VARIABLE_Java_0_8 = STATE_VARIABLE_Java_1_44;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Mer_0_2 = next_value_of_STATE_VARIABLE_Mer_0_2;
      STATE_VARIABLE_C_0_4 = next_value_of_STATE_VARIABLE_C_0_4;
      STATE_VARIABLE_Cs_0_6 = next_value_of_STATE_VARIABLE_Cs_0_6;
      STATE_VARIABLE_Java_0_8 = next_value_of_STATE_VARIABLE_Java_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__output_format_string_values_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_State_0_2,
  MR_Word * STATE_VARIABLE_State_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_3 = STATE_VARIABLE_State_0_2;
    else
    {
      MR_Word FmtStringValue_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word FmtStringValues_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer OrigFmtStr_10 = ((MR_Integer) ((MR_hl_field(0, FmtStringValue_7, 0))));
      MR_Integer OrigValues_11 = ((MR_Integer) ((MR_hl_field(0, FmtStringValue_7, 1))));
      MR_Integer CurFmtStr_12 = ((MR_Integer) ((MR_hl_field(0, FmtStringValue_7, 2))));
      MR_Integer CurValues_13 = ((MR_Integer) ((MR_hl_field(0, FmtStringValue_7, 3))));
      MR_Word STATE_VARIABLE_State_1_18;
      MR_Word Var_27;
      MR_Word Var_29;
      MR_String Var_30;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_String Var_40;
      MR_Word Var_47;
      MR_Word Var_49;
      MR_String Var_50;
      MR_Word Var_57;
      MR_Word Var_59;
      MR_String Var_60;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_State_0_2;

      mercury__string__builder__append_string_3_p_0((MR_String) "% format call: format string in arg ", STATE_VARIABLE_State_0_2, &Var_27);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), OrigFmtStr_10, &Var_30);
      mercury__string__builder__append_string_3_p_0(Var_30, Var_27, &Var_29);
      mercury__string__builder__append_string_3_p_0((MR_String) "/", Var_29, &Var_37);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), CurFmtStr_12, &Var_40);
      mercury__string__builder__append_string_3_p_0(Var_40, Var_37, &Var_39);
      mercury__string__builder__append_string_3_p_0((MR_String) ", values in arg ", Var_39, &Var_47);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), OrigValues_11, &Var_50);
      mercury__string__builder__append_string_3_p_0(Var_50, Var_47, &Var_49);
      mercury__string__builder__append_string_3_p_0((MR_String) "/", Var_49, &Var_57);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]), CurValues_13, &Var_60);
      mercury__string__builder__append_string_3_p_0(Var_60, Var_57, &Var_59);
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_59, &STATE_VARIABLE_State_1_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = FmtStringValues_8;
      next_value_of_STATE_VARIABLE_State_0_2 = STATE_VARIABLE_State_1_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_State_0_2 = next_value_of_STATE_VARIABLE_State_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_out__hlds_out_pred____Unify____write_which_modes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_out__hlds_out_pred____Compare____write_which_modes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
