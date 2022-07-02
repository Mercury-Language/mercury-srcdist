/*
** Automatically generated from `unused_args.m'
** by the Mercury compiler,
** version rotd-2022-07-02
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
#include "term_conversion.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.pred_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s {
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarUsage_1;
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
  MR_bool transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded;
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarDep0_20;
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgDep0_21;
  jmp_buf transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_0;
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProcId_23;
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24;
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34;
  MR_Box transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34;
  jmp_buf transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__commit_1;
  MR_Word transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35;
  MR_Box transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__analysis__pti_analysis_result_2__plain_transform_hlds__unused_args__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args__type_ctor_info_unused_args_answer_0;

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

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0;

static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_warning_info_0_0[4];

static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_warning_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_warning_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_warning_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_warning_info_0[1];

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_warning_info_0[1];

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__1104__1_3_p_0(
  MR_Word FuncInfo_26,
  MR_Word Answer_27,
  MR_Word LambdaHeadVar__1_57);

static MR_Word MR_CALL 
transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__1097__1_1_f_0(
  MR_Word LambdaHeadVar__1_55);

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__775__1_2_p_0(
  MR_Word LHS_49,
  MR_Word CellVar_58);

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__793__1_2_p_0(
  MR_Word LHS_49,
  MR_Word CellVar_138);

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__751__1_2_p_0(
  MR_Word LambdaHeadVar__1_104,
  MR_Word * LambdaHeadVar__2_105);

static void MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__setup_proc_args__456__1_3_p_0(
  MR_Word HeadVars_35,
  MR_Integer HeadVar__2_211,
  MR_Word * HeadVar__3_212);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0(
  MR_Word Term_3);

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0(void);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0(
  MR_Word Term_4,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0(
  MR_Word HeadVar__1_7);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0(
  MR_Word HeadVar__1_4);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0(
  MR_Word HeadVar__1_9,
  MR_Word Args_10,
  MR_Word Args_3);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0(
  MR_Word HeadVar__1_4,
  MR_Word Answer1_5,
  MR_Word Answer2_6);

static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0(
  MR_Word ModuleInfo_17,
  MR_Word ModuleName_18,
  MR_Word FuncId_19,
  MR_Word * FuncInfo_22);

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0(
  MR_Word HeadVar__1_12);

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void);

static MR_Integer MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0(void);

static MR_String MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0(void);

static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
transform_hlds__unused_args____Compare____proc_call_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0(
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
transform_hlds__unused_args__unused_args_fixup_proc_6_p_0(
  MR_Word VeryVerbose_7,
  MR_Word VarUsage_8,
  MR_Word ProcCallInfo_9,
  MR_Word PredProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20);

static void MR_CALL 
transform_hlds__unused_args__do_unused_args_fixup_proc_5_p_0(
  MR_Word VarUsage_6,
  MR_Word OldPredProcId_7,
  MR_Word ProcCallInfo_8,
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
  MR_Word STATE_VARIABLE_ProcCallInfo_0_48,
  MR_Word * STATE_VARIABLE_ProcCallInfo_49,
  MR_Word STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * STATE_VARIABLE_ModuleInfo_51);

static void MR_CALL 
transform_hlds__unused_args__create_call_goal_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word UnusedArgs_10,
  MR_Word NewPredId_11,
  MR_Integer NewProcId_12,
  MR_Word PredModuleName_13,
  MR_String PredName_14,
  MR_Word STATE_VARIABLE_OldProc_0_34,
  MR_Word * STATE_VARIABLE_OldProc_35);

static void MR_CALL 
transform_hlds__unused_args__add_rev_arg_dep_5_p_0(
  MR_Word Var_6,
  MR_Word PredProcId_7,
  MR_Word Arg_8,
  MR_Word STATE_VARIABLE_VarDep_0_10,
  MR_Word * STATE_VARIABLE_VarDep_11);

static void MR_CALL 
transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(
  MR_Word RttiVarMaps_4,
  MR_Word TVar_5,
  MR_Word * TypeInfoVar_6);

static MR_Word MR_CALL 
transform_hlds__unused_args__get_unused_args_1_f_0(
  MR_Word UnusedArgs_3);

static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_112_97_115_115_95_95_91_50_93_95_48_5_p_0(
  MR_Integer PassNum_6,
  MR_Word LocalPredProcIds_8,
  MR_Word STATE_VARIABLE_VarUsage_0_13,
  MR_Word * STATE_VARIABLE_VarUsage_14);

static void MR_CALL 
transform_hlds__unused_args__unused_args_single_pass_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Changed_0_2,
  MR_Word * STATE_VARIABLE_Changed_3,
  MR_Word STATE_VARIABLE_VarUsage_0_4,
  MR_Word * STATE_VARIABLE_VarUsage_5);

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
  MR_Word VarUsage_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Changed_0_3,
  MR_Word * STATE_VARIABLE_Changed_4,
  MR_Word STATE_VARIABLE_LocalVars_0_5,
  MR_Word * STATE_VARIABLE_LocalVars_6);

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
  MR_Word STATE_VARIABLE_UnusedArgInfos_0_9,
  MR_Word * STATE_VARIABLE_UnusedArgInfos_10);

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

static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_49_93_95_48_3_f_0(
  MR_Word PredInfo_6,
  MR_Word UnusedArgs_7);

static MR_Word MR_CALL 
transform_hlds__unused_args__format_arg_list_2_2_f_0(
  MR_Integer First_4,
  MR_Word List_5);

static void MR_CALL 
transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(
  MR_Integer NumInserted_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0(
  MR_Word VeryVerbose_7,
  MR_Word VarUsage_8,
  MR_Word PredProcIds_9,
  MR_Word ProcCallInfo_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13);

static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_info_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word VarUsage_3,
  MR_Word STATE_VARIABLE_UnusedArgInfo_0_4,
  MR_Word * STATE_VARIABLE_UnusedArgInfo_5);

static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_nos_4_p_0(
  MR_Word LocalVars_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNo_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__unused_args__init_var_usage_5_p_0(
  MR_Word * VarUsage_6,
  MR_Word * PredProcList_7,
  MR_Word * ProcCallInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14);

static void MR_CALL 
transform_hlds__unused_args__setup_local_var_usage_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_VarUsage_0_2,
  MR_Word * STATE_VARIABLE_VarUsage_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_OptProcs_0_6,
  MR_Word * STATE_VARIABLE_OptProcs_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
transform_hlds__unused_args__setup_pred_args_10_p_0(
  MR_Word PredId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarUsage_0_3,
  MR_Word * STATE_VARIABLE_VarUsage_4,
  MR_Word STATE_VARIABLE_PredProcIds_0_5,
  MR_Word * STATE_VARIABLE_PredProcIds_6,
  MR_Word STATE_VARIABLE_OptProcs_0_7,
  MR_Word * STATE_VARIABLE_OptProcs_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10);

static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_VarUsage_0_55,
  MR_Word * STATE_VARIABLE_VarUsage_56,
  MR_Word STATE_VARIABLE_PredProcIds_0_57,
  MR_Word * STATE_VARIABLE_PredProcIds_58,
  MR_Word STATE_VARIABLE_OptProcs_0_59,
  MR_Word * STATE_VARIABLE_OptProcs_60,
  MR_Word STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * STATE_VARIABLE_ModuleInfo_62);

static void MR_CALL 
transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(
  MR_Word OptProc_7,
  MR_Word UnusedArgs_8,
  MR_Word STATE_VARIABLE_ProcCallInfo_0_31,
  MR_Word * STATE_VARIABLE_ProcCallInfo_32,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34);

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

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(
  MR_Word Info_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_VarDep_0_87,
  MR_Word * STATE_VARIABLE_VarDep_88);

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarDep_0_3,
  MR_Word * STATE_VARIABLE_VarDep_4);

static void MR_CALL 
transform_hlds__unused_args__list_case_to_list_goal_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args__add_construction_aliases_4_p_0(
  MR_Word Alias_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarDep_0_3,
  MR_Word * STATE_VARIABLE_VarDep_4);

static void MR_CALL 
transform_hlds__unused_args__partition_deconstruct_args_5_p_0(
  MR_Word Info_6,
  MR_Word Vars_7,
  MR_Word ArgModes_8,
  MR_Word * InputVars_9,
  MR_Word * OutputVars_10);

static void MR_CALL 
transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(
  MR_Word PredProcId_6,
  MR_Word LocalArguments_7,
  MR_Word HeadVarIds_8,
  MR_Word STATE_VARIABLE_VarDep_0_18,
  MR_Word * STATE_VARIABLE_VarDep_19);

static void MR_CALL 
transform_hlds__unused_args__set_var_used_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_VarDep_0_6,
  MR_Word * STATE_VARIABLE_VarDep_7);

static void MR_CALL 
transform_hlds__unused_args__set_list_vars_used_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_VarDep_0_6,
  MR_Word * STATE_VARIABLE_VarDep_7);

static void MR_CALL 
transform_hlds__unused_args__add_aliases_4_p_0(
  MR_Word Var_5,
  MR_Word Aliases_6,
  MR_Word STATE_VARIABLE_VarDep_0_12,
  MR_Word * STATE_VARIABLE_VarDep_13);

static MR_bool MR_CALL 
transform_hlds__unused_args__local_var_is_used_2_p_0(
  MR_Word VarDep_3,
  MR_Word Var_4);

static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_VarDep_0_9,
  MR_Word * STATE_VARIABLE_VarDep_10);

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
  MR_Word HeadVar__1_1,
  MR_Word VarTypeMap_2,
  MR_Word PredProcId_3,
  MR_Word RttiVarMaps_4,
  MR_Word STATE_VARIABLE_VarDep_0_5,
  MR_Word * STATE_VARIABLE_VarDep_6);

static void MR_CALL 
transform_hlds__unused_args__initialise_vardep_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_VarDep_0_2,
  MR_Word * STATE_VARIABLE_VarDep_3);

static MR_String MR_CALL 
transform_hlds__unused_args__analysis_name_0_f_0(void);

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
transform_hlds__unused_args____Unify____new_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____new_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0_10001(
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

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6);


static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_1[23][2];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_2[13][3];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_3[6][5];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_4[5][6];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_5[4][1];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_6[2][8];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_7[2][9];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_8[1][7];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_9[1][13];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_10[1][11];

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_11[1][10];




static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_1[23][2] = {
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
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__unused_args__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is unused."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "arguments"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are unused."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[16])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
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
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[1]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_2[1]))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__unused_args__setup_output_args_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[4])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[5])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_10[0])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_10[0])),
    ((MR_Box) (transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_3[6][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__call_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_2[2])),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[2])),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__answer_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__)),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_2[3])),
    ((MR_Box) (&transform_hlds__unused_args_scalar_common_1[3])),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) (&transform_hlds__unused_args__analysis__pti_analysis_result_2__plain_transform_hlds__unused_args__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args__type_ctor_info_unused_args_answer_0)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0)),
    ((MR_Box) (&transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_4[5][6] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__analysis__arity3__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0__)),
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
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
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
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "and"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "any"))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_6[2][8] = {
  /* row   0 */
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
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

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_8[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_9[1][13] = {
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

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_10[1][11] = {
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
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_scalar_common_11[1][10] = {
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
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__unused_args__type_ctor_info_new_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args__analysis__pti_analysis_result_2__plain_transform_hlds__unused_args__type_ctor_info_unused_args_call_0__plain_transform_hlds__unused_args__type_ctor_info_unused_args_answer_0 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
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

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_arg_var_in_proc_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0
};

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

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_arg_var_in_proc_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_arg_var_in_proc_0_0
};

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_arg_var_in_proc_0[1] = {
  (MR_Integer) 0
};

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
  {
    (MR_TypeInfo) (&transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_fixup_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)
};

static const MR_ConstString transform_hlds__unused_args__transform_hlds__unused_args__field_names_fixup_info_0_0[4] = {
  (MR_String) "fixup_module_info",
  (MR_String) "fixup_proc_call_info",
  (MR_String) "fixup_unused_vars",
  (MR_String) "fixup_var_table"
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

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_fixup_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0
};

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

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_fixup_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_fixup_info_0_0
};

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_fixup_info_0[1] = {
  (MR_Integer) 0
};

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

static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_new_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0 = {
  (MR_String) "call_info",
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

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_new_proc_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0
};

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

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_new_proc_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_new_proc_info_0_0
};

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_new_proc_info_0[1] = {
  (MR_Integer) 0
};

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

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_proc_call_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unused_args____Unify____proc_call_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____proc_call_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "proc_call_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__unused_args__type_ctor_info_new_proc_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_answer_0[1] = {
  (MR_Integer) 0
};

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

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_ordinal_ordered_unused_args_call_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__enum_name_ordered_unused_args_call_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__enum_functor_desc_unused_args_call_0_0
};

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_call_0[1] = {
  (MR_Integer) 0
};

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

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_func_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__notag_functor_desc_unused_args_func_info_0 = {
  (MR_String) "unused_args_func_info",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
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

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_unused_args_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0
};

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

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_unused_args_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_unused_args_info_0_0
};

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_unused_args_info_0[1] = {
  (MR_Integer) 0
};

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
  {
    (MR_TypeInfo) (&transform_hlds__unused_args__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0)
  }
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

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_usage_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0
};

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

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_usage_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_usage_info_0_0
};

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_usage_info_0[1] = {
  (MR_Integer) 0
};

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

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_var_dep_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unused_args____Unify____var_dep_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____var_dep_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "var_dep",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__unused_args__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_var_usage_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unused_args____Unify____var_usage_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____var_usage_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "var_usage",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__unused_args__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args__type_ctor_info_usage_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo transform_hlds__unused_args__transform_hlds__unused_args__field_types_warning_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_warning_info_0_0 = {
  (MR_String) "warning_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unused_args__transform_hlds__unused_args__field_types_warning_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_warning_info_0_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_warning_info_0_0
};

static const MR_DuPtagLayout transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_warning_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unused_args__transform_hlds__unused_args__du_stag_ordered_warning_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_warning_info_0[1] = {
  &transform_hlds__unused_args__transform_hlds__unused_args__du_functor_desc_warning_info_0_0
};

static const MR_Integer transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_warning_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_warning_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args____Unify____warning_info_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args____Compare____warning_info_0_0_10001)),
  (MR_String) "transform_hlds.unused_args",
  (MR_String) "warning_info",
  { transform_hlds__unused_args__transform_hlds__unused_args__du_name_ordered_warning_info_0 },
  { transform_hlds__unused_args__transform_hlds__unused_args__du_ptag_ordered_warning_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unused_args__transform_hlds__unused_args__functor_number_map_warning_info_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__unused_args__unused_args_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__unused_args__unused_args_call__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__call_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__answer_pattern__arity2__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__analysis__arity3__transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0__[11] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 6)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0_10001))
};

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__1104__1_3_p_0(
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
      TypeClassInfo_for_partial_order_79 = (MR_Word) (&transform_hlds__unused_args_scalar_common_2[3]);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_partial_order_79, (MR_Integer) 0)), (MR_Integer) 5))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_79)), ((MR_Box) (FuncInfo_26)), ((MR_Box) (Answer_27)), ((MR_Box) (LambdaHeadVar__1_57)));
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__1097__1_1_f_0(
  MR_Word LambdaHeadVar__1_55)
{
  MR_Word LambdaHeadVar__2_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_55, (MR_Integer) 1))));

  return LambdaHeadVar__2_56;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__775__1_2_p_0(
  MR_Word LHS_49,
  MR_Word CellVar_58)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), ((MR_Box) (CellVar_58)), ((MR_Box) (LHS_49)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__793__1_2_p_0(
  MR_Word LHS_49,
  MR_Word CellVar_138)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), ((MR_Box) (CellVar_138)), ((MR_Box) (LHS_49)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__751__1_2_p_0(
  MR_Word LambdaHeadVar__1_104,
  MR_Word * LambdaHeadVar__2_105)
{
  MR_bool succeeded;
  MR_Word MaybeNameAndMode_44;

  *LambdaHeadVar__2_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_104, (MR_Integer) 0))));
  MaybeNameAndMode_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_104, (MR_Integer) 1))));
  succeeded = (MaybeNameAndMode_44 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args__IntroducedFrom__pred__setup_proc_args__456__1_3_p_0(
  MR_Word HeadVars_35,
  MR_Integer HeadVar__2_211,
  MR_Word * HeadVar__3_212)
{
  MR_Box conv0_HeadVar__3_212;

  mercury__list__det_index1_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), HeadVars_35, HeadVar__2_211, &conv0_HeadVar__3_212);
  *HeadVar__3_212 = ((MR_Word) (conv0_HeadVar__3_212));
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0(
  MR_Word Term_3)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_String Var_6;
  MR_Word Var_7;

  succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
    Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
    succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0))));
        succeeded = (strcmp(Var_6, (MR_String) "any") == 0);
      }
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0(void)
{
  MR_Word Term_3;
  MR_Word Var_8;

  Var_8 = mercury__term__context_init_0_f_0();
  {
    Term_3 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Term_3, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_5[3]));
    MR_hl_field(MR_mktag(0), Term_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Term_3, 2) = ((MR_Box) (Var_8));
  }
  return Term_3;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0(
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
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Term_4;
  MR_Word Args_3 = (MR_Word) (HeadVar__1_1);

  mercury__term_conversion__type_to_term_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ((MR_Box) (Args_3)), &Term_4);
  return Term_4;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0(
  MR_Word HeadVar__1_7)
{
  return MR_TRUE;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0(
  MR_Word HeadVar__1_4)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__semidet_fail_0_p_0();
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0(
  MR_Word HeadVar__1_9,
  MR_Word Args_10,
  MR_Word Args_3)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____unused_args_answer_0_0(Args_3, Args_10);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0(
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
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0(
  MR_Word ModuleInfo_17,
  MR_Word ModuleName_18,
  MR_Word FuncId_19,
  MR_Word * FuncInfo_22)
{
  MR_Integer Arity_13;
  MR_Word PredId_23;
  MR_Word PredInfo_25;
  MR_Word Var_26;

  transform_hlds__mmc_analysis__func_id_to_ppid_4_p_0(ModuleInfo_17, ModuleName_18, FuncId_19, &Var_26);
  PredId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_17, PredId_23, &PredInfo_25);
  Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_25);
  *FuncInfo_22 = (MR_Word) (Arity_13);
}

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0(
  MR_Word HeadVar__1_12)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__3_3;
  MR_Integer Arity_10 = (MR_Integer) (HeadVar__1_1);
  MR_Word Var_23;

  Var_23 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, Arity_10);
  HeadVar__3_3 = (MR_Word) (Var_23);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void)
{
  return (MR_Integer) 0;
}

