/*
** Automatically generated from `unused_args.m'
** by the Mercury compiler,
** version rotd-2026-02-18
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


// :- module transform_hlds.unused_args.
// :- implementation.

/*
INIT mercury__transform_hlds__unused_args__init
ENDINIT
*/

#include "transform_hlds.unused_args.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "edit_seq.mih"
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
#include "term_conversion.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_refs.mih"
#include "hlds.goal_vars.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
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
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s {
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__GlobalVarUsageMap_1;
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5;
  MR_bool transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded;
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__AliasVars0_20;
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__AliasArgs0_21;
  jmp_buf transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_0;
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProcId_23;
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24;
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34;
  MR_Box transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34;
  jmp_buf transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_1;
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35;
  MR_Box transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35;
};


static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__analysis__framework__pti_analysis_result_2__plain_transform_hlds__unused_args__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args__type_ctor_info_unused_args_answer_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_arg_var_in_proc_0_0[2];

static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_arg_var_in_proc_0_0[1];

static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_arg_var_in_proc_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_arg_var_in_proc_0[1];

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_arg_var_in_proc_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_fixup_info_0_0[4];

static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_fixup_info_0_0[4];

static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_fixup_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_fixup_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_fixup_info_0[1];

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_fixup_info_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0;

static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_gather_pragma_unused_args_0_0;

static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_gather_pragma_unused_args_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_ordinal_ordered_maybe_gather_pragma_unused_args_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_maybe_gather_pragma_unused_args_0[2];

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_maybe_gather_pragma_unused_args_0[2];

static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_record_analysis_unused_args_0_0;

static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_record_analysis_unused_args_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_ordinal_ordered_maybe_record_analysis_unused_args_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_maybe_record_analysis_unused_args_0[2];

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_maybe_record_analysis_unused_args_0[2];

static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_warn_unused_args_0_0;

static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_warn_unused_args_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_ordinal_ordered_maybe_warn_unused_args_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_maybe_warn_unused_args_0[2];

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_maybe_warn_unused_args_0[2];

static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_new_proc_info_0_0[4];

static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_new_proc_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_new_proc_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_new_proc_info_0[1];

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_new_proc_info_0[1];

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_answer_0[1];

static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_answer_0;

static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0;

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_ordinal_ordered_unused_args_call_0[1];

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_unused_args_call_0[1];

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_call_0[1];

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_func_info_0[1];

static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_func_info_0;

static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_unused_args_info_0_0[2];

static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_unused_args_info_0_0[2];

static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_unused_args_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_unused_args_info_0[1];

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_info_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0;

static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_usage_info_0_0[2];

static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_usage_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_usage_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_usage_info_0[1];

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_usage_info_0[1];

static MR_Word MR_CALL 
transform_hlds__unused_args__IntroducedFrom__func__report_unused_args__1977__1_1_f_0(
  MR_Integer LambdaHeadVar__1_41);

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__970__1_3_p_0(
  MR_Word FuncInfo_26,
  MR_Word Answer_27,
  MR_Word LambdaHeadVar__1_57);

static MR_Word MR_CALL 
transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__963__1_1_f_0(
  MR_Word LambdaHeadVar__1_55);

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_unify__661__1_2_p_0(
  MR_Word LHSVar_8,
  MR_Word CellVar_66);

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_unify__653__1_2_p_0(
  MR_Word LHSVar_8,
  MR_Word CellVar_16);

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__589__1_2_p_0(
  MR_Word LambdaHeadVar__1_64,
  MR_Word * LambdaHeadVar__2_65);

static void MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__try_to_look_up_global_var_usage_map_entry_for_proc__398__1_3_p_0(
  MR_Word HeadVars_31,
  MR_Integer HeadVar__2_179,
  MR_Word * HeadVar__3_180);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word Term_3);

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__to_term_1_1_f_0(void);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word Term_4,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__to_term_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__equivalent_3_3_p_0(
  MR_Word HeadVar__1_7);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__more_precise_than_3_3_p_0(
  MR_Word HeadVar__1_4);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__equivalent_3_3_p_0(
  MR_Word HeadVar__1_9,
  MR_Word Args_10,
  MR_Word Args_3);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__more_precise_than_3_3_p_0(
  MR_Word HeadVar__1_4,
  MR_Word Answer1_5,
  MR_Word Answer2_6);

static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__get_func_info_6_6_p_0(
  MR_Word ModuleInfo_17,
  MR_Word ModuleName_18,
  MR_Word FuncId_19,
  MR_Word * FuncInfo_22);

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__top_2_2_f_0(
  MR_Word HeadVar__1_12);

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__bottom_2_2_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0(void);

static MR_Integer MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0(void);

static MR_String MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__analysis_name_2_2_f_0(void);

static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____maybe_warn_unused_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____maybe_warn_unused_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____local_var_usage_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____local_var_usage_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____global_var_usage_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____global_var_usage_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__unused_args__get_unused_args_1_f_0(
  MR_Word UnusedArgs_3);

static void MR_CALL 
transform_hlds__unused_args__add_rev_arg_dep_5_p_0(
  MR_Word Var_6,
  MR_Word PredProcId_7,
  MR_Word Arg_8,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_10,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_11);

static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word CalleePredProcId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_17,
  MR_Word * STATE_VARIABLE_AnalysisInfo_18);

static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word CallerPredProcId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_12,
  MR_Word * STATE_VARIABLE_AnalysisInfo_13);

static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_2_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word UnusedArgInfo_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_19,
  MR_Word * STATE_VARIABLE_AnalysisInfo_20);

static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word UnusedArgInfo_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_12,
  MR_Word * STATE_VARIABLE_AnalysisInfo_13);

static void MR_CALL 
transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(
  MR_Word Arg0_9,
  MR_Word * Arg_10,
  MR_Word STATE_VARIABLE_Subst_0_23,
  MR_Word * STATE_VARIABLE_Subst_24,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26,
  MR_Word STATE_VARIABLE_Changed_0_27,
  MR_Word * STATE_VARIABLE_Changed_28);

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_proc_msg_6_p_0(
  MR_Word VeryVerbose_7,
  MR_Word GlobalVarUsageMap_8,
  MR_Word NewProcMap_9,
  MR_Word PredProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23);

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_proc_5_p_0(
  MR_Word GlobalVarUsageMap_6,
  MR_Word OldPredProcId_7,
  MR_Word NewProcMap_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41);

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word STATE_VARIABLE_Changed_0_5,
  MR_Word * STATE_VARIABLE_Changed_6);

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word STATE_VARIABLE_Changed_0_5,
  MR_Word * STATE_VARIABLE_Changed_6);

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word STATE_VARIABLE_Changed_0_5,
  MR_Word * STATE_VARIABLE_Changed_6);

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word STATE_VARIABLE_Info_0_76,
  MR_Word * STATE_VARIABLE_Info_77,
  MR_Word * Changed_9);

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16,
  MR_Word * Changed_9);

static MR_bool MR_CALL 
transform_hlds__unused_args__need_unify_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word UnusedVars_6,
  MR_Word Unify_7,
  MR_Word * Changed_8);

static MR_bool MR_CALL 
transform_hlds__unused_args__check_deconstruct_args_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word UnusedVars_8,
  MR_Word Vars_9,
  MR_Word ArgModes_10,
  MR_Word STATE_VARIABLE_SomeUsed_0_26,
  MR_Word * Changed_12);

static void MR_CALL 
transform_hlds__unused_args__make_intermod_proc_10_p_0(
  MR_Word PredId_11,
  MR_Word NewPredId_12,
  MR_Integer ProcId_13,
  MR_String NewPredName_14,
  MR_Word OrigPredInfo_15,
  MR_Word OrigProcInfo_16,
  MR_Word UnusedArgs_17,
  MR_Word UnusedArgs2_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36);

static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(
  MR_Word UnusedArgInfo_7,
  MR_Word OrigPredProcId_8,
  MR_Word STATE_VARIABLE_NewProcMap_0_48,
  MR_Word * STATE_VARIABLE_NewProcMap_49,
  MR_Word STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * STATE_VARIABLE_ModuleInfo_51);

static void MR_CALL 
transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(
  MR_Word RttiVarMaps_4,
  MR_Word TVar_5,
  MR_Word * TypeInfoVar_6);

static void MR_CALL 
transform_hlds__unused_args__init_global_var_usage_map_entry_for_proc_12_p_0(
  MR_Word PredId_13,
  MR_Word PredInfo_14,
  MR_Integer ProcId_15,
  MR_Word ProcInfo_16,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_31,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_32,
  MR_Word STATE_VARIABLE_FixpointPredProcIds_0_33,
  MR_Word * STATE_VARIABLE_FixpointPredProcIds_34,
  MR_Word STATE_VARIABLE_OptProcs_0_35,
  MR_Word * STATE_VARIABLE_OptProcs_36,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38);

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(
  MR_Word Info_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_57,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_58);

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_cases_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_3,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_4);

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_3,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_4);

static void MR_CALL 
transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(
  MR_Word PredProcId_6,
  MR_Word LocalArguments_7,
  MR_Word HeadVarIds_8,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_18,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_19);

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_unify_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_unify_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_unify_6_p_0(
  MR_Word Info_7,
  MR_Word LHSVar_8,
  MR_Word RHS_9,
  MR_Word Unify_10,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_43,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_44);

static void MR_CALL 
transform_hlds__unused_args__add_construction_aliases_4_p_0(
  MR_Word AliasVar_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_3,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_4);

static void MR_CALL 
transform_hlds__unused_args__partition_deconstruct_args_5_p_0(
  MR_Word Info_6,
  MR_Word Vars_7,
  MR_Word ArgModes_8,
  MR_Word * InputVars_9,
  MR_Word * OutputVars_10);

static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(
  MR_Word PredProcId_1,
  MR_Word VarTable_2,
  MR_Word RttiVarMaps_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_5,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_6);

static void MR_CALL 
transform_hlds__unused_args__try_to_look_up_global_var_usage_map_entry_for_proc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args__try_to_look_up_global_var_usage_map_entry_for_proc_10_p_0(
  MR_Word PredId_11,
  MR_Word PredInfo_12,
  MR_Integer ProcId_13,
  MR_Word ProcInfo_14,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_39,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_40,
  MR_Word STATE_VARIABLE_OptProcs_0_41,
  MR_Word * STATE_VARIABLE_OptProcs_42,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44);

static MR_String MR_CALL 
transform_hlds__unused_args__analysis_name_0_f_0(void);

static void MR_CALL 
transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(
  MR_Word OptProc_7,
  MR_Word UnusedArgs_8,
  MR_Word STATE_VARIABLE_NewProcMap_0_32,
  MR_Word * STATE_VARIABLE_NewProcMap_33,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35);

static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
  MR_Word UnusedArgs_8,
  MR_Word PredStatus_9,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredInfo_0_43,
  MR_Word * STATE_VARIABLE_PredInfo_44);

static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Integer ArgNo_5,
  MR_Word ElemsToRemove_6,
  MR_Word STATE_VARIABLE_List_0_14,
  MR_Word * STATE_VARIABLE_List_15);

static void MR_CALL 
transform_hlds__unused_args__set_vars_to_unaliased_unused_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_2,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_3);

static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_5_p_0(
  MR_Integer PassNum_6,
  MR_Word LocalPredProcIds_8,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_13,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_14);

static void MR_CALL 
transform_hlds__unused_args__unused_args_single_pass_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Changed_0_2,
  MR_Word * STATE_VARIABLE_Changed_3,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_4,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_5);

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(
  MR_Word GlobalVarUsageMap_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Changed_0_3,
  MR_Word * STATE_VARIABLE_Changed_4,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_5,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_6);

static void MR_CALL 
transform_hlds__unused_args__gather_warnings_and_pragmas_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word UnusedArgInfo_2,
  MR_Word DoWarn_3,
  MR_Word DoPragma_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_WarnedPredIds_0_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8,
  MR_Word STATE_VARIABLE_PragmaUnusedArgInfos_0_9,
  MR_Word * STATE_VARIABLE_PragmaUnusedArgInfos_10);

