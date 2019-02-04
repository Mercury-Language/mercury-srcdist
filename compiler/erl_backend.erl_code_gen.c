/*
** Automatically generated from `erl_code_gen.m'
** by the Mercury compiler,
** version rotd-2017-12-28
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


// :- module erl_backend.erl_code_gen.
// :- implementation.

/*
INIT mercury__erl_backend__erl_code_gen__init
ENDINIT
*/

#include "erl_backend.erl_code_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "erl_backend.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "erl_backend.elds.mih"
#include "erl_backend.erl_call_gen.mih"
#include "erl_backend.erl_code_util.mih"
#include "erl_backend.erl_unify_gen.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.passes_aux.mih"
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



struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s {
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13;
  MR_bool erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85;
  jmp_buf erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_0;
  MR_String erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__String_32;
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33;
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__OtherConsIds_34;
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Var_57;
  MR_Box erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv1_Var_57;
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Var_58;
  MR_Box erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv2_Var_58;
};


static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__maybe__pti_maybe_1__plain_erl_backend__elds__type_ctor_info_elds_expr_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case_on_atom__936__1_2_p_0(
  MR_Word OtherConsIds_17,
  MR_Word HeadVar__2_30);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case__877__1_2_p_0(
  MR_Word OtherConsIds_19,
  MR_Word HeadVar__2_35);

static MR_Word MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__func__erl_gen_switch__790__1_1_f_0(
  MR_Word LambdaHeadVar__1_49);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_goal_expr__698__1_2_p_0(
  MR_Word CodeModel_11,
  MR_Word CallCodeModel_59);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_foreign_export_defn_3_p_0(
  MR_Word ProcDefns_4,
  MR_Word PragmaExport_5,
  MR_Word * ForeignExportDefn_6);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__search_elds_defn_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcId_6,
  MR_Word * Defn_7);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__non_dummy_var_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Var_6,
  MR_Word Type_7,
  MR_Word * Var_4);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0(
  MR_Word CodeModel_9,
  MR_Word InstMap_10,
  MR_Word MustBindNonLocals_11,
  MR_Word MaybeSuccessExpr_12,
  MR_Word Case_13,
  MR_Word * ELDSCase_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_9_p_0(
  MR_Word Type_10,
  MR_Word CodeModel_11,
  MR_Word InstMap_12,
  MR_Word MustBindNonLocals_13,
  MR_Word MaybeSuccessExpr_14,
  MR_Word Case_15,
  MR_Word * ELDSCase_16,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
erl_backend__erl_code_gen__erl_code_gen_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_preds_2_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredIds0_9,
  MR_Word PredTable_10,
  MR_Word STATE_VARIABLE_Defns_0_20,
  MR_Word * STATE_VARIABLE_Defns_21);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_procs_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word PredId_3,
  MR_Word PredInfo_4,
  MR_Word ProcTable_5,
  MR_Word STATE_VARIABLE_Defns_0_6,
  MR_Word * STATE_VARIABLE_Defns_7);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_proc_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word PredInfo_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_Defns_0_18,
  MR_Word * STATE_VARIABLE_Defns_19);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_7_p_0(
  MR_Word tscc_proc_1_input_1_CodeModel_8,
  MR_Word tscc_proc_1_input_2_InstMap_9,
  MR_Word tscc_proc_1_input_3_Goal_10,
  MR_Word tscc_proc_1_input_4_MaybeSuccessExpr0_11,
  MR_Word * tscc_output_ptr_1_Code_12,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Info_21);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0(
  MR_Word tscc_proc_2_input_1_GoalExpr_10,
  MR_Word tscc_proc_2_input_2_CodeModel_11,
  MR_Word tscc_proc_2_input_3_Detism_12,
  MR_Word tscc_proc_2_input_4_InstMap_13,
  MR_Word tscc_proc_2_input_5_Context_14,
  MR_Word tscc_proc_2_input_6_MaybeSuccessExpr_15,
  MR_Word * tscc_output_ptr_1_Code_12,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Info_21);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_95_91_53_93_95_48_9_p_0(
  MR_Word tscc_proc_3_input_1_Goal_10,
  MR_Word tscc_proc_3_input_2_CodeModel_11,
  MR_Word tscc_proc_3_input_3_ScopeDetism_12,
  MR_Word tscc_proc_3_input_4_InstMap_13,
  MR_Word tscc_proc_3_input_5_MaybeSuccessExpr_15,
  MR_Word * tscc_output_ptr_1_Code_12,
  MR_Word tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Info_21);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0(
  MR_Word tscc_proc_4_input_1_HeadVar__1_1,
  MR_Word tscc_proc_4_input_2_CodeModel_2,
  MR_Word tscc_proc_4_input_3_HeadVar__3_3,
  MR_Word tscc_proc_4_input_4_HeadVar__5_5,
  MR_Word * tscc_output_ptr_1_Code_12,
  MR_Word tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Info_21);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeModel_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__5_5,
  MR_Word * Statement_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeModel_2,
  MR_Word HeadVar__3_3,
  MR_Word MaybeSuccessExpr_5,
  MR_Word * Statement_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_95_91_53_93_95_48_9_p_0(
  MR_Word Goals_10,
  MR_Word CodeModel_11,
  MR_Word Detism_12,
  MR_Word InstMap_13,
  MR_Word MaybeSuccessExpr_15,
  MR_Word * Statement_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_110_101_103_97_116_105_111_110_95_95_91_52_93_95_48_8_p_0(
  MR_Word Cond_9,
  MR_Word CodeModel_10,
  MR_Word InstMap_11,
  MR_Word MaybeSuccessExpr_13,
  MR_Word * Statement_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_116_101_95_95_91_54_93_95_48_10_p_0(
  MR_Word CodeModel_11,
  MR_Word InstMap0_12,
  MR_Word Cond_13,
  MR_Word Then_14,
  MR_Word Else_15,
  MR_Word MaybeSuccessExpr0_17,
  MR_Word * Statement_18,
  MR_Word STATE_VARIABLE_Info_0_57,
  MR_Word * STATE_VARIABLE_Info_58);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(
  MR_Word Goal_9,
  MR_Word InstMap_10,
  MR_Word DoRenaming_12,
  MR_Word * GoalStatement_13,
  MR_Word * PackedNonLocals_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
erl_backend__erl_code_gen__ground_var_in_instmap_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_InstMap_0_6,
  MR_Word * STATE_VARIABLE_InstMap_7);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0(
  MR_Word Var_11,
  MR_Word CanFail_12,
  MR_Word CasesList_13,
  MR_Word CodeModel_14,
  MR_Word InstMap0_15,
  MR_Word MaybeSuccessExpr0_17,
  MR_Word * Statement_18,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(
  MR_Word NonLocals_9,
  MR_Word MaybeSuccessExpr0_10,
  MR_Word * MaybeMakeClosure_11,
  MR_Word * MaybeSuccessExpr_12,
  MR_Word InstMap0_13,
  MR_Word * InstMap_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0(
  MR_Word Info_5,
  MR_Word InstMap_6,
  MR_Word Goals_7,
  MR_Word * NonLocalsUnion_8);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_maybe_gen_simple_special_pred_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word PredInfo_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_Defns_0_27,
  MR_Word * STATE_VARIABLE_Defns_28);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_simple_compare_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * ProcDefn_12);


static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_1[4][2];

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_2[2][7];

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_3[2][3];

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_4[3][5];

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_5[1][11];

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_6[1][12];

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_7[1][6];




static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_2[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&erl_backend__erl_code_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__erl_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&erl_backend__erl_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[0])),
    ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__erl_code_gen__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&erl_backend__erl_code_gen__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_5[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&erl_backend__erl_code_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_gen__maybe__pti_maybe_1__plain_erl_backend__elds__type_ctor_info_elds_expr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0)),
    ((MR_Box) (&erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0)),
    ((MR_Box) (&erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_6[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&erl_backend__erl_code_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_gen__maybe__pti_maybe_1__plain_erl_backend__elds__type_ctor_info_elds_expr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0)),
    ((MR_Box) (&erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0)),
    ((MR_Box) (&erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_7[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__erl_code_gen__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_code_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__maybe__pti_maybe_1__plain_erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case_on_atom__936__1_2_p_0(
  MR_Word OtherConsIds_17,
  MR_Word HeadVar__2_30)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__erl_code_gen_scalar_common_1[1], ((MR_Box) (OtherConsIds_17)), ((MR_Box) (HeadVar__2_30)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case__877__1_2_p_0(
  MR_Word OtherConsIds_19,
  MR_Word HeadVar__2_35)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__erl_code_gen_scalar_common_1[1], ((MR_Box) (OtherConsIds_19)), ((MR_Box) (HeadVar__2_35)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__func__erl_gen_switch__790__1_1_f_0(
  MR_Word LambdaHeadVar__1_49)
{
  {
    MR_Word LambdaHeadVar__2_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_49, (MR_Integer) 2)));
    MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_49, (MR_Integer) 0)));
    MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_49, (MR_Integer) 1)));

    return LambdaHeadVar__2_50;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_goal_expr__698__1_2_p_0(
  MR_Word CodeModel_11,
  MR_Word CallCodeModel_59)
{
  {
    MR_bool succeeded = (CodeModel_11 == CallCodeModel_59);

    return succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_foreign_export_defn_3_p_0(
  MR_Word ProcDefns_4,
  MR_Word PragmaExport_5,
  MR_Word * ForeignExportDefn_6)
{
  {
    MR_bool succeeded;
    MR_Word PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaExport_5, (MR_Integer) 1)));
    MR_Integer ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PragmaExport_5, (MR_Integer) 2)));
    MR_String Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), PragmaExport_5, (MR_Integer) 3)));
    MR_Word PredProcId_12;
    MR_Word _Lang_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaExport_5, (MR_Integer) 0)));
    MR_Word _Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaExport_5, (MR_Integer) 4)));
    MR_Word TargetProc_13;

    {
      PredProcId_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_12, 0) = ((MR_Box) (PredId_8));
      MR_hl_field(MR_mktag(0), PredProcId_12, 1) = ((MR_Box) (ProcId_9));
    }
    succeeded = erl_backend__erl_code_gen__search_elds_defn_3_p_0(ProcDefns_4, PredProcId_12, &TargetProc_13);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_30_30;
      MR_Word TargetBody_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetProc_13, (MR_Integer) 2)));
      MR_Integer Arity_18;
      MR_Word Vars_19;
      MR_Word VarSet_20;
      MR_Word Clause_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word _TargetPPId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetProc_13, (MR_Integer) 0)));
      MR_Word _TargetVarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetProc_13, (MR_Integer) 1)));
      MR_Word _EnvVarNames_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetProc_13, (MR_Integer) 3)));

      Arity_18 = erl_backend__elds__elds_body_arity_1_f_0(TargetBody_16);
      TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
      Var_22 = mercury__varset__init_0_f_0(TypeCtorInfo_30_30);
      mercury__varset__new_vars_4_p_0(TypeCtorInfo_30_30, Arity_18, &Vars_19, Var_22, &VarSet_20);
      Var_23 = erl_backend__elds__terms_from_vars_1_f_0(Vars_19);
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (PredProcId_12));
      }
      Var_26 = erl_backend__elds__exprs_from_vars_1_f_0(Vars_19);
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(3), Var_24, 2) = ((MR_Box) (Var_26));
      }
      {
        Clause_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Clause_21, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), Clause_21, 1) = ((MR_Box) (Var_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        *ForeignExportDefn_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_10));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_20));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Clause_21));
      }
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_foreign_export_defn\'/3", (MR_String) "missing definition of foreign exported procedure");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__search_elds_defn_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcId_6,
  MR_Word * Defn_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Defn0_4;
    MR_Word Defns_5;
    MR_Word Var_11;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      Defn0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      Defns_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Defn0_4, (MR_Integer) 0)));
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Defn0_4, (MR_Integer) 1)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Defn0_4, (MR_Integer) 2)));
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Defn0_4, (MR_Integer) 3)));
      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PredProcId_6, Var_11);
      if (succeeded)
      {
        *Defn_7 = Defn0_4;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Defns_5;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__non_dummy_var_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Var_6,
  MR_Word Type_7,
  MR_Word * Var_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_8;

    *Var_4 = Var_6;
    Var_8 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_5, Type_7);
    succeeded = (Var_8 == (MR_Integer) 1);
    return succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case_on_atom__936__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0(
  MR_Word CodeModel_9,
  MR_Word InstMap_10,
  MR_Word MustBindNonLocals_11,
  MR_Word MaybeSuccessExpr_12,
  MR_Word Case_13,
  MR_Word * ELDSCase_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_bool succeeded;
    MR_Word MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_13, (MR_Integer) 0)));
    MR_Word OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_13, (MR_Integer) 1)));
    MR_Word Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_13, (MR_Integer) 2)));
    MR_String String_20;
    MR_Word MaybeSuccessExprForCase_21;
    MR_Word Statement0_22;
    MR_Word Statement_23;
    MR_Word Var_26;
    MR_Word STATE_VARIABLE_Info_34_34;
    MR_Word Var_36;
    MR_String String0_19;

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_4_p_0(Var_26, (MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_case_on_atom\'/8", (MR_String) "multi-cons-id switch arms NYI");
    succeeded = ((((MR_tag((MR_Word) MainConsId_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MainConsId_16, (MR_Integer) 0)))) == (MR_Integer) 15)));
    if (succeeded)
    {
      String0_19 = ((MR_String) (MR_hl_field(MR_mktag(3), MainConsId_16, (MR_Integer) 1)));
      String_20 = String0_19;
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_case_on_atom\'/8", (MR_String) "non-string const");
        return;
      }
    }
    erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(InstMap_10, Goal_18, MaybeSuccessExpr_12, &MaybeSuccessExprForCase_21, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_34_34);
    erl_backend__erl_code_gen__erl_gen_goal_7_p_0(CodeModel_9, InstMap_10, Goal_18, MaybeSuccessExprForCase_21, &Statement0_22, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_25);
    erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(*STATE_VARIABLE_Info_25, MustBindNonLocals_11, Goal_18, InstMap_10, Statement0_22, &Statement_23);
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (String_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ELDSCase_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Statement_23));
    }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case__877__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_9_p_0(
  MR_Word Type_10,
  MR_Word CodeModel_11,
  MR_Word InstMap_12,
  MR_Word MustBindNonLocals_13,
  MR_Word MaybeSuccessExpr_14,
  MR_Word Case_15,
  MR_Word * ELDSCase_16,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  {
    MR_bool succeeded;
    MR_Word MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_15, (MR_Integer) 0)));
    MR_Word OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_15, (MR_Integer) 1)));
    MR_Word Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_15, (MR_Integer) 2)));
    MR_Word ModuleInfo_21;
    MR_Integer Size_22;
    MR_Word DummyVars_23;
    MR_Word Pattern_25;
    MR_Word MaybeSuccessExprForCase_26;
    MR_Word Statement0_27;
    MR_Word Statement_28;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_Info_36_36;
    MR_Word STATE_VARIABLE_Info_42_42;
    MR_Word STATE_VARIABLE_Info_43_43;
    MR_Word ConsDefn_51;
    MR_Word TypeCtor_50;
    MR_Word Pattern0_24;
    MR_Word STATE_VARIABLE_Info_38_38;

    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_gen_case_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (OtherConsIds_19));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_4_p_0(Var_31, (MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_case\'/9", (MR_String) "multi-cons-id switch arms NYI");
    erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_29, &ModuleInfo_21);
    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_10, &TypeCtor_50);
    if (succeeded)
      succeeded = check_hlds__type_util__get_cons_defn_4_p_0(ModuleInfo_21, TypeCtor_50, MainConsId_18, &ConsDefn_51);
    if (succeeded)
    {
      MR_Word TypeInfo_41_82;
      MR_Word Constraints_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 5)));
      MR_Word ConstrainedTVars_53;
      MR_Word ExistTVars_54;
      MR_Word UnconstrainedTVars_55;
      MR_Integer Var_56;
      MR_Integer Var_57;
      MR_Integer Var_58;
      MR_Integer Var_59;
      MR_Word Var_60;
      MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 0)));
      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 1)));
      MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 2)));
      MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 3)));
      MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 4)));
      MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 6)));
      MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 7)));
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;

      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(Constraints_52, &ConstrainedTVars_53);
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 0)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 1)));
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 2)));
      Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 3)));
      ExistTVars_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 4)));
      Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 5)));
      Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 6)));
      Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 7)));
      TypeInfo_41_82 = (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[2];
      UnconstrainedTVars_55 = mercury__list__delete_elems_2_f_0(TypeInfo_41_82, ExistTVars_54, ConstrainedTVars_53);
      Var_57 = mercury__list__length_1_f_0(TypeInfo_41_82, UnconstrainedTVars_55);
      Var_58 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, Constraints_52);
      Var_56 = (Var_57 + Var_58);
      Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 0)));
      Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 1)));
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 2)));
      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 3)));
      Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 4)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 5)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 6)));
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_51, (MR_Integer) 7)));
      Var_59 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, Var_60);
      Size_22 = (Var_56 + Var_59);
    }
    else
      Size_22 = (MR_Integer) 0;
    erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0(Size_22, &DummyVars_23, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_36_36);
    succeeded = erl_backend__erl_unify_gen__cons_id_to_term_6_p_0(MainConsId_18, DummyVars_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Pattern0_24, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_38_38);
    if (succeeded)
    {
      STATE_VARIABLE_Info_42_42 = STATE_VARIABLE_Info_38_38;
      Pattern_25 = Pattern0_24;
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_case\'/9", (MR_String) "cannot pattern match on object");
        return;
      }
    }
    erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(InstMap_12, Goal_20, MaybeSuccessExpr_14, &MaybeSuccessExprForCase_26, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_43_43);
    erl_backend__erl_code_gen__erl_gen_goal_7_p_0(CodeModel_11, InstMap_12, Goal_20, MaybeSuccessExprForCase_26, &Statement0_27, STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Info_30);
    erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(*STATE_VARIABLE_Info_30, MustBindNonLocals_13, Goal_20, InstMap_12, Statement0_27, &Statement_28);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ELDSCase_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Pattern_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Statement_28));
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_code_gen_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ForeignExportDefn_6;

    erl_backend__erl_code_gen__erl_gen_foreign_export_defn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_ForeignExportDefn_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_ForeignExportDefn_6));
  }
}