static MR_Integer MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0(void)
{
  return (MR_Integer) 3;
}

static MR_String MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0(void)
{
  return (MR_String) "unused_args";
}

static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    mercury__term____Compare____context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

    succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_2[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

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
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
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
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
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
transform_hlds__unused_args____Compare____proc_call_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____proc_call_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
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
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
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

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[6]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
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
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&transform_hlds__unused_args_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&transform_hlds__unused_args_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
          succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX4_9, ArgY4_10);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word CalleePredProcId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_17,
  MR_Word * STATE_VARIABLE_AnalysisInfo_18)
{
  MR_bool succeeded;
  MR_Word CalleePredId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalleePredProcId_6, (MR_Integer) 0))));
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

    transform_hlds__mmc_analysis__module_name_func_id_4_p_0(ModuleInfo_5, CalleePredProcId_6, &CalleeModule_11, &CalleeFuncId_12);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&transform_hlds__unused_args_scalar_common_4[0]), (MR_Integer) 0)), (MR_Integer) 10))));
    func_0(((MR_Box) ((MR_Word) (&transform_hlds__unused_args_scalar_common_4[0]))), ((MR_Box) (ModuleInfo_5)), ((MR_Box) (CalleeModule_11)), ((MR_Box) (CalleeFuncId_12)), &conv1_FuncInfo_16);
    FuncInfo_16 = ((MR_Word) (conv1_FuncInfo_16));
    analysis__record_dependency_7_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_4[0]), CalleeModule_11, CalleeFuncId_12, ((MR_Box) (FuncInfo_16)), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_AnalysisInfo_0_17, STATE_VARIABLE_AnalysisInfo_18);
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

  transform_hlds__unused_args__record_intermod_dependencies_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AnalysisInfo_18);
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
  hlds__goal_util__pred_proc_ids_called_from_goal_2_p_0(Goal_10, &CalleePredProcIds_11);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_8[0]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__unused_args__record_intermod_dependencies_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (ModuleInfo_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), Var_14, CalleePredProcIds_11, ((MR_Box) (STATE_VARIABLE_AnalysisInfo_0_12)), &conv1_STATE_VARIABLE_AnalysisInfo_13);
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
      MR_hl_field(MR_mktag(0), PPId_14, 0) = ((MR_Box) (PredId_10));
      MR_hl_field(MR_mktag(0), PPId_14, 1) = ((MR_Box) (ProcId_12));
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
    transform_hlds__mmc_analysis__module_name_func_id_4_p_0(ModuleInfo_8, PPId_14, &ModuleName_17, &FuncId_18);
    analysis__record_result_7_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_4[0]), ModuleName_17, FuncId_18, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Answer_16)), (MR_Integer) 2, STATE_VARIABLE_AnalysisInfo_0_19, STATE_VARIABLE_AnalysisInfo_20);
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

  transform_hlds__unused_args__maybe_record_intermod_unused_args_2_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AnalysisInfo_20);
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
  ProcIds_11 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(PredInfo_10);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_11[0]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (UnusedArgInfo_7));
    MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (PredId_8));
    MR_hl_field(MR_mktag(0), Var_14, 6) = ((MR_Box) (PredInfo_10));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), Var_14, ProcIds_11, ((MR_Box) (STATE_VARIABLE_AnalysisInfo_0_12)), &conv1_STATE_VARIABLE_AnalysisInfo_13);
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
  MR_Word OldVar_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_9, (MR_Integer) 0))));
  MR_Word MaybeName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_9, (MR_Integer) 1))));
  MR_Word OrigType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_9, (MR_Integer) 2))));
  MR_Word BoxPolicy_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Arg0_9, (MR_Integer) 3))) & (MR_Integer) 1);

  if ((MaybeName_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word VarTable0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 3))));
    MR_Word OldVarEntry_20;
    MR_Word NewVar_21;
    MR_Word VarTable_22;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;

    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable0_19, OldVar_14, &OldVarEntry_20);
    parse_tree__var_table__add_var_entry_4_p_0(OldVarEntry_20, &NewVar_21, VarTable0_19, &VarTable_22);
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 0))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_26 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarTable_22));
    }
    mercury__map__set_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), ((MR_Box) (OldVar_14)), ((MR_Box) (NewVar_21)), STATE_VARIABLE_Subst_0_23, STATE_VARIABLE_Subst_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Arg_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NewVar_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeName_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (OrigType_16));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_17));
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
transform_hlds__unused_args__unused_args_fixup_proc_6_p_0(
  MR_Word VeryVerbose_7,
  MR_Word VarUsage_8,
  MR_Word ProcCallInfo_9,
  MR_Word PredProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20)
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
        MR_String Name_16;
        MR_Integer Arity_17;
        MR_Integer ProcInt_18;
        MR_String Var_38;
        MR_String Var_48;

        hlds__passes_aux__get_debug_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_19, &DebugStream_13);
        PredId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_10, (MR_Integer) 0))));
        ProcId_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_10, (MR_Integer) 1))));
        Name_16 = hlds__hlds_module__predicate_name_2_f_0(STATE_VARIABLE_ModuleInfo_0_19, PredId_14);
        Arity_17 = hlds__hlds_module__predicate_arity_2_f_0(STATE_VARIABLE_ModuleInfo_0_19, PredId_14);
        hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_15, &ProcInt_18);
        mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) "% Fixing up \140");
        mercury__io__write_string_4_p_0(DebugStream_13, Name_16);
        mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) "/");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_5[0]), Arity_17, &Var_38);
        mercury__io__write_string_4_p_0(DebugStream_13, Var_38);
        mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) " in mode ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_5[0]), ProcInt_18, &Var_48);
        mercury__io__write_string_4_p_0(DebugStream_13, Var_48);
        mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) "\n");
      }
      break;
  }
  transform_hlds__unused_args__do_unused_args_fixup_proc_5_p_0(VarUsage_8, PredProcId_10, ProcCallInfo_9, STATE_VARIABLE_ModuleInfo_0_19, STATE_VARIABLE_ModuleInfo_20);
}

