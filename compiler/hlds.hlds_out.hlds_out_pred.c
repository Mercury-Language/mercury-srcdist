/*
** Automatically generated from `hlds_out_pred.m'
** by the Mercury compiler,
** version 22.01.8-beta-2023-09-06
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
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc_arg_info__1365__1_6_p_0(
  MR_Word VarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word HeadVar__3_38,
  MR_Word HeadVar__4_39);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(
  MR_Word Stream_8,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word OldVar_11,
  MR_Word NewVars_12);

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
hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(
  MR_Word Stream_9,
  MR_Word VarSet_10,
  MR_Word TVarSet_11,
  MR_Word VarNamePrint_12,
  MR_Word RttiVarMaps_13,
  MR_Word Var_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(
  MR_Word Stream_9,
  MR_Word VarSet_10,
  MR_Word TVarSet_11,
  MR_Word VarNamePrint_12,
  MR_Word RttiVarMaps_13,
  MR_Word Constraint_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(
  MR_Word Stream_9,
  MR_Word VarSet_10,
  MR_Word TVarSet_11,
  MR_Word VarNamePrint_12,
  MR_Word RttiVarMaps_13,
  MR_Word TVar_14);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_f_0(
  MR_Word Lang_5,
  MR_Word Context_6,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_origin_constraint_6_p_0(
  MR_Word Stream_7,
  MR_Word TVarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word Constraint_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(
  MR_Word Stream_8,
  MR_Word VarNamePrint_9,
  MR_Word VarSet_10,
  MR_Word ConstraintId_11,
  MR_Word ProgConstraint_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_obsolete_in_favour_of_4_p_0(
  MR_Word Stream_5,
  MR_Word ObsoleteInFavourOf_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_loop_9_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word VarNamePrint_3,
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_Word PredInfo_6,
  MR_Word HeadVar__7_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word VarNamePrint_13,
  MR_Word ModuleInfo_14,
  MR_Word PredId_15,
  MR_Word PredInfo_16,
  MR_Integer ProcId_17,
  MR_Word ProcInfo_18);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word StackSlots_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_arg_info_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_arg_info_9_p_0(
  MR_Word Stream_10,
  MR_String DumpOptions_11,
  MR_Word VarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word MaybeArgLives_14,
  MR_Word RegR_HeadVars_15,
  MR_Word MaybeArgInfos_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_proc_var_name_remap_5_p_0(
  MR_Word Stream_6,
  MR_Word VarSet_7,
  MR_Word VarNameRemap_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_name_remap_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Word Head_9,
  MR_Word Tail_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_deleted_callee_set_4_p_0(
  MR_Word Stream_5,
  MR_Word DeletedCallCalleeSet_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_opt_info_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_opt_info_10_p_0(
  MR_Word Stream_11,
  MR_String DumpOptions_12,
  MR_Word VarSet_13,
  MR_Word TVarSet_14,
  MR_Word VarNamePrint_15,
  MR_Word MaybeStructureSharing_16,
  MR_Word MaybeStructureReuse_17,
  MR_Word MaybeUntupleInfo_18);

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
  MR_Word Stream_8,
  MR_Word VarSet_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word RttiVarMaps_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(
  MR_Word Info_14,
  MR_Word Stream_15,
  MR_Word Lang_16,
  MR_Word ModuleInfo_17,
  MR_Word PredId_18,
  MR_Word PredOrFunc_19,
  MR_Word VarSet_20,
  MR_Word TypeQual_21,
  MR_Word VarNamePrint_22,
  MR_Word HeadVarsVector_23,
  MR_Word Clauses_24);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(
  MR_Word Info_15,
  MR_Word Stream_16,
  MR_Word Lang_17,
  MR_Word ModuleInfo_18,
  MR_Word PredId_19,
  MR_Word PredOrFunc_20,
  MR_Word VarSet_21,
  MR_Word TypeQual_22,
  MR_Word VarNamePrint_23,
  MR_Word HeadTerms_24,
  MR_Word Clauses_25,
  MR_Integer ClauseNum_26);

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
hlds__hlds_out__hlds_out_pred__write_origin_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word Origin_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_origin_constraints_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_origin_constraints_7_p_0(
  MR_Word Stream_8,
  MR_String Msg_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word Constraints_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_types_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_types_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_types_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_types_11_p_0(
  MR_Word Stream_12,
  MR_Word VarSet_13,
  MR_Word TVarSet_14,
  MR_Word VarNamePrint_15,
  MR_Word RttiVarMaps_16,
  MR_Word ProofMap_17,
  MR_Word ConstraintMap_18,
  MR_Word ExternalTypeParams_19,
  MR_Word VarTypes_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(
  MR_Word Stream_8,
  MR_Word VarSet_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word VarTypes_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(
  MR_Word Stream_1,
  MR_Word VarSet_2,
  MR_Word TypeVarSet_3,
  MR_Word VarNamePrint_4,
  MR_Word VarTypes_5,
  MR_Word HeadVar__6_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(
  MR_Word Stream_7,
  MR_Word VarNamePrint_8,
  MR_Word VarSet_9,
  MR_Word ConstraintMap_10);

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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_5[2][10];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_6[3][11];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_7[4][9];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_9[2][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_10[2][8];


/* sealed */ struct hlds__hlds_out__hlds_out_pred__vector_common_type_8_0_s {
  const MR_String hlds__hlds_out__hlds_out_pred__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_pred__vector_common_type_8_0_s hlds__hlds_out__hlds_out_pred_vector_common_8[16];



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
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
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
    ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0_1)),
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_5[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_6[3][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_pred__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_9[2][7] = {
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_pred_scalar_common_10[2][8] = {
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
};


static /* final */ const struct hlds__hlds_out__hlds_out_pred__vector_common_type_8_0_s hlds__hlds_out__hlds_out_pred_vector_common_8[16] = {
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
hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc_arg_info__1365__1_6_p_0(
  MR_Word VarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word HeadVar__3_38,
  MR_Word HeadVar__4_39)
{
  parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_12, VarNamePrint_13, HeadVar__3_38, HeadVar__4_39);
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
hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(
  MR_Word Stream_8,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word OldVar_11,
  MR_Word NewVars_12)
{
  {
    MR_String Var_20;
    MR_String Var_23;

    Var_20 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_9, VarNamePrint_10, OldVar_11);
    Var_23 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_9, VarNamePrint_10, NewVars_12);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%\t");
    mercury__io__write_string_4_p_0(Stream_8, Var_20);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) " -> ");
    mercury__io__write_string_4_p_0(Stream_8, Var_23);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
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
hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(
  MR_Word Stream_9,
  MR_Word VarSet_10,
  MR_Word TVarSet_11,
  MR_Word VarNamePrint_12,
  MR_Word RttiVarMaps_13,
  MR_Word Var_14)
{
  {
    MR_Integer VarNum_16;
    MR_String VarStr_17;
    MR_Word VarInfo_18;
    MR_String Var_46;

    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_14, &VarNum_16);
    VarStr_17 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, VarNamePrint_12, Var_14);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% ");
    mercury__io__write_string_4_p_0(Stream_9, VarStr_17);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (number ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), VarNum_16, &Var_46);
    mercury__io__write_string_4_p_0(Stream_9, Var_46);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") -> ");
    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(RttiVarMaps_13, Var_14, &VarInfo_18);
    switch (MR_tag((MR_Word) VarInfo_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_out.hlds_out_pred.write_rtti_var_info\'/8", (MR_String) "non rtti var");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarInfo_18, (MR_Integer) 0))));

          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "type_info for ");
          parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TVarSet_11, VarNamePrint_12, Type_19, Stream_9);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Constraint_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), VarInfo_18, (MR_Integer) 0))));

          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "typeclass_info for ");
          parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(TVarSet_11, VarNamePrint_12, Constraint_20, Stream_9);
        }
        break;
    }
    mercury__io__nl_3_p_0(Stream_9);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(
  MR_Word Stream_9,
  MR_Word VarSet_10,
  MR_Word TVarSet_11,
  MR_Word VarNamePrint_12,
  MR_Word RttiVarMaps_13,
  MR_Word Constraint_14)
{
  {
    MR_Word Var_16;

    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% ");
    parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(TVarSet_11, VarNamePrint_12, Constraint_14, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " -> ");
    hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(RttiVarMaps_13, Constraint_14, &Var_16);
    parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, VarNamePrint_12, Var_16, Stream_9);
    mercury__io__nl_3_p_0(Stream_9);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(
  MR_Word Stream_9,
  MR_Word VarSet_10,
  MR_Word TVarSet_11,
  MR_Word VarNamePrint_12,
  MR_Word RttiVarMaps_13,
  MR_Word TVar_14)
{
  {
    MR_String TVarStr_16;
    MR_Integer TVarNum_17;
    MR_Word Locn_18;
    MR_Word Var_19;
    MR_Integer VarNum_22;
    MR_String Var_60;
    MR_String Var_89;

    TVarStr_16 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_11, VarNamePrint_12, TVar_14);
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVar_14, &TVarNum_17);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% ");
    mercury__io__write_string_4_p_0(Stream_9, TVarStr_16);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(number ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), TVarNum_17, &Var_60);
    mercury__io__write_string_4_p_0(Stream_9, Var_60);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") -> ");
    hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_13, TVar_14, &Locn_18);
    if (((MR_tag((MR_Word) Locn_18)) == (MR_Integer) 0))
    {
      MR_String VarStr_20;

      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Locn_18, (MR_Integer) 0))));
      VarStr_20 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, VarNamePrint_12, Var_19);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "type_info(");
      mercury__io__write_string_4_p_0(Stream_9, VarStr_20);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
    }
    else
    {
      MR_Integer Index_21;
      MR_String VarStr_49;
      MR_String Var_74;

      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Locn_18, (MR_Integer) 0))));
      Index_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Locn_18, (MR_Integer) 1))));
      VarStr_49 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, VarNamePrint_12, Var_19);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "typeclass_info(");
      mercury__io__write_string_4_p_0(Stream_9, VarStr_49);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), Index_21, &Var_74);
      mercury__io__write_string_4_p_0(Stream_9, Var_74);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
    }
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_19, &VarNum_22);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (number ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), VarNum_22, &Var_89);
    mercury__io__write_string_4_p_0(Stream_9, Var_89);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")\n");
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
hlds__hlds_out__hlds_out_pred__write_origin_constraint_6_p_0(
  MR_Word Stream_7,
  MR_Word TVarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word Constraint_10)
{
  {
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "%       ");
    parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(TVarSet_8, VarNamePrint_9, Constraint_10, Stream_7);
    mercury__io__nl_3_p_0(Stream_7);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(
  MR_Word Stream_8,
  MR_Word VarNamePrint_9,
  MR_Word VarSet_10,
  MR_Word ConstraintId_11,
  MR_Word ProgConstraint_12)
{
  {
    MR_Word ConstraintType_28;
    MR_Word GoalId_29;
    MR_Integer N_30;
    MR_Char ConstraintTypeChar_31;
    MR_Integer GoalIdNum_32;
    MR_String Var_45;
    MR_String Var_55;
    MR_String Var_65;

    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
    ConstraintType_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ConstraintId_11, (MR_Integer) 0))) & (MR_Integer) 1);
    GoalId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintId_11, (MR_Integer) 1))));
    N_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConstraintId_11, (MR_Integer) 2))));
    switch (ConstraintType_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ConstraintTypeChar_31 = (MR_Char) 69;
        break;
      case (MR_Integer) 0:
        ConstraintTypeChar_31 = (MR_Char) 65;
        break;
    }
    GoalIdNum_32 = (MR_Integer) (GoalId_29);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
    mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), ConstraintTypeChar_31, &Var_45);
    mercury__io__write_string_4_p_0(Stream_8, Var_45);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), GoalIdNum_32, &Var_55);
    mercury__io__write_string_4_p_0(Stream_8, Var_55);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), N_30, &Var_65);
    mercury__io__write_string_4_p_0(Stream_8, Var_65);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ": ");
    parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(VarSet_10, VarNamePrint_9, ProgConstraint_12, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_obsolete_in_favour_of_4_p_0(
  MR_Word Stream_5,
  MR_Word ObsoleteInFavourOf_6)
{
  {
    MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ObsoleteInFavourOf_6, (MR_Integer) 0))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ObsoleteInFavourOf_6, (MR_Integer) 1))));
    MR_String Var_16;
    MR_String Var_26;

    Var_16 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_8);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "%    ");
    mercury__io__write_string_4_p_0(Stream_5, Var_16);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "/");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), Arity_9, &Var_26);
    mercury__io__write_string_4_p_0(Stream_5, Var_26);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
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

    hlds__hlds_out__hlds_out_pred__write_obsolete_in_favour_of_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
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
    MR_Word ProcTable_33;
    MR_Word ProcIdsInfos_34;
    MR_Word FilledInProcIdsInfos_35;
    MR_Word PrintedPred_59;
    MR_Word PrintedProc_62;
    MR_Word Var_60;
    MR_Word Var_61;

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
    DumpOptions_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0))));
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_31, (MR_Char) 118);
    if (succeeded)
      VarNamePrint_32 = (MR_Integer) 1;
    else
      VarNamePrint_32 = (MR_Integer) 0;
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_14, &ProcTable_33);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_33, &ProcIdsInfos_34);
    hlds__hlds_out__hlds_out_pred__find_filled_in_procs_2_p_0(ProcIdsInfos_34, &FilledInProcIdsInfos_35);
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_31, (MR_Char) 67);
    if (succeeded)
    {
      MR_Word VarSet_38;
      MR_Word VarTypes_41;
      MR_Word HeadVars_42;
      MR_Word ClausesRep_43;
      MR_Word RttiVarMaps_45;
      MR_Integer PredIdInt_48;
      MR_String PredOrFuncStr_49;
      MR_String PredStatusStr_50;
      MR_Word GoalType_51;
      MR_Word MaybeObsoleteInFavourOf_52;
      MR_Word Clauses_54;
      MR_Word Origin_58;
      MR_String Var_116;

      switch (PredOrFunc_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word FuncArgTypes_36;
            MR_Word FuncRetType_37;
            MR_Word Var_67;
            MR_Box conv0_FuncRetType_37;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_19, &FuncArgTypes_36, &conv0_FuncRetType_37);
            FuncRetType_37 = ((MR_Word) (conv0_FuncRetType_37));
            {
              Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Module_16));
              MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (PredName_17));
            }
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_type_12_p_0(Stream_10, TVarSet_21, VarNamePrint_32, ExistQVars_20, Var_67, FuncArgTypes_36, FuncRetType_37, (MR_Word) ((MR_Unsigned) 0U), Purity_28, ClassContext_25);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_70;

            {
              Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Module_16));
              MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (PredName_17));
            }
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_type_11_p_0(Stream_10, TVarSet_21, VarNamePrint_32, ExistQVars_20, Var_70, ArgTypes_19, (MR_Word) ((MR_Unsigned) 0U), Purity_28, ClassContext_25);
          }
          break;
      }
      VarSet_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo_22, (MR_Integer) 0))));
      VarTypes_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo_22, (MR_Integer) 3))));
      HeadVars_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo_22, (MR_Integer) 4))));
      ClausesRep_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo_22, (MR_Integer) 5))));
      RttiVarMaps_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo_22, (MR_Integer) 7))));
      hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_13, &PredIdInt_48);
      PredOrFuncStr_49 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_18);
      PredStatusStr_50 = hlds__hlds_out__hlds_out_util__pred_import_status_to_string_1_f_0(PredStatus_23);
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_14, &GoalType_51);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% pred id: ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), PredIdInt_48, &Var_116);
      mercury__io__write_string_4_p_0(Stream_10, Var_116);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", category: ");
      mercury__io__write_string_4_p_0(Stream_10, PredOrFuncStr_49);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", status ");
      mercury__io__write_string_4_p_0(Stream_10, PredStatusStr_50);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% goal_type: ");
      mercury__io__write_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_goal_type_0), Stream_10, ((MR_Box) (GoalType_51)));
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
      hlds__hlds_out__hlds_out_pred__write_pred_markers_4_p_0(Stream_10, Markers_24);
      hlds__hlds_pred__pred_info_get_obsolete_in_favour_of_2_p_0(PredInfo_14, &MaybeObsoleteInFavourOf_52);
      if (!((MaybeObsoleteInFavourOf_52 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word ObsoleteInFavourOf_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeObsoleteInFavourOf_52, (MR_Integer) 0))));
        MR_Word Var_90;
        MR_Box conv1_STATE_VARIABLE_IO_91_91;

        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% obsolete in favour of one of\n");
        {
          Var_90 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_9[1]));
          MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_pred_8_p_0_1));
          MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (Stream_10));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_90, ObsoleteInFavourOf_53, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_91_91);
      }
      hlds__hlds_out__hlds_out_pred__write_pred_types_11_p_0(Stream_10, VarSet_38, TVarSet_21, VarNamePrint_32, RttiVarMaps_45, ProofMap_26, ConstraintMap_27, ExternalTypeParams_29, VarTypes_41);
      hlds__hlds_out__hlds_out_pred__write_pred_proc_var_name_remap_5_p_0(Stream_10, VarSet_38, VarNameRemap_30);
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_43, &Clauses_54);
      succeeded = (Clauses_54 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (FilledInProcIdsInfos_35 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word InfoForClauses_57;

        hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_p_0(Info_9, &InfoForClauses_57);
        hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(InfoForClauses_57, Stream_10, Lang_11, ModuleInfo_12, PredId_13, PredOrFunc_18, VarSet_38, (MR_Word) ((MR_Unsigned) 0U), VarNamePrint_32, HeadVars_42, Clauses_54);
      }
      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_14, &Origin_58);
      hlds__hlds_out__hlds_out_pred__write_origin_7_p_0(Stream_10, ModuleInfo_12, TVarSet_21, VarNamePrint_32, Origin_58);
      PrintedPred_59 = (MR_Integer) 1;
    }
    else
      PrintedPred_59 = (MR_Integer) 0;
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_31, (MR_Char) 120);
    if (succeeded)
    {
      succeeded = (FilledInProcIdsInfos_35 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FilledInProcIdsInfos_35, (MR_Integer) 0))));
        Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FilledInProcIdsInfos_35, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Integer ProcId_145 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 0))));
      MR_Word ProcInfo_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 1))));

      hlds__hlds_out__hlds_out_pred__write_proc_10_p_0(Info_9, Stream_10, VarNamePrint_32, ModuleInfo_12, PredId_13, PredInfo_14, ProcId_145, ProcInfo_146);
      hlds__hlds_out__hlds_out_pred__write_procs_loop_9_p_0(Info_9, Stream_10, VarNamePrint_32, ModuleInfo_12, PredId_13, PredInfo_14, Var_61);
      PrintedProc_62 = (MR_Integer) 1;
    }
    else
      PrintedProc_62 = (MR_Integer) 0;
    succeeded = (PrintedPred_59 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (PrintedProc_62 == (MR_Integer) 1);
    if (succeeded)
      mercury__io__nl_3_p_0(Stream_10);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_procs_loop_9_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word VarNamePrint_3,
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_Word PredInfo_6,
  MR_Word HeadVar__7_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer ProcId_25;
      MR_Word ProcInfo_26;
      MR_Word ProcIdsInfos_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__7_7;

      ProcId_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0))));
      ProcInfo_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 1))));
      hlds__hlds_out__hlds_out_pred__write_proc_10_p_0(Info_1, Stream_2, VarNamePrint_3, ModuleInfo_4, PredId_5, PredInfo_6, ProcId_25, ProcInfo_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = ProcIdsInfos_27;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word VarNamePrint_13,
  MR_Word ModuleInfo_14,
  MR_Word PredId_15,
  MR_Word PredInfo_16,
  MR_Integer ProcId_17,
  MR_Word ProcInfo_18)
{
  {
    MR_bool succeeded;
    MR_Word TVarSet_20;
    MR_Word CanProcess_21;
    MR_Word VarSet_22;
    MR_Word VarTypes_23;
    MR_Word DeclaredDeterminism_24;
    MR_Word InferredDeterminism_25;
    MR_Word HeadVars_26;
    MR_Word HeadModes_27;
    MR_Word MaybeArgLives_28;
    MR_Word RegR_HeadVars_29;
    MR_Word MaybeArgInfos_30;
    MR_Word Goal_31;
    MR_Word MaybeArgSize_32;
    MR_Word MaybeTermination_33;
    MR_Word MaybeStructureSharing_34;
    MR_Word MaybeStructureReuse_35;
    MR_Word RttiVarMaps_36;
    MR_Word CseNoPullContexts_37;
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
    MR_String DumpOptions_49;
    MR_Integer PredIdInt_50;
    MR_Integer ProcIdInt_51;
    MR_String PredIdStr_52;
    MR_String DetismStr_53;
    MR_Word PredSymName_54;
    MR_Word PredOrFunc_55;
    MR_Word ModeVarSet_56;
    MR_Word PredStatus_60;
    MR_String Var_100;
    MR_String Var_125;
    MR_Word Var_106;
    MR_Integer Var_121;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_16, &TVarSet_20);
    hlds__hlds_pred__proc_info_get_can_process_2_p_0(ProcInfo_18, &CanProcess_21);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_18, &VarSet_22);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_18, &VarTypes_23);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_18, &DeclaredDeterminism_24);
    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_18, &InferredDeterminism_25);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_18, &HeadVars_26);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_18, &HeadModes_27);
    hlds__hlds_pred__proc_info_get_maybe_arglives_2_p_0(ProcInfo_18, &MaybeArgLives_28);
    hlds__hlds_pred__proc_info_get_reg_r_headvars_2_p_0(ProcInfo_18, &RegR_HeadVars_29);
    hlds__hlds_pred__proc_info_get_maybe_arg_info_2_p_0(ProcInfo_18, &MaybeArgInfos_30);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_18, &Goal_31);
    hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(ProcInfo_18, &MaybeArgSize_32);
    hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(ProcInfo_18, &MaybeTermination_33);
    hlds__hlds_pred__proc_info_get_structure_sharing_2_p_0(ProcInfo_18, &MaybeStructureSharing_34);
    hlds__hlds_pred__proc_info_get_structure_reuse_2_p_0(ProcInfo_18, &MaybeStructureReuse_35);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_18, &RttiVarMaps_36);
    hlds__hlds_pred__proc_info_get_cse_nopull_contexts_2_p_0(ProcInfo_18, &CseNoPullContexts_37);
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
    DumpOptions_49 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0))));
    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_15, &PredIdInt_50);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_17, &ProcIdInt_51);
    PredIdStr_52 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(ModuleInfo_14, PredId_15);
    DetismStr_53 = parse_tree__prog_out__determinism_to_string_1_f_0(InferredDeterminism_25);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_12, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% pred id ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), PredIdInt_50, &Var_125);
    mercury__io__write_string_4_p_0(Stream_12, Var_125);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) ": ");
    mercury__io__write_string_4_p_0(Stream_12, PredIdStr_52);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_12, (MR_Integer) 1);
    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_18);
    if (succeeded)
    {
      MR_String Var_139;

      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% mode number ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), ProcIdInt_51, &Var_139);
      mercury__io__write_string_4_p_0(Stream_12, Var_139);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) " (");
      mercury__io__write_string_4_p_0(Stream_12, DetismStr_53);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) ")\n");
    }
    else
    {
      MR_String Var_153;

      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% mode number ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), ProcIdInt_51, &Var_153);
      mercury__io__write_string_4_p_0(Stream_12, Var_153);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) " (");
      mercury__io__write_string_4_p_0(Stream_12, DetismStr_53);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) ") INVALID MODE\n");
    }
    hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(Stream_12, VarSet_22, TVarSet_20, VarNamePrint_13, VarTypes_23);
    hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(Stream_12, VarSet_22, TVarSet_20, VarNamePrint_13, RttiVarMaps_36);
    hlds__hlds_out__hlds_out_pred__write_proc_flags_7_p_0(Stream_12, CanProcess_21, IsAddressTaken_40, HasParallelConj_41, HasUserEvent_42);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% cse_nopull_contexts: ");
    mercury__io__write_line_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[3]), Stream_12, ((MR_Box) (CseNoPullContexts_37)));
    hlds__hlds_out__hlds_out_pred__write_proc_tabling_info_9_p_0(Stream_12, VarSet_22, TVarSet_20, VarNamePrint_13, EvalMethod_38, MaybeProcTableIOInfo_43, MaybeCallTableTip_44);
    hlds__hlds_out__hlds_out_pred__write_proc_deep_profiling_info_6_p_0(Stream_12, VarSet_22, VarNamePrint_13, MaybeDeepProfileInfo_45);
    hlds__hlds_out__hlds_out_pred__write_proc_termination_info_6_p_0(Stream_12, DumpOptions_49, MaybeArgSize_32, MaybeTermination_33);
    hlds__hlds_out__hlds_out_pred__write_proc_opt_info_10_p_0(Stream_12, DumpOptions_49, VarSet_22, TVarSet_20, VarNamePrint_13, MaybeStructureSharing_34, MaybeStructureReuse_35, MaybeUntupleInfo_46);
    hlds__hlds_out__hlds_out_pred__write_proc_deleted_callee_set_4_p_0(Stream_12, DeletedCallCalleeSet_39);
    hlds__hlds_out__hlds_out_pred__write_pred_proc_var_name_remap_5_p_0(Stream_12, VarSet_22, VarNameRemap_47);
    Var_100 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_14, PredId_15);
    {
      PredSymName_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredSymName_54, 0) = ((MR_Box) (Var_100));
    }
    PredOrFunc_55 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_16);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &ModeVarSet_56);
    switch (PredOrFunc_55) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncHeadModes_58;
          MR_Word RetHeadMode_59;
          MR_Box conv0_RetHeadMode_59;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), HeadModes_27, &FuncHeadModes_58, &conv0_RetHeadMode_59);
          RetHeadMode_59 = ((MR_Word) (conv0_RetHeadMode_59));
          parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_9_p_0(Stream_12, (MR_Integer) 1, ModeVarSet_56, PredSymName_54, FuncHeadModes_58, RetHeadMode_59, DeclaredDeterminism_24);
        }
        break;
      case (MR_Integer) 0:
        parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_9_p_0(Stream_12, (MR_Integer) 1, ModeVarSet_56, PredSymName_54, HeadModes_27, (MR_Word) ((MR_Unsigned) 0U), DeclaredDeterminism_24);
        break;
    }
    hlds__hlds_out__hlds_out_pred__write_proc_arg_info_9_p_0(Stream_12, DumpOptions_49, VarSet_22, VarNamePrint_13, MaybeArgLives_28, RegR_HeadVars_29, MaybeArgInfos_30);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_16, &PredStatus_60);
    Var_106 = (MR_Word) (PredStatus_60);
    succeeded = (Var_106 == (MR_Word) ((MR_Unsigned) 8U));
    if (succeeded)
    {
      hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_121);
      succeeded = (ProcId_17 == Var_121);
    }
    if (!(succeeded))
    {
      MR_Word StackSlots_61;
      MR_Word HeadTerms_62;

      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ProcInfo_18, &StackSlots_61);
      hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(Stream_12, VarSet_22, VarNamePrint_13, StackSlots_61);
      mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_26, &HeadTerms_62);
      hlds__hlds_out__hlds_out_pred__write_clause_head_9_p_0(Stream_12, ModuleInfo_14, VarSet_22, VarNamePrint_13, PredId_15, PredOrFunc_55, HeadTerms_62);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) " :-\n");
      hlds__hlds_out__hlds_out_goal__write_goal_10_p_0(Info_11, Stream_12, ModuleInfo_14, VarSet_22, VarNamePrint_13, (MR_Integer) 1, (MR_String) ".\n", Goal_31);
    }
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

    conv0_HeadVar__2_2 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_stack_slots_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word StackSlots_10)
{
  {
    MR_Word VarSlotList0_12;
    MR_Word VarSlotList_13;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackSlots_10, &VarSlotList0_12);
    VarSlotList_13 = mercury__assoc_list__map_values_only_2_f_0((MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_2[4]), VarSlotList0_12);
    hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_7_p_0(Stream_7, VarSet_8, VarNamePrint_9, (MR_Integer) 0, VarSlotList_13);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_arg_info_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc_arg_info__1365__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_arg_info_9_p_0(
  MR_Word Stream_10,
  MR_String DumpOptions_11,
  MR_Word VarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word MaybeArgLives_14,
  MR_Word RegR_HeadVars_15,
  MR_Word MaybeArgInfos_16)
{
  {
    MR_bool succeeded;
    MR_Word ArgInfos_19;

    if (!((MaybeArgLives_14 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ArgLives_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgLives_14, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% arg lives: ");
      mercury__io__print_line_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[7]), Stream_10, ((MR_Box) (ArgLives_18)));
    }
    succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegR_HeadVars_15);
    if (succeeded)
    {
      MR_Word Var_27;
      MR_Word Var_29;

      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% reg_r headvars: ");
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[3]));
        MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_proc_arg_info_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (VarSet_12));
        MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (VarNamePrint_13));
      }
      Var_29 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegR_HeadVars_15);
      parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), Var_27, (MR_String) ", ", Var_29, Stream_10);
      mercury__io__nl_3_p_0(Stream_10);
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_11, (MR_Char) 65);
    if (succeeded)
    {
      succeeded = (MaybeArgInfos_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        ArgInfos_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgInfos_16, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% arg_infos: ");
      mercury__io__print_line_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[8]), Stream_10, ((MR_Box) (ArgInfos_19)));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_proc_var_name_remap_5_p_0(
  MR_Word Stream_6,
  MR_Word VarSet_7,
  MR_Word VarNameRemap_8)
{
  {
    MR_Word VarNameRemapList_10;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarNameRemap_8, &VarNameRemapList_10);
    if (!((VarNameRemapList_10 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word VarNameRemapHead_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarNameRemapList_10, (MR_Integer) 0))));
      MR_Word VarNameRemapTail_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarNameRemapList_10, (MR_Integer) 1))));

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% var name remap: ");
      hlds__hlds_out__hlds_out_pred__write_var_name_remap_6_p_0(Stream_6, VarSet_7, VarNameRemapHead_11, VarNameRemapTail_12);
      mercury__io__nl_3_p_0(Stream_6);
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
      mercury__io__write_line_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[6]), Stream_5, ((MR_Box) (DeletedCallCallees_8)));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_opt_info_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_proc_opt_info_10_p_0(
  MR_Word Stream_11,
  MR_String DumpOptions_12,
  MR_Word VarSet_13,
  MR_Word TVarSet_14,
  MR_Word VarNamePrint_15,
  MR_Word MaybeStructureSharing_16,
  MR_Word MaybeStructureReuse_17,
  MR_Word MaybeUntupleInfo_18)
{
  {
    MR_bool succeeded;
    MR_Word StructureSharing_20;
    MR_Word StructureReuse_23;

    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_12, (MR_Char) 83);
    if (succeeded)
    {
      succeeded = (MaybeStructureSharing_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        StructureSharing_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeStructureSharing_16, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word SharingAs_21;

      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "% Structure sharing: \n");
      SharingAs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StructureSharing_20, (MR_Integer) 0))));
      parse_tree__prog_ctgc__dump_structure_sharing_domain_6_p_0(Stream_11, VarSet_13, TVarSet_14, SharingAs_21);
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_12, (MR_Char) 82);
    if (succeeded)
    {
      succeeded = (MaybeStructureReuse_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        StructureReuse_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeStructureReuse_17, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word ReuseAs_24;

      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "% Structure reuse: \n");
      ReuseAs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StructureReuse_23, (MR_Integer) 0))));
      parse_tree__prog_ctgc__dump_structure_reuse_domain_6_p_0(Stream_11, VarSet_13, TVarSet_14, ReuseAs_24);
    }
    if (!((MaybeUntupleInfo_18 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word UntupleInfo_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUntupleInfo_18, (MR_Integer) 0))));
      MR_Word UntupleMap_45 = (MR_Word) (UntupleInfo_26);
      MR_Word Var_48;
      MR_Box conv0_STATE_VARIABLE_IO_28;

      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "% untuple:\n");
      {
        Var_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_proc_opt_info_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Stream_11));
        MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (VarSet_13));
        MR_hl_field(MR_mktag(0), Var_48, 5) = ((MR_Box) (VarNamePrint_15));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[5]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, UntupleMap_45, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_28);
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
      MR_String SizeStr_12;
      MR_String TermStr_13;

      SizeStr_12 = parse_tree__parse_tree_out_pragma__maybe_arg_size_info_to_string_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[4]), (MR_Integer) 1, MaybeArgSize_9);
      TermStr_13 = parse_tree__parse_tree_out_pragma__maybe_termination_info_to_string_2_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[4]), (MR_Integer) 1, MaybeTermination_10);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Arg size properties: ");
      mercury__io__write_string_4_p_0(Stream_7, SizeStr_12);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Termination properties: ");
      mercury__io__write_string_4_p_0(Stream_7, TermStr_13);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
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

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
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

    hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
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

    hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0(
  MR_Word Stream_8,
  MR_Word VarSet_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word RttiVarMaps_12)
{
  {
    MR_Word TypeVars_14;
    MR_Word Constraints_15;
    MR_Word ProgVars_16;
    MR_Word Var_21;
    MR_Word Var_25;
    MR_Word Var_29;
    MR_Box conv0_STATE_VARIABLE_IO_22_22;
    MR_Box conv1_STATE_VARIABLE_IO_26_26;
    MR_Box conv2_STATE_VARIABLE_IO_18;

    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% type_info varmap:\n");
    hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(RttiVarMaps_12, &TypeVars_14);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (VarSet_9));
      MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (TVarSet_10));
      MR_hl_field(MR_mktag(0), Var_21, 6) = ((MR_Box) (VarNamePrint_11));
      MR_hl_field(MR_mktag(0), Var_21, 7) = ((MR_Box) (RttiVarMaps_12));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, TypeVars_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_22_22);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% typeclass_info varmap:\n");
    hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(RttiVarMaps_12, &Constraints_15);
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (VarSet_9));
      MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (TVarSet_10));
      MR_hl_field(MR_mktag(0), Var_25, 6) = ((MR_Box) (VarNamePrint_11));
      MR_hl_field(MR_mktag(0), Var_25, 7) = ((MR_Box) (RttiVarMaps_12));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_25, Constraints_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_26_26);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% rtti_var_info:\n");
    hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(RttiVarMaps_12, &ProgVars_16);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_p_0_3));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (VarSet_9));
      MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (TVarSet_10));
      MR_hl_field(MR_mktag(0), Var_29, 6) = ((MR_Box) (VarNamePrint_11));
      MR_hl_field(MR_mktag(0), Var_29, 7) = ((MR_Box) (RttiVarMaps_12));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, ProgVars_16, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_18);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_13_p_0(
  MR_Word Info_14,
  MR_Word Stream_15,
  MR_Word Lang_16,
  MR_Word ModuleInfo_17,
  MR_Word PredId_18,
  MR_Word PredOrFunc_19,
  MR_Word VarSet_20,
  MR_Word TypeQual_21,
  MR_Word VarNamePrint_22,
  MR_Word HeadVarsVector_23,
  MR_Word Clauses_24)
{
  {
    MR_Word HeadVars_26;
    MR_Word HeadTerms_27;

    HeadVars_26 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), HeadVarsVector_23);
    mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_26, &HeadTerms_27);
    hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(Info_14, Stream_15, Lang_16, ModuleInfo_17, PredId_18, PredOrFunc_19, VarSet_20, TypeQual_21, VarNamePrint_22, HeadTerms_27, Clauses_24, (MR_Integer) 1);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_p_0(
  MR_Word Info_15,
  MR_Word Stream_16,
  MR_Word Lang_17,
  MR_Word ModuleInfo_18,
  MR_Word PredId_19,
  MR_Word PredOrFunc_20,
  MR_Word VarSet_21,
  MR_Word TypeQual_22,
  MR_Word VarNamePrint_23,
  MR_Word HeadTerms_24,
  MR_Word Clauses_25,
  MR_Integer ClauseNum_26)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((Clauses_25 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word FirstClause_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_25, (MR_Integer) 0))));
      MR_Word LaterClauses_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_25, (MR_Integer) 1))));
      MR_Integer Var_40;
      MR_String Var_46;
      MR_Word next_value_of_Clauses_25;
      MR_Integer next_value_of_ClauseNum_26;

      mercury__io__write_string_4_p_0(Stream_16, (MR_String) "% clause ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), ClauseNum_26, &Var_46);
      mercury__io__write_string_4_p_0(Stream_16, Var_46);
      mercury__io__write_string_4_p_0(Stream_16, (MR_String) "\n");
      hlds__hlds_out__hlds_out_pred__write_clause_15_p_0(Info_15, Stream_16, Lang_17, ModuleInfo_18, PredId_19, PredOrFunc_20, VarSet_21, TypeQual_22, VarNamePrint_23, (MR_Integer) 0, (MR_Integer) 0, HeadTerms_24, FirstClause_28);
      Var_40 = (MR_Integer) ((MR_Unsigned) ClauseNum_26 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
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
        MR_Word Var_127;

        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% instance method\n");
        ClassName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_18, (MR_Integer) 0))));
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% class name and instance type vector:\n");
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%   ");
        {
          Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (ClassName_22));
          MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (InstanceTypes_19));
        }
        parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(TVarSet_10, VarNamePrint_11, Var_127, Stream_8);
        mercury__io__nl_3_p_0(Stream_8);
        hlds__hlds_out__hlds_out_pred__write_origin_constraints_7_p_0(Stream_8, (MR_String) "instance constraints", TVarSet_10, VarNamePrint_11, InstanceConstraints_20);
        MethodUnivConstraints_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassMethodConstraints_21, (MR_Integer) 0))));
        MethodExistConstraints_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassMethodConstraints_21, (MR_Integer) 1))));
        hlds__hlds_out__hlds_out_pred__write_origin_constraints_7_p_0(Stream_8, (MR_String) "method universal constraints", TVarSet_10, VarNamePrint_11, MethodUnivConstraints_24);
        hlds__hlds_out__hlds_out_pred__write_origin_constraints_7_p_0(Stream_8, (MR_String) "method existential constraints", TVarSet_10, VarNamePrint_11, MethodExistConstraints_25);
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
            MR_Word ClassId_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 1))));
            MR_String Var_185;
            MR_String Var_198;

            ClassSymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_138, (MR_Integer) 0))));
            ClassArity_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_138, (MR_Integer) 1))));
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
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), MethodArity_31, &Var_185);
            mercury__io__write_string_4_p_0(Stream_8, Var_185);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " for ");
            mercury__io__write_string_4_p_0(Stream_8, Var_117);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), ClassArity_28, &Var_198);
            mercury__io__write_string_4_p_0(Stream_8, Var_198);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Transformation_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 1))));
            MR_Word OrigPredId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 3))));
            MR_Integer OrigPredIdNum_35;
            MR_String Var_99;
            MR_String Var_144;

            OrigPredIdNum_35 = hlds__hlds_pred__pred_id_to_int_1_f_0(OrigPredId_34);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% transformed from pred id ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), OrigPredIdNum_35, &Var_144);
            mercury__io__write_string_4_p_0(Stream_8, Var_144);
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
hlds__hlds_out__hlds_out_pred__write_origin_constraints_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_origin_constraint_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_origin_constraints_7_p_0(
  MR_Word Stream_8,
  MR_String Msg_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word Constraints_12)
{
  if ((Constraints_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
    mercury__io__write_string_4_p_0(Stream_8, Msg_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ": none\n");
  }
  else
  {
    MR_Word Var_23;
    MR_Box conv0_STATE_VARIABLE_IO_17;

    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
    mercury__io__write_string_4_p_0(Stream_8, Msg_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ":\n");
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_origin_constraints_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (TVarSet_10));
      MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (VarNamePrint_11));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, Constraints_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_types_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_types_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_types_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_pred_types_11_p_0(
  MR_Word Stream_12,
  MR_Word VarSet_13,
  MR_Word TVarSet_14,
  MR_Word VarNamePrint_15,
  MR_Word RttiVarMaps_16,
  MR_Word ProofMap_17,
  MR_Word ConstraintMap_18,
  MR_Word ExternalTypeParams_19,
  MR_Word VarTypes_20)
{
  {
    MR_bool succeeded;
    MR_Word TypeVars_53;
    MR_Word Constraints_54;
    MR_Word ProgVars_55;
    MR_Word Var_58;
    MR_Word Var_62;
    MR_Word Var_66;
    MR_Box conv0_STATE_VARIABLE_IO_22_59;
    MR_Box conv1_STATE_VARIABLE_IO_26_63;
    MR_Box conv2_STATE_VARIABLE_IO_26_26;

    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% type_info varmap:\n");
    hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(RttiVarMaps_16, &TypeVars_53);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_pred_types_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (Stream_12));
      MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) (VarSet_13));
      MR_hl_field(MR_mktag(0), Var_58, 5) = ((MR_Box) (TVarSet_14));
      MR_hl_field(MR_mktag(0), Var_58, 6) = ((MR_Box) (VarNamePrint_15));
      MR_hl_field(MR_mktag(0), Var_58, 7) = ((MR_Box) (RttiVarMaps_16));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, TypeVars_53, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_22_59);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% typeclass_info varmap:\n");
    hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(RttiVarMaps_16, &Constraints_54);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_pred_types_11_p_0_2));
      MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (Stream_12));
      MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (VarSet_13));
      MR_hl_field(MR_mktag(0), Var_62, 5) = ((MR_Box) (TVarSet_14));
      MR_hl_field(MR_mktag(0), Var_62, 6) = ((MR_Box) (VarNamePrint_15));
      MR_hl_field(MR_mktag(0), Var_62, 7) = ((MR_Box) (RttiVarMaps_16));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, Constraints_54, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_26_63);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% rtti_var_info:\n");
    hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(RttiVarMaps_16, &ProgVars_55);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_pred_types_11_p_0_3));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Stream_12));
      MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (VarSet_13));
      MR_hl_field(MR_mktag(0), Var_66, 5) = ((MR_Box) (TVarSet_14));
      MR_hl_field(MR_mktag(0), Var_66, 6) = ((MR_Box) (VarNamePrint_15));
      MR_hl_field(MR_mktag(0), Var_66, 7) = ((MR_Box) (RttiVarMaps_16));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_66, ProgVars_55, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_26_26);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap_17);
    if (!(succeeded))
    {
      hlds__hlds_out__hlds_out_util__write_constraint_proof_map_7_p_0(Stream_12, (MR_Integer) 0, VarNamePrint_15, TVarSet_14, ProofMap_17);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
    }
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ConstraintMap_18);
    if (!(succeeded))
      hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(Stream_12, VarNamePrint_15, TVarSet_14, ConstraintMap_18);
    if (!((ExternalTypeParams_19 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% external_type_params:\n");
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% ");
      parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_14, VarNamePrint_15, ExternalTypeParams_19, Stream_12);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
    }
    hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(Stream_12, VarSet_13, TVarSet_14, VarNamePrint_15, VarTypes_20);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_7_p_0(
  MR_Word Stream_8,
  MR_Word VarSet_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word VarTypes_12)
{
  {
    MR_Integer NumVarTypes_14;
    MR_Word Vars_15;
    MR_String Var_29;

    hlds__vartypes__vartypes_count_2_p_0(VarTypes_12, &NumVarTypes_14);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% variable types map ");
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), NumVarTypes_14, &Var_29);
    mercury__io__write_string_4_p_0(Stream_8, Var_29);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) " entries):\n");
    hlds__vartypes__vartypes_vars_2_p_0(VarTypes_12, &Vars_15);
    hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(Stream_8, VarSet_9, TVarSet_10, VarNamePrint_11, VarTypes_12, Vars_15);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_p_0(
  MR_Word Stream_1,
  MR_Word VarSet_2,
  MR_Word TypeVarSet_3,
  MR_Word VarNamePrint_4,
  MR_Word VarTypes_5,
  MR_Word HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Vars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Type_25;
      MR_String VarStr_26;
      MR_Integer VarNum_27;
      MR_String TypeStr_28;
      MR_String Var_48;
      MR_Word next_value_of_HeadVar__6_6;

      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_5, Var_22, &Type_25);
      VarStr_26 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_2, VarNamePrint_4, Var_22);
      mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_22, &VarNum_27);
      TypeStr_28 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TypeVarSet_3, VarNamePrint_4, Type_25);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "% ");
      mercury__io__write_string_4_p_0(Stream_1, VarStr_26);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) " (number ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_pred_scalar_common_3[0]), VarNum_27, &Var_48);
      mercury__io__write_string_4_p_0(Stream_1, Var_48);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "): ");
      mercury__io__write_string_4_p_0(Stream_1, TypeStr_28);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Vars_23;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      continue;
    }
    break;
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

    hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0(
  MR_Word Stream_7,
  MR_Word VarNamePrint_8,
  MR_Word VarSet_9,
  MR_Word ConstraintMap_10)
{
  {
    MR_Word Var_16;
    MR_Box conv0_STATE_VARIABLE_IO_13;

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Constraint map:\n");
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_pred_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_pred__write_constraint_map_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (VarNamePrint_8));
      MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (VarSet_9));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_16, ConstraintMap_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
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

    hlds__hlds_pred__marker_name_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
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
