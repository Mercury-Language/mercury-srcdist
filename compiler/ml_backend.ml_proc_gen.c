/*
** Automatically generated from `ml_proc_gen.m'
** by the Mercury compiler,
** version rotd-2017-08-15
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


/* :- module ml_backend.ml_proc_gen. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_proc_gen__init
ENDINIT
*/

#include "ml_backend.ml_proc_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "ml_backend.ml_args_util.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_target_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_maybe_tail_call_opt_in_code_gen_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_maybe_tail_call_opt_in_code_gen_0[2];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_tail_call_opt_in_code_gen_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_none_or_self_tail_rec_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_none_or_self_tail_rec_0[2];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_none_or_self_tail_rec_0[2];

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_id_info_0_0[3];

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_id_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_id_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_pred_proc_id_info_0[1];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_pred_proc_id_info_0[1];

static void MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__702__1_8_p_0(
  MR_Word CodeModel_12,
  MR_Word Context_24,
  MR_Word ConvOutputStmts_28,
  MR_Word * LambdaHeadVar__1_44,
  MR_Word * LambdaHeadVar__2_45,
  MR_Word * LambdaHeadVar__3_46,
  MR_Word LambdaHeadVar__4_47,
  MR_Word * LambdaHeadVar__5_48);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_procs_for_code_gen__150__1_2_f_0(
  MR_Word PredId_13,
  MR_Integer LambdaHeadVar__1_32);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____none_or_self_tail_rec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____none_or_self_tail_rec_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__attribute_to_mlds_attribute_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Target_13,
  MR_Word ConstStructMap_14,
  MR_Word SCCEntryProcs_15,
  MR_Word TSCCE_16,
  MR_Word STATE_VARIABLE_FuncDefns_0_25,
  MR_Word * STATE_VARIABLE_FuncDefns_26,
  MR_Word STATE_VARIABLE_GlobalData_0_27,
  MR_Word * STATE_VARIABLE_GlobalData_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_lookup_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Target_13,
  MR_Word ConstStructMap_14,
  MR_Word NoneOrSelf_15,
  MR_Word PredProcId_16,
  MR_Word STATE_VARIABLE_FuncDefns_0_23,
  MR_Word * STATE_VARIABLE_FuncDefns_24,
  MR_Word STATE_VARIABLE_GlobalData_0_25,
  MR_Word * STATE_VARIABLE_GlobalData_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Target_13,
  MR_Word ConstStructMap_14,
  MR_Word NoneOrSelf_15,
  MR_Word PredProcIdInfo_16,
  MR_Word STATE_VARIABLE_FuncDefns_0_56,
  MR_Word * STATE_VARIABLE_FuncDefns_57,
  MR_Word STATE_VARIABLE_GlobalData_0_58,
  MR_Word * STATE_VARIABLE_GlobalData_59,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0(
  MR_Word CodeModel_12,
  MR_Word HeadVars_13,
  MR_Word ArgTypes_14,
  MR_Word TopFunctorModes_15,
  MR_Word CopiedOutputVars_16,
  MR_Word Goal_17,
  MR_Word * LocalVarDefns_18,
  MR_Word * FuncDefns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(
  MR_Word Vars_11,
  MR_Word HeadTypes_12,
  MR_Word TopFunctorModes_13,
  MR_Word CopiedOutputVars_14,
  MR_Word Context_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * InputStmts_17,
  MR_Word * OutputStmts_18,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_set_up_initial_succ_cont_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * NondetCopiedOutputVars_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * CopiedOutputVars_6,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__construct_func_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__construct_func_defn_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcIdInfo_8,
  MR_Word FuncParams_9,
  MR_Word FuncBody_10,
  MR_Word EnvVarNames_11,
  MR_Word * FuncDefn_12);

static void MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_9_p_0(
  MR_Word PredProcId_10,
  MR_Word Context_11,
  MR_Word LocalVarDefns_12,
  MR_Word FuncDefns_13,
  MR_Word GoalStmts_14,
  MR_Word TailRecInfo_15,
  MR_Word * FuncBody_16,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__project_pred_proc_id_info_id_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ml_backend__ml_proc_gen__requantify_codegen_proc_3_p_0(
  MR_Integer ProcId_4,
  MR_Word STATE_VARIABLE_ProcTable_0_8,
  MR_Word * STATE_VARIABLE_ProcTable_9);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word OptTailCalls_2,
  MR_Word Target_3,
  MR_Word ConstStructMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_FuncDefns_0_6,
  MR_Word * STATE_VARIABLE_FuncDefns_7,
  MR_Word STATE_VARIABLE_GlobalData_0_8,
  MR_Word * STATE_VARIABLE_GlobalData_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word OptTailCalls_13,
  MR_Word Target_14,
  MR_Word ConstStructMap_15,
  MR_Word SCCE_16,
  MR_Word STATE_VARIABLE_FuncDefns_0_31,
  MR_Word * STATE_VARIABLE_FuncDefns_32,
  MR_Word STATE_VARIABLE_GlobalData_0_33,
  MR_Word * STATE_VARIABLE_GlobalData_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static void MR_CALL 
ml_backend__ml_proc_gen__partition_tsccs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_proc_gen__partition_scc_procs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_CodeGenPredProcIds_0_3,
  MR_Word * STATE_VARIABLE_CodeGenPredProcIds_4);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____none_or_self_tail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____none_or_self_tail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_1[3][3];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_2[5][2];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_3[4][6];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_4[3][14];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_5[1][5];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_6[2][1];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_7[1][10];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_8[1][11];




static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_2[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_3[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_attribute_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_attribute_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_4[3][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_none_or_self_tail_rec_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_none_or_self_tail_rec_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_with_entry_points_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_6[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "setup for tailcalls optimized into a loop"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "proc_top"))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_8[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0
  }
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_0 = {
  (MR_String) "no_tail_call_opt_in_code_gen",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_1 = {
  (MR_String) "tail_call_opt_in_code_gen",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_maybe_tail_call_opt_in_code_gen_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_0,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_maybe_tail_call_opt_in_code_gen_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_0,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_1
};

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_tail_call_opt_in_code_gen_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_tail_call_opt_in_code_gen_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "maybe_tail_call_opt_in_code_gen",
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_maybe_tail_call_opt_in_code_gen_0 },
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_maybe_tail_call_opt_in_code_gen_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_tail_call_opt_in_code_gen_0
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_0 = {
  (MR_String) "no_tail_rec",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_1 = {
  (MR_String) "self_tail_rec",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_none_or_self_tail_rec_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_0,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_none_or_self_tail_rec_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_0,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_1
};

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_none_or_self_tail_rec_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_none_or_self_tail_rec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____none_or_self_tail_rec_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____none_or_self_tail_rec_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "none_or_self_tail_rec",
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_none_or_self_tail_rec_0 },
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_none_or_self_tail_rec_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_none_or_self_tail_rec_0
};

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_id_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
};

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_info_0_0 = {
  (MR_String) "pred_proc_id_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_id_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_id_info_0_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_id_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_id_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_pred_proc_id_info_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_info_0_0
};

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_pred_proc_id_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "pred_proc_id_info",
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_pred_proc_id_info_0 },
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_id_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_pred_proc_id_info_0
};