static void MR_CALL 
transform_hlds__unused_args__do_unused_args_fixup_proc_5_p_0(
  MR_Word VarUsage_6,
  MR_Word OldPredProcId_7,
  MR_Word ProcCallInfo_8,
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
  MR_Word STATE_VARIABLE_ProcInfo_44_44;
  MR_Word STATE_VARIABLE_Goal_45_45;
  MR_Word STATE_VARIABLE_ProcInfo_46_46;
  MR_Word STATE_VARIABLE_ProcInfo_47_47;
  MR_Word Goal1_68;
  MR_Word GoalExpr1_69;
  MR_Word GoalInfo1_70;
  MR_Word OldProcCallInfo_10;
  MR_Box conv0_OldProcCallInfo_10;
  MR_Box conv1_UsageInfos_15;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0), ProcCallInfo_8, ((MR_Box) (OldPredProcId_7)), &conv0_OldProcCallInfo_10);
  if (succeeded)
  {
    OldProcCallInfo_10 = ((MR_Word) (conv0_OldProcCallInfo_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    PredId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldProcCallInfo_10, (MR_Integer) 0))));
    ProcId_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OldProcCallInfo_10, (MR_Integer) 1))));
    UnusedArgs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldProcCallInfo_10, (MR_Integer) 3))));
  }
  else
  {
    PredId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldPredProcId_7, (MR_Integer) 0))));
    ProcId_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OldPredProcId_7, (MR_Integer) 1))));
    UnusedArgs_14 = (MR_Word) ((MR_Unsigned) 0U);
  }
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), VarUsage_6, ((MR_Box) (OldPredProcId_7)), &conv1_UsageInfos_15);
  UsageInfos_15 = ((MR_Word) (conv1_UsageInfos_15));
  mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), UsageInfos_15, &UnusedVars_16);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_40, PredId_11, ProcId_12, &PredInfo0_17, &STATE_VARIABLE_ProcInfo_44_44);
  hlds__hlds_pred__proc_info_get_var_table_3_p_0(STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ProcInfo_44_44, &VarTable0_19);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_44_44, &HeadVars0_20);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_44_44, &ArgModes0_21);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_44_44, &STATE_VARIABLE_Goal_45_45);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs_14, HeadVars0_20, &HeadVars_23);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs_14, ArgModes0_21, &ArgModes_24);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_23, STATE_VARIABLE_ProcInfo_44_44, &STATE_VARIABLE_ProcInfo_46_46);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_24, STATE_VARIABLE_ProcInfo_46_46, &STATE_VARIABLE_ProcInfo_47_47);
  {
    FixupInfo0_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), FixupInfo0_27, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_40));
    MR_hl_field(MR_mktag(0), FixupInfo0_27, 1) = ((MR_Box) (ProcCallInfo_8));
    MR_hl_field(MR_mktag(0), FixupInfo0_27, 2) = ((MR_Box) (UnusedVars_16));
    MR_hl_field(MR_mktag(0), FixupInfo0_27, 3) = ((MR_Box) (VarTable0_19));
  }
  transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(STATE_VARIABLE_Goal_45_45, &Goal1_68, FixupInfo0_27, &FixupInfo_28, &Changed_29);
  GoalExpr1_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_68, (MR_Integer) 0))));
  GoalInfo1_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_68, (MR_Integer) 1))));
  switch (Changed_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ProcInfo_25 = STATE_VARIABLE_ProcInfo_47_47;
      break;
    case (MR_Integer) 1:
      {
        MR_Word NonLocals_34;
        MR_Word RttiVarMaps0_35;
        MR_Word VarTable_37;
        MR_Word RttiVarMaps_38;
        MR_Word STATE_VARIABLE_Goal_50_50;
        MR_Word STATE_VARIABLE_ProcInfo_51_51;
        MR_Word STATE_VARIABLE_ProcInfo_52_52;
        MR_Word UnusedVars_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FixupInfo_28, (MR_Integer) 2))));
        MR_Word InstMap0_80;
        MR_Word InstMap_81;
        MR_Word VarTable1_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FixupInfo_28, (MR_Integer) 3))));
        MR_Word STATE_VARIABLE_Goal_48_89;
        MR_Word GoalInfo_90;
        MR_Word Var_36;

        InstMap0_80 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_70);
        hlds__instmap__instmap_delta_delete_vars_3_p_0(UnusedVars_71, InstMap0_80, &InstMap_81);
        hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMap_81, GoalInfo1_70, &GoalInfo_90);
        {
          STATE_VARIABLE_Goal_48_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_48_89, 0) = ((MR_Box) (GoalExpr1_69));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_48_89, 1) = ((MR_Box) (GoalInfo_90));
        }
        NonLocals_34 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_23);
        hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &RttiVarMaps0_35);
        hlds__quantification__implicitly_quantify_goal_general_vt_9_p_0((MR_Integer) 1, NonLocals_34, &Var_36, STATE_VARIABLE_Goal_48_89, &STATE_VARIABLE_Goal_50_50, VarTable1_88, &VarTable_37, RttiVarMaps0_35, &RttiVarMaps_38);
        hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Goal_50_50, STATE_VARIABLE_ProcInfo_47_47, &STATE_VARIABLE_ProcInfo_51_51);
        hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_37, STATE_VARIABLE_ProcInfo_51_51, &STATE_VARIABLE_ProcInfo_52_52);
        hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_38, STATE_VARIABLE_ProcInfo_52_52, &ProcInfo_25);
      }
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
    MR_Word Case0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_15;
    MR_Word Cases_16;
    MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_13, (MR_Integer) 0))));
    MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_13, (MR_Integer) 1))));
    MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_13, (MR_Integer) 2))));
    MR_Word Goal_22;
    MR_Word LocalChanged_23;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word STATE_VARIABLE_Changed_29_29;
    MR_Word Goal1_36;
    MR_Word GoalExpr1_37;
    MR_Word GoalInfo1_38;
    MR_Word GoalInfo_40;

    transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(Goal0_21, &Goal1_36, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_28_28, &LocalChanged_23);
    GoalExpr1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_36, (MR_Integer) 0))));
    GoalInfo1_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_36, (MR_Integer) 1))));
    switch (LocalChanged_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          GoalInfo_40 = GoalInfo1_38;
          STATE_VARIABLE_Changed_29_29 = STATE_VARIABLE_Changed_0_5;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UnusedVars_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 2))));
          MR_Word InstMap0_48;
          MR_Word InstMap_49;

          InstMap0_48 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_38);
          hlds__instmap__instmap_delta_delete_vars_3_p_0(UnusedVars_39, InstMap0_48, &InstMap_49);
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMap_49, GoalInfo1_38, &GoalInfo_40);
          STATE_VARIABLE_Changed_29_29 = (MR_Integer) 1;
        }
        break;
    }
    {
      Goal_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_22, 0) = ((MR_Box) (GoalExpr1_37));
      MR_hl_field(MR_mktag(0), Goal_22, 1) = ((MR_Box) (GoalInfo_40));
    }
    {
      Case_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_15, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(MR_mktag(0), Case_15, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(MR_mktag(0), Case_15, 2) = ((MR_Box) (Goal_22));
    }
    transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(Cases0_14, &Cases_16, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_4, STATE_VARIABLE_Changed_29_29, STATE_VARIABLE_Changed_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_16));
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
    MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_15;
    MR_Word Goals_16;
    MR_Word LocalChanged_19;
    MR_Word STATE_VARIABLE_Info_24_24;
    MR_Word STATE_VARIABLE_Changed_25_25;
    MR_Word Goal1_32;
    MR_Word GoalExpr1_33;
    MR_Word GoalInfo1_34;
    MR_Word GoalInfo_36;

    transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(Goal0_13, &Goal1_32, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_24_24, &LocalChanged_19);
    GoalExpr1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_32, (MR_Integer) 0))));
    GoalInfo1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_32, (MR_Integer) 1))));
    switch (LocalChanged_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          GoalInfo_36 = GoalInfo1_34;
          STATE_VARIABLE_Changed_25_25 = STATE_VARIABLE_Changed_0_5;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UnusedVars_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 2))));
          MR_Word InstMap0_44;
          MR_Word InstMap_45;

          InstMap0_44 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_34);
          hlds__instmap__instmap_delta_delete_vars_3_p_0(UnusedVars_35, InstMap0_44, &InstMap_45);
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMap_45, GoalInfo1_34, &GoalInfo_36);
          STATE_VARIABLE_Changed_25_25 = (MR_Integer) 1;
        }
        break;
    }
    {
      Goal_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_15, 0) = ((MR_Box) (GoalExpr1_33));
      MR_hl_field(MR_mktag(0), Goal_15, 1) = ((MR_Box) (GoalInfo_36));
    }
    transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(Goals0_14, &Goals_16, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_4, STATE_VARIABLE_Changed_25_25, STATE_VARIABLE_Changed_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_16));
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
    MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word LocalChanged_19;
    MR_Word Goals1_21;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word STATE_VARIABLE_Changed_27_27;
    MR_Word Goal1_38;
    MR_Word GoalExpr1_39;
    MR_Word GoalInfo1_40;
    MR_Word GoalInfo_42;
    MR_Word Var_28;
    MR_Word Var_30;

    transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(Goal0_13, &Goal1_38, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_26_26, &LocalChanged_19);
    GoalExpr1_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_38, (MR_Integer) 0))));
    GoalInfo1_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_38, (MR_Integer) 1))));
    switch (LocalChanged_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          GoalInfo_42 = GoalInfo1_40;
          STATE_VARIABLE_Changed_27_27 = STATE_VARIABLE_Changed_0_5;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UnusedVars_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 2))));
          MR_Word InstMap0_50;
          MR_Word InstMap_51;

          InstMap0_50 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_40);
          hlds__instmap__instmap_delta_delete_vars_3_p_0(UnusedVars_41, InstMap0_50, &InstMap_51);
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMap_51, GoalInfo1_40, &GoalInfo_42);
          STATE_VARIABLE_Changed_27_27 = (MR_Integer) 1;
        }
        break;
    }
    {
      Goal_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_18, 0) = ((MR_Box) (GoalExpr1_39));
      MR_hl_field(MR_mktag(0), Goal_18, 1) = ((MR_Box) (GoalInfo_42));
    }
    transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(Goals0_14, &Goals1_21, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_4, STATE_VARIABLE_Changed_27_27, STATE_VARIABLE_Changed_6);
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 0))));
    Var_30 = hlds__make_goal__true_goal_expr_0_f_0();
    succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(Var_28, Var_30);
    if (succeeded)
      *HeadVar__2_2 = Goals1_21;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_21));
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
  MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 0))));
  MR_Word GoalInfo0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NegGoal0_16 = (MR_Word) ((MR_Word) (GoalExpr0_10));
        MR_Word NegGoal_17;
        MR_Word GoalExpr_106;

        transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(NegGoal0_16, &NegGoal_17, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, Changed_9);
        GoalExpr_106 = (MR_Word) ((MR_Word) (NegGoal_17));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_7 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_106));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unify_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_10, (MR_Integer) 3))));
        MR_Word ModuleInfo_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 0))));
        MR_Word GoalExpr_115;
        MR_Word UnusedVars_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 2))));
        MR_Word ChangedPrime_56;

        succeeded = transform_hlds__unused_args__need_unify_4_p_0(ModuleInfo_55, UnusedVars_116, Unify_53, &ChangedPrime_56);
        if (succeeded)
        {
          GoalExpr_115 = GoalExpr0_10;
          *Changed_9 = ChangedPrime_56;
        }
        else
        {
          GoalExpr_115 = hlds__make_goal__true_goal_expr_0_f_0();
          *Changed_9 = (MR_Integer) 1;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_7 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_115));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
        }
        *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_10, (MR_Integer) 0))));
        MR_Integer ProcId_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_10, (MR_Integer) 1))));
        MR_Word ArgVars0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_10, (MR_Integer) 2))));
        MR_Word Builtin_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_10, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word UnifyC_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_10, (MR_Integer) 4))));
        MR_Word ProcCallInfo_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 1))));
        MR_Word CallInfo_44;
        MR_Word Var_94;
        MR_Box conv14_CallInfo_44;

        {
          Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (PredId_37));
          MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (ProcId_38));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0), ProcCallInfo_43, ((MR_Box) (Var_94)), &conv14_CallInfo_44);
        if (succeeded)
        {
          CallInfo_44 = ((MR_Word) (conv14_CallInfo_44));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word NewPredId_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallInfo_44, (MR_Integer) 0))));
          MR_Integer NewProcId_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CallInfo_44, (MR_Integer) 1))));
          MR_Word NewName_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallInfo_44, (MR_Integer) 2))));
          MR_Word UnusedArgs_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallInfo_44, (MR_Integer) 3))));
          MR_Word ArgVars_49;
          MR_Word GoalExpr_112;

          *Changed_9 = (MR_Integer) 1;
          transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs_48, ArgVars0_39, &ArgVars_49);
          {
            GoalExpr_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), GoalExpr_112, 0) = ((MR_Box) (NewPredId_45));
            MR_hl_field(MR_mktag(2), GoalExpr_112, 1) = ((MR_Box) (NewProcId_46));
            MR_hl_field(MR_mktag(2), GoalExpr_112, 2) = ((MR_Box) (ArgVars_49));
            MR_hl_field(MR_mktag(2), GoalExpr_112, 3) = (MR_Box) ((MR_Unsigned) (Builtin_40));
            MR_hl_field(MR_mktag(2), GoalExpr_112, 4) = ((MR_Box) (UnifyC_41));
            MR_hl_field(MR_mktag(2), GoalExpr_112, 5) = ((MR_Box) (NewName_47));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_7 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_112));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
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
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 0))))) {
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
            MR_Word Attributes_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
            MR_Word Args0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 4))));
            MR_Word ExtraArgs0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 5))));
            MR_Word MaybeTraceRuntimeCond_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 6))));
            MR_Word Impl_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 7))));
            MR_Word Subst0_68;
            MR_Word Args_69;
            MR_Word Subst1_70;
            MR_Word ArgsChanged_71;
            MR_Word ExtraArgs_72;
            MR_Word Subst_73;
            MR_Word GoalInfo_74;
            MR_Word STATE_VARIABLE_Info_97_97;
            MR_Word GoalExpr_117;
            MR_Word PredId_118 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
            MR_Integer ProcId_119 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3))));
            MR_Box conv6_Subst1_70;
            MR_Box conv5_STATE_VARIABLE_Info_97_97;
            MR_Box conv4_ArgsChanged_71;
            MR_Box conv13_Subst_73;
            MR_Box conv12_STATE_VARIABLE_Info_77;
            MR_Box conv11_Changed_9;

            mercury__map__init_1_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), &Subst0_68);
            mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[5]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_fixup_info_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[11]), Args0_63, &Args_69, ((MR_Box) (Subst0_68)), &conv6_Subst1_70, ((MR_Box) (STATE_VARIABLE_Info_0_76)), &conv5_STATE_VARIABLE_Info_97_97, ((MR_Box) ((MR_Integer) 0)), &conv4_ArgsChanged_71);
            Subst1_70 = ((MR_Word) (conv6_Subst1_70));
            STATE_VARIABLE_Info_97_97 = ((MR_Word) (conv5_STATE_VARIABLE_Info_97_97));
            ArgsChanged_71 = ((MR_Word) (conv4_ArgsChanged_71));
            mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[5]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_fixup_info_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[12]), ExtraArgs0_64, &ExtraArgs_72, ((MR_Box) (Subst1_70)), &conv13_Subst_73, ((MR_Box) (STATE_VARIABLE_Info_97_97)), &conv12_STATE_VARIABLE_Info_77, ((MR_Box) (ArgsChanged_71)), &conv11_Changed_9);
            Subst_73 = ((MR_Word) (conv13_Subst_73));
            *STATE_VARIABLE_Info_77 = ((MR_Word) (conv12_STATE_VARIABLE_Info_77));
            *Changed_9 = ((MR_Word) (conv11_Changed_9));
            {
              GoalExpr_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_117, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), GoalExpr_117, 1) = ((MR_Box) (Attributes_62));
              MR_hl_field(MR_mktag(3), GoalExpr_117, 2) = ((MR_Box) (PredId_118));
              MR_hl_field(MR_mktag(3), GoalExpr_117, 3) = ((MR_Box) (ProcId_119));
              MR_hl_field(MR_mktag(3), GoalExpr_117, 4) = ((MR_Box) (Args_69));
              MR_hl_field(MR_mktag(3), GoalExpr_117, 5) = ((MR_Box) (ExtraArgs_72));
              MR_hl_field(MR_mktag(3), GoalExpr_117, 6) = ((MR_Box) (MaybeTraceRuntimeCond_65));
              MR_hl_field(MR_mktag(3), GoalExpr_117, 7) = ((MR_Box) (Impl_66));
            }
            hlds__hlds_goal__rename_vars_in_goal_info_4_p_0((MR_Integer) 1, Subst_73, GoalInfo0_11, &GoalInfo_74);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_117));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_74));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
            MR_Word Goals_14;
            MR_Word GoalExpr_15;

            transform_hlds__unused_args__unused_args_fixup_conjuncts_6_p_0(Goals0_13, &Goals_14, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, (MR_Integer) 0, Changed_9);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = (MR_Box) ((MR_Unsigned) (ConjType_12));
              MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (Goals_14));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_15));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
            MR_Word Goals_104;
            MR_Word GoalExpr_105;

            transform_hlds__unused_args__unused_args_fixup_disjuncts_6_p_0(Goals0_103, &Goals_104, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, (MR_Integer) 0, Changed_9);
            {
              GoalExpr_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_105, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), GoalExpr_105, 1) = ((MR_Box) (Goals_104));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_105));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
            MR_Word CanFail_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3))));
            MR_Word Cases_21;
            MR_Word GoalExpr_107;

            transform_hlds__unused_args__unused_args_fixup_cases_6_p_0(Cases0_20, &Cases_21, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, (MR_Integer) 0, Changed_9);
            {
              GoalExpr_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_107, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), GoalExpr_107, 1) = ((MR_Box) (Var_18));
              MR_hl_field(MR_mktag(3), GoalExpr_107, 2) = (MR_Box) ((MR_Unsigned) (CanFail_19));
              MR_hl_field(MR_mktag(3), GoalExpr_107, 3) = ((MR_Box) (Cases_21));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_107));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
            MR_Word SubGoal0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
            MR_Word TermVar_34;
            MR_Word Var_92;

            succeeded = ((((MR_tag((MR_Word) Reason_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_32, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              TermVar_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_32, (MR_Integer) 1))));
              Var_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_32, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_92 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              MR_Word UnusedVars_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_76, (MR_Integer) 2))));

              succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), ((MR_Box) (TermVar_34)), UnusedVars_35);
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
              MR_Word SubGoal_36;
              MR_Word GoalExpr_109;

              transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(SubGoal0_33, &SubGoal_36, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, Changed_9);
              {
                GoalExpr_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_109, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_109, 1) = ((MR_Box) (Reason_32));
                MR_hl_field(MR_mktag(3), GoalExpr_109, 2) = ((MR_Box) (SubGoal_36));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_109));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
            MR_Word Cond0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
            MR_Word Then0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3))));
            MR_Word Else0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 4))));
            MR_Word Cond_26;
            MR_Word Changed1_27;
            MR_Word Then_28;
            MR_Word Changed2_29;
            MR_Word Else_30;
            MR_Word Changed3_31;
            MR_Word STATE_VARIABLE_Info_85_85;
            MR_Word STATE_VARIABLE_Info_86_86;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word GoalExpr_108;

            transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(Cond0_23, &Cond_26, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_85_85, &Changed1_27);
            transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(Then0_24, &Then_28, STATE_VARIABLE_Info_85_85, &STATE_VARIABLE_Info_86_86, &Changed2_29);
            transform_hlds__unused_args__unused_args_fixup_goal_5_p_0(Else0_25, &Else_30, STATE_VARIABLE_Info_86_86, STATE_VARIABLE_Info_77, &Changed3_31);
            {
              Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Changed3_31));
              MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Changed2_29));
              MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
            }
            {
              Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Changed1_27));
              MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_89));
            }
            mercury__bool__or_list_2_p_0(Var_88, Changed_9);
            {
              GoalExpr_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_108, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), GoalExpr_108, 1) = ((MR_Box) (Vars_22));
              MR_hl_field(MR_mktag(3), GoalExpr_108, 2) = ((MR_Box) (Cond_26));
              MR_hl_field(MR_mktag(3), GoalExpr_108, 3) = ((MR_Box) (Then_28));
              MR_hl_field(MR_mktag(3), GoalExpr_108, 4) = ((MR_Box) (Else_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_108));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
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
  MR_Word GoalInfo_14;

  transform_hlds__unused_args__unused_args_fixup_goal_expr_5_p_0(Goal0_6, &Goal1_10, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16, Changed_9);
  GoalExpr1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_10, (MR_Integer) 0))));
  GoalInfo1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_10, (MR_Integer) 1))));
  switch (*Changed_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      GoalInfo_14 = GoalInfo1_12;
      break;
    case (MR_Integer) 1:
      {
        MR_Word UnusedVars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_16, (MR_Integer) 2))));
        MR_Word InstMap0_24;
        MR_Word InstMap_25;

        InstMap0_24 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_12);
        hlds__instmap__instmap_delta_delete_vars_3_p_0(UnusedVars_13, InstMap0_24, &InstMap_25);
        hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMap_25, GoalInfo1_12, &GoalInfo_14);
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_7 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr1_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_14));
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
        MR_Word LVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_7, (MR_Integer) 0))));

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
        MR_Word ArgVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unify_7, (MR_Integer) 2))));
        MR_Word ArgModes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unify_7, (MR_Integer) 3))));
        MR_Word CanFail_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unify_7, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
        MR_Word LVar_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unify_7, (MR_Integer) 0))));

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
        MR_Word Target_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unify_7, (MR_Integer) 0))));

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
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unify_7, (MR_Integer) 0))))) {
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
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_9, (MR_Integer) 1))));
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_9, (MR_Integer) 0))));

      if ((ArgModes_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.check_deconstruct_args\'/6", (MR_String) "mismatched lists");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word HeadArgMode_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_10, (MR_Integer) 0))));
        MR_Word TailArgModes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_10, (MR_Integer) 1))));
        MR_Word TypeInfo_33_33;
        MR_Word InitX_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArgMode_19, (MR_Integer) 0))));
        MR_Word InitY_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArgMode_19, (MR_Integer) 2))));
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (InitX_21));
          MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (InitY_23));
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
  MR_Word HeadVars_55;
  MR_Word Goal0_56;
  MR_Word GoalInfo0_58;
  MR_Word Determinism_59;
  MR_Word GoalInfo1_60;
  MR_Word VarTable0_61;
  MR_Word NonLocals_62;
  MR_Word HeadVarEntries_63;
  MR_Word VarTable1_64;
  MR_Word RttiVarMaps0_65;
  MR_Word NewHeadVars_66;
  MR_Word GoalExpr_67;
  MR_Word Goal1_68;
  MR_Word Goal_70;
  MR_Word VarTable_71;
  MR_Word RttiVarMaps_72;
  MR_Word Var_76;
  MR_Word Var_78;
  MR_Word STATE_VARIABLE_OldProc_42_79;
  MR_Word STATE_VARIABLE_OldProc_43_80;
  MR_Word Var_69;
  MR_Word Var_33;

  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (PredId_11));
    MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ProcId_13));
  }
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(UnusedArgs2_18, (MR_Word) (((MR_Box) ((MR_Unsigned) 12U))), Var_38, OrigPredInfo_15, &ExtraPredInfo0_20);
  PredModuleName_21 = hlds__hlds_pred__pred_info_module_1_f_0(OrigPredInfo_15);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(OrigProcInfo_16, &HeadVars_55);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(OrigProcInfo_16, &Goal0_56);
  GoalInfo0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_56, (MR_Integer) 1))));
  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(OrigProcInfo_16, &Determinism_59);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Determinism_59, GoalInfo0_58, &GoalInfo1_60);
  hlds__hlds_pred__proc_info_get_var_table_3_p_0(STATE_VARIABLE_ModuleInfo_0_35, OrigProcInfo_16, &VarTable0_61);
  mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), HeadVars_55, &NonLocals_62);
  parse_tree__var_table__lookup_var_entries_3_p_0(VarTable0_61, HeadVars_55, &HeadVarEntries_63);
  parse_tree__var_table__var_table_from_corresponding_lists_3_p_0(HeadVars_55, HeadVarEntries_63, &VarTable1_64);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(OrigProcInfo_16, &RttiVarMaps0_65);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs_17, HeadVars_55, &NewHeadVars_66);
  {
    Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (PredModuleName_21));
    MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (NewPredName_14));
  }
  {
    GoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), GoalExpr_67, 0) = ((MR_Box) (NewPredId_12));
    MR_hl_field(MR_mktag(2), GoalExpr_67, 1) = ((MR_Box) (ProcId_13));
    MR_hl_field(MR_mktag(2), GoalExpr_67, 2) = ((MR_Box) (NewHeadVars_66));
    MR_hl_field(MR_mktag(2), GoalExpr_67, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(2), GoalExpr_67, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(2), GoalExpr_67, 5) = ((MR_Box) (Var_76));
  }
  {
    Goal1_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Goal1_68, 0) = ((MR_Box) (GoalExpr_67));
    MR_hl_field(MR_mktag(0), Goal1_68, 1) = ((MR_Box) (GoalInfo1_60));
  }
  Var_78 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_62);
  hlds__quantification__implicitly_quantify_goal_general_vt_9_p_0((MR_Integer) 1, Var_78, &Var_69, Goal1_68, &Goal_70, VarTable1_64, &VarTable_71, RttiVarMaps0_65, &RttiVarMaps_72);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_70, OrigProcInfo_16, &STATE_VARIABLE_OldProc_42_79);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_71, STATE_VARIABLE_OldProc_42_79, &STATE_VARIABLE_OldProc_43_80);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_72, STATE_VARIABLE_OldProc_43_80, &ExtraProc0_22);
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

  transform_hlds__unused_args__make_intermod_proc_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_36);
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

  succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_create_new_pred__1104__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

  conv1_LambdaHeadVar__2_56 = transform_hlds__unused_args__IntroducedFrom__func__unused_args_create_new_pred__1097__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_56));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(
  MR_Word UnusedArgInfo_7,
  MR_Word OrigPredProcId_8,
  MR_Word STATE_VARIABLE_ProcCallInfo_0_48,
  MR_Word * STATE_VARIABLE_ProcCallInfo_49,
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
  OrigPredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigPredProcId_8, (MR_Integer) 0))));
  ProcId_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OrigPredProcId_8, (MR_Integer) 1))));
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_50, &Globals_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 499, &Intermod_18);
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
        MR_Integer PredArity_25;
        MR_Word FuncInfo_26;
        MR_Word Answer_27;
        MR_Word FilterUnused_28;
        MR_Word Var_60;

        hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_50, &AnalysisInfo0_19);
        transform_hlds__mmc_analysis__module_name_func_id_from_pred_info_4_p_0(OrigPredInfo_12, ProcId_16, &ModuleId_20, &FuncId_21);
        analysis__lookup_results_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_4[0]), AnalysisInfo0_19, ModuleId_20, FuncId_21, &IntermodResultsTriples_22);
        IntermodOldAnswers_23 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__unused_args_scalar_common_2[4]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[9]), IntermodResultsTriples_22);
        PredArity_25 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(OrigPredInfo_12);
        FuncInfo_26 = (MR_Word) (PredArity_25);
        Answer_27 = (MR_Word) (UnusedArgs_11);
        {
          FilterUnused_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FilterUnused_28, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[4]));
          MR_hl_field(MR_mktag(0), FilterUnused_28, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_2));
          MR_hl_field(MR_mktag(0), FilterUnused_28, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), FilterUnused_28, 3) = ((MR_Box) (FuncInfo_26));
          MR_hl_field(MR_mktag(0), FilterUnused_28, 4) = ((MR_Box) (Answer_27));
        }
        Var_60 = mercury__list__filter_2_f_0((MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0), FilterUnused_28, IntermodOldAnswers_23);
        IntermodOldArgLists_30 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[10]), Var_60);
      }
      break;
  }
  if ((UnusedArgs_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_ProcCallInfo_49 = STATE_VARIABLE_ProcCallInfo_0_48;
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
    MR_Word STATE_VARIABLE_ModuleInfo_65_65;
    MR_Word STATE_VARIABLE_ModuleInfo_67_67;
    MR_Word Var_68;
    MR_Word Var_61;
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
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_44, STATE_VARIABLE_ModuleInfo_0_50, &STATE_VARIABLE_ModuleInfo_65_65);
    {
      PredSymName_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PredSymName_45, 0) = ((MR_Box) (PredModuleName_14));
      MR_hl_field(MR_mktag(1), PredSymName_45, 1) = ((MR_Box) (NewPredName_38));
    }
    {
      OrigToNew_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OrigToNew_46, 0) = ((MR_Box) (NewPredId_43));
      MR_hl_field(MR_mktag(0), OrigToNew_46, 1) = ((MR_Box) (ProcId_16));
      MR_hl_field(MR_mktag(0), OrigToNew_46, 2) = ((MR_Box) (PredSymName_45));
      MR_hl_field(MR_mktag(0), OrigToNew_46, 3) = ((MR_Box) (UnusedArgs_11));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0), ((MR_Box) (OrigPredProcId_8)), ((MR_Box) (OrigToNew_46)), STATE_VARIABLE_ProcCallInfo_0_48, STATE_VARIABLE_ProcCallInfo_49);
    transform_hlds__unused_args__create_call_goal_8_p_0(STATE_VARIABLE_ModuleInfo_65_65, UnusedArgs_11, NewPredId_43, ProcId_16, PredModuleName_14, NewPredName_38, OrigProcInfo_13, &ForwardingProcInfo_47);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(OrigPredId_15, ProcId_16, OrigPredInfo_12, ForwardingProcInfo_47, STATE_VARIABLE_ModuleInfo_65_65, &STATE_VARIABLE_ModuleInfo_67_67);
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_create_new_pred_6_p_0_4));
      MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (OrigPredId_15));
      MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (NewPredId_43));
      MR_hl_field(MR_mktag(0), Var_68, 5) = ((MR_Box) (ProcId_16));
      MR_hl_field(MR_mktag(0), Var_68, 6) = ((MR_Box) (NewPredName_38));
      MR_hl_field(MR_mktag(0), Var_68, 7) = ((MR_Box) (OrigPredInfo_12));
      MR_hl_field(MR_mktag(0), Var_68, 8) = ((MR_Box) (OrigProcInfo_13));
      MR_hl_field(MR_mktag(0), Var_68, 9) = ((MR_Box) (UnusedArgs_11));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_68, IntermodOldArgLists_30, ((MR_Box) (STATE_VARIABLE_ModuleInfo_67_67)), &conv4_STATE_VARIABLE_ModuleInfo_51);
    *STATE_VARIABLE_ModuleInfo_51 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_51));
  }
}