static MR_Box MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0(
  MR_Word PredInfo_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word UnusedArgs0_14,
  MR_Word STATE_VARIABLE_WarnedPredIds_0_26,
  MR_Word * STATE_VARIABLE_WarnedPredIds_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(
  MR_Integer NumInserted_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args__may_gather_warning_pragma_for_pred_new_1_p_0(
  MR_Word PredInfo_2);

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0(
  MR_Word VeryVerbose_7,
  MR_Word GlobalVarUsageMap_8,
  MR_Word PredProcIds_9,
  MR_Word NewProcMap_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13);

static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_info_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word GlobalVarUsageMap_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_UnusedArgInfo_0_4,
  MR_Word * STATE_VARIABLE_UnusedArgInfo_5);

static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_nums_4_p_0(
  MR_Word LocalVarUsageMap_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__unused_args__init_global_var_usage_map_5_p_0(
  MR_Word * GlobalVarUsageMap_6,
  MR_Word * FixpointPredProcIds_7,
  MR_Word * NewProcMap_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static void MR_CALL 
transform_hlds__unused_args__init_global_var_usage_map_for_preds_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
transform_hlds__unused_args__init_global_var_usage_map_for_preds_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_2,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_3,
  MR_Word STATE_VARIABLE_FixpointPredProcIds_0_4,
  MR_Word * STATE_VARIABLE_FixpointPredProcIds_5,
  MR_Word STATE_VARIABLE_OptProcs_0_6,
  MR_Word * STATE_VARIABLE_OptProcs_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____global_var_usage_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____global_var_usage_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____local_var_usage_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____local_var_usage_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____maybe_gather_pragma_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____maybe_gather_pragma_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____maybe_record_analysis_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____maybe_record_analysis_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____maybe_warn_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____maybe_warn_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_func_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_func_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6);


static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_1[26][2];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_2[13][3];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_3[7][5];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_4[4][6];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_5[4][1];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_6[1][15];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_7[2][9];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_8[2][8];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_9[1][7];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_10[1][13];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_11[1][11];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_12[1][10];




static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_1[26][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__unused_args__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0))
  },
  /* row   4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[1]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[1]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &transform_hlds__unused_args_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__unused_args_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unused."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "arguments"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_2[13][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_2[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0))
  },
  /* row   4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_result_2)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[1]))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[4])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[5])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[6])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_11[0])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_11[0])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_3[7][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__call_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_2[3])),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[3])),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__answer_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_2[4])),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[4])),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__unused_args__analysis__framework__pti_analysis_result_2__plain_transform_hlds__unused_args__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args__type_ctor_info_unused_args_answer_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0)),
    ((MR_Box) (&transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_4[4][6] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__analysis__arity3__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[1])),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_5[4][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 230U) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "any")) },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_6[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_7[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_8[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_9[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_10[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_11[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_fixup_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_fixup_info_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_changed_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_changed_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_12[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__analysis__framework__pti_analysis_result_2__plain_transform_hlds__unused_args__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args__type_ctor_info_unused_args_answer_0 = {
  &analysis__framework__analysis__framework__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_arg_var_in_proc_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0 = {
  (MR_String) "arg_var_in_proc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unused_args__transform_hlds__unused_args__field_types_arg_var_in_proc_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_arg_var_in_proc_0_0[1] = { &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0 };

static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_arg_var_in_proc_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_arg_var_in_proc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_arg_var_in_proc_0[1] = { &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0 };

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_arg_var_in_proc_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args____Unify____arg_var_in_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____arg_var_in_proc_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "arg_var_in_proc",
  { transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_arg_var_in_proc_0 },
  { transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_arg_var_in_proc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_arg_var_in_proc_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_fixup_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_fixup_info_0_0[4] = {
  (MR_String) "fixup_module_info",
  (MR_String) "fixup_new_proc_map",
  (MR_String) "fixup_var_table",
  (MR_String) "fixup_unused_vars"
};

static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0 = {
  (MR_String) "fixup_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unused_args__transform_hlds__unused_args__field_types_fixup_info_0_0,
  transform_hlds__unused_args__transform_hlds__unused_args__field_names_fixup_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_fixup_info_0_0[1] = { &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0 };

static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_fixup_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_fixup_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_fixup_info_0[1] = { &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0 };

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_fixup_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_fixup_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args____Unify____fixup_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____fixup_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "fixup_info",
  { transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_fixup_info_0 },
  { transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_fixup_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_fixup_info_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_global_var_usage_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unused_args____Unify____global_var_usage_map_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____global_var_usage_map_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "global_var_usage_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_local_var_usage_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unused_args____Unify____local_var_usage_map_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____local_var_usage_map_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "local_var_usage_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_gather_pragma_unused_args_0_0 = {
  (MR_String) "do_not_gather_pragma_unused_args",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_gather_pragma_unused_args_0_1 = {
  (MR_String) "do_gather_pragma_unused_args",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_ordinal_ordered_maybe_gather_pragma_unused_args_0[2] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_gather_pragma_unused_args_0_0,
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_gather_pragma_unused_args_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_maybe_gather_pragma_unused_args_0[2] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_gather_pragma_unused_args_0_1,
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_gather_pragma_unused_args_0_0
};

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_maybe_gather_pragma_unused_args_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_maybe_gather_pragma_unused_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__unused_args____Unify____maybe_gather_pragma_unused_args_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____maybe_gather_pragma_unused_args_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "maybe_gather_pragma_unused_args",
  { transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_maybe_gather_pragma_unused_args_0 },
  { transform_hlds__unused_args__transform_hlds__unused_args__enum_ordinal_ordered_maybe_gather_pragma_unused_args_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_maybe_gather_pragma_unused_args_0,

};

static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_record_analysis_unused_args_0_0 = {
  (MR_String) "do_not_record_analysis_unused_args",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_record_analysis_unused_args_0_1 = {
  (MR_String) "do_record_analysis_unused_args",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_ordinal_ordered_maybe_record_analysis_unused_args_0[2] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_record_analysis_unused_args_0_0,
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_record_analysis_unused_args_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_maybe_record_analysis_unused_args_0[2] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_record_analysis_unused_args_0_0,
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_record_analysis_unused_args_0_1
};

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_maybe_record_analysis_unused_args_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_maybe_record_analysis_unused_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__unused_args____Unify____maybe_record_analysis_unused_args_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____maybe_record_analysis_unused_args_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "maybe_record_analysis_unused_args",
  { transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_maybe_record_analysis_unused_args_0 },
  { transform_hlds__unused_args__transform_hlds__unused_args__enum_ordinal_ordered_maybe_record_analysis_unused_args_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_maybe_record_analysis_unused_args_0,

};

static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_warn_unused_args_0_0 = {
  (MR_String) "do_not_warn_unused_args",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_warn_unused_args_0_1 = {
  (MR_String) "do_warn_unused_args",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_ordinal_ordered_maybe_warn_unused_args_0[2] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_warn_unused_args_0_0,
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_warn_unused_args_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_maybe_warn_unused_args_0[2] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_warn_unused_args_0_0,
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_maybe_warn_unused_args_0_1
};

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_maybe_warn_unused_args_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_maybe_warn_unused_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__unused_args____Unify____maybe_warn_unused_args_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____maybe_warn_unused_args_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "maybe_warn_unused_args",
  { transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_maybe_warn_unused_args_0 },
  { transform_hlds__unused_args__transform_hlds__unused_args__enum_ordinal_ordered_maybe_warn_unused_args_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_maybe_warn_unused_args_0,

};

static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_new_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0 = {
  (MR_String) "new_proc_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unused_args__transform_hlds__unused_args__field_types_new_proc_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_new_proc_info_0_0[1] = { &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0 };

static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_new_proc_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_new_proc_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_new_proc_info_0[1] = { &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0 };

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_new_proc_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args____Unify____new_proc_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____new_proc_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "new_proc_info",
  { transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_new_proc_info_0 },
  { transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_new_proc_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_new_proc_info_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unused_args____Unify____new_proc_map_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____new_proc_map_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "new_proc_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_answer_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_answer_0 = {
  (MR_String) "unused_args_answer",
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_String) "args",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__unused_args____Unify____unused_args_answer_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____unused_args_answer_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "unused_args_answer",
  { &transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_answer_0 },
  { &transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_answer_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_answer_0,

};

static const MR_EnumFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0 = {
  (MR_String) "unused_args_call",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_ordinal_ordered_unused_args_call_0[1] = { &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0 };

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_unused_args_call_0[1] = { &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0 };

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_call_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (transform_hlds__unused_args____Unify____unused_args_call_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____unused_args_call_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "unused_args_call",
  { transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_unused_args_call_0 },
  { transform_hlds__unused_args__transform_hlds__unused_args__enum_ordinal_ordered_unused_args_call_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_call_0,

};

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_func_info_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_func_info_0 = {
  (MR_String) "unused_args_func_info",
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__unused_args____Unify____unused_args_func_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____unused_args_func_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "unused_args_func_info",
  { &transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_func_info_0 },
  { &transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_func_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_func_info_0,

};

static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_unused_args_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)
};

static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_unused_args_info_0_0[2] = {
  (MR_String) "unarg_module_info",
  (MR_String) "unarg_var_table"
};

static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0 = {
  (MR_String) "unused_args_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unused_args__transform_hlds__unused_args__field_types_unused_args_info_0_0,
  transform_hlds__unused_args__transform_hlds__unused_args__field_names_unused_args_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0[1] = { &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0 };

static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_unused_args_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_unused_args_info_0[1] = { &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0 };

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args____Unify____unused_args_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____unused_args_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "unused_args_info",
  { transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_unused_args_info_0 },
  { transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_unused_args_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_info_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0) }
};

static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_usage_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0)
};

static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0 = {
  (MR_String) "unused",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unused_args__transform_hlds__unused_args__field_types_usage_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_usage_info_0_0[1] = { &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0 };

static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_usage_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_usage_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_usage_info_0[1] = { &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0 };

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_usage_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args____Unify____usage_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____usage_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "usage_info",
  { transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_usage_info_0 },
  { transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_usage_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_usage_info_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__unused_args__unused_args_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__to_term__arity1__transform_hlds__unused_args__unused_args_call__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__call_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__answer_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__analysis__arity3__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0__[11] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 6)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__analysis_name_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__bottom_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__top_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__get_func_info_6_6_p_0_10001))
};

static MR_Word MR_CALL 
transform_hlds__unused_args__IntroducedFrom__func__report_unused_args__1977__1_1_f_0(
  MR_Integer LambdaHeadVar__1_41)
{
  MR_Word LambdaHeadVar__2_42;

  {
    LambdaHeadVar__2_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_42, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, LambdaHeadVar__2_42, 1) = ((MR_Box) (LambdaHeadVar__1_41));
  }
  return LambdaHeadVar__2_42;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__970__1_3_p_0(
  MR_Word FuncInfo_26,
  MR_Word Answer_27,
  MR_Word LambdaHeadVar__1_57)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_partial_order_79;
  MR_Word Var_58;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

  succeeded = transform_hlds__unused_args____Unify____unused_args_answer_0_0(LambdaHeadVar__1_57, Answer_27);
  succeeded = !(succeeded);
  if (succeeded)
  {
    Var_58 = (MR_Word) (LambdaHeadVar__1_57);
    succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeClassInfo_for_partial_order_79 = (MR_Word) (&transform_hlds__unused_args_scalar_common_2[4]);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_partial_order_79, 0)), 5))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_79)), ((MR_Box) (FuncInfo_26)), ((MR_Box) (Answer_27)), ((MR_Box) (LambdaHeadVar__1_57)));
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__963__1_1_f_0(
  MR_Word LambdaHeadVar__1_55)
{
  MR_Word LambdaHeadVar__2_56 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_55, 1))));

  return LambdaHeadVar__2_56;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_unify__661__1_2_p_0(
  MR_Word LHSVar_8,
  MR_Word CellVar_66)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), ((MR_Box) (CellVar_66)), ((MR_Box) (LHSVar_8)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_unify__653__1_2_p_0(
  MR_Word LHSVar_8,
  MR_Word CellVar_16)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), ((MR_Box) (CellVar_16)), ((MR_Box) (LHSVar_8)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__589__1_2_p_0(
  MR_Word LambdaHeadVar__1_64,
  MR_Word * LambdaHeadVar__2_65)
{
  MR_bool succeeded;
  MR_Word MaybeNameAndMode_40;

  *LambdaHeadVar__2_65 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_64, 0))));
  MaybeNameAndMode_40 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_64, 1))));
  succeeded = (MaybeNameAndMode_40 != (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__try_to_look_up_global_var_usage_map_entry_for_proc__398__1_3_p_0(
  MR_Word HeadVars_31,
  MR_Integer HeadVar__2_179,
  MR_Word * HeadVar__3_180)
{
  MR_Box conv0_HeadVar__3_180;

  mercury__list__det_index1_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), HeadVars_31, HeadVar__2_179, &conv0_HeadVar__3_180);
  *HeadVar__3_180 = ((MR_Word) (conv0_HeadVar__3_180));
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word Term_3)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_String Var_6;
  MR_Word Var_7;

  succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_5 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Var_7 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_6 = ((MR_String) ((MR_hl_field(0, Var_5, 0))));
        succeeded = (strcmp(Var_6, (MR_String) "any") == 0);
      }
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__to_term_1_1_f_0(void)
{
  MR_Word Term_3;
  MR_Word Var_8;

  Var_8 = mercury__term_context__dummy_context_0_f_0();
  {
    Term_3 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_3, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_5[3]));
    MR_hl_field(0, Term_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_3, 2) = ((MR_Box) (Var_8));
  }
  return Term_3;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word Term_4,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Args_3;
  MR_Box conv0_Args_3;

  succeeded = mercury__term_conversion__term_to_type_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), Term_4, &conv0_Args_3);
  if (succeeded)
  {
    Args_3 = ((MR_Word) (conv0_Args_3));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *HeadVar__2_2 = (MR_Word) (Args_3);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__to_term_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Term_4;
  MR_Word Args_3 = (MR_Word) (HeadVar__1_1);

  mercury__term_conversion__type_to_term_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ((MR_Box) (Args_3)), &Term_4);
  return Term_4;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__equivalent_3_3_p_0(
  MR_Word HeadVar__1_7)
{
  return MR_TRUE;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__more_precise_than_3_3_p_0(
  MR_Word HeadVar__1_4)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__semidet_fail_0_p_0();
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__equivalent_3_3_p_0(
  MR_Word HeadVar__1_9,
  MR_Word Args_10,
  MR_Word Args_3)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____unused_args_answer_0_0(Args_3, Args_10);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__more_precise_than_3_3_p_0(
  MR_Word HeadVar__1_4,
  MR_Word Answer1_5,
  MR_Word Answer2_6)
{
  MR_bool succeeded;
  MR_Word Args1_7 = (MR_Word) (Answer1_5);
  MR_Word Args2_8 = (MR_Word) (Answer2_6);
  MR_Word Var_11;
  MR_Word Var_12;

  Var_11 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Args2_8);
  Var_12 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Args1_7);
  succeeded = mercury__set__subset_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_11, Var_12);
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__get_func_info_6_6_p_0(
  MR_Word ModuleInfo_17,
  MR_Word ModuleName_18,
  MR_Word FuncId_19,
  MR_Word * FuncInfo_22)
{
  MR_Word PredId_23;
  MR_Word PredInfo_25;
  MR_Word PredFormArity_26;
  MR_Word Var_27;

  transform_hlds__mmc_analysis__func_id_to_ppid_4_p_0(ModuleInfo_17, ModuleName_18, FuncId_19, &Var_27);
  PredId_23 = ((MR_Word) ((MR_hl_field(0, Var_27, 0))));
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_17, PredId_23, &PredInfo_25);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_25, &PredFormArity_26);
  *FuncInfo_22 = (MR_Word) (PredFormArity_26);
}

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__top_2_2_f_0(
  MR_Word HeadVar__1_12)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__bottom_2_2_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__3_3;
  MR_Integer Arity_10;
  MR_Word Var_24 = (MR_Word) (HeadVar__1_1);
  MR_Word Var_25;

  Arity_10 = (MR_Integer) (Var_24);
  Var_25 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, Arity_10);
  HeadVar__3_3 = (MR_Word) (Var_25);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0(void)
{
  return (MR_Integer) 0;
}

static MR_Integer MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0(void)
{
  return (MR_Integer) 3;
}

static MR_String MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__analysis_name_2_2_f_0(void)
{
  return (MR_String) "unused_args";
}

static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[7]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__unused_args_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_func_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_func_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);
    MR_Integer Var_8 = (MR_Integer) (ArgX1_3);
    MR_Integer Var_9 = (MR_Integer) (ArgY1_4);

    succeeded = (Var_8 == Var_9);
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_call_0_0(
  MR_Word * HeadVar__1_1)
{
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_95_117_110_117_115_101_100_95_97_114_103_115_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_call_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_answer_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_answer_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____maybe_warn_unused_args_0_0(
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

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____maybe_warn_unused_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__unused_args____Compare____maybe_record_analysis_unused_args_0_0(
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
transform_hlds__unused_args____Unify____maybe_record_analysis_unused_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__unused_args____Compare____maybe_gather_pragma_unused_args_0_0(
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
transform_hlds__unused_args____Unify____maybe_gather_pragma_unused_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____local_var_usage_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____local_var_usage_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____global_var_usage_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____global_var_usage_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__var_table____Compare____var_table_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&transform_hlds__unused_args_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&transform_hlds__unused_args_scalar_common_1[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__unused_args__get_unused_args_1_f_0(
  MR_Word UnusedArgs_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (UnusedArgs_3);

  return HeadVar__2_2;
}

static void MR_CALL 
transform_hlds__unused_args__add_rev_arg_dep_5_p_0(
  MR_Word Var_6,
  MR_Word PredProcId_7,
  MR_Word Arg_8,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_10,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_11)
{
  MR_bool succeeded;
  MR_Word VarUsage0_12;
  MR_Box conv0_VarUsage0_12;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), STATE_VARIABLE_LocalVarUsageMap_0_10, ((MR_Box) (Arg_8)), &conv0_VarUsage0_12);
  if (succeeded)
  {
    VarUsage0_12 = ((MR_Word) (conv0_VarUsage0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word AliasVars_13 = ((MR_Word) ((MR_hl_field(0, VarUsage0_12, 0))));
    MR_Word AliasArgs0_14 = ((MR_Word) ((MR_hl_field(0, VarUsage0_12, 1))));
    MR_Word AliasArgs_15;
    MR_Word VarUsage_16;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (PredProcId_7));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (Var_6));
    }
    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0), ((MR_Box) (Var_17)), AliasArgs0_14, &AliasArgs_15);
    {
      VarUsage_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, VarUsage_16, 0) = ((MR_Box) (AliasVars_13));
      MR_hl_field(0, VarUsage_16, 1) = ((MR_Box) (AliasArgs_15));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Arg_8)), ((MR_Box) (VarUsage_16)), STATE_VARIABLE_LocalVarUsageMap_0_10, STATE_VARIABLE_LocalVarUsageMap_11);
  }
  else
    *STATE_VARIABLE_LocalVarUsageMap_11 = STATE_VARIABLE_LocalVarUsageMap_0_10;
}

static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word CalleePredProcId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_17,
  MR_Word * STATE_VARIABLE_AnalysisInfo_18)
{
  MR_bool succeeded;
  MR_Word CalleePredId_8 = ((MR_Word) ((MR_hl_field(0, CalleePredProcId_6, 0))));
  MR_Word CalleePredInfo_10;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, CalleePredId_8, &CalleePredInfo_10);
  succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(CalleePredInfo_10);
  if (succeeded)
  {
    succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(CalleePredInfo_10);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word CalleeModule_11;
    MR_Word CalleeFuncId_12;
    MR_Word FuncInfo_16;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_FuncInfo_16;

    transform_hlds__mmc_analysis__ppid_to_module_name_func_id_4_p_0(ModuleInfo_5, CalleePredProcId_6, &CalleeModule_11, &CalleeFuncId_12);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&transform_hlds__unused_args_scalar_common_4[0]), 0)), 10))));
    func_0(((MR_Box) ((MR_Word) (&transform_hlds__unused_args_scalar_common_4[0]))), ((MR_Box) (ModuleInfo_5)), ((MR_Box) (CalleeModule_11)), ((MR_Box) (CalleeFuncId_12)), &conv1_FuncInfo_16);
    FuncInfo_16 = ((MR_Word) (conv1_FuncInfo_16));
    analysis__operations__record_dependency_7_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_4[0]), CalleeModule_11, CalleeFuncId_12, ((MR_Box) (FuncInfo_16)), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_AnalysisInfo_0_17, STATE_VARIABLE_AnalysisInfo_18);
  }
  else
    *STATE_VARIABLE_AnalysisInfo_18 = STATE_VARIABLE_AnalysisInfo_0_17;
}

static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AnalysisInfo_18;

  transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AnalysisInfo_18);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AnalysisInfo_18));
}

static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word CallerPredProcId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_12,
  MR_Word * STATE_VARIABLE_AnalysisInfo_13)
{
  MR_Word CallerProcInfo_9;
  MR_Word Goal_10;
  MR_Word CalleePredProcIds_11;
  MR_Word Var_14;
  MR_Word _CallerPredInfo_8;
  MR_Box conv1_STATE_VARIABLE_AnalysisInfo_13;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, CallerPredProcId_6, &_CallerPredInfo_8, &CallerProcInfo_9);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(CallerProcInfo_9, &Goal_10);
  hlds__goal_refs__pred_proc_ids_called_from_goal_2_p_0(Goal_10, &CalleePredProcIds_11);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_9[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (transform_hlds__unused_args__record_intermod_dependencies_4_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (ModuleInfo_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), Var_14, CalleePredProcIds_11, ((MR_Box) (STATE_VARIABLE_AnalysisInfo_0_12)), &conv1_STATE_VARIABLE_AnalysisInfo_13);
  *STATE_VARIABLE_AnalysisInfo_13 = ((MR_Word) (conv1_STATE_VARIABLE_AnalysisInfo_13));
}

static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_2_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word UnusedArgInfo_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_19,
  MR_Word * STATE_VARIABLE_AnalysisInfo_20)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_8, PredInfo_11, ProcId_12);
  if (succeeded)
  {
    succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_11);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word PPId_14;
    MR_Word Answer_16;
    MR_Word ModuleName_17;
    MR_Word FuncId_18;
    MR_Word UnusedArgs_15;
    MR_Box conv0_UnusedArgs_15;

    {
      PPId_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PPId_14, 0) = ((MR_Box) (PredId_10));
      MR_hl_field(0, PPId_14, 1) = ((MR_Box) (ProcId_12));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), UnusedArgInfo_9, ((MR_Box) (PPId_14)), &conv0_UnusedArgs_15);
    if (succeeded)
    {
      UnusedArgs_15 = ((MR_Word) (conv0_UnusedArgs_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Answer_16 = (MR_Word) (UnusedArgs_15);
    else
      Answer_16 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
    transform_hlds__mmc_analysis__ppid_to_module_name_func_id_4_p_0(ModuleInfo_8, PPId_14, &ModuleName_17, &FuncId_18);
    analysis__operations__record_result_7_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_4[0]), ModuleName_17, FuncId_18, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Answer_16)), (MR_Integer) 2, STATE_VARIABLE_AnalysisInfo_0_19, STATE_VARIABLE_AnalysisInfo_20);
  }
  else
    *STATE_VARIABLE_AnalysisInfo_20 = STATE_VARIABLE_AnalysisInfo_0_19;
}

static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AnalysisInfo_20;

  transform_hlds__unused_args__maybe_record_intermod_unused_args_2_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AnalysisInfo_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AnalysisInfo_20));
}

static void MR_CALL 
transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word UnusedArgInfo_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_12,
  MR_Word * STATE_VARIABLE_AnalysisInfo_13)
{
  MR_Word PredInfo_10;
  MR_Word ProcIds_11;
  MR_Word Var_14;
  MR_Box conv1_STATE_VARIABLE_AnalysisInfo_13;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_8, &PredInfo_10);
  ProcIds_11 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_10);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_12[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (UnusedArgInfo_7));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (PredId_8));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (PredInfo_10));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), Var_14, ProcIds_11, ((MR_Box) (STATE_VARIABLE_AnalysisInfo_0_12)), &conv1_STATE_VARIABLE_AnalysisInfo_13);
  *STATE_VARIABLE_AnalysisInfo_13 = ((MR_Word) (conv1_STATE_VARIABLE_AnalysisInfo_13));
}

static void MR_CALL 
transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(
  MR_Word Arg0_9,
  MR_Word * Arg_10,
  MR_Word STATE_VARIABLE_Subst_0_23,
  MR_Word * STATE_VARIABLE_Subst_24,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26,
  MR_Word STATE_VARIABLE_Changed_0_27,
  MR_Word * STATE_VARIABLE_Changed_28)
{
  MR_Word OldVar_14 = ((MR_Word) ((MR_hl_field(0, Arg0_9, 0))));
  MR_Word MaybeName_15 = ((MR_Word) ((MR_hl_field(0, Arg0_9, 1))));
  MR_Word OrigType_16 = ((MR_Word) ((MR_hl_field(0, Arg0_9, 2))));
  MR_Word BoxPolicy_17 = ((MR_Unsigned) ((MR_hl_field(0, Arg0_9, 3))) & (MR_Integer) 1);

  if ((MaybeName_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word VarTable0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 2))));
    MR_Word OldVarEntry_20;
    MR_Word NewVar_21;
    MR_Word VarTable_22;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_35;

    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable0_19, OldVar_14, &OldVarEntry_20);
    parse_tree__var_table__add_var_entry_4_p_0(OldVarEntry_20, &NewVar_21, VarTable0_19, &VarTable_22);
    Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 0))));
    Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 1))));
    Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_26 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_22));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_35));
    }
    mercury__map__set_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), ((MR_Box) (OldVar_14)), ((MR_Box) (NewVar_21)), STATE_VARIABLE_Subst_0_23, STATE_VARIABLE_Subst_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Arg_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (NewVar_21));
      MR_hl_field(0, base, 1) = ((MR_Box) (MaybeName_15));
      MR_hl_field(0, base, 2) = ((MR_Box) (OrigType_16));
      MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_17));
    }
    *STATE_VARIABLE_Changed_28 = (MR_Integer) 1;
  }
  else
  {
    *Arg_10 = Arg0_9;
    *STATE_VARIABLE_Subst_24 = STATE_VARIABLE_Subst_0_23;
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
    *STATE_VARIABLE_Changed_28 = STATE_VARIABLE_Changed_0_27;
  }
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_proc_msg_6_p_0(
  MR_Word VeryVerbose_7,
  MR_Word GlobalVarUsageMap_8,
  MR_Word NewProcMap_9,
  MR_Word PredProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  switch (VeryVerbose_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DebugStream_13;
        MR_Word PredId_14;
        MR_Integer ProcId_15;
        MR_Word PredInfo_16;
        MR_String Name_17;
        MR_Word PredOrFunc_18;
        MR_Word PredFormArity_19;
        MR_Integer UserArityInt_20;
        MR_Integer ProcInt_21;
        MR_Word Var_26;
        MR_String Var_31;
        MR_String Var_48;
        MR_String Var_58;

        hlds__passes_aux__get_debug_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_22, &DebugStream_13);
        PredId_14 = ((MR_Word) ((MR_hl_field(0, PredProcId_10, 0))));
        ProcId_15 = ((MR_Integer) ((MR_hl_field(0, PredProcId_10, 1))));
        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_22, PredId_14, &PredInfo_16);
        hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_16, &Name_17);
        hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_16, &PredOrFunc_18);
        hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_16, &PredFormArity_19);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_18, &Var_26, PredFormArity_19);
        UserArityInt_20 = (MR_Integer) (Var_26);
        hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_15, &ProcInt_21);
        Var_31 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_18);
        mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) "% Fixing up ");
        mercury__io__write_string_4_p_0(DebugStream_13, Var_31);
        mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) " \140");
        mercury__io__write_string_4_p_0(DebugStream_13, Name_17);
        mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) "/");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_5[0]), UserArityInt_20, &Var_48);
        mercury__io__write_string_4_p_0(DebugStream_13, Var_48);
        mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) " in mode ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_5[0]), ProcInt_21, &Var_58);
        mercury__io__write_string_4_p_0(DebugStream_13, Var_58);
        mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) "\n");
      }
      break;
  }
  transform_hlds__unused_args__unused_args_fixup_proc_5_p_0(GlobalVarUsageMap_8, PredProcId_10, NewProcMap_9, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_proc_5_p_0(
  MR_Word GlobalVarUsageMap_6,
  MR_Word OldPredProcId_7,
  MR_Word NewProcMap_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41)
{
  MR_bool succeeded;
  MR_Word PredId_11;
  MR_Integer ProcId_12;
  MR_Word UnusedArgs_14;
  MR_Word UsageInfos_15;
  MR_Word UnusedVars_16;
  MR_Word PredInfo0_17;
  MR_Word VarTable0_19;
  MR_Word HeadVars0_20;
  MR_Word ArgModes0_21;
  MR_Word HeadVars_23;
  MR_Word ArgModes_24;
  MR_Word ProcInfo_25;
  MR_Word FixupInfo0_27;
  MR_Word FixupInfo_28;
  MR_Word Changed_29;
  MR_Word PredInfo_39;
  MR_Word STATE_VARIABLE_ProcInfo_1_44;
  MR_Word STATE_VARIABLE_Goal_1_45;
  MR_Word STATE_VARIABLE_ProcInfo_2_46;
  MR_Word STATE_VARIABLE_ProcInfo_3_47;
  MR_Word Goal1_62;
  MR_Word GoalExpr1_63;
  MR_Word GoalInfo1_64;
  MR_Word NewProcInfo_10;
  MR_Box conv0_NewProcInfo_10;
  MR_Box conv1_UsageInfos_15;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0), NewProcMap_8, ((MR_Box) (OldPredProcId_7)), &conv0_NewProcInfo_10);
  if (succeeded)
  {
    NewProcInfo_10 = ((MR_Word) (conv0_NewProcInfo_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    PredId_11 = ((MR_Word) ((MR_hl_field(0, NewProcInfo_10, 0))));
    ProcId_12 = ((MR_Integer) ((MR_hl_field(0, NewProcInfo_10, 1))));
    UnusedArgs_14 = ((MR_Word) ((MR_hl_field(0, NewProcInfo_10, 3))));
  }
  else
  {
    PredId_11 = ((MR_Word) ((MR_hl_field(0, OldPredProcId_7, 0))));
    ProcId_12 = ((MR_Integer) ((MR_hl_field(0, OldPredProcId_7, 1))));
    UnusedArgs_14 = (MR_Word) ((MR_Unsigned) 0U);
  }
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), GlobalVarUsageMap_6, ((MR_Box) (OldPredProcId_7)), &conv1_UsageInfos_15);
  UsageInfos_15 = ((MR_Word) (conv1_UsageInfos_15));
  mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), UsageInfos_15, &UnusedVars_16);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_40, PredId_11, ProcId_12, &PredInfo0_17, &STATE_VARIABLE_ProcInfo_1_44);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_1_44, &VarTable0_19);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_1_44, &HeadVars0_20);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_1_44, &ArgModes0_21);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_1_44, &STATE_VARIABLE_Goal_1_45);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs_14, HeadVars0_20, &HeadVars_23);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs_14, ArgModes0_21, &ArgModes_24);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_23, STATE_VARIABLE_ProcInfo_1_44, &STATE_VARIABLE_ProcInfo_2_46);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_24, STATE_VARIABLE_ProcInfo_2_46, &STATE_VARIABLE_ProcInfo_3_47);
  {
    FixupInfo0_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FixupInfo0_27, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_40));
    MR_hl_field(0, FixupInfo0_27, 1) = ((MR_Box) (NewProcMap_8));
    MR_hl_field(0, FixupInfo0_27, 2) = ((MR_Box) (VarTable0_19));
    MR_hl_field(0, FixupInfo0_27, 3) = ((MR_Box) (UnusedVars_16));
  }
  transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(STATE_VARIABLE_Goal_1_45, &Goal1_62, FixupInfo0_27, &FixupInfo_28, &Changed_29);
  GoalExpr1_63 = ((MR_Word) ((MR_hl_field(0, Goal1_62, 0))));
  GoalInfo1_64 = ((MR_Word) ((MR_hl_field(0, Goal1_62, 1))));
  switch (Changed_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word VarTable1_32 = ((MR_Word) ((MR_hl_field(0, FixupInfo_28, 2))));
        MR_Word NonLocals_34;
        MR_Word RttiVarMaps0_35;
        MR_Word VarTable_37;
        MR_Word RttiVarMaps_38;
        MR_Word STATE_VARIABLE_Goal_2_48;
        MR_Word STATE_VARIABLE_Goal_3_50;
        MR_Word STATE_VARIABLE_ProcInfo_4_51;
        MR_Word STATE_VARIABLE_ProcInfo_5_52;
        MR_Word UnusedVars_65 = ((MR_Word) ((MR_hl_field(0, FixupInfo_28, 3))));
        MR_Word GoalInfo_66;
        MR_Word InstMap0_70;
        MR_Word InstMap_71;
        MR_Word Var_36;

        InstMap0_70 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_64);
        hlds__instmap__instmap_delta_delete_vars_3_p_0(UnusedVars_65, InstMap0_70, &InstMap_71);
        hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMap_71, GoalInfo1_64, &GoalInfo_66);
        {
          STATE_VARIABLE_Goal_2_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Goal_2_48, 0) = ((MR_Box) (GoalExpr1_63));
          MR_hl_field(0, STATE_VARIABLE_Goal_2_48, 1) = ((MR_Box) (GoalInfo_66));
        }
        NonLocals_34 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_23);
        hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_3_47, &RttiVarMaps0_35);
        hlds__quantification__implicitly_quantify_goal_general_9_p_0((MR_Integer) 1, NonLocals_34, &Var_36, STATE_VARIABLE_Goal_2_48, &STATE_VARIABLE_Goal_3_50, VarTable1_32, &VarTable_37, RttiVarMaps0_35, &RttiVarMaps_38);
        hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Goal_3_50, STATE_VARIABLE_ProcInfo_3_47, &STATE_VARIABLE_ProcInfo_4_51);
        hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_37, STATE_VARIABLE_ProcInfo_4_51, &STATE_VARIABLE_ProcInfo_5_52);
        hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_38, STATE_VARIABLE_ProcInfo_5_52, &ProcInfo_25);
      }
      break;
    case (MR_Integer) 0:
      ProcInfo_25 = STATE_VARIABLE_ProcInfo_3_47;
      break;
  }
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_12, ProcInfo_25, PredInfo0_17, &PredInfo_39);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_11, PredInfo_39, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word STATE_VARIABLE_Changed_0_5,
  MR_Word * STATE_VARIABLE_Changed_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Changed_6 = STATE_VARIABLE_Changed_0_5;
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Case0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_15;
    MR_Word Cases_16;
    MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(0, Case0_13, 0))));
    MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, Case0_13, 1))));
    MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(0, Case0_13, 2))));
    MR_Word Goal_22;
    MR_Word LocalChanged_23;
    MR_Word STATE_VARIABLE_Info_1_28;
    MR_Word STATE_VARIABLE_Changed_1_29;
    MR_Word Goal1_30;
    MR_Word GoalExpr1_31;
    MR_Word GoalInfo1_32;

    transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(Goal0_21, &Goal1_30, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_1_28, &LocalChanged_23);
    GoalExpr1_31 = ((MR_Word) ((MR_hl_field(0, Goal1_30, 0))));
    GoalInfo1_32 = ((MR_Word) ((MR_hl_field(0, Goal1_30, 1))));
    switch (LocalChanged_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word UnusedVars_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_28, 3))));
          MR_Word GoalInfo_34;
          MR_Word InstMap0_38;
          MR_Word InstMap_39;

          InstMap0_38 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_32);
          hlds__instmap__instmap_delta_delete_vars_3_p_0(UnusedVars_33, InstMap0_38, &InstMap_39);
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMap_39, GoalInfo1_32, &GoalInfo_34);
          {
            Goal_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Goal_22, 0) = ((MR_Box) (GoalExpr1_31));
            MR_hl_field(0, Goal_22, 1) = ((MR_Box) (GoalInfo_34));
          }
          STATE_VARIABLE_Changed_1_29 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 0:
        {
          Goal_22 = Goal0_21;
          STATE_VARIABLE_Changed_1_29 = STATE_VARIABLE_Changed_0_5;
        }
        break;
    }
    {
      Case_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_15, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(0, Case_15, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(0, Case_15, 2) = ((MR_Box) (Goal_22));
    }
    transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(Cases0_14, &Cases_16, STATE_VARIABLE_Info_1_28, STATE_VARIABLE_Info_4, STATE_VARIABLE_Changed_1_29, STATE_VARIABLE_Changed_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_16));
    }
  }
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word STATE_VARIABLE_Changed_0_5,
  MR_Word * STATE_VARIABLE_Changed_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Changed_6 = STATE_VARIABLE_Changed_0_5;
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_15;
    MR_Word Goals_16;
    MR_Word LocalChanged_19;
    MR_Word STATE_VARIABLE_Info_1_24;
    MR_Word STATE_VARIABLE_Changed_1_25;
    MR_Word Goal1_26;
    MR_Word GoalExpr1_27;
    MR_Word GoalInfo1_28;

    transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(Goal0_13, &Goal1_26, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_1_24, &LocalChanged_19);
    GoalExpr1_27 = ((MR_Word) ((MR_hl_field(0, Goal1_26, 0))));
    GoalInfo1_28 = ((MR_Word) ((MR_hl_field(0, Goal1_26, 1))));
    switch (LocalChanged_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word UnusedVars_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_24, 3))));
          MR_Word GoalInfo_30;
          MR_Word InstMap0_34;
          MR_Word InstMap_35;

          InstMap0_34 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_28);
          hlds__instmap__instmap_delta_delete_vars_3_p_0(UnusedVars_29, InstMap0_34, &InstMap_35);
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMap_35, GoalInfo1_28, &GoalInfo_30);
          {
            Goal_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Goal_15, 0) = ((MR_Box) (GoalExpr1_27));
            MR_hl_field(0, Goal_15, 1) = ((MR_Box) (GoalInfo_30));
          }
          STATE_VARIABLE_Changed_1_25 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 0:
        {
          Goal_15 = Goal0_13;
          STATE_VARIABLE_Changed_1_25 = STATE_VARIABLE_Changed_0_5;
        }
        break;
    }
    transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(Goals0_14, &Goals_16, STATE_VARIABLE_Info_1_24, STATE_VARIABLE_Info_4, STATE_VARIABLE_Changed_1_25, STATE_VARIABLE_Changed_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_16));
    }
  }
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word STATE_VARIABLE_Changed_0_5,
  MR_Word * STATE_VARIABLE_Changed_6)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Changed_6 = STATE_VARIABLE_Changed_0_5;
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_18;
    MR_Word LocalChanged_19;
    MR_Word Goals1_21;
    MR_Word STATE_VARIABLE_Info_1_26;
    MR_Word STATE_VARIABLE_Changed_1_27;
    MR_Word Goal1_32;
    MR_Word GoalExpr1_33;
    MR_Word GoalInfo1_34;
    MR_Word Var_28;
    MR_Word Var_30;

    transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(Goal0_13, &Goal1_32, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_1_26, &LocalChanged_19);
    GoalExpr1_33 = ((MR_Word) ((MR_hl_field(0, Goal1_32, 0))));
    GoalInfo1_34 = ((MR_Word) ((MR_hl_field(0, Goal1_32, 1))));
    switch (LocalChanged_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word UnusedVars_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_26, 3))));
          MR_Word GoalInfo_36;
          MR_Word InstMap0_40;
          MR_Word InstMap_41;

          InstMap0_40 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_34);
          hlds__instmap__instmap_delta_delete_vars_3_p_0(UnusedVars_35, InstMap0_40, &InstMap_41);
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMap_41, GoalInfo1_34, &GoalInfo_36);
          {
            Goal_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Goal_18, 0) = ((MR_Box) (GoalExpr1_33));
            MR_hl_field(0, Goal_18, 1) = ((MR_Box) (GoalInfo_36));
          }
          STATE_VARIABLE_Changed_1_27 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 0:
        {
          Goal_18 = Goal0_13;
          STATE_VARIABLE_Changed_1_27 = STATE_VARIABLE_Changed_0_5;
        }
        break;
    }
    transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(Goals0_14, &Goals1_21, STATE_VARIABLE_Info_1_26, STATE_VARIABLE_Info_4, STATE_VARIABLE_Changed_1_27, STATE_VARIABLE_Changed_6);
    Var_28 = ((MR_Word) ((MR_hl_field(0, Goal_18, 0))));
    Var_30 = hlds__make_goal__true_goal_expr_0_f_0();
    succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(Var_28, Var_30);
    if (succeeded)
      *HeadVar__2_2 = Goals1_21;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (Goals1_21));
      }
  }
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_Arg_10;
  MR_Word conv9_STATE_VARIABLE_Subst_24;
  MR_Word conv8_STATE_VARIABLE_Info_26;
  MR_Word conv7_STATE_VARIABLE_Changed_28;

  transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(((MR_Word) (wrapper_arg_1)), &conv10_Arg_10, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_Subst_24, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_Info_26, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Changed_28);
  *wrapper_arg_2 = ((MR_Box) (conv10_Arg_10));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_Subst_24));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_Info_26));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Changed_28));
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Arg_10;
  MR_Word conv2_STATE_VARIABLE_Subst_24;
  MR_Word conv1_STATE_VARIABLE_Info_26;
  MR_Word conv0_STATE_VARIABLE_Changed_28;

  transform_hlds__unused_args__rename_apart_unused_foreign_arg_8_p_0(((MR_Word) (wrapper_arg_1)), &conv3_Arg_10, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Subst_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_Info_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Changed_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Arg_10));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Subst_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_Info_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Changed_28));
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word STATE_VARIABLE_Info_0_76,
  MR_Word * STATE_VARIABLE_Info_77,
  MR_Word * Changed_9)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_6, 0))));
  MR_Word GoalInfo0_11 = ((MR_Word) ((MR_hl_field(0, Goal0_6, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NegGoal0_59 = (MR_Word) ((MR_Word) (GoalExpr0_10));
        MR_Word NegGoal_60;
        MR_Word GoalExpr_112;

        transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(NegGoal0_59, &NegGoal_60, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, Changed_9);
        GoalExpr_112 = (MR_Word) ((MR_Word) (NegGoal_60));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_7 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_112));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unify_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 3))));
        MR_Word ModuleInfo_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_76, 0))));
        MR_Word UnusedVars_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_76, 3))));
        MR_Word ChangedPrime_19;

        succeeded = transform_hlds__unused_args__need_unify_4_p_0(ModuleInfo_17, UnusedVars_18, Unify_15, &ChangedPrime_19);
        if (succeeded)
        {
          *Goal_7 = Goal0_6;
          *Changed_9 = ChangedPrime_19;
        }
        else
        {
          MR_Word Var_78;

          Var_78 = hlds__make_goal__true_goal_expr_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_7 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_78));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
          }
          *Changed_9 = (MR_Integer) 1;
        }
        *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_10, 0))));
        MR_Integer ProcId_21 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_10, 1))));
        MR_Word ArgVars0_22 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_10, 2))));
        MR_Word Builtin_23 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_10, 3))) & (MR_Integer) 1);
        MR_Word UnifyContext_24 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_10, 4))));
        MR_Word NewProcMap_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_76, 1))));
        MR_Word NewProcInfo_27;
        MR_Word Var_79;
        MR_Box conv14_NewProcInfo_27;

        {
          Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_79, 0) = ((MR_Box) (PredId_20));
          MR_hl_field(0, Var_79, 1) = ((MR_Box) (ProcId_21));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0), NewProcMap_26, ((MR_Box) (Var_79)), &conv14_NewProcInfo_27);
        if (succeeded)
        {
          NewProcInfo_27 = ((MR_Word) (conv14_NewProcInfo_27));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word NewPredId_28 = ((MR_Word) ((MR_hl_field(0, NewProcInfo_27, 0))));
          MR_Integer NewProcId_29 = ((MR_Integer) ((MR_hl_field(0, NewProcInfo_27, 1))));
          MR_Word NewSymName_30 = ((MR_Word) ((MR_hl_field(0, NewProcInfo_27, 2))));
          MR_Word UnusedArgs_31 = ((MR_Word) ((MR_hl_field(0, NewProcInfo_27, 3))));
          MR_Word ArgVars_32;
          MR_Word GoalExpr_33;

          *Changed_9 = (MR_Integer) 1;
          transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs_31, ArgVars0_22, &ArgVars_32);
          {
            GoalExpr_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, GoalExpr_33, 0) = ((MR_Box) (NewPredId_28));
            MR_hl_field(2, GoalExpr_33, 1) = ((MR_Box) (NewProcId_29));
            MR_hl_field(2, GoalExpr_33, 2) = ((MR_Box) (ArgVars_32));
            MR_hl_field(2, GoalExpr_33, 3) = (MR_Box) ((MR_Unsigned) (Builtin_23));
            MR_hl_field(2, GoalExpr_33, 4) = ((MR_Box) (UnifyContext_24));
            MR_hl_field(2, GoalExpr_33, 5) = ((MR_Box) (NewSymName_30));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_7 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_33));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
          }
        }
        else
        {
          *Changed_9 = (MR_Integer) 0;
          *Goal_7 = Goal0_6;
        }
        *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Goal_7 = Goal0_6;
            *Changed_9 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attributes_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word Args0_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 4))));
            MR_Word ExtraArgs0_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 5))));
            MR_Word MaybeTraceRuntimeCond_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 6))));
            MR_Word Impl_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 7))));
            MR_Word Subst0_45;
            MR_Word Args_46;
            MR_Word Subst1_47;
            MR_Word ArgsChanged_48;
            MR_Word ExtraArgs_49;
            MR_Word Subst_50;
            MR_Word GoalInfo_51;
            MR_Word STATE_VARIABLE_Info_1_82;
            MR_Word PredId_104 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Integer ProcId_105 = ((MR_Integer) ((MR_hl_field(3, GoalExpr0_10, 3))));
            MR_Word GoalExpr_106;
            MR_Box conv6_Subst1_47;
            MR_Box conv5_STATE_VARIABLE_Info_1_82;
            MR_Box conv4_ArgsChanged_48;
            MR_Box conv13_Subst_50;
            MR_Box conv12_STATE_VARIABLE_Info_77;
            MR_Box conv11_Changed_9;

            mercury__map__init_1_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), &Subst0_45);
            mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[6]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_fixup_info_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_changed_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[11]), Args0_40, &Args_46, ((MR_Box) (Subst0_45)), &conv6_Subst1_47, ((MR_Box) (STATE_VARIABLE_Info_0_76)), &conv5_STATE_VARIABLE_Info_1_82, ((MR_Box) ((MR_Integer) 0)), &conv4_ArgsChanged_48);
            Subst1_47 = ((MR_Word) (conv6_Subst1_47));
            STATE_VARIABLE_Info_1_82 = ((MR_Word) (conv5_STATE_VARIABLE_Info_1_82));
            ArgsChanged_48 = ((MR_Word) (conv4_ArgsChanged_48));
            mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[6]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_fixup_info_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_changed_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[12]), ExtraArgs0_41, &ExtraArgs_49, ((MR_Box) (Subst1_47)), &conv13_Subst_50, ((MR_Box) (STATE_VARIABLE_Info_1_82)), &conv12_STATE_VARIABLE_Info_77, ((MR_Box) (ArgsChanged_48)), &conv11_Changed_9);
            Subst_50 = ((MR_Word) (conv13_Subst_50));
            *STATE_VARIABLE_Info_77 = ((MR_Word) (conv12_STATE_VARIABLE_Info_77));
            *Changed_9 = ((MR_Word) (conv11_Changed_9));
            {
              GoalExpr_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_106, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, GoalExpr_106, 1) = ((MR_Box) (Attributes_39));
              MR_hl_field(3, GoalExpr_106, 2) = ((MR_Box) (PredId_104));
              MR_hl_field(3, GoalExpr_106, 3) = ((MR_Box) (ProcId_105));
              MR_hl_field(3, GoalExpr_106, 4) = ((MR_Box) (Args_46));
              MR_hl_field(3, GoalExpr_106, 5) = ((MR_Box) (ExtraArgs_49));
              MR_hl_field(3, GoalExpr_106, 6) = ((MR_Box) (MaybeTraceRuntimeCond_42));
              MR_hl_field(3, GoalExpr_106, 7) = ((MR_Box) (Impl_43));
            }
            hlds__hlds_goal__rename_vars_in_goal_info_4_p_0((MR_Integer) 1, Subst_50, GoalInfo0_11, &GoalInfo_51);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_106));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_51));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_52 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_10, 1))) & (MR_Integer) 1);
            MR_Word Goals0_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Word Goals_54;
            MR_Word GoalExpr_107;

            transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(Goals0_53, &Goals_54, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, (MR_Integer) 0, Changed_9);
            {
              GoalExpr_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_107, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_107, 1) = (MR_Box) ((MR_Unsigned) (ConjType_52));
              MR_hl_field(3, GoalExpr_107, 2) = ((MR_Box) (Goals_54));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_107));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word GoalExpr_108;
            MR_Word Goals0_109 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word Goals_110;

            transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(Goals0_109, &Goals_110, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, (MR_Integer) 0, Changed_9);
            {
              GoalExpr_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_108, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_108, 1) = ((MR_Box) (Goals_110));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_108));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word CanFail_56 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_10, 2))) & (MR_Integer) 1);
            MR_Word Cases0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 3))));
            MR_Word Cases_58;
            MR_Word GoalExpr_111;

            transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(Cases0_57, &Cases_58, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, (MR_Integer) 0, Changed_9);
            {
              GoalExpr_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_111, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_111, 1) = ((MR_Box) (Var_55));
              MR_hl_field(3, GoalExpr_111, 2) = (MR_Box) ((MR_Unsigned) (CanFail_56));
              MR_hl_field(3, GoalExpr_111, 3) = ((MR_Box) (Cases_58));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_111));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word SubGoal0_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Word TermVar_73;
            MR_Word Var_100;

            succeeded = ((((MR_tag((MR_Word) Reason_71)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_71, 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              TermVar_73 = ((MR_Word) ((MR_hl_field(3, Reason_71, 1))));
              Var_100 = ((MR_Unsigned) ((MR_hl_field(3, Reason_71, 2))) & (MR_Integer) 3);
              succeeded = (Var_100 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              MR_Word UnusedVars_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_76, 3))));

              succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), ((MR_Box) (TermVar_73)), UnusedVars_114);
              if (succeeded)
              {
                *Goal_7 = hlds__make_goal__true_goal_0_f_0();
                *Changed_9 = (MR_Integer) 0;
              }
              else
              {
                *Goal_7 = Goal0_6;
                *Changed_9 = (MR_Integer) 0;
              }
              *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
            }
            else
            {
              MR_Word SubGoal_74;
              MR_Word GoalExpr_115;

              transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(SubGoal0_72, &SubGoal_74, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, Changed_9);
              {
                GoalExpr_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_115, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_115, 1) = ((MR_Box) (Reason_71));
                MR_hl_field(3, GoalExpr_115, 2) = ((MR_Box) (SubGoal_74));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_7 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_115));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word Cond0_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Word Then0_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 3))));
            MR_Word Else0_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 4))));
            MR_Word Cond_65;
            MR_Word Changed1_66;
            MR_Word Then_67;
            MR_Word Changed2_68;
            MR_Word Else_69;
            MR_Word Changed3_70;
            MR_Word STATE_VARIABLE_Info_7_93;
            MR_Word STATE_VARIABLE_Info_8_94;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word GoalExpr_113;

            transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(Cond0_62, &Cond_65, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_7_93, &Changed1_66);
            transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(Then0_63, &Then_67, STATE_VARIABLE_Info_7_93, &STATE_VARIABLE_Info_8_94, &Changed2_68);
            transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(Else0_64, &Else_69, STATE_VARIABLE_Info_8_94, STATE_VARIABLE_Info_77, &Changed3_70);
            {
              Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_98, 0) = ((MR_Box) (Changed3_70));
              MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_97, 0) = ((MR_Box) (Changed2_68));
              MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_98));
            }
            {
              Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_96, 0) = ((MR_Box) (Changed1_66));
              MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_97));
            }
            *Changed_9 = libs__maybe_util__or_list_1_f_0(Var_96);
            {
              GoalExpr_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_113, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_113, 1) = ((MR_Box) (Vars_61));
              MR_hl_field(3, GoalExpr_113, 2) = ((MR_Box) (Cond_65));
              MR_hl_field(3, GoalExpr_113, 3) = ((MR_Box) (Then_67));
              MR_hl_field(3, GoalExpr_113, 4) = ((MR_Box) (Else_69));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_113));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.unused_args_fixup_goal_expr\'/5", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16,
  MR_Word * Changed_9)
{
  MR_Word Goal1_10;
  MR_Word GoalExpr1_11;
  MR_Word GoalInfo1_12;

  transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(Goal0_6, &Goal1_10, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16, Changed_9);
  GoalExpr1_11 = ((MR_Word) ((MR_hl_field(0, Goal1_10, 0))));
  GoalInfo1_12 = ((MR_Word) ((MR_hl_field(0, Goal1_10, 1))));
  switch (*Changed_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word UnusedVars_13 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_Info_16, 3))));
        MR_Word GoalInfo_14;
        MR_Word InstMap0_20;
        MR_Word InstMap_21;

        InstMap0_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_12);
        hlds__instmap__instmap_delta_delete_vars_3_p_0(UnusedVars_13, InstMap0_20, &InstMap_21);
        hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMap_21, GoalInfo1_12, &GoalInfo_14);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_7 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr1_11));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_14));
        }
      }
      break;
    case (MR_Integer) 0:
      *Goal_7 = Goal0_6;
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args__need_unify_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word UnusedVars_6,
  MR_Word Unify_7,
  MR_Word * Changed_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Unify_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LVar_13 = ((MR_Word) ((MR_hl_field(0, Unify_7, 0))));

        succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), ((MR_Box) (LVar_13)), UnusedVars_6);
        succeeded = !(succeeded);
        if (succeeded)
        {
          *Changed_8 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_21 = ((MR_Word) ((MR_hl_field(1, Unify_7, 2))));
        MR_Word ArgModes_22 = ((MR_Word) ((MR_hl_field(1, Unify_7, 3))));
        MR_Word CanFail_23 = ((((MR_Unsigned) ((MR_hl_field(1, Unify_7, 4))) >> 1)) & (MR_Integer) 1);
        MR_Word LVar_31 = ((MR_Word) ((MR_hl_field(1, Unify_7, 0))));

        succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), ((MR_Box) (LVar_31)), UnusedVars_6);
        succeeded = !(succeeded);
        if (succeeded)
          switch (CanFail_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *Changed_8 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              succeeded = transform_hlds__unused_args__check_deconstruct_args_6_p_0(ModuleInfo_5, UnusedVars_6, ArgVars_21, ArgModes_22, (MR_Integer) 0, Changed_8);
              break;
          }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Target_11 = ((MR_Word) ((MR_hl_field(2, Unify_7, 0))));

        succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), ((MR_Box) (Target_11)), UnusedVars_6);
        succeeded = !(succeeded);
        if (succeeded)
        {
          *Changed_8 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unify_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Changed_8 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.need_unify\'/4", (MR_String) "complicated unify");
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__check_deconstruct_args_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word UnusedVars_8,
  MR_Word Vars_9,
  MR_Word ArgModes_10,
  MR_Word STATE_VARIABLE_SomeUsed_0_26,
  MR_Word * Changed_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((Vars_9 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((ArgModes_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        succeeded = (STATE_VARIABLE_SomeUsed_0_26 == (MR_Integer) 1);
        if (succeeded)
        {
          *Changed_12 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.check_deconstruct_args\'/6", (MR_String) "mismatched lists");
        succeeded = MR_TRUE;
      }
    else
    {
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, Vars_9, 1))));
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, Vars_9, 0))));

      if ((ArgModes_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.check_deconstruct_args\'/6", (MR_String) "mismatched lists");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word HeadArgMode_19 = ((MR_Word) ((MR_hl_field(1, ArgModes_10, 0))));
        MR_Word TailArgModes_20 = ((MR_Word) ((MR_hl_field(1, ArgModes_10, 1))));
        MR_Word TypeInfo_33_33;
        MR_Word InitX_21 = ((MR_Word) ((MR_hl_field(0, HeadArgMode_19, 0))));
        MR_Word InitY_23 = ((MR_Word) ((MR_hl_field(0, HeadArgMode_19, 2))));
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (InitX_21));
          MR_hl_field(0, Var_31, 1) = ((MR_Box) (InitY_23));
        }
        succeeded = check_hlds__mode_test__mode_is_output_2_p_0(ModuleInfo_7, Var_31);
        if (succeeded)
        {
          TypeInfo_33_33 = (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]);
          succeeded = mercury__list__member_2_p_0(TypeInfo_33_33, ((MR_Box) (Var_35)), UnusedVars_8);
        }
        if (succeeded)
        {
          MR_Word Var_25;

          succeeded = transform_hlds__unused_args__check_deconstruct_args_6_p_0(ModuleInfo_7, UnusedVars_8, Var_34, TailArgModes_20, STATE_VARIABLE_SomeUsed_0_26, &Var_25);
          if (succeeded)
          {
            *Changed_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Word next_value_of_Vars_9 = Var_34;
          MR_Word next_value_of_ArgModes_10 = TailArgModes_20;

          // direct tailcall eliminated
          ;
          Vars_9 = next_value_of_Vars_9;
          ArgModes_10 = next_value_of_ArgModes_10;
          STATE_VARIABLE_SomeUsed_0_26 = (MR_Integer) 1;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__make_intermod_proc_10_p_0(
  MR_Word PredId_11,
  MR_Word NewPredId_12,
  MR_Integer ProcId_13,
  MR_String NewPredName_14,
  MR_Word OrigPredInfo_15,
  MR_Word OrigProcInfo_16,
  MR_Word UnusedArgs_17,
  MR_Word UnusedArgs2_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36)
{
  MR_Word ExtraPredInfo0_20;
  MR_Word PredModuleName_21;
  MR_Word ExtraProc0_22;
  MR_Word HeadVars0_23;
  MR_Word ArgModes0_24;
  MR_Word IntermodHeadVars_25;
  MR_Word IntermodArgModes_26;
  MR_Word ExtraProc1_27;
  MR_Word ExtraProc_28;
  MR_Word ExtraProcs0_29;
  MR_Word ExtraProcs_30;
  MR_Word ExtraPredInfo_31;
  MR_Word PredTable0_32;
  MR_Word PredTable_34;
  MR_Word Var_38;
  MR_Word HeadVars_46;
  MR_Word Goal0_47;
  MR_Word GoalInfo0_49;
  MR_Word Determinism_50;
  MR_Word GoalInfo1_51;
  MR_Word VarTable0_52;
  MR_Word NonLocals_53;
  MR_Word HeadVarEntries_54;
  MR_Word VarTable1_55;
  MR_Word RttiVarMaps0_56;
  MR_Word NewHeadVars_57;
  MR_Word GoalExpr_58;
  MR_Word Goal1_59;
  MR_Word Goal_61;
  MR_Word VarTable_62;
  MR_Word RttiVarMaps_63;
  MR_Word Var_67;
  MR_Word Var_69;
  MR_Word STATE_VARIABLE_OldProc_1_70;
  MR_Word STATE_VARIABLE_OldProc_2_71;
  MR_Word Var_60;
  MR_Word Var_33;

  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (PredId_11));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (ProcId_13));
  }
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(UnusedArgs2_18, (MR_Word) (((MR_Box) ((MR_Unsigned) 12U))), Var_38, OrigPredInfo_15, &ExtraPredInfo0_20);
  PredModuleName_21 = hlds__hlds_pred__pred_info_module_1_f_0(OrigPredInfo_15);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(OrigProcInfo_16, &HeadVars_46);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(OrigProcInfo_16, &Goal0_47);
  GoalInfo0_49 = ((MR_Word) ((MR_hl_field(0, Goal0_47, 1))));
  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(OrigProcInfo_16, &Determinism_50);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Determinism_50, GoalInfo0_49, &GoalInfo1_51);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(OrigProcInfo_16, &VarTable0_52);
  mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), HeadVars_46, &NonLocals_53);
  parse_tree__var_table__lookup_var_entries_3_p_0(VarTable0_52, HeadVars_46, &HeadVarEntries_54);
  parse_tree__var_table__var_table_from_corresponding_lists_3_p_0(HeadVars_46, HeadVarEntries_54, &VarTable1_55);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(OrigProcInfo_16, &RttiVarMaps0_56);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs_17, HeadVars_46, &NewHeadVars_57);
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (PredModuleName_21));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (NewPredName_14));
  }
  {
    GoalExpr_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr_58, 0) = ((MR_Box) (NewPredId_12));
    MR_hl_field(2, GoalExpr_58, 1) = ((MR_Box) (ProcId_13));
    MR_hl_field(2, GoalExpr_58, 2) = ((MR_Box) (NewHeadVars_57));
    MR_hl_field(2, GoalExpr_58, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, GoalExpr_58, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr_58, 5) = ((MR_Box) (Var_67));
  }
  {
    Goal1_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal1_59, 0) = ((MR_Box) (GoalExpr_58));
    MR_hl_field(0, Goal1_59, 1) = ((MR_Box) (GoalInfo1_51));
  }
  Var_69 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_53);
  hlds__quantification__implicitly_quantify_goal_general_9_p_0((MR_Integer) 1, Var_69, &Var_60, Goal1_59, &Goal_61, VarTable1_55, &VarTable_62, RttiVarMaps0_56, &RttiVarMaps_63);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_61, OrigProcInfo_16, &STATE_VARIABLE_OldProc_1_70);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_62, STATE_VARIABLE_OldProc_1_70, &STATE_VARIABLE_OldProc_2_71);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_63, STATE_VARIABLE_OldProc_2_71, &ExtraProc0_22);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(OrigProcInfo_16, &HeadVars0_23);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(OrigProcInfo_16, &ArgModes0_24);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs2_18, HeadVars0_23, &IntermodHeadVars_25);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs2_18, ArgModes0_24, &IntermodArgModes_26);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(IntermodHeadVars_25, ExtraProc0_22, &ExtraProc1_27);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(IntermodArgModes_26, ExtraProc1_27, &ExtraProc_28);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ExtraPredInfo0_20, &ExtraProcs0_29);
  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_13)), ((MR_Box) (ExtraProc_28)), ExtraProcs0_29, &ExtraProcs_30);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ExtraProcs_30, ExtraPredInfo0_20, &ExtraPredInfo_31);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &PredTable0_32);
  hlds__pred_table__predicate_table_insert_4_p_0(ExtraPredInfo_31, &Var_33, PredTable0_32, &PredTable_34);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_34, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36);
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_36;

  transform_hlds__unused_args__make_intermod_proc_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) ((MR_hl_field(0, closure, 9)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_36);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_36));
}

static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = transform_hlds__unused_args__get_unused_args_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__970__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_56;

  conv1_LambdaHeadVar__2_56 = transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__963__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_56));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(
  MR_Word UnusedArgInfo_7,
  MR_Word OrigPredProcId_8,
  MR_Word STATE_VARIABLE_NewProcMap_0_48,
  MR_Word * STATE_VARIABLE_NewProcMap_49,
  MR_Word STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * STATE_VARIABLE_ModuleInfo_51)
{
  MR_bool succeeded;
  MR_Word UnusedArgs_11;
  MR_Word OrigPredInfo_12;
  MR_Word OrigProcInfo_13;
  MR_Word PredModuleName_14;
  MR_Word OrigPredId_15;
  MR_Integer ProcId_16;
  MR_Word Globals_17;
  MR_Word Intermod_18;
  MR_Word IntermodResultsTriples_22;
  MR_Word IntermodOldArgLists_30;
  MR_Box conv0_UnusedArgs_11;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), UnusedArgInfo_7, ((MR_Box) (OrigPredProcId_8)), &conv0_UnusedArgs_11);
  UnusedArgs_11 = ((MR_Word) (conv0_UnusedArgs_11));
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_50, OrigPredProcId_8, &OrigPredInfo_12, &OrigProcInfo_13);
  PredModuleName_14 = hlds__hlds_pred__pred_info_module_1_f_0(OrigPredInfo_12);
  OrigPredId_15 = ((MR_Word) ((MR_hl_field(0, OrigPredProcId_8, 0))));
  ProcId_16 = ((MR_Integer) ((MR_hl_field(0, OrigPredProcId_8, 1))));
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_50, &Globals_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 435, &Intermod_18);
  switch (Intermod_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        IntermodResultsTriples_22 = (MR_Word) ((MR_Unsigned) 0U);
        IntermodOldArgLists_30 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word AnalysisInfo0_19;
        MR_Word ModuleId_20;
        MR_Word FuncId_21;
        MR_Word IntermodOldAnswers_23;
        MR_Word PredFormArity_25;
        MR_Word FuncInfo_26;
        MR_Word Answer_27;
        MR_Word FilterUnused_28;
        MR_Word Var_60;

        hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_50, &AnalysisInfo0_19);
        transform_hlds__mmc_analysis__pred_info_proc_id_to_module_name_func_id_4_p_0(OrigPredInfo_12, ProcId_16, &ModuleId_20, &FuncId_21);
        analysis__operations__lookup_results_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_4[0]), AnalysisInfo0_19, ModuleId_20, FuncId_21, &IntermodResultsTriples_22);
        IntermodOldAnswers_23 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__unused_args_scalar_common_2[5]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[9]), IntermodResultsTriples_22);
        hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(OrigPredInfo_12, &PredFormArity_25);
        FuncInfo_26 = (MR_Word) (PredFormArity_25);
        Answer_27 = (MR_Word) (UnusedArgs_11);
        {
          FilterUnused_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FilterUnused_28, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[3]));
          MR_hl_field(0, FilterUnused_28, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_2));
          MR_hl_field(0, FilterUnused_28, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, FilterUnused_28, 3) = ((MR_Box) (FuncInfo_26));
          MR_hl_field(0, FilterUnused_28, 4) = ((MR_Box) (Answer_27));
        }
        Var_60 = mercury__list__filter_2_f_0((MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0), FilterUnused_28, IntermodOldAnswers_23);
        IntermodOldArgLists_30 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[10]), Var_60);
      }
      break;
  }
  if ((UnusedArgs_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_NewProcMap_49 = STATE_VARIABLE_NewProcMap_0_48;
    *STATE_VARIABLE_ModuleInfo_51 = STATE_VARIABLE_ModuleInfo_0_50;
  }
  else
  {
    MR_Word PredStatus0_33;
    MR_Word PredStatus_36;
    MR_Word NewPredInfo0_37;
    MR_String NewPredName_38;
    MR_Word NewProcs0_39;
    MR_Word NewProcs_40;
    MR_Word NewPredInfo_41;
    MR_Word PredTable0_42;
    MR_Word NewPredId_43;
    MR_Word PredTable_44;
    MR_Word PredSymName_45;
    MR_Word OrigToNew_46;
    MR_Word ForwardingProcInfo_47;
    MR_Word STATE_VARIABLE_ModuleInfo_1_65;
    MR_Word STATE_VARIABLE_ModuleInfo_2_67;
    MR_Word Var_68;
    MR_Word HeadVars_89;
    MR_Word Goal0_90;
    MR_Word GoalInfo0_92;
    MR_Word Determinism_93;
    MR_Word GoalInfo1_94;
    MR_Word VarTable0_95;
    MR_Word NonLocals_96;
    MR_Word HeadVarEntries_97;
    MR_Word VarTable1_98;
    MR_Word RttiVarMaps0_99;
    MR_Word NewHeadVars_100;
    MR_Word GoalExpr_101;
    MR_Word Goal1_102;
    MR_Word Goal_104;
    MR_Word VarTable_105;
    MR_Word RttiVarMaps_106;
    MR_Word Var_112;
    MR_Word STATE_VARIABLE_OldProc_1_113;
    MR_Word STATE_VARIABLE_OldProc_2_114;
    MR_Word Var_61;
    MR_Word Var_103;
    MR_Box conv4_STATE_VARIABLE_ModuleInfo_51;

    hlds__hlds_pred__pred_info_get_status_2_p_0(OrigPredInfo_12, &PredStatus0_33);
    succeeded = (IntermodResultsTriples_22 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (IntermodOldArgLists_30 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_61 = (MR_Word) (PredStatus0_33);
        succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      PredStatus_36 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
    else
    {
      MR_Word Var_63;

      Var_63 = hlds__status__pred_status_is_exported_1_f_0(PredStatus0_33);
      succeeded = (Var_63 == (MR_Integer) 1);
      if (succeeded)
        PredStatus_36 = PredStatus0_33;
      else
        PredStatus_36 = (MR_Word) (((MR_Box) ((MR_Unsigned) 32U)));
    }
    transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(UnusedArgs_11, PredStatus_36, OrigPredProcId_8, OrigPredInfo_12, &NewPredInfo0_37);
    NewPredName_38 = hlds__hlds_pred__pred_info_name_1_f_0(NewPredInfo0_37);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(NewPredInfo0_37, &NewProcs0_39);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_16)), ((MR_Box) (OrigProcInfo_13)), NewProcs0_39, &NewProcs_40);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(NewProcs_40, NewPredInfo0_37, &NewPredInfo_41);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_50, &PredTable0_42);
    hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo_41, &NewPredId_43, PredTable0_42, &PredTable_44);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_44, STATE_VARIABLE_ModuleInfo_0_50, &STATE_VARIABLE_ModuleInfo_1_65);
    {
      PredSymName_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PredSymName_45, 0) = ((MR_Box) (PredModuleName_14));
      MR_hl_field(1, PredSymName_45, 1) = ((MR_Box) (NewPredName_38));
    }
    {
      OrigToNew_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OrigToNew_46, 0) = ((MR_Box) (NewPredId_43));
      MR_hl_field(0, OrigToNew_46, 1) = ((MR_Box) (ProcId_16));
      MR_hl_field(0, OrigToNew_46, 2) = ((MR_Box) (PredSymName_45));
      MR_hl_field(0, OrigToNew_46, 3) = ((MR_Box) (UnusedArgs_11));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0), ((MR_Box) (OrigPredProcId_8)), ((MR_Box) (OrigToNew_46)), STATE_VARIABLE_NewProcMap_0_48, STATE_VARIABLE_NewProcMap_49);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(OrigProcInfo_13, &HeadVars_89);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(OrigProcInfo_13, &Goal0_90);
    GoalInfo0_92 = ((MR_Word) ((MR_hl_field(0, Goal0_90, 1))));
    hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(OrigProcInfo_13, &Determinism_93);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0(Determinism_93, GoalInfo0_92, &GoalInfo1_94);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(OrigProcInfo_13, &VarTable0_95);
    mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), HeadVars_89, &NonLocals_96);
    parse_tree__var_table__lookup_var_entries_3_p_0(VarTable0_95, HeadVars_89, &HeadVarEntries_97);
    parse_tree__var_table__var_table_from_corresponding_lists_3_p_0(HeadVars_89, HeadVarEntries_97, &VarTable1_98);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(OrigProcInfo_13, &RttiVarMaps0_99);
    transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs_11, HeadVars_89, &NewHeadVars_100);
    {
      GoalExpr_101 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, GoalExpr_101, 0) = ((MR_Box) (NewPredId_43));
      MR_hl_field(2, GoalExpr_101, 1) = ((MR_Box) (ProcId_16));
      MR_hl_field(2, GoalExpr_101, 2) = ((MR_Box) (NewHeadVars_100));
      MR_hl_field(2, GoalExpr_101, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(2, GoalExpr_101, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, GoalExpr_101, 5) = ((MR_Box) (PredSymName_45));
    }
    {
      Goal1_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal1_102, 0) = ((MR_Box) (GoalExpr_101));
      MR_hl_field(0, Goal1_102, 1) = ((MR_Box) (GoalInfo1_94));
    }
    Var_112 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_96);
    hlds__quantification__implicitly_quantify_goal_general_9_p_0((MR_Integer) 1, Var_112, &Var_103, Goal1_102, &Goal_104, VarTable1_98, &VarTable_105, RttiVarMaps0_99, &RttiVarMaps_106);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_104, OrigProcInfo_13, &STATE_VARIABLE_OldProc_1_113);
    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_105, STATE_VARIABLE_OldProc_1_113, &STATE_VARIABLE_OldProc_2_114);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_106, STATE_VARIABLE_OldProc_2_114, &ForwardingProcInfo_47);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(OrigPredId_15, ProcId_16, OrigPredInfo_12, ForwardingProcInfo_47, STATE_VARIABLE_ModuleInfo_1_65, &STATE_VARIABLE_ModuleInfo_2_67);
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_68, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_10[0]));
      MR_hl_field(0, Var_68, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_4));
      MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(0, Var_68, 3) = ((MR_Box) (OrigPredId_15));
      MR_hl_field(0, Var_68, 4) = ((MR_Box) (NewPredId_43));
      MR_hl_field(0, Var_68, 5) = ((MR_Box) (ProcId_16));
      MR_hl_field(0, Var_68, 6) = ((MR_Box) (NewPredName_38));
      MR_hl_field(0, Var_68, 7) = ((MR_Box) (OrigPredInfo_12));
      MR_hl_field(0, Var_68, 8) = ((MR_Box) (OrigProcInfo_13));
      MR_hl_field(0, Var_68, 9) = ((MR_Box) (UnusedArgs_11));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_68, IntermodOldArgLists_30, ((MR_Box) (STATE_VARIABLE_ModuleInfo_2_67)), &conv4_STATE_VARIABLE_ModuleInfo_51);
    *STATE_VARIABLE_ModuleInfo_51 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_51));
  }
}

static void MR_CALL 
transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(
  MR_Word RttiVarMaps_4,
  MR_Word TVar_5,
  MR_Word * TypeInfoVar_6)
{
  MR_Word Locn_7;

  hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_4, TVar_5, &Locn_7);
  hlds__hlds_rtti__type_info_locn_var_2_p_0(Locn_7, TypeInfoVar_6);
}

static void MR_CALL 
transform_hlds__unused_args__init_global_var_usage_map_entry_for_proc_12_p_0(
  MR_Word PredId_13,
  MR_Word PredInfo_14,
  MR_Integer ProcId_15,
  MR_Word ProcInfo_16,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_31,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_32,
  MR_Word STATE_VARIABLE_FixpointPredProcIds_0_33,
  MR_Word * STATE_VARIABLE_FixpointPredProcIds_34,
  MR_Word STATE_VARIABLE_OptProcs_0_35,
  MR_Word * STATE_VARIABLE_OptProcs_36,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38)
{
  MR_bool succeeded;
  MR_Word Globals_21;
  MR_Word Intermod_22;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_37, &Globals_21);
  libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 435, &Intermod_22);
  succeeded = (Intermod_22 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(PredInfo_14);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_14);
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
  {
    transform_hlds__unused_args__try_to_look_up_global_var_usage_map_entry_for_proc_10_p_0(PredId_13, PredInfo_14, ProcId_15, ProcInfo_16, STATE_VARIABLE_GlobalVarUsageMap_0_31, STATE_VARIABLE_GlobalVarUsageMap_32, STATE_VARIABLE_OptProcs_0_35, STATE_VARIABLE_OptProcs_36, STATE_VARIABLE_ModuleInfo_0_37, STATE_VARIABLE_ModuleInfo_38);
    *STATE_VARIABLE_FixpointPredProcIds_34 = STATE_VARIABLE_FixpointPredProcIds_0_33;
  }
  else
  {
    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_14);
    if (!(succeeded))
    {
      {
        MR_Integer Var_61;

        succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo_14);
        if (succeeded)
        {
          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_61);
          succeeded = (ProcId_15 == Var_61);
        }
      }
      if (!(succeeded))
      {
        {
          MR_Word EvalMethod_52;

          hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_16, &EvalMethod_52);
          succeeded = (EvalMethod_52 != (MR_Word) ((MR_Unsigned) 0U));
        }
        if (!(succeeded))
        {
          MR_Word MaybeDeclaredDetism_53;
          MR_Word Goal_54;
          MR_Word GoalInfo_56;
          MR_Word ActualDetism_57;

          hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_16, &MaybeDeclaredDetism_53);
          hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_16, &Goal_54);
          GoalInfo_56 = ((MR_Word) ((MR_hl_field(0, Goal_54, 1))));
          ActualDetism_57 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_56);
          {
            MR_Word DeclaredDetism_58;

            succeeded = (MaybeDeclaredDetism_53 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              DeclaredDetism_58 = ((MR_Word) ((MR_hl_field(1, MaybeDeclaredDetism_53, 0))));
              succeeded = (DeclaredDetism_58 != ActualDetism_57);
            }
          }
          if (!(succeeded))
          {
            MR_Word SolnCount_60;
            MR_Word _CanFail_59;

            parse_tree__prog_data__determinism_components_3_p_0(ActualDetism_57, &_CanFail_59, &SolnCount_60);
            succeeded = (SolnCount_60 == (MR_Integer) 0);
          }
        }
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_FixpointPredProcIds_34 = STATE_VARIABLE_FixpointPredProcIds_0_33;
      *STATE_VARIABLE_GlobalVarUsageMap_32 = STATE_VARIABLE_GlobalVarUsageMap_0_31;
    }
    else
    {
      MR_Word VarTable_23;
      MR_Word Vars_24;
      MR_Word TypeInfoLiveness_26;
      MR_Word PredProcId_27;
      MR_Word Info_29;
      MR_Word Goal_30;
      MR_Word STATE_VARIABLE_LocalVarUsageMap_1_43;
      MR_Word STATE_VARIABLE_LocalVarUsageMap_2_44;
      MR_Word STATE_VARIABLE_LocalVarUsageMap_3_45;
      MR_Word STATE_VARIABLE_LocalVarUsageMap_4_46;
      MR_Word STATE_VARIABLE_LocalVarUsageMap_5_47;
      MR_Word ChangedInstHeadVars_63;

      hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_16, &VarTable_23);
      parse_tree__var_table__var_table_vars_2_p_0(VarTable_23, &Vars_24);
      mercury__map__init_1_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), &STATE_VARIABLE_LocalVarUsageMap_1_43);
      transform_hlds__unused_args__set_vars_to_unaliased_unused_3_p_0(Vars_24, STATE_VARIABLE_LocalVarUsageMap_1_43, &STATE_VARIABLE_LocalVarUsageMap_2_44);
      hlds__hlds_proc_util__proc_info_instantiated_head_vars_3_p_0(STATE_VARIABLE_ModuleInfo_0_37, ProcInfo_16, &ChangedInstHeadVars_63);
      mercury__map__delete_list_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ChangedInstHeadVars_63, STATE_VARIABLE_LocalVarUsageMap_2_44, &STATE_VARIABLE_LocalVarUsageMap_3_45);
      hlds__hlds_pred__proc_interface_should_use_typeinfo_liveness_4_p_0(PredInfo_14, ProcId_15, Globals_21, &TypeInfoLiveness_26);
      {
        PredProcId_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredProcId_27, 0) = ((MR_Box) (PredId_13));
        MR_hl_field(0, PredProcId_27, 1) = ((MR_Box) (ProcId_15));
      }
      switch (TypeInfoLiveness_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_LocalVarUsageMap_4_46 = STATE_VARIABLE_LocalVarUsageMap_3_45;
          break;
        case (MR_Integer) 1:
          {
            MR_Word RttiVarMaps_28;

            hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_16, &RttiVarMaps_28);
            transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(PredProcId_27, VarTable_23, RttiVarMaps_28, Vars_24, STATE_VARIABLE_LocalVarUsageMap_3_45, &STATE_VARIABLE_LocalVarUsageMap_4_46);
          }
          break;
      }
      {
        Info_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Info_29, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_37));
        MR_hl_field(0, Info_29, 1) = ((MR_Box) (VarTable_23));
      }
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_16, &Goal_30);
      transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(Info_29, Goal_30, STATE_VARIABLE_LocalVarUsageMap_4_46, &STATE_VARIABLE_LocalVarUsageMap_5_47);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), ((MR_Box) (PredProcId_27)), ((MR_Box) (STATE_VARIABLE_LocalVarUsageMap_5_47)), STATE_VARIABLE_GlobalVarUsageMap_0_31, STATE_VARIABLE_GlobalVarUsageMap_32);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_FixpointPredProcIds_34 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PredProcId_27));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_FixpointPredProcIds_0_33));
      }
    }
    *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
    *STATE_VARIABLE_OptProcs_36 = STATE_VARIABLE_OptProcs_0_35;
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_65;

  succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__589__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_65);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_65));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(
  MR_Word Info_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_57,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_58)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_6, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_53 = (MR_Word) ((MR_Word) (GoalExpr_8));
          MR_Word next_value_of_Goal_6 = SubGoal_53;

          // direct tailcall eliminated
          ;
          Goal_6 = next_value_of_Goal_6;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_10 = ((MR_Word) ((MR_hl_field(1, GoalExpr_8, 0))));
          MR_Word RHS_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr_8, 1))));
          MR_Word Unify_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr_8, 3))));

          transform_hlds__unused_args__unused_args_traverse_unify_6_p_0(Info_5, LHS_10, RHS_11, Unify_13, STATE_VARIABLE_LocalVarUsageMap_0_57, STATE_VARIABLE_LocalVarUsageMap_58);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(2, GoalExpr_8, 0))));
          MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_8, 1))));
          MR_Word ArgVars_17 = ((MR_Word) ((MR_hl_field(2, GoalExpr_8, 2))));
          MR_Word ModuleInfo_21 = ((MR_Word) ((MR_hl_field(0, Info_5, 0))));
          MR_Word ProcInfo_23;
          MR_Word HeadVars_24;
          MR_Word Var_60;
          MR_Word Var_22;

          hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_21, PredId_15, ProcId_16, &Var_22, &ProcInfo_23);
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_23, &HeadVars_24);
          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_60, 0) = ((MR_Box) (PredId_15));
            MR_hl_field(0, Var_60, 1) = ((MR_Box) (ProcId_16));
          }
          transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(Var_60, ArgVars_17, HeadVars_24, STATE_VARIABLE_LocalVarUsageMap_0_57, STATE_VARIABLE_LocalVarUsageMap_58);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_8, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 1))));
              MR_Word CallArgVars_29;
              MR_Word STATE_VARIABLE_LocalVarUsageMap_3_62;
              MR_Word ArgVars_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));

              hlds__goal_vars__vars_in_generic_call_2_p_0(GenericCall_25, &CallArgVars_29);
              mercury__map__delete_list_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), CallArgVars_29, STATE_VARIABLE_LocalVarUsageMap_0_57, &STATE_VARIABLE_LocalVarUsageMap_3_62);
              mercury__map__delete_list_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ArgVars_80, STATE_VARIABLE_LocalVarUsageMap_3_62, STATE_VARIABLE_LocalVarUsageMap_58);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 4))));
              MR_Word ExtraArgs_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 5))));
              MR_Word UsedVars_44;
              MR_Word Var_66;

              Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Args_33, ExtraArgs_34);
              mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[8]), Var_66, &UsedVars_44);
              mercury__map__delete_list_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), UsedVars_44, STATE_VARIABLE_LocalVarUsageMap_0_57, STATE_VARIABLE_LocalVarUsageMap_58);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));

              transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(Info_5, Goals_46, STATE_VARIABLE_LocalVarUsageMap_0_57, STATE_VARIABLE_LocalVarUsageMap_58);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 1))));

              transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(Info_5, Goals_83, STATE_VARIABLE_LocalVarUsageMap_0_57, STATE_VARIABLE_LocalVarUsageMap_58);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 3))));
              MR_Word STATE_VARIABLE_LocalVarUsageMap_8_70;
              MR_Word Var_84 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 1))));

              mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Var_84)), STATE_VARIABLE_LocalVarUsageMap_0_57, &STATE_VARIABLE_LocalVarUsageMap_8_70);
              transform_hlds__unused_args__unused_args_traverse_cases_4_p_0(Info_5, Cases_48, STATE_VARIABLE_LocalVarUsageMap_8_70, STATE_VARIABLE_LocalVarUsageMap_58);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 1))));
              MR_Word SubGoal_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
              MR_Word Var_76;

              succeeded = ((((MR_tag((MR_Word) Reason_54)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_54, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_76 = ((MR_Unsigned) ((MR_hl_field(3, Reason_54, 2))) & (MR_Integer) 3);
                succeeded = (Var_76 == (MR_Integer) 1);
              }
              if (succeeded)
                *STATE_VARIABLE_LocalVarUsageMap_58 = STATE_VARIABLE_LocalVarUsageMap_0_57;
              else
              {
                MR_Word next_value_of_Goal_6 = SubGoal_85;

                // direct tailcall eliminated
                ;
                Goal_6 = next_value_of_Goal_6;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
              MR_Word Then_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 3))));
              MR_Word Else_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 4))));
              MR_Word STATE_VARIABLE_LocalVarUsageMap_10_72;
              MR_Word STATE_VARIABLE_LocalVarUsageMap_11_73;
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_57;

              transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(Info_5, Cond_50, STATE_VARIABLE_LocalVarUsageMap_0_57, &STATE_VARIABLE_LocalVarUsageMap_10_72);
              transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(Info_5, Then_51, STATE_VARIABLE_LocalVarUsageMap_10_72, &STATE_VARIABLE_LocalVarUsageMap_11_73);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = Else_52;
              next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_57 = STATE_VARIABLE_LocalVarUsageMap_11_73;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_LocalVarUsageMap_0_57 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_57;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_cases_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_3,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LocalVarUsageMap_4 = STATE_VARIABLE_LocalVarUsageMap_0_3;
    else
    {
      MR_Word Case_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(0, Case_10, 2))));
      MR_Word STATE_VARIABLE_LocalVarUsageMap_1_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3;

      transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(Info_1, Goal_15, STATE_VARIABLE_LocalVarUsageMap_0_3, &STATE_VARIABLE_LocalVarUsageMap_1_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cases_11;
      next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3 = STATE_VARIABLE_LocalVarUsageMap_1_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_LocalVarUsageMap_0_3 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_3,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LocalVarUsageMap_4 = STATE_VARIABLE_LocalVarUsageMap_0_3;
    else
    {
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_LocalVarUsageMap_1_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3;

      transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(Info_1, Goal_10, STATE_VARIABLE_LocalVarUsageMap_0_3, &STATE_VARIABLE_LocalVarUsageMap_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Goals_11;
      next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3 = STATE_VARIABLE_LocalVarUsageMap_1_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_LocalVarUsageMap_0_3 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(
  MR_Word PredProcId_6,
  MR_Word LocalArguments_7,
  MR_Word HeadVarIds_8,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_18,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((LocalArguments_7 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVarIds_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_LocalVarUsageMap_19 = STATE_VARIABLE_LocalVarUsageMap_0_18;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.add_pred_call_arg_dep\'/5", (MR_String) "invalid call");
          return;
        }
    else
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, LocalArguments_7, 1))));
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, LocalArguments_7, 0))));

      if ((HeadVarIds_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.add_pred_call_arg_dep\'/5", (MR_String) "invalid call");
          return;
        }
      else
      {
        MR_Word HeadVar_16 = ((MR_Word) ((MR_hl_field(1, HeadVarIds_8, 0))));
        MR_Word HeadVars_17 = ((MR_Word) ((MR_hl_field(1, HeadVarIds_8, 1))));
        MR_Word STATE_VARIABLE_LocalVarUsageMap_1_24;
        MR_Word VarUsage0_27;
        MR_Box conv0_VarUsage0_27;
        MR_Word next_value_of_LocalArguments_7;
        MR_Word next_value_of_HeadVarIds_8;
        MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_18;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), STATE_VARIABLE_LocalVarUsageMap_0_18, ((MR_Box) (Var_26)), &conv0_VarUsage0_27);
        if (succeeded)
        {
          VarUsage0_27 = ((MR_Word) (conv0_VarUsage0_27));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word AliasVars_28 = ((MR_Word) ((MR_hl_field(0, VarUsage0_27, 0))));
          MR_Word AliasArgs0_29 = ((MR_Word) ((MR_hl_field(0, VarUsage0_27, 1))));
          MR_Word AliasArgs_30;
          MR_Word VarUsage_31;
          MR_Word Var_32;

          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_32, 0) = ((MR_Box) (PredProcId_6));
            MR_hl_field(0, Var_32, 1) = ((MR_Box) (HeadVar_16));
          }
          mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0), ((MR_Box) (Var_32)), AliasArgs0_29, &AliasArgs_30);
          {
            VarUsage_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, VarUsage_31, 0) = ((MR_Box) (AliasVars_28));
            MR_hl_field(0, VarUsage_31, 1) = ((MR_Box) (AliasArgs_30));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Var_26)), ((MR_Box) (VarUsage_31)), STATE_VARIABLE_LocalVarUsageMap_0_18, &STATE_VARIABLE_LocalVarUsageMap_1_24);
        }
        else
          STATE_VARIABLE_LocalVarUsageMap_1_24 = STATE_VARIABLE_LocalVarUsageMap_0_18;
        // direct tailcall eliminated
        ;
        next_value_of_LocalArguments_7 = Var_25;
        next_value_of_HeadVarIds_8 = HeadVars_17;
        next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_18 = STATE_VARIABLE_LocalVarUsageMap_1_24;
        LocalArguments_7 = next_value_of_LocalArguments_7;
        HeadVarIds_8 = next_value_of_HeadVarIds_8;
        STATE_VARIABLE_LocalVarUsageMap_0_18 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_18;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_unify_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_unify__661__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_unify_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_unify__653__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_unify_6_p_0(
  MR_Word Info_7,
  MR_Word LHSVar_8,
  MR_Word RHS_9,
  MR_Word Unify_10,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_43,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_44)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Unify_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word CellVar_16 = ((MR_Word) ((MR_hl_field(0, Unify_10, 0))));
        MR_Word ArgVars_18 = ((MR_Word) ((MR_hl_field(0, Unify_10, 2))));
        MR_Word Var_51;

        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_51, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[3]));
          MR_hl_field(0, Var_51, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_unify_6_p_0_1));
          MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_51, 3) = ((MR_Box) (LHSVar_8));
          MR_hl_field(0, Var_51, 4) = ((MR_Box) (CellVar_16));
        }
        mercury__require__expect_3_p_0(Var_51, (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_unify\'/6", (MR_String) "LHSVar != CellVar");
        succeeded = mercury__map__contains_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), STATE_VARIABLE_LocalVarUsageMap_0_43, ((MR_Box) (CellVar_16)));
        succeeded = !(succeeded);
        if (succeeded)
          mercury__map__delete_list_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ArgVars_18, STATE_VARIABLE_LocalVarUsageMap_0_43, STATE_VARIABLE_LocalVarUsageMap_44);
        else
          transform_hlds__unused_args__add_construction_aliases_4_p_0(CellVar_16, ArgVars_18, STATE_VARIABLE_LocalVarUsageMap_0_43, STATE_VARIABLE_LocalVarUsageMap_44);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_24 = ((MR_Word) ((MR_hl_field(1, Unify_10, 3))));
        MR_Word CanFail_25 = ((((MR_Unsigned) ((MR_hl_field(1, Unify_10, 4))) >> 1)) & (MR_Integer) 1);
        MR_Word InputVars_27;
        MR_Word OutputVars_28;
        MR_Word Var_56;
        MR_Word STATE_VARIABLE_LocalVarUsageMap_7_59;
        MR_Word STATE_VARIABLE_LocalVarUsageMap_8_60;
        MR_Word CellVar_66 = ((MR_Word) ((MR_hl_field(1, Unify_10, 0))));
        MR_Word ArgVars_67 = ((MR_Word) ((MR_hl_field(1, Unify_10, 2))));
        MR_Word VarInf0_89;
        MR_Box conv1_VarInf0_89;

        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_56, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[3]));
          MR_hl_field(0, Var_56, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_unify_6_p_0_2));
          MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_56, 3) = ((MR_Box) (LHSVar_8));
          MR_hl_field(0, Var_56, 4) = ((MR_Box) (CellVar_66));
        }
        mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_unify\'/6", (MR_String) "LHSVar != CellVar");
        transform_hlds__unused_args__partition_deconstruct_args_5_p_0(Info_7, ArgVars_67, ArgModes_24, &InputVars_27, &OutputVars_28);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), STATE_VARIABLE_LocalVarUsageMap_0_43, ((MR_Box) (CellVar_66)), &conv1_VarInf0_89);
        if (succeeded)
        {
          VarInf0_89 = ((MR_Word) (conv1_VarInf0_89));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word AliasVars0_90 = ((MR_Word) ((MR_hl_field(0, VarInf0_89, 0))));
          MR_Word AliasArgs_91 = ((MR_Word) ((MR_hl_field(0, VarInf0_89, 1))));
          MR_Word AliasVars_92;
          MR_Word VarInf_93;

          mercury__set__insert_list_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), OutputVars_28, AliasVars0_90, &AliasVars_92);
          {
            VarInf_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, VarInf_93, 0) = ((MR_Box) (AliasVars_92));
            MR_hl_field(0, VarInf_93, 1) = ((MR_Box) (AliasArgs_91));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (CellVar_66)), ((MR_Box) (VarInf_93)), STATE_VARIABLE_LocalVarUsageMap_0_43, &STATE_VARIABLE_LocalVarUsageMap_7_59);
        }
        else
          STATE_VARIABLE_LocalVarUsageMap_7_59 = STATE_VARIABLE_LocalVarUsageMap_0_43;
        transform_hlds__unused_args__add_construction_aliases_4_p_0(CellVar_66, InputVars_27, STATE_VARIABLE_LocalVarUsageMap_7_59, &STATE_VARIABLE_LocalVarUsageMap_8_60);
        switch (CanFail_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (CellVar_66)), STATE_VARIABLE_LocalVarUsageMap_8_60, STATE_VARIABLE_LocalVarUsageMap_44);
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_LocalVarUsageMap_44 = STATE_VARIABLE_LocalVarUsageMap_8_60;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Target_14 = ((MR_Word) ((MR_hl_field(2, Unify_10, 0))));
        MR_Word Source_15 = ((MR_Word) ((MR_hl_field(2, Unify_10, 1))));

        succeeded = mercury__map__contains_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), STATE_VARIABLE_LocalVarUsageMap_0_43, ((MR_Box) (Target_14)));
        succeeded = !(succeeded);
        if (succeeded)
          mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Source_15)), STATE_VARIABLE_LocalVarUsageMap_0_43, STATE_VARIABLE_LocalVarUsageMap_44);
        else
        {
          MR_Word Var_48;
          MR_Word VarInf0_72;
          MR_Box conv0_VarInf0_72;

          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (Target_14));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), STATE_VARIABLE_LocalVarUsageMap_0_43, ((MR_Box) (Source_15)), &conv0_VarInf0_72);
          if (succeeded)
          {
            VarInf0_72 = ((MR_Word) (conv0_VarInf0_72));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word AliasVars0_73 = ((MR_Word) ((MR_hl_field(0, VarInf0_72, 0))));
            MR_Word AliasArgs_74 = ((MR_Word) ((MR_hl_field(0, VarInf0_72, 1))));
            MR_Word AliasVars_75;
            MR_Word VarInf_76;

            mercury__set__insert_list_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), Var_48, AliasVars0_73, &AliasVars_75);
            {
              VarInf_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, VarInf_76, 0) = ((MR_Box) (AliasVars_75));
              MR_hl_field(0, VarInf_76, 1) = ((MR_Box) (AliasArgs_74));
            }
            mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Source_15)), ((MR_Box) (VarInf_76)), STATE_VARIABLE_LocalVarUsageMap_0_43, STATE_VARIABLE_LocalVarUsageMap_44);
          }
          else
            *STATE_VARIABLE_LocalVarUsageMap_44 = STATE_VARIABLE_LocalVarUsageMap_0_43;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unify_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var1_12 = ((MR_Word) ((MR_hl_field(3, Unify_10, 1))));
            MR_Word Var2_13 = ((MR_Word) ((MR_hl_field(3, Unify_10, 2))));
            MR_Word STATE_VARIABLE_LocalVarUsageMap_1_45;

            mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Var1_12)), STATE_VARIABLE_LocalVarUsageMap_0_43, &STATE_VARIABLE_LocalVarUsageMap_1_45);
            mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Var2_13)), STATE_VARIABLE_LocalVarUsageMap_1_45, STATE_VARIABLE_LocalVarUsageMap_44);
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) RHS_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word RHSVar_32 = ((MR_Word) ((MR_hl_field(0, RHS_9, 0))));
                MR_Word STATE_VARIABLE_LocalVarUsageMap_10_62;

                mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (RHSVar_32)), STATE_VARIABLE_LocalVarUsageMap_0_43, &STATE_VARIABLE_LocalVarUsageMap_10_62);
                mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (LHSVar_8)), STATE_VARIABLE_LocalVarUsageMap_10_62, STATE_VARIABLE_LocalVarUsageMap_44);
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_unify\'/6", (MR_String) "complicated unifications should only be var-var");
                return;
              }
              break;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__add_construction_aliases_4_p_0(
  MR_Word AliasVar_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_3,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LocalVarUsageMap_4 = STATE_VARIABLE_LocalVarUsageMap_0_3;
    else
    {
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_LocalVarUsageMap_1_20;
      MR_Word VarInfo0_13;
      MR_Box conv0_VarInfo0_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), STATE_VARIABLE_LocalVarUsageMap_0_3, ((MR_Box) (Var_10)), &conv0_VarInfo0_13);
      if (succeeded)
      {
        VarInfo0_13 = ((MR_Word) (conv0_VarInfo0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word AliasVars0_14 = ((MR_Word) ((MR_hl_field(0, VarInfo0_13, 0))));
        MR_Word AliasArgs_15 = ((MR_Word) ((MR_hl_field(0, VarInfo0_13, 1))));
        MR_Word AliasVars_16;
        MR_Word VarInfo_17;

        mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), ((MR_Box) (AliasVar_1)), AliasVars0_14, &AliasVars_16);
        {
          VarInfo_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, VarInfo_17, 0) = ((MR_Box) (AliasVars_16));
          MR_hl_field(0, VarInfo_17, 1) = ((MR_Box) (AliasArgs_15));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Var_10)), ((MR_Box) (VarInfo_17)), STATE_VARIABLE_LocalVarUsageMap_0_3, &STATE_VARIABLE_LocalVarUsageMap_1_20);
      }
      else
        STATE_VARIABLE_LocalVarUsageMap_1_20 = STATE_VARIABLE_LocalVarUsageMap_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_11;
      next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3 = STATE_VARIABLE_LocalVarUsageMap_1_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_LocalVarUsageMap_0_3 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__partition_deconstruct_args_5_p_0(
  MR_Word Info_6,
  MR_Word Vars_7,
  MR_Word ArgModes_8,
  MR_Word * InputVars_9,
  MR_Word * OutputVars_10)
{
  MR_bool succeeded;

  if ((Vars_7 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((ArgModes_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *InputVars_9 = (MR_Word) ((MR_Unsigned) 0U);
      *OutputVars_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.partition_deconstruct_args\'/5", (MR_String) "mismatched lists");
        return;
      }
  else
  {
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, Vars_7, 1))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, Vars_7, 0))));

    if ((ArgModes_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.partition_deconstruct_args\'/5", (MR_String) "mismatched lists");
        return;
      }
    else
    {
      MR_Word HeadArgMode_17 = ((MR_Word) ((MR_hl_field(1, ArgModes_8, 0))));
      MR_Word TailArgModes_18 = ((MR_Word) ((MR_hl_field(1, ArgModes_8, 1))));
      MR_Word InputVarsTail_19;
      MR_Word OutputVarsTail_20;
      MR_Word InitX_21;
      MR_Word FinalX_22;
      MR_Word InitY_23;
      MR_Word FinalY_24;
      MR_Word HeadType_25;
      MR_Word ModuleInfo_26;
      MR_Word Var_31;

      transform_hlds__unused_args__partition_deconstruct_args_5_p_0(Info_6, Var_34, TailArgModes_18, &InputVarsTail_19, &OutputVarsTail_20);
      InitX_21 = ((MR_Word) ((MR_hl_field(0, HeadArgMode_17, 0))));
      FinalX_22 = ((MR_Word) ((MR_hl_field(0, HeadArgMode_17, 1))));
      InitY_23 = ((MR_Word) ((MR_hl_field(0, HeadArgMode_17, 2))));
      FinalY_24 = ((MR_Word) ((MR_hl_field(0, HeadArgMode_17, 3))));
      Var_31 = ((MR_Word) ((MR_hl_field(0, Info_6, 1))));
      parse_tree__var_table__lookup_var_type_3_p_0(Var_31, Var_35, &HeadType_25);
      ModuleInfo_26 = ((MR_Word) ((MR_hl_field(0, Info_6, 0))));
      succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(ModuleInfo_26, HeadType_25, InitX_21, FinalX_22);
      if (succeeded)
        *InputVars_9 = InputVarsTail_19;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *InputVars_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_35));
          MR_hl_field(1, base, 1) = ((MR_Box) (InputVarsTail_19));
        }
      succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(ModuleInfo_26, HeadType_25, InitY_23, FinalY_24);
      if (succeeded)
        *OutputVars_10 = OutputVarsTail_20;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *OutputVars_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_35));
          MR_hl_field(1, base, 1) = ((MR_Box) (OutputVarsTail_20));
        }
    }
  }
}

static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_LocalVarUsageMap_11;

  transform_hlds__unused_args__add_rev_arg_dep_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_LocalVarUsageMap_11);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_LocalVarUsageMap_11));
}

static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TypeInfoVar_6;

  transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_TypeInfoVar_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_TypeInfoVar_6));
}

static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(
  MR_Word PredProcId_1,
  MR_Word VarTable_2,
  MR_Word RttiVarMaps_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_5,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LocalVarUsageMap_6 = STATE_VARIABLE_LocalVarUsageMap_0_5;
    else
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Vars_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word STATE_VARIABLE_LocalVarUsageMap_1_21;
      MR_Word Type_22;
      MR_Word TVars_23;
      MR_Word TypeInfoVars_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Box conv2_STATE_VARIABLE_LocalVarUsageMap_1_21;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_5;

      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_2, Var_16, &Type_22);
      parse_tree__prog_type_scan__type_vars_in_type_2_p_0(Type_22, &TVars_23);
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_25, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[2]));
        MR_hl_field(0, Var_25, 1) = ((MR_Box) (transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1));
        MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_25, 3) = ((MR_Box) (RttiVarMaps_3));
      }
      mercury__list__map_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[5]), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), Var_25, TVars_23, &TypeInfoVars_24);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_8[1]));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2));
        MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_26, 3) = ((MR_Box) (Var_16));
        MR_hl_field(0, Var_26, 4) = ((MR_Box) (PredProcId_1));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), Var_26, TypeInfoVars_24, ((MR_Box) (STATE_VARIABLE_LocalVarUsageMap_0_5)), &conv2_STATE_VARIABLE_LocalVarUsageMap_1_21);
      STATE_VARIABLE_LocalVarUsageMap_1_21 = ((MR_Word) (conv2_STATE_VARIABLE_LocalVarUsageMap_1_21));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Vars_17;
      next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_5 = STATE_VARIABLE_LocalVarUsageMap_1_21;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_LocalVarUsageMap_0_5 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__try_to_look_up_global_var_usage_map_entry_for_proc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_180;

  transform_hlds__unused_args__IntroducedFrom__pred__try_to_look_up_global_var_usage_map_entry_for_proc__398__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__3_180);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_180));
}

static void MR_CALL 
transform_hlds__unused_args__try_to_look_up_global_var_usage_map_entry_for_proc_10_p_0(
  MR_Word PredId_11,
  MR_Word PredInfo_12,
  MR_Integer ProcId_13,
  MR_Word ProcInfo_14,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_39,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_40,
  MR_Word STATE_VARIABLE_OptProcs_0_41,
  MR_Word * STATE_VARIABLE_OptProcs_42,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44)
{
  MR_Word PredModuleName_18;
  MR_Word PredFormArity_19;
  MR_Word FuncInfo_20;
  MR_Word AnalysisInfo0_21;
  MR_Word ModuleId_22;
  MR_Word FuncId_23;
  MR_Word MaybeBestResult_24;
  MR_Word AnalysisInfo_38;
  MR_Word STATE_VARIABLE_ModuleInfo_1_51;

  PredModuleName_18 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_12);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_12, &PredFormArity_19);
  FuncInfo_20 = (MR_Word) (PredFormArity_19);
  hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &AnalysisInfo0_21);
  transform_hlds__mmc_analysis__pred_info_proc_id_to_module_name_func_id_4_p_0(PredInfo_12, ProcId_13, &ModuleId_22, &FuncId_23);
  analysis__operations__lookup_best_result_6_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_4[0]), AnalysisInfo0_21, ModuleId_22, FuncId_23, ((MR_Box) (FuncInfo_20)), ((MR_Box) ((MR_Integer) 0)), &MaybeBestResult_24);
  if ((MaybeBestResult_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_52;

    Var_52 = transform_hlds__unused_args__analysis_name_0_f_0();
    analysis__operations__record_request_6_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_3[0]), Var_52, PredModuleName_18, FuncId_23, ((MR_Box) ((MR_Integer) 0)), AnalysisInfo0_21, &AnalysisInfo_38);
    *STATE_VARIABLE_GlobalVarUsageMap_40 = STATE_VARIABLE_GlobalVarUsageMap_0_39;
    *STATE_VARIABLE_OptProcs_42 = STATE_VARIABLE_OptProcs_0_41;
    STATE_VARIABLE_ModuleInfo_1_51 = STATE_VARIABLE_ModuleInfo_0_43;
  }
  else
  {
    MR_Word BestAnswer_26;
    MR_Word UnusedArgs_28;
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, MaybeBestResult_24, 0))));

    BestAnswer_26 = ((MR_Word) ((MR_hl_field(0, Var_46, 1))));
    UnusedArgs_28 = (MR_Word) (BestAnswer_26);
    if ((UnusedArgs_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_GlobalVarUsageMap_40 = STATE_VARIABLE_GlobalVarUsageMap_0_39;
      *STATE_VARIABLE_OptProcs_42 = STATE_VARIABLE_OptProcs_0_41;
      STATE_VARIABLE_ModuleInfo_1_51 = STATE_VARIABLE_ModuleInfo_0_43;
    }
    else
    {
      MR_Word HeadVars_31;
      MR_Word UnusedVars_32;
      MR_Word LocalVarUsageMap_33;
      MR_Word PredProcId_34;
      MR_Word Globals_35;
      MR_Word OptTuple_36;
      MR_Word OptUnusedArgs_37;
      MR_Word Var_47;
      MR_Word Var_48;

      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_14, &HeadVars_31);
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_47, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[1]));
        MR_hl_field(0, Var_47, 1) = ((MR_Box) (transform_hlds__unused_args__try_to_look_up_global_var_usage_map_entry_for_proc_10_p_0_1));
        MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_47, 3) = ((MR_Box) (HeadVars_31));
      }
      mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), Var_47, UnusedArgs_28, &UnusedVars_32);
      Var_48 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0));
      transform_hlds__unused_args__set_vars_to_unaliased_unused_3_p_0(UnusedVars_32, Var_48, &LocalVarUsageMap_33);
      {
        PredProcId_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredProcId_34, 0) = ((MR_Box) (PredId_11));
        MR_hl_field(0, PredProcId_34, 1) = ((MR_Box) (ProcId_13));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), ((MR_Box) (PredProcId_34)), ((MR_Box) (LocalVarUsageMap_33)), STATE_VARIABLE_GlobalVarUsageMap_0_39, STATE_VARIABLE_GlobalVarUsageMap_40);
      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &Globals_35);
      libs__globals__get_opt_tuple_2_p_0(Globals_35, &OptTuple_36);
      OptUnusedArgs_37 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_36, 0))) >> 6)) & (MR_Integer) 1);
      switch (OptUnusedArgs_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_OptProcs_42 = STATE_VARIABLE_OptProcs_0_41;
            STATE_VARIABLE_ModuleInfo_1_51 = STATE_VARIABLE_ModuleInfo_0_43;
          }
          break;
        case (MR_Integer) 0:
          transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(PredProcId_34, UnusedArgs_28, STATE_VARIABLE_OptProcs_0_41, STATE_VARIABLE_OptProcs_42, STATE_VARIABLE_ModuleInfo_0_43, &STATE_VARIABLE_ModuleInfo_1_51);
          break;
      }
    }
    AnalysisInfo_38 = AnalysisInfo0_21;
  }
  hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_38, STATE_VARIABLE_ModuleInfo_1_51, STATE_VARIABLE_ModuleInfo_44);
}

static MR_String MR_CALL 
transform_hlds__unused_args__analysis_name_0_f_0(void)
{
  return (MR_String) "unused_args";
}

static void MR_CALL 
transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(
  MR_Word OptProc_7,
  MR_Word UnusedArgs_8,
  MR_Word STATE_VARIABLE_NewProcMap_0_32,
  MR_Word * STATE_VARIABLE_NewProcMap_33,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35)
{
  MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(0, OptProc_7, 0))));
  MR_Integer ProcId_12 = ((MR_Integer) ((MR_hl_field(0, OptProc_7, 1))));
  MR_Word PredInfo0_13;
  MR_Word ProcInfo0_14;
  MR_Word NewPredInfo0_15;
  MR_Word NewProcs0_16;
  MR_Word HeadVars0_17;
  MR_Word HeadVars_18;
  MR_Word ProcInfo1_19;
  MR_Word ArgModes0_20;
  MR_Word ArgModes_21;
  MR_Word ProcInfo_22;
  MR_Word NewProcs_23;
  MR_Word NewPredInfo_24;
  MR_Word PredTable0_25;
  MR_Word NewPredId_26;
  MR_Word PredTable1_27;
  MR_Word PredModuleName_28;
  MR_String PredName_29;
  MR_Word PredSymName_30;
  MR_Word NewProcInfo_31;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_34, PredId_11, ProcId_12, &PredInfo0_13, &ProcInfo0_14);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(UnusedArgs_8, (MR_Word) (((MR_Box) (MR_mkword(2, &transform_hlds__unused_args_scalar_common_5[1])))), OptProc_7, PredInfo0_13, &NewPredInfo0_15);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(NewPredInfo0_15, &NewProcs0_16);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_14, &HeadVars0_17);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs_8, HeadVars0_17, &HeadVars_18);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_18, ProcInfo0_14, &ProcInfo1_19);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo1_19, &ArgModes0_20);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs_8, ArgModes0_20, &ArgModes_21);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_21, ProcInfo1_19, &ProcInfo_22);
  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_12)), ((MR_Box) (ProcInfo_22)), NewProcs0_16, &NewProcs_23);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(NewProcs_23, NewPredInfo0_15, &NewPredInfo_24);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &PredTable0_25);
  hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo_24, &NewPredId_26, PredTable0_25, &PredTable1_27);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable1_27, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
  PredModuleName_28 = hlds__hlds_pred__pred_info_module_1_f_0(NewPredInfo_24);
  PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(NewPredInfo_24);
  {
    PredSymName_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_30, 0) = ((MR_Box) (PredModuleName_28));
    MR_hl_field(1, PredSymName_30, 1) = ((MR_Box) (PredName_29));
  }
  {
    NewProcInfo_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NewProcInfo_31, 0) = ((MR_Box) (NewPredId_26));
    MR_hl_field(0, NewProcInfo_31, 1) = ((MR_Box) (ProcId_12));
    MR_hl_field(0, NewProcInfo_31, 2) = ((MR_Box) (PredSymName_30));
    MR_hl_field(0, NewProcInfo_31, 3) = ((MR_Box) (UnusedArgs_8));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0), ((MR_Box) (OptProc_7)), ((MR_Box) (NewProcInfo_31)), STATE_VARIABLE_NewProcMap_0_32, STATE_VARIABLE_NewProcMap_33);
}

static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
  MR_Word UnusedArgs_8,
  MR_Word PredStatus_9,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredInfo_0_43,
  MR_Word * STATE_VARIABLE_PredInfo_44)
{
  MR_bool succeeded;
  MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 0))));
  MR_Integer ProcId_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__4_4, 1))));
  MR_Word PredModuleName_13;
  MR_String Name0_14;
  MR_Word PredOrFunc_15;
  MR_Word Tvars_16;
  MR_Word ExistQVars_17;
  MR_Word ArgTypes0_18;
  MR_Word OrigOrigin_19;
  MR_String Name1_26;
  MR_Word Transform_27;
  MR_String TransformedName_28;
  MR_Word PredFormArity_29;
  MR_Word TypeVars_30;
  MR_Word ArgTypes_31;
  MR_Word Context_32;
  MR_Word ClausesInfo_33;
  MR_Word Markers_34;
  MR_Word GoalType_35;
  MR_Word ClassContext_36;
  MR_Word VarNameRemap_37;
  MR_Word Proofs_38;
  MR_Word ConstraintMap_39;
  MR_Word ProcTransform_40;
  MR_Word Origin_41;
  MR_Integer Var_59;
  MR_Word STATE_VARIABLE_PredInfo_1_61;
  MR_String Var_46;

  PredModuleName_13 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_0_43);
  Name0_14 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_0_43);
  PredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(STATE_VARIABLE_PredInfo_0_43);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_0_43, &Tvars_16, &ExistQVars_17, &ArgTypes0_18);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(STATE_VARIABLE_PredInfo_0_43, &OrigOrigin_19);
  succeeded = mercury__string__prefix_2_p_0(Name0_14, (MR_String) "__");
  if (succeeded)
  {
    Var_46 = (MR_String) "__LambdaGoal__";
    succeeded = mercury__string__prefix_2_p_0(Name0_14, Var_46);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word TypeCtor_21;
    MR_Word Var_47;

    succeeded = ((MR_tag((MR_Word) OrigOrigin_19)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_47 = ((MR_Word) ((MR_hl_field(1, OrigOrigin_19, 0))));
      succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
      if (succeeded)
        TypeCtor_21 = ((MR_Word) ((MR_hl_field(0, Var_47, 1))));
    }
    if (succeeded)
    {
      MR_Word TypeModule_22;
      MR_String TypeName_23;
      MR_Integer TypeArity_24;
      MR_String TypeModuleStr_25;
      MR_String Var_66;
      MR_String Var_74;
      MR_String Var_75;
      MR_String Var_77;
      MR_String Var_78;
      MR_String Var_80;

      hlds__type_util__type_ctor_module_name_arity_4_p_0(TypeCtor_21, &TypeModule_22, &TypeName_23, &TypeArity_24);
      TypeModuleStr_25 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(TypeModule_22, (MR_String) "__");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_5[0]), TypeArity_24, &Var_66);
      Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_66);
      Var_75 = mercury__string__f_43_43_2_f_0(TypeName_23, Var_74);
      Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_75);
      Var_78 = mercury__string__f_43_43_2_f_0(TypeModuleStr_25, Var_77);
      Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_78);
      Name1_26 = mercury__string__f_43_43_2_f_0(Name0_14, Var_80);
    }
    else
      Name1_26 = Name0_14;
  }
  else
    Name1_26 = Name0_14;
  Var_59 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_11);
  {
    Transform_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Transform_27, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, Transform_27, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
    MR_hl_field(3, Transform_27, 2) = ((MR_Box) (Var_59));
    MR_hl_field(3, Transform_27, 3) = ((MR_Box) (UnusedArgs_8));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(Name1_26, Transform_27, &TransformedName_28);
  PredFormArity_29 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(STATE_VARIABLE_PredInfo_0_43);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_0_43, &TypeVars_30);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs_8, ArgTypes0_18, &ArgTypes_31);
  hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_0_43, &Context_32);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_43, &ClausesInfo_33);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_43, &Markers_34);
  hlds__hlds_pred__pred_info_get_goal_type_2_p_0(STATE_VARIABLE_PredInfo_0_43, &GoalType_35);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(STATE_VARIABLE_PredInfo_0_43, &ClassContext_36);
  hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(STATE_VARIABLE_PredInfo_0_43, &VarNameRemap_37);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_38);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_39);
  {
    ProcTransform_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ProcTransform_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, ProcTransform_40, 1) = ((MR_Box) (UnusedArgs_8));
  }
  {
    Origin_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Origin_41, 0) = ((MR_Box) (ProcTransform_40));
    MR_hl_field(3, Origin_41, 1) = ((MR_Box) (OrigOrigin_19));
    MR_hl_field(3, Origin_41, 2) = ((MR_Box) (PredId_10));
    MR_hl_field(3, Origin_41, 3) = ((MR_Box) (ProcId_11));
  }
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_15, PredModuleName_13, TransformedName_28, PredFormArity_29, Context_32, Origin_41, PredStatus_9, (MR_Word) ((MR_Unsigned) 0U), GoalType_35, Markers_34, ArgTypes_31, Tvars_16, ExistQVars_17, ClassContext_36, Proofs_38, ConstraintMap_39, ClausesInfo_33, VarNameRemap_37, &STATE_VARIABLE_PredInfo_1_61);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVars_30, STATE_VARIABLE_PredInfo_1_61, STATE_VARIABLE_PredInfo_44);
}

static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Integer ArgNo_5,
  MR_Word ElemsToRemove_6,
  MR_Word STATE_VARIABLE_List_0_14,
  MR_Word * STATE_VARIABLE_List_15)
{
  MR_bool succeeded;

  if ((ElemsToRemove_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_List_15 = STATE_VARIABLE_List_0_14;
  else
  if ((STATE_VARIABLE_List_0_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_List_15 = STATE_VARIABLE_List_0_14;
  else
  {
    MR_Box Head_10 = (MR_hl_field(1, STATE_VARIABLE_List_0_14, 0));
    MR_Word Tail_11 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_List_0_14, 1))));
    MR_Integer NextArg_12 = (MR_Integer) ((MR_Unsigned) ArgNo_5 + (MR_Unsigned) 1);
    MR_Word NewTail_13;

    if ((Tail_11 == (MR_Word) ((MR_Unsigned) 0U)))
      NewTail_13 = Tail_11;
    else
    {
      MR_Box Head_21 = (MR_hl_field(1, Tail_11, 0));
      MR_Word Tail_22 = ((MR_Word) ((MR_hl_field(1, Tail_11, 1))));
      MR_Integer NextArg_23 = (MR_Integer) ((MR_Unsigned) NextArg_12 + (MR_Unsigned) 1);
      MR_Word NewTail_24;

      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(NextArg_23, ElemsToRemove_6, Tail_22, &NewTail_24);
      succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (NextArg_12)), ElemsToRemove_6);
      if (succeeded)
        NewTail_13 = NewTail_24;
      else
        {
          NewTail_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, NewTail_13, 0) = Head_21;
          MR_hl_field(1, NewTail_13, 1) = ((MR_Box) (NewTail_24));
        }
    }
    succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ArgNo_5)), ElemsToRemove_6);
    if (succeeded)
      *STATE_VARIABLE_List_15 = NewTail_13;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_List_15 = base;
        MR_hl_field(1, base, 0) = Head_10;
        MR_hl_field(1, base, 1) = ((MR_Box) (NewTail_13));
      }
  }
}

static void MR_CALL 
transform_hlds__unused_args__set_vars_to_unaliased_unused_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_2,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LocalVarUsageMap_3 = STATE_VARIABLE_LocalVarUsageMap_0_2;
    else
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word AliasVars_10;
      MR_Word AliasArgs_11;
      MR_Word Var_14;
      MR_Word STATE_VARIABLE_LocalVarUsageMap_1_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_2;

      mercury__set__init_1_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), &AliasVars_10);
      mercury__set__init_1_p_0((MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0), &AliasArgs_11);
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_14, 0) = ((MR_Box) (AliasVars_10));
        MR_hl_field(0, Var_14, 1) = ((MR_Box) (AliasArgs_11));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Var_7)), ((MR_Box) (Var_14)), STATE_VARIABLE_LocalVarUsageMap_0_2, &STATE_VARIABLE_LocalVarUsageMap_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_8;
      next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_2 = STATE_VARIABLE_LocalVarUsageMap_1_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_LocalVarUsageMap_0_2 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_NewProcMap_49;
  MR_Word conv4_STATE_VARIABLE_ModuleInfo_51;

  transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_NewProcMap_49, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_ModuleInfo_51);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_NewProcMap_49));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_ModuleInfo_51));
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_AnalysisInfo_13;

  transform_hlds__unused_args__record_intermod_dependencies_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AnalysisInfo_13);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AnalysisInfo_13));
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AnalysisInfo_13;

  transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AnalysisInfo_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AnalysisInfo_13));
}

void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_6_p_0(
  MR_Word GatherPragmas_7,
  MR_Word RecordAnalysis_8,
  MR_Word * Specs_9,
  MR_Word * PragmaUnusedArgInfos_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32)
{
  MR_bool succeeded;
  MR_Word Globals_12;
  MR_Word VeryVerbose_13;
  MR_Word GlobalVarUsageMap0_14;
  MR_Word FixpointPredProcIds_15;
  MR_Word NewProcMap0_16;
  MR_Word GlobalVarUsageMap_17;
  MR_Word UnusedArgInfo0_18;
  MR_Word UnusedArgInfo_19;
  MR_Word PredProcIdsToFix_20;
  MR_Word DoWarnBool_21;
  MR_Word DoWarn_22;
  MR_Word OptTuple_28;
  MR_Word OptUnusedArgs_29;
  MR_Word STATE_VARIABLE_ModuleInfo_1_34;
  MR_Word STATE_VARIABLE_ModuleInfo_2_41;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &Globals_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 132, &VeryVerbose_13);
  transform_hlds__unused_args__init_global_var_usage_map_5_p_0(&GlobalVarUsageMap0_14, &FixpointPredProcIds_15, &NewProcMap0_16, STATE_VARIABLE_ModuleInfo_0_31, &STATE_VARIABLE_ModuleInfo_1_34);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_5_p_0((MR_Integer) 0, FixpointPredProcIds_15, GlobalVarUsageMap0_14, &GlobalVarUsageMap_17);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), &UnusedArgInfo0_18);
  transform_hlds__unused_args__get_unused_arg_info_5_p_0(STATE_VARIABLE_ModuleInfo_1_34, GlobalVarUsageMap_17, FixpointPredProcIds_15, UnusedArgInfo0_18, &UnusedArgInfo_19);
  mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), UnusedArgInfo_19, &PredProcIdsToFix_20);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 195, &DoWarnBool_21);
  switch (DoWarnBool_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DoWarn_22 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      DoWarn_22 = (MR_Integer) 1;
      break;
  }
  succeeded = (DoWarn_22 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (GatherPragmas_7 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word WarnedPredIds0_23;
    MR_Word Var_38;

    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &WarnedPredIds0_23);
    Var_38 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0));
    transform_hlds__unused_args__gather_warnings_and_pragmas_10_p_0(STATE_VARIABLE_ModuleInfo_1_34, UnusedArgInfo_19, DoWarn_22, GatherPragmas_7, PredProcIdsToFix_20, WarnedPredIds0_23, (MR_Word) ((MR_Unsigned) 0U), Specs_9, Var_38, PragmaUnusedArgInfos_10);
  }
  else
  {
    *Specs_9 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0), PragmaUnusedArgInfos_10);
  }
  switch (RecordAnalysis_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_ModuleInfo_2_41 = STATE_VARIABLE_ModuleInfo_1_34;
      break;
    case (MR_Integer) 1:
      {
        MR_Word AnalysisInfo0_24;
        MR_Word PredIds_25;
        MR_Word AnalysisInfo1_26;
        MR_Word AnalysisInfo_27;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Box conv1_AnalysisInfo1_26;
        MR_Box conv3_AnalysisInfo_27;

        hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_1_34, &AnalysisInfo0_24);
        hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_1_34, &PredIds_25);
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_39, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_8[0]));
          MR_hl_field(0, Var_39, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_6_p_0_1));
          MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_39, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_34));
          MR_hl_field(0, Var_39, 4) = ((MR_Box) (UnusedArgInfo_19));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), Var_39, PredIds_25, ((MR_Box) (AnalysisInfo0_24)), &conv1_AnalysisInfo1_26);
        AnalysisInfo1_26 = ((MR_Word) (conv1_AnalysisInfo1_26));
        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_40, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_9[0]));
          MR_hl_field(0, Var_40, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_6_p_0_2));
          MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_40, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_34));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), Var_40, FixpointPredProcIds_15, ((MR_Box) (AnalysisInfo1_26)), &conv3_AnalysisInfo_27);
        AnalysisInfo_27 = ((MR_Word) (conv3_AnalysisInfo_27));
        hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_27, STATE_VARIABLE_ModuleInfo_1_34, &STATE_VARIABLE_ModuleInfo_2_41);
      }
      break;
  }
  libs__globals__get_opt_tuple_2_p_0(Globals_12, &OptTuple_28);
  OptUnusedArgs_29 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_28, 0))) >> 6)) & (MR_Integer) 1);
  switch (OptUnusedArgs_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_2_41;
      break;
    case (MR_Integer) 0:
      {
        MR_Word NewProcMap_30;
        MR_Word Var_42;
        MR_Word STATE_VARIABLE_ModuleInfo_3_43;
        MR_Word STATE_VARIABLE_ModuleInfo_4_44;
        MR_Box conv7_NewProcMap_30;
        MR_Box conv6_STATE_VARIABLE_ModuleInfo_3_43;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_42, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_7[1]));
          MR_hl_field(0, Var_42, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_6_p_0_3));
          MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_42, 3) = ((MR_Box) (UnusedArgInfo_19));
        }
        mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_42, PredProcIdsToFix_20, ((MR_Box) (NewProcMap0_16)), &conv7_NewProcMap_30, ((MR_Box) (STATE_VARIABLE_ModuleInfo_2_41)), &conv6_STATE_VARIABLE_ModuleInfo_3_43);
        NewProcMap_30 = ((MR_Word) (conv7_NewProcMap_30));
        STATE_VARIABLE_ModuleInfo_3_43 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleInfo_3_43));
        transform_hlds__unused_args__unused_args_fixup_module_6_p_0(VeryVerbose_13, GlobalVarUsageMap_17, FixpointPredProcIds_15, NewProcMap_30, STATE_VARIABLE_ModuleInfo_3_43, &STATE_VARIABLE_ModuleInfo_4_44);
        succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0), NewProcMap_30);
        if (succeeded)
          *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_4_44;
        else
          hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_4_44, STATE_VARIABLE_ModuleInfo_32);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_5_p_0(
  MR_Integer PassNum_6,
  MR_Word LocalPredProcIds_8,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_13,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_14)
{
  while (MR_TRUE)
  {
    MR_Word Changed_10;
    MR_Word STATE_VARIABLE_GlobalVarUsageMap_1_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    transform_hlds__unused_args__unused_args_single_pass_5_p_0(LocalPredProcIds_8, (MR_Integer) 0, &Changed_10, STATE_VARIABLE_GlobalVarUsageMap_0_13, &STATE_VARIABLE_GlobalVarUsageMap_1_16);
    switch (Changed_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_GlobalVarUsageMap_14 = STATE_VARIABLE_GlobalVarUsageMap_1_16;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) PassNum_6 + (MR_Unsigned) 1);
          MR_Integer next_value_of_PassNum_6 = Var_25;
          MR_Word next_value_of_STATE_VARIABLE_GlobalVarUsageMap_0_13 = STATE_VARIABLE_GlobalVarUsageMap_1_16;

          // direct tailcall eliminated
          ;
          PassNum_6 = next_value_of_PassNum_6;
          STATE_VARIABLE_GlobalVarUsageMap_0_13 = next_value_of_STATE_VARIABLE_GlobalVarUsageMap_0_13;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_single_pass_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Changed_0_2,
  MR_Word * STATE_VARIABLE_Changed_3,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_4,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_GlobalVarUsageMap_5 = STATE_VARIABLE_GlobalVarUsageMap_0_4;
      *STATE_VARIABLE_Changed_3 = STATE_VARIABLE_Changed_0_2;
    }
    else
    {
      MR_Word PredProcId_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word PredProcIds_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_Changed_1_20;
      MR_Word STATE_VARIABLE_GlobalVarUsageMap_1_21;
      MR_Word LocalVarUsageMap0_22;
      MR_Word Vars_23;
      MR_Word LocalChanged_24;
      MR_Word LocalVarUsageMap_25;
      MR_Box conv0_LocalVarUsageMap0_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_2;
      MR_Word next_value_of_STATE_VARIABLE_GlobalVarUsageMap_0_4;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), STATE_VARIABLE_GlobalVarUsageMap_0_4, ((MR_Box) (PredProcId_12)), &conv0_LocalVarUsageMap0_22);
      LocalVarUsageMap0_22 = ((MR_Word) (conv0_LocalVarUsageMap0_22));
      mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), LocalVarUsageMap0_22, &Vars_23);
      transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(STATE_VARIABLE_GlobalVarUsageMap_0_4, Vars_23, (MR_Integer) 0, &LocalChanged_24, LocalVarUsageMap0_22, &LocalVarUsageMap_25);
      switch (LocalChanged_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), ((MR_Box) (PredProcId_12)), ((MR_Box) (LocalVarUsageMap_25)), STATE_VARIABLE_GlobalVarUsageMap_0_4, &STATE_VARIABLE_GlobalVarUsageMap_1_21);
            STATE_VARIABLE_Changed_1_20 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_Changed_1_20 = STATE_VARIABLE_Changed_0_2;
            STATE_VARIABLE_GlobalVarUsageMap_1_21 = STATE_VARIABLE_GlobalVarUsageMap_0_4;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredProcIds_13;
      next_value_of_STATE_VARIABLE_Changed_0_2 = STATE_VARIABLE_Changed_1_20;
      next_value_of_STATE_VARIABLE_GlobalVarUsageMap_0_4 = STATE_VARIABLE_GlobalVarUsageMap_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Changed_0_2 = next_value_of_STATE_VARIABLE_Changed_0_2;
      STATE_VARIABLE_GlobalVarUsageMap_0_4 = next_value_of_STATE_VARIABLE_GlobalVarUsageMap_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34 = ((MR_Word) ((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34));
  transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word TypeInfo_10_43;
    MR_Word TypeCtorInfo_11_44;
    MR_Word LocalVarUsageMap_40;
    MR_Box conv2_LocalVarUsageMap_40;

    (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProcId_23 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34, 0))));
    (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34, 1))));
    (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__GlobalVarUsageMap_1, ((MR_Box) ((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProcId_23)), &conv2_LocalVarUsageMap_40);
    if ((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
    {
      LocalVarUsageMap_40 = ((MR_Word) (conv2_LocalVarUsageMap_40));
      (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
    }
    if ((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
    {
      TypeInfo_10_43 = (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]);
      TypeCtorInfo_11_44 = (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0);
      (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__contains_2_p_0(TypeInfo_10_43, TypeCtorInfo_11_44, LocalVarUsageMap_40, ((MR_Box) ((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24)));
    }
    (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded);
    if ((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
      transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_0) == 0)
    {
      mercury__set__member_2_p_1((MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0), &(env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34, (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__AliasArgs0_21, transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_7(
  void * env_ptr_arg)
{
  struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35 = ((MR_Word) ((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35));
  transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_6(env_ptr);
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_6(
  void * env_ptr_arg)
{
  struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) (env_ptr_arg);

  {
    (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__contains_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5, ((MR_Box) ((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35)));
    (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded);
    if ((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
      transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_5(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_8(
  void * env_ptr_arg)
{
  struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s * env_ptr = (struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_1) == 0)
    {
      mercury__set__member_2_p_1((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), &(env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35, (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__AliasVars0_20, transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_7, env_ptr);
      (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(
  MR_Word GlobalVarUsageMap_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Changed_0_3,
  MR_Word * STATE_VARIABLE_Changed_4,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_5,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_6)
{
  struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s env;

  (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__GlobalVarUsageMap_1 = GlobalVarUsageMap_1;
  (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5 = STATE_VARIABLE_LocalVarUsageMap_0_5;
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LocalVarUsageMap_6 = (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5;
      *STATE_VARIABLE_Changed_4 = STATE_VARIABLE_Changed_0_3;
    }
    else
    {
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Vars_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_LocalVarUsageMap_1_30;
      MR_Word STATE_VARIABLE_Changed_1_31;
      MR_Word Usage_19;
      MR_Box conv0_Usage_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_3;
      MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_5;

      (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5, ((MR_Box) (Var_15)), &conv0_Usage_19);
      if ((env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
      {
        Usage_19 = ((MR_Word) (conv0_Usage_19));
        (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
      }
      if ((env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
      {
        (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__AliasVars0_20 = ((MR_Word) ((MR_hl_field(0, Usage_19, 0))));
        (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__AliasArgs0_21 = ((MR_Word) ((MR_hl_field(0, Usage_19, 1))));
        transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_4(&env);
        if (!((env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded))
          transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_8(&env);
        if ((env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
        {
          mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Var_15)), (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5, &STATE_VARIABLE_LocalVarUsageMap_1_30);
          STATE_VARIABLE_Changed_1_31 = (MR_Integer) 1;
        }
        else
        {
          STATE_VARIABLE_LocalVarUsageMap_1_30 = (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5;
          STATE_VARIABLE_Changed_1_31 = STATE_VARIABLE_Changed_0_3;
        }
      }
      else
      {
        STATE_VARIABLE_LocalVarUsageMap_1_30 = (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5;
        STATE_VARIABLE_Changed_1_31 = STATE_VARIABLE_Changed_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_16;
      next_value_of_STATE_VARIABLE_Changed_0_3 = STATE_VARIABLE_Changed_1_31;
      next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_5 = STATE_VARIABLE_LocalVarUsageMap_1_30;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Changed_0_3 = next_value_of_STATE_VARIABLE_Changed_0_3;
      (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVarUsageMap_0_5 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__gather_warnings_and_pragmas_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word UnusedArgInfo_2,
  MR_Word DoWarn_3,
  MR_Word DoPragma_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_WarnedPredIds_0_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8,
  MR_Word STATE_VARIABLE_PragmaUnusedArgInfos_0_9,
  MR_Word * STATE_VARIABLE_PragmaUnusedArgInfos_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_PragmaUnusedArgInfos_10 = STATE_VARIABLE_PragmaUnusedArgInfos_0_9;
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    }
    else
    {
      MR_Word PredProcId_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word PredProcIds_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word STATE_VARIABLE_WarnedPredIds_1_40;
      MR_Word STATE_VARIABLE_Specs_1_41;
      MR_Word STATE_VARIABLE_PragmaUnusedArgInfos_1_42;
      MR_Word UnusedArgs_31;
      MR_Box conv0_UnusedArgs_31;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_WarnedPredIds_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_PragmaUnusedArgInfos_0_9;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), UnusedArgInfo_2, ((MR_Box) (PredProcId_26)), &conv0_UnusedArgs_31);
      if (succeeded)
      {
        UnusedArgs_31 = ((MR_Word) (conv0_UnusedArgs_31));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word PredId_32 = ((MR_Word) ((MR_hl_field(0, PredProcId_26, 0))));
        MR_Integer ProcId_33 = ((MR_Integer) ((MR_hl_field(0, PredProcId_26, 1))));
        MR_Word PredInfo_34;
        MR_Word PredStatus_49;
        MR_Word Markers_50;
        MR_String Name_51;
        MR_Word TypeSpecTables_58;
        MR_Word TypeSpecForcePreds_60;
        MR_Word Origin_63;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_String Var_71;
        MR_Integer Var_52;
        MR_Integer Position_53;
        MR_Integer Length_54;
        MR_Integer IdLen_55;
        MR_String Id_56;
        MR_String Var_72;
        MR_Integer Var_73;
        MR_Integer Var_74;
        MR_Integer Var_57;
        MR_Word TypeCtorInfo_36_78;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_32, &PredInfo_34);
        succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_34);
        succeeded = !(succeeded);
        if (succeeded)
        {
          hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_34, &PredStatus_49);
          Var_69 = (MR_Word) (PredStatus_49);
          succeeded = (Var_69 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_34);
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_34);
              succeeded = !(succeeded);
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_34, &Markers_50);
                Var_70 = (MR_Integer) 0;
                succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_50, Var_70);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Name_51 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_34);
                  Var_71 = (MR_String) "__LambdaGoal__";
                  succeeded = mercury__string__sub_string_search_3_p_0(Name_51, Var_71, &Var_52);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    Var_72 = (MR_String) "__ho";
                    succeeded = mercury__string__sub_string_search_3_p_0(Name_51, Var_72, &Position_53);
                    if (succeeded)
                    {
                      mercury__string__length_2_p_0(Name_51, &Length_54);
                      Var_73 = (MR_Integer) ((MR_Unsigned) Length_54 - (MR_Unsigned) Position_53);
                      Var_74 = (MR_Integer) 4;
                      IdLen_55 = (MR_Integer) ((MR_Unsigned) Var_73 - (MR_Unsigned) Var_74);
                      mercury__string__right_3_p_0(Name_51, IdLen_55, &Id_56);
                      succeeded = mercury__string__to_int_2_p_0(Id_56, &Var_57);
                    }
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      hlds__hlds_module__module_info_get_type_spec_tables_2_p_0(ModuleInfo_1, &TypeSpecTables_58);
                      TypeSpecForcePreds_60 = ((MR_Word) ((MR_hl_field(0, TypeSpecTables_58, 1))));
                      TypeCtorInfo_36_78 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
                      succeeded = mercury__set__member_2_p_0(TypeCtorInfo_36_78, ((MR_Box) (PredId_32)), TypeSpecForcePreds_60);
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_34, &Origin_63);
                        succeeded = ((MR_tag((MR_Word) Origin_63)) == (MR_Integer) 3);
                        if (succeeded)
                        {
                          Var_75 = ((MR_Word) ((MR_hl_field(3, Origin_63, 0))));
                          succeeded = ((((MR_tag((MR_Word) Var_75)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_75, 0)))) == (MR_Integer) 2)));
                        }
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          Var_76 = (MR_Integer) 13;
                          succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_50, Var_76);
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            Var_77 = (MR_Integer) 14;
                            succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_50, Var_77);
                            succeeded = !(succeeded);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (succeeded)
        {
          succeeded = transform_hlds__unused_args__may_gather_warning_pragma_for_pred_new_1_p_0(PredInfo_34);
          if (!(succeeded))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.may_gather_warning_pragma_for_pred\'/3", (MR_String) "old succeeds, new fails");
              return;
            }
          succeeded = MR_TRUE;
        }
        else
        {
          MR_String Var_47;
          MR_String Var_48;

          succeeded = transform_hlds__unused_args__may_gather_warning_pragma_for_pred_new_1_p_0(PredInfo_34);
          if (succeeded)
          {
            Var_47 = (MR_String) "predicate \140transform_hlds.unused_args.may_gather_warning_pragma_for_pred\'/3";
            Var_48 = (MR_String) "old fails, new succeeds";
            {
              mercury__require__unexpected_2_p_0(Var_47, Var_48);
              return;
            }
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          switch (DoWarn_3) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_WarnedPredIds_1_40 = STATE_VARIABLE_WarnedPredIds_0_6;
                STATE_VARIABLE_Specs_1_41 = STATE_VARIABLE_Specs_0_7;
              }
              break;
            case (MR_Integer) 1:
              transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0(PredInfo_34, PredId_32, ProcId_33, UnusedArgs_31, STATE_VARIABLE_WarnedPredIds_0_6, &STATE_VARIABLE_WarnedPredIds_1_40, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_41);
              break;
          }
          switch (DoPragma_4) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_34);
                if (!(succeeded))
                {
                  succeeded = hlds__hlds_pred__pred_info_is_opt_exported_1_p_0(PredInfo_34);
                  if (!(succeeded))
                    succeeded = hlds__hlds_pred__pred_info_is_exported_to_submodules_1_p_0(PredInfo_34);
                }
                if (succeeded)
                  succeeded = (UnusedArgs_31 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  MR_Word ModuleName_81;
                  MR_Word PredOrFunc_82;
                  MR_String PredName_83;
                  MR_Word PredSymName_84;
                  MR_Word PredFormArity_85;
                  MR_Word UserArity_86;
                  MR_Integer ModeNum_87;
                  MR_Word PredNameArityPFMn_88;
                  MR_Word UnusedArgInfo_89;
                  MR_Word Var_90;

                  ModuleName_81 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_34);
                  PredOrFunc_82 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_34);
                  PredName_83 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_34);
                  {
                    PredSymName_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, PredSymName_84, 0) = ((MR_Box) (ModuleName_81));
                    MR_hl_field(1, PredSymName_84, 1) = ((MR_Box) (PredName_83));
                  }
                  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_34, &PredFormArity_85);
                  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_82, &UserArity_86, PredFormArity_85);
                  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_33, &ModeNum_87);
                  {
                    PredNameArityPFMn_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, PredNameArityPFMn_88, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_82));
                    MR_hl_field(0, PredNameArityPFMn_88, 1) = ((MR_Box) (PredSymName_84));
                    MR_hl_field(0, PredNameArityPFMn_88, 2) = ((MR_Box) (UserArity_86));
                    MR_hl_field(0, PredNameArityPFMn_88, 3) = ((MR_Box) (ModeNum_87));
                  }
                  Var_90 = mercury__term_context__dummy_context_0_f_0();
                  {
                    UnusedArgInfo_89 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, UnusedArgInfo_89, 0) = ((MR_Box) (PredNameArityPFMn_88));
                    MR_hl_field(0, UnusedArgInfo_89, 1) = ((MR_Box) (UnusedArgs_31));
                    MR_hl_field(0, UnusedArgInfo_89, 2) = ((MR_Box) (Var_90));
                    MR_hl_field(0, UnusedArgInfo_89, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0), ((MR_Box) (UnusedArgInfo_89)), STATE_VARIABLE_PragmaUnusedArgInfos_0_9, &STATE_VARIABLE_PragmaUnusedArgInfos_1_42);
                }
                else
                  STATE_VARIABLE_PragmaUnusedArgInfos_1_42 = STATE_VARIABLE_PragmaUnusedArgInfos_0_9;
              }
              break;
            case (MR_Integer) 0:
              STATE_VARIABLE_PragmaUnusedArgInfos_1_42 = STATE_VARIABLE_PragmaUnusedArgInfos_0_9;
              break;
          }
        }
        else
        {
          STATE_VARIABLE_PragmaUnusedArgInfos_1_42 = STATE_VARIABLE_PragmaUnusedArgInfos_0_9;
          STATE_VARIABLE_Specs_1_41 = STATE_VARIABLE_Specs_0_7;
          STATE_VARIABLE_WarnedPredIds_1_40 = STATE_VARIABLE_WarnedPredIds_0_6;
        }
      }
      else
      {
        STATE_VARIABLE_PragmaUnusedArgInfos_1_42 = STATE_VARIABLE_PragmaUnusedArgInfos_0_9;
        STATE_VARIABLE_Specs_1_41 = STATE_VARIABLE_Specs_0_7;
        STATE_VARIABLE_WarnedPredIds_1_40 = STATE_VARIABLE_WarnedPredIds_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = PredProcIds_27;
      next_value_of_STATE_VARIABLE_WarnedPredIds_0_6 = STATE_VARIABLE_WarnedPredIds_1_40;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_41;
      next_value_of_STATE_VARIABLE_PragmaUnusedArgInfos_0_9 = STATE_VARIABLE_PragmaUnusedArgInfos_1_42;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_WarnedPredIds_0_6 = next_value_of_STATE_VARIABLE_WarnedPredIds_0_6;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      STATE_VARIABLE_PragmaUnusedArgInfos_0_9 = next_value_of_STATE_VARIABLE_PragmaUnusedArgInfos_0_9;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_42;

  conv1_LambdaHeadVar__2_42 = transform_hlds__unused_args__IntroducedFrom__func__report_unused_args__1977__1_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_42));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0(
  MR_Word PredInfo_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word UnusedArgs0_14,
  MR_Word STATE_VARIABLE_WarnedPredIds_0_26,
  MR_Word * STATE_VARIABLE_WarnedPredIds_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_bool succeeded;

  succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_12)), STATE_VARIABLE_WarnedPredIds_0_26);
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
    *STATE_VARIABLE_WarnedPredIds_27 = STATE_VARIABLE_WarnedPredIds_0_26;
  }
  else
  {
    MR_Word ProcTable_17;
    MR_Word Proc_18;
    MR_Word PredFormArity_19;
    MR_Word HeadVars_20;
    MR_Integer NumExtraArgs_21;
    MR_Word UnusedArgs_22;
    MR_Box conv0_Proc_18;

    mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_12)), STATE_VARIABLE_WarnedPredIds_0_26, STATE_VARIABLE_WarnedPredIds_27);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_11, &ProcTable_17);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_17, ((MR_Box) (ProcId_13)), &conv0_Proc_18);
    Proc_18 = ((MR_Word) (conv0_Proc_18));
    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_11, &PredFormArity_19);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(Proc_18, &HeadVars_20);
    NumExtraArgs_21 = parse_tree__prog_data__num_extra_args_2_f_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), PredFormArity_19, HeadVars_20);
    transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(NumExtraArgs_21, UnusedArgs0_14, &UnusedArgs_22);
    if ((UnusedArgs_22 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
    else
    {
      MR_Word Spec_25;
      MR_Integer NumArgs_35;
      MR_Word Context_36;
      MR_Word PredOrFunc_37;
      MR_Word ModuleName_38;
      MR_String PredName_39;
      MR_Word PredFormArity_40;
      MR_Integer UserArityInt_41;
      MR_Word SNA_42;
      MR_Word Pieces1_43;
      MR_Word UnusedArgNs_44;
      MR_Word UnusedArgPieces_45;
      MR_Word Pieces2_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_String Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_79;

      mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), UnusedArgs_22, &NumArgs_35);
      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_11, &Context_36);
      PredOrFunc_37 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_11);
      ModuleName_38 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_11);
      PredName_39 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_11);
      hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_11, &PredFormArity_40);
      parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_37, &Var_47, PredFormArity_40);
      UserArityInt_41 = (MR_Integer) (Var_47);
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (ModuleName_38));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (PredName_39));
      }
      {
        SNA_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_42, 0) = ((MR_Box) (Var_48));
        MR_hl_field(0, SNA_42, 1) = ((MR_Box) (UserArityInt_41));
      }
      Var_52 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_37);
      {
        Var_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_51, 0) = ((MR_Box) (Var_52));
      }
      {
        Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_54, 1) = ((MR_Box) (SNA_42));
      }
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__unused_args_scalar_common_1[14])));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
      }
      {
        Pieces1_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces1_43, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_scalar_common_1[9])));
        MR_hl_field(1, Pieces1_43, 1) = ((MR_Box) (Var_50));
      }
      UnusedArgNs_44 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[7]), UnusedArgs_22);
      UnusedArgPieces_45 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), UnusedArgNs_44);
      succeeded = (NumArgs_35 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_64;
        MR_Word Var_65;

        Var_65 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &transform_hlds__unused_args_scalar_common_1[20])));
        Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_scalar_common_1[21])));
        Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_scalar_common_1[18])), Var_64);
        Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UnusedArgPieces_45, Var_62);
        Pieces2_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_scalar_common_1[16])), Var_61);
      }
      else
      {
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_72;
        MR_Word Var_73;

        Var_73 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &transform_hlds__unused_args_scalar_common_1[20])));
        Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_scalar_common_1[21])));
        Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_scalar_common_1[25])), Var_72);
        Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UnusedArgPieces_45, Var_70);
        Pieces2_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_scalar_common_1[23])), Var_69);
      }
      Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_43, Pieces2_46);
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_25, 0) = ((MR_Box) ((MR_String) "function \140transform_hlds.unused_args.report_unused_args\'/3"));
        MR_hl_field(0, Spec_25, 1) = ((MR_Box) (MR_mkword(2, &transform_hlds__unused_args_scalar_common_5[2])));
        MR_hl_field(0, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 108U));
        MR_hl_field(0, Spec_25, 3) = ((MR_Box) (Context_36));
        MR_hl_field(0, Spec_25, 4) = ((MR_Box) (Var_79));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_29 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(
  MR_Integer NumInserted_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer HeadArgWith_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word TailArgsWith_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word TailArgsWithout_9;
    MR_Integer HeadArgWithout_10;

    transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(NumInserted_1, TailArgsWith_7, &TailArgsWithout_9);
    HeadArgWithout_10 = (MR_Integer) ((MR_Unsigned) HeadArgWith_6 - (MR_Unsigned) NumInserted_1);
    succeeded = (HeadArgWithout_10 < (MR_Integer) 1);
    if (succeeded)
      *HeadVar__3_3 = TailArgsWithout_9;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadArgWithout_10));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailArgsWithout_9));
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args__may_gather_warning_pragma_for_pred_new_1_p_0(
  MR_Word PredInfo_2)
{
  MR_bool succeeded;
  MR_Word PredStatus_3;
  MR_Word Origin_4;
  MR_Word Var_61;

  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_2, &PredStatus_3);
  Var_61 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_3);
  succeeded = (Var_61 == (MR_Integer) 1);
  if (succeeded)
  {
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_2, &Origin_4);
    switch (MR_tag((MR_Word) Origin_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word UserMade_5 = ((MR_Word) ((MR_hl_field(0, Origin_4, 0))));
          MR_Word Markers_16;
          MR_Word Var_66;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_2, &Markers_16);
          switch (MR_tag((MR_Word) UserMade_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_2);
                succeeded = !(succeeded);
              }
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, UserMade_5, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_16, (MR_Integer) 13);
                    if (!(succeeded))
                      succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_16, (MR_Integer) 14);
                    if (succeeded)
                      succeeded = MR_FALSE;
                    else
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.may_gather_warning_pragma_for_pred_new\'/1", (MR_String) "user_made_instance_method with marker");
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
          }
          if (succeeded)
          {
            Var_66 = (MR_Integer) 0;
            succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_16, Var_66);
            succeeded = !(succeeded);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CompilerMade_20 = ((MR_Word) ((MR_hl_field(1, Origin_4, 0))));

          switch (MR_tag((MR_Word) CompilerMade_20)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, CompilerMade_20, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 3:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredTransform_36 = ((MR_Word) ((MR_hl_field(2, Origin_4, 0))));

          switch (MR_tag((MR_Word) PredTransform_36)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(PredTransform_36)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ProcTransform_42 = ((MR_Word) ((MR_hl_field(3, Origin_4, 0))));

          switch (MR_tag((MR_Word) ProcTransform_42)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(ProcTransform_42)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 3:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, ProcTransform_42, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.may_gather_warning_pragma_for_pred_new\'/1", (MR_String) "proc_transform_unused_args");
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 4:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 5:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 6:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
          }
        }
        break;
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_23;

  transform_hlds__unused_args__unused_args_fixup_proc_msg_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_23);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_23));
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0(
  MR_Word VeryVerbose_7,
  MR_Word GlobalVarUsageMap_8,
  MR_Word PredProcIds_9,
  MR_Word NewProcMap_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  MR_Word Var_14;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_7[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_fixup_module_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (VeryVerbose_7));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (GlobalVarUsageMap_8));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (NewProcMap_10));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_14, PredProcIds_9, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_12)), &conv1_STATE_VARIABLE_ModuleInfo_13);
  *STATE_VARIABLE_ModuleInfo_13 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_13));
}

static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_info_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word GlobalVarUsageMap_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_UnusedArgInfo_0_4,
  MR_Word * STATE_VARIABLE_UnusedArgInfo_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_UnusedArgInfo_5 = STATE_VARIABLE_UnusedArgInfo_0_4;
    else
    {
      MR_Word PredProcId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word PredProcIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(0, PredProcId_13, 0))));
      MR_Integer ProcId_17 = ((MR_Integer) ((MR_hl_field(0, PredProcId_13, 1))));
      MR_Word LocalVarUsageMap_18;
      MR_Word ProcInfo_20;
      MR_Word HeadVars_21;
      MR_Word UnusedArgs_22;
      MR_Word STATE_VARIABLE_UnusedArgInfo_1_26;
      MR_Box conv0_LocalVarUsageMap_18;
      MR_Word Var_19;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_UnusedArgInfo_0_4;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), GlobalVarUsageMap_2, ((MR_Box) (PredProcId_13)), &conv0_LocalVarUsageMap_18);
      LocalVarUsageMap_18 = ((MR_Word) (conv0_LocalVarUsageMap_18));
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_1, PredId_16, ProcId_17, &Var_19, &ProcInfo_20);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_20, &HeadVars_21);
      transform_hlds__unused_args__get_unused_arg_nums_4_p_0(LocalVarUsageMap_18, HeadVars_21, (MR_Integer) 1, &UnusedArgs_22);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), ((MR_Box) (PredProcId_13)), ((MR_Box) (UnusedArgs_22)), STATE_VARIABLE_UnusedArgInfo_0_4, &STATE_VARIABLE_UnusedArgInfo_1_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PredProcIds_14;
      next_value_of_STATE_VARIABLE_UnusedArgInfo_0_4 = STATE_VARIABLE_UnusedArgInfo_1_26;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_UnusedArgInfo_0_4 = next_value_of_STATE_VARIABLE_UnusedArgInfo_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_nums_4_p_0(
  MR_Word LocalVarUsageMap_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadVar_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word HeadVars_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word UnusedArgsTail_12;
    MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);

    transform_hlds__unused_args__get_unused_arg_nums_4_p_0(LocalVarUsageMap_1, HeadVars_9, Var_13, &UnusedArgsTail_12);
    succeeded = mercury__map__contains_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), LocalVarUsageMap_1, ((MR_Box) (HeadVar_8)));
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArgNum_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (UnusedArgsTail_12));
      }
    else
      *HeadVar__4_4 = UnusedArgsTail_12;
  }
}

static void MR_CALL 
transform_hlds__unused_args__init_global_var_usage_map_5_p_0(
  MR_Word * GlobalVarUsageMap_6,
  MR_Word * FixpointPredProcIds_7,
  MR_Word * NewProcMap_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  MR_Word PredIds_10;
  MR_Word Var_13;
  MR_Word Var_15;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &PredIds_10);
  Var_13 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]));
  Var_15 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0));
  transform_hlds__unused_args__init_global_var_usage_map_for_preds_9_p_0(PredIds_10, Var_13, GlobalVarUsageMap_6, (MR_Word) ((MR_Unsigned) 0U), FixpointPredProcIds_7, Var_15, NewProcMap_8, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
}

static void MR_CALL 
transform_hlds__unused_args__init_global_var_usage_map_for_preds_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_GlobalVarUsageMap_32;
  MR_Word conv2_STATE_VARIABLE_FixpointPredProcIds_34;
  MR_Word conv1_STATE_VARIABLE_OptProcs_36;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_38;

  transform_hlds__unused_args__init_global_var_usage_map_entry_for_proc_12_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_GlobalVarUsageMap_32, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_FixpointPredProcIds_34, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_OptProcs_36, ((MR_Word) (wrapper_arg_9)), &conv0_STATE_VARIABLE_ModuleInfo_38);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_GlobalVarUsageMap_32));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_FixpointPredProcIds_34));
  *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_OptProcs_36));
  *wrapper_arg_10 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_38));
}

static void MR_CALL 
transform_hlds__unused_args__init_global_var_usage_map_for_preds_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GlobalVarUsageMap_0_2,
  MR_Word * STATE_VARIABLE_GlobalVarUsageMap_3,
  MR_Word STATE_VARIABLE_FixpointPredProcIds_0_4,
  MR_Word * STATE_VARIABLE_FixpointPredProcIds_5,
  MR_Word STATE_VARIABLE_OptProcs_0_6,
  MR_Word * STATE_VARIABLE_OptProcs_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
      *STATE_VARIABLE_OptProcs_7 = STATE_VARIABLE_OptProcs_0_6;
      *STATE_VARIABLE_FixpointPredProcIds_5 = STATE_VARIABLE_FixpointPredProcIds_0_4;
      *STATE_VARIABLE_GlobalVarUsageMap_3 = STATE_VARIABLE_GlobalVarUsageMap_0_2;
    }
    else
    {
      MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word PredIds_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_GlobalVarUsageMap_1_36;
      MR_Word STATE_VARIABLE_FixpointPredProcIds_1_37;
      MR_Word STATE_VARIABLE_OptProcs_1_38;
      MR_Word STATE_VARIABLE_ModuleInfo_1_39;
      MR_Word PredInfo_40;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_GlobalVarUsageMap_0_2;
      MR_Word next_value_of_STATE_VARIABLE_FixpointPredProcIds_0_4;
      MR_Word next_value_of_STATE_VARIABLE_OptProcs_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_8;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, PredId_22, &PredInfo_40);
      succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_40);
      if (!(succeeded))
      {
        {
          MR_Word Markers_41;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_40, &Markers_41);
          succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_41, (MR_Integer) 0);
        }
        if (!(succeeded))
        {
          MR_Word Origin_42;
          MR_Word OriginUser_43;

          hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_40, &Origin_42);
          succeeded = ((MR_tag((MR_Word) Origin_42)) == (MR_Integer) 0);
          if (succeeded)
          {
            OriginUser_43 = ((MR_Word) ((MR_hl_field(0, Origin_42, 0))));
            if (((MR_tag((MR_Word) OriginUser_43)) == (MR_Integer) 2))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) OriginUser_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OriginUser_43, 0)))) == (MR_Integer) 0))))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_ModuleInfo_1_39 = STATE_VARIABLE_ModuleInfo_0_8;
        STATE_VARIABLE_OptProcs_1_38 = STATE_VARIABLE_OptProcs_0_6;
        STATE_VARIABLE_FixpointPredProcIds_1_37 = STATE_VARIABLE_FixpointPredProcIds_0_4;
        STATE_VARIABLE_GlobalVarUsageMap_1_36 = STATE_VARIABLE_GlobalVarUsageMap_0_2;
      }
      else
      {
        MR_Word ProcMap_44;
        MR_Word Var_46;
        MR_Box conv7_STATE_VARIABLE_GlobalVarUsageMap_1_36;
        MR_Box conv6_STATE_VARIABLE_FixpointPredProcIds_1_37;
        MR_Box conv5_STATE_VARIABLE_OptProcs_1_38;
        MR_Box conv4_STATE_VARIABLE_ModuleInfo_1_39;

        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_40, &ProcMap_44);
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_6[0]));
          MR_hl_field(0, Var_46, 1) = ((MR_Box) (transform_hlds__unused_args__init_global_var_usage_map_for_preds_9_p_0_1));
          MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_46, 3) = ((MR_Box) (PredId_22));
          MR_hl_field(0, Var_46, 4) = ((MR_Box) (PredInfo_40));
        }
        mercury__map__foldl4_10_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[2]), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[2]), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_46, ProcMap_44, ((MR_Box) (STATE_VARIABLE_GlobalVarUsageMap_0_2)), &conv7_STATE_VARIABLE_GlobalVarUsageMap_1_36, ((MR_Box) (STATE_VARIABLE_FixpointPredProcIds_0_4)), &conv6_STATE_VARIABLE_FixpointPredProcIds_1_37, ((MR_Box) (STATE_VARIABLE_OptProcs_0_6)), &conv5_STATE_VARIABLE_OptProcs_1_38, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv4_STATE_VARIABLE_ModuleInfo_1_39);
        STATE_VARIABLE_GlobalVarUsageMap_1_36 = ((MR_Word) (conv7_STATE_VARIABLE_GlobalVarUsageMap_1_36));
        STATE_VARIABLE_FixpointPredProcIds_1_37 = ((MR_Word) (conv6_STATE_VARIABLE_FixpointPredProcIds_1_37));
        STATE_VARIABLE_OptProcs_1_38 = ((MR_Word) (conv5_STATE_VARIABLE_OptProcs_1_38));
        STATE_VARIABLE_ModuleInfo_1_39 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_1_39));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_23;
      next_value_of_STATE_VARIABLE_GlobalVarUsageMap_0_2 = STATE_VARIABLE_GlobalVarUsageMap_1_36;
      next_value_of_STATE_VARIABLE_FixpointPredProcIds_0_4 = STATE_VARIABLE_FixpointPredProcIds_1_37;
      next_value_of_STATE_VARIABLE_OptProcs_0_6 = STATE_VARIABLE_OptProcs_1_38;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_8 = STATE_VARIABLE_ModuleInfo_1_39;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_GlobalVarUsageMap_0_2 = next_value_of_STATE_VARIABLE_GlobalVarUsageMap_0_2;
      STATE_VARIABLE_FixpointPredProcIds_0_4 = next_value_of_STATE_VARIABLE_FixpointPredProcIds_0_4;
      STATE_VARIABLE_OptProcs_0_6 = next_value_of_STATE_VARIABLE_OptProcs_0_6;
      STATE_VARIABLE_ModuleInfo_0_8 = next_value_of_STATE_VARIABLE_ModuleInfo_0_8;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____arg_var_in_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____arg_var_in_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____arg_var_in_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____arg_var_in_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____fixup_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____fixup_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____fixup_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____fixup_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____global_var_usage_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____global_var_usage_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____global_var_usage_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____global_var_usage_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____local_var_usage_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____local_var_usage_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____local_var_usage_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____local_var_usage_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____maybe_gather_pragma_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____maybe_gather_pragma_unused_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____maybe_gather_pragma_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____maybe_gather_pragma_unused_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____maybe_record_analysis_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____maybe_record_analysis_unused_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____maybe_record_analysis_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____maybe_record_analysis_unused_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____maybe_warn_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____maybe_warn_unused_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____maybe_warn_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____maybe_warn_unused_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____new_proc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____new_proc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____new_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____new_proc_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____new_proc_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____unused_args_answer_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____unused_args_answer_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____unused_args_call_0_0();
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____unused_args_call_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_func_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____unused_args_func_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_func_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____unused_args_func_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____unused_args_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____unused_args_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____unused_args_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____unused_args_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____usage_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____usage_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____usage_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____usage_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_4;

  conv0_Term_4 = transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__to_term_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Term_4));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__from_term_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_3;

  conv0_Term_3 = transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__to_term_1_1_f_0();
  wrapper_arg_2 = ((MR_Box) (conv0_Term_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__framework__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__from_term_2_2_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__more_precise_than_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__equivalent_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__more_precise_than_3_3_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__framework__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__framework__equivalent_3_3_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__analysis_name_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__analysis_version_number_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__preferred_fixpoint_type_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__bottom_2_2_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__top_2_2_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_FuncInfo_22;

  transform_hlds__unused_args__ClassMethod_for_analysis__framework__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__framework__get_func_info_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_FuncInfo_22);
  *wrapper_arg_6 = ((MR_Box) (conv0_FuncInfo_22));
}

void mercury__transform_hlds__unused_args__init(void)
{
}

void mercury__transform_hlds__unused_args__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_fixup_info_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_global_var_usage_map_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_local_var_usage_map_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_maybe_gather_pragma_unused_args_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_maybe_record_analysis_unused_args_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_maybe_warn_unused_args_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_map_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_info_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0);
}

void mercury__transform_hlds__unused_args__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__unused_args__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.unused_args.