static void MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__702__1_8_p_0(
  MR_Word CodeModel_12,
  MR_Word Context_24,
  MR_Word ConvOutputStmts_28,
  MR_Word * LambdaHeadVar__1_44,
  MR_Word * LambdaHeadVar__2_45,
  MR_Word * LambdaHeadVar__3_46,
  MR_Word LambdaHeadVar__4_47,
  MR_Word * LambdaHeadVar__5_48)
{
  {
    MR_Word SuccStmts_36;

    ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_12, Context_24, &SuccStmts_36, LambdaHeadVar__4_47, LambdaHeadVar__5_48);
    *LambdaHeadVar__1_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *LambdaHeadVar__2_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *LambdaHeadVar__3_46 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvOutputStmts_28, SuccStmts_36);
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_procs_for_code_gen__150__1_2_f_0(
  MR_Word PredId_13,
  MR_Integer LambdaHeadVar__1_32)
{
  {
    MR_Word LambdaHeadVar__2_33;

    {
      LambdaHeadVar__2_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_33, 0) = ((MR_Box) (PredId_13));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_33, 1) = ((MR_Box) (LambdaHeadVar__1_32));
    }
    return LambdaHeadVar__2_33;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        hlds__hlds_pred____Compare____pred_info_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          hlds__hlds_pred____Compare____proc_info_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____none_or_self_tail_rec_0_0(
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

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____none_or_self_tail_rec_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0(
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

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__attribute_to_mlds_attribute_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Type_5 = (MR_Word) HeadVar__2_2;
    MR_Word Var_6;

    Var_6 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_4, Type_5);
    HeadVar__3_3 = (MR_Word) Var_6;
    return HeadVar__3_3;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_FuncDefns_24;
    MR_Word conv1_STATE_VARIABLE_GlobalData_26;
    MR_Word conv0_STATE_VARIABLE_Specs_28;

    ml_backend__ml_proc_gen__ml_gen_proc_lookup_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_FuncDefns_24, ((MR_Word) wrapper_arg_4), &conv1_STATE_VARIABLE_GlobalData_26, ((MR_Word) wrapper_arg_6), &conv0_STATE_VARIABLE_Specs_28);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FuncDefns_24));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_GlobalData_26));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_28));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Target_13,
  MR_Word ConstStructMap_14,
  MR_Word SCCEntryProcs_15,
  MR_Word TSCCE_16,
  MR_Word STATE_VARIABLE_FuncDefns_0_25,
  MR_Word * STATE_VARIABLE_FuncDefns_26,
  MR_Word STATE_VARIABLE_GlobalData_0_27,
  MR_Word * STATE_VARIABLE_GlobalData_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_Word TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word PredProcIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSCCE_16, (MR_Integer) 0)));
    MR_Word CalledFromHigherSCCs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSCCE_16, (MR_Integer) 1)));
    MR_Word ExportedProcs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSCCE_16, (MR_Integer) 2)));
    MR_Word TSCCEntryProcs_23;
    MR_Word Var_31;
    MR_Word _EntryProcs_24;
    MR_Box conv5_STATE_VARIABLE_FuncDefns_26;
    MR_Box conv4_STATE_VARIABLE_GlobalData_28;
    MR_Box conv3_STATE_VARIABLE_Specs_30;

    mercury__set__union_3_p_0(TypeCtorInfo_36_36, CalledFromHigherSCCs_21, ExportedProcs_22, &TSCCEntryProcs_23);
    mercury__set__union_3_p_0(TypeCtorInfo_36_36, SCCEntryProcs_15, TSCCEntryProcs_23, &_EntryProcs_24);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_tscc_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (ModuleInfo_12));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (Target_13));
      MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (ConstStructMap_14));
      MR_hl_field(MR_mktag(0), Var_31, 6) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__set__foldl3_8_p_0(TypeCtorInfo_36_36, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[0], (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[1], Var_31, PredProcIds_20, ((MR_Box) (STATE_VARIABLE_FuncDefns_0_25)), &conv5_STATE_VARIABLE_FuncDefns_26, ((MR_Box) (STATE_VARIABLE_GlobalData_0_27)), &conv4_STATE_VARIABLE_GlobalData_28, ((MR_Box) (STATE_VARIABLE_Specs_0_29)), &conv3_STATE_VARIABLE_Specs_30);
    *STATE_VARIABLE_FuncDefns_26 = ((MR_Word) conv5_STATE_VARIABLE_FuncDefns_26);
    *STATE_VARIABLE_GlobalData_28 = ((MR_Word) conv4_STATE_VARIABLE_GlobalData_28);
    *STATE_VARIABLE_Specs_30 = ((MR_Word) conv3_STATE_VARIABLE_Specs_30);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_lookup_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Target_13,
  MR_Word ConstStructMap_14,
  MR_Word NoneOrSelf_15,
  MR_Word PredProcId_16,
  MR_Word STATE_VARIABLE_FuncDefns_0_23,
  MR_Word * STATE_VARIABLE_FuncDefns_24,
  MR_Word STATE_VARIABLE_GlobalData_0_25,
  MR_Word * STATE_VARIABLE_GlobalData_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  {
    MR_Word PredInfo_20;
    MR_Word ProcInfo_21;
    MR_Word PredProcIdInfo_22;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_12, PredProcId_16, &PredInfo_20, &ProcInfo_21);
    {
      PredProcIdInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcIdInfo_22, 0) = ((MR_Box) (PredProcId_16));
      MR_hl_field(MR_mktag(0), PredProcIdInfo_22, 1) = ((MR_Box) (PredInfo_20));
      MR_hl_field(MR_mktag(0), PredProcIdInfo_22, 2) = ((MR_Box) (ProcInfo_21));
    }
    ml_backend__ml_proc_gen__ml_gen_proc_11_p_0(ModuleInfo_12, Target_13, ConstStructMap_14, NoneOrSelf_15, PredProcIdInfo_22, STATE_VARIABLE_FuncDefns_0_23, STATE_VARIABLE_FuncDefns_24, STATE_VARIABLE_GlobalData_0_25, STATE_VARIABLE_GlobalData_26, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Target_13,
  MR_Word ConstStructMap_14,
  MR_Word NoneOrSelf_15,
  MR_Word PredProcIdInfo_16,
  MR_Word STATE_VARIABLE_FuncDefns_0_56,
  MR_Word * STATE_VARIABLE_FuncDefns_57,
  MR_Word STATE_VARIABLE_GlobalData_0_58,
  MR_Word * STATE_VARIABLE_GlobalData_59,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61)
{
  {
    MR_bool succeeded;
    MR_Word PredProcId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_16, (MR_Integer) 0)));
    MR_Word PredInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_16, (MR_Integer) 1)));
    MR_Word ProcInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_16, (MR_Integer) 2)));
    MR_Word Goal_24;
    MR_Word GoalInfo_26;
    MR_Word Context_27;
    MR_Word TailRecMap0_29;
    MR_Word PredStatus_30;
    MR_Word FuncParams_32;
    MR_Word FuncBody_34;
    MR_Word EnvVarNames_35;
    MR_Word ClosureWrapperFuncDefns_36;
    MR_Word FuncDefn_55;
    MR_Word STATE_VARIABLE_Info_65_65;
    MR_Word Var_76;
    MR_Word Globals_85;
    MR_Word SupportsBreakContinue_86;
    MR_Word _GoalExpr_25;
    MR_Word Var_66;
    MR_Word Var_31;

    hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Generating MLDS code for ", PredProcId_20, ModuleInfo_12);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_22, &Goal_24);
    _GoalExpr_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_24, (MR_Integer) 0)));
    GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_24, (MR_Integer) 1)));
    Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_26);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_12, &Globals_85);
    SupportsBreakContinue_86 = ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0(Globals_85);
    switch (NoneOrSelf_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, &TailRecMap0_29);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InputParams_87;
          MR_Word TailRecMechanism0_88;
          MR_Word TailRecTargetInfo0_89;

          InputParams_87 = ml_backend__ml_args_util__ml_gen_proc_params_inputs_only_no_gc_stmts_2_f_0(ModuleInfo_12, PredProcId_20);
          switch (SupportsBreakContinue_86) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                TailRecMechanism0_88 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_6[1]);
              }
              break;
            case (MR_Integer) 1:
              TailRecMechanism0_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
          }
          {
            TailRecTargetInfo0_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TailRecTargetInfo0_89, 0) = ((MR_Box) (TailRecMechanism0_88));
            MR_hl_field(MR_mktag(0), TailRecTargetInfo0_89, 1) = ((MR_Box) (InputParams_87));
            MR_hl_field(MR_mktag(0), TailRecTargetInfo0_89, 2) = ((MR_Box) ((MR_Integer) 0));
          }
          TailRecMap0_29 = mercury__map__singleton_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, ((MR_Box) (PredProcId_20)), ((MR_Box) (TailRecTargetInfo0_89)));
        }
        break;
    }
    STATE_VARIABLE_Info_65_65 = ml_backend__ml_gen_info__ml_gen_info_init_7_f_0(ModuleInfo_12, Target_13, ConstStructMap_14, PredProcId_20, ProcInfo_22, TailRecMap0_29, STATE_VARIABLE_GlobalData_0_58);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_21, &PredStatus_30);
    Var_66 = (MR_Word) PredStatus_30;
    succeeded = ((MR_tag((MR_Word) Var_66)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 0)));
      {
        MR_Word _Info_33;

        ml_backend__ml_args_util__ml_gen_info_proc_params_4_p_0(PredProcId_20, &FuncParams_32, STATE_VARIABLE_Info_65_65, &_Info_33);
        FuncBody_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__set__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &EnvVarNames_35);
        ClosureWrapperFuncDefns_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_0_60;
        *STATE_VARIABLE_GlobalData_59 = STATE_VARIABLE_GlobalData_0_58;
      }
    }
    else
    {
      MR_Word FuncDefns_17;
      MR_Word CodeModel_37;
      MR_Word CopiedOutputVars_38;
      MR_Word HeadVars_39;
      MR_Word ArgModes_40;
      MR_Word ArgTypes_41;
      MR_Word TopFunctorModes_42;
      MR_Word LocalVarDefns0_43;
      MR_Word GoalStmts_44;
      MR_Word OutputVarLocalDefns_45;
      MR_Word UsedSucceededVar_51;
      MR_Word ProcLocalVarDefns_52;
      MR_Word LocalVarDefns_53;
      MR_Word TailRecInfo_54;
      MR_Word STATE_VARIABLE_Info_68_68;
      MR_Word STATE_VARIABLE_Info_69_69;
      MR_Word STATE_VARIABLE_Info_70_70;
      MR_Word STATE_VARIABLE_Info_72_77;

      CodeModel_37 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_22);
      switch (CodeModel_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0(ModuleInfo_12, &CopiedOutputVars_38, STATE_VARIABLE_Info_65_65, &STATE_VARIABLE_Info_68_68);
          break;
        case (MR_Integer) 2:
          ml_backend__ml_proc_gen__ml_set_up_initial_succ_cont_4_p_0(ModuleInfo_12, &CopiedOutputVars_38, STATE_VARIABLE_Info_65_65, &STATE_VARIABLE_Info_68_68);
          break;
      }
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_22, &HeadVars_39);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_22, &ArgModes_40);
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_21, &ArgTypes_41);
      check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ModuleInfo_12, ArgModes_40, ArgTypes_41, &TopFunctorModes_42);
      ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0(CodeModel_37, HeadVars_39, ArgTypes_41, TopFunctorModes_42, CopiedOutputVars_38, Goal_24, &LocalVarDefns0_43, &FuncDefns_17, &GoalStmts_44, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_69_69);
      if ((CopiedOutputVars_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        OutputVarLocalDefns_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        STATE_VARIABLE_Info_70_70 = STATE_VARIABLE_Info_69_69;
      }
      else
      {
        MR_Word VarSet_48;
        MR_Word VarTypes_49;
        MR_Word UpdatedVarTypes_50;

        hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_22, &VarSet_48);
        hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_22, &VarTypes_49);
        hlds__vartypes__vartypes_overlay_corresponding_lists_4_p_0(HeadVars_39, ArgTypes_41, VarTypes_49, &UpdatedVarTypes_50);
        ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(VarSet_48, UpdatedVarTypes_50, Context_27, CopiedOutputVars_38, &OutputVarLocalDefns_45, STATE_VARIABLE_Info_69_69, &STATE_VARIABLE_Info_70_70);
      }
      ml_backend__ml_gen_info__ml_gen_info_get_used_succeeded_var_2_p_0(STATE_VARIABLE_Info_70_70, &UsedSucceededVar_51);
      switch (UsedSucceededVar_51) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ProcLocalVarDefns_52 = OutputVarLocalDefns_45;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_71;

            Var_71 = ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_f_0(Context_27);
            {
              ProcLocalVarDefns_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ProcLocalVarDefns_52, 0) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(1), ProcLocalVarDefns_52, 1) = ((MR_Box) (OutputVarLocalDefns_45));
            }
          }
          break;
      }
      LocalVarDefns_53 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ProcLocalVarDefns_52, LocalVarDefns0_43);
      ml_backend__ml_args_util__ml_gen_info_proc_params_4_p_0(PredProcId_20, &FuncParams_32, STATE_VARIABLE_Info_70_70, &STATE_VARIABLE_Info_72_77);
      ml_backend__ml_gen_info__ml_gen_info_get_tail_rec_info_2_p_0(STATE_VARIABLE_Info_72_77, &TailRecInfo_54);
      ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_9_p_0(PredProcId_20, Context_27, LocalVarDefns_53, FuncDefns_17, GoalStmts_44, TailRecInfo_54, &FuncBody_34, STATE_VARIABLE_Specs_0_60, STATE_VARIABLE_Specs_61);
      ml_backend__ml_gen_info__ml_gen_info_get_env_var_names_2_p_0(STATE_VARIABLE_Info_72_77, &EnvVarNames_35);
      ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(STATE_VARIABLE_Info_72_77, &ClosureWrapperFuncDefns_36);
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_72_77, STATE_VARIABLE_GlobalData_59);
    }
    ml_backend__ml_proc_gen__construct_func_defn_6_p_0(ModuleInfo_12, PredProcIdInfo_16, FuncParams_32, FuncBody_34, EnvVarNames_35, &FuncDefn_55);
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (FuncDefn_55));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (STATE_VARIABLE_FuncDefns_0_56));
    }
    *STATE_VARIABLE_FuncDefns_57 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, ClosureWrapperFuncDefns_36, Var_76);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_LambdaHeadVar__1_44;
    MR_Word conv6_LambdaHeadVar__2_45;
    MR_Word conv5_LambdaHeadVar__3_46;
    MR_Word conv4_LambdaHeadVar__5_48;

    ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__702__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv7_LambdaHeadVar__1_44, &conv6_LambdaHeadVar__2_45, &conv5_LambdaHeadVar__3_46, ((MR_Word) wrapper_arg_4), &conv4_LambdaHeadVar__5_48);
    *wrapper_arg_1 = ((MR_Box) (conv7_LambdaHeadVar__1_44));
    *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_45));
    *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_46));
    *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_48));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;
    MR_Word conv2_HeadVar__4_4;
    MR_Word conv1_HeadVar__5_5;
    MR_Word conv0_HeadVar__7_7;

    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &conv3_HeadVar__3_3, &conv2_HeadVar__4_4, &conv1_HeadVar__5_5, ((MR_Word) wrapper_arg_4), &conv0_HeadVar__7_7);
    *wrapper_arg_1 = ((MR_Box) (conv3_HeadVar__3_3));
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__5_5));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__7_7));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0(
  MR_Word CodeModel_12,
  MR_Word HeadVars_13,
  MR_Word ArgTypes_14,
  MR_Word TopFunctorModes_15,
  MR_Word CopiedOutputVars_16,
  MR_Word Goal_17,
  MR_Word * LocalVarDefns_18,
  MR_Word * FuncDefns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  {
    MR_bool succeeded;
    MR_Word GoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_17, (MR_Integer) 1)));
    MR_Word Context_24;
    MR_Word CopiedOutputVarOriginalLvals_25;
    MR_Word ConvLocalVarDefns_26;
    MR_Word ConvInputStmts_27;
    MR_Word ConvOutputStmts_28;
    MR_Word Stmts1_29;
    MR_Word STATE_VARIABLE_Info_42_42;
    MR_Word STATE_VARIABLE_Info_43_43;
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_17, (MR_Integer) 0)));

    Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_23);
    ml_backend__ml_code_util__ml_gen_var_list_3_p_0(STATE_VARIABLE_Info_0_40, CopiedOutputVars_16, &CopiedOutputVarOriginalLvals_25);
    ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(HeadVars_13, ArgTypes_14, TopFunctorModes_15, CopiedOutputVars_16, Context_24, &ConvLocalVarDefns_26, &ConvInputStmts_27, &ConvOutputStmts_28, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_42_42);
    succeeded = (ConvLocalVarDefns_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      succeeded = (ConvInputStmts_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (ConvOutputStmts_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
      ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_12, Goal_17, LocalVarDefns_18, FuncDefns_19, &Stmts1_29, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_43_43);
    else
    {
      MR_Word DoGenGoal_30;
      MR_Word DoConvOutputs_31;
      MR_Word LocalVarDefns0_37;
      MR_Word Stmts0_39;

      {
        DoGenGoal_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenGoal_30, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), DoGenGoal_30, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0_1));
        MR_hl_field(MR_mktag(0), DoGenGoal_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), DoGenGoal_30, 3) = ((MR_Box) (CodeModel_12));
        MR_hl_field(MR_mktag(0), DoGenGoal_30, 4) = ((MR_Box) (Goal_17));
      }
      {
        DoConvOutputs_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoConvOutputs_31, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), DoConvOutputs_31, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0_2));
        MR_hl_field(MR_mktag(0), DoConvOutputs_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), DoConvOutputs_31, 3) = ((MR_Box) (CodeModel_12));
        MR_hl_field(MR_mktag(0), DoConvOutputs_31, 4) = ((MR_Box) (Context_24));
        MR_hl_field(MR_mktag(0), DoConvOutputs_31, 5) = ((MR_Box) (ConvOutputStmts_28));
      }
      ml_backend__ml_code_util__ml_combine_conj_9_p_0(CodeModel_12, Context_24, DoGenGoal_30, DoConvOutputs_31, &LocalVarDefns0_37, FuncDefns_19, &Stmts0_39, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_43_43);
      Stmts1_29 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvInputStmts_27, Stmts0_39);
      *LocalVarDefns_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ConvLocalVarDefns_26, LocalVarDefns0_37);
    }
    ml_backend__ml_args_util__ml_append_return_statement_7_p_0(CodeModel_12, CopiedOutputVarOriginalLvals_25, Context_24, Stmts1_29, Stmts_20, STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Info_41);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(
  MR_Word Vars_11,
  MR_Word HeadTypes_12,
  MR_Word TopFunctorModes_13,
  MR_Word CopiedOutputVars_14,
  MR_Word Context_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * InputStmts_17,
  MR_Word * OutputStmts_18,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Vars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      succeeded = (HeadTypes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (TopFunctorModes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      *LocalVarDefns_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *InputStmts_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *OutputStmts_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_41 = STATE_VARIABLE_Info_0_40;
    }
    else
    {
      MR_Word Var_20;
      MR_Word VarsTail_21;
      MR_Word HeadType_22;
      MR_Word HeadTypesTail_23;
      MR_Word TopFunctorMode_24;
      MR_Word TopFunctorModesTail_25;

      succeeded = ((MR_tag((MR_Word) Vars_11)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_11, (MR_Integer) 0)));
        VarsTail_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_11, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) HeadTypes_12)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          HeadType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadTypes_12, (MR_Integer) 0)));
          HeadTypesTail_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadTypes_12, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) TopFunctorModes_13)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            TopFunctorMode_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), TopFunctorModes_13, (MR_Integer) 0)));
            TopFunctorModesTail_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), TopFunctorModes_13, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word BodyType_26;

        ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_40, Var_20, &BodyType_26);
        {
          MR_Word TypeInfo_52_52 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[3];
          MR_Word TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          MR_Word Subst0_27;
          MR_Word Subst_28;

          mercury__map__init_1_p_0(TypeInfo_52_52, TypeCtorInfo_53_53, &Subst0_27);
          succeeded = parse_tree__prog_type__type_unify_5_p_0(HeadType_22, BodyType_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Subst0_27, &Subst_28);
          if (succeeded)
            succeeded = mercury__map__is_empty_1_p_0(TypeInfo_52_52, TypeCtorInfo_53_53, Subst_28);
        }
        if (!(succeeded))
          succeeded = (TopFunctorMode_24 == (MR_Integer) 2);
        if (succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word next_value_of_Vars_11 = VarsTail_21;
            MR_Word next_value_of_HeadTypes_12 = HeadTypesTail_23;
            MR_Word next_value_of_TopFunctorModes_13 = TopFunctorModesTail_25;

            Vars_11 = next_value_of_Vars_11;
            HeadTypes_12 = next_value_of_HeadTypes_12;
            TopFunctorModes_13 = next_value_of_TopFunctorModes_13;
          }
          continue;
        }
        else
        {
          MR_Word HeadVarLval_29;
          MR_Word VarSet_30;
          MR_Word VarName_31;
          MR_Word BodyLval_32;
          MR_Word ConvLocalVarDefns_33;
          MR_Word ConvInputStmts_34;
          MR_Word ConvOutputStmts_35;
          MR_Word LocalVarDefnsTail_36;
          MR_Word InputStmtsTail_37;
          MR_Word OutputStmtsTail_38;
          MR_Word ByRefOutputVars_39;
          MR_Word STATE_VARIABLE_Info_47_47;
          MR_Word STATE_VARIABLE_Info_48_48;

          ml_backend__ml_code_util__ml_gen_var_with_type_4_p_0(STATE_VARIABLE_Info_0_40, Var_20, HeadType_22, &HeadVarLval_29);
          ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_40, &VarSet_30);
          VarName_31 = ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(VarSet_30, Var_20);
          ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(HeadType_22, BodyType_26, (MR_Integer) 0, HeadVarLval_29, VarName_31, Context_15, (MR_Integer) 0, (MR_Integer) 0, &BodyLval_32, &ConvLocalVarDefns_33, &ConvInputStmts_34, &ConvOutputStmts_35, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_47_47);
          ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_p_0(Var_20, BodyLval_32, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_48_48);
          ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(VarsTail_21, HeadTypesTail_23, TopFunctorModesTail_25, CopiedOutputVars_14, Context_15, &LocalVarDefnsTail_36, &InputStmtsTail_37, &OutputStmtsTail_38, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_41);
          ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(*STATE_VARIABLE_Info_41, &ByRefOutputVars_39);
          succeeded = mercury__list__member_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[2], ((MR_Box) (Var_20)), ByRefOutputVars_39);
          if (!(succeeded))
          {
            succeeded = mercury__list__member_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[2], ((MR_Box) (Var_20)), CopiedOutputVars_14);
          }
          if (succeeded)
          {
            *InputStmts_17 = InputStmtsTail_37;
            *OutputStmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, OutputStmtsTail_38, ConvOutputStmts_35);
          }
          else
          {
            *InputStmts_17 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvInputStmts_34, InputStmtsTail_37);
            *OutputStmts_18 = OutputStmtsTail_38;
          }
          *LocalVarDefns_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ConvLocalVarDefns_33, LocalVarDefnsTail_36);
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_proc_gen.ml_gen_convert_headvars\'/10", (MR_String) "length mismatch");
          return;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_set_up_initial_succ_cont_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * NondetCopiedOutputVars_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_Word Globals_8;
    MR_Word NondetCopyOut_9;
    MR_Word OutputVarLvals_10;
    MR_Word OutputVarTypes_11;
    MR_Word InitialCont_12;
    MR_Word STATE_VARIABLE_Info_17_17;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_8);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 268, &NondetCopyOut_9);
    switch (NondetCopyOut_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *NondetCopiedOutputVars_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          STATE_VARIABLE_Info_17_17 = STATE_VARIABLE_Info_0_13;
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(STATE_VARIABLE_Info_0_13, NondetCopiedOutputVars_6);
          ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_Info_0_13, &STATE_VARIABLE_Info_17_17);
        }
        break;
    }
    ml_backend__ml_code_util__ml_gen_var_list_3_p_0(STATE_VARIABLE_Info_17_17, *NondetCopiedOutputVars_6, &OutputVarLvals_10);
    ml_backend__ml_code_util__ml_variable_types_3_p_0(STATE_VARIABLE_Info_17_17, *NondetCopiedOutputVars_6, &OutputVarTypes_11);
    ml_backend__ml_code_util__ml_initial_cont_4_p_0(STATE_VARIABLE_Info_17_17, OutputVarLvals_10, OutputVarTypes_11, &InitialCont_12);
    ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(InitialCont_12, STATE_VARIABLE_Info_17_17, STATE_VARIABLE_Info_14);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__hlds_pred__var_is_of_dummy_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * CopiedOutputVars_6,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_bool succeeded;
    MR_Word OutputVars_8;
    MR_Word Globals_9;
    MR_Word DetCopyOut_10;
    MR_Word ByRefOutputVars_11;

    ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(STATE_VARIABLE_Info_0_16, &OutputVars_8);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 267, &DetCopyOut_10);
    switch (DetCopyOut_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ResultVar_15;
          MR_Word PredProcId_14;

          ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_16, &PredProcId_14);
          succeeded = ml_backend__ml_code_util__ml_is_output_det_function_3_p_0(ModuleInfo_5, PredProcId_14, &ResultVar_15);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *CopiedOutputVars_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ResultVar_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            mercury__list__delete_all_3_p_1((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[2], OutputVars_8, ((MR_Box) (ResultVar_15)), &ByRefOutputVars_11);
          }
          else
          {
            *CopiedOutputVars_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ByRefOutputVars_11 = OutputVars_8;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word VarTypes_12;
          MR_Word Var_20;
          MR_Word Var_13;

          ByRefOutputVars_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_16, &VarTypes_12);
          {
            Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[3]));
            MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ModuleInfo_5));
            MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (VarTypes_12));
          }
          mercury__list__filter_4_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[2], Var_20, OutputVars_8, &Var_13, CopiedOutputVars_6);
        }
        break;
    }
    ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0(ByRefOutputVars_11, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__construct_func_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = ml_backend__ml_proc_gen__attribute_to_mlds_attribute_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__construct_func_defn_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcIdInfo_8,
  MR_Word FuncParams_9,
  MR_Word FuncBody_10,
  MR_Word EnvVarNames_11,
  MR_Word * FuncDefn_12)
{
  {
    MR_bool succeeded;
    MR_Word PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_8, (MR_Integer) 0)));
    MR_Word PredInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_8, (MR_Integer) 1)));
    MR_Word ProcInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_8, (MR_Integer) 2)));
    MR_Word PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcId_13, (MR_Integer) 0)));
    MR_Integer ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_13, (MR_Integer) 1)));
    MR_Word PlainFuncName_19;
    MR_Word ProcContext_20;
    MR_Word DeclFlags_21;
    MR_Word MaybePredProcId_22;
    MR_Word Attributes_23;
    MR_Word AttributeList_24;
    MR_Word MLDS_Attributes_25;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word PredInfo_37;
    MR_Word Access_38;
    MR_Word _ModuleName_18;

    ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_7, PredProcId_13, &_ModuleName_18, &PlainFuncName_19);
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_15, &ProcContext_20);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_16, &PredInfo_37);
    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_37, ProcId_17);
    if (succeeded)
      Access_38 = (MR_Integer) 0;
    else
      Access_38 = (MR_Integer) 1;
    DeclFlags_21 = ml_backend__mlds__init_function_decl_flags_2_f_0(Access_38, (MR_Integer) 0);
    {
      MaybePredProcId_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePredProcId_22, 0) = ((MR_Box) (PredProcId_13));
    }
    hlds__hlds_pred__pred_info_get_attributes_2_p_0(PredInfo_14, &Attributes_23);
    hlds__hlds_pred__attributes_to_attribute_list_2_p_0(Attributes_23, &AttributeList_24);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (ml_backend__ml_proc_gen__construct_func_defn_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (ModuleInfo_7));
    }
    MLDS_Attributes_25 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_attribute_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_attribute_0, Var_27, AttributeList_24);
    Var_28 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) PlainFuncName_19);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *FuncDefn_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcContext_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DeclFlags_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybePredProcId_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FuncParams_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FuncBody_10));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MLDS_Attributes_25));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (EnvVarNames_11));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_9_p_0(
  MR_Word PredProcId_10,
  MR_Word Context_11,
  MR_Word LocalVarDefns_12,
  MR_Word FuncDefns_13,
  MR_Word GoalStmts_14,
  MR_Word TailRecInfo_15,
  MR_Word * FuncBody_16,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  {
    MR_bool succeeded;
    MR_Word TargetMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_15, (MR_Integer) 0)));
    MR_Word TailRecSpecs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_15, (MR_Integer) 2)));
    MR_Word FuncBodyStmt_29;
    MR_Word _WarnParams_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_15, (MR_Integer) 1)));
    MR_Word TailRecMechanism_22;
    MR_Word TailRecTargetInfo_21;
    MR_Word HaveDoneTailRec_24;
    MR_Box conv0_TailRecTargetInfo_21;
    MR_Word _InputParams_23;

    *STATE_VARIABLE_Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, TailRecSpecs_20, STATE_VARIABLE_Specs_0_32);
    succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, TargetMap_18, ((MR_Box) (PredProcId_10)), &conv0_TailRecTargetInfo_21);
    if (succeeded)
    {
      TailRecTargetInfo_21 = ((MR_Word) conv0_TailRecTargetInfo_21);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TailRecMechanism_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo_21, (MR_Integer) 0)));
      _InputParams_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo_21, (MR_Integer) 1)));
      HaveDoneTailRec_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo_21, (MR_Integer) 2)));
      succeeded = (HaveDoneTailRec_24 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word CommentStmt_26;

      {
        CommentStmt_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CommentStmt_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
        MR_hl_field(MR_mktag(3), CommentStmt_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_6[0])));
        MR_hl_field(MR_mktag(3), CommentStmt_26, 2) = ((MR_Box) (Context_11));
      }
      if ((TailRecMechanism_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word TypeCtorInfo_53_53;
        MR_Word BreakStmt_27;
        MR_Word LoopBodyStmt_28;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_44;
        MR_Word Var_45;

        {
          BreakStmt_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), BreakStmt_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), BreakStmt_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), BreakStmt_27, 2) = ((MR_Box) (Context_11));
        }
        TypeCtorInfo_53_53 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (CommentStmt_26));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (BreakStmt_27));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        Var_44 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_53_53, GoalStmts_14, Var_45);
        Var_41 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_53_53, Var_42, Var_44);
        {
          LoopBodyStmt_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), LoopBodyStmt_28, 0) = ((MR_Box) (LocalVarDefns_12));
          MR_hl_field(MR_mktag(0), LoopBodyStmt_28, 1) = ((MR_Box) (FuncDefns_13));
          MR_hl_field(MR_mktag(0), LoopBodyStmt_28, 2) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(0), LoopBodyStmt_28, 3) = ((MR_Box) (Context_11));
        }
        {
          FuncBodyStmt_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FuncBodyStmt_29, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), FuncBodyStmt_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_2[4])));
          MR_hl_field(MR_mktag(1), FuncBodyStmt_29, 2) = ((MR_Box) (LoopBodyStmt_28));
          MR_hl_field(MR_mktag(1), FuncBodyStmt_29, 3) = ((MR_Box) (Context_11));
        }
      }
      else
      {
        MR_String StartLabel_30 = ((MR_String) (MR_hl_field(MR_mktag(1), TailRecMechanism_22, (MR_Integer) 0)));
        MR_Word LoopTopLabelStmt_31;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;

        {
          LoopTopLabelStmt_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), LoopTopLabelStmt_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), LoopTopLabelStmt_31, 1) = ((MR_Box) (StartLabel_30));
          MR_hl_field(MR_mktag(3), LoopTopLabelStmt_31, 2) = ((MR_Box) (Context_11));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (LoopTopLabelStmt_31));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (CommentStmt_26));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
        }
        Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, Var_37, GoalStmts_14);
        {
          FuncBodyStmt_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FuncBodyStmt_29, 0) = ((MR_Box) (LocalVarDefns_12));
          MR_hl_field(MR_mktag(0), FuncBodyStmt_29, 1) = ((MR_Box) (FuncDefns_13));
          MR_hl_field(MR_mktag(0), FuncBodyStmt_29, 2) = ((MR_Box) (Var_36));
          MR_hl_field(MR_mktag(0), FuncBodyStmt_29, 3) = ((MR_Box) (Context_11));
        }
      }
    }
    else
      FuncBodyStmt_29 = ml_backend__ml_code_util__ml_gen_block_4_f_0(LocalVarDefns_12, FuncDefns_13, GoalStmts_14, Context_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *FuncBody_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FuncBodyStmt_29));
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__project_pred_proc_id_info_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word PredProcId_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));

    return PredProcId_3;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__requantify_codegen_proc_3_p_0(
  MR_Integer ProcId_4,
  MR_Word STATE_VARIABLE_ProcTable_0_8,
  MR_Word * STATE_VARIABLE_ProcTable_9)
{
  {
    MR_Word TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    MR_Word ProcInfo0_6;
    MR_Word ProcInfo_7;
    MR_Box conv0_ProcInfo0_6;

    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeCtorInfo_13_13, STATE_VARIABLE_ProcTable_0_8, ProcId_4, &conv0_ProcInfo0_6);
    ProcInfo0_6 = ((MR_Word) conv0_ProcInfo0_6);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ProcInfo0_6, &ProcInfo_7);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeCtorInfo_13_13, ProcId_4, ((MR_Box) (ProcInfo_7)), STATE_VARIABLE_ProcTable_0_8, STATE_VARIABLE_ProcTable_9);
  }
}