static void MR_CALL 
transform_hlds__unused_args__create_call_goal_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word UnusedArgs_10,
  MR_Word NewPredId_11,
  MR_Integer NewProcId_12,
  MR_Word PredModuleName_13,
  MR_String PredName_14,
  MR_Word STATE_VARIABLE_OldProc_0_34,
  MR_Word * STATE_VARIABLE_OldProc_35)
{
  MR_Word HeadVars_16;
  MR_Word Goal0_17;
  MR_Word GoalInfo0_19;
  MR_Word Determinism_20;
  MR_Word GoalInfo1_21;
  MR_Word VarTable0_22;
  MR_Word NonLocals_23;
  MR_Word HeadVarEntries_24;
  MR_Word VarTable1_25;
  MR_Word RttiVarMaps0_26;
  MR_Word NewHeadVars_27;
  MR_Word GoalExpr_28;
  MR_Word Goal1_29;
  MR_Word Goal_31;
  MR_Word VarTable_32;
  MR_Word RttiVarMaps_33;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Word STATE_VARIABLE_OldProc_42_42;
  MR_Word STATE_VARIABLE_OldProc_43_43;
  MR_Word Var_30;

  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_OldProc_0_34, &HeadVars_16);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_OldProc_0_34, &Goal0_17);
  GoalInfo0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_17, (MR_Integer) 1))));
  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_OldProc_0_34, &Determinism_20);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Determinism_20, GoalInfo0_19, &GoalInfo1_21);
  hlds__hlds_pred__proc_info_get_var_table_3_p_0(ModuleInfo_9, STATE_VARIABLE_OldProc_0_34, &VarTable0_22);
  mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), HeadVars_16, &NonLocals_23);
  parse_tree__var_table__lookup_var_entries_3_p_0(VarTable0_22, HeadVars_16, &HeadVarEntries_24);
  parse_tree__var_table__var_table_from_corresponding_lists_3_p_0(HeadVars_16, HeadVarEntries_24, &VarTable1_25);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_OldProc_0_34, &RttiVarMaps0_26);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs_10, HeadVars_16, &NewHeadVars_27);
  {
    Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (PredModuleName_13));
    MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (PredName_14));
  }
  {
    GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), GoalExpr_28, 0) = ((MR_Box) (NewPredId_11));
    MR_hl_field(MR_mktag(2), GoalExpr_28, 1) = ((MR_Box) (NewProcId_12));
    MR_hl_field(MR_mktag(2), GoalExpr_28, 2) = ((MR_Box) (NewHeadVars_27));
    MR_hl_field(MR_mktag(2), GoalExpr_28, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(2), GoalExpr_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(2), GoalExpr_28, 5) = ((MR_Box) (Var_39));
  }
  {
    Goal1_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Goal1_29, 0) = ((MR_Box) (GoalExpr_28));
    MR_hl_field(MR_mktag(0), Goal1_29, 1) = ((MR_Box) (GoalInfo1_21));
  }
  Var_41 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_23);
  hlds__quantification__implicitly_quantify_goal_general_vt_9_p_0((MR_Integer) 1, Var_41, &Var_30, Goal1_29, &Goal_31, VarTable1_25, &VarTable_32, RttiVarMaps0_26, &RttiVarMaps_33);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_31, STATE_VARIABLE_OldProc_0_34, &STATE_VARIABLE_OldProc_42_42);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_32, STATE_VARIABLE_OldProc_42_42, &STATE_VARIABLE_OldProc_43_43);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_33, STATE_VARIABLE_OldProc_43_43, STATE_VARIABLE_OldProc_35);
}

static void MR_CALL 
transform_hlds__unused_args__add_rev_arg_dep_5_p_0(
  MR_Word Var_6,
  MR_Word PredProcId_7,
  MR_Word Arg_8,
  MR_Word STATE_VARIABLE_VarDep_0_10,
  MR_Word * STATE_VARIABLE_VarDep_11)
{
  MR_bool succeeded;
  MR_Word VarUsage0_18;
  MR_Box conv0_VarUsage0_18;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), STATE_VARIABLE_VarDep_0_10, ((MR_Box) (Arg_8)), &conv0_VarUsage0_18);
  if (succeeded)
  {
    VarUsage0_18 = ((MR_Word) (conv0_VarUsage0_18));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word VarDep_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarUsage0_18, (MR_Integer) 0))));
    MR_Word ArgDep0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarUsage0_18, (MR_Integer) 1))));
    MR_Word ArgDep_20;
    MR_Word VarUsage_21;
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (PredProcId_7));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (Var_6));
    }
    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0), ((MR_Box) (Var_22)), ArgDep0_19, &ArgDep_20);
    {
      VarUsage_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), VarUsage_21, 0) = ((MR_Box) (VarDep_17));
      MR_hl_field(MR_mktag(0), VarUsage_21, 1) = ((MR_Box) (ArgDep_20));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Arg_8)), ((MR_Box) (VarUsage_21)), STATE_VARIABLE_VarDep_0_10, STATE_VARIABLE_VarDep_11);
  }
  else
    *STATE_VARIABLE_VarDep_11 = STATE_VARIABLE_VarDep_0_10;
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

static MR_Word MR_CALL 
transform_hlds__unused_args__get_unused_args_1_f_0(
  MR_Word UnusedArgs_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (UnusedArgs_3);

  return HeadVar__2_2;
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_ProcCallInfo_49;
  MR_Word conv4_STATE_VARIABLE_ModuleInfo_51;

  transform_hlds__unused_args__unused_args_create_new_pred_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_ProcCallInfo_49, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_ModuleInfo_51);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_ProcCallInfo_49));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_ModuleInfo_51));
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_AnalysisInfo_13;

  transform_hlds__unused_args__record_intermod_dependencies_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AnalysisInfo_13);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AnalysisInfo_13));
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AnalysisInfo_13;

  transform_hlds__unused_args__maybe_record_intermod_unused_args_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AnalysisInfo_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AnalysisInfo_13));
}