void MR_CALL 
erl_backend__erl_code_gen__erl_code_gen_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * ELDS_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8;
    MR_Word ProcDefns_9;
    MR_Word Imports_10;
    MR_Word ForeignDecls_11;
    MR_Word ForeignBodies_12;
    MR_Word PragmaExports_13;
    MR_Word ForeignExportDefns_14;
    MR_Word InitPredProcs_16;
    MR_Word FinalPredProcs_17;
    MR_Word PredTable_27;
    MR_Word PredIds_28;
    MR_Word RevPredDefns_29;
    MR_Word AllImports0_37;
    MR_Word ThisModule_38;
    MR_Word Globals_47;
    MR_Word BackendForeignLanguages_48;
    MR_Word ForeignDeclCodeCord_49;
    MR_Word ForeignBodyCodeCord_50;
    MR_Word PragmaExportsCord_51;
    MR_Word Var_61;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Var_72;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word _OtherForeignDeclCodes_52;
    MR_Word _OtherForeignBodyCodes_53;
    MR_Word _OtherForeignExports_54;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_8);
    hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_5, &PredTable_27);
    mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, PredTable_27, &PredIds_28);
    erl_backend__erl_code_gen__erl_gen_preds_2_7_p_0(ModuleInfo_5, PredIds_28, PredTable_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevPredDefns_29);
    ProcDefns_9 = mercury__list__reverse_1_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0, RevPredDefns_29);
    hlds__hlds_module__module_info_get_all_deps_2_p_0(ModuleInfo_5, &AllImports0_37);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ThisModule_38);
    Imports_10 = mercury__set__delete_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, AllImports0_37, ((MR_Box) (ThisModule_38)));
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_47);
    libs__globals__get_backend_foreign_languages_2_p_0(Globals_47, &BackendForeignLanguages_48);
    succeeded = ((MR_tag((MR_Word) BackendForeignLanguages_48)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), BackendForeignLanguages_48, (MR_Integer) 0)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), BackendForeignLanguages_48, (MR_Integer) 1)));
      succeeded = (Var_55 == (MR_Integer) 3);
      if (succeeded)
        succeeded = (Var_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (!(succeeded))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.filter_erlang_foreigns\'/6", (MR_String) "foreign language other than Erlang");
        return;
      }
    }
    hlds__hlds_module__module_info_get_foreign_decl_codes_2_p_0(ModuleInfo_5, &ForeignDeclCodeCord_49);
    hlds__hlds_module__module_info_get_foreign_body_codes_2_p_0(ModuleInfo_5, &ForeignBodyCodeCord_50);
    hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(ModuleInfo_5, &PragmaExportsCord_51);
    Var_61 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, ForeignDeclCodeCord_49);
    backend_libs__foreign__filter_decls_4_p_0((MR_Integer) 3, Var_61, &ForeignDecls_11, &_OtherForeignDeclCodes_52);
    Var_63 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, ForeignBodyCodeCord_50);
    backend_libs__foreign__filter_bodys_4_p_0((MR_Integer) 3, Var_63, &ForeignBodies_12, &_OtherForeignBodyCodes_53);
    Var_65 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, PragmaExportsCord_51);
    backend_libs__foreign__filter_exports_4_p_0((MR_Integer) 3, Var_65, &PragmaExports_13, &_OtherForeignExports_54);
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_code_gen_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (ProcDefns_9));
    }
    mercury__list__map_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0, Var_72, PragmaExports_13, &ForeignExportDefns_14);
    hlds__hlds_module__module_info_user_init_pred_procs_2_p_0(ModuleInfo_5, &InitPredProcs_16);
    hlds__hlds_module__module_info_user_final_pred_procs_2_p_0(ModuleInfo_5, &FinalPredProcs_17);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *ELDS_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Imports_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ForeignDecls_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ForeignBodies_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ProcDefns_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ForeignExportDefns_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (InitPredProcs_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (FinalPredProcs_17));
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_preds_2_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredIds0_9,
  MR_Word PredTable_10,
  MR_Word STATE_VARIABLE_Defns_0_20,
  MR_Word * STATE_VARIABLE_Defns_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((PredIds0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Defns_21 = STATE_VARIABLE_Defns_0_20;
    else
    {
      MR_Word PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredIds0_9, (MR_Integer) 0)));
      MR_Word PredIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredIds0_9, (MR_Integer) 1)));
      MR_Word PredInfo_15;
      MR_Word PredStatus_16;
      MR_Word STATE_VARIABLE_Defns_28_28;
      MR_Box conv0_PredInfo_15;
      MR_Word next_value_of_PredIds0_9;
      MR_Word next_value_of_STATE_VARIABLE_Defns_0_20;

      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, PredTable_10, ((MR_Box) (PredId_13)), &conv0_PredInfo_15);
      PredInfo_15 = ((MR_Word) conv0_PredInfo_15);
      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_15, &PredStatus_16);
      {
        MR_Word Var_26 = (MR_Word) PredStatus_16;
        MR_Word Var_17;

        succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
          Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_26, (MR_Integer) 0)));
      }
      if (!(succeeded))
      {
        MR_Word Var_24;
        MR_Word Var_25;

        succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo_15);
        if (succeeded)
        {
          Var_24 = (MR_Word) PredStatus_16;
          succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0)));
            succeeded = (Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          }
        }
      }
      if (succeeded)
        STATE_VARIABLE_Defns_28_28 = STATE_VARIABLE_Defns_0_20;
      else
      {
        MR_Word ProcIds_19;
        MR_Word Var_27 = (MR_Word) PredStatus_16;
        MR_Word Var_18;

        succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0)));
          ProcIds_19 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_15);
        }
        else
          ProcIds_19 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_15);
        if ((ProcIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          STATE_VARIABLE_Defns_28_28 = STATE_VARIABLE_Defns_0_20;
        else
        {
          MR_Word ProcTable_46;
          MR_Integer ProcId_57;
          MR_Word ProcIds_58;
          MR_Word ProcInfo_64;
          MR_Word STATE_VARIABLE_Defns_26_68;
          MR_Box conv1_ProcInfo_64;
          MR_Word STATE_VARIABLE_Defns_25_67;

          hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Generating ELDS code for ", PredId_13, ModuleInfo_8);
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_15, &ProcTable_46);
          ProcId_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ProcIds_19, (MR_Integer) 0)));
          ProcIds_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ProcIds_19, (MR_Integer) 1)));
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ProcTable_46, ((MR_Box) (ProcId_57)), &conv1_ProcInfo_64);
          ProcInfo_64 = ((MR_Word) conv1_ProcInfo_64);
          succeeded = erl_backend__erl_code_gen__erl_maybe_gen_simple_special_pred_7_p_0(ModuleInfo_8, PredId_13, ProcId_57, PredInfo_15, ProcInfo_64, STATE_VARIABLE_Defns_0_20, &STATE_VARIABLE_Defns_25_67);
          if (succeeded)
            STATE_VARIABLE_Defns_26_68 = STATE_VARIABLE_Defns_25_67;
          else
            erl_backend__erl_code_gen__erl_gen_proc_7_p_0(ModuleInfo_8, PredId_13, ProcId_57, PredInfo_15, ProcInfo_64, STATE_VARIABLE_Defns_0_20, &STATE_VARIABLE_Defns_26_68);
          erl_backend__erl_code_gen__erl_gen_procs_7_p_0(ProcIds_58, ModuleInfo_8, PredId_13, PredInfo_15, ProcTable_46, STATE_VARIABLE_Defns_26_68, &STATE_VARIABLE_Defns_28_28);
        }
      }
      // direct tailcall eliminated
      next_value_of_PredIds0_9 = PredIds_14;
      next_value_of_STATE_VARIABLE_Defns_0_20 = STATE_VARIABLE_Defns_28_28;
      PredIds0_9 = next_value_of_PredIds0_9;
      STATE_VARIABLE_Defns_0_20 = next_value_of_STATE_VARIABLE_Defns_0_20;
      continue;
    }
    break;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_procs_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word PredId_3,
  MR_Word PredInfo_4,
  MR_Word ProcTable_5,
  MR_Word STATE_VARIABLE_Defns_0_6,
  MR_Word * STATE_VARIABLE_Defns_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Defns_7 = STATE_VARIABLE_Defns_0_6;
    else
    {
      MR_Integer ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ProcIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ProcInfo_22;
      MR_Word STATE_VARIABLE_Defns_26_26;
      MR_Box conv0_ProcInfo_22;
      MR_Word STATE_VARIABLE_Defns_25_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Defns_0_6;

      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ProcTable_5, ((MR_Box) (ProcId_15)), &conv0_ProcInfo_22);
      ProcInfo_22 = ((MR_Word) conv0_ProcInfo_22);
      succeeded = erl_backend__erl_code_gen__erl_maybe_gen_simple_special_pred_7_p_0(ModuleInfo_2, PredId_3, ProcId_15, PredInfo_4, ProcInfo_22, STATE_VARIABLE_Defns_0_6, &STATE_VARIABLE_Defns_25_25);
      if (succeeded)
        STATE_VARIABLE_Defns_26_26 = STATE_VARIABLE_Defns_25_25;
      else
        erl_backend__erl_code_gen__erl_gen_proc_7_p_0(ModuleInfo_2, PredId_3, ProcId_15, PredInfo_4, ProcInfo_22, STATE_VARIABLE_Defns_0_6, &STATE_VARIABLE_Defns_26_26);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = ProcIds_16;
      next_value_of_STATE_VARIABLE_Defns_0_6 = STATE_VARIABLE_Defns_26_26;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Defns_0_6 = next_value_of_STATE_VARIABLE_Defns_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_proc_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word PredInfo_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_Defns_0_18,
  MR_Word * STATE_VARIABLE_Defns_19)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_44_57;
    MR_Word ProcVarSet_14;
    MR_Word ProcBody_15;
    MR_Word EnvVarNames_16;
    MR_Word ProcDefn_17;
    MR_Word Var_20;
    MR_Word PredStatus_30;
    MR_Word CodeModel_31;
    MR_Word HeadVars_32;
    MR_Word InstMap0_33;
    MR_Word Goal0_34;
    MR_Word GoalExpr_35;
    MR_Word GoalInfo0_36;
    MR_Word NonLocals0_37;
    MR_Word HeadVarsSet_38;
    MR_Word NonLocals_39;
    MR_Word GoalInfo_40;
    MR_Word Goal_41;
    MR_Word STATE_VARIABLE_Info_38_51;
    MR_Word STATE_VARIABLE_Info_43_56;
    MR_Word _Context_42;
    MR_Word Var_52;
    MR_Word Var_44;

    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_11, &PredStatus_30);
    CodeModel_31 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_12);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_12, &HeadVars_32);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ProcInfo_12, ModuleInfo_8, &InstMap0_33);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_12, &Goal0_34);
    GoalExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_34, (MR_Integer) 0)));
    GoalInfo0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_34, (MR_Integer) 1)));
    NonLocals0_37 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(GoalInfo0_36);
    TypeCtorInfo_44_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__set_of_var__list_to_set_2_p_0(TypeCtorInfo_44_57, HeadVars_32, &HeadVarsSet_38);
    parse_tree__set_of_var__intersect_3_p_0(TypeCtorInfo_44_57, HeadVarsSet_38, NonLocals0_37, &NonLocals_39);
    hlds__hlds_goal__goal_info_set_code_gen_nonlocals_3_p_0(NonLocals_39, GoalInfo0_36, &GoalInfo_40);
    {
      Goal_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_41, 0) = ((MR_Box) (GoalExpr_35));
      MR_hl_field(MR_mktag(0), Goal_41, 1) = ((MR_Box) (GoalInfo_40));
    }
    _Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_40);
    STATE_VARIABLE_Info_38_51 = erl_backend__erl_code_util__erl_gen_info_init_3_f_0(ModuleInfo_8, PredId_9, ProcId_10);
    Var_52 = (MR_Word) PredStatus_30;
    succeeded = ((MR_tag((MR_Word) Var_52)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 0)));
      {
        MR_Word TypeInfo_45_58;
        MR_Word ArgTypes_45;
        MR_Word ArgModes_46;
        MR_Word InputArgs_47;
        MR_Integer Arity_49;
        MR_Word _OutputArgs_48;

        hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_11, &ArgTypes_45);
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_12, &ArgModes_46);
        TypeInfo_45_58 = (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0];
        erl_backend__erl_code_util__erl_gen_arg_list_7_p_0(TypeInfo_45_58, ModuleInfo_8, (MR_Integer) 0, HeadVars_32, ArgTypes_45, ArgModes_46, &InputArgs_47, &_OutputArgs_48);
        switch (CodeModel_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            Arity_49 = mercury__list__length_1_f_0(TypeInfo_45_58, InputArgs_47);
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Var_54;

              Var_54 = mercury__list__length_1_f_0(TypeInfo_45_58, InputArgs_47);
              Arity_49 = (Var_54 + (MR_Integer) 1);
            }
            break;
        }
        {
          ProcBody_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ProcBody_15, 0) = ((MR_Box) (Arity_49));
        }
        STATE_VARIABLE_Info_43_56 = STATE_VARIABLE_Info_38_51;
      }
    }
    else
    {
      MR_Word ProcClause_50;
      MR_Word InputVars_66;
      MR_Word OutputVars_67;
      MR_Word OutputVarsExprs_68;
      MR_Word InputVarsTerms_69;
      MR_Word SuccessExpr_70;
      MR_Word InstMap_71;
      MR_Word Statement_73;
      MR_Word STATE_VARIABLE_Info_23_75;
      MR_Word Var_82;

      erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_p_0(STATE_VARIABLE_Info_38_51, &InputVars_66);
      erl_backend__erl_code_util__erl_gen_info_get_output_vars_2_p_0(STATE_VARIABLE_Info_38_51, &OutputVars_67);
      OutputVarsExprs_68 = erl_backend__elds__exprs_from_vars_1_f_0(OutputVars_67);
      switch (CodeModel_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            InputVarsTerms_69 = erl_backend__elds__terms_from_vars_1_f_0(InputVars_66);
            SuccessExpr_70 = erl_backend__elds__tuple_or_single_expr_1_f_0(OutputVarsExprs_68);
            InstMap_71 = InstMap0_33;
            STATE_VARIABLE_Info_23_75 = STATE_VARIABLE_Info_38_51;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SucceedVar_72;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_79;
            MR_Word Var_80;

            erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "SucceedHeadVar", &SucceedVar_72, STATE_VARIABLE_Info_38_51, &STATE_VARIABLE_Info_23_75);
            hlds__instmap__instmap_set_var_4_p_0(SucceedVar_72, (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__erl_code_gen_scalar_common_3[0]), InstMap0_33, &InstMap_71);
            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (SucceedVar_72));
              MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0], InputVars_66, Var_77);
            InputVarsTerms_69 = erl_backend__elds__terms_from_vars_1_f_0(Var_76);
            Var_80 = erl_backend__elds__expr_from_var_1_f_0(SucceedVar_72);
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
            }
            {
              SuccessExpr_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), SuccessExpr_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), SuccessExpr_70, 1) = ((MR_Box) (Var_79));
              MR_hl_field(MR_mktag(3), SuccessExpr_70, 2) = ((MR_Box) (OutputVarsExprs_68));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_81;

            InputVarsTerms_69 = erl_backend__elds__terms_from_vars_1_f_0(InputVars_66);
            {
              Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
              MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (OutputVarsExprs_68));
            }
            {
              SuccessExpr_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), SuccessExpr_70, 0) = ((MR_Box) (Var_81));
            }
            InstMap_71 = InstMap0_33;
            STATE_VARIABLE_Info_23_75 = STATE_VARIABLE_Info_38_51;
          }
          break;
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (SuccessExpr_70));
      }
      erl_backend__erl_code_gen__erl_gen_goal_7_p_0(CodeModel_31, InstMap_71, Goal_41, Var_82, &Statement_73, STATE_VARIABLE_Info_23_75, &STATE_VARIABLE_Info_43_56);
      {
        ProcClause_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ProcClause_50, 0) = ((MR_Box) (InputVarsTerms_69));
        MR_hl_field(MR_mktag(0), ProcClause_50, 1) = ((MR_Box) (Statement_73));
      }
      ProcBody_15 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ProcClause_50);
    }
    erl_backend__erl_code_util__erl_gen_info_get_varset_2_p_0(STATE_VARIABLE_Info_43_56, &ProcVarSet_14);
    erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_p_0(STATE_VARIABLE_Info_43_56, &EnvVarNames_16);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (PredId_9));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (ProcId_10));
    }
    {
      ProcDefn_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcDefn_17, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), ProcDefn_17, 1) = ((MR_Box) (ProcVarSet_14));
      MR_hl_field(MR_mktag(0), ProcDefn_17, 2) = ((MR_Box) (ProcBody_15));
      MR_hl_field(MR_mktag(0), ProcDefn_17, 3) = ((MR_Box) (EnvVarNames_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Defns_19 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcDefn_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Defns_0_18));
    }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_goal_expr__698__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_7_p_0(
  MR_Word tscc_proc_1_input_1_CodeModel_8,
  MR_Word tscc_proc_1_input_2_InstMap_9,
  MR_Word tscc_proc_1_input_3_Goal_10,
  MR_Word tscc_proc_1_input_4_MaybeSuccessExpr0_11,
  MR_Word * tscc_output_ptr_1_Code_12,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Info_21)
{
  {
    MR_Word tscc_proc_2_input_1_GoalExpr_10;
    MR_Word tscc_proc_2_input_2_CodeModel_11;
    MR_Word tscc_proc_2_input_3_Detism_12;
    MR_Word tscc_proc_2_input_4_InstMap_13;
    MR_Word tscc_proc_2_input_5_Context_14;
    MR_Word tscc_proc_2_input_6_MaybeSuccessExpr_15;
    MR_Word tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
    MR_Word tscc_proc_3_input_1_Goal_10;
    MR_Word tscc_proc_3_input_2_CodeModel_11;
    MR_Word tscc_proc_3_input_3_ScopeDetism_12;
    MR_Word tscc_proc_3_input_4_InstMap_13;
    MR_Word tscc_proc_3_input_5_MaybeSuccessExpr_15;
    MR_Word tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29;
    MR_Word tscc_proc_4_input_1_HeadVar__1_1;
    MR_Word tscc_proc_4_input_2_CodeModel_2;
    MR_Word tscc_proc_4_input_3_HeadVar__3_3;
    MR_Word tscc_proc_4_input_4_HeadVar__5_5;
    MR_Word tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7;
    MR_Word tscc_output_1_Code_12;
    MR_Word tscc_output_2_STATE_VARIABLE_Info_21;

    // The code for TSCC PROC 1: pred erl_backend.erl_code_gen.erl_gen_goal/7-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred erl_backend.erl_code_gen.erl_gen_goal/7-0
    // proc 2 in TSCC: pred erl_backend.erl_code_gen.erl_gen_goal_expr/9-0
    // proc 3 in TSCC: pred erl_backend.erl_code_gen.UnusedArgs__pred__erl_gen_commit__[5]_0/9-0
    // proc 4 in TSCC: pred erl_backend.erl_code_gen.UnusedArgs__pred__erl_gen_disj__[4]_0/8-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word CodeModel_8 = tscc_proc_1_input_1_CodeModel_8;
      MR_Word InstMap_9 = tscc_proc_1_input_2_InstMap_9;
      MR_Word Goal_10 = tscc_proc_1_input_3_Goal_10;
      MR_Word MaybeSuccessExpr0_11 = tscc_proc_1_input_4_MaybeSuccessExpr0_11;
      MR_Word Code_12;
      MR_Word STATE_VARIABLE_Info_0_20 = tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20;
      MR_Word STATE_VARIABLE_Info_21;
      MR_bool succeeded;
      MR_Word GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0)));
      MR_Word GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1)));
      MR_Word Context_16;
      MR_Word GoalCodeModel_17;

      Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_15);
      GoalCodeModel_17 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_15);
      switch (CodeModel_8) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (GoalCodeModel_17) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
          break;
        case (MR_Integer) 1:
          succeeded = (GoalCodeModel_17 == (MR_Integer) 2);
          break;
      }
      if (succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal\'/7", (MR_String) "code model mismatch");
          return;
        }
      }
      else
      {
        MR_Word Determinism_18;
        MR_Word MaybeSuccessExpr_19;
        MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_10;
        MR_Word next_value_of_tscc_proc_2_input_2_CodeModel_11;
        MR_Word next_value_of_tscc_proc_2_input_3_Detism_12;
        MR_Word next_value_of_tscc_proc_2_input_4_InstMap_13;
        MR_Word next_value_of_tscc_proc_2_input_5_Context_14;
        MR_Word next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
        MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;

        Determinism_18 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_15);
        switch (Determinism_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 1:
            MaybeSuccessExpr_19 = MaybeSuccessExpr0_11;
            break;
          case (MR_Integer) 6:
            MaybeSuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_25;
              MR_Word Var_26;

              Var_26 = erl_backend__elds__elds_fail_0_f_0();
              {
                Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (Var_26));
              }
              {
                MaybeSuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeSuccessExpr_19, 0) = ((MR_Box) (Var_25));
              }
            }
            break;
        }
        // direct tailcall eliminated
        next_value_of_tscc_proc_2_input_1_GoalExpr_10 = GoalExpr_14;
        next_value_of_tscc_proc_2_input_2_CodeModel_11 = GoalCodeModel_17;
        next_value_of_tscc_proc_2_input_3_Detism_12 = Determinism_18;
        next_value_of_tscc_proc_2_input_4_InstMap_13 = InstMap_9;
        next_value_of_tscc_proc_2_input_5_Context_14 = Context_16;
        next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15 = MaybeSuccessExpr_19;
        next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = STATE_VARIABLE_Info_0_20;
        tscc_proc_2_input_1_GoalExpr_10 = next_value_of_tscc_proc_2_input_1_GoalExpr_10;
        tscc_proc_2_input_2_CodeModel_11 = next_value_of_tscc_proc_2_input_2_CodeModel_11;
        tscc_proc_2_input_3_Detism_12 = next_value_of_tscc_proc_2_input_3_Detism_12;
        tscc_proc_2_input_4_InstMap_13 = next_value_of_tscc_proc_2_input_4_InstMap_13;
        tscc_proc_2_input_5_Context_14 = next_value_of_tscc_proc_2_input_5_Context_14;
        tscc_proc_2_input_6_MaybeSuccessExpr_15 = next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
        tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
        goto top_of_proc_2;
      }
      tscc_output_1_Code_12 = Code_12;
      tscc_output_2_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_21;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word GoalExpr_10 = tscc_proc_2_input_1_GoalExpr_10;
      MR_Word CodeModel_11 = tscc_proc_2_input_2_CodeModel_11;
      MR_Word Detism_12 = tscc_proc_2_input_3_Detism_12;
      MR_Word InstMap_13 = tscc_proc_2_input_4_InstMap_13;
      MR_Word Context_14 = tscc_proc_2_input_5_Context_14;
      MR_Word MaybeSuccessExpr_15 = tscc_proc_2_input_6_MaybeSuccessExpr_15;
      MR_Word Statement_16;
      MR_Word STATE_VARIABLE_Info_0_90 = tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
      MR_Word STATE_VARIABLE_Info_91;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) GoalExpr_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_128 = (MR_Word) MR_body(((MR_Word) GoalExpr_10), (MR_Integer) 0);

            erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_110_101_103_97_116_105_111_110_95_95_91_52_93_95_48_8_p_0(SubGoal_128, CodeModel_11, InstMap_13, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 3)));
            MR_Word _LHS_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 0)));
            MR_Word _RHS_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 1)));
            MR_Word _Mode_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 2)));
            MR_Word _UnifyContext_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 4)));

            erl_backend__erl_unify_gen__erl_gen_unification_7_p_0(Unification_80, CodeModel_11, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0)));
            MR_Integer ProcId_71 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 1)));
            MR_Word ArgVars_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 2)));
            MR_Word BuiltinState_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 3)));
            MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 4)));
            MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 5)));

            switch (BuiltinState_73) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                erl_backend__erl_call_gen__erl_gen_builtin_9_p_0(PredId_70, ProcId_71, ArgVars_72, CodeModel_11, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ActualArgTypes_76;

                  erl_backend__erl_code_util__erl_variable_types_3_p_0(STATE_VARIABLE_Info_0_90, ArgVars_72, &ActualArgTypes_76);
                  erl_backend__erl_call_gen__erl_gen_call_10_p_0(PredId_70, ProcId_71, ArgVars_72, ActualArgTypes_76, CodeModel_11, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GenericCall_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word Vars_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word Modes_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word CallDetism_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 5)));
                MR_Word CallCodeModel_59;
                MR_Word Var_99;
                MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));

                hlds__code_model__determinism_to_code_model_2_p_0(CallDetism_58, &CallCodeModel_59);
                {
                  Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (CodeModel_11));
                  MR_hl_field(MR_mktag(0), Var_99, 4) = ((MR_Box) (CallCodeModel_59));
                }
                mercury__require__expect_4_p_0(Var_99, (MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "code model mismatch");
                switch (MR_tag((MR_Word) GenericCall_54)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    erl_backend__erl_call_gen__erl_gen_higher_order_call_9_p_0(GenericCall_54, Vars_55, Modes_56, CallDetism_58, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                    break;
                  case (MR_Integer) 1:
                    erl_backend__erl_call_gen__erl_gen_class_method_call_9_p_0(GenericCall_54, Vars_55, Modes_56, CallDetism_58, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "event_calls in erlang backend");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    erl_backend__erl_call_gen__erl_gen_cast_6_p_0(Context_14, Vars_55, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Args_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));
                MR_Word MaybeTraceRuntimeCond_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 6)));
                MR_Word PragmaImpl_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 7)));
                MR_Word _Attributes_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word _PredId_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Integer _ProcId_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word _ExtraArgs_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 5)));

                erl_backend__erl_call_gen__erl_gen_foreign_proc_call_9_p_0(Args_85, MaybeTraceRuntimeCond_87, PragmaImpl_88, CodeModel_11, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word _ConjType_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));

                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_95_91_53_93_95_48_9_p_0(Goals_53, CodeModel_11, Detism_12, InstMap_13, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_4_input_1_HeadVar__1_1 = Goals_129;
                MR_Word next_value_of_tscc_proc_4_input_2_CodeModel_2 = CodeModel_11;
                MR_Word next_value_of_tscc_proc_4_input_3_HeadVar__3_3 = InstMap_13;
                MR_Word next_value_of_tscc_proc_4_input_4_HeadVar__5_5 = MaybeSuccessExpr_15;
                MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_0_90;

                // direct tailcall eliminated
                tscc_proc_4_input_1_HeadVar__1_1 = next_value_of_tscc_proc_4_input_1_HeadVar__1_1;
                tscc_proc_4_input_2_CodeModel_2 = next_value_of_tscc_proc_4_input_2_CodeModel_2;
                tscc_proc_4_input_3_HeadVar__3_3 = next_value_of_tscc_proc_4_input_3_HeadVar__3_3;
                tscc_proc_4_input_4_HeadVar__5_5 = next_value_of_tscc_proc_4_input_4_HeadVar__5_5;
                tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word CanFail_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word CasesList_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));

                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0(Var_18, CanFail_19, CasesList_20, CodeModel_11, InstMap_13, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word SubGoal_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));

                switch (MR_tag((MR_Word) Reason_21)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word SubGoalExpr_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_22, (MR_Integer) 0)));
                      MR_Word SubGoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_22, (MR_Integer) 1)));
                      MR_Word SubGoalDetism_47;
                      MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_10;
                      MR_Word next_value_of_tscc_proc_2_input_2_CodeModel_11;
                      MR_Word next_value_of_tscc_proc_2_input_3_Detism_12;
                      MR_Word next_value_of_tscc_proc_2_input_4_InstMap_13;
                      MR_Word next_value_of_tscc_proc_2_input_5_Context_14;
                      MR_Word next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
                      MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;

                      SubGoalDetism_47 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_46);
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_2_input_1_GoalExpr_10 = SubGoalExpr_45;
                      next_value_of_tscc_proc_2_input_2_CodeModel_11 = CodeModel_11;
                      next_value_of_tscc_proc_2_input_3_Detism_12 = SubGoalDetism_47;
                      next_value_of_tscc_proc_2_input_4_InstMap_13 = InstMap_13;
                      next_value_of_tscc_proc_2_input_5_Context_14 = Context_14;
                      next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15 = MaybeSuccessExpr_15;
                      next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = STATE_VARIABLE_Info_0_90;
                      tscc_proc_2_input_1_GoalExpr_10 = next_value_of_tscc_proc_2_input_1_GoalExpr_10;
                      tscc_proc_2_input_2_CodeModel_11 = next_value_of_tscc_proc_2_input_2_CodeModel_11;
                      tscc_proc_2_input_3_Detism_12 = next_value_of_tscc_proc_2_input_3_Detism_12;
                      tscc_proc_2_input_4_InstMap_13 = next_value_of_tscc_proc_2_input_4_InstMap_13;
                      tscc_proc_2_input_5_Context_14 = next_value_of_tscc_proc_2_input_5_Context_14;
                      tscc_proc_2_input_6_MaybeSuccessExpr_15 = next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
                      tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
                      goto top_of_proc_2;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word next_value_of_tscc_proc_3_input_1_Goal_10 = SubGoal_22;
                      MR_Word next_value_of_tscc_proc_3_input_2_CodeModel_11 = CodeModel_11;
                      MR_Word next_value_of_tscc_proc_3_input_3_ScopeDetism_12 = Detism_12;
                      MR_Word next_value_of_tscc_proc_3_input_4_InstMap_13 = InstMap_13;
                      MR_Word next_value_of_tscc_proc_3_input_5_MaybeSuccessExpr_15 = MaybeSuccessExpr_15;
                      MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_0_90;

                      // direct tailcall eliminated
                      tscc_proc_3_input_1_Goal_10 = next_value_of_tscc_proc_3_input_1_Goal_10;
                      tscc_proc_3_input_2_CodeModel_11 = next_value_of_tscc_proc_3_input_2_CodeModel_11;
                      tscc_proc_3_input_3_ScopeDetism_12 = next_value_of_tscc_proc_3_input_3_ScopeDetism_12;
                      tscc_proc_3_input_4_InstMap_13 = next_value_of_tscc_proc_3_input_4_InstMap_13;
                      tscc_proc_3_input_5_MaybeSuccessExpr_15 = next_value_of_tscc_proc_3_input_5_MaybeSuccessExpr_15;
                      tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29;
                      goto top_of_proc_3;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_21, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 5:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                        {
                          MR_Word SubGoalExpr_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_22, (MR_Integer) 0)));
                          MR_Word SubGoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_22, (MR_Integer) 1)));
                          MR_Word SubGoalDetism_47;
                          MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_10;
                          MR_Word next_value_of_tscc_proc_2_input_2_CodeModel_11;
                          MR_Word next_value_of_tscc_proc_2_input_3_Detism_12;
                          MR_Word next_value_of_tscc_proc_2_input_4_InstMap_13;
                          MR_Word next_value_of_tscc_proc_2_input_5_Context_14;
                          MR_Word next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
                          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;

                          SubGoalDetism_47 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_46);
                          // direct tailcall eliminated
                          next_value_of_tscc_proc_2_input_1_GoalExpr_10 = SubGoalExpr_45;
                          next_value_of_tscc_proc_2_input_2_CodeModel_11 = CodeModel_11;
                          next_value_of_tscc_proc_2_input_3_Detism_12 = SubGoalDetism_47;
                          next_value_of_tscc_proc_2_input_4_InstMap_13 = InstMap_13;
                          next_value_of_tscc_proc_2_input_5_Context_14 = Context_14;
                          next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15 = MaybeSuccessExpr_15;
                          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = STATE_VARIABLE_Info_0_90;
                          tscc_proc_2_input_1_GoalExpr_10 = next_value_of_tscc_proc_2_input_1_GoalExpr_10;
                          tscc_proc_2_input_2_CodeModel_11 = next_value_of_tscc_proc_2_input_2_CodeModel_11;
                          tscc_proc_2_input_3_Detism_12 = next_value_of_tscc_proc_2_input_3_Detism_12;
                          tscc_proc_2_input_4_InstMap_13 = next_value_of_tscc_proc_2_input_4_InstMap_13;
                          tscc_proc_2_input_5_Context_14 = next_value_of_tscc_proc_2_input_5_Context_14;
                          tscc_proc_2_input_6_MaybeSuccessExpr_15 = next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
                          tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
                          goto top_of_proc_2;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_detism");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_complete_switch");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_complete_switch");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word next_value_of_tscc_proc_3_input_1_Goal_10 = SubGoal_22;
                          MR_Word next_value_of_tscc_proc_3_input_2_CodeModel_11 = CodeModel_11;
                          MR_Word next_value_of_tscc_proc_3_input_3_ScopeDetism_12 = Detism_12;
                          MR_Word next_value_of_tscc_proc_3_input_4_InstMap_13 = InstMap_13;
                          MR_Word next_value_of_tscc_proc_3_input_5_MaybeSuccessExpr_15 = MaybeSuccessExpr_15;
                          MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_0_90;

                          // direct tailcall eliminated
                          tscc_proc_3_input_1_Goal_10 = next_value_of_tscc_proc_3_input_1_Goal_10;
                          tscc_proc_3_input_2_CodeModel_11 = next_value_of_tscc_proc_3_input_2_CodeModel_11;
                          tscc_proc_3_input_3_ScopeDetism_12 = next_value_of_tscc_proc_3_input_3_ScopeDetism_12;
                          tscc_proc_3_input_4_InstMap_13 = next_value_of_tscc_proc_3_input_4_InstMap_13;
                          tscc_proc_3_input_5_MaybeSuccessExpr_15 = next_value_of_tscc_proc_3_input_5_MaybeSuccessExpr_15;
                          tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29;
                          goto top_of_proc_3;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "loop_control");
                            return;
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word Then_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word Else_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));
                MR_Word _Vars_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));

                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_116_101_95_95_91_54_93_95_48_10_p_0(CodeModel_11, InstMap_13, Cond_49, Then_50, Else_51, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "shorthand");
                  return;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_Code_12 = Statement_16;
      tscc_output_2_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_91;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Goal_10 = tscc_proc_3_input_1_Goal_10;
      MR_Word CodeModel_11 = tscc_proc_3_input_2_CodeModel_11;
      MR_Word ScopeDetism_12 = tscc_proc_3_input_3_ScopeDetism_12;
      MR_Word InstMap_13 = tscc_proc_3_input_4_InstMap_13;
      MR_Word MaybeSuccessExpr_15 = tscc_proc_3_input_5_MaybeSuccessExpr_15;
      MR_Word Statement_16;
      MR_Word STATE_VARIABLE_Info_0_29 = tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29;
      MR_Word STATE_VARIABLE_Info_30;
      MR_bool succeeded;
      MR_Word GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1)));
      MR_Word GoalCodeModel_20;
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0)));
      MR_Word _GoalContext_21;

      GoalCodeModel_20 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_19);
      _GoalContext_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
      succeeded = (GoalCodeModel_20 == (MR_Integer) 2);
      if (succeeded)
        succeeded = (CodeModel_11 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (ScopeDetism_12 == (MR_Integer) 7);
        if (succeeded)
        {
          MR_Word GoalStatement_22;
          MR_Word Var_32;
          MR_Word Var_33;

          erl_backend__erl_code_gen__erl_gen_goal_7_p_0(GoalCodeModel_20, InstMap_13, Goal_10, MaybeSuccessExpr_15, &GoalStatement_22, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_30);
          Var_33 = erl_backend__elds__elds_fail_0_f_0();
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_32, 0) = ((MR_Box) (Var_33));
          }
          Statement_16 = erl_backend__elds__join_exprs_2_f_0(GoalStatement_22, Var_32);
        }
        else
        {
          MR_Word PackedNonLocals_23;
          MR_Word AnyCase_24;
          MR_Word Catch_25;
          MR_Word Var_36;
          MR_Word Var_38;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_49;
          MR_Word GoalStatement_64;

          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(Goal_10, InstMap_13, (MR_Integer) 0, &GoalStatement_64, &PackedNonLocals_23, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_30);
          Var_42 = erl_backend__elds__elds_fail_0_f_0();
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_41, 0) = ((MR_Box) (Var_42));
          }
          {
            AnyCase_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), AnyCase_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), AnyCase_24, 1) = ((MR_Box) (Var_41));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (AnyCase_24));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_43 = erl_backend__elds__elds_throw_atom_0_f_0();
          Var_46 = erl_backend__elds__elds_commit_marker_0_f_0();
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (PackedNonLocals_23));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
          }
          Var_49 = erl_backend__elds__det_expr_1_f_0(MaybeSuccessExpr_15);
          {
            Catch_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Catch_25, 0) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(0), Catch_25, 1) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(0), Catch_25, 2) = ((MR_Box) (Var_49));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Catch_25));
          }
          {
            Statement_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Statement_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), Statement_16, 1) = ((MR_Box) (GoalStatement_64));
            MR_hl_field(MR_mktag(3), Statement_16, 2) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(3), Statement_16, 3) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(3), Statement_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
      }
      else
      {
        succeeded = (GoalCodeModel_20 == (MR_Integer) 2);
        if (succeeded)
          succeeded = (CodeModel_11 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word ResultsVar_26;
          MR_Word ResultsVarExpr_27;
          MR_Word TryExpr_28;
          MR_Word STATE_VARIABLE_Info_51_51;
          MR_Word Var_55;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word GoalStatement_65;
          MR_Word PackedNonLocals_66;
          MR_Word Catch_67;

          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(Goal_10, InstMap_13, (MR_Integer) 1, &GoalStatement_65, &PackedNonLocals_66, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_51_51);
          erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Results", &ResultsVar_26, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_30);
          ResultsVarExpr_27 = erl_backend__elds__expr_from_var_1_f_0(ResultsVar_26);
          Var_57 = erl_backend__elds__elds_throw_atom_0_f_0();
          Var_60 = erl_backend__elds__elds_commit_marker_0_f_0();
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ResultsVarExpr_27));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_61));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (Var_59));
          }
          {
            Catch_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Catch_67, 0) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), Catch_67, 1) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), Catch_67, 2) = ((MR_Box) (ResultsVarExpr_27));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Catch_67));
          }
          {
            TryExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TryExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), TryExpr_28, 1) = ((MR_Box) (GoalStatement_65));
            MR_hl_field(MR_mktag(3), TryExpr_28, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), TryExpr_28, 3) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(3), TryExpr_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Statement_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Statement_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Statement_16, 1) = ((MR_Box) (PackedNonLocals_66));
            MR_hl_field(MR_mktag(3), Statement_16, 2) = ((MR_Box) (TryExpr_28));
          }
        }
        else
        {
          MR_Word next_value_of_tscc_proc_1_input_1_CodeModel_8 = CodeModel_11;
          MR_Word next_value_of_tscc_proc_1_input_2_InstMap_9 = InstMap_13;
          MR_Word next_value_of_tscc_proc_1_input_3_Goal_10 = Goal_10;
          MR_Word next_value_of_tscc_proc_1_input_4_MaybeSuccessExpr0_11 = MaybeSuccessExpr_15;
          MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20 = STATE_VARIABLE_Info_0_29;

          // direct tailcall eliminated
          tscc_proc_1_input_1_CodeModel_8 = next_value_of_tscc_proc_1_input_1_CodeModel_8;
          tscc_proc_1_input_2_InstMap_9 = next_value_of_tscc_proc_1_input_2_InstMap_9;
          tscc_proc_1_input_3_Goal_10 = next_value_of_tscc_proc_1_input_3_Goal_10;
          tscc_proc_1_input_4_MaybeSuccessExpr0_11 = next_value_of_tscc_proc_1_input_4_MaybeSuccessExpr0_11;
          tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20;
          goto top_of_proc_1;
        }
      }
      tscc_output_1_Code_12 = Statement_16;
      tscc_output_2_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_30;
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_4_input_1_HeadVar__1_1;
      MR_Word CodeModel_2 = tscc_proc_4_input_2_CodeModel_2;
      MR_Word HeadVar__3_3 = tscc_proc_4_input_3_HeadVar__3_3;
      MR_Word HeadVar__5_5 = tscc_proc_4_input_4_HeadVar__5_5;
      MR_Word Statement_6;
      MR_Word STATE_VARIABLE_Info_0_7 = tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7;
      MR_Word STATE_VARIABLE_Info_8;

      if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        switch (CodeModel_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_disj\'/8", (MR_String) "\140fail\' has determinism \140det\'");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_Word Var_17;

              Var_17 = erl_backend__elds__elds_fail_0_f_0();
              {
                Statement_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Statement_6, 0) = ((MR_Box) (Var_17));
              }
            }
            break;
        }
        STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      }
      else
      {
        MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
        MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

        if ((Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word next_value_of_tscc_proc_1_input_1_CodeModel_8 = CodeModel_2;
          MR_Word next_value_of_tscc_proc_1_input_2_InstMap_9 = HeadVar__3_3;
          MR_Word next_value_of_tscc_proc_1_input_3_Goal_10 = Var_54;
          MR_Word next_value_of_tscc_proc_1_input_4_MaybeSuccessExpr0_11 = HeadVar__5_5;
          MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20 = STATE_VARIABLE_Info_0_7;

          // direct tailcall eliminated
          tscc_proc_1_input_1_CodeModel_8 = next_value_of_tscc_proc_1_input_1_CodeModel_8;
          tscc_proc_1_input_2_InstMap_9 = next_value_of_tscc_proc_1_input_2_InstMap_9;
          tscc_proc_1_input_3_Goal_10 = next_value_of_tscc_proc_1_input_3_Goal_10;
          tscc_proc_1_input_4_MaybeSuccessExpr0_11 = next_value_of_tscc_proc_1_input_4_MaybeSuccessExpr0_11;
          tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20;
          goto top_of_proc_1;
        }
        else
        {
          MR_Word NonLocalsBoundInGoals_42;
          MR_Word MaybeMakeClosure_43;
          MR_Word MaybeSuccessExpr_44;
          MR_Word InstMap_45;
          MR_Word DisjStatement_46;
          MR_Word STATE_VARIABLE_Info_50_50;
          MR_Word IsBound_59;
          MR_Word NonLocalsLists_60;

          {
            IsBound_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), IsBound_59, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), IsBound_59, 1) = ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0_2));
            MR_hl_field(MR_mktag(0), IsBound_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), IsBound_59, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_7));
            MR_hl_field(MR_mktag(0), IsBound_59, 4) = ((MR_Box) (HeadVar__3_3));
          }
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[3], IsBound_59, HeadVar__1_1, &NonLocalsLists_60);
          NonLocalsBoundInGoals_42 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocalsLists_60);
          erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(NonLocalsBoundInGoals_42, HeadVar__5_5, &MaybeMakeClosure_43, &MaybeSuccessExpr_44, HeadVar__3_3, &InstMap_45, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_50_50);
          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(HeadVar__1_1, CodeModel_2, InstMap_45, MaybeSuccessExpr_44, &DisjStatement_46, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_8);
          Statement_6 = erl_backend__elds__maybe_join_exprs1_2_f_0(MaybeMakeClosure_43, DisjStatement_46);
        }
      }
      tscc_output_1_Code_12 = Statement_6;
      tscc_output_2_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_8;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Code_12 = tscc_output_1_Code_12;
    *tscc_output_ptr_2_STATE_VARIABLE_Info_21 = tscc_output_2_STATE_VARIABLE_Info_21;
    return;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0(
  MR_Word tscc_proc_2_input_1_GoalExpr_10,
  MR_Word tscc_proc_2_input_2_CodeModel_11,
  MR_Word tscc_proc_2_input_3_Detism_12,
  MR_Word tscc_proc_2_input_4_InstMap_13,
  MR_Word tscc_proc_2_input_5_Context_14,
  MR_Word tscc_proc_2_input_6_MaybeSuccessExpr_15,
  MR_Word * tscc_output_ptr_1_Code_12,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Info_21)
{
  {
    MR_Word tscc_proc_1_input_1_CodeModel_8;
    MR_Word tscc_proc_1_input_2_InstMap_9;
    MR_Word tscc_proc_1_input_3_Goal_10;
    MR_Word tscc_proc_1_input_4_MaybeSuccessExpr0_11;
    MR_Word tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20;
    MR_Word tscc_proc_3_input_1_Goal_10;
    MR_Word tscc_proc_3_input_2_CodeModel_11;
    MR_Word tscc_proc_3_input_3_ScopeDetism_12;
    MR_Word tscc_proc_3_input_4_InstMap_13;
    MR_Word tscc_proc_3_input_5_MaybeSuccessExpr_15;
    MR_Word tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29;
    MR_Word tscc_proc_4_input_1_HeadVar__1_1;
    MR_Word tscc_proc_4_input_2_CodeModel_2;
    MR_Word tscc_proc_4_input_3_HeadVar__3_3;
    MR_Word tscc_proc_4_input_4_HeadVar__5_5;
    MR_Word tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7;
    MR_Word tscc_output_1_Code_12;
    MR_Word tscc_output_2_STATE_VARIABLE_Info_21;

    // The code for TSCC PROC 2: pred erl_backend.erl_code_gen.erl_gen_goal_expr/9-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred erl_backend.erl_code_gen.erl_gen_goal/7-0
    // proc 2 in TSCC: pred erl_backend.erl_code_gen.erl_gen_goal_expr/9-0
    // proc 3 in TSCC: pred erl_backend.erl_code_gen.UnusedArgs__pred__erl_gen_commit__[5]_0/9-0
    // proc 4 in TSCC: pred erl_backend.erl_code_gen.UnusedArgs__pred__erl_gen_disj__[4]_0/8-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word CodeModel_8 = tscc_proc_1_input_1_CodeModel_8;
      MR_Word InstMap_9 = tscc_proc_1_input_2_InstMap_9;
      MR_Word Goal_10 = tscc_proc_1_input_3_Goal_10;
      MR_Word MaybeSuccessExpr0_11 = tscc_proc_1_input_4_MaybeSuccessExpr0_11;
      MR_Word Code_12;
      MR_Word STATE_VARIABLE_Info_0_20 = tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20;
      MR_Word STATE_VARIABLE_Info_21;
      MR_bool succeeded;
      MR_Word GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0)));
      MR_Word GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1)));
      MR_Word Context_16;
      MR_Word GoalCodeModel_17;

      Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_15);
      GoalCodeModel_17 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_15);
      switch (CodeModel_8) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (GoalCodeModel_17) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
          break;
        case (MR_Integer) 1:
          succeeded = (GoalCodeModel_17 == (MR_Integer) 2);
          break;
      }
      if (succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal\'/7", (MR_String) "code model mismatch");
          return;
        }
      }
      else
      {
        MR_Word Determinism_18;
        MR_Word MaybeSuccessExpr_19;
        MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_10;
        MR_Word next_value_of_tscc_proc_2_input_2_CodeModel_11;
        MR_Word next_value_of_tscc_proc_2_input_3_Detism_12;
        MR_Word next_value_of_tscc_proc_2_input_4_InstMap_13;
        MR_Word next_value_of_tscc_proc_2_input_5_Context_14;
        MR_Word next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
        MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;

        Determinism_18 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_15);
        switch (Determinism_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 1:
            MaybeSuccessExpr_19 = MaybeSuccessExpr0_11;
            break;
          case (MR_Integer) 6:
            MaybeSuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_25;
              MR_Word Var_26;

              Var_26 = erl_backend__elds__elds_fail_0_f_0();
              {
                Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (Var_26));
              }
              {
                MaybeSuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeSuccessExpr_19, 0) = ((MR_Box) (Var_25));
              }
            }
            break;
        }
        // direct tailcall eliminated
        next_value_of_tscc_proc_2_input_1_GoalExpr_10 = GoalExpr_14;
        next_value_of_tscc_proc_2_input_2_CodeModel_11 = GoalCodeModel_17;
        next_value_of_tscc_proc_2_input_3_Detism_12 = Determinism_18;
        next_value_of_tscc_proc_2_input_4_InstMap_13 = InstMap_9;
        next_value_of_tscc_proc_2_input_5_Context_14 = Context_16;
        next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15 = MaybeSuccessExpr_19;
        next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = STATE_VARIABLE_Info_0_20;
        tscc_proc_2_input_1_GoalExpr_10 = next_value_of_tscc_proc_2_input_1_GoalExpr_10;
        tscc_proc_2_input_2_CodeModel_11 = next_value_of_tscc_proc_2_input_2_CodeModel_11;
        tscc_proc_2_input_3_Detism_12 = next_value_of_tscc_proc_2_input_3_Detism_12;
        tscc_proc_2_input_4_InstMap_13 = next_value_of_tscc_proc_2_input_4_InstMap_13;
        tscc_proc_2_input_5_Context_14 = next_value_of_tscc_proc_2_input_5_Context_14;
        tscc_proc_2_input_6_MaybeSuccessExpr_15 = next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
        tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
        goto top_of_proc_2;
      }
      tscc_output_1_Code_12 = Code_12;
      tscc_output_2_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_21;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word GoalExpr_10 = tscc_proc_2_input_1_GoalExpr_10;
      MR_Word CodeModel_11 = tscc_proc_2_input_2_CodeModel_11;
      MR_Word Detism_12 = tscc_proc_2_input_3_Detism_12;
      MR_Word InstMap_13 = tscc_proc_2_input_4_InstMap_13;
      MR_Word Context_14 = tscc_proc_2_input_5_Context_14;
      MR_Word MaybeSuccessExpr_15 = tscc_proc_2_input_6_MaybeSuccessExpr_15;
      MR_Word Statement_16;
      MR_Word STATE_VARIABLE_Info_0_90 = tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
      MR_Word STATE_VARIABLE_Info_91;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) GoalExpr_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_128 = (MR_Word) MR_body(((MR_Word) GoalExpr_10), (MR_Integer) 0);

            erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_110_101_103_97_116_105_111_110_95_95_91_52_93_95_48_8_p_0(SubGoal_128, CodeModel_11, InstMap_13, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 3)));
            MR_Word _LHS_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 0)));
            MR_Word _RHS_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 1)));
            MR_Word _Mode_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 2)));
            MR_Word _UnifyContext_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 4)));

            erl_backend__erl_unify_gen__erl_gen_unification_7_p_0(Unification_80, CodeModel_11, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0)));
            MR_Integer ProcId_71 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 1)));
            MR_Word ArgVars_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 2)));
            MR_Word BuiltinState_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 3)));
            MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 4)));
            MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 5)));

            switch (BuiltinState_73) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                erl_backend__erl_call_gen__erl_gen_builtin_9_p_0(PredId_70, ProcId_71, ArgVars_72, CodeModel_11, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ActualArgTypes_76;

                  erl_backend__erl_code_util__erl_variable_types_3_p_0(STATE_VARIABLE_Info_0_90, ArgVars_72, &ActualArgTypes_76);
                  erl_backend__erl_call_gen__erl_gen_call_10_p_0(PredId_70, ProcId_71, ArgVars_72, ActualArgTypes_76, CodeModel_11, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GenericCall_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word Vars_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word Modes_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word CallDetism_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 5)));
                MR_Word CallCodeModel_59;
                MR_Word Var_99;
                MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));

                hlds__code_model__determinism_to_code_model_2_p_0(CallDetism_58, &CallCodeModel_59);
                {
                  Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (CodeModel_11));
                  MR_hl_field(MR_mktag(0), Var_99, 4) = ((MR_Box) (CallCodeModel_59));
                }
                mercury__require__expect_4_p_0(Var_99, (MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "code model mismatch");
                switch (MR_tag((MR_Word) GenericCall_54)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    erl_backend__erl_call_gen__erl_gen_higher_order_call_9_p_0(GenericCall_54, Vars_55, Modes_56, CallDetism_58, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                    break;
                  case (MR_Integer) 1:
                    erl_backend__erl_call_gen__erl_gen_class_method_call_9_p_0(GenericCall_54, Vars_55, Modes_56, CallDetism_58, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "event_calls in erlang backend");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    erl_backend__erl_call_gen__erl_gen_cast_6_p_0(Context_14, Vars_55, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Args_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));
                MR_Word MaybeTraceRuntimeCond_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 6)));
                MR_Word PragmaImpl_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 7)));
                MR_Word _Attributes_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word _PredId_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Integer _ProcId_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word _ExtraArgs_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 5)));

                erl_backend__erl_call_gen__erl_gen_foreign_proc_call_9_p_0(Args_85, MaybeTraceRuntimeCond_87, PragmaImpl_88, CodeModel_11, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word _ConjType_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));

                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_95_91_53_93_95_48_9_p_0(Goals_53, CodeModel_11, Detism_12, InstMap_13, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_4_input_1_HeadVar__1_1 = Goals_129;
                MR_Word next_value_of_tscc_proc_4_input_2_CodeModel_2 = CodeModel_11;
                MR_Word next_value_of_tscc_proc_4_input_3_HeadVar__3_3 = InstMap_13;
                MR_Word next_value_of_tscc_proc_4_input_4_HeadVar__5_5 = MaybeSuccessExpr_15;
                MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_0_90;

                // direct tailcall eliminated
                tscc_proc_4_input_1_HeadVar__1_1 = next_value_of_tscc_proc_4_input_1_HeadVar__1_1;
                tscc_proc_4_input_2_CodeModel_2 = next_value_of_tscc_proc_4_input_2_CodeModel_2;
                tscc_proc_4_input_3_HeadVar__3_3 = next_value_of_tscc_proc_4_input_3_HeadVar__3_3;
                tscc_proc_4_input_4_HeadVar__5_5 = next_value_of_tscc_proc_4_input_4_HeadVar__5_5;
                tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word CanFail_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word CasesList_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));

                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0(Var_18, CanFail_19, CasesList_20, CodeModel_11, InstMap_13, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word SubGoal_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));

                switch (MR_tag((MR_Word) Reason_21)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word SubGoalExpr_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_22, (MR_Integer) 0)));
                      MR_Word SubGoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_22, (MR_Integer) 1)));
                      MR_Word SubGoalDetism_47;
                      MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_10;
                      MR_Word next_value_of_tscc_proc_2_input_2_CodeModel_11;
                      MR_Word next_value_of_tscc_proc_2_input_3_Detism_12;
                      MR_Word next_value_of_tscc_proc_2_input_4_InstMap_13;
                      MR_Word next_value_of_tscc_proc_2_input_5_Context_14;
                      MR_Word next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
                      MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;

                      SubGoalDetism_47 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_46);
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_2_input_1_GoalExpr_10 = SubGoalExpr_45;
                      next_value_of_tscc_proc_2_input_2_CodeModel_11 = CodeModel_11;
                      next_value_of_tscc_proc_2_input_3_Detism_12 = SubGoalDetism_47;
                      next_value_of_tscc_proc_2_input_4_InstMap_13 = InstMap_13;
                      next_value_of_tscc_proc_2_input_5_Context_14 = Context_14;
                      next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15 = MaybeSuccessExpr_15;
                      next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = STATE_VARIABLE_Info_0_90;
                      tscc_proc_2_input_1_GoalExpr_10 = next_value_of_tscc_proc_2_input_1_GoalExpr_10;
                      tscc_proc_2_input_2_CodeModel_11 = next_value_of_tscc_proc_2_input_2_CodeModel_11;
                      tscc_proc_2_input_3_Detism_12 = next_value_of_tscc_proc_2_input_3_Detism_12;
                      tscc_proc_2_input_4_InstMap_13 = next_value_of_tscc_proc_2_input_4_InstMap_13;
                      tscc_proc_2_input_5_Context_14 = next_value_of_tscc_proc_2_input_5_Context_14;
                      tscc_proc_2_input_6_MaybeSuccessExpr_15 = next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
                      tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
                      goto top_of_proc_2;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word next_value_of_tscc_proc_3_input_1_Goal_10 = SubGoal_22;
                      MR_Word next_value_of_tscc_proc_3_input_2_CodeModel_11 = CodeModel_11;
                      MR_Word next_value_of_tscc_proc_3_input_3_ScopeDetism_12 = Detism_12;
                      MR_Word next_value_of_tscc_proc_3_input_4_InstMap_13 = InstMap_13;
                      MR_Word next_value_of_tscc_proc_3_input_5_MaybeSuccessExpr_15 = MaybeSuccessExpr_15;
                      MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_0_90;

                      // direct tailcall eliminated
                      tscc_proc_3_input_1_Goal_10 = next_value_of_tscc_proc_3_input_1_Goal_10;
                      tscc_proc_3_input_2_CodeModel_11 = next_value_of_tscc_proc_3_input_2_CodeModel_11;
                      tscc_proc_3_input_3_ScopeDetism_12 = next_value_of_tscc_proc_3_input_3_ScopeDetism_12;
                      tscc_proc_3_input_4_InstMap_13 = next_value_of_tscc_proc_3_input_4_InstMap_13;
                      tscc_proc_3_input_5_MaybeSuccessExpr_15 = next_value_of_tscc_proc_3_input_5_MaybeSuccessExpr_15;
                      tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29;
                      goto top_of_proc_3;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_21, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 5:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                        {
                          MR_Word SubGoalExpr_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_22, (MR_Integer) 0)));
                          MR_Word SubGoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_22, (MR_Integer) 1)));
                          MR_Word SubGoalDetism_47;
                          MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_10;
                          MR_Word next_value_of_tscc_proc_2_input_2_CodeModel_11;
                          MR_Word next_value_of_tscc_proc_2_input_3_Detism_12;
                          MR_Word next_value_of_tscc_proc_2_input_4_InstMap_13;
                          MR_Word next_value_of_tscc_proc_2_input_5_Context_14;
                          MR_Word next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
                          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;

                          SubGoalDetism_47 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_46);
                          // direct tailcall eliminated
                          next_value_of_tscc_proc_2_input_1_GoalExpr_10 = SubGoalExpr_45;
                          next_value_of_tscc_proc_2_input_2_CodeModel_11 = CodeModel_11;
                          next_value_of_tscc_proc_2_input_3_Detism_12 = SubGoalDetism_47;
                          next_value_of_tscc_proc_2_input_4_InstMap_13 = InstMap_13;
                          next_value_of_tscc_proc_2_input_5_Context_14 = Context_14;
                          next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15 = MaybeSuccessExpr_15;
                          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = STATE_VARIABLE_Info_0_90;
                          tscc_proc_2_input_1_GoalExpr_10 = next_value_of_tscc_proc_2_input_1_GoalExpr_10;
                          tscc_proc_2_input_2_CodeModel_11 = next_value_of_tscc_proc_2_input_2_CodeModel_11;
                          tscc_proc_2_input_3_Detism_12 = next_value_of_tscc_proc_2_input_3_Detism_12;
                          tscc_proc_2_input_4_InstMap_13 = next_value_of_tscc_proc_2_input_4_InstMap_13;
                          tscc_proc_2_input_5_Context_14 = next_value_of_tscc_proc_2_input_5_Context_14;
                          tscc_proc_2_input_6_MaybeSuccessExpr_15 = next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
                          tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
                          goto top_of_proc_2;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_detism");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_complete_switch");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_complete_switch");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word next_value_of_tscc_proc_3_input_1_Goal_10 = SubGoal_22;
                          MR_Word next_value_of_tscc_proc_3_input_2_CodeModel_11 = CodeModel_11;
                          MR_Word next_value_of_tscc_proc_3_input_3_ScopeDetism_12 = Detism_12;
                          MR_Word next_value_of_tscc_proc_3_input_4_InstMap_13 = InstMap_13;
                          MR_Word next_value_of_tscc_proc_3_input_5_MaybeSuccessExpr_15 = MaybeSuccessExpr_15;
                          MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_0_90;

                          // direct tailcall eliminated
                          tscc_proc_3_input_1_Goal_10 = next_value_of_tscc_proc_3_input_1_Goal_10;
                          tscc_proc_3_input_2_CodeModel_11 = next_value_of_tscc_proc_3_input_2_CodeModel_11;
                          tscc_proc_3_input_3_ScopeDetism_12 = next_value_of_tscc_proc_3_input_3_ScopeDetism_12;
                          tscc_proc_3_input_4_InstMap_13 = next_value_of_tscc_proc_3_input_4_InstMap_13;
                          tscc_proc_3_input_5_MaybeSuccessExpr_15 = next_value_of_tscc_proc_3_input_5_MaybeSuccessExpr_15;
                          tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29;
                          goto top_of_proc_3;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "loop_control");
                            return;
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word Then_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word Else_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));
                MR_Word _Vars_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));

                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_116_101_95_95_91_54_93_95_48_10_p_0(CodeModel_11, InstMap_13, Cond_49, Then_50, Else_51, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "shorthand");
                  return;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_Code_12 = Statement_16;
      tscc_output_2_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_91;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Goal_10 = tscc_proc_3_input_1_Goal_10;
      MR_Word CodeModel_11 = tscc_proc_3_input_2_CodeModel_11;
      MR_Word ScopeDetism_12 = tscc_proc_3_input_3_ScopeDetism_12;
      MR_Word InstMap_13 = tscc_proc_3_input_4_InstMap_13;
      MR_Word MaybeSuccessExpr_15 = tscc_proc_3_input_5_MaybeSuccessExpr_15;
      MR_Word Statement_16;
      MR_Word STATE_VARIABLE_Info_0_29 = tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29;
      MR_Word STATE_VARIABLE_Info_30;
      MR_bool succeeded;
      MR_Word GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1)));
      MR_Word GoalCodeModel_20;
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0)));
      MR_Word _GoalContext_21;

      GoalCodeModel_20 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_19);
      _GoalContext_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
      succeeded = (GoalCodeModel_20 == (MR_Integer) 2);
      if (succeeded)
        succeeded = (CodeModel_11 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (ScopeDetism_12 == (MR_Integer) 7);
        if (succeeded)
        {
          MR_Word GoalStatement_22;
          MR_Word Var_32;
          MR_Word Var_33;

          erl_backend__erl_code_gen__erl_gen_goal_7_p_0(GoalCodeModel_20, InstMap_13, Goal_10, MaybeSuccessExpr_15, &GoalStatement_22, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_30);
          Var_33 = erl_backend__elds__elds_fail_0_f_0();
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_32, 0) = ((MR_Box) (Var_33));
          }
          Statement_16 = erl_backend__elds__join_exprs_2_f_0(GoalStatement_22, Var_32);
        }
        else
        {
          MR_Word PackedNonLocals_23;
          MR_Word AnyCase_24;
          MR_Word Catch_25;
          MR_Word Var_36;
          MR_Word Var_38;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_49;
          MR_Word GoalStatement_64;

          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(Goal_10, InstMap_13, (MR_Integer) 0, &GoalStatement_64, &PackedNonLocals_23, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_30);
          Var_42 = erl_backend__elds__elds_fail_0_f_0();
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_41, 0) = ((MR_Box) (Var_42));
          }
          {
            AnyCase_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), AnyCase_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), AnyCase_24, 1) = ((MR_Box) (Var_41));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (AnyCase_24));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_43 = erl_backend__elds__elds_throw_atom_0_f_0();
          Var_46 = erl_backend__elds__elds_commit_marker_0_f_0();
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (PackedNonLocals_23));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
          }
          Var_49 = erl_backend__elds__det_expr_1_f_0(MaybeSuccessExpr_15);
          {
            Catch_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Catch_25, 0) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(0), Catch_25, 1) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(0), Catch_25, 2) = ((MR_Box) (Var_49));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Catch_25));
          }
          {
            Statement_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Statement_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), Statement_16, 1) = ((MR_Box) (GoalStatement_64));
            MR_hl_field(MR_mktag(3), Statement_16, 2) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(3), Statement_16, 3) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(3), Statement_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
      }
      else
      {
        succeeded = (GoalCodeModel_20 == (MR_Integer) 2);
        if (succeeded)
          succeeded = (CodeModel_11 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word ResultsVar_26;
          MR_Word ResultsVarExpr_27;
          MR_Word TryExpr_28;
          MR_Word STATE_VARIABLE_Info_51_51;
          MR_Word Var_55;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word GoalStatement_65;
          MR_Word PackedNonLocals_66;
          MR_Word Catch_67;

          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(Goal_10, InstMap_13, (MR_Integer) 1, &GoalStatement_65, &PackedNonLocals_66, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_51_51);
          erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Results", &ResultsVar_26, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_30);
          ResultsVarExpr_27 = erl_backend__elds__expr_from_var_1_f_0(ResultsVar_26);
          Var_57 = erl_backend__elds__elds_throw_atom_0_f_0();
          Var_60 = erl_backend__elds__elds_commit_marker_0_f_0();
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ResultsVarExpr_27));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_61));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (Var_59));
          }
          {
            Catch_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Catch_67, 0) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), Catch_67, 1) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), Catch_67, 2) = ((MR_Box) (ResultsVarExpr_27));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Catch_67));
          }
          {
            TryExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TryExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), TryExpr_28, 1) = ((MR_Box) (GoalStatement_65));
            MR_hl_field(MR_mktag(3), TryExpr_28, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), TryExpr_28, 3) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(3), TryExpr_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Statement_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Statement_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Statement_16, 1) = ((MR_Box) (PackedNonLocals_66));
            MR_hl_field(MR_mktag(3), Statement_16, 2) = ((MR_Box) (TryExpr_28));
          }
        }
        else
        {
          MR_Word next_value_of_tscc_proc_1_input_1_CodeModel_8 = CodeModel_11;
          MR_Word next_value_of_tscc_proc_1_input_2_InstMap_9 = InstMap_13;
          MR_Word next_value_of_tscc_proc_1_input_3_Goal_10 = Goal_10;
          MR_Word next_value_of_tscc_proc_1_input_4_MaybeSuccessExpr0_11 = MaybeSuccessExpr_15;
          MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20 = STATE_VARIABLE_Info_0_29;

          // direct tailcall eliminated
          tscc_proc_1_input_1_CodeModel_8 = next_value_of_tscc_proc_1_input_1_CodeModel_8;
          tscc_proc_1_input_2_InstMap_9 = next_value_of_tscc_proc_1_input_2_InstMap_9;
          tscc_proc_1_input_3_Goal_10 = next_value_of_tscc_proc_1_input_3_Goal_10;
          tscc_proc_1_input_4_MaybeSuccessExpr0_11 = next_value_of_tscc_proc_1_input_4_MaybeSuccessExpr0_11;
          tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20;
          goto top_of_proc_1;
        }
      }
      tscc_output_1_Code_12 = Statement_16;
      tscc_output_2_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_30;
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_4_input_1_HeadVar__1_1;
      MR_Word CodeModel_2 = tscc_proc_4_input_2_CodeModel_2;
      MR_Word HeadVar__3_3 = tscc_proc_4_input_3_HeadVar__3_3;
      MR_Word HeadVar__5_5 = tscc_proc_4_input_4_HeadVar__5_5;
      MR_Word Statement_6;
      MR_Word STATE_VARIABLE_Info_0_7 = tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7;
      MR_Word STATE_VARIABLE_Info_8;

      if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        switch (CodeModel_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_disj\'/8", (MR_String) "\140fail\' has determinism \140det\'");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_Word Var_17;

              Var_17 = erl_backend__elds__elds_fail_0_f_0();
              {
                Statement_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Statement_6, 0) = ((MR_Box) (Var_17));
              }
            }
            break;
        }
        STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      }
      else
      {
        MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
        MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

        if ((Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word next_value_of_tscc_proc_1_input_1_CodeModel_8 = CodeModel_2;
          MR_Word next_value_of_tscc_proc_1_input_2_InstMap_9 = HeadVar__3_3;
          MR_Word next_value_of_tscc_proc_1_input_3_Goal_10 = Var_54;
          MR_Word next_value_of_tscc_proc_1_input_4_MaybeSuccessExpr0_11 = HeadVar__5_5;
          MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20 = STATE_VARIABLE_Info_0_7;

          // direct tailcall eliminated
          tscc_proc_1_input_1_CodeModel_8 = next_value_of_tscc_proc_1_input_1_CodeModel_8;
          tscc_proc_1_input_2_InstMap_9 = next_value_of_tscc_proc_1_input_2_InstMap_9;
          tscc_proc_1_input_3_Goal_10 = next_value_of_tscc_proc_1_input_3_Goal_10;
          tscc_proc_1_input_4_MaybeSuccessExpr0_11 = next_value_of_tscc_proc_1_input_4_MaybeSuccessExpr0_11;
          tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20;
          goto top_of_proc_1;
        }
        else
        {
          MR_Word NonLocalsBoundInGoals_42;
          MR_Word MaybeMakeClosure_43;
          MR_Word MaybeSuccessExpr_44;
          MR_Word InstMap_45;
          MR_Word DisjStatement_46;
          MR_Word STATE_VARIABLE_Info_50_50;
          MR_Word IsBound_59;
          MR_Word NonLocalsLists_60;

          {
            IsBound_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), IsBound_59, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), IsBound_59, 1) = ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0_2));
            MR_hl_field(MR_mktag(0), IsBound_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), IsBound_59, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_7));
            MR_hl_field(MR_mktag(0), IsBound_59, 4) = ((MR_Box) (HeadVar__3_3));
          }
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[3], IsBound_59, HeadVar__1_1, &NonLocalsLists_60);
          NonLocalsBoundInGoals_42 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocalsLists_60);
          erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(NonLocalsBoundInGoals_42, HeadVar__5_5, &MaybeMakeClosure_43, &MaybeSuccessExpr_44, HeadVar__3_3, &InstMap_45, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_50_50);
          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(HeadVar__1_1, CodeModel_2, InstMap_45, MaybeSuccessExpr_44, &DisjStatement_46, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_8);
          Statement_6 = erl_backend__elds__maybe_join_exprs1_2_f_0(MaybeMakeClosure_43, DisjStatement_46);
        }
      }
      tscc_output_1_Code_12 = Statement_6;
      tscc_output_2_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_8;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Code_12 = tscc_output_1_Code_12;
    *tscc_output_ptr_2_STATE_VARIABLE_Info_21 = tscc_output_2_STATE_VARIABLE_Info_21;
    return;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_95_91_53_93_95_48_9_p_0(
  MR_Word tscc_proc_3_input_1_Goal_10,
  MR_Word tscc_proc_3_input_2_CodeModel_11,
  MR_Word tscc_proc_3_input_3_ScopeDetism_12,
  MR_Word tscc_proc_3_input_4_InstMap_13,
  MR_Word tscc_proc_3_input_5_MaybeSuccessExpr_15,
  MR_Word * tscc_output_ptr_1_Code_12,
  MR_Word tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Info_21)
{
  {
    MR_Word tscc_proc_1_input_1_CodeModel_8;
    MR_Word tscc_proc_1_input_2_InstMap_9;
    MR_Word tscc_proc_1_input_3_Goal_10;
    MR_Word tscc_proc_1_input_4_MaybeSuccessExpr0_11;
    MR_Word tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20;
    MR_Word tscc_proc_2_input_1_GoalExpr_10;
    MR_Word tscc_proc_2_input_2_CodeModel_11;
    MR_Word tscc_proc_2_input_3_Detism_12;
    MR_Word tscc_proc_2_input_4_InstMap_13;
    MR_Word tscc_proc_2_input_5_Context_14;
    MR_Word tscc_proc_2_input_6_MaybeSuccessExpr_15;
    MR_Word tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
    MR_Word tscc_proc_4_input_1_HeadVar__1_1;
    MR_Word tscc_proc_4_input_2_CodeModel_2;
    MR_Word tscc_proc_4_input_3_HeadVar__3_3;
    MR_Word tscc_proc_4_input_4_HeadVar__5_5;
    MR_Word tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7;
    MR_Word tscc_output_1_Code_12;
    MR_Word tscc_output_2_STATE_VARIABLE_Info_21;

    // The code for TSCC PROC 3: pred erl_backend.erl_code_gen.UnusedArgs__pred__erl_gen_commit__[5]_0/9-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred erl_backend.erl_code_gen.erl_gen_goal/7-0
    // proc 2 in TSCC: pred erl_backend.erl_code_gen.erl_gen_goal_expr/9-0
    // proc 3 in TSCC: pred erl_backend.erl_code_gen.UnusedArgs__pred__erl_gen_commit__[5]_0/9-0
    // proc 4 in TSCC: pred erl_backend.erl_code_gen.UnusedArgs__pred__erl_gen_disj__[4]_0/8-0

    goto top_of_proc_3;
  top_of_proc_1:;
    {
      MR_Word CodeModel_8 = tscc_proc_1_input_1_CodeModel_8;
      MR_Word InstMap_9 = tscc_proc_1_input_2_InstMap_9;
      MR_Word Goal_10 = tscc_proc_1_input_3_Goal_10;
      MR_Word MaybeSuccessExpr0_11 = tscc_proc_1_input_4_MaybeSuccessExpr0_11;
      MR_Word Code_12;
      MR_Word STATE_VARIABLE_Info_0_20 = tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20;
      MR_Word STATE_VARIABLE_Info_21;
      MR_bool succeeded;
      MR_Word GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0)));
      MR_Word GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1)));
      MR_Word Context_16;
      MR_Word GoalCodeModel_17;

      Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_15);
      GoalCodeModel_17 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_15);
      switch (CodeModel_8) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (GoalCodeModel_17) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
          break;
        case (MR_Integer) 1:
          succeeded = (GoalCodeModel_17 == (MR_Integer) 2);
          break;
      }
      if (succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal\'/7", (MR_String) "code model mismatch");
          return;
        }
      }
      else
      {
        MR_Word Determinism_18;
        MR_Word MaybeSuccessExpr_19;
        MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_10;
        MR_Word next_value_of_tscc_proc_2_input_2_CodeModel_11;
        MR_Word next_value_of_tscc_proc_2_input_3_Detism_12;
        MR_Word next_value_of_tscc_proc_2_input_4_InstMap_13;
        MR_Word next_value_of_tscc_proc_2_input_5_Context_14;
        MR_Word next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
        MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;

        Determinism_18 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_15);
        switch (Determinism_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 1:
            MaybeSuccessExpr_19 = MaybeSuccessExpr0_11;
            break;
          case (MR_Integer) 6:
            MaybeSuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_25;
              MR_Word Var_26;

              Var_26 = erl_backend__elds__elds_fail_0_f_0();
              {
                Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (Var_26));
              }
              {
                MaybeSuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeSuccessExpr_19, 0) = ((MR_Box) (Var_25));
              }
            }
            break;
        }
        // direct tailcall eliminated
        next_value_of_tscc_proc_2_input_1_GoalExpr_10 = GoalExpr_14;
        next_value_of_tscc_proc_2_input_2_CodeModel_11 = GoalCodeModel_17;
        next_value_of_tscc_proc_2_input_3_Detism_12 = Determinism_18;
        next_value_of_tscc_proc_2_input_4_InstMap_13 = InstMap_9;
        next_value_of_tscc_proc_2_input_5_Context_14 = Context_16;
        next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15 = MaybeSuccessExpr_19;
        next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = STATE_VARIABLE_Info_0_20;
        tscc_proc_2_input_1_GoalExpr_10 = next_value_of_tscc_proc_2_input_1_GoalExpr_10;
        tscc_proc_2_input_2_CodeModel_11 = next_value_of_tscc_proc_2_input_2_CodeModel_11;
        tscc_proc_2_input_3_Detism_12 = next_value_of_tscc_proc_2_input_3_Detism_12;
        tscc_proc_2_input_4_InstMap_13 = next_value_of_tscc_proc_2_input_4_InstMap_13;
        tscc_proc_2_input_5_Context_14 = next_value_of_tscc_proc_2_input_5_Context_14;
        tscc_proc_2_input_6_MaybeSuccessExpr_15 = next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
        tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
        goto top_of_proc_2;
      }
      tscc_output_1_Code_12 = Code_12;
      tscc_output_2_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_21;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word GoalExpr_10 = tscc_proc_2_input_1_GoalExpr_10;
      MR_Word CodeModel_11 = tscc_proc_2_input_2_CodeModel_11;
      MR_Word Detism_12 = tscc_proc_2_input_3_Detism_12;
      MR_Word InstMap_13 = tscc_proc_2_input_4_InstMap_13;
      MR_Word Context_14 = tscc_proc_2_input_5_Context_14;
      MR_Word MaybeSuccessExpr_15 = tscc_proc_2_input_6_MaybeSuccessExpr_15;
      MR_Word Statement_16;
      MR_Word STATE_VARIABLE_Info_0_90 = tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
      MR_Word STATE_VARIABLE_Info_91;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) GoalExpr_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_128 = (MR_Word) MR_body(((MR_Word) GoalExpr_10), (MR_Integer) 0);

            erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_110_101_103_97_116_105_111_110_95_95_91_52_93_95_48_8_p_0(SubGoal_128, CodeModel_11, InstMap_13, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 3)));
            MR_Word _LHS_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 0)));
            MR_Word _RHS_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 1)));
            MR_Word _Mode_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 2)));
            MR_Word _UnifyContext_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 4)));

            erl_backend__erl_unify_gen__erl_gen_unification_7_p_0(Unification_80, CodeModel_11, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0)));
            MR_Integer ProcId_71 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 1)));
            MR_Word ArgVars_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 2)));
            MR_Word BuiltinState_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 3)));
            MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 4)));
            MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 5)));

            switch (BuiltinState_73) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                erl_backend__erl_call_gen__erl_gen_builtin_9_p_0(PredId_70, ProcId_71, ArgVars_72, CodeModel_11, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ActualArgTypes_76;

                  erl_backend__erl_code_util__erl_variable_types_3_p_0(STATE_VARIABLE_Info_0_90, ArgVars_72, &ActualArgTypes_76);
                  erl_backend__erl_call_gen__erl_gen_call_10_p_0(PredId_70, ProcId_71, ArgVars_72, ActualArgTypes_76, CodeModel_11, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GenericCall_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word Vars_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word Modes_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word CallDetism_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 5)));
                MR_Word CallCodeModel_59;
                MR_Word Var_99;
                MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));

                hlds__code_model__determinism_to_code_model_2_p_0(CallDetism_58, &CallCodeModel_59);
                {
                  Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (CodeModel_11));
                  MR_hl_field(MR_mktag(0), Var_99, 4) = ((MR_Box) (CallCodeModel_59));
                }
                mercury__require__expect_4_p_0(Var_99, (MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "code model mismatch");
                switch (MR_tag((MR_Word) GenericCall_54)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    erl_backend__erl_call_gen__erl_gen_higher_order_call_9_p_0(GenericCall_54, Vars_55, Modes_56, CallDetism_58, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                    break;
                  case (MR_Integer) 1:
                    erl_backend__erl_call_gen__erl_gen_class_method_call_9_p_0(GenericCall_54, Vars_55, Modes_56, CallDetism_58, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "event_calls in erlang backend");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    erl_backend__erl_call_gen__erl_gen_cast_6_p_0(Context_14, Vars_55, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Args_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));
                MR_Word MaybeTraceRuntimeCond_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 6)));
                MR_Word PragmaImpl_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 7)));
                MR_Word _Attributes_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word _PredId_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Integer _ProcId_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word _ExtraArgs_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 5)));

                erl_backend__erl_call_gen__erl_gen_foreign_proc_call_9_p_0(Args_85, MaybeTraceRuntimeCond_87, PragmaImpl_88, CodeModel_11, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word _ConjType_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));

                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_95_91_53_93_95_48_9_p_0(Goals_53, CodeModel_11, Detism_12, InstMap_13, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_4_input_1_HeadVar__1_1 = Goals_129;
                MR_Word next_value_of_tscc_proc_4_input_2_CodeModel_2 = CodeModel_11;
                MR_Word next_value_of_tscc_proc_4_input_3_HeadVar__3_3 = InstMap_13;
                MR_Word next_value_of_tscc_proc_4_input_4_HeadVar__5_5 = MaybeSuccessExpr_15;
                MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_0_90;

                // direct tailcall eliminated
                tscc_proc_4_input_1_HeadVar__1_1 = next_value_of_tscc_proc_4_input_1_HeadVar__1_1;
                tscc_proc_4_input_2_CodeModel_2 = next_value_of_tscc_proc_4_input_2_CodeModel_2;
                tscc_proc_4_input_3_HeadVar__3_3 = next_value_of_tscc_proc_4_input_3_HeadVar__3_3;
                tscc_proc_4_input_4_HeadVar__5_5 = next_value_of_tscc_proc_4_input_4_HeadVar__5_5;
                tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word CanFail_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word CasesList_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));

                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0(Var_18, CanFail_19, CasesList_20, CodeModel_11, InstMap_13, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word SubGoal_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));

                switch (MR_tag((MR_Word) Reason_21)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word SubGoalExpr_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_22, (MR_Integer) 0)));
                      MR_Word SubGoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_22, (MR_Integer) 1)));
                      MR_Word SubGoalDetism_47;
                      MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_10;
                      MR_Word next_value_of_tscc_proc_2_input_2_CodeModel_11;
                      MR_Word next_value_of_tscc_proc_2_input_3_Detism_12;
                      MR_Word next_value_of_tscc_proc_2_input_4_InstMap_13;
                      MR_Word next_value_of_tscc_proc_2_input_5_Context_14;
                      MR_Word next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
                      MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;

                      SubGoalDetism_47 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_46);
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_2_input_1_GoalExpr_10 = SubGoalExpr_45;
                      next_value_of_tscc_proc_2_input_2_CodeModel_11 = CodeModel_11;
                      next_value_of_tscc_proc_2_input_3_Detism_12 = SubGoalDetism_47;
                      next_value_of_tscc_proc_2_input_4_InstMap_13 = InstMap_13;
                      next_value_of_tscc_proc_2_input_5_Context_14 = Context_14;
                      next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15 = MaybeSuccessExpr_15;
                      next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = STATE_VARIABLE_Info_0_90;
                      tscc_proc_2_input_1_GoalExpr_10 = next_value_of_tscc_proc_2_input_1_GoalExpr_10;
                      tscc_proc_2_input_2_CodeModel_11 = next_value_of_tscc_proc_2_input_2_CodeModel_11;
                      tscc_proc_2_input_3_Detism_12 = next_value_of_tscc_proc_2_input_3_Detism_12;
                      tscc_proc_2_input_4_InstMap_13 = next_value_of_tscc_proc_2_input_4_InstMap_13;
                      tscc_proc_2_input_5_Context_14 = next_value_of_tscc_proc_2_input_5_Context_14;
                      tscc_proc_2_input_6_MaybeSuccessExpr_15 = next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
                      tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
                      goto top_of_proc_2;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word next_value_of_tscc_proc_3_input_1_Goal_10 = SubGoal_22;
                      MR_Word next_value_of_tscc_proc_3_input_2_CodeModel_11 = CodeModel_11;
                      MR_Word next_value_of_tscc_proc_3_input_3_ScopeDetism_12 = Detism_12;
                      MR_Word next_value_of_tscc_proc_3_input_4_InstMap_13 = InstMap_13;
                      MR_Word next_value_of_tscc_proc_3_input_5_MaybeSuccessExpr_15 = MaybeSuccessExpr_15;
                      MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_0_90;

                      // direct tailcall eliminated
                      tscc_proc_3_input_1_Goal_10 = next_value_of_tscc_proc_3_input_1_Goal_10;
                      tscc_proc_3_input_2_CodeModel_11 = next_value_of_tscc_proc_3_input_2_CodeModel_11;
                      tscc_proc_3_input_3_ScopeDetism_12 = next_value_of_tscc_proc_3_input_3_ScopeDetism_12;
                      tscc_proc_3_input_4_InstMap_13 = next_value_of_tscc_proc_3_input_4_InstMap_13;
                      tscc_proc_3_input_5_MaybeSuccessExpr_15 = next_value_of_tscc_proc_3_input_5_MaybeSuccessExpr_15;
                      tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29;
                      goto top_of_proc_3;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_21, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 5:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                        {
                          MR_Word SubGoalExpr_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_22, (MR_Integer) 0)));
                          MR_Word SubGoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_22, (MR_Integer) 1)));
                          MR_Word SubGoalDetism_47;
                          MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_10;
                          MR_Word next_value_of_tscc_proc_2_input_2_CodeModel_11;
                          MR_Word next_value_of_tscc_proc_2_input_3_Detism_12;
                          MR_Word next_value_of_tscc_proc_2_input_4_InstMap_13;
                          MR_Word next_value_of_tscc_proc_2_input_5_Context_14;
                          MR_Word next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
                          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;

                          SubGoalDetism_47 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_46);
                          // direct tailcall eliminated
                          next_value_of_tscc_proc_2_input_1_GoalExpr_10 = SubGoalExpr_45;
                          next_value_of_tscc_proc_2_input_2_CodeModel_11 = CodeModel_11;
                          next_value_of_tscc_proc_2_input_3_Detism_12 = SubGoalDetism_47;
                          next_value_of_tscc_proc_2_input_4_InstMap_13 = InstMap_13;
                          next_value_of_tscc_proc_2_input_5_Context_14 = Context_14;
                          next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15 = MaybeSuccessExpr_15;
                          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = STATE_VARIABLE_Info_0_90;
                          tscc_proc_2_input_1_GoalExpr_10 = next_value_of_tscc_proc_2_input_1_GoalExpr_10;
                          tscc_proc_2_input_2_CodeModel_11 = next_value_of_tscc_proc_2_input_2_CodeModel_11;
                          tscc_proc_2_input_3_Detism_12 = next_value_of_tscc_proc_2_input_3_Detism_12;
                          tscc_proc_2_input_4_InstMap_13 = next_value_of_tscc_proc_2_input_4_InstMap_13;
                          tscc_proc_2_input_5_Context_14 = next_value_of_tscc_proc_2_input_5_Context_14;
                          tscc_proc_2_input_6_MaybeSuccessExpr_15 = next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
                          tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
                          goto top_of_proc_2;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_detism");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_complete_switch");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_complete_switch");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word next_value_of_tscc_proc_3_input_1_Goal_10 = SubGoal_22;
                          MR_Word next_value_of_tscc_proc_3_input_2_CodeModel_11 = CodeModel_11;
                          MR_Word next_value_of_tscc_proc_3_input_3_ScopeDetism_12 = Detism_12;
                          MR_Word next_value_of_tscc_proc_3_input_4_InstMap_13 = InstMap_13;
                          MR_Word next_value_of_tscc_proc_3_input_5_MaybeSuccessExpr_15 = MaybeSuccessExpr_15;
                          MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_0_90;

                          // direct tailcall eliminated
                          tscc_proc_3_input_1_Goal_10 = next_value_of_tscc_proc_3_input_1_Goal_10;
                          tscc_proc_3_input_2_CodeModel_11 = next_value_of_tscc_proc_3_input_2_CodeModel_11;
                          tscc_proc_3_input_3_ScopeDetism_12 = next_value_of_tscc_proc_3_input_3_ScopeDetism_12;
                          tscc_proc_3_input_4_InstMap_13 = next_value_of_tscc_proc_3_input_4_InstMap_13;
                          tscc_proc_3_input_5_MaybeSuccessExpr_15 = next_value_of_tscc_proc_3_input_5_MaybeSuccessExpr_15;
                          tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29;
                          goto top_of_proc_3;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "loop_control");
                            return;
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word Then_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word Else_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));
                MR_Word _Vars_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));

                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_116_101_95_95_91_54_93_95_48_10_p_0(CodeModel_11, InstMap_13, Cond_49, Then_50, Else_51, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "shorthand");
                  return;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_Code_12 = Statement_16;
      tscc_output_2_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_91;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Goal_10 = tscc_proc_3_input_1_Goal_10;
      MR_Word CodeModel_11 = tscc_proc_3_input_2_CodeModel_11;
      MR_Word ScopeDetism_12 = tscc_proc_3_input_3_ScopeDetism_12;
      MR_Word InstMap_13 = tscc_proc_3_input_4_InstMap_13;
      MR_Word MaybeSuccessExpr_15 = tscc_proc_3_input_5_MaybeSuccessExpr_15;
      MR_Word Statement_16;
      MR_Word STATE_VARIABLE_Info_0_29 = tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29;
      MR_Word STATE_VARIABLE_Info_30;
      MR_bool succeeded;
      MR_Word GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1)));
      MR_Word GoalCodeModel_20;
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0)));
      MR_Word _GoalContext_21;

      GoalCodeModel_20 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_19);
      _GoalContext_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
      succeeded = (GoalCodeModel_20 == (MR_Integer) 2);
      if (succeeded)
        succeeded = (CodeModel_11 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (ScopeDetism_12 == (MR_Integer) 7);
        if (succeeded)
        {
          MR_Word GoalStatement_22;
          MR_Word Var_32;
          MR_Word Var_33;

          erl_backend__erl_code_gen__erl_gen_goal_7_p_0(GoalCodeModel_20, InstMap_13, Goal_10, MaybeSuccessExpr_15, &GoalStatement_22, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_30);
          Var_33 = erl_backend__elds__elds_fail_0_f_0();
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_32, 0) = ((MR_Box) (Var_33));
          }
          Statement_16 = erl_backend__elds__join_exprs_2_f_0(GoalStatement_22, Var_32);
        }
        else
        {
          MR_Word PackedNonLocals_23;
          MR_Word AnyCase_24;
          MR_Word Catch_25;
          MR_Word Var_36;
          MR_Word Var_38;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_49;
          MR_Word GoalStatement_64;

          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(Goal_10, InstMap_13, (MR_Integer) 0, &GoalStatement_64, &PackedNonLocals_23, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_30);
          Var_42 = erl_backend__elds__elds_fail_0_f_0();
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_41, 0) = ((MR_Box) (Var_42));
          }
          {
            AnyCase_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), AnyCase_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), AnyCase_24, 1) = ((MR_Box) (Var_41));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (AnyCase_24));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_43 = erl_backend__elds__elds_throw_atom_0_f_0();
          Var_46 = erl_backend__elds__elds_commit_marker_0_f_0();
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (PackedNonLocals_23));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
          }
          Var_49 = erl_backend__elds__det_expr_1_f_0(MaybeSuccessExpr_15);
          {
            Catch_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Catch_25, 0) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(0), Catch_25, 1) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(0), Catch_25, 2) = ((MR_Box) (Var_49));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Catch_25));
          }
          {
            Statement_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Statement_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), Statement_16, 1) = ((MR_Box) (GoalStatement_64));
            MR_hl_field(MR_mktag(3), Statement_16, 2) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(3), Statement_16, 3) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(3), Statement_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
      }
      else
      {
        succeeded = (GoalCodeModel_20 == (MR_Integer) 2);
        if (succeeded)
          succeeded = (CodeModel_11 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word ResultsVar_26;
          MR_Word ResultsVarExpr_27;
          MR_Word TryExpr_28;
          MR_Word STATE_VARIABLE_Info_51_51;
          MR_Word Var_55;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word GoalStatement_65;
          MR_Word PackedNonLocals_66;
          MR_Word Catch_67;

          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(Goal_10, InstMap_13, (MR_Integer) 1, &GoalStatement_65, &PackedNonLocals_66, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_51_51);
          erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Results", &ResultsVar_26, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_30);
          ResultsVarExpr_27 = erl_backend__elds__expr_from_var_1_f_0(ResultsVar_26);
          Var_57 = erl_backend__elds__elds_throw_atom_0_f_0();
          Var_60 = erl_backend__elds__elds_commit_marker_0_f_0();
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ResultsVarExpr_27));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_61));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (Var_59));
          }
          {
            Catch_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Catch_67, 0) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), Catch_67, 1) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), Catch_67, 2) = ((MR_Box) (ResultsVarExpr_27));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Catch_67));
          }
          {
            TryExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TryExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), TryExpr_28, 1) = ((MR_Box) (GoalStatement_65));
            MR_hl_field(MR_mktag(3), TryExpr_28, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), TryExpr_28, 3) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(3), TryExpr_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Statement_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Statement_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Statement_16, 1) = ((MR_Box) (PackedNonLocals_66));
            MR_hl_field(MR_mktag(3), Statement_16, 2) = ((MR_Box) (TryExpr_28));
          }
        }
        else
        {
          MR_Word next_value_of_tscc_proc_1_input_1_CodeModel_8 = CodeModel_11;
          MR_Word next_value_of_tscc_proc_1_input_2_InstMap_9 = InstMap_13;
          MR_Word next_value_of_tscc_proc_1_input_3_Goal_10 = Goal_10;
          MR_Word next_value_of_tscc_proc_1_input_4_MaybeSuccessExpr0_11 = MaybeSuccessExpr_15;
          MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20 = STATE_VARIABLE_Info_0_29;

          // direct tailcall eliminated
          tscc_proc_1_input_1_CodeModel_8 = next_value_of_tscc_proc_1_input_1_CodeModel_8;
          tscc_proc_1_input_2_InstMap_9 = next_value_of_tscc_proc_1_input_2_InstMap_9;
          tscc_proc_1_input_3_Goal_10 = next_value_of_tscc_proc_1_input_3_Goal_10;
          tscc_proc_1_input_4_MaybeSuccessExpr0_11 = next_value_of_tscc_proc_1_input_4_MaybeSuccessExpr0_11;
          tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20;
          goto top_of_proc_1;
        }
      }
      tscc_output_1_Code_12 = Statement_16;
      tscc_output_2_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_30;
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_4_input_1_HeadVar__1_1;
      MR_Word CodeModel_2 = tscc_proc_4_input_2_CodeModel_2;
      MR_Word HeadVar__3_3 = tscc_proc_4_input_3_HeadVar__3_3;
      MR_Word HeadVar__5_5 = tscc_proc_4_input_4_HeadVar__5_5;
      MR_Word Statement_6;
      MR_Word STATE_VARIABLE_Info_0_7 = tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7;
      MR_Word STATE_VARIABLE_Info_8;

      if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        switch (CodeModel_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_disj\'/8", (MR_String) "\140fail\' has determinism \140det\'");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_Word Var_17;

              Var_17 = erl_backend__elds__elds_fail_0_f_0();
              {
                Statement_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Statement_6, 0) = ((MR_Box) (Var_17));
              }
            }
            break;
        }
        STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      }
      else
      {
        MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
        MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

        if ((Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word next_value_of_tscc_proc_1_input_1_CodeModel_8 = CodeModel_2;
          MR_Word next_value_of_tscc_proc_1_input_2_InstMap_9 = HeadVar__3_3;
          MR_Word next_value_of_tscc_proc_1_input_3_Goal_10 = Var_54;
          MR_Word next_value_of_tscc_proc_1_input_4_MaybeSuccessExpr0_11 = HeadVar__5_5;
          MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20 = STATE_VARIABLE_Info_0_7;

          // direct tailcall eliminated
          tscc_proc_1_input_1_CodeModel_8 = next_value_of_tscc_proc_1_input_1_CodeModel_8;
          tscc_proc_1_input_2_InstMap_9 = next_value_of_tscc_proc_1_input_2_InstMap_9;
          tscc_proc_1_input_3_Goal_10 = next_value_of_tscc_proc_1_input_3_Goal_10;
          tscc_proc_1_input_4_MaybeSuccessExpr0_11 = next_value_of_tscc_proc_1_input_4_MaybeSuccessExpr0_11;
          tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20;
          goto top_of_proc_1;
        }
        else
        {
          MR_Word NonLocalsBoundInGoals_42;
          MR_Word MaybeMakeClosure_43;
          MR_Word MaybeSuccessExpr_44;
          MR_Word InstMap_45;
          MR_Word DisjStatement_46;
          MR_Word STATE_VARIABLE_Info_50_50;
          MR_Word IsBound_59;
          MR_Word NonLocalsLists_60;

          {
            IsBound_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), IsBound_59, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), IsBound_59, 1) = ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0_2));
            MR_hl_field(MR_mktag(0), IsBound_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), IsBound_59, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_7));
            MR_hl_field(MR_mktag(0), IsBound_59, 4) = ((MR_Box) (HeadVar__3_3));
          }
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[3], IsBound_59, HeadVar__1_1, &NonLocalsLists_60);
          NonLocalsBoundInGoals_42 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocalsLists_60);
          erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(NonLocalsBoundInGoals_42, HeadVar__5_5, &MaybeMakeClosure_43, &MaybeSuccessExpr_44, HeadVar__3_3, &InstMap_45, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_50_50);
          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(HeadVar__1_1, CodeModel_2, InstMap_45, MaybeSuccessExpr_44, &DisjStatement_46, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_8);
          Statement_6 = erl_backend__elds__maybe_join_exprs1_2_f_0(MaybeMakeClosure_43, DisjStatement_46);
        }
      }
      tscc_output_1_Code_12 = Statement_6;
      tscc_output_2_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_8;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Code_12 = tscc_output_1_Code_12;
    *tscc_output_ptr_2_STATE_VARIABLE_Info_21 = tscc_output_2_STATE_VARIABLE_Info_21;
    return;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0(
  MR_Word tscc_proc_4_input_1_HeadVar__1_1,
  MR_Word tscc_proc_4_input_2_CodeModel_2,
  MR_Word tscc_proc_4_input_3_HeadVar__3_3,
  MR_Word tscc_proc_4_input_4_HeadVar__5_5,
  MR_Word * tscc_output_ptr_1_Code_12,
  MR_Word tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Info_21)
{
  {
    MR_Word tscc_proc_1_input_1_CodeModel_8;
    MR_Word tscc_proc_1_input_2_InstMap_9;
    MR_Word tscc_proc_1_input_3_Goal_10;
    MR_Word tscc_proc_1_input_4_MaybeSuccessExpr0_11;
    MR_Word tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20;
    MR_Word tscc_proc_2_input_1_GoalExpr_10;
    MR_Word tscc_proc_2_input_2_CodeModel_11;
    MR_Word tscc_proc_2_input_3_Detism_12;
    MR_Word tscc_proc_2_input_4_InstMap_13;
    MR_Word tscc_proc_2_input_5_Context_14;
    MR_Word tscc_proc_2_input_6_MaybeSuccessExpr_15;
    MR_Word tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
    MR_Word tscc_proc_3_input_1_Goal_10;
    MR_Word tscc_proc_3_input_2_CodeModel_11;
    MR_Word tscc_proc_3_input_3_ScopeDetism_12;
    MR_Word tscc_proc_3_input_4_InstMap_13;
    MR_Word tscc_proc_3_input_5_MaybeSuccessExpr_15;
    MR_Word tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29;
    MR_Word tscc_output_1_Code_12;
    MR_Word tscc_output_2_STATE_VARIABLE_Info_21;

    // The code for TSCC PROC 4: pred erl_backend.erl_code_gen.UnusedArgs__pred__erl_gen_disj__[4]_0/8-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred erl_backend.erl_code_gen.erl_gen_goal/7-0
    // proc 2 in TSCC: pred erl_backend.erl_code_gen.erl_gen_goal_expr/9-0
    // proc 3 in TSCC: pred erl_backend.erl_code_gen.UnusedArgs__pred__erl_gen_commit__[5]_0/9-0
    // proc 4 in TSCC: pred erl_backend.erl_code_gen.UnusedArgs__pred__erl_gen_disj__[4]_0/8-0

    goto top_of_proc_4;
  top_of_proc_1:;
    {
      MR_Word CodeModel_8 = tscc_proc_1_input_1_CodeModel_8;
      MR_Word InstMap_9 = tscc_proc_1_input_2_InstMap_9;
      MR_Word Goal_10 = tscc_proc_1_input_3_Goal_10;
      MR_Word MaybeSuccessExpr0_11 = tscc_proc_1_input_4_MaybeSuccessExpr0_11;
      MR_Word Code_12;
      MR_Word STATE_VARIABLE_Info_0_20 = tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20;
      MR_Word STATE_VARIABLE_Info_21;
      MR_bool succeeded;
      MR_Word GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0)));
      MR_Word GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1)));
      MR_Word Context_16;
      MR_Word GoalCodeModel_17;

      Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_15);
      GoalCodeModel_17 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_15);
      switch (CodeModel_8) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (GoalCodeModel_17) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
          break;
        case (MR_Integer) 1:
          succeeded = (GoalCodeModel_17 == (MR_Integer) 2);
          break;
      }
      if (succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal\'/7", (MR_String) "code model mismatch");
          return;
        }
      }
      else
      {
        MR_Word Determinism_18;
        MR_Word MaybeSuccessExpr_19;
        MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_10;
        MR_Word next_value_of_tscc_proc_2_input_2_CodeModel_11;
        MR_Word next_value_of_tscc_proc_2_input_3_Detism_12;
        MR_Word next_value_of_tscc_proc_2_input_4_InstMap_13;
        MR_Word next_value_of_tscc_proc_2_input_5_Context_14;
        MR_Word next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
        MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;

        Determinism_18 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_15);
        switch (Determinism_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 1:
            MaybeSuccessExpr_19 = MaybeSuccessExpr0_11;
            break;
          case (MR_Integer) 6:
            MaybeSuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_25;
              MR_Word Var_26;

              Var_26 = erl_backend__elds__elds_fail_0_f_0();
              {
                Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (Var_26));
              }
              {
                MaybeSuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeSuccessExpr_19, 0) = ((MR_Box) (Var_25));
              }
            }
            break;
        }
        // direct tailcall eliminated
        next_value_of_tscc_proc_2_input_1_GoalExpr_10 = GoalExpr_14;
        next_value_of_tscc_proc_2_input_2_CodeModel_11 = GoalCodeModel_17;
        next_value_of_tscc_proc_2_input_3_Detism_12 = Determinism_18;
        next_value_of_tscc_proc_2_input_4_InstMap_13 = InstMap_9;
        next_value_of_tscc_proc_2_input_5_Context_14 = Context_16;
        next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15 = MaybeSuccessExpr_19;
        next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = STATE_VARIABLE_Info_0_20;
        tscc_proc_2_input_1_GoalExpr_10 = next_value_of_tscc_proc_2_input_1_GoalExpr_10;
        tscc_proc_2_input_2_CodeModel_11 = next_value_of_tscc_proc_2_input_2_CodeModel_11;
        tscc_proc_2_input_3_Detism_12 = next_value_of_tscc_proc_2_input_3_Detism_12;
        tscc_proc_2_input_4_InstMap_13 = next_value_of_tscc_proc_2_input_4_InstMap_13;
        tscc_proc_2_input_5_Context_14 = next_value_of_tscc_proc_2_input_5_Context_14;
        tscc_proc_2_input_6_MaybeSuccessExpr_15 = next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
        tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
        goto top_of_proc_2;
      }
      tscc_output_1_Code_12 = Code_12;
      tscc_output_2_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_21;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word GoalExpr_10 = tscc_proc_2_input_1_GoalExpr_10;
      MR_Word CodeModel_11 = tscc_proc_2_input_2_CodeModel_11;
      MR_Word Detism_12 = tscc_proc_2_input_3_Detism_12;
      MR_Word InstMap_13 = tscc_proc_2_input_4_InstMap_13;
      MR_Word Context_14 = tscc_proc_2_input_5_Context_14;
      MR_Word MaybeSuccessExpr_15 = tscc_proc_2_input_6_MaybeSuccessExpr_15;
      MR_Word Statement_16;
      MR_Word STATE_VARIABLE_Info_0_90 = tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
      MR_Word STATE_VARIABLE_Info_91;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) GoalExpr_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_128 = (MR_Word) MR_body(((MR_Word) GoalExpr_10), (MR_Integer) 0);

            erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_110_101_103_97_116_105_111_110_95_95_91_52_93_95_48_8_p_0(SubGoal_128, CodeModel_11, InstMap_13, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 3)));
            MR_Word _LHS_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 0)));
            MR_Word _RHS_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 1)));
            MR_Word _Mode_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 2)));
            MR_Word _UnifyContext_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 4)));

            erl_backend__erl_unify_gen__erl_gen_unification_7_p_0(Unification_80, CodeModel_11, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0)));
            MR_Integer ProcId_71 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 1)));
            MR_Word ArgVars_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 2)));
            MR_Word BuiltinState_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 3)));
            MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 4)));
            MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 5)));

            switch (BuiltinState_73) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                erl_backend__erl_call_gen__erl_gen_builtin_9_p_0(PredId_70, ProcId_71, ArgVars_72, CodeModel_11, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ActualArgTypes_76;

                  erl_backend__erl_code_util__erl_variable_types_3_p_0(STATE_VARIABLE_Info_0_90, ArgVars_72, &ActualArgTypes_76);
                  erl_backend__erl_call_gen__erl_gen_call_10_p_0(PredId_70, ProcId_71, ArgVars_72, ActualArgTypes_76, CodeModel_11, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GenericCall_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word Vars_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word Modes_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word CallDetism_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 5)));
                MR_Word CallCodeModel_59;
                MR_Word Var_99;
                MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));

                hlds__code_model__determinism_to_code_model_2_p_0(CallDetism_58, &CallCodeModel_59);
                {
                  Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (CodeModel_11));
                  MR_hl_field(MR_mktag(0), Var_99, 4) = ((MR_Box) (CallCodeModel_59));
                }
                mercury__require__expect_4_p_0(Var_99, (MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "code model mismatch");
                switch (MR_tag((MR_Word) GenericCall_54)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    erl_backend__erl_call_gen__erl_gen_higher_order_call_9_p_0(GenericCall_54, Vars_55, Modes_56, CallDetism_58, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                    break;
                  case (MR_Integer) 1:
                    erl_backend__erl_call_gen__erl_gen_class_method_call_9_p_0(GenericCall_54, Vars_55, Modes_56, CallDetism_58, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "event_calls in erlang backend");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    erl_backend__erl_call_gen__erl_gen_cast_6_p_0(Context_14, Vars_55, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Args_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));
                MR_Word MaybeTraceRuntimeCond_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 6)));
                MR_Word PragmaImpl_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 7)));
                MR_Word _Attributes_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word _PredId_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Integer _ProcId_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word _ExtraArgs_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 5)));

                erl_backend__erl_call_gen__erl_gen_foreign_proc_call_9_p_0(Args_85, MaybeTraceRuntimeCond_87, PragmaImpl_88, CodeModel_11, Context_14, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word _ConjType_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));

                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_95_91_53_93_95_48_9_p_0(Goals_53, CodeModel_11, Detism_12, InstMap_13, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_4_input_1_HeadVar__1_1 = Goals_129;
                MR_Word next_value_of_tscc_proc_4_input_2_CodeModel_2 = CodeModel_11;
                MR_Word next_value_of_tscc_proc_4_input_3_HeadVar__3_3 = InstMap_13;
                MR_Word next_value_of_tscc_proc_4_input_4_HeadVar__5_5 = MaybeSuccessExpr_15;
                MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_0_90;

                // direct tailcall eliminated
                tscc_proc_4_input_1_HeadVar__1_1 = next_value_of_tscc_proc_4_input_1_HeadVar__1_1;
                tscc_proc_4_input_2_CodeModel_2 = next_value_of_tscc_proc_4_input_2_CodeModel_2;
                tscc_proc_4_input_3_HeadVar__3_3 = next_value_of_tscc_proc_4_input_3_HeadVar__3_3;
                tscc_proc_4_input_4_HeadVar__5_5 = next_value_of_tscc_proc_4_input_4_HeadVar__5_5;
                tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word CanFail_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word CasesList_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));

                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0(Var_18, CanFail_19, CasesList_20, CodeModel_11, InstMap_13, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word SubGoal_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));

                switch (MR_tag((MR_Word) Reason_21)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word SubGoalExpr_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_22, (MR_Integer) 0)));
                      MR_Word SubGoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_22, (MR_Integer) 1)));
                      MR_Word SubGoalDetism_47;
                      MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_10;
                      MR_Word next_value_of_tscc_proc_2_input_2_CodeModel_11;
                      MR_Word next_value_of_tscc_proc_2_input_3_Detism_12;
                      MR_Word next_value_of_tscc_proc_2_input_4_InstMap_13;
                      MR_Word next_value_of_tscc_proc_2_input_5_Context_14;
                      MR_Word next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
                      MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;

                      SubGoalDetism_47 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_46);
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_2_input_1_GoalExpr_10 = SubGoalExpr_45;
                      next_value_of_tscc_proc_2_input_2_CodeModel_11 = CodeModel_11;
                      next_value_of_tscc_proc_2_input_3_Detism_12 = SubGoalDetism_47;
                      next_value_of_tscc_proc_2_input_4_InstMap_13 = InstMap_13;
                      next_value_of_tscc_proc_2_input_5_Context_14 = Context_14;
                      next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15 = MaybeSuccessExpr_15;
                      next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = STATE_VARIABLE_Info_0_90;
                      tscc_proc_2_input_1_GoalExpr_10 = next_value_of_tscc_proc_2_input_1_GoalExpr_10;
                      tscc_proc_2_input_2_CodeModel_11 = next_value_of_tscc_proc_2_input_2_CodeModel_11;
                      tscc_proc_2_input_3_Detism_12 = next_value_of_tscc_proc_2_input_3_Detism_12;
                      tscc_proc_2_input_4_InstMap_13 = next_value_of_tscc_proc_2_input_4_InstMap_13;
                      tscc_proc_2_input_5_Context_14 = next_value_of_tscc_proc_2_input_5_Context_14;
                      tscc_proc_2_input_6_MaybeSuccessExpr_15 = next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
                      tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
                      goto top_of_proc_2;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word next_value_of_tscc_proc_3_input_1_Goal_10 = SubGoal_22;
                      MR_Word next_value_of_tscc_proc_3_input_2_CodeModel_11 = CodeModel_11;
                      MR_Word next_value_of_tscc_proc_3_input_3_ScopeDetism_12 = Detism_12;
                      MR_Word next_value_of_tscc_proc_3_input_4_InstMap_13 = InstMap_13;
                      MR_Word next_value_of_tscc_proc_3_input_5_MaybeSuccessExpr_15 = MaybeSuccessExpr_15;
                      MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_0_90;

                      // direct tailcall eliminated
                      tscc_proc_3_input_1_Goal_10 = next_value_of_tscc_proc_3_input_1_Goal_10;
                      tscc_proc_3_input_2_CodeModel_11 = next_value_of_tscc_proc_3_input_2_CodeModel_11;
                      tscc_proc_3_input_3_ScopeDetism_12 = next_value_of_tscc_proc_3_input_3_ScopeDetism_12;
                      tscc_proc_3_input_4_InstMap_13 = next_value_of_tscc_proc_3_input_4_InstMap_13;
                      tscc_proc_3_input_5_MaybeSuccessExpr_15 = next_value_of_tscc_proc_3_input_5_MaybeSuccessExpr_15;
                      tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29;
                      goto top_of_proc_3;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_21, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 5:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                        {
                          MR_Word SubGoalExpr_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_22, (MR_Integer) 0)));
                          MR_Word SubGoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_22, (MR_Integer) 1)));
                          MR_Word SubGoalDetism_47;
                          MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_10;
                          MR_Word next_value_of_tscc_proc_2_input_2_CodeModel_11;
                          MR_Word next_value_of_tscc_proc_2_input_3_Detism_12;
                          MR_Word next_value_of_tscc_proc_2_input_4_InstMap_13;
                          MR_Word next_value_of_tscc_proc_2_input_5_Context_14;
                          MR_Word next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
                          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;

                          SubGoalDetism_47 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_46);
                          // direct tailcall eliminated
                          next_value_of_tscc_proc_2_input_1_GoalExpr_10 = SubGoalExpr_45;
                          next_value_of_tscc_proc_2_input_2_CodeModel_11 = CodeModel_11;
                          next_value_of_tscc_proc_2_input_3_Detism_12 = SubGoalDetism_47;
                          next_value_of_tscc_proc_2_input_4_InstMap_13 = InstMap_13;
                          next_value_of_tscc_proc_2_input_5_Context_14 = Context_14;
                          next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15 = MaybeSuccessExpr_15;
                          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = STATE_VARIABLE_Info_0_90;
                          tscc_proc_2_input_1_GoalExpr_10 = next_value_of_tscc_proc_2_input_1_GoalExpr_10;
                          tscc_proc_2_input_2_CodeModel_11 = next_value_of_tscc_proc_2_input_2_CodeModel_11;
                          tscc_proc_2_input_3_Detism_12 = next_value_of_tscc_proc_2_input_3_Detism_12;
                          tscc_proc_2_input_4_InstMap_13 = next_value_of_tscc_proc_2_input_4_InstMap_13;
                          tscc_proc_2_input_5_Context_14 = next_value_of_tscc_proc_2_input_5_Context_14;
                          tscc_proc_2_input_6_MaybeSuccessExpr_15 = next_value_of_tscc_proc_2_input_6_MaybeSuccessExpr_15;
                          tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Info_0_90;
                          goto top_of_proc_2;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_detism");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_complete_switch");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_complete_switch");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word next_value_of_tscc_proc_3_input_1_Goal_10 = SubGoal_22;
                          MR_Word next_value_of_tscc_proc_3_input_2_CodeModel_11 = CodeModel_11;
                          MR_Word next_value_of_tscc_proc_3_input_3_ScopeDetism_12 = Detism_12;
                          MR_Word next_value_of_tscc_proc_3_input_4_InstMap_13 = InstMap_13;
                          MR_Word next_value_of_tscc_proc_3_input_5_MaybeSuccessExpr_15 = MaybeSuccessExpr_15;
                          MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_0_90;

                          // direct tailcall eliminated
                          tscc_proc_3_input_1_Goal_10 = next_value_of_tscc_proc_3_input_1_Goal_10;
                          tscc_proc_3_input_2_CodeModel_11 = next_value_of_tscc_proc_3_input_2_CodeModel_11;
                          tscc_proc_3_input_3_ScopeDetism_12 = next_value_of_tscc_proc_3_input_3_ScopeDetism_12;
                          tscc_proc_3_input_4_InstMap_13 = next_value_of_tscc_proc_3_input_4_InstMap_13;
                          tscc_proc_3_input_5_MaybeSuccessExpr_15 = next_value_of_tscc_proc_3_input_5_MaybeSuccessExpr_15;
                          tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29;
                          goto top_of_proc_3;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "loop_control");
                            return;
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word Then_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word Else_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));
                MR_Word _Vars_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));

                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_116_101_95_95_91_54_93_95_48_10_p_0(CodeModel_11, InstMap_13, Cond_49, Then_50, Else_51, MaybeSuccessExpr_15, &Statement_16, STATE_VARIABLE_Info_0_90, &STATE_VARIABLE_Info_91);
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "shorthand");
                  return;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_Code_12 = Statement_16;
      tscc_output_2_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_91;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Goal_10 = tscc_proc_3_input_1_Goal_10;
      MR_Word CodeModel_11 = tscc_proc_3_input_2_CodeModel_11;
      MR_Word ScopeDetism_12 = tscc_proc_3_input_3_ScopeDetism_12;
      MR_Word InstMap_13 = tscc_proc_3_input_4_InstMap_13;
      MR_Word MaybeSuccessExpr_15 = tscc_proc_3_input_5_MaybeSuccessExpr_15;
      MR_Word Statement_16;
      MR_Word STATE_VARIABLE_Info_0_29 = tscc_proc_3_input_6_STATE_VARIABLE_Info_0_29;
      MR_Word STATE_VARIABLE_Info_30;
      MR_bool succeeded;
      MR_Word GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1)));
      MR_Word GoalCodeModel_20;
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0)));
      MR_Word _GoalContext_21;

      GoalCodeModel_20 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_19);
      _GoalContext_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
      succeeded = (GoalCodeModel_20 == (MR_Integer) 2);
      if (succeeded)
        succeeded = (CodeModel_11 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (ScopeDetism_12 == (MR_Integer) 7);
        if (succeeded)
        {
          MR_Word GoalStatement_22;
          MR_Word Var_32;
          MR_Word Var_33;

          erl_backend__erl_code_gen__erl_gen_goal_7_p_0(GoalCodeModel_20, InstMap_13, Goal_10, MaybeSuccessExpr_15, &GoalStatement_22, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_30);
          Var_33 = erl_backend__elds__elds_fail_0_f_0();
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_32, 0) = ((MR_Box) (Var_33));
          }
          Statement_16 = erl_backend__elds__join_exprs_2_f_0(GoalStatement_22, Var_32);
        }
        else
        {
          MR_Word PackedNonLocals_23;
          MR_Word AnyCase_24;
          MR_Word Catch_25;
          MR_Word Var_36;
          MR_Word Var_38;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_49;
          MR_Word GoalStatement_64;

          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(Goal_10, InstMap_13, (MR_Integer) 0, &GoalStatement_64, &PackedNonLocals_23, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_30);
          Var_42 = erl_backend__elds__elds_fail_0_f_0();
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_41, 0) = ((MR_Box) (Var_42));
          }
          {
            AnyCase_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), AnyCase_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), AnyCase_24, 1) = ((MR_Box) (Var_41));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (AnyCase_24));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_43 = erl_backend__elds__elds_throw_atom_0_f_0();
          Var_46 = erl_backend__elds__elds_commit_marker_0_f_0();
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (PackedNonLocals_23));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
          }
          Var_49 = erl_backend__elds__det_expr_1_f_0(MaybeSuccessExpr_15);
          {
            Catch_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Catch_25, 0) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(0), Catch_25, 1) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(0), Catch_25, 2) = ((MR_Box) (Var_49));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Catch_25));
          }
          {
            Statement_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Statement_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), Statement_16, 1) = ((MR_Box) (GoalStatement_64));
            MR_hl_field(MR_mktag(3), Statement_16, 2) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(3), Statement_16, 3) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(3), Statement_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
      }
      else
      {
        succeeded = (GoalCodeModel_20 == (MR_Integer) 2);
        if (succeeded)
          succeeded = (CodeModel_11 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word ResultsVar_26;
          MR_Word ResultsVarExpr_27;
          MR_Word TryExpr_28;
          MR_Word STATE_VARIABLE_Info_51_51;
          MR_Word Var_55;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word GoalStatement_65;
          MR_Word PackedNonLocals_66;
          MR_Word Catch_67;

          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(Goal_10, InstMap_13, (MR_Integer) 1, &GoalStatement_65, &PackedNonLocals_66, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_51_51);
          erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Results", &ResultsVar_26, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_30);
          ResultsVarExpr_27 = erl_backend__elds__expr_from_var_1_f_0(ResultsVar_26);
          Var_57 = erl_backend__elds__elds_throw_atom_0_f_0();
          Var_60 = erl_backend__elds__elds_commit_marker_0_f_0();
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ResultsVarExpr_27));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_61));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (Var_59));
          }
          {
            Catch_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Catch_67, 0) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), Catch_67, 1) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), Catch_67, 2) = ((MR_Box) (ResultsVarExpr_27));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Catch_67));
          }
          {
            TryExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TryExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), TryExpr_28, 1) = ((MR_Box) (GoalStatement_65));
            MR_hl_field(MR_mktag(3), TryExpr_28, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), TryExpr_28, 3) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(3), TryExpr_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Statement_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Statement_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Statement_16, 1) = ((MR_Box) (PackedNonLocals_66));
            MR_hl_field(MR_mktag(3), Statement_16, 2) = ((MR_Box) (TryExpr_28));
          }
        }
        else
        {
          MR_Word next_value_of_tscc_proc_1_input_1_CodeModel_8 = CodeModel_11;
          MR_Word next_value_of_tscc_proc_1_input_2_InstMap_9 = InstMap_13;
          MR_Word next_value_of_tscc_proc_1_input_3_Goal_10 = Goal_10;
          MR_Word next_value_of_tscc_proc_1_input_4_MaybeSuccessExpr0_11 = MaybeSuccessExpr_15;
          MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20 = STATE_VARIABLE_Info_0_29;

          // direct tailcall eliminated
          tscc_proc_1_input_1_CodeModel_8 = next_value_of_tscc_proc_1_input_1_CodeModel_8;
          tscc_proc_1_input_2_InstMap_9 = next_value_of_tscc_proc_1_input_2_InstMap_9;
          tscc_proc_1_input_3_Goal_10 = next_value_of_tscc_proc_1_input_3_Goal_10;
          tscc_proc_1_input_4_MaybeSuccessExpr0_11 = next_value_of_tscc_proc_1_input_4_MaybeSuccessExpr0_11;
          tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20;
          goto top_of_proc_1;
        }
      }
      tscc_output_1_Code_12 = Statement_16;
      tscc_output_2_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_30;
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_4_input_1_HeadVar__1_1;
      MR_Word CodeModel_2 = tscc_proc_4_input_2_CodeModel_2;
      MR_Word HeadVar__3_3 = tscc_proc_4_input_3_HeadVar__3_3;
      MR_Word HeadVar__5_5 = tscc_proc_4_input_4_HeadVar__5_5;
      MR_Word Statement_6;
      MR_Word STATE_VARIABLE_Info_0_7 = tscc_proc_4_input_5_STATE_VARIABLE_Info_0_7;
      MR_Word STATE_VARIABLE_Info_8;

      if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        switch (CodeModel_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_disj\'/8", (MR_String) "\140fail\' has determinism \140det\'");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_Word Var_17;

              Var_17 = erl_backend__elds__elds_fail_0_f_0();
              {
                Statement_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Statement_6, 0) = ((MR_Box) (Var_17));
              }
            }
            break;
        }
        STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      }
      else
      {
        MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
        MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

        if ((Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word next_value_of_tscc_proc_1_input_1_CodeModel_8 = CodeModel_2;
          MR_Word next_value_of_tscc_proc_1_input_2_InstMap_9 = HeadVar__3_3;
          MR_Word next_value_of_tscc_proc_1_input_3_Goal_10 = Var_54;
          MR_Word next_value_of_tscc_proc_1_input_4_MaybeSuccessExpr0_11 = HeadVar__5_5;
          MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20 = STATE_VARIABLE_Info_0_7;

          // direct tailcall eliminated
          tscc_proc_1_input_1_CodeModel_8 = next_value_of_tscc_proc_1_input_1_CodeModel_8;
          tscc_proc_1_input_2_InstMap_9 = next_value_of_tscc_proc_1_input_2_InstMap_9;
          tscc_proc_1_input_3_Goal_10 = next_value_of_tscc_proc_1_input_3_Goal_10;
          tscc_proc_1_input_4_MaybeSuccessExpr0_11 = next_value_of_tscc_proc_1_input_4_MaybeSuccessExpr0_11;
          tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_20;
          goto top_of_proc_1;
        }
        else
        {
          MR_Word NonLocalsBoundInGoals_42;
          MR_Word MaybeMakeClosure_43;
          MR_Word MaybeSuccessExpr_44;
          MR_Word InstMap_45;
          MR_Word DisjStatement_46;
          MR_Word STATE_VARIABLE_Info_50_50;
          MR_Word IsBound_59;
          MR_Word NonLocalsLists_60;

          {
            IsBound_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), IsBound_59, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), IsBound_59, 1) = ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0_2));
            MR_hl_field(MR_mktag(0), IsBound_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), IsBound_59, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_7));
            MR_hl_field(MR_mktag(0), IsBound_59, 4) = ((MR_Box) (HeadVar__3_3));
          }
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[3], IsBound_59, HeadVar__1_1, &NonLocalsLists_60);
          NonLocalsBoundInGoals_42 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocalsLists_60);
          erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(NonLocalsBoundInGoals_42, HeadVar__5_5, &MaybeMakeClosure_43, &MaybeSuccessExpr_44, HeadVar__3_3, &InstMap_45, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_50_50);
          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(HeadVar__1_1, CodeModel_2, InstMap_45, MaybeSuccessExpr_44, &DisjStatement_46, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_8);
          Statement_6 = erl_backend__elds__maybe_join_exprs1_2_f_0(MaybeMakeClosure_43, DisjStatement_46);
        }
      }
      tscc_output_1_Code_12 = Statement_6;
      tscc_output_2_STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_8;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Code_12 = tscc_output_1_Code_12;
    *tscc_output_ptr_2_STATE_VARIABLE_Info_21 = tscc_output_2_STATE_VARIABLE_Info_21;
    return;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeModel_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__5_5,
  MR_Word * Statement_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      switch (CodeModel_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_disjunct\'/8", (MR_String) "\140fail\' has determinism \140det\'");
              return;
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word Var_17;

            Var_17 = erl_backend__elds__elds_fail_0_f_0();
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *Statement_6 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_17));
            }
          }
          break;
      }
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    }
    else
    {
      MR_Word First_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Rest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      switch (CodeModel_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word FirstGoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), First_21, (MR_Integer) 1)));
            MR_Word FirstCodeModel_31;
            MR_Word FirstDeterminism_32;
            MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), First_21, (MR_Integer) 0)));

            FirstCodeModel_31 = hlds__code_model__goal_info_get_code_model_1_f_0(FirstGoalInfo_30);
            FirstDeterminism_32 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(FirstGoalInfo_30);
            switch (FirstCodeModel_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word MaybeSuccessExprForFirst_33;
                  MR_Word STATE_VARIABLE_Info_72_72;

                  erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(HeadVar__3_3, First_21, HeadVar__5_5, &MaybeSuccessExprForFirst_33, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_72_72);
                  erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 0, HeadVar__3_3, First_21, MaybeSuccessExprForFirst_33, Statement_6, STATE_VARIABLE_Info_72_72, STATE_VARIABLE_Info_8);
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_disjunct\'/8", (MR_String) "model_non disj in model_det disjunction");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word FirstVarsSet_34;
                  MR_Word FirstVars_35;
                  MR_Word FirstVarsTerm_36;
                  MR_Word FirstStatement0_37;
                  MR_Word RestStatement_38;
                  MR_Word Subn_39;
                  MR_Word FirstStatement_40;
                  MR_Word Var_57;
                  MR_Word Var_59;
                  MR_Word STATE_VARIABLE_Info_60_60;
                  MR_Word Var_61;
                  MR_Word STATE_VARIABLE_Info_62_62;
                  MR_Word STATE_VARIABLE_Info_63_63;

                  erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(STATE_VARIABLE_Info_0_7, HeadVar__3_3, First_21, &FirstVarsSet_34);
                  FirstVars_35 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, FirstVarsSet_34);
                  Var_57 = erl_backend__elds__exprs_from_vars_1_f_0(FirstVars_35);
                  {
                    FirstVarsTerm_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), FirstVarsTerm_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                    MR_hl_field(MR_mktag(3), FirstVarsTerm_36, 1) = ((MR_Box) (Var_57));
                  }
                  {
                    Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (FirstVarsTerm_36));
                  }
                  {
                    Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_61));
                  }
                  erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, HeadVar__3_3, First_21, Var_59, &FirstStatement0_37, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_60_60);
                  erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(Rest_22, CodeModel_2, HeadVar__3_3, HeadVar__5_5, &RestStatement_38, STATE_VARIABLE_Info_60_60, &STATE_VARIABLE_Info_62_62);
                  erl_backend__erl_code_util__erl_create_renaming_4_p_0(FirstVars_35, &Subn_39, STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_63_63);
                  erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_39, FirstStatement0_37, &FirstStatement_40);
                  succeeded = (FirstDeterminism_32 == (MR_Integer) 7);
                  if (succeeded)
                  {
                    *Statement_6 = erl_backend__elds__join_exprs_2_f_0(FirstStatement0_37, RestStatement_38);
                    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_63_63;
                  }
                  else
                  {
                    MR_Word MaybeSuccessExprForFirst_75;
                    MR_Word Var_65;
                    MR_Word Var_66;
                    MR_Word Var_85;
                    MR_Word Var_86;

                    erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(HeadVar__3_3, First_21, HeadVar__5_5, &MaybeSuccessExprForFirst_75, STATE_VARIABLE_Info_63_63, STATE_VARIABLE_Info_8);
                    succeeded = ((MR_tag((MR_Word) MaybeSuccessExprForFirst_75)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSuccessExprForFirst_75, (MR_Integer) 0)));
                      succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_mktag((MR_Integer) 2)));
                      if (succeeded)
                      {
                        Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_65, (MR_Integer) 0)));
                        succeeded = erl_backend__elds____Unify____elds_term_0_0(FirstVarsTerm_36, Var_85);
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) RestStatement_38)) == (MR_mktag((MR_Integer) 2)));
                          if (succeeded)
                          {
                            Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), RestStatement_38, (MR_Integer) 0)));
                            Var_86 = erl_backend__elds__elds_fail_0_f_0();
                            succeeded = erl_backend__elds____Unify____elds_term_0_0(Var_66, Var_86);
                          }
                        }
                      }
                    }
                    if (succeeded)
                      *Statement_6 = FirstStatement_40;
                    else
                    {
                      MR_Word Statement0_41;
                      MR_Word SucceedCase_42;
                      MR_Word FailCase_43;
                      MR_Word Var_67;
                      MR_Word Var_68;
                      MR_Word Var_70;
                      MR_Word Var_71;

                      Var_70 = erl_backend__elds__expr_or_void_1_f_0(MaybeSuccessExprForFirst_75);
                      {
                        SucceedCase_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), SucceedCase_42, 0) = ((MR_Box) (FirstVarsTerm_36));
                        MR_hl_field(MR_mktag(0), SucceedCase_42, 1) = ((MR_Box) (Var_70));
                      }
                      Var_71 = erl_backend__elds__elds_fail_0_f_0();
                      {
                        FailCase_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), FailCase_43, 0) = ((MR_Box) (Var_71));
                        MR_hl_field(MR_mktag(0), FailCase_43, 1) = ((MR_Box) (RestStatement_38));
                      }
                      {
                        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (FailCase_43));
                        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (SucceedCase_42));
                        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_68));
                      }
                      {
                        Statement0_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Statement0_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), Statement0_41, 1) = ((MR_Box) (FirstStatement_40));
                        MR_hl_field(MR_mktag(3), Statement0_41, 2) = ((MR_Box) (Var_67));
                      }
                      erl_backend__erl_code_util__maybe_simplify_nested_cases_2_p_0(Statement0_41, Statement_6);
                    }
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Subst_44;
            MR_Word RestStatements_45;
            MR_Word STATE_VARIABLE_Info_48_48;
            MR_Word STATE_VARIABLE_Info_50_50;
            MR_Word STATE_VARIABLE_Info_51_51;
            MR_Word MaybeSuccessExprForFirst_78;
            MR_Word FirstVarsSet_79;
            MR_Word FirstVars_80;
            MR_Word FirstStatement0_81;
            MR_Word FirstStatement_82;

            erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(HeadVar__3_3, First_21, HeadVar__5_5, &MaybeSuccessExprForFirst_78, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_48_48);
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 2, HeadVar__3_3, First_21, MaybeSuccessExprForFirst_78, &FirstStatement0_81, STATE_VARIABLE_Info_48_48, &STATE_VARIABLE_Info_50_50);
            erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(STATE_VARIABLE_Info_50_50, HeadVar__3_3, First_21, &FirstVarsSet_79);
            FirstVars_80 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, FirstVarsSet_79);
            erl_backend__erl_code_util__erl_create_renaming_4_p_0(FirstVars_80, &Subst_44, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_51_51);
            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subst_44, FirstStatement0_81, &FirstStatement_82);
            erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(Rest_22, (MR_Integer) 2, HeadVar__3_3, HeadVar__5_5, &RestStatements_45, STATE_VARIABLE_Info_51_51, STATE_VARIABLE_Info_8);
            *Statement_6 = erl_backend__elds__join_exprs_2_f_0(FirstStatement_82, RestStatements_45);
          }
          break;
      }
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeModel_2,
  MR_Word HeadVar__3_3,
  MR_Word MaybeSuccessExpr_5,
  MR_Word * Statement_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    switch (CodeModel_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Statement_6 = erl_backend__elds__expr_or_void_1_f_0(MaybeSuccessExpr_5);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        *Statement_6 = erl_backend__elds__det_expr_1_f_0(MaybeSuccessExpr_5);
        break;
    }
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
  }
  else
  {
    MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    if ((Var_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      erl_backend__erl_code_gen__erl_gen_goal_7_p_0(CodeModel_2, HeadVar__3_3, Var_85, MaybeSuccessExpr_5, Statement_6, STATE_VARIABLE_Info_0_7, STATE_VARIABLE_Info_8);
    else
    {
      MR_Word FirstGoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_85, (MR_Integer) 1)));
      MR_Word FirstDeterminism_40;
      MR_Word FirstMaxSolns_42;
      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_85, (MR_Integer) 0)));
      MR_Word Var_41;

      FirstDeterminism_40 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(FirstGoalInfo_39);
      parse_tree__prog_data__determinism_components_3_p_0(FirstDeterminism_40, &Var_41, &FirstMaxSolns_42);
      switch (FirstMaxSolns_42) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word FirstCodeModel_43;
            MR_Word InstMap1_44;

            hlds__code_model__determinism_to_code_model_2_p_0(FirstDeterminism_40, &FirstCodeModel_43);
            hlds__goal_util__update_instmap_3_p_0(Var_85, HeadVar__3_3, &InstMap1_44);
            switch (FirstCodeModel_43) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word FirstStatement_45;
                  MR_Word RestStatement_46;
                  MR_Word STATE_VARIABLE_Info_76_76;

                  erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 0, HeadVar__3_3, Var_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &FirstStatement_45, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_76_76);
                  erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(Var_84, CodeModel_2, InstMap1_44, MaybeSuccessExpr_5, &RestStatement_46, STATE_VARIABLE_Info_76_76, STATE_VARIABLE_Info_8);
                  *Statement_6 = erl_backend__elds__join_exprs_2_f_0(FirstStatement_45, RestStatement_46);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word NonLocalsSet_47;
                  MR_Word NonLocals_48;
                  MR_Word SucceedFunc0_49;
                  MR_Word Subst_50;
                  MR_Word SucceedFunc_51;
                  MR_Word SucceedVar_52;
                  MR_Word InstMap_53;
                  MR_Word SucceedVarExpr_54;
                  MR_Word MakeSucceed_55;
                  MR_Word CallSucceed_56;
                  MR_Word STATE_VARIABLE_Info_59_59;
                  MR_Word Var_60;
                  MR_Word Var_61;
                  MR_Word STATE_VARIABLE_Info_62_62;
                  MR_Word STATE_VARIABLE_Info_64_64;
                  MR_Word Var_65;
                  MR_Word Var_66;
                  MR_Word Var_68;
                  MR_Word FirstStatement_81;
                  MR_Word RestStatement_82;

                  erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(Var_84, CodeModel_2, InstMap1_44, MaybeSuccessExpr_5, &RestStatement_82, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_59_59);
                  erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(STATE_VARIABLE_Info_59_59, HeadVar__3_3, Var_85, &NonLocalsSet_47);
                  NonLocals_48 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocalsSet_47);
                  Var_61 = erl_backend__elds__terms_from_vars_1_f_0(NonLocals_48);
                  {
                    Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Var_61));
                    MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (RestStatement_82));
                  }
                  SucceedFunc0_49 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) Var_60);
                  erl_backend__erl_code_util__erl_create_renaming_4_p_0(NonLocals_48, &Subst_50, STATE_VARIABLE_Info_59_59, &STATE_VARIABLE_Info_62_62);
                  erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subst_50, SucceedFunc0_49, &SucceedFunc_51);
                  erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "SucceedConj", &SucceedVar_52, STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_64_64);
                  hlds__instmap__instmap_set_var_4_p_0(SucceedVar_52, (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__erl_code_gen_scalar_common_3[0]), HeadVar__3_3, &InstMap_53);
                  SucceedVarExpr_54 = erl_backend__elds__expr_from_var_1_f_0(SucceedVar_52);
                  {
                    MakeSucceed_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), MakeSucceed_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), MakeSucceed_55, 1) = ((MR_Box) (SucceedVarExpr_54));
                    MR_hl_field(MR_mktag(3), MakeSucceed_55, 2) = ((MR_Box) (SucceedFunc_51));
                  }
                  {
                    Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (SucceedVarExpr_54));
                  }
                  Var_66 = erl_backend__elds__exprs_from_vars_1_f_0(NonLocals_48);
                  {
                    CallSucceed_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), CallSucceed_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), CallSucceed_56, 1) = ((MR_Box) (Var_65));
                    MR_hl_field(MR_mktag(3), CallSucceed_56, 2) = ((MR_Box) (Var_66));
                  }
                  {
                    Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (CallSucceed_56));
                  }
                  erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 2, InstMap_53, Var_85, Var_68, &FirstStatement_81, STATE_VARIABLE_Info_64_64, STATE_VARIABLE_Info_8);
                  *Statement_6 = erl_backend__elds__join_exprs_2_f_0(MakeSucceed_55, FirstStatement_81);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word STATE_VARIABLE_Info_70_70;
                  MR_Word Var_72;
                  MR_Word RestStatement_80;

                  erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(Var_84, CodeModel_2, InstMap1_44, MaybeSuccessExpr_5, &RestStatement_80, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_70_70);
                  {
                    Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (RestStatement_80));
                  }
                  erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, HeadVar__3_3, Var_85, Var_72, Statement_6, STATE_VARIABLE_Info_70_70, STATE_VARIABLE_Info_8);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(CodeModel_2, HeadVar__3_3, Var_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Statement_6, STATE_VARIABLE_Info_0_7, STATE_VARIABLE_Info_8);
          }
          break;
      }
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_95_91_53_93_95_48_9_p_0(
  MR_Word Goals_10,
  MR_Word CodeModel_11,
  MR_Word Detism_12,
  MR_Word InstMap_13,
  MR_Word MaybeSuccessExpr_15,
  MR_Word * Statement_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word Statement0_18;
    MR_Word STATE_VARIABLE_Info_23_23;

    erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(Goals_10, CodeModel_11, InstMap_13, MaybeSuccessExpr_15, &Statement0_18, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_23_23);
    succeeded = (Detism_12 == (MR_Integer) 6);
    if (succeeded)
    {
      MR_Word ModuleInfo_19;
      MR_Word BoundVars_20;

      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_23_23, &ModuleInfo_19);
      hlds__instmap__instmap_bound_vars_3_p_0(InstMap_13, ModuleInfo_19, &BoundVars_20);
      erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_p_0(BoundVars_20, Statement0_18, Statement_16, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_22);
    }
    else
    {
      *Statement_16 = Statement0_18;
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_23_23;
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_110_101_103_97_116_105_111_110_95_95_91_52_93_95_48_8_p_0(
  MR_Word Cond_9,
  MR_Word CodeModel_10,
  MR_Word InstMap_11,
  MR_Word MaybeSuccessExpr_13,
  MR_Word * Statement_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_Word CondGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_9, (MR_Integer) 1)));
    MR_Word CondCodeModel_18;
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_9, (MR_Integer) 0)));

    CondCodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(CondGoalInfo_17);
    switch (CodeModel_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DummySuccessExpr_19;
          MR_Word CondStatement_20;
          MR_Word Var_49;
          MR_Word Var_51;

          Var_49 = erl_backend__elds__elds_empty_tuple_0_f_0();
          {
            DummySuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), DummySuccessExpr_19, 0) = ((MR_Box) (Var_49));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (DummySuccessExpr_19));
          }
          erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, InstMap_11, Cond_9, Var_51, &CondStatement_20, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
          *Statement_14 = erl_backend__elds__maybe_join_exprs_2_f_0(CondStatement_20, MaybeSuccessExpr_13);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_negation\'/8", (MR_String) "nondet negation");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        switch (CondCodeModel_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word CondStatement_53;

              erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 0, InstMap_11, Cond_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &CondStatement_53, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
              Var_48 = erl_backend__elds__elds_fail_0_f_0();
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (Var_48));
              }
              *Statement_14 = erl_backend__elds__join_exprs_2_f_0(CondStatement_53, Var_47);
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_negation\'/8", (MR_String) "nondet cond");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word OnSuccess_21;
              MR_Word FailCase_22;
              MR_Word OtherCase_23;
              MR_Word Var_32;
              MR_Word Var_33;
              MR_Word Var_36;
              MR_Word Var_37;
              MR_Word Var_39;
              MR_Word Var_40;
              MR_Word Var_42;
              MR_Word Var_43;
              MR_Word CondStatement_54;

              Var_33 = erl_backend__elds__elds_true_0_f_0();
              {
                Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_32, 0) = ((MR_Box) (Var_33));
              }
              {
                OnSuccess_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), OnSuccess_21, 0) = ((MR_Box) (Var_32));
              }
              erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, InstMap_11, Cond_9, OnSuccess_21, &CondStatement_54, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
              Var_39 = erl_backend__elds__elds_fail_0_f_0();
              Var_40 = erl_backend__elds__expr_or_void_1_f_0(MaybeSuccessExpr_13);
              {
                FailCase_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FailCase_22, 0) = ((MR_Box) (Var_39));
                MR_hl_field(MR_mktag(0), FailCase_22, 1) = ((MR_Box) (Var_40));
              }
              Var_43 = erl_backend__elds__elds_fail_0_f_0();
              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_42, 0) = ((MR_Box) (Var_43));
              }
              {
                OtherCase_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), OtherCase_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), OtherCase_23, 1) = ((MR_Box) (Var_42));
              }
              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (OtherCase_23));
                MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (FailCase_22));
                MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Statement_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (CondStatement_54));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_36));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_116_101_95_95_91_54_93_95_48_10_p_0(
  MR_Word CodeModel_11,
  MR_Word InstMap0_12,
  MR_Word Cond_13,
  MR_Word Then_14,
  MR_Word Else_15,
  MR_Word MaybeSuccessExpr0_17,
  MR_Word * Statement_18,
  MR_Word STATE_VARIABLE_Info_0_57,
  MR_Word * STATE_VARIABLE_Info_58)
{
  {
    MR_bool succeeded;
    MR_Word CondGoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_13, (MR_Integer) 1)));
    MR_Word CondCodeModel_22;
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_13, (MR_Integer) 0)));

    CondCodeModel_22 = hlds__code_model__goal_info_get_code_model_1_f_0(CondGoalInfo_21);
    switch (CondCodeModel_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CondStatement_23;
          MR_Word CondDeterminism_24;
          MR_Word STATE_VARIABLE_Info_107_107;

          erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 0, InstMap0_12, Cond_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &CondStatement_23, STATE_VARIABLE_Info_0_57, &STATE_VARIABLE_Info_107_107);
          CondDeterminism_24 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(CondGoalInfo_21);
          succeeded = (CondDeterminism_24 == (MR_Integer) 6);
          if (succeeded)
          {
            *Statement_18 = CondStatement_23;
            *STATE_VARIABLE_Info_58 = STATE_VARIABLE_Info_107_107;
          }
          else
          {
            MR_Word CondInstMap_25;
            MR_Word ThenStatement_26;

            hlds__goal_util__update_instmap_3_p_0(Cond_13, InstMap0_12, &CondInstMap_25);
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(CodeModel_11, CondInstMap_25, Then_14, MaybeSuccessExpr0_17, &ThenStatement_26, STATE_VARIABLE_Info_107_107, STATE_VARIABLE_Info_58);
            *Statement_18 = erl_backend__elds__join_exprs_2_f_0(CondStatement_23, ThenStatement_26);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Ref_47;
          MR_Word RefExpr_48;
          MR_Word MakeRef_49;
          MR_Word PutRef_50;
          MR_Word GetRef_51;
          MR_Word EraseRef_52;
          MR_Word PutAndThen_53;
          MR_Word CondThen_54;
          MR_Word CaseElse_55;
          MR_Word OtherCase_56;
          MR_Word STATE_VARIABLE_Info_60_60;
          MR_Word Var_61;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_71;
          MR_Word STATE_VARIABLE_Info_76_76;
          MR_Word Var_77;
          MR_Word STATE_VARIABLE_Info_78_78;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_91;
          MR_Word ThenStatement_112;
          MR_Word InstMap1_113;
          MR_Word InstMap2_114;
          MR_Word ElseStatement_115;
          MR_Word TrueCase_116;

          erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Ref", &Ref_47, STATE_VARIABLE_Info_0_57, &STATE_VARIABLE_Info_60_60);
          erl_backend__erl_code_gen__ground_var_in_instmap_3_p_0(Ref_47, InstMap0_12, &InstMap1_113);
          RefExpr_48 = erl_backend__elds__expr_from_var_1_f_0(Ref_47);
          Var_61 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "make_ref", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          {
            MakeRef_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), MakeRef_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), MakeRef_49, 1) = ((MR_Box) (RefExpr_48));
            MR_hl_field(MR_mktag(3), MakeRef_49, 2) = ((MR_Box) (Var_61));
          }
          Var_68 = erl_backend__elds__elds_true_0_f_0();
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_67, 0) = ((MR_Box) (Var_68));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (RefExpr_48));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
          }
          PutRef_50 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "put", Var_65);
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (RefExpr_48));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          GetRef_51 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "get", Var_71);
          EraseRef_52 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "erase", Var_71);
          hlds__goal_util__update_instmap_3_p_0(Cond_13, InstMap1_113, &InstMap2_114);
          erl_backend__erl_code_gen__erl_gen_goal_7_p_0(CodeModel_11, InstMap2_114, Then_14, MaybeSuccessExpr0_17, &ThenStatement_112, STATE_VARIABLE_Info_60_60, &STATE_VARIABLE_Info_76_76);
          PutAndThen_53 = erl_backend__elds__join_exprs_2_f_0(PutRef_50, ThenStatement_112);
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (PutAndThen_53));
          }
          erl_backend__erl_code_gen__erl_gen_goal_7_p_0(CondCodeModel_22, InstMap1_113, Cond_13, Var_77, &CondThen_54, STATE_VARIABLE_Info_76_76, &STATE_VARIABLE_Info_78_78);
          erl_backend__erl_code_gen__erl_gen_goal_7_p_0(CodeModel_11, InstMap1_113, Else_15, MaybeSuccessExpr0_17, &ElseStatement_115, STATE_VARIABLE_Info_78_78, STATE_VARIABLE_Info_58);
          Var_83 = erl_backend__elds__elds_true_0_f_0();
          Var_85 = erl_backend__elds__elds_true_0_f_0();
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_84, 0) = ((MR_Box) (Var_85));
          }
          {
            TrueCase_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TrueCase_116, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(0), TrueCase_116, 1) = ((MR_Box) (Var_84));
          }
          {
            OtherCase_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), OtherCase_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), OtherCase_56, 1) = ((MR_Box) (ElseStatement_115));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (OtherCase_56));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (TrueCase_116));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_81));
          }
          {
            CaseElse_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CaseElse_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), CaseElse_55, 1) = ((MR_Box) (GetRef_51));
            MR_hl_field(MR_mktag(3), CaseElse_55, 2) = ((MR_Box) (Var_80));
          }
          Var_88 = erl_backend__elds__join_exprs_2_f_0(CondThen_54, CaseElse_55);
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (EraseRef_52));
          }
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (Var_88));
            MR_hl_field(MR_mktag(3), Var_87, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), Var_87, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), Var_87, 4) = ((MR_Box) (Var_91));
          }
          *Statement_18 = erl_backend__elds__join_exprs_2_f_0(MakeRef_49, Var_87);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_117_117;
          MR_Word CondVars_27;
          MR_Word InstMap0PostCond_28;
          MR_Word ThenVars_29;
          MR_Word ElseVars_30;
          MR_Word CondVarsList_31;
          MR_Word CondVarsTerm_32;
          MR_Word CondStatement0_33;
          MR_Word Subn_34;
          MR_Word BoundNonLocals_35;
          MR_Word MaybeMakeClosure_36;
          MR_Word MaybeSuccessExpr_37;
          MR_Word InstMap1_38;
          MR_Word InstMap2_39;
          MR_Word ThenStatement0_40;
          MR_Word ElseStatement0_41;
          MR_Word ElseStatement_42;
          MR_Word IfStatement_43;
          MR_Word Var_92;
          MR_Word Var_94;
          MR_Word STATE_VARIABLE_Info_95_95;
          MR_Word Var_96;
          MR_Word STATE_VARIABLE_Info_97_97;
          MR_Word STATE_VARIABLE_Info_98_98;
          MR_Word STATE_VARIABLE_Info_99_99;
          MR_Word CondStatement_109;
          MR_Word CondDeterminism_110;
          MR_Word ThenStatement_111;

          erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(STATE_VARIABLE_Info_0_57, InstMap0_12, Cond_13, &CondVars_27);
          hlds__goal_util__update_instmap_3_p_0(Cond_13, InstMap0_12, &InstMap0PostCond_28);
          erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(STATE_VARIABLE_Info_0_57, InstMap0PostCond_28, Then_14, &ThenVars_29);
          erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(STATE_VARIABLE_Info_0_57, InstMap0_12, Else_15, &ElseVars_30);
          TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          CondVarsList_31 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_117_117, CondVars_27);
          Var_92 = erl_backend__elds__exprs_from_vars_1_f_0(CondVarsList_31);
          {
            CondVarsTerm_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CondVarsTerm_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), CondVarsTerm_32, 1) = ((MR_Box) (Var_92));
          }
          {
            Var_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_96, 0) = ((MR_Box) (CondVarsTerm_32));
          }
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_96));
          }
          erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, InstMap0_12, Cond_13, Var_94, &CondStatement0_33, STATE_VARIABLE_Info_0_57, &STATE_VARIABLE_Info_95_95);
          erl_backend__erl_code_util__erl_create_renaming_4_p_0(CondVarsList_31, &Subn_34, STATE_VARIABLE_Info_95_95, &STATE_VARIABLE_Info_97_97);
          erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_34, CondStatement0_33, &CondStatement_109);
          BoundNonLocals_35 = parse_tree__set_of_var__union_2_f_0(TypeCtorInfo_117_117, ThenVars_29, ElseVars_30);
          erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(BoundNonLocals_35, MaybeSuccessExpr0_17, &MaybeMakeClosure_36, &MaybeSuccessExpr_37, InstMap0_12, &InstMap1_38, STATE_VARIABLE_Info_97_97, &STATE_VARIABLE_Info_98_98);
          hlds__goal_util__update_instmap_3_p_0(Cond_13, InstMap1_38, &InstMap2_39);
          erl_backend__erl_code_gen__erl_gen_goal_7_p_0(CodeModel_11, InstMap2_39, Then_14, MaybeSuccessExpr_37, &ThenStatement0_40, STATE_VARIABLE_Info_98_98, &STATE_VARIABLE_Info_99_99);
          erl_backend__erl_code_gen__erl_gen_goal_7_p_0(CodeModel_11, InstMap1_38, Else_15, MaybeSuccessExpr_37, &ElseStatement0_41, STATE_VARIABLE_Info_99_99, STATE_VARIABLE_Info_58);
          erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(*STATE_VARIABLE_Info_58, ElseVars_30, Then_14, InstMap1_38, ThenStatement0_40, &ThenStatement_111);
          erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(*STATE_VARIABLE_Info_58, ThenVars_29, Else_15, InstMap0_12, ElseStatement0_41, &ElseStatement_42);
          CondDeterminism_110 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(CondGoalInfo_21);
          succeeded = (CondDeterminism_110 == (MR_Integer) 7);
          if (succeeded)
            IfStatement_43 = erl_backend__elds__join_exprs_2_f_0(CondStatement_109, ElseStatement_42);
          else
          {
            MR_Word CaseExpr_44;
            MR_Word TrueCase_45;
            MR_Word FalseCase_46;
            MR_Word Var_101;
            MR_Word Var_102;

            {
              TrueCase_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TrueCase_45, 0) = ((MR_Box) (CondVarsTerm_32));
              MR_hl_field(MR_mktag(0), TrueCase_45, 1) = ((MR_Box) (ThenStatement_111));
            }
            {
              FalseCase_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FalseCase_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), FalseCase_46, 1) = ((MR_Box) (ElseStatement_42));
            }
            {
              Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (FalseCase_46));
              MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (TrueCase_45));
              MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_102));
            }
            {
              CaseExpr_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CaseExpr_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), CaseExpr_44, 1) = ((MR_Box) (CondStatement_109));
              MR_hl_field(MR_mktag(3), CaseExpr_44, 2) = ((MR_Box) (Var_101));
            }
            erl_backend__erl_code_util__maybe_simplify_nested_cases_2_p_0(CaseExpr_44, &IfStatement_43);
          }
          *Statement_18 = erl_backend__elds__maybe_join_exprs1_2_f_0(MaybeMakeClosure_36, IfStatement_43);
        }
        break;
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(
  MR_Word Goal_9,
  MR_Word InstMap_10,
  MR_Word DoRenaming_12,
  MR_Word * GoalStatement_13,
  MR_Word * PackedNonLocals_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word NonLocalsSet_16;
    MR_Word NonLocals_17;
    MR_Word Throw_18;
    MR_Word ThrowValue_19;
    MR_Word GoalStatement0_20;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_Info_33_33;

    erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(STATE_VARIABLE_Info_0_22, InstMap_10, Goal_9, &NonLocalsSet_16);
    NonLocals_17 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocalsSet_16);
    Var_26 = erl_backend__elds__elds_commit_marker_0_f_0();
    Var_30 = erl_backend__elds__exprs_from_vars_1_f_0(NonLocals_17);
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Var_30));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *PackedNonLocals_14 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_29));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (*PackedNonLocals_14));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
    }
    {
      ThrowValue_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ThrowValue_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), ThrowValue_19, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_24, 0) = ((MR_Box) (ThrowValue_19));
    }
    {
      Throw_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Throw_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Throw_18, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Throw_18));
    }
    erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 2, InstMap_10, Goal_9, Var_32, &GoalStatement0_20, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_33_33);
    switch (DoRenaming_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *GoalStatement_13 = GoalStatement0_20;
          *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_33_33;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Subn_21;

          erl_backend__erl_code_util__erl_create_renaming_4_p_0(NonLocals_17, &Subn_21, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_23);
          erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_21, GoalStatement0_20, GoalStatement_13);
        }
        break;
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__ground_var_in_instmap_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_InstMap_0_6,
  MR_Word * STATE_VARIABLE_InstMap_7)
{
  {
    hlds__instmap__instmap_set_var_4_p_0(Var_4, (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__erl_code_gen_scalar_common_3[0]), STATE_VARIABLE_InstMap_0_6, STATE_VARIABLE_InstMap_7);
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_ELDSCase_16;
    MR_Word conv5_STATE_VARIABLE_Info_30;

    erl_backend__erl_code_gen__erl_gen_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) wrapper_arg_1), &conv6_ELDSCase_16, ((MR_Word) wrapper_arg_3), &conv5_STATE_VARIABLE_Info_30);
    *wrapper_arg_2 = ((MR_Box) (conv6_ELDSCase_16));
    *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_Info_30));
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_ELDSCase_14;
    MR_Word conv3_STATE_VARIABLE_Info_25;

    erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), &conv4_ELDSCase_14, ((MR_Word) wrapper_arg_3), &conv3_STATE_VARIABLE_Info_25);
    *wrapper_arg_2 = ((MR_Box) (conv4_ELDSCase_14));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_Info_25));
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_50;

    conv0_LambdaHeadVar__2_50 = erl_backend__erl_code_gen__IntroducedFrom__func__erl_gen_switch__790__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_50));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_2(
  void * env_ptr_arg)
{
  {
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_4(
  void * env_ptr_arg)
{
  {
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) env_ptr_arg;

    (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Var_57 = ((MR_Word) (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv1_Var_57);
    erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_3(env_ptr);
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_5(
  void * env_ptr_arg)
{
  {
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) env_ptr_arg;

    {
      MR_Integer Var_59;

      Var_59 = mercury__string__length_1_f_0((env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__String_32);
      (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (Var_59 <= (MR_Integer) 255);
      (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = !((env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded);
      if ((env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
        erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_2(env_ptr);
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_7(
  void * env_ptr_arg)
{
  {
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) env_ptr_arg;

    (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Var_58 = ((MR_Word) (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv2_Var_58);
    erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_6(env_ptr);
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_6(
  void * env_ptr_arg)
{
  {
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) env_ptr_arg;

    (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = ((((MR_tag((MR_Word) (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Var_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Var_58, (MR_Integer) 0)))) == (MR_Integer) 15)));
    if ((env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
    {
      (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__String_32 = ((MR_String) (MR_hl_field(MR_mktag(3), (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Var_58, (MR_Integer) 1)));
      erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_5(env_ptr);
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_3(
  void * env_ptr_arg)
{
  {
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) env_ptr_arg;

    {
      MR_Word Var_35;

      (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Var_57, (MR_Integer) 0)));
      (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__OtherConsIds_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Var_57, (MR_Integer) 1)));
      Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Var_57, (MR_Integer) 2)));
      (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = ((((MR_tag((MR_Word) (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33, (MR_Integer) 0)))) == (MR_Integer) 15)));
      if ((env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__String_32 = ((MR_String) (MR_hl_field(MR_mktag(3), (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33, (MR_Integer) 1)));
        erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_5(env_ptr);
      }
      {
        mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, &(env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv2_Var_58, (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__OtherConsIds_34, erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_7, env_ptr);
      }
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_8(
  void * env_ptr_arg)
{
  {
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
      {
        mercury__list__member_2_p_1((env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85, &(env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv1_Var_57, (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13, erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_4, env_ptr);
        (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0(
  MR_Word Var_11,
  MR_Word CanFail_12,
  MR_Word CasesList_13,
  MR_Word CodeModel_14,
  MR_Word InstMap0_15,
  MR_Word MaybeSuccessExpr0_17,
  MR_Word * Statement_18,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47)
{
  {
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s env;

    (env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13 = CasesList_13;
    {
      MR_Word TypeCtorInfo_96_96;
      MR_Word CasesGoals_20;
      MR_Word NonLocalsBoundInCases_24;
      MR_Word MaybeMakeClosure_25;
      MR_Word MaybeSuccessExpr_26;
      MR_Word InstMap_27;
      MR_Word VarType_28;
      MR_Word ModuleInfo_29;
      MR_Word TypeCtorCategory_30;
      MR_Word MaybeConvertToAtom_39;
      MR_Word SwitchVar_40;
      MR_Word GenCase_41;
      MR_Word ErlCases0_42;
      MR_Word ErlCases_44;
      MR_Word CaseExpr_45;
      MR_Word STATE_VARIABLE_Info_51_51;
      MR_Word STATE_VARIABLE_Info_62_62;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Globals_31;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Integer Var_55;
      MR_Integer Var_56;
      MR_Box conv7_STATE_VARIABLE_Info_47;

      (env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
      CasesGoals_20 = mercury__list__map_2_f_0((env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &erl_backend__erl_code_gen_scalar_common_3[1], (env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13);
      erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0(STATE_VARIABLE_Info_0_46, InstMap0_15, CasesGoals_20, &NonLocalsBoundInCases_24);
      erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(NonLocalsBoundInCases_24, MaybeSuccessExpr0_17, &MaybeMakeClosure_25, &MaybeSuccessExpr_26, InstMap0_15, &InstMap_27, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_51_51);
      erl_backend__erl_code_util__erl_variable_type_3_p_0(STATE_VARIABLE_Info_51_51, Var_11, &VarType_28);
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_51_51, &ModuleInfo_29);
      TypeCtorCategory_30 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_29, VarType_28);
      (env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) TypeCtorCategory_30)) == (MR_mktag((MR_Integer) 1)));
      if ((env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeCtorCategory_30, (MR_Integer) 0)));
        (env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
        if ((env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_29, &Globals_31);
          Var_53 = (MR_Integer) 495;
          Var_54 = (MR_Integer) 1;
          (env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_31, Var_53, Var_54);
          if ((env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
          {
            Var_55 = mercury__list__length_1_f_0((env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85, (env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13);
            Var_56 = (MR_Integer) 50;
            (env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (Var_55 > Var_56);
            if ((env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
            {
              erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_8(&env);
              (env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = !((env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded);
            }
          }
        }
      }
      if ((env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        MR_Word CharList_37;
        MR_Word StringToAtom_38;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_70;

        erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Atom", &SwitchVar_40, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_62_62);
        Var_65 = erl_backend__elds__expr_from_var_1_f_0(Var_11);
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        CharList_37 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "binary_to_list", Var_64);
        Var_67 = erl_backend__elds__expr_from_var_1_f_0(SwitchVar_40);
        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (CharList_37));
          MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        Var_68 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "list_to_atom", Var_70);
        {
          StringToAtom_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), StringToAtom_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), StringToAtom_38, 1) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(3), StringToAtom_38, 2) = ((MR_Box) (Var_68));
        }
        {
          MaybeConvertToAtom_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeConvertToAtom_39, 0) = ((MR_Box) (StringToAtom_38));
        }
        {
          GenCase_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), GenCase_41, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), GenCase_41, 1) = ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_9));
          MR_hl_field(MR_mktag(0), GenCase_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), GenCase_41, 3) = ((MR_Box) (CodeModel_14));
          MR_hl_field(MR_mktag(0), GenCase_41, 4) = ((MR_Box) (InstMap_27));
          MR_hl_field(MR_mktag(0), GenCase_41, 5) = ((MR_Box) (NonLocalsBoundInCases_24));
          MR_hl_field(MR_mktag(0), GenCase_41, 6) = ((MR_Box) (MaybeSuccessExpr_26));
        }
      }
      else
      {
        MaybeConvertToAtom_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        SwitchVar_40 = Var_11;
        {
          GenCase_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), GenCase_41, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), GenCase_41, 1) = ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_10));
          MR_hl_field(MR_mktag(0), GenCase_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(0), GenCase_41, 3) = ((MR_Box) (VarType_28));
          MR_hl_field(MR_mktag(0), GenCase_41, 4) = ((MR_Box) (CodeModel_14));
          MR_hl_field(MR_mktag(0), GenCase_41, 5) = ((MR_Box) (InstMap_27));
          MR_hl_field(MR_mktag(0), GenCase_41, 6) = ((MR_Box) (NonLocalsBoundInCases_24));
          MR_hl_field(MR_mktag(0), GenCase_41, 7) = ((MR_Box) (MaybeSuccessExpr_26));
        }
        STATE_VARIABLE_Info_62_62 = STATE_VARIABLE_Info_51_51;
      }
      TypeCtorInfo_96_96 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0;
      mercury__list__map_foldl_5_p_0((env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85, TypeCtorInfo_96_96, (MR_Word) &erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0, GenCase_41, (env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13, &ErlCases0_42, ((MR_Box) (STATE_VARIABLE_Info_62_62)), &conv7_STATE_VARIABLE_Info_47);
      *STATE_VARIABLE_Info_47 = ((MR_Word) conv7_STATE_VARIABLE_Info_47);
      switch (CanFail_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DefaultCase_43;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_76;

            Var_75 = erl_backend__elds__elds_fail_0_f_0();
            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_74, 0) = ((MR_Box) (Var_75));
            }
            {
              DefaultCase_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DefaultCase_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), DefaultCase_43, 1) = ((MR_Box) (Var_74));
            }
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (DefaultCase_43));
              MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            ErlCases_44 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_96_96, ErlCases0_42, Var_76);
          }
          break;
        case (MR_Integer) 1:
          ErlCases_44 = ErlCases0_42;
          break;
      }
      Var_78 = erl_backend__elds__expr_from_var_1_f_0(SwitchVar_40);
      {
        CaseExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CaseExpr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), CaseExpr_45, 1) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(3), CaseExpr_45, 2) = ((MR_Box) (ErlCases_44));
      }
      Var_79 = erl_backend__elds__maybe_join_exprs1_2_f_0(MaybeConvertToAtom_39, CaseExpr_45);
      *Statement_18 = erl_backend__elds__maybe_join_exprs1_2_f_0(MaybeMakeClosure_25, Var_79);
    }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Var_4;

    succeeded = erl_backend__erl_code_gen__non_dummy_var_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_Var_4);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_Var_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(
  MR_Word NonLocals_9,
  MR_Word MaybeSuccessExpr0_10,
  MR_Word * MaybeMakeClosure_11,
  MR_Word * MaybeSuccessExpr_12,
  MR_Word InstMap0_13,
  MR_Word * InstMap_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) MaybeSuccessExpr0_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Word SuccessExpr0_16;
    MR_Integer Var_30;
    MR_Integer Var_31;

    if (succeeded)
    {
      SuccessExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSuccessExpr0_10, (MR_Integer) 0)));
      Var_30 = erl_backend__erl_code_util__erl_expr_size_1_f_0(SuccessExpr0_16);
      Var_31 = (MR_Integer) 10;
      succeeded = (Var_30 > Var_31);
    }
    if (succeeded)
    {
      MR_Word TypeInfo_38_38;
      MR_Word ClosureVar_17;
      MR_Word ClosureVarExpr_18;
      MR_Word ClosureArgs0_19;
      MR_Word ModuleInfo_20;
      MR_Word ClosureArgsTypes_21;
      MR_Word ClosureArgs_22;
      MR_Word ClosureArgsTerms_23;
      MR_Word ClosureArgsExprs_24;
      MR_Word MakeClosure_25;
      MR_Word ClosureFun_26;
      MR_Word CallClosure_27;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;

      erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "SuccessClosure", &ClosureVar_17, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
      hlds__instmap__instmap_set_var_4_p_0(ClosureVar_17, (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__erl_code_gen_scalar_common_3[0]), InstMap0_13, InstMap_14);
      ClosureVarExpr_18 = erl_backend__elds__expr_from_var_1_f_0(ClosureVar_17);
      ClosureArgs0_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_9);
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_29, &ModuleInfo_20);
      erl_backend__erl_code_util__erl_variable_types_3_p_0(*STATE_VARIABLE_Info_29, ClosureArgs0_19, &ClosureArgsTypes_21);
      TypeInfo_38_38 = (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0];
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_2[1]));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (ModuleInfo_20));
      }
      ClosureArgs_22 = mercury__list__filter_map_corresponding_3_f_0(TypeInfo_38_38, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, TypeInfo_38_38, Var_34, ClosureArgs0_19, ClosureArgsTypes_21);
      ClosureArgsTerms_23 = erl_backend__elds__terms_from_vars_1_f_0(ClosureArgs_22);
      ClosureArgsExprs_24 = erl_backend__elds__exprs_from_vars_1_f_0(ClosureArgs_22);
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (ClosureArgsTerms_23));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (SuccessExpr0_16));
      }
      ClosureFun_26 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) Var_35);
      {
        MakeClosure_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MakeClosure_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MakeClosure_25, 1) = ((MR_Box) (ClosureVarExpr_18));
        MR_hl_field(MR_mktag(3), MakeClosure_25, 2) = ((MR_Box) (ClosureFun_26));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (ClosureVarExpr_18));
      }
      {
        CallClosure_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CallClosure_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), CallClosure_27, 1) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(3), CallClosure_27, 2) = ((MR_Box) (ClosureArgsExprs_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeMakeClosure_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MakeClosure_25));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeSuccessExpr_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CallClosure_27));
      }
    }
    else
    {
      *InstMap_14 = InstMap0_13;
      *MaybeMakeClosure_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *MaybeSuccessExpr_12 = MaybeSuccessExpr0_10;
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0(
  MR_Word Info_5,
  MR_Word InstMap_6,
  MR_Word Goals_7,
  MR_Word * NonLocalsUnion_8)
{
  {
    MR_Word IsBound_9;
    MR_Word NonLocalsLists_10;

    {
      IsBound_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IsBound_9, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), IsBound_9, 1) = ((MR_Box) (erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0_1));
      MR_hl_field(MR_mktag(0), IsBound_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), IsBound_9, 3) = ((MR_Box) (Info_5));
      MR_hl_field(MR_mktag(0), IsBound_9, 4) = ((MR_Box) (InstMap_6));
    }
    mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[3], IsBound_9, Goals_7, &NonLocalsLists_10);
    *NonLocalsUnion_8 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocalsLists_10);
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_maybe_gen_simple_special_pred_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word PredInfo_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_Defns_0_27,
  MR_Word * STATE_VARIABLE_Defns_28)
{
  {
    MR_bool succeeded;
    MR_String PredName_14;
    MR_Integer PredArity_15;
    MR_Word SpecialId_16;
    MR_Word Args_18;
    MR_Word VarTypes_19;
    MR_Word ProcDefn_24;
    MR_Integer Var_42;
    MR_String Var_17;

    PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_11);
    PredArity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_11);
    succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_2(&SpecialId_16, &Var_17, PredName_14, &Var_42);
    if (succeeded)
    {
      succeeded = (PredArity_15 == Var_42);
      if (succeeded)
      {
        hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_12, &Args_18);
        hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_12, &VarTypes_19);
        switch (SpecialId_16) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_29;
              MR_Word Var_30;
              MR_Word Var_32;
              MR_Word Y_37;
              MR_Word X_38;
              MR_Word Type_39;
              MR_Word Var_44;
              MR_Word ArgX1_49;
              MR_Word ArgX2_51;

              mercury__list__reverse_2_p_0((MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0], Args_18, &Var_29);
              succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Y_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0)));
                Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  X_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0)));
                  Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1)));
                  succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgX1_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0)));
                    ArgX2_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1)));
                    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, Y_37, &Type_39);
                    Var_32 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_8, Type_39);
                    succeeded = (Var_32 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(ModuleInfo_8, Type_39);
                      if (succeeded)
                      {
                        erl_backend__erl_code_gen__erl_gen_simple_compare_6_p_0(ModuleInfo_8, PredId_9, ProcId_10, X_38, Y_37, &ProcDefn_24);
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_40_40;
              MR_Word Y_20;
              MR_Word X_21;
              MR_Word Type_23;
              MR_Word Var_33;
              MR_Word Var_34;
              MR_Word Var_35;
              MR_Integer Var_43;
              MR_Word Info_61;
              MR_Word InputVars_62;
              MR_Word Clause_63;
              MR_Word ClauseExpr_64;
              MR_Word CompareXY_65;
              MR_Word TrueCase_66;
              MR_Word FalseCase_67;
              MR_Word ProcVarSet_68;
              MR_Word EnvVarNames_69;
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_84;
              MR_Word Var_22;

              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_43);
              succeeded = (ProcId_10 == Var_43);
              if (succeeded)
              {
                TypeInfo_40_40 = (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0];
                mercury__list__reverse_2_p_0(TypeInfo_40_40, Args_18, &Var_33);
                succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0)));
                  Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1)));
                  succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    X_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0)));
                    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1)));
                    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, Y_20, &Type_23);
                    Var_35 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_8, Type_23);
                    succeeded = (Var_35 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(ModuleInfo_8, Type_23);
                      if (succeeded)
                      {
                        Info_61 = erl_backend__erl_code_util__erl_gen_info_init_3_f_0(ModuleInfo_8, PredId_9, ProcId_10);
                        erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_p_0(Info_61, &InputVars_62);
                        Var_70 = erl_backend__elds__terms_from_vars_1_f_0(InputVars_62);
                        Var_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        Var_74 = (MR_Integer) 15;
                        Var_75 = erl_backend__elds__expr_from_var_1_f_0(X_21);
                        Var_76 = erl_backend__elds__expr_from_var_1_f_0(Y_20);
                        {
                          CompareXY_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), CompareXY_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), CompareXY_65, 1) = ((MR_Box) (Var_74));
                          MR_hl_field(MR_mktag(3), CompareXY_65, 2) = ((MR_Box) (Var_75));
                          MR_hl_field(MR_mktag(3), CompareXY_65, 3) = ((MR_Box) (Var_76));
                        }
                        Var_77 = erl_backend__elds__elds_true_0_f_0();
                        Var_79 = erl_backend__elds__elds_empty_tuple_0_f_0();
                        {
                          Var_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_78, 0) = ((MR_Box) (Var_79));
                        }
                        {
                          TrueCase_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), TrueCase_66, 0) = ((MR_Box) (Var_77));
                          MR_hl_field(MR_mktag(0), TrueCase_66, 1) = ((MR_Box) (Var_78));
                        }
                        Var_80 = erl_backend__elds__elds_false_0_f_0();
                        Var_82 = erl_backend__elds__elds_fail_0_f_0();
                        {
                          Var_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_81, 0) = ((MR_Box) (Var_82));
                        }
                        {
                          FalseCase_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), FalseCase_67, 0) = ((MR_Box) (Var_80));
                          MR_hl_field(MR_mktag(0), FalseCase_67, 1) = ((MR_Box) (Var_81));
                        }
                        {
                          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (FalseCase_67));
                          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_73));
                        }
                        {
                          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (TrueCase_66));
                          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_72));
                        }
                        {
                          ClauseExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ClauseExpr_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), ClauseExpr_64, 1) = ((MR_Box) (CompareXY_65));
                          MR_hl_field(MR_mktag(3), ClauseExpr_64, 2) = ((MR_Box) (Var_71));
                        }
                        {
                          Clause_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Clause_63, 0) = ((MR_Box) (Var_70));
                          MR_hl_field(MR_mktag(0), Clause_63, 1) = ((MR_Box) (ClauseExpr_64));
                        }
                        erl_backend__erl_code_util__erl_gen_info_get_varset_2_p_0(Info_61, &ProcVarSet_68);
                        erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_p_0(Info_61, &EnvVarNames_69);
                        {
                          Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (PredId_9));
                          MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (ProcId_10));
                        }
                        Var_84 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) Clause_63);
                        {
                          ProcDefn_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ProcDefn_24, 0) = ((MR_Box) (Var_83));
                          MR_hl_field(MR_mktag(0), ProcDefn_24, 1) = ((MR_Box) (ProcVarSet_68));
                          MR_hl_field(MR_mktag(0), ProcDefn_24, 2) = ((MR_Box) (Var_84));
                          MR_hl_field(MR_mktag(0), ProcDefn_24, 3) = ((MR_Box) (EnvVarNames_69));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                }
              }
            }
            break;
        }
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Defns_28 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcDefn_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Defns_0_27));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_simple_compare_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * ProcDefn_12)
{
  {
    MR_Word Info_13;
    MR_Word InputVars_14;
    MR_Word XExpr_15;
    MR_Word YExpr_16;
    MR_Word Clause_17;
    MR_Word ClauseExpr_18;
    MR_Word CondEq_19;
    MR_Word IsEq_20;
    MR_Word IsNotEq_21;
    MR_Word CondLt_22;
    MR_Word IsLt_23;
    MR_Word IsGt_24;
    MR_Word ProcVarSet_25;
    MR_Word EnvVarNames_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_51;

    Info_13 = erl_backend__erl_code_util__erl_gen_info_init_3_f_0(ModuleInfo_7, PredId_8, ProcId_9);
    erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_p_0(Info_13, &InputVars_14);
    XExpr_15 = erl_backend__elds__expr_from_var_1_f_0(X_10);
    YExpr_16 = erl_backend__elds__expr_from_var_1_f_0(Y_11);
    Var_27 = erl_backend__elds__terms_from_vars_1_f_0(InputVars_14);
    {
      CondEq_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CondEq_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), CondEq_19, 1) = ((MR_Box) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), CondEq_19, 2) = ((MR_Box) (XExpr_15));
      MR_hl_field(MR_mktag(3), CondEq_19, 3) = ((MR_Box) (YExpr_16));
    }
    Var_32 = erl_backend__elds__elds_true_0_f_0();
    Var_34 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "=");
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_33, 0) = ((MR_Box) (Var_34));
    }
    {
      IsEq_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IsEq_20, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), IsEq_20, 1) = ((MR_Box) (Var_33));
    }
    Var_36 = erl_backend__elds__elds_false_0_f_0();
    {
      CondLt_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CondLt_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), CondLt_22, 1) = ((MR_Box) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), CondLt_22, 2) = ((MR_Box) (XExpr_15));
      MR_hl_field(MR_mktag(3), CondLt_22, 3) = ((MR_Box) (YExpr_16));
    }
    Var_42 = erl_backend__elds__elds_true_0_f_0();
    Var_44 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "<");
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (Var_44));
    }
    {
      IsLt_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IsLt_23, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), IsLt_23, 1) = ((MR_Box) (Var_43));
    }
    Var_46 = erl_backend__elds__elds_false_0_f_0();
    Var_48 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) ">");
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (Var_48));
    }
    {
      IsGt_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IsGt_24, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), IsGt_24, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (IsGt_24));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (IsLt_23));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (CondLt_22));
      MR_hl_field(MR_mktag(3), Var_37, 2) = ((MR_Box) (Var_38));
    }
    {
      IsNotEq_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IsNotEq_21, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), IsNotEq_21, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (IsNotEq_21));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (IsEq_20));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      ClauseExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ClauseExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ClauseExpr_18, 1) = ((MR_Box) (CondEq_19));
      MR_hl_field(MR_mktag(3), ClauseExpr_18, 2) = ((MR_Box) (Var_28));
    }
    {
      Clause_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Clause_17, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Clause_17, 1) = ((MR_Box) (ClauseExpr_18));
    }
    erl_backend__erl_code_util__erl_gen_info_get_varset_2_p_0(Info_13, &ProcVarSet_25);
    erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_p_0(Info_13, &EnvVarNames_26);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (PredId_8));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (ProcId_9));
    }
    Var_51 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) Clause_17);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ProcDefn_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcVarSet_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (EnvVarNames_26));
    }
  }
}

void mercury__erl_backend__erl_code_gen__init(void)
{
}

void mercury__erl_backend__erl_code_gen__init_type_tables(void)
{
}

void mercury__erl_backend__erl_code_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__erl_backend__erl_code_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module erl_backend.erl_code_gen.