void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_preds_9_p_0(
  MR_Word Target_10,
  MR_Word ConstStructMap_11,
  MR_Word * FuncDefns_12,
  MR_Word STATE_VARIABLE_GlobalData_0_27,
  MR_Word * STATE_VARIABLE_GlobalData_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_43_43;
    MR_Word TypeCtorInfo_44_44;
    MR_Word TypeCtorInfo_45_45;
    MR_Word PredTable0_16;
    MR_Word PredIdInfos0_17;
    MR_Word PredIdInfos_18;
    MR_Word PredProcIds_19;
    MR_Word PredTable_20;
    MR_Word SortedPredProcIds_21;
    MR_Word CodeGenPredProcIds_22;
    MR_Word DepInfo_23;
    MR_Word BottomUpSCCsWithEntryPoints_24;
    MR_Word Globals_25;
    MR_Word OptTailCalls_26;
    MR_Word Var_38;
    MR_Word Var_39;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &PredTable0_16);
    TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    TypeCtorInfo_44_44 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    mercury__map__to_sorted_assoc_list_2_p_0(TypeCtorInfo_43_43, TypeCtorInfo_44_44, PredTable0_16, &PredIdInfos0_17);
    ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0(PredIdInfos0_17, &PredIdInfos_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &PredProcIds_19);
    mercury__map__from_sorted_assoc_list_2_p_0(TypeCtorInfo_43_43, TypeCtorInfo_44_44, PredIdInfos_18, &PredTable_20);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_20, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
    TypeCtorInfo_45_45 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    mercury__list__sort_2_p_0(TypeCtorInfo_45_45, PredProcIds_19, &SortedPredProcIds_21);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_45_45, SortedPredProcIds_21, &CodeGenPredProcIds_22);
    DepInfo_23 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(*STATE_VARIABLE_ModuleInfo_30, CodeGenPredProcIds_22, (MR_Integer) 1);
    hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(*STATE_VARIABLE_ModuleInfo_30, DepInfo_23, &BottomUpSCCsWithEntryPoints_24);
    hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_30, &Globals_25);
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_25, (MR_Integer) 464, (MR_Integer) 1);
    if (succeeded)
    {
      Var_38 = (MR_Integer) 465;
      Var_39 = (MR_Integer) 1;
      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_25, Var_38, Var_39);
    }
    if (succeeded)
      OptTailCalls_26 = (MR_Integer) 1;
    else
      OptTailCalls_26 = (MR_Integer) 0;
    ml_backend__ml_proc_gen__ml_gen_sccs_11_p_0(*STATE_VARIABLE_ModuleInfo_30, OptTailCalls_26, Target_10, ConstStructMap_11, BottomUpSCCsWithEntryPoints_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), FuncDefns_12, STATE_VARIABLE_GlobalData_0_27, STATE_VARIABLE_GlobalData_28, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word OptTailCalls_2,
  MR_Word Target_3,
  MR_Word ConstStructMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_FuncDefns_0_6,
  MR_Word * STATE_VARIABLE_FuncDefns_7,
  MR_Word STATE_VARIABLE_GlobalData_0_8,
  MR_Word * STATE_VARIABLE_GlobalData_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Specs_11 = STATE_VARIABLE_Specs_0_10;
      *STATE_VARIABLE_GlobalData_9 = STATE_VARIABLE_GlobalData_0_8;
      *STATE_VARIABLE_FuncDefns_7 = STATE_VARIABLE_FuncDefns_0_6;
    }
    else
    {
      MR_Word SCCE_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
      MR_Word SCCEs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_FuncDefns_40_40;
      MR_Word STATE_VARIABLE_GlobalData_41_41;
      MR_Word STATE_VARIABLE_Specs_42_42;

      ml_backend__ml_proc_gen__ml_gen_scc_11_p_0(ModuleInfo_1, OptTailCalls_2, Target_3, ConstStructMap_4, SCCE_29, STATE_VARIABLE_FuncDefns_0_6, &STATE_VARIABLE_FuncDefns_40_40, STATE_VARIABLE_GlobalData_0_8, &STATE_VARIABLE_GlobalData_41_41, STATE_VARIABLE_Specs_0_10, &STATE_VARIABLE_Specs_42_42);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__5_5 = SCCEs_30;
        MR_Word next_value_of_STATE_VARIABLE_FuncDefns_0_6 = STATE_VARIABLE_FuncDefns_40_40;
        MR_Word next_value_of_STATE_VARIABLE_GlobalData_0_8 = STATE_VARIABLE_GlobalData_41_41;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_10 = STATE_VARIABLE_Specs_42_42;

        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_FuncDefns_0_6 = next_value_of_STATE_VARIABLE_FuncDefns_0_6;
        STATE_VARIABLE_GlobalData_0_8 = next_value_of_STATE_VARIABLE_GlobalData_0_8;
        STATE_VARIABLE_Specs_0_10 = next_value_of_STATE_VARIABLE_Specs_0_10;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv27_STATE_VARIABLE_FuncDefns_26;
    MR_Word conv26_STATE_VARIABLE_GlobalData_28;
    MR_Word conv25_STATE_VARIABLE_Specs_30;

    ml_backend__ml_proc_gen__ml_gen_tscc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv27_STATE_VARIABLE_FuncDefns_26, ((MR_Word) wrapper_arg_4), &conv26_STATE_VARIABLE_GlobalData_28, ((MR_Word) wrapper_arg_6), &conv25_STATE_VARIABLE_Specs_30);
    *wrapper_arg_3 = ((MR_Box) (conv27_STATE_VARIABLE_FuncDefns_26));
    *wrapper_arg_5 = ((MR_Box) (conv26_STATE_VARIABLE_GlobalData_28));
    *wrapper_arg_7 = ((MR_Box) (conv25_STATE_VARIABLE_Specs_30));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv21_STATE_VARIABLE_FuncDefns_24;
    MR_Word conv20_STATE_VARIABLE_GlobalData_26;
    MR_Word conv19_STATE_VARIABLE_Specs_28;

    ml_backend__ml_proc_gen__ml_gen_proc_lookup_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv21_STATE_VARIABLE_FuncDefns_24, ((MR_Word) wrapper_arg_4), &conv20_STATE_VARIABLE_GlobalData_26, ((MR_Word) wrapper_arg_6), &conv19_STATE_VARIABLE_Specs_28);
    *wrapper_arg_3 = ((MR_Box) (conv21_STATE_VARIABLE_FuncDefns_24));
    *wrapper_arg_5 = ((MR_Box) (conv20_STATE_VARIABLE_GlobalData_26));
    *wrapper_arg_7 = ((MR_Box) (conv19_STATE_VARIABLE_Specs_28));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv18_PredProcId_3;

    conv18_PredProcId_3 = ml_backend__ml_proc_gen__project_pred_proc_id_info_id_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv18_PredProcId_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_STATE_VARIABLE_FuncDefns_57;
    MR_Word conv13_STATE_VARIABLE_GlobalData_59;
    MR_Word conv12_STATE_VARIABLE_Specs_61;

    ml_backend__ml_proc_gen__ml_gen_proc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv14_STATE_VARIABLE_FuncDefns_57, ((MR_Word) wrapper_arg_4), &conv13_STATE_VARIABLE_GlobalData_59, ((MR_Word) wrapper_arg_6), &conv12_STATE_VARIABLE_Specs_61);
    *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_FuncDefns_57));
    *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_GlobalData_59));
    *wrapper_arg_7 = ((MR_Box) (conv12_STATE_VARIABLE_Specs_61));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_FuncDefns_57;
    MR_Word conv7_STATE_VARIABLE_GlobalData_59;
    MR_Word conv6_STATE_VARIABLE_Specs_61;

    ml_backend__ml_proc_gen__ml_gen_proc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv8_STATE_VARIABLE_FuncDefns_57, ((MR_Word) wrapper_arg_4), &conv7_STATE_VARIABLE_GlobalData_59, ((MR_Word) wrapper_arg_6), &conv6_STATE_VARIABLE_Specs_61);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_FuncDefns_57));
    *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_GlobalData_59));
    *wrapper_arg_7 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_61));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_FuncDefns_24;
    MR_Word conv1_STATE_VARIABLE_GlobalData_26;
    MR_Word conv0_STATE_VARIABLE_Specs_28;

    ml_backend__ml_proc_gen__ml_gen_proc_lookup_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_FuncDefns_24, ((MR_Word) wrapper_arg_4), &conv1_STATE_VARIABLE_GlobalData_26, ((MR_Word) wrapper_arg_6), &conv0_STATE_VARIABLE_Specs_28);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FuncDefns_24));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_GlobalData_26));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_28));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word OptTailCalls_13,
  MR_Word Target_14,
  MR_Word ConstStructMap_15,
  MR_Word SCCE_16,
  MR_Word STATE_VARIABLE_FuncDefns_0_31,
  MR_Word * STATE_VARIABLE_FuncDefns_32,
  MR_Word STATE_VARIABLE_GlobalData_0_33,
  MR_Word * STATE_VARIABLE_GlobalData_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  {
    MR_Word TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word PredProcIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCCE_16, (MR_Integer) 0)));
    MR_Word CalledFromHigherSCCs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCCE_16, (MR_Integer) 1)));
    MR_Word ExportedProcs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCCE_16, (MR_Integer) 2)));
    MR_Word SCCEntryProcs_23;

    mercury__set__union_3_p_0(TypeCtorInfo_66_66, CalledFromHigherSCCs_21, ExportedProcs_22, &SCCEntryProcs_23);
    switch (OptTailCalls_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_61;
          MR_Box conv5_STATE_VARIABLE_FuncDefns_32;
          MR_Box conv4_STATE_VARIABLE_GlobalData_34;
          MR_Box conv3_STATE_VARIABLE_Specs_36;

          {
            Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_1));
            MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (ModuleInfo_12));
            MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (Target_14));
            MR_hl_field(MR_mktag(0), Var_61, 5) = ((MR_Box) (ConstStructMap_15));
            MR_hl_field(MR_mktag(0), Var_61, 6) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__set__foldl3_8_p_0(TypeCtorInfo_66_66, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[0], (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[1], Var_61, PredProcIds_20, ((MR_Box) (STATE_VARIABLE_FuncDefns_0_31)), &conv5_STATE_VARIABLE_FuncDefns_32, ((MR_Box) (STATE_VARIABLE_GlobalData_0_33)), &conv4_STATE_VARIABLE_GlobalData_34, ((MR_Box) (STATE_VARIABLE_Specs_0_35)), &conv3_STATE_VARIABLE_Specs_36);
          *STATE_VARIABLE_FuncDefns_32 = ((MR_Word) conv5_STATE_VARIABLE_FuncDefns_32);
          *STATE_VARIABLE_GlobalData_34 = ((MR_Word) conv4_STATE_VARIABLE_GlobalData_34);
          *STATE_VARIABLE_Specs_36 = ((MR_Word) conv3_STATE_VARIABLE_Specs_36);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_84_84;
          MR_Word TypeInfo_85_85;
          MR_Word TypeCtorInfo_86_86;
          MR_Word TypeInfo_87_87;
          MR_Word NonePredProcIdInfos_24;
          MR_Word SelfPredProcIdInfos_25;
          MR_Word MutualPredProcIdInfos_26;
          MR_Word TSCCDepInfo_27;
          MR_Word TSCCEntries_28;
          MR_Word LonePredProcIds_29;
          MR_Word NonTrivialTSCCEntries_30;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word STATE_VARIABLE_FuncDefns_39_39;
          MR_Word STATE_VARIABLE_GlobalData_40_40;
          MR_Word STATE_VARIABLE_Specs_41_41;
          MR_Word Var_43;
          MR_Word STATE_VARIABLE_FuncDefns_44_44;
          MR_Word STATE_VARIABLE_GlobalData_45_45;
          MR_Word STATE_VARIABLE_Specs_46_46;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_52;
          MR_Word STATE_VARIABLE_FuncDefns_53_53;
          MR_Word STATE_VARIABLE_GlobalData_54_54;
          MR_Word STATE_VARIABLE_Specs_55_55;
          MR_Word Var_57;
          MR_Box conv11_STATE_VARIABLE_FuncDefns_39_39;
          MR_Box conv10_STATE_VARIABLE_GlobalData_40_40;
          MR_Box conv9_STATE_VARIABLE_Specs_41_41;
          MR_Box conv17_STATE_VARIABLE_FuncDefns_44_44;
          MR_Box conv16_STATE_VARIABLE_GlobalData_45_45;
          MR_Box conv15_STATE_VARIABLE_Specs_46_46;
          MR_Box conv24_STATE_VARIABLE_FuncDefns_53_53;
          MR_Box conv23_STATE_VARIABLE_GlobalData_54_54;
          MR_Box conv22_STATE_VARIABLE_Specs_55_55;
          MR_Box conv30_STATE_VARIABLE_FuncDefns_32;
          MR_Box conv29_STATE_VARIABLE_GlobalData_34;
          MR_Box conv28_STATE_VARIABLE_Specs_36;

          Var_37 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_66_66, PredProcIds_20);
          ml_backend__ml_proc_gen__partition_scc_procs_5_p_0(ModuleInfo_12, Var_37, &NonePredProcIdInfos_24, &SelfPredProcIdInfos_25, &MutualPredProcIdInfos_26);
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_2));
            MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (ModuleInfo_12));
            MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (Target_14));
            MR_hl_field(MR_mktag(0), Var_38, 5) = ((MR_Box) (ConstStructMap_15));
            MR_hl_field(MR_mktag(0), Var_38, 6) = ((MR_Box) ((MR_Integer) 0));
          }
          TypeCtorInfo_84_84 = (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0;
          TypeInfo_85_85 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[0];
          TypeCtorInfo_86_86 = (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0;
          TypeInfo_87_87 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[1];
          mercury__list__foldl3_8_p_0(TypeCtorInfo_84_84, TypeInfo_85_85, TypeCtorInfo_86_86, TypeInfo_87_87, Var_38, NonePredProcIdInfos_24, ((MR_Box) (STATE_VARIABLE_FuncDefns_0_31)), &conv11_STATE_VARIABLE_FuncDefns_39_39, ((MR_Box) (STATE_VARIABLE_GlobalData_0_33)), &conv10_STATE_VARIABLE_GlobalData_40_40, ((MR_Box) (STATE_VARIABLE_Specs_0_35)), &conv9_STATE_VARIABLE_Specs_41_41);
          STATE_VARIABLE_FuncDefns_39_39 = ((MR_Word) conv11_STATE_VARIABLE_FuncDefns_39_39);
          STATE_VARIABLE_GlobalData_40_40 = ((MR_Word) conv10_STATE_VARIABLE_GlobalData_40_40);
          STATE_VARIABLE_Specs_41_41 = ((MR_Word) conv9_STATE_VARIABLE_Specs_41_41);
          {
            Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_3));
            MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (ModuleInfo_12));
            MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (Target_14));
            MR_hl_field(MR_mktag(0), Var_43, 5) = ((MR_Box) (ConstStructMap_15));
            MR_hl_field(MR_mktag(0), Var_43, 6) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__list__foldl3_8_p_0(TypeCtorInfo_84_84, TypeInfo_85_85, TypeCtorInfo_86_86, TypeInfo_87_87, Var_43, SelfPredProcIdInfos_25, ((MR_Box) (STATE_VARIABLE_FuncDefns_39_39)), &conv17_STATE_VARIABLE_FuncDefns_44_44, ((MR_Box) (STATE_VARIABLE_GlobalData_40_40)), &conv16_STATE_VARIABLE_GlobalData_45_45, ((MR_Box) (STATE_VARIABLE_Specs_41_41)), &conv15_STATE_VARIABLE_Specs_46_46);
          STATE_VARIABLE_FuncDefns_44_44 = ((MR_Word) conv17_STATE_VARIABLE_FuncDefns_44_44);
          STATE_VARIABLE_GlobalData_45_45 = ((MR_Word) conv16_STATE_VARIABLE_GlobalData_45_45);
          STATE_VARIABLE_Specs_46_46 = ((MR_Word) conv15_STATE_VARIABLE_Specs_46_46);
          Var_49 = mercury__list__map_2_f_0(TypeCtorInfo_84_84, TypeCtorInfo_66_66, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[2], MutualPredProcIdInfos_26);
          Var_48 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_66_66, Var_49);
          TSCCDepInfo_27 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(ModuleInfo_12, Var_48, (MR_Integer) 0);
          hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(ModuleInfo_12, TSCCDepInfo_27, &TSCCEntries_28);
          ml_backend__ml_proc_gen__partition_tsccs_3_p_0(TSCCEntries_28, &LonePredProcIds_29, &NonTrivialTSCCEntries_30);
          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_5));
            MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (ModuleInfo_12));
            MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (Target_14));
            MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) (ConstStructMap_15));
            MR_hl_field(MR_mktag(0), Var_52, 6) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__list__foldl3_8_p_0(TypeCtorInfo_66_66, TypeInfo_85_85, TypeCtorInfo_86_86, TypeInfo_87_87, Var_52, LonePredProcIds_29, ((MR_Box) (STATE_VARIABLE_FuncDefns_44_44)), &conv24_STATE_VARIABLE_FuncDefns_53_53, ((MR_Box) (STATE_VARIABLE_GlobalData_45_45)), &conv23_STATE_VARIABLE_GlobalData_54_54, ((MR_Box) (STATE_VARIABLE_Specs_46_46)), &conv22_STATE_VARIABLE_Specs_55_55);
          STATE_VARIABLE_FuncDefns_53_53 = ((MR_Word) conv24_STATE_VARIABLE_FuncDefns_53_53);
          STATE_VARIABLE_GlobalData_54_54 = ((MR_Word) conv23_STATE_VARIABLE_GlobalData_54_54);
          STATE_VARIABLE_Specs_55_55 = ((MR_Word) conv22_STATE_VARIABLE_Specs_55_55);
          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_6));
            MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (ModuleInfo_12));
            MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Target_14));
            MR_hl_field(MR_mktag(0), Var_57, 5) = ((MR_Box) (ConstStructMap_15));
            MR_hl_field(MR_mktag(0), Var_57, 6) = ((MR_Box) (SCCEntryProcs_23));
          }
          mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_with_entry_points_0, TypeInfo_85_85, TypeCtorInfo_86_86, TypeInfo_87_87, Var_57, NonTrivialTSCCEntries_30, ((MR_Box) (STATE_VARIABLE_FuncDefns_53_53)), &conv30_STATE_VARIABLE_FuncDefns_32, ((MR_Box) (STATE_VARIABLE_GlobalData_54_54)), &conv29_STATE_VARIABLE_GlobalData_34, ((MR_Box) (STATE_VARIABLE_Specs_55_55)), &conv28_STATE_VARIABLE_Specs_36);
          *STATE_VARIABLE_FuncDefns_32 = ((MR_Word) conv30_STATE_VARIABLE_FuncDefns_32);
          *STATE_VARIABLE_GlobalData_34 = ((MR_Word) conv29_STATE_VARIABLE_GlobalData_34);
          *STATE_VARIABLE_Specs_36 = ((MR_Word) conv28_STATE_VARIABLE_Specs_36);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__partition_tsccs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word TSCC_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word TSCCs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word TSCCPredProcIdsSet_8;
    MR_Word TSCCPredProcIds_11;
    MR_Word STATE_VARIABLE_LonePredProcIds_18_18;
    MR_Word STATE_VARIABLE_NonTrivialTSCCS_19_19;
    MR_Word Var_9;
    MR_Word Var_10;

    ml_backend__ml_proc_gen__partition_tsccs_3_p_0(TSCCs_5, &STATE_VARIABLE_LonePredProcIds_18_18, &STATE_VARIABLE_NonTrivialTSCCS_19_19);
    TSCCPredProcIdsSet_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSCC_4, (MR_Integer) 0)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSCC_4, (MR_Integer) 1)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSCC_4, (MR_Integer) 2)));
    mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, TSCCPredProcIdsSet_8, &TSCCPredProcIds_11);
    if ((TSCCPredProcIds_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_proc_gen.partition_tsccs\'/3", (MR_String) "empty TSCC");
        return;
      }
    }
    else
    {
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), TSCCPredProcIds_11, (MR_Integer) 1)));
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), TSCCPredProcIds_11, (MR_Integer) 0)));

      if ((Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_LonePredProcIds_18_18));
        }
        *HeadVar__3_3 = STATE_VARIABLE_NonTrivialTSCCS_19_19;
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TSCC_4));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_NonTrivialTSCCS_19_19));
        }
        *HeadVar__2_2 = STATE_VARIABLE_LonePredProcIds_18_18;
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__partition_scc_procs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word PredProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word PredProcIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word PredInfo_13;
    MR_Word ProcInfo_14;
    MR_Word IdInfo_15;
    MR_Word CodeModel_16;
    MR_Word STATE_VARIABLE_NoneIdInfos_23_23;
    MR_Word STATE_VARIABLE_SelfIdInfos_24_24;
    MR_Word STATE_VARIABLE_MutualIdInfos_25_25;

    ml_backend__ml_proc_gen__partition_scc_procs_5_p_0(HeadVar__1_1, PredProcIds_9, &STATE_VARIABLE_NoneIdInfos_23_23, &STATE_VARIABLE_SelfIdInfos_24_24, &STATE_VARIABLE_MutualIdInfos_25_25);
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(HeadVar__1_1, PredProcId_8, &PredInfo_13, &ProcInfo_14);
    {
      IdInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IdInfo_15, 0) = ((MR_Box) (PredProcId_8));
      MR_hl_field(MR_mktag(0), IdInfo_15, 1) = ((MR_Box) (PredInfo_13));
      MR_hl_field(MR_mktag(0), IdInfo_15, 2) = ((MR_Box) (ProcInfo_14));
    }
    CodeModel_16 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_14);
    switch (CodeModel_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word HasTailRecCall_17;
          MR_Word HasSelfTailRecCall_18;
          MR_Word HasMutualTailRecCall_19;

          hlds__hlds_pred__proc_info_get_has_tail_rec_call_2_p_0(ProcInfo_14, &HasTailRecCall_17);
          HasSelfTailRecCall_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HasTailRecCall_17, (MR_Integer) 0)));
          HasMutualTailRecCall_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HasTailRecCall_17, (MR_Integer) 1)));
          switch (HasMutualTailRecCall_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IdInfo_15));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MutualIdInfos_25_25));
                }
                *HeadVar__3_3 = STATE_VARIABLE_NoneIdInfos_23_23;
                *HeadVar__4_4 = STATE_VARIABLE_SelfIdInfos_24_24;
              }
              break;
            case (MR_Integer) 1:
              {
                switch (HasSelfTailRecCall_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__3_3 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IdInfo_15));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_NoneIdInfos_23_23));
                      }
                      *HeadVar__4_4 = STATE_VARIABLE_SelfIdInfos_24_24;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__4_4 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IdInfo_15));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_SelfIdInfos_24_24));
                      }
                      *HeadVar__3_3 = STATE_VARIABLE_NoneIdInfos_23_23;
                    }
                    break;
                }
                *HeadVar__5_5 = STATE_VARIABLE_MutualIdInfos_25_25;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IdInfo_15));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_NoneIdInfos_23_23));
          }
          *HeadVar__4_4 = STATE_VARIABLE_SelfIdInfos_24_24;
          *HeadVar__5_5 = STATE_VARIABLE_MutualIdInfos_25_25;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_33;

    conv2_LambdaHeadVar__2_33 = ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_procs_for_code_gen__150__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_33));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ProcTable_9;

    ml_backend__ml_proc_gen__requantify_codegen_proc_3_p_0(((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ProcTable_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ProcTable_9));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_CodeGenPredProcIds_0_3,
  MR_Word * STATE_VARIABLE_CodeGenPredProcIds_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_CodeGenPredProcIds_4 = STATE_VARIABLE_CodeGenPredProcIds_0_3;
    }
    else
    {
      MR_Word PredIdInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word PredIdInfos0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word PredIdInfo_10;
      MR_Word PredIdInfos_11;
      MR_Word PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredIdInfo0_8, (MR_Integer) 0)));
      MR_Word PredInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredIdInfo0_8, (MR_Integer) 1)));
      MR_Word PredStatus_15;
      MR_Word STATE_VARIABLE_CodeGenPredProcIds_34_34;

      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_14, &PredStatus_15);
      {
        MR_Word Var_28 = (MR_Word) PredStatus_15;
        MR_Word Var_16;

        succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
          Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_28, (MR_Integer) 0)));
      }
      if (!(succeeded))
      {
        MR_Word Var_26;
        MR_Word Var_27;

        succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo0_14);
        if (succeeded)
        {
          Var_26 = (MR_Word) PredStatus_15;
          succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
            succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          }
        }
      }
      if (succeeded)
      {
        PredIdInfo_10 = PredIdInfo0_8;
        STATE_VARIABLE_CodeGenPredProcIds_34_34 = STATE_VARIABLE_CodeGenPredProcIds_0_3;
      }
      else
      {
        MR_Word TypeCtorInfo_40_40;
        MR_Word TypeCtorInfo_42_42;
        MR_Word ProcIds_18;
        MR_Word ProcTable0_19;
        MR_Word ProcTable_20;
        MR_Word PredInfo_21;
        MR_Word PredProcIds_22;
        MR_Word Var_31;
        MR_Word Var_29 = (MR_Word) PredStatus_15;
        MR_Word Var_17;
        MR_Box conv1_ProcTable_20;

        succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0)));
          ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo0_14);
        }
        else
          ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo0_14);
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_14, &ProcTable0_19);
        TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        mercury__list__foldl_4_p_0(TypeCtorInfo_40_40, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[0], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[1], ProcIds_18, ((MR_Box) (ProcTable0_19)), &conv1_ProcTable_20);
        ProcTable_20 = ((MR_Word) conv1_ProcTable_20);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_20, PredInfo0_14, &PredInfo_21);
        {
          PredIdInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredIdInfo_10, 0) = ((MR_Box) (PredId_13));
          MR_hl_field(MR_mktag(0), PredIdInfo_10, 1) = ((MR_Box) (PredInfo_21));
        }
        TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0_2));
          MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (PredId_13));
        }
        PredProcIds_22 = mercury__list__map_2_f_0(TypeCtorInfo_40_40, TypeCtorInfo_42_42, Var_31, ProcIds_18);
        STATE_VARIABLE_CodeGenPredProcIds_34_34 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_42_42, PredProcIds_22, STATE_VARIABLE_CodeGenPredProcIds_0_3);
      }
      ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0(PredIdInfos0_9, &PredIdInfos_11, STATE_VARIABLE_CodeGenPredProcIds_34_34, STATE_VARIABLE_CodeGenPredProcIds_4);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredIdInfo_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PredIdInfos_11));
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____none_or_self_tail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_proc_gen____Unify____none_or_self_tail_rec_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____none_or_self_tail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_proc_gen____Compare____none_or_self_tail_rec_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_proc_gen__init(void)
{
}

void mercury__ml_backend__ml_proc_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_tail_call_opt_in_code_gen_0);
	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_none_or_self_tail_rec_0);
	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0);
}

void mercury__ml_backend__ml_proc_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_proc_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ml_backend.ml_proc_gen. */