void MR_CALL 
transform_hlds__unused_args__unused_args_process_module_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word * Specs_6,
  MR_Word * UnusedArgInfos_7)
{
  MR_bool succeeded;
  MR_Word Globals_8;
  MR_Word VeryVerbose_9;
  MR_Word VarUsage0_10;
  MR_Word PredProcIds_11;
  MR_Word ProcCallInfo0_12;
  MR_Word VarUsage_13;
  MR_Word UnusedArgInfo0_14;
  MR_Word UnusedArgInfo_15;
  MR_Word PredProcIdsToFix_16;
  MR_Word OpMode_17;
  MR_Word IntermodAnalysis_18;
  MR_Word DoGather_19;
  MR_Word DoWarn_20;
  MR_Word OptTuple_26;
  MR_Word OptUnusedArgs_27;
  MR_Word STATE_VARIABLE_ModuleInfo_32_32;
  MR_Word STATE_VARIABLE_ModuleInfo_46_46;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_42;
  MR_Word Var_43;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &Globals_8);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 72, &VeryVerbose_9);
  transform_hlds__unused_args__init_var_usage_5_p_0(&VarUsage0_10, &PredProcIds_11, &ProcCallInfo0_12, STATE_VARIABLE_ModuleInfo_0_29, &STATE_VARIABLE_ModuleInfo_32_32);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_112_97_115_115_95_95_91_50_93_95_48_5_p_0((MR_Integer) 0, PredProcIds_11, VarUsage0_10, &VarUsage_13);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), &UnusedArgInfo0_14);
  transform_hlds__unused_args__get_unused_arg_info_5_p_0(STATE_VARIABLE_ModuleInfo_32_32, PredProcIds_11, VarUsage_13, UnusedArgInfo0_14, &UnusedArgInfo_15);
  mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), UnusedArgInfo_15, &PredProcIdsToFix_16);
  libs__globals__get_op_mode_2_p_0(Globals_8, &OpMode_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 499, &IntermodAnalysis_18);
  succeeded = (IntermodAnalysis_18 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) OpMode_17)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_17, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_35, (MR_Integer) 0))));
        succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
    DoGather_19 = (MR_Integer) 1;
  else
    DoGather_19 = (MR_Integer) 0;
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 14, &DoWarn_20);
  succeeded = (DoWarn_20 == (MR_Integer) 1);
  if (!(succeeded))
  {
    MR_Word Var_38;
    MR_Word Var_39;

    succeeded = ((MR_tag((MR_Word) OpMode_17)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_17, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_38, (MR_Integer) 0))));
        succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
  {
    MR_Word WarnedPredIds0_21;
    MR_Word Var_41;

    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &WarnedPredIds0_21);
    Var_41 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0));
    transform_hlds__unused_args__gather_warnings_and_pragmas_10_p_0(STATE_VARIABLE_ModuleInfo_32_32, UnusedArgInfo_15, DoWarn_20, DoGather_19, PredProcIdsToFix_16, WarnedPredIds0_21, (MR_Word) ((MR_Unsigned) 0U), Specs_6, Var_41, UnusedArgInfos_7);
  }
  else
  {
    *Specs_6 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), UnusedArgInfos_7);
  }
  succeeded = ((MR_tag((MR_Word) OpMode_17)) == (MR_Integer) 3);
  if (succeeded)
  {
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_17, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_42, (MR_Integer) 0))));
      succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 8U));
    }
  }
  if (succeeded)
  {
    MR_Word AnalysisInfo0_22;
    MR_Word PredIds_23;
    MR_Word AnalysisInfo1_24;
    MR_Word AnalysisInfo_25;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Box conv1_AnalysisInfo1_24;
    MR_Box conv3_AnalysisInfo_25;

    hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_32_32, &AnalysisInfo0_22);
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_32_32, &PredIds_23);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_32_32));
      MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (UnusedArgInfo_15));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), Var_44, PredIds_23, ((MR_Box) (AnalysisInfo0_22)), &conv1_AnalysisInfo1_24);
    AnalysisInfo1_24 = ((MR_Word) (conv1_AnalysisInfo1_24));
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_32_32));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), Var_45, PredProcIds_11, ((MR_Box) (AnalysisInfo1_24)), &conv3_AnalysisInfo_25);
    AnalysisInfo_25 = ((MR_Word) (conv3_AnalysisInfo_25));
    hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_25, STATE_VARIABLE_ModuleInfo_32_32, &STATE_VARIABLE_ModuleInfo_46_46);
  }
  else
    STATE_VARIABLE_ModuleInfo_46_46 = STATE_VARIABLE_ModuleInfo_32_32;
  libs__globals__get_opt_tuple_2_p_0(Globals_8, &OptTuple_26);
  OptUnusedArgs_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_26, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
  switch (OptUnusedArgs_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_46_46;
      break;
    case (MR_Integer) 0:
      {
        MR_Word ProcCallInfo_28;
        MR_Word Var_47;
        MR_Word STATE_VARIABLE_ModuleInfo_48_48;
        MR_Word STATE_VARIABLE_ModuleInfo_49_49;
        MR_Box conv7_ProcCallInfo_28;
        MR_Box conv6_STATE_VARIABLE_ModuleInfo_48_48;

        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_7[1]));
          MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_process_module_4_p_0_3));
          MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (UnusedArgInfo_15));
        }
        mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_47, PredProcIdsToFix_16, ((MR_Box) (ProcCallInfo0_12)), &conv7_ProcCallInfo_28, ((MR_Box) (STATE_VARIABLE_ModuleInfo_46_46)), &conv6_STATE_VARIABLE_ModuleInfo_48_48);
        ProcCallInfo_28 = ((MR_Word) (conv7_ProcCallInfo_28));
        STATE_VARIABLE_ModuleInfo_48_48 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleInfo_48_48));
        transform_hlds__unused_args__unused_args_fixup_module_6_p_0(VeryVerbose_9, VarUsage_13, PredProcIds_11, ProcCallInfo_28, STATE_VARIABLE_ModuleInfo_48_48, &STATE_VARIABLE_ModuleInfo_49_49);
        succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0), ProcCallInfo_28);
        if (succeeded)
          *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_49_49;
        else
          hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_49_49, STATE_VARIABLE_ModuleInfo_30);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_117_115_101_100_95_97_114_103_115_95_112_97_115_115_95_95_91_50_93_95_48_5_p_0(
  MR_Integer PassNum_6,
  MR_Word LocalPredProcIds_8,
  MR_Word STATE_VARIABLE_VarUsage_0_13,
  MR_Word * STATE_VARIABLE_VarUsage_14)
{
  while (MR_TRUE)
  {
    MR_Word Changed_10;
    MR_Word STATE_VARIABLE_VarUsage_16_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    transform_hlds__unused_args__unused_args_single_pass_5_p_0(LocalPredProcIds_8, (MR_Integer) 0, &Changed_10, STATE_VARIABLE_VarUsage_0_13, &STATE_VARIABLE_VarUsage_16_16);
    switch (Changed_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_VarUsage_14 = STATE_VARIABLE_VarUsage_16_16;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) PassNum_6 + (MR_Unsigned) 1);
          MR_Integer next_value_of_PassNum_6 = Var_25;
          MR_Word next_value_of_STATE_VARIABLE_VarUsage_0_13 = STATE_VARIABLE_VarUsage_16_16;

          // direct tailcall eliminated
          ;
          PassNum_6 = next_value_of_PassNum_6;
          STATE_VARIABLE_VarUsage_0_13 = next_value_of_STATE_VARIABLE_VarUsage_0_13;
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
  MR_Word STATE_VARIABLE_VarUsage_0_4,
  MR_Word * STATE_VARIABLE_VarUsage_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_VarUsage_5 = STATE_VARIABLE_VarUsage_0_4;
      *STATE_VARIABLE_Changed_3 = STATE_VARIABLE_Changed_0_2;
    }
    else
    {
      MR_Word PredProcId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredProcIds_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Changed_20_20;
      MR_Word STATE_VARIABLE_VarUsage_21_21;
      MR_Word LocalUsages0_29;
      MR_Word Vars_30;
      MR_Word LocalChanged_31;
      MR_Word LocalUsages_32;
      MR_Box conv0_LocalUsages0_29;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_2;
      MR_Word next_value_of_STATE_VARIABLE_VarUsage_0_4;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), STATE_VARIABLE_VarUsage_0_4, ((MR_Box) (PredProcId_12)), &conv0_LocalUsages0_29);
      LocalUsages0_29 = ((MR_Word) (conv0_LocalUsages0_29));
      mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), LocalUsages0_29, &Vars_30);
      transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(STATE_VARIABLE_VarUsage_0_4, Vars_30, (MR_Integer) 0, &LocalChanged_31, LocalUsages0_29, &LocalUsages_32);
      switch (LocalChanged_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_Changed_20_20 = STATE_VARIABLE_Changed_0_2;
            STATE_VARIABLE_VarUsage_21_21 = STATE_VARIABLE_VarUsage_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), ((MR_Box) (PredProcId_12)), ((MR_Box) (LocalUsages_32)), STATE_VARIABLE_VarUsage_0_4, &STATE_VARIABLE_VarUsage_21_21);
            STATE_VARIABLE_Changed_20_20 = (MR_Integer) 1;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredProcIds_13;
      next_value_of_STATE_VARIABLE_Changed_0_2 = STATE_VARIABLE_Changed_20_20;
      next_value_of_STATE_VARIABLE_VarUsage_0_4 = STATE_VARIABLE_VarUsage_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Changed_0_2 = next_value_of_STATE_VARIABLE_Changed_0_2;
      STATE_VARIABLE_VarUsage_0_4 = next_value_of_STATE_VARIABLE_VarUsage_0_4;
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
    MR_Word TypeInfo_10_49;
    MR_Word TypeCtorInfo_11_50;
    MR_Word UsageInfos_46;
    MR_Box conv2_UsageInfos_46;

    (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProcId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34, (MR_Integer) 0))));
    (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__Argument_34, (MR_Integer) 1))));
    (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarUsage_1, ((MR_Box) ((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__PredProcId_23)), &conv2_UsageInfos_46);
    if ((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
    {
      UsageInfos_46 = ((MR_Word) (conv2_UsageInfos_46));
      (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
    }
    if ((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
    {
      TypeInfo_10_49 = (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]);
      TypeCtorInfo_11_50 = (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0);
      (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__contains_2_p_0(TypeInfo_10_49, TypeCtorInfo_11_50, UsageInfos_46, ((MR_Box) ((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgVar_24)));
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
      mercury__set__member_2_p_1((MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0), &(env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv1_Argument_34, (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgDep0_21, transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_3, env_ptr);
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
    (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__contains_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5, ((MR_Box) ((env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__X_35)));
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
      mercury__set__member_2_p_1((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), &(env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__conv3_X_35, (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarDep0_20, transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_7, env_ptr);
      (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_check_all_vars_6_p_0(
  MR_Word VarUsage_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Changed_0_3,
  MR_Word * STATE_VARIABLE_Changed_4,
  MR_Word STATE_VARIABLE_LocalVars_0_5,
  MR_Word * STATE_VARIABLE_LocalVars_6)
{
  struct transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0_s env;

  (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarUsage_1 = VarUsage_1;
  (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5 = STATE_VARIABLE_LocalVars_0_5;
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LocalVars_6 = (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
      *STATE_VARIABLE_Changed_4 = STATE_VARIABLE_Changed_0_3;
    }
    else
    {
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_LocalVars_30_30;
      MR_Word STATE_VARIABLE_Changed_31_31;
      MR_Word Usage_19;
      MR_Box conv0_Usage_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_3;
      MR_Word next_value_of_STATE_VARIABLE_LocalVars_0_5;

      (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5, ((MR_Box) (Var_15)), &conv0_Usage_19);
      if ((env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
      {
        Usage_19 = ((MR_Word) (conv0_Usage_19));
        (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded = MR_TRUE;
      }
      if ((env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
      {
        (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__VarDep0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Usage_19, (MR_Integer) 0))));
        (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__ArgDep0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Usage_19, (MR_Integer) 1))));
        transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_4(&env);
        if (!((env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded))
          transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_8(&env);
        if ((env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__succeeded)
        {
          mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Var_15)), (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5, &STATE_VARIABLE_LocalVars_30_30);
          STATE_VARIABLE_Changed_31_31 = (MR_Integer) 1;
        }
        else
        {
          STATE_VARIABLE_LocalVars_30_30 = (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
          STATE_VARIABLE_Changed_31_31 = STATE_VARIABLE_Changed_0_3;
        }
      }
      else
      {
        STATE_VARIABLE_LocalVars_30_30 = (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5;
        STATE_VARIABLE_Changed_31_31 = STATE_VARIABLE_Changed_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_16;
      next_value_of_STATE_VARIABLE_Changed_0_3 = STATE_VARIABLE_Changed_31_31;
      next_value_of_STATE_VARIABLE_LocalVars_0_5 = STATE_VARIABLE_LocalVars_30_30;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Changed_0_3 = next_value_of_STATE_VARIABLE_Changed_0_3;
      (env).transform_hlds__unused_args__unused_args_check_all_vars_6_p_0_env_0__STATE_VARIABLE_LocalVars_0_5 = next_value_of_STATE_VARIABLE_LocalVars_0_5;
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
  MR_Word STATE_VARIABLE_UnusedArgInfos_0_9,
  MR_Word * STATE_VARIABLE_UnusedArgInfos_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_UnusedArgInfos_10 = STATE_VARIABLE_UnusedArgInfos_0_9;
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    }
    else
    {
      MR_Word PredProcId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word PredProcIds_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_UnusedArgInfos_67_67;
      MR_Word STATE_VARIABLE_WarnedPredIds_68_68;
      MR_Word STATE_VARIABLE_Specs_69_69;
      MR_Word UnusedArgs_31;
      MR_Box conv0_UnusedArgs_31;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_WarnedPredIds_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_UnusedArgInfos_0_9;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), UnusedArgInfo_2, ((MR_Box) (PredProcId_26)), &conv0_UnusedArgs_31);
      if (succeeded)
      {
        UnusedArgs_31 = ((MR_Word) (conv0_UnusedArgs_31));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word PredId_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_26, (MR_Integer) 0))));
        MR_Integer ProcId_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_26, (MR_Integer) 1))));
        MR_Word PredInfo_34;
        MR_String Name_35;
        MR_Word PredStatus_36;
        MR_Word Markers_37;
        MR_Word TypeSpecInfo_44;
        MR_Word TypeSpecForcePreds_46;
        MR_Word Origin_49;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_String Var_60;
        MR_Integer Var_38;
        MR_Integer Position_39;
        MR_Integer Length_40;
        MR_Integer IdLen_41;
        MR_String Id_42;
        MR_String Var_61;
        MR_Integer Var_62;
        MR_Integer Var_63;
        MR_Integer Var_43;
        MR_Word TypeCtorInfo_72_72;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_32, &PredInfo_34);
        Name_35 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_34);
        succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_34);
        succeeded = !(succeeded);
        if (succeeded)
        {
          hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_34, &PredStatus_36);
          Var_58 = (MR_Word) (PredStatus_36);
          succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
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
                hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_34, &Markers_37);
                Var_59 = (MR_Integer) 0;
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_37, Var_59);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_60 = (MR_String) "__LambdaGoal__";
                  succeeded = mercury__string__sub_string_search_3_p_0(Name_35, Var_60, &Var_38);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    Var_61 = (MR_String) "__ho";
                    succeeded = mercury__string__sub_string_search_3_p_0(Name_35, Var_61, &Position_39);
                    if (succeeded)
                    {
                      mercury__string__length_2_p_0(Name_35, &Length_40);
                      Var_62 = (MR_Integer) ((MR_Unsigned) Length_40 - (MR_Unsigned) Position_39);
                      Var_63 = (MR_Integer) 4;
                      IdLen_41 = (MR_Integer) ((MR_Unsigned) Var_62 - (MR_Unsigned) Var_63);
                      mercury__string__right_3_p_0(Name_35, IdLen_41, &Id_42);
                      succeeded = mercury__string__to_int_2_p_0(Id_42, &Var_43);
                    }
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_1, &TypeSpecInfo_44);
                      TypeSpecForcePreds_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_44, (MR_Integer) 1))));
                      TypeCtorInfo_72_72 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
                      succeeded = mercury__set__member_2_p_0(TypeCtorInfo_72_72, ((MR_Box) (PredId_32)), TypeSpecForcePreds_46);
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_34, &Origin_49);
                        succeeded = ((((MR_tag((MR_Word) Origin_49)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_49, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_49, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_64)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_64, (MR_Integer) 0)))) == (MR_Integer) 3)));
                          if (succeeded)
                          {
                          }
                        }
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          Var_65 = (MR_Integer) 11;
                          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_37, Var_65);
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            Var_66 = (MR_Integer) 12;
                            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_37, Var_66);
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
          switch (DoPragma_4) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_UnusedArgInfos_67_67 = STATE_VARIABLE_UnusedArgInfos_0_9;
              break;
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
                {
                  succeeded = (UnusedArgs_31 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                  }
                }
                if (succeeded)
                {
                  MR_Word ModuleName_81;
                  MR_Word PredOrFunc_82;
                  MR_String PredName_83;
                  MR_Word PredSymName_84;
                  MR_Integer PredFormArity_85;
                  MR_Word UserArity_86;
                  MR_Integer ModeNum_87;
                  MR_Word PredNameArityPFMn_88;
                  MR_Word UnusedArgInfo_89;
                  MR_Word Var_90;

                  ModuleName_81 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_34);
                  PredOrFunc_82 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_34);
                  PredName_83 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_34);
                  {
                    PredSymName_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), PredSymName_84, 0) = ((MR_Box) (ModuleName_81));
                    MR_hl_field(MR_mktag(1), PredSymName_84, 1) = ((MR_Box) (PredName_83));
                  }
                  PredFormArity_85 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_34);
                  Var_90 = (MR_Word) (PredFormArity_85);
                  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_82, &UserArity_86, Var_90);
                  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_33, &ModeNum_87);
                  {
                    PredNameArityPFMn_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), PredNameArityPFMn_88, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_82));
                    MR_hl_field(MR_mktag(0), PredNameArityPFMn_88, 1) = ((MR_Box) (PredSymName_84));
                    MR_hl_field(MR_mktag(0), PredNameArityPFMn_88, 2) = ((MR_Box) (UserArity_86));
                    MR_hl_field(MR_mktag(0), PredNameArityPFMn_88, 3) = ((MR_Box) (ModeNum_87));
                  }
                  {
                    UnusedArgInfo_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), UnusedArgInfo_89, 0) = ((MR_Box) (PredNameArityPFMn_88));
                    MR_hl_field(MR_mktag(0), UnusedArgInfo_89, 1) = ((MR_Box) (UnusedArgs_31));
                  }
                  mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), ((MR_Box) (UnusedArgInfo_89)), STATE_VARIABLE_UnusedArgInfos_0_9, &STATE_VARIABLE_UnusedArgInfos_67_67);
                }
                else
                  STATE_VARIABLE_UnusedArgInfos_67_67 = STATE_VARIABLE_UnusedArgInfos_0_9;
              }
              break;
          }
          switch (DoWarn_3) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_WarnedPredIds_68_68 = STATE_VARIABLE_WarnedPredIds_0_6;
                STATE_VARIABLE_Specs_69_69 = STATE_VARIABLE_Specs_0_7;
              }
              break;
            case (MR_Integer) 1:
              transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0(PredInfo_34, PredId_32, ProcId_33, UnusedArgs_31, STATE_VARIABLE_WarnedPredIds_0_6, &STATE_VARIABLE_WarnedPredIds_68_68, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_69_69);
              break;
          }
        }
        else
        {
          STATE_VARIABLE_UnusedArgInfos_67_67 = STATE_VARIABLE_UnusedArgInfos_0_9;
          STATE_VARIABLE_Specs_69_69 = STATE_VARIABLE_Specs_0_7;
          STATE_VARIABLE_WarnedPredIds_68_68 = STATE_VARIABLE_WarnedPredIds_0_6;
        }
      }
      else
      {
        STATE_VARIABLE_UnusedArgInfos_67_67 = STATE_VARIABLE_UnusedArgInfos_0_9;
        STATE_VARIABLE_Specs_69_69 = STATE_VARIABLE_Specs_0_7;
        STATE_VARIABLE_WarnedPredIds_68_68 = STATE_VARIABLE_WarnedPredIds_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = PredProcIds_27;
      next_value_of_STATE_VARIABLE_WarnedPredIds_0_6 = STATE_VARIABLE_WarnedPredIds_68_68;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_69_69;
      next_value_of_STATE_VARIABLE_UnusedArgInfos_0_9 = STATE_VARIABLE_UnusedArgInfos_67_67;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_WarnedPredIds_0_6 = next_value_of_STATE_VARIABLE_WarnedPredIds_0_6;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      STATE_VARIABLE_UnusedArgInfos_0_9 = next_value_of_STATE_VARIABLE_UnusedArgInfos_0_9;
      continue;
    }
    break;
  }
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
    MR_Word Procs_17;
    MR_Word Proc_18;
    MR_Word HeadVars_19;
    MR_Integer NumHeadVars_20;
    MR_Integer NumToDrop_21;
    MR_Word UnusedArgs_22;
    MR_Integer Var_31;
    MR_Box conv0_Proc_18;

    mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_12)), STATE_VARIABLE_WarnedPredIds_0_26, STATE_VARIABLE_WarnedPredIds_27);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_11, &Procs_17);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_17, ((MR_Box) (ProcId_13)), &conv0_Proc_18);
    Proc_18 = ((MR_Word) (conv0_Proc_18));
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(Proc_18, &HeadVars_19);
    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), HeadVars_19, &NumHeadVars_20);
    Var_31 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_11);
    NumToDrop_21 = (MR_Integer) ((MR_Unsigned) NumHeadVars_20 - (MR_Unsigned) Var_31);
    transform_hlds__unused_args__drop_poly_inserted_args_3_p_0(NumToDrop_21, UnusedArgs0_14, &UnusedArgs_22);
    if ((UnusedArgs_22 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
    else
    {
      MR_Word Spec_25;

      Spec_25 = transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_49_93_95_48_3_f_0(PredInfo_11, UnusedArgs_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_29 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
      }
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_117_110_117_115_101_100_95_97_114_103_115_95_95_91_49_93_95_48_3_f_0(
  MR_Word PredInfo_6,
  MR_Word UnusedArgs_7)
{
  MR_bool succeeded;
  MR_Word Spec_8;
  MR_Integer NumArgs_9;
  MR_Word Context_10;
  MR_Word PredOrFunc_11;
  MR_Word ModuleName_12;
  MR_String PredName_13;
  MR_Integer Arity_14;
  MR_Word SNA_15;
  MR_Word Pieces1_16;
  MR_Word Pieces2_17;
  MR_Word Var_18;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_String Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_58;

  mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), UnusedArgs_7, &NumArgs_9);
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_6, &Context_10);
  PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
  ModuleName_12 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_6);
  PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_6);
  Arity_14 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_6);
  {
    Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (ModuleName_12));
    MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (PredName_13));
  }
  {
    SNA_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SNA_15, 0) = ((MR_Box) (Var_18));
    MR_hl_field(MR_mktag(0), SNA_15, 1) = ((MR_Box) (Arity_14));
  }
  Var_23 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_11);
  {
    Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_22, 0) = ((MR_Box) (Var_23));
  }
  {
    Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 10U));
    MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (SNA_15));
  }
  {
    Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[14])));
  }
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
  }
  {
    Pieces1_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Pieces1_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[9])));
    MR_hl_field(MR_mktag(1), Pieces1_16, 1) = ((MR_Box) (Var_21));
  }
  succeeded = (NumArgs_9 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word Var_35;
    MR_Word Var_38;

    if ((UnusedArgs_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box conv0_Var_38;

      conv0_Var_38 = mercury__require__unexpected_2_f_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[5]), (MR_String) "function \140transform_hlds.unused_args.format_arg_list\'/1", (MR_String) "empty list");
      Var_38 = ((MR_Word) (conv0_Var_38));
    }
    else
    {
      MR_Integer Arg_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), UnusedArgs_7, (MR_Integer) 0))));
      MR_Word Rest_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnusedArgs_7, (MR_Integer) 1))));
      MR_String ArgStr_68;

      ArgStr_68 = mercury__string__int_to_string_1_f_0(Arg_65);
      if ((Rest_66 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_71;

        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_71, 0) = ((MR_Box) (ArgStr_68));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Integer Head_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Rest_66, (MR_Integer) 0))));
        MR_Word Tail_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Rest_66, (MR_Integer) 1))));
        MR_Word Var_73;
        MR_Word Var_74;

        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_73, 0) = ((MR_Box) (ArgStr_68));
        }
        Var_74 = transform_hlds__unused_args__format_arg_list_2_2_f_0(Head_69, Tail_70);
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_74));
        }
      }
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[15])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    Pieces2_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_35, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[18])));
  }
  else
  {
    MR_Word Var_45;
    MR_Word Var_48;

    if ((UnusedArgs_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box conv1_Var_48;

      conv1_Var_48 = mercury__require__unexpected_2_f_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[5]), (MR_String) "function \140transform_hlds.unused_args.format_arg_list\'/1", (MR_String) "empty list");
      Var_48 = ((MR_Word) (conv1_Var_48));
    }
    else
    {
      MR_Integer Arg_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), UnusedArgs_7, (MR_Integer) 0))));
      MR_Word Rest_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnusedArgs_7, (MR_Integer) 1))));
      MR_String ArgStr_81;

      ArgStr_81 = mercury__string__int_to_string_1_f_0(Arg_78);
      if ((Rest_79 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_84;

        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_84, 0) = ((MR_Box) (ArgStr_81));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Integer Head_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Rest_79, (MR_Integer) 0))));
        MR_Word Tail_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Rest_79, (MR_Integer) 1))));
        MR_Word Var_86;
        MR_Word Var_87;

        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_86, 0) = ((MR_Box) (ArgStr_81));
        }
        Var_87 = transform_hlds__unused_args__format_arg_list_2_2_f_0(Head_82, Tail_83);
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_87));
        }
      }
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[19])));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
    }
    Pieces2_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_45, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__unused_args_scalar_common_1[21])));
  }
  Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_16, Pieces2_17);
  {
    Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140transform_hlds.unused_args.report_unused_args\'/3"));
    MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 104U));
    MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Context_10));
    MR_hl_field(MR_mktag(1), Spec_8, 4) = ((MR_Box) (Var_58));
  }
  return Spec_8;
}

static MR_Word MR_CALL 
transform_hlds__unused_args__format_arg_list_2_2_f_0(
  MR_Integer First_4,
  MR_Word List_5)
{
  MR_Word Pieces_6;
  MR_String FirstStr_7;

  FirstStr_7 = mercury__string__int_to_string_1_f_0(First_4);
  if ((List_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_17;
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_18, 0) = ((MR_Box) (FirstStr_7));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__unused_args_scalar_common_5[2])));
      MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_17));
    }
  }
  else
  {
    MR_Integer Second_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), List_5, (MR_Integer) 0))));
    MR_Word Rest_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_5, (MR_Integer) 1))));
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;

    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_13, 0) = ((MR_Box) (FirstStr_7));
    }
    Var_14 = transform_hlds__unused_args__format_arg_list_2_2_f_0(Second_8, Rest_9);
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
    }
    {
      Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__unused_args_scalar_common_1[22])));
      MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_12));
    }
  }
  return Pieces_6;
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
    MR_Integer HeadArgWith_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TailArgsWith_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadArgWithout_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailArgsWithout_9));
      }
  }
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_20;

  transform_hlds__unused_args__unused_args_fixup_proc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_20));
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_fixup_module_6_p_0(
  MR_Word VeryVerbose_7,
  MR_Word VarUsage_8,
  MR_Word PredProcIds_9,
  MR_Word ProcCallInfo_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  MR_Word Var_14;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_7[0]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_fixup_module_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (VeryVerbose_7));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (VarUsage_8));
    MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (ProcCallInfo_10));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_14, PredProcIds_9, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_12)), &conv1_STATE_VARIABLE_ModuleInfo_13);
  *STATE_VARIABLE_ModuleInfo_13 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_13));
}

static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_info_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word VarUsage_3,
  MR_Word STATE_VARIABLE_UnusedArgInfo_0_4,
  MR_Word * STATE_VARIABLE_UnusedArgInfo_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_UnusedArgInfo_5 = STATE_VARIABLE_UnusedArgInfo_0_4;
    else
    {
      MR_Word PredProcId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredProcIds_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_12, (MR_Integer) 0))));
      MR_Integer ProcId_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_12, (MR_Integer) 1))));
      MR_Word LocalVarUsage_18;
      MR_Word ProcInfo_20;
      MR_Word HeadVars_21;
      MR_Word UnusedArgs_22;
      MR_Word STATE_VARIABLE_UnusedArgInfo_26_26;
      MR_Box conv0_LocalVarUsage_18;
      MR_Word Var_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_UnusedArgInfo_0_4;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), VarUsage_3, ((MR_Box) (PredProcId_12)), &conv0_LocalVarUsage_18);
      LocalVarUsage_18 = ((MR_Word) (conv0_LocalVarUsage_18));
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_1, PredId_16, ProcId_17, &Var_19, &ProcInfo_20);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_20, &HeadVars_21);
      transform_hlds__unused_args__get_unused_arg_nos_4_p_0(LocalVarUsage_18, HeadVars_21, (MR_Integer) 1, &UnusedArgs_22);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[0]), ((MR_Box) (PredProcId_12)), ((MR_Box) (UnusedArgs_22)), STATE_VARIABLE_UnusedArgInfo_0_4, &STATE_VARIABLE_UnusedArgInfo_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredProcIds_13;
      next_value_of_STATE_VARIABLE_UnusedArgInfo_0_4 = STATE_VARIABLE_UnusedArgInfo_26_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_UnusedArgInfo_0_4 = next_value_of_STATE_VARIABLE_UnusedArgInfo_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__get_unused_arg_nos_4_p_0(
  MR_Word LocalVars_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNo_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadVar_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word HeadVars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer NextArg_12 = (MR_Integer) ((MR_Unsigned) ArgNo_3 + (MR_Unsigned) 1);
    MR_Word UnusedArgsTail_13;

    transform_hlds__unused_args__get_unused_arg_nos_4_p_0(LocalVars_1, HeadVars_9, NextArg_12, &UnusedArgsTail_13);
    succeeded = mercury__map__contains_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), LocalVars_1, ((MR_Box) (HeadVar_8)));
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgNo_3));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnusedArgsTail_13));
      }
    else
      *HeadVar__4_4 = UnusedArgsTail_13;
  }
}

static void MR_CALL 
transform_hlds__unused_args__init_var_usage_5_p_0(
  MR_Word * VarUsage_6,
  MR_Word * PredProcList_7,
  MR_Word * ProcCallInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14)
{
  MR_Word ProcCallInfo0_10;
  MR_Word VarUsage0_11;
  MR_Word PredIds_12;

  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0), &ProcCallInfo0_10);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), &VarUsage0_11);
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_13, &PredIds_12);
  transform_hlds__unused_args__setup_local_var_usage_9_p_0(PredIds_12, VarUsage0_11, VarUsage_6, (MR_Word) ((MR_Unsigned) 0U), PredProcList_7, ProcCallInfo0_10, ProcCallInfo_8, STATE_VARIABLE_ModuleInfo_0_13, STATE_VARIABLE_ModuleInfo_14);
}

static void MR_CALL 
transform_hlds__unused_args__setup_local_var_usage_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_VarUsage_0_2,
  MR_Word * STATE_VARIABLE_VarUsage_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
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
      *HeadVar__5_5 = HeadVar__4_4;
      *STATE_VARIABLE_VarUsage_3 = STATE_VARIABLE_VarUsage_0_2;
    }
    else
    {
      MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarUsage_36_36;
      MR_Word STATE_VARIABLE_PredProcList_37_37;
      MR_Word STATE_VARIABLE_OptProcs_38_38;
      MR_Word STATE_VARIABLE_ModuleInfo_39_39;
      MR_Word PredInfo_53;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarUsage_0_2;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_OptProcs_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_8;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, PredId_22, &PredInfo_53);
      succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_53);
      if (!(succeeded))
      {
        {
          MR_Word Markers_54;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_53, &Markers_54);
          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_54, (MR_Integer) 0);
        }
        if (!(succeeded))
        {
          MR_Word Origin_55;

          hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_53, &Origin_55);
          if (((MR_tag((MR_Word) Origin_55)) == (MR_Integer) 2))
            succeeded = MR_TRUE;
          else
          if (((((MR_tag((MR_Word) Origin_55)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_55, (MR_Integer) 0)))) == (MR_Integer) 0))))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_ModuleInfo_39_39 = STATE_VARIABLE_ModuleInfo_0_8;
        STATE_VARIABLE_OptProcs_38_38 = STATE_VARIABLE_OptProcs_0_6;
        STATE_VARIABLE_PredProcList_37_37 = HeadVar__4_4;
        STATE_VARIABLE_VarUsage_36_36 = STATE_VARIABLE_VarUsage_0_2;
      }
      else
      {
        MR_Word ProcIds_60;

        ProcIds_60 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(PredInfo_53);
        transform_hlds__unused_args__setup_pred_args_10_p_0(PredId_22, ProcIds_60, STATE_VARIABLE_VarUsage_0_2, &STATE_VARIABLE_VarUsage_36_36, HeadVar__4_4, &STATE_VARIABLE_PredProcList_37_37, STATE_VARIABLE_OptProcs_0_6, &STATE_VARIABLE_OptProcs_38_38, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_39_39);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_23;
      next_value_of_STATE_VARIABLE_VarUsage_0_2 = STATE_VARIABLE_VarUsage_36_36;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_PredProcList_37_37;
      next_value_of_STATE_VARIABLE_OptProcs_0_6 = STATE_VARIABLE_OptProcs_38_38;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_8 = STATE_VARIABLE_ModuleInfo_39_39;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarUsage_0_2 = next_value_of_STATE_VARIABLE_VarUsage_0_2;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_OptProcs_0_6 = next_value_of_STATE_VARIABLE_OptProcs_0_6;
      STATE_VARIABLE_ModuleInfo_0_8 = next_value_of_STATE_VARIABLE_ModuleInfo_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__setup_pred_args_10_p_0(
  MR_Word PredId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarUsage_0_3,
  MR_Word * STATE_VARIABLE_VarUsage_4,
  MR_Word STATE_VARIABLE_PredProcIds_0_5,
  MR_Word * STATE_VARIABLE_PredProcIds_6,
  MR_Word STATE_VARIABLE_OptProcs_0_7,
  MR_Word * STATE_VARIABLE_OptProcs_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
      *STATE_VARIABLE_OptProcs_8 = STATE_VARIABLE_OptProcs_0_7;
      *STATE_VARIABLE_PredProcIds_6 = STATE_VARIABLE_PredProcIds_0_5;
      *STATE_VARIABLE_VarUsage_4 = STATE_VARIABLE_VarUsage_0_3;
    }
    else
    {
      MR_Integer ProcId_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ProcIds_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarUsage_39_39;
      MR_Word STATE_VARIABLE_PredProcIds_40_40;
      MR_Word STATE_VARIABLE_OptProcs_41_41;
      MR_Word STATE_VARIABLE_ModuleInfo_42_42;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_VarUsage_0_3;
      MR_Word next_value_of_STATE_VARIABLE_PredProcIds_0_5;
      MR_Word next_value_of_STATE_VARIABLE_OptProcs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_9;

      transform_hlds__unused_args__setup_proc_args_10_p_0(PredId_1, ProcId_25, STATE_VARIABLE_VarUsage_0_3, &STATE_VARIABLE_VarUsage_39_39, STATE_VARIABLE_PredProcIds_0_5, &STATE_VARIABLE_PredProcIds_40_40, STATE_VARIABLE_OptProcs_0_7, &STATE_VARIABLE_OptProcs_41_41, STATE_VARIABLE_ModuleInfo_0_9, &STATE_VARIABLE_ModuleInfo_42_42);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ProcIds_26;
      next_value_of_STATE_VARIABLE_VarUsage_0_3 = STATE_VARIABLE_VarUsage_39_39;
      next_value_of_STATE_VARIABLE_PredProcIds_0_5 = STATE_VARIABLE_PredProcIds_40_40;
      next_value_of_STATE_VARIABLE_OptProcs_0_7 = STATE_VARIABLE_OptProcs_41_41;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_9 = STATE_VARIABLE_ModuleInfo_42_42;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_VarUsage_0_3 = next_value_of_STATE_VARIABLE_VarUsage_0_3;
      STATE_VARIABLE_PredProcIds_0_5 = next_value_of_STATE_VARIABLE_PredProcIds_0_5;
      STATE_VARIABLE_OptProcs_0_7 = next_value_of_STATE_VARIABLE_OptProcs_0_7;
      STATE_VARIABLE_ModuleInfo_0_9 = next_value_of_STATE_VARIABLE_ModuleInfo_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_212;

  transform_hlds__unused_args__IntroducedFrom__pred__setup_proc_args__456__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__3_212);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_212));
}

static void MR_CALL 
transform_hlds__unused_args__setup_proc_args_10_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_VarUsage_0_55,
  MR_Word * STATE_VARIABLE_VarUsage_56,
  MR_Word STATE_VARIABLE_PredProcIds_0_57,
  MR_Word * STATE_VARIABLE_PredProcIds_58,
  MR_Word STATE_VARIABLE_OptProcs_0_59,
  MR_Word * STATE_VARIABLE_OptProcs_60,
  MR_Word STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * STATE_VARIABLE_ModuleInfo_62)
{
  MR_bool succeeded;
  MR_Word PredInfo_17;
  MR_Word ProcInfo_18;
  MR_Word Globals_19;
  MR_Word Intermod_21;
  MR_Word STATE_VARIABLE_VarDep_63_63;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_61, PredId_11, ProcId_12, &PredInfo_17, &ProcInfo_18);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_61, &Globals_19);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), &STATE_VARIABLE_VarDep_63_63);
  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 499, &Intermod_21);
  succeeded = (Intermod_21 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(PredInfo_17);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_17);
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
  {
    MR_Word PredModuleName_22;
    MR_Integer PredArity_23;
    MR_Word FuncInfo_24;
    MR_Word AnalysisInfo0_25;
    MR_Word ModuleId_26;
    MR_Word FuncId_27;
    MR_Word MaybeBestResult_28;
    MR_Word AnalysisInfo_40;
    MR_Word STATE_VARIABLE_ModuleInfo_70_70;

    PredModuleName_22 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_17);
    PredArity_23 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_17);
    FuncInfo_24 = (MR_Word) (PredArity_23);
    hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_61, &AnalysisInfo0_25);
    transform_hlds__mmc_analysis__module_name_func_id_from_pred_info_4_p_0(PredInfo_17, ProcId_12, &ModuleId_26, &FuncId_27);
    analysis__lookup_best_result_6_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_4[0]), AnalysisInfo0_25, ModuleId_26, FuncId_27, ((MR_Box) (FuncInfo_24)), ((MR_Box) ((MR_Integer) 0)), &MaybeBestResult_28);
    if ((MaybeBestResult_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_71;

      Var_71 = transform_hlds__unused_args__analysis_name_0_f_0();
      analysis__record_request_6_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_3[0]), Var_71, PredModuleName_22, FuncId_27, ((MR_Box) ((MR_Integer) 0)), AnalysisInfo0_25, &AnalysisInfo_40);
      *STATE_VARIABLE_VarUsage_56 = STATE_VARIABLE_VarUsage_0_55;
      *STATE_VARIABLE_OptProcs_60 = STATE_VARIABLE_OptProcs_0_59;
      STATE_VARIABLE_ModuleInfo_70_70 = STATE_VARIABLE_ModuleInfo_0_61;
    }
    else
    {
      MR_Word BestAnswer_30;
      MR_Word UnusedArgs_32;
      MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBestResult_28, (MR_Integer) 0))));

      BestAnswer_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 1))));
      UnusedArgs_32 = (MR_Word) (BestAnswer_30);
      if ((UnusedArgs_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_VarUsage_56 = STATE_VARIABLE_VarUsage_0_55;
        *STATE_VARIABLE_OptProcs_60 = STATE_VARIABLE_OptProcs_0_59;
        STATE_VARIABLE_ModuleInfo_70_70 = STATE_VARIABLE_ModuleInfo_0_61;
      }
      else
      {
        MR_Word VarDep_20;
        MR_Word HeadVars_35;
        MR_Word UnusedVars_36;
        MR_Word PredProcId_37;
        MR_Word OptTuple_38;
        MR_Word OptUnusedArgs_39;
        MR_Word Var_67;

        hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_18, &HeadVars_35);
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[3]));
          MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (transform_hlds__unused_args__setup_proc_args_10_p_0_1));
          MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (HeadVars_35));
        }
        mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), Var_67, UnusedArgs_32, &UnusedVars_36);
        transform_hlds__unused_args__initialise_vardep_3_p_0(UnusedVars_36, STATE_VARIABLE_VarDep_63_63, &VarDep_20);
        {
          PredProcId_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredProcId_37, 0) = ((MR_Box) (PredId_11));
          MR_hl_field(MR_mktag(0), PredProcId_37, 1) = ((MR_Box) (ProcId_12));
        }
        mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), ((MR_Box) (PredProcId_37)), ((MR_Box) (VarDep_20)), STATE_VARIABLE_VarUsage_0_55, STATE_VARIABLE_VarUsage_56);
        libs__globals__get_opt_tuple_2_p_0(Globals_19, &OptTuple_38);
        OptUnusedArgs_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_38, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
        switch (OptUnusedArgs_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_OptProcs_60 = STATE_VARIABLE_OptProcs_0_59;
              STATE_VARIABLE_ModuleInfo_70_70 = STATE_VARIABLE_ModuleInfo_0_61;
            }
            break;
          case (MR_Integer) 0:
            transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(PredProcId_37, UnusedArgs_32, STATE_VARIABLE_OptProcs_0_59, STATE_VARIABLE_OptProcs_60, STATE_VARIABLE_ModuleInfo_0_61, &STATE_VARIABLE_ModuleInfo_70_70);
            break;
        }
      }
      AnalysisInfo_40 = AnalysisInfo0_25;
    }
    hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_40, STATE_VARIABLE_ModuleInfo_70_70, STATE_VARIABLE_ModuleInfo_62);
    *STATE_VARIABLE_PredProcIds_58 = STATE_VARIABLE_PredProcIds_0_57;
  }
  else
  {
    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_17);
    if (!(succeeded))
    {
      {
        MR_Integer Var_220;

        succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo_17);
        if (succeeded)
        {
          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_220);
          succeeded = (ProcId_12 == Var_220);
        }
      }
      if (!(succeeded))
      {
        {
          MR_Word EvalMethod_41;

          hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_18, &EvalMethod_41);
          succeeded = (EvalMethod_41 != (MR_Word) ((MR_Unsigned) 0U));
        }
        if (!(succeeded))
        {
          MR_Word MaybeDeclaredDetism_42;
          MR_Word Goal_43;
          MR_Word GoalInfo_45;
          MR_Word ActualDetism_46;

          hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_18, &MaybeDeclaredDetism_42);
          hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_18, &Goal_43);
          GoalInfo_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_43, (MR_Integer) 1))));
          ActualDetism_46 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_45);
          {
            MR_Word DeclaredDetism_47;

            succeeded = (MaybeDeclaredDetism_42 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              DeclaredDetism_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeclaredDetism_42, (MR_Integer) 0))));
              succeeded = (DeclaredDetism_47 != ActualDetism_46);
            }
          }
          if (!(succeeded))
          {
            MR_Word SolnCount_49;
            MR_Word _CanFail_48;

            parse_tree__prog_data__determinism_components_3_p_0(ActualDetism_46, &_CanFail_48, &SolnCount_49);
            succeeded = (SolnCount_49 == (MR_Integer) 0);
          }
        }
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_PredProcIds_58 = STATE_VARIABLE_PredProcIds_0_57;
      *STATE_VARIABLE_VarUsage_56 = STATE_VARIABLE_VarUsage_0_55;
    }
    else
    {
      MR_Word VarTable_50;
      MR_Word Vars_51;
      MR_Word TypeInfoLiveness_52;
      MR_Word Info_54;
      MR_Word STATE_VARIABLE_VarDep_74_74;
      MR_Word STATE_VARIABLE_VarDep_75_75;
      MR_Word STATE_VARIABLE_VarDep_77_77;
      MR_Word STATE_VARIABLE_VarDep_78_78;
      MR_Word Var_79;
      MR_Word Goal_83;

      hlds__hlds_pred__proc_info_get_var_table_3_p_0(STATE_VARIABLE_ModuleInfo_0_61, ProcInfo_18, &VarTable_50);
      parse_tree__var_table__var_table_vars_2_p_0(VarTable_50, &Vars_51);
      transform_hlds__unused_args__initialise_vardep_3_p_0(Vars_51, STATE_VARIABLE_VarDep_63_63, &STATE_VARIABLE_VarDep_74_74);
      transform_hlds__unused_args__setup_output_args_4_p_0(STATE_VARIABLE_ModuleInfo_0_61, ProcInfo_18, STATE_VARIABLE_VarDep_74_74, &STATE_VARIABLE_VarDep_75_75);
      hlds__hlds_pred__proc_interface_should_use_typeinfo_liveness_4_p_0(PredInfo_17, ProcId_12, Globals_19, &TypeInfoLiveness_52);
      switch (TypeInfoLiveness_52) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_VarDep_77_77 = STATE_VARIABLE_VarDep_75_75;
          break;
        case (MR_Integer) 1:
          {
            MR_Word RttiVarMaps_53;
            MR_Word Var_76;

            hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_18, &RttiVarMaps_53);
            {
              Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (PredId_11));
              MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (ProcId_12));
            }
            transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(Vars_51, VarTable_50, Var_76, RttiVarMaps_53, STATE_VARIABLE_VarDep_75_75, &STATE_VARIABLE_VarDep_77_77);
          }
          break;
      }
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_18, &Goal_83);
      {
        Info_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Info_54, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_61));
        MR_hl_field(MR_mktag(0), Info_54, 1) = ((MR_Box) (VarTable_50));
      }
      transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(Info_54, Goal_83, STATE_VARIABLE_VarDep_77_77, &STATE_VARIABLE_VarDep_78_78);
      {
        Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (PredId_11));
        MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ProcId_12));
      }
      mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), ((MR_Box) (Var_79)), ((MR_Box) (STATE_VARIABLE_VarDep_78_78)), STATE_VARIABLE_VarUsage_0_55, STATE_VARIABLE_VarUsage_56);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_PredProcIds_58 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_PredProcIds_0_57));
      }
    }
    *STATE_VARIABLE_ModuleInfo_62 = STATE_VARIABLE_ModuleInfo_0_61;
    *STATE_VARIABLE_OptProcs_60 = STATE_VARIABLE_OptProcs_0_59;
  }
}

static void MR_CALL 
transform_hlds__unused_args__make_imported_unused_args_pred_info_6_p_0(
  MR_Word OptProc_7,
  MR_Word UnusedArgs_8,
  MR_Word STATE_VARIABLE_ProcCallInfo_0_31,
  MR_Word * STATE_VARIABLE_ProcCallInfo_32,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34)
{
  MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptProc_7, (MR_Integer) 0))));
  MR_Integer ProcId_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptProc_7, (MR_Integer) 1))));
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
  MR_Word Var_42;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_33, PredId_11, ProcId_12, &PredInfo0_13, &ProcInfo0_14);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_110_101_119_95_112_114_101_100_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(UnusedArgs_8, (MR_Word) (((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__unused_args_scalar_common_5[1])))), OptProc_7, PredInfo0_13, &NewPredInfo0_15);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(NewPredInfo0_15, &NewProcs0_16);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_14, &HeadVars0_17);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs_8, HeadVars0_17, &HeadVars_18);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_18, ProcInfo0_14, &ProcInfo1_19);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo1_19, &ArgModes0_20);
  transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, UnusedArgs_8, ArgModes0_20, &ArgModes_21);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_21, ProcInfo1_19, &ProcInfo_22);
  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_12)), ((MR_Box) (ProcInfo_22)), NewProcs0_16, &NewProcs_23);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(NewProcs_23, NewPredInfo0_15, &NewPredInfo_24);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &PredTable0_25);
  hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo_24, &NewPredId_26, PredTable0_25, &PredTable1_27);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable1_27, STATE_VARIABLE_ModuleInfo_0_33, STATE_VARIABLE_ModuleInfo_34);
  PredModuleName_28 = hlds__hlds_pred__pred_info_module_1_f_0(NewPredInfo_24);
  PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(NewPredInfo_24);
  {
    PredSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), PredSymName_30, 0) = ((MR_Box) (PredModuleName_28));
    MR_hl_field(MR_mktag(1), PredSymName_30, 1) = ((MR_Box) (PredName_29));
  }
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (NewPredId_26));
    MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (ProcId_12));
    MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (PredSymName_30));
    MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (UnusedArgs_8));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0), ((MR_Box) (OptProc_7)), ((MR_Box) (Var_42)), STATE_VARIABLE_ProcCallInfo_0_31, STATE_VARIABLE_ProcCallInfo_32);
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
  MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
  MR_Integer ProcId_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
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
  MR_Word OriginTransform_40;
  MR_Word Origin_41;
  MR_Integer Var_58;
  MR_Word STATE_VARIABLE_PredInfo_60_60;
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

    succeeded = ((MR_tag((MR_Word) OrigOrigin_19)) == (MR_Integer) 1);
    if (succeeded)
    {
      TypeCtor_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrigOrigin_19, (MR_Integer) 1))));
      {
        MR_Word TypeModule_22;
        MR_String TypeName_23;
        MR_Integer TypeArity_24;
        MR_String TypeModuleStr_25;
        MR_String Var_65;
        MR_String Var_73;
        MR_String Var_74;
        MR_String Var_76;
        MR_String Var_77;
        MR_String Var_79;

        check_hlds__type_util__type_ctor_module_name_arity_4_p_0(TypeCtor_21, &TypeModule_22, &TypeName_23, &TypeArity_24);
        TypeModuleStr_25 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(TypeModule_22, (MR_String) "__");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_5[0]), TypeArity_24, &Var_65);
        Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_65);
        Var_74 = mercury__string__f_43_43_2_f_0(TypeName_23, Var_73);
        Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_74);
        Var_77 = mercury__string__f_43_43_2_f_0(TypeModuleStr_25, Var_76);
        Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_77);
        Name1_26 = mercury__string__f_43_43_2_f_0(Name0_14, Var_79);
      }
    }
    else
      Name1_26 = Name0_14;
  }
  else
    Name1_26 = Name0_14;
  Var_58 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_11);
  {
    Transform_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Transform_27, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(MR_mktag(3), Transform_27, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
    MR_hl_field(MR_mktag(3), Transform_27, 2) = ((MR_Box) (Var_58));
    MR_hl_field(MR_mktag(3), Transform_27, 3) = ((MR_Box) (UnusedArgs_8));
  }
  parse_tree__pred_name__make_transformed_pred_name_3_p_0(Name1_26, Transform_27, &TransformedName_28);
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
    OriginTransform_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), OriginTransform_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), OriginTransform_40, 1) = ((MR_Box) (UnusedArgs_8));
  }
  {
    Origin_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Origin_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), Origin_41, 1) = ((MR_Box) (OriginTransform_40));
    MR_hl_field(MR_mktag(3), Origin_41, 2) = ((MR_Box) (OrigOrigin_19));
    MR_hl_field(MR_mktag(3), Origin_41, 3) = ((MR_Box) (PredId_10));
  }
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_15, PredModuleName_13, TransformedName_28, PredFormArity_29, Context_32, Origin_41, PredStatus_9, (MR_Word) ((MR_Unsigned) 0U), GoalType_35, Markers_34, ArgTypes_31, Tvars_16, ExistQVars_17, ClassContext_36, Proofs_38, ConstraintMap_39, ClausesInfo_33, VarNameRemap_37, &STATE_VARIABLE_PredInfo_60_60);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVars_30, STATE_VARIABLE_PredInfo_60_60, STATE_VARIABLE_PredInfo_44);
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
    MR_Box Head_10 = (MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_0_14, (MR_Integer) 0));
    MR_Word Tail_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_0_14, (MR_Integer) 1))));
    MR_Integer NextArg_12 = (MR_Integer) ((MR_Unsigned) ArgNo_5 + (MR_Unsigned) 1);
    MR_Word NewTail_13;

    if ((Tail_11 == (MR_Word) ((MR_Unsigned) 0U)))
      NewTail_13 = Tail_11;
    else
    {
      MR_Box Head_26 = (MR_hl_field(MR_mktag(1), Tail_11, (MR_Integer) 0));
      MR_Word Tail_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tail_11, (MR_Integer) 1))));
      MR_Integer NextArg_28 = (MR_Integer) ((MR_Unsigned) NextArg_12 + (MR_Unsigned) 1);
      MR_Word NewTail_29;

      transform_hlds__unused_args__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_105_115_116_111_102_95_101_108_101_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(NextArg_28, ElemsToRemove_6, Tail_27, &NewTail_29);
      succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (NextArg_12)), ElemsToRemove_6);
      if (succeeded)
        NewTail_13 = NewTail_29;
      else
        {
          NewTail_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NewTail_13, 0) = Head_26;
          MR_hl_field(MR_mktag(1), NewTail_13, 1) = ((MR_Box) (NewTail_29));
        }
    }
    succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ArgNo_5)), ElemsToRemove_6);
    if (succeeded)
      *STATE_VARIABLE_List_15 = NewTail_13;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_List_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = Head_10;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NewTail_13));
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__775__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__793__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_105;

  succeeded = transform_hlds__unused_args__IntroducedFrom__pred__unused_args_traverse_goal__751__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_105);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_105));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(
  MR_Word Info_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_VarDep_0_87,
  MR_Word * STATE_VARIABLE_VarDep_88)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_28 = (MR_Word) ((MR_Word) (GoalExpr_8));
          MR_Word next_value_of_Goal_6 = SubGoal_28;

          // direct tailcall eliminated
          ;
          Goal_6 = next_value_of_Goal_6;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 0))));
          MR_Word RHS_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 1))));
          MR_Word Unify_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) Unify_52)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_120;
                MR_Word CellVar_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 0))));
                MR_Word ArgVars_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 2))));

                {
                  Var_120 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[3]));
                  MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_120, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_120, 3) = ((MR_Box) (LHS_49));
                  MR_hl_field(MR_mktag(0), Var_120, 4) = ((MR_Box) (CellVar_138));
                }
                mercury__require__expect_3_p_0(Var_120, (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "LHS != CellVar");
                succeeded = transform_hlds__unused_args__local_var_is_used_2_p_0(STATE_VARIABLE_VarDep_0_87, CellVar_138);
                if (succeeded)
                  transform_hlds__unused_args__set_list_vars_used_3_p_0(ArgVars_139, STATE_VARIABLE_VarDep_0_87, STATE_VARIABLE_VarDep_88);
                else
                  transform_hlds__unused_args__add_construction_aliases_4_p_0(CellVar_138, ArgVars_139, STATE_VARIABLE_VarDep_0_87, STATE_VARIABLE_VarDep_88);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word CellVar_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unify_52, (MR_Integer) 0))));
                MR_Word ArgVars_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unify_52, (MR_Integer) 2))));
                MR_Word ArgModes_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unify_52, (MR_Integer) 3))));
                MR_Word CanFail_62 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unify_52, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
                MR_Word InputVars_64;
                MR_Word OutputVars_65;
                MR_Word Var_114;
                MR_Word STATE_VARIABLE_VarDep_117_117;
                MR_Word STATE_VARIABLE_VarDep_118_118;

                {
                  Var_114 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_3[3]));
                  MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (transform_hlds__unused_args__unused_args_traverse_goal_4_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (LHS_49));
                  MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) (CellVar_58));
                }
                mercury__require__expect_3_p_0(Var_114, (MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "LHS != CellVar");
                transform_hlds__unused_args__partition_deconstruct_args_5_p_0(Info_5, ArgVars_60, ArgModes_61, &InputVars_64, &OutputVars_65);
                transform_hlds__unused_args__add_aliases_4_p_0(CellVar_58, OutputVars_65, STATE_VARIABLE_VarDep_0_87, &STATE_VARIABLE_VarDep_117_117);
                transform_hlds__unused_args__add_construction_aliases_4_p_0(CellVar_58, InputVars_64, STATE_VARIABLE_VarDep_117_117, &STATE_VARIABLE_VarDep_118_118);
                switch (CanFail_62) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    transform_hlds__unused_args__set_var_used_3_p_0(CellVar_58, STATE_VARIABLE_VarDep_118_118, STATE_VARIABLE_VarDep_88);
                    break;
                  case (MR_Integer) 1:
                    *STATE_VARIABLE_VarDep_88 = STATE_VARIABLE_VarDep_118_118;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Target_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unify_52, (MR_Integer) 0))));
                MR_Word Source_57 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unify_52, (MR_Integer) 1))));

                succeeded = transform_hlds__unused_args__local_var_is_used_2_p_0(STATE_VARIABLE_VarDep_0_87, Target_56);
                if (succeeded)
                  transform_hlds__unused_args__set_var_used_3_p_0(Source_57, STATE_VARIABLE_VarDep_0_87, STATE_VARIABLE_VarDep_88);
                else
                {
                  MR_Word Var_111;

                  {
                    Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Target_56));
                    MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  transform_hlds__unused_args__add_aliases_4_p_0(Source_57, Var_111, STATE_VARIABLE_VarDep_0_87, STATE_VARIABLE_VarDep_88);
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unify_52, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var1_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unify_52, (MR_Integer) 1))));
                    MR_Word Var2_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unify_52, (MR_Integer) 2))));
                    MR_Word STATE_VARIABLE_VarDep_108_108;

                    transform_hlds__unused_args__set_var_used_3_p_0(Var1_54, STATE_VARIABLE_VarDep_0_87, &STATE_VARIABLE_VarDep_108_108);
                    transform_hlds__unused_args__set_var_used_3_p_0(Var2_55, STATE_VARIABLE_VarDep_108_108, STATE_VARIABLE_VarDep_88);
                  }
                  break;
                case (MR_Integer) 1:
                  switch (MR_tag((MR_Word) RHS_50)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word RHSVar_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_50, (MR_Integer) 0))));
                        MR_Word STATE_VARIABLE_VarDep_125_125;

                        transform_hlds__unused_args__set_var_used_3_p_0(RHSVar_74, STATE_VARIABLE_VarDep_0_87, &STATE_VARIABLE_VarDep_125_125);
                        transform_hlds__unused_args__set_var_used_3_p_0(LHS_49, STATE_VARIABLE_VarDep_125_125, STATE_VARIABLE_VarDep_88);
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.unused_args_traverse_goal\'/4", (MR_String) "complicated unifications should only be var-var");
                        return;
                      }
                      break;
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 0))));
          MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 1))));
          MR_Word Args_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 2))));
          MR_Word ProcInfo_22;
          MR_Word HeadVars_23;
          MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
          MR_Word Var_94;
          MR_Word _PredInfo_21;

          hlds__hlds_module__module_info_pred_proc_info_5_p_0(Var_93, PredId_15, ProcId_16, &_PredInfo_21, &ProcInfo_22);
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_22, &HeadVars_23);
          {
            Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (PredId_15));
            MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (ProcId_16));
          }
          transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(Var_94, Args_17, HeadVars_23, STATE_VARIABLE_VarDep_0_87, STATE_VARIABLE_VarDep_88);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
              MR_Word CallArgs_35;
              MR_Word STATE_VARIABLE_VarDep_102_102;
              MR_Word Args_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));

              hlds__goal_util__generic_call_vars_2_p_0(GenericCall_31, &CallArgs_35);
              transform_hlds__unused_args__set_list_vars_used_3_p_0(CallArgs_35, STATE_VARIABLE_VarDep_0_87, &STATE_VARIABLE_VarDep_102_102);
              transform_hlds__unused_args__set_list_vars_used_3_p_0(Args_134, STATE_VARIABLE_VarDep_102_102, STATE_VARIABLE_VarDep_88);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ExtraArgs_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 5))));
              MR_Word UsedVars_48;
              MR_Word Var_106;
              MR_Word Args_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));

              Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Args_137, ExtraArgs_39);
              mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[8]), Var_106, &UsedVars_48);
              transform_hlds__unused_args__set_list_vars_used_3_p_0(UsedVars_48, STATE_VARIABLE_VarDep_0_87, STATE_VARIABLE_VarDep_88);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));

              transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(Info_5, Goals_11, STATE_VARIABLE_VarDep_0_87, STATE_VARIABLE_VarDep_88);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_131 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));

              transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(Info_5, Goals_131, STATE_VARIABLE_VarDep_0_87, STATE_VARIABLE_VarDep_88);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
              MR_Word Cases_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_VarDep_91_91;
              MR_Word Goals_132;

              transform_hlds__unused_args__set_var_used_3_p_0(Var_12, STATE_VARIABLE_VarDep_0_87, &STATE_VARIABLE_VarDep_91_91);
              transform_hlds__unused_args__list_case_to_list_goal_2_p_0(Cases_14, &Goals_132);
              transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(Info_5, Goals_132, STATE_VARIABLE_VarDep_91_91, STATE_VARIABLE_VarDep_88);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
              MR_Word SubGoal_133 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
              MR_Word Var_100;

              succeeded = ((((MR_tag((MR_Word) Reason_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_29, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_100 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_29, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_100 == (MR_Integer) 1);
              }
              if (succeeded)
                *STATE_VARIABLE_VarDep_88 = STATE_VARIABLE_VarDep_0_87;
              else
              {
                MR_Word next_value_of_Goal_6 = SubGoal_133;

                // direct tailcall eliminated
                ;
                Goal_6 = next_value_of_Goal_6;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
              MR_Word Then_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
              MR_Word Else_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_VarDep_96_96;
              MR_Word STATE_VARIABLE_VarDep_97_97;
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_VarDep_0_87;

              transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(Info_5, Cond_25, STATE_VARIABLE_VarDep_0_87, &STATE_VARIABLE_VarDep_96_96);
              transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(Info_5, Then_26, STATE_VARIABLE_VarDep_96_96, &STATE_VARIABLE_VarDep_97_97);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = Else_27;
              next_value_of_STATE_VARIABLE_VarDep_0_87 = STATE_VARIABLE_VarDep_97_97;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_VarDep_0_87 = next_value_of_STATE_VARIABLE_VarDep_0_87;
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
transform_hlds__unused_args__unused_args_traverse_goals_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarDep_0_3,
  MR_Word * STATE_VARIABLE_VarDep_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarDep_4 = STATE_VARIABLE_VarDep_0_3;
    else
    {
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarDep_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_VarDep_0_3;

      transform_hlds__unused_args__unused_args_traverse_goal_4_p_0(Info_1, Goal_10, STATE_VARIABLE_VarDep_0_3, &STATE_VARIABLE_VarDep_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Goals_11;
      next_value_of_STATE_VARIABLE_VarDep_0_3 = STATE_VARIABLE_VarDep_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_VarDep_0_3 = next_value_of_STATE_VARIABLE_VarDep_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__list_case_to_list_goal_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal_5;
    MR_Word Cases_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goals_7;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    Goal_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2))));
    transform_hlds__unused_args__list_case_to_list_goal_2_p_0(Cases_6, &Goals_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_7));
    }
  }
}

static void MR_CALL 
transform_hlds__unused_args__add_construction_aliases_4_p_0(
  MR_Word Alias_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarDep_0_3,
  MR_Word * STATE_VARIABLE_VarDep_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarDep_4 = STATE_VARIABLE_VarDep_0_3;
    else
    {
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarDep_19_19;
      MR_Word VarInfo0_13;
      MR_Box conv0_VarInfo0_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_VarDep_0_3;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), STATE_VARIABLE_VarDep_0_3, ((MR_Box) (Var_10)), &conv0_VarInfo0_13);
      if (succeeded)
      {
        VarInfo0_13 = ((MR_Word) (conv0_VarInfo0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word VarDep_12;
        MR_Word VarDep0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarInfo0_13, (MR_Integer) 0))));
        MR_Word ArgDep_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarInfo0_13, (MR_Integer) 1))));
        MR_Word VarInfo_16;

        mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), ((MR_Box) (Alias_1)), VarDep0_14, &VarDep_12);
        {
          VarInfo_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), VarInfo_16, 0) = ((MR_Box) (VarDep_12));
          MR_hl_field(MR_mktag(0), VarInfo_16, 1) = ((MR_Box) (ArgDep_15));
        }
        mercury__map__set_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Var_10)), ((MR_Box) (VarInfo_16)), STATE_VARIABLE_VarDep_0_3, &STATE_VARIABLE_VarDep_19_19);
      }
      else
        STATE_VARIABLE_VarDep_19_19 = STATE_VARIABLE_VarDep_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_11;
      next_value_of_STATE_VARIABLE_VarDep_0_3 = STATE_VARIABLE_VarDep_19_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_VarDep_0_3 = next_value_of_STATE_VARIABLE_VarDep_0_3;
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
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_7, (MR_Integer) 1))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_7, (MR_Integer) 0))));

    if ((ArgModes_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.partition_deconstruct_args\'/5", (MR_String) "mismatched lists");
        return;
      }
    else
    {
      MR_Word HeadArgMode_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_8, (MR_Integer) 0))));
      MR_Word TailArgModes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_8, (MR_Integer) 1))));
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
      InitX_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArgMode_17, (MR_Integer) 0))));
      FinalX_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArgMode_17, (MR_Integer) 1))));
      InitY_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArgMode_17, (MR_Integer) 2))));
      FinalY_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArgMode_17, (MR_Integer) 3))));
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
      parse_tree__var_table__lookup_var_type_3_p_0(Var_31, Var_35, &HeadType_25);
      ModuleInfo_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0))));
      succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(ModuleInfo_26, HeadType_25, InitX_21, FinalX_22);
      if (succeeded)
        *InputVars_9 = InputVarsTail_19;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *InputVars_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InputVarsTail_19));
        }
      succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(ModuleInfo_26, HeadType_25, InitY_23, FinalY_24);
      if (succeeded)
        *OutputVars_10 = OutputVarsTail_20;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *OutputVars_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutputVarsTail_20));
        }
    }
  }
}

static void MR_CALL 
transform_hlds__unused_args__add_pred_call_arg_dep_5_p_0(
  MR_Word PredProcId_6,
  MR_Word LocalArguments_7,
  MR_Word HeadVarIds_8,
  MR_Word STATE_VARIABLE_VarDep_0_18,
  MR_Word * STATE_VARIABLE_VarDep_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((LocalArguments_7 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVarIds_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_VarDep_19 = STATE_VARIABLE_VarDep_0_18;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.add_pred_call_arg_dep\'/5", (MR_String) "invalid call");
          return;
        }
    else
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArguments_7, (MR_Integer) 1))));
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArguments_7, (MR_Integer) 0))));

      if ((HeadVarIds_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args.add_pred_call_arg_dep\'/5", (MR_String) "invalid call");
          return;
        }
      else
      {
        MR_Word HeadVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVarIds_8, (MR_Integer) 0))));
        MR_Word HeadVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVarIds_8, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_VarDep_24_24;
        MR_Word VarUsage0_33;
        MR_Box conv0_VarUsage0_33;
        MR_Word next_value_of_LocalArguments_7;
        MR_Word next_value_of_HeadVarIds_8;
        MR_Word next_value_of_STATE_VARIABLE_VarDep_0_18;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), STATE_VARIABLE_VarDep_0_18, ((MR_Box) (Var_26)), &conv0_VarUsage0_33);
        if (succeeded)
        {
          VarUsage0_33 = ((MR_Word) (conv0_VarUsage0_33));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word VarDep_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarUsage0_33, (MR_Integer) 0))));
          MR_Word ArgDep0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarUsage0_33, (MR_Integer) 1))));
          MR_Word ArgDep_35;
          MR_Word VarUsage_36;
          MR_Word Var_37;

          {
            Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (PredProcId_6));
            MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (HeadVar_16));
          }
          mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0), ((MR_Box) (Var_37)), ArgDep0_34, &ArgDep_35);
          {
            VarUsage_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), VarUsage_36, 0) = ((MR_Box) (VarDep_32));
            MR_hl_field(MR_mktag(0), VarUsage_36, 1) = ((MR_Box) (ArgDep_35));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Var_26)), ((MR_Box) (VarUsage_36)), STATE_VARIABLE_VarDep_0_18, &STATE_VARIABLE_VarDep_24_24);
        }
        else
          STATE_VARIABLE_VarDep_24_24 = STATE_VARIABLE_VarDep_0_18;
        // direct tailcall eliminated
        ;
        next_value_of_LocalArguments_7 = Var_25;
        next_value_of_HeadVarIds_8 = HeadVars_17;
        next_value_of_STATE_VARIABLE_VarDep_0_18 = STATE_VARIABLE_VarDep_24_24;
        LocalArguments_7 = next_value_of_LocalArguments_7;
        HeadVarIds_8 = next_value_of_HeadVarIds_8;
        STATE_VARIABLE_VarDep_0_18 = next_value_of_STATE_VARIABLE_VarDep_0_18;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__set_var_used_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_VarDep_0_6,
  MR_Word * STATE_VARIABLE_VarDep_7)
{
  mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Var_4)), STATE_VARIABLE_VarDep_0_6, STATE_VARIABLE_VarDep_7);
}

static void MR_CALL 
transform_hlds__unused_args__set_list_vars_used_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_VarDep_0_6,
  MR_Word * STATE_VARIABLE_VarDep_7)
{
  mercury__map__delete_list_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), Vars_4, STATE_VARIABLE_VarDep_0_6, STATE_VARIABLE_VarDep_7);
}

static void MR_CALL 
transform_hlds__unused_args__add_aliases_4_p_0(
  MR_Word Var_5,
  MR_Word Aliases_6,
  MR_Word STATE_VARIABLE_VarDep_0_12,
  MR_Word * STATE_VARIABLE_VarDep_13)
{
  MR_bool succeeded;
  MR_Word VarInf0_8;
  MR_Box conv0_VarInf0_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), STATE_VARIABLE_VarDep_0_12, ((MR_Box) (Var_5)), &conv0_VarInf0_8);
  if (succeeded)
  {
    VarInf0_8 = ((MR_Word) (conv0_VarInf0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word VarDep_7;
    MR_Word VarDep0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarInf0_8, (MR_Integer) 0))));
    MR_Word ArgDep_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarInf0_8, (MR_Integer) 1))));
    MR_Word VarInf_11;

    mercury__set__insert_list_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), Aliases_6, VarDep0_9, &VarDep_7);
    {
      VarInf_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), VarInf_11, 0) = ((MR_Box) (VarDep_7));
      MR_hl_field(MR_mktag(0), VarInf_11, 1) = ((MR_Box) (ArgDep_10));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Var_5)), ((MR_Box) (VarInf_11)), STATE_VARIABLE_VarDep_0_12, STATE_VARIABLE_VarDep_13);
  }
  else
    *STATE_VARIABLE_VarDep_13 = STATE_VARIABLE_VarDep_0_12;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__local_var_is_used_2_p_0(
  MR_Word VarDep_3,
  MR_Word Var_4)
{
  MR_bool succeeded;

  succeeded = mercury__map__contains_2_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), VarDep_3, ((MR_Box) (Var_4)));
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_VarDep_7;

  transform_hlds__unused_args__set_var_used_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_VarDep_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_VarDep_7));
}

static void MR_CALL 
transform_hlds__unused_args__setup_output_args_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_VarDep_0_9,
  MR_Word * STATE_VARIABLE_VarDep_10)
{
  MR_Word ChangedInstHeadVars_8;
  MR_Box conv1_STATE_VARIABLE_VarDep_10;

  hlds__hlds_pred__proc_info_instantiated_head_vars_3_p_0(ModuleInfo_5, ProcInfo_6, &ChangedInstHeadVars_8);
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[7]), ChangedInstHeadVars_8, ((MR_Box) (STATE_VARIABLE_VarDep_0_9)), &conv1_STATE_VARIABLE_VarDep_10);
  *STATE_VARIABLE_VarDep_10 = ((MR_Word) (conv1_STATE_VARIABLE_VarDep_10));
}

static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_VarDep_11;

  transform_hlds__unused_args__add_rev_arg_dep_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_VarDep_11);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VarDep_11));
}

static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TypeInfoVar_6;

  transform_hlds__unused_args__tvar_to_type_info_var_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_TypeInfoVar_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_TypeInfoVar_6));
}

static void MR_CALL 
transform_hlds__unused_args__setup_typeinfo_deps_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarTypeMap_2,
  MR_Word PredProcId_3,
  MR_Word RttiVarMaps_4,
  MR_Word STATE_VARIABLE_VarDep_0_5,
  MR_Word * STATE_VARIABLE_VarDep_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarDep_6 = STATE_VARIABLE_VarDep_0_5;
    else
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarDep_21_21;
      MR_Word Type_29;
      MR_Word TVars_30;
      MR_Word TypeInfoVars_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Box conv2_STATE_VARIABLE_VarDep_21_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarDep_0_5;

      parse_tree__var_table__lookup_var_type_3_p_0(VarTypeMap_2, Var_13, &Type_29);
      parse_tree__prog_type__type_vars_in_type_2_p_0(Type_29, &TVars_30);
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (RttiVarMaps_4));
      }
      mercury__list__map_3_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[4]), (MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), Var_32, TVars_30, &TypeInfoVars_31);
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&transform_hlds__unused_args_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (transform_hlds__unused_args__setup_typeinfo_deps_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (PredProcId_3));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args_scalar_common_2[1]), Var_33, TypeInfoVars_31, ((MR_Box) (STATE_VARIABLE_VarDep_0_5)), &conv2_STATE_VARIABLE_VarDep_21_21);
      STATE_VARIABLE_VarDep_21_21 = ((MR_Word) (conv2_STATE_VARIABLE_VarDep_21_21));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_14;
      next_value_of_STATE_VARIABLE_VarDep_0_5 = STATE_VARIABLE_VarDep_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarDep_0_5 = next_value_of_STATE_VARIABLE_VarDep_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__unused_args__initialise_vardep_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_VarDep_0_2,
  MR_Word * STATE_VARIABLE_VarDep_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarDep_3 = STATE_VARIABLE_VarDep_0_2;
    else
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word VDep_10;
      MR_Word Args_11;
      MR_Word Var_14;
      MR_Word STATE_VARIABLE_VarDep_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarDep_0_2;

      mercury__set__init_1_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), &VDep_10);
      mercury__set__init_1_p_0((MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_arg_var_in_proc_0), &Args_11);
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (VDep_10));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Args_11));
      }
      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__unused_args_scalar_common_1[1]), (MR_Word) (&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0), ((MR_Box) (Var_7)), ((MR_Box) (Var_14)), STATE_VARIABLE_VarDep_0_2, &STATE_VARIABLE_VarDep_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_8;
      next_value_of_STATE_VARIABLE_VarDep_0_2 = STATE_VARIABLE_VarDep_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarDep_0_2 = next_value_of_STATE_VARIABLE_VarDep_0_2;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
transform_hlds__unused_args__analysis_name_0_f_0(void)
{
  return (MR_String) "unused_args";
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
transform_hlds__unused_args____Unify____proc_call_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____proc_call_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____proc_call_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____proc_call_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_dep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____var_dep_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____var_dep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____var_dep_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____var_usage_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____var_usage_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____var_usage_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____var_usage_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args____Unify____warning_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args____Unify____warning_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args____Compare____warning_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args____Compare____warning_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_4;

  conv0_Term_4 = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__to_term_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Term_4));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_answer__arity0______analysis__from_term_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_3;

  conv0_Term_3 = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__to_term_1_1_f_0();
  wrapper_arg_2 = ((MR_Box) (conv0_Term_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__to_term____transform_hlds__unused_args__unused_args_call__arity0______analysis__from_term_2_2_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__equivalent_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__unused_args__ClassMethod_for_analysis__partial_order____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0______analysis__equivalent_3_3_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_name_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__analysis_version_number_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__bottom_2_2_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__top_2_2_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_FuncInfo_22;

  transform_hlds__unused_args__ClassMethod_for_analysis__analysis____transform_hlds__unused_args__unused_args_func_info__arity0__transform_hlds__unused_args__unused_args_call__arity0__transform_hlds__unused_args__unused_args_answer__arity0______analysis__get_func_info_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_FuncInfo_22);
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
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_new_proc_info_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_proc_call_info_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_answer_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_call_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_func_info_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_unused_args_info_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_usage_info_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_var_dep_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_var_usage_0);
	MR_register_type_ctor_info(&transform_hlds__unused_args__transform_hlds__unused_args__type_ctor_info_warning_info_0);
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
