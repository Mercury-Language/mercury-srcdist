/*
** Automatically generated from `tabling_analysis.m'
** by the Mercury compiler,
** version rotd-2023-07-24
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


// :- module transform_hlds.tabling_analysis.
// :- implementation.

/*
INIT mercury__transform_hlds__tabling_analysis__init
ENDINIT
*/

#include "transform_hlds.tabling_analysis.mih"


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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.intermod_analysis.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_0_s {
  MR_bool transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_Word transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__CalleePredInfo_14;
  jmp_buf transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__commit_0;
  MR_String transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__Name_16;
  MR_Integer transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__PredFormArityInt_17;
  MR_Word transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__SpecialPredId_18;
  MR_String transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__GenericPredName_19;
  MR_Integer transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__Var_35;
};

struct transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
  MR_bool transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_Word transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CalleePredInfo_18;
  jmp_buf transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0;
  MR_String transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Name_20;
  MR_Integer transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__PredFormArityInt_21;
  MR_Word transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__SpecialPredId_22;
  MR_String transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__GenericPredName_23;
  MR_Integer transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_41;
};

struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s {
  MR_bool transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded;
  MR_Word transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResults_10;
  jmp_buf transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__commit_0;
  MR_Word transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResult_44;
  MR_Box transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__conv4_ProcResult_44;
  jmp_buf transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__commit_1;
  MR_Word transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__Var_46;
  MR_Word transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResult_58;
  MR_Box transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__conv5_ProcResult_58;
  jmp_buf transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__commit_2;
  MR_Word transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__Var_47;
  MR_Word transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ConditionalResult_48;
  MR_Box transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__conv6_ConditionalResult_48;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tabling_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tabling_analysis__list__pti_list_1__plain_transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_proc_result_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tabling_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0;

static const MR_Integer transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__functor_number_map_mm_tabling_analysis_answer_0[1];

static const MR_NotagFunctorDesc transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__notag_functor_desc_mm_tabling_analysis_answer_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__tabling_analysis__maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0;

static const MR_PseudoTypeInfo transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__field_types_mm_tabling_proc_result_0_0[3];

static const MR_ConstString transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__field_names_mm_tabling_proc_result_0_0[3];

static const MR_DuArgLocn transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__field_locns_mm_tabling_proc_result_0_0[3];

static const MR_DuFunctorDesc transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__du_functor_desc_mm_tabling_proc_result_0_0;

static const MR_DuFunctorDescPtr transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__du_stag_ordered_mm_tabling_proc_result_0_0[1];

static const MR_DuPtagLayout transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__du_ptag_ordered_mm_tabling_proc_result_0[1];

static const MR_DuFunctorDescPtr transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__du_name_ordered_mm_tabling_proc_result_0[1];

static const MR_Integer transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__functor_number_map_mm_tabling_proc_result_0[1];

static MR_Word MR_CALL 
transform_hlds__tabling_analysis__IntroducedFrom__func__check_goal_for_mm_tabling__385__1_1_f_0(
  MR_Word LambdaHeadVar__1_102);

static MR_bool MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__to_term____transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__from_term_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__to_term____transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__to_term_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__equivalent_3_3_p_0(
  MR_Word Status_8,
  MR_Word Status_3);

static MR_bool MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0(
  MR_Word Answer1_4,
  MR_Word Answer2_5);

static void MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__get_func_info_6_6_p_0(
  MR_Word HeadVar__1_17,
  MR_Word HeadVar__2_18,
  MR_Word HeadVar__3_19);

static MR_Word MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__top_2_2_f_0(void);

static MR_Word MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__bottom_2_2_f_0(void);

static MR_Word MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void);

static MR_Integer MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0(void);

static MR_String MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__analysis_name_2_2_f_0(void);

static void MR_CALL 
transform_hlds__tabling_analysis____Compare____mm_tabling_proc_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__tabling_analysis____Unify____mm_tabling_proc_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__tabling_analysis__output_proc_name_5_p_0(
  MR_Word Stream_6,
  MR_Word Moduleinfo_7,
  MR_Word PPId_8);

static void MR_CALL 
transform_hlds__tabling_analysis__maybe_record_mm_tabling_result_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_18,
  MR_Word * STATE_VARIABLE_AnalysisInfo_19);

static void MR_CALL 
transform_hlds__tabling_analysis__maybe_record_mm_tabling_result_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tabling_analysis__maybe_record_mm_tabling_result_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_10,
  MR_Word * STATE_VARIABLE_AnalysisInfo_11);

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_case_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_Case_0_15,
  MR_Word * STATE_VARIABLE_Case_16,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18);

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_proc_3_p_0(
  MR_Word PPId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_goal_2_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_GoalExpr_0_90,
  MR_Word * STATE_VARIABLE_GoalExpr_91,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_92,
  MR_Word * STATE_VARIABLE_ModuleInfo_93);

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_goal_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18);

static void MR_CALL 
transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_6_p_0(
  MR_Word CalleePPId_8,
  MR_Word * Status_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29);

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_cases_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_cases_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_cases_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_Cases_0_12,
  MR_Word * STATE_VARIABLE_Cases_13,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15);

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_goal_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_goal_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_goal_list_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_Goals_0_12,
  MR_Word * STATE_VARIABLE_Goals_13,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15);

static void MR_CALL 
transform_hlds__tabling_analysis__combine_maybe_mm_tabling_analysis_status_3_p_0(
  MR_Word MaybeStatusA_4,
  MR_Word MaybeStatusB_5,
  MR_Word * MaybeStatus_6);

static void MR_CALL 
transform_hlds__tabling_analysis__combine_mm_tabling_status_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__tabling_analysis__check_proc_for_mm_tabling_6_p_0(
  MR_Word SCC_7,
  MR_Word PPId_8,
  MR_Word STATE_VARIABLE_Results_0_22,
  MR_Word * STATE_VARIABLE_Results_23,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25);

static MR_Box MR_CALL 
transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0(
  MR_Word SCC_8,
  MR_Word VarTable_9,
  MR_Word Goal_10,
  MR_Word * Result_11,
  MR_Word * MaybeAnalysisStatus_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_87,
  MR_Word * STATE_VARIABLE_ModuleInfo_88);

static void MR_CALL 
transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_8_p_0(
  MR_Word CalleePPId_9,
  MR_Word SCC_11,
  MR_Word * Result_13,
  MR_Word * MaybeAnalysisStatus_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32);

static void MR_CALL 
transform_hlds__tabling_analysis__check_goals_for_mm_tabling_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tabling_analysis__check_goals_for_mm_tabling_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tabling_analysis__check_goals_for_mm_tabling_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__tabling_analysis__check_goals_for_mm_tabling_7_p_0(
  MR_Word SCC_8,
  MR_Word VarTable_9,
  MR_Word Goals_10,
  MR_Word * Result_11,
  MR_Word * MaybeAnalysisStatus_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17);

static void MR_CALL 
transform_hlds__tabling_analysis__maybe_mm_tabling_analysis_status_2_p_0(
  MR_Word ProcResult_3,
  MR_Word * MaybeAnalysisStatus_4);

static void MR_CALL 
transform_hlds__tabling_analysis__set_mm_tabling_info_4_p_0(
  MR_Word ProcTablingInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_9(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_10(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_12(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_11(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_13(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0(
  MR_Word Debug_6,
  MR_Word Pass1Only_7,
  MR_Word SCC_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_module_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__tabling_analysis____Unify____mm_tabling_analysis_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__tabling_analysis____Compare____mm_tabling_analysis_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__tabling_analysis____Unify____mm_tabling_proc_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__tabling_analysis____Compare____mm_tabling_proc_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__to_term____transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__to_term____transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6);


static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_1[5][2];

static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_2[14][3];

static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_3[4][5];

static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_4[4][6];

static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_5[1][1];

static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_6[2][8];

static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_7[2][7];

static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_8[4][9];

static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_9[1][10];


struct transform_hlds__tabling_analysis__vector_common_type_10_0_s {
  const MR_Word transform_hlds__tabling_analysis__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct transform_hlds__tabling_analysis__vector_common_type_10_0_s transform_hlds__tabling_analysis_vector_common_10[4];



static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_proc_result_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__analysis__any_call__arity0__)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0))
  },
  /* row   4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_analysis_answer_0))
  },
};

static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_2[14][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0__)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_analysis_answer_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_18)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__tabling_analysis__check_goals_for_mm_tabling_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__tabling_analysis__check_goals_for_mm_tabling_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__tabling_analysis__mm_tabling_annotate_goal_list_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__tabling_analysis__mm_tabling_annotate_cases_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_3[4][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__call_pattern__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__)),
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_2[0])),
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_1[3])),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__answer_pattern__arity2__analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_2[1])),
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_1[4])),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_analysis_answer_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_proc_result_0)),
    ((MR_Box) (&transform_hlds__tabling_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_4[4][6] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__analysis__arity3__analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_3[1])),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0)),
    ((MR_Box) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_analysis_answer_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__tabling_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&transform_hlds__tabling_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&transform_hlds__tabling_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0))
  },
};

static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_5[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 2)) },
};

static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_6[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__tabling_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_7[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_mm_tabling_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_8[4][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__tabling_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__tabling_analysis__list__pti_list_1__plain_transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_proc_result_0)),
    ((MR_Box) (&transform_hlds__tabling_analysis__list__pti_list_1__plain_transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_proc_result_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__tabling_analysis_scalar_common_9[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__tabling_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0)),
    ((MR_Box) (&transform_hlds__tabling_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};


static /* final */ const struct transform_hlds__tabling_analysis__vector_common_type_10_0_s transform_hlds__tabling_analysis_vector_common_10[4] = {
  /* row   0 */   { (MR_Integer) 2 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 0 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tabling_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tabling_analysis__list__pti_list_1__plain_transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_proc_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_proc_result_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__tabling_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&analysis__analysis__type_ctor_info_analysis_status_0) }
};

static const MR_Integer transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__functor_number_map_mm_tabling_analysis_answer_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__notag_functor_desc_mm_tabling_analysis_answer_0 = {
  (MR_String) "mm_tabling_analysis_answer",
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_analysis_answer_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__tabling_analysis____Unify____mm_tabling_analysis_answer_0_0_10001)),
  ((MR_Box) (transform_hlds__tabling_analysis____Compare____mm_tabling_analysis_answer_0_0_10001)),
  (MR_String) "transform_hlds.tabling_analysis",
  (MR_String) "mm_tabling_analysis_answer",
  { &transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__notag_functor_desc_mm_tabling_analysis_answer_0 },
  { &transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__notag_functor_desc_mm_tabling_analysis_answer_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__functor_number_map_mm_tabling_analysis_answer_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__tabling_analysis__maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&analysis__analysis__type_ctor_info_analysis_status_0) }
};

static const MR_PseudoTypeInfo transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__field_types_mm_tabling_proc_result_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0),
  (MR_PseudoTypeInfo) (&transform_hlds__tabling_analysis__maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0)
};

static const MR_ConstString transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__field_names_mm_tabling_proc_result_0_0[3] = {
  (MR_String) "mtpr_ppid",
  (MR_String) "mtpr_status",
  (MR_String) "mtpr_maybe_analysis_status"
};

static const MR_DuArgLocn transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__field_locns_mm_tabling_proc_result_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__du_functor_desc_mm_tabling_proc_result_0_0 = {
  (MR_String) "mm_tabling_proc_result",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__field_types_mm_tabling_proc_result_0_0,
  transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__field_names_mm_tabling_proc_result_0_0,
  transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__field_locns_mm_tabling_proc_result_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__du_stag_ordered_mm_tabling_proc_result_0_0[1] = { &transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__du_functor_desc_mm_tabling_proc_result_0_0 };

static const MR_DuPtagLayout transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__du_ptag_ordered_mm_tabling_proc_result_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__du_stag_ordered_mm_tabling_proc_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__du_name_ordered_mm_tabling_proc_result_0[1] = { &transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__du_functor_desc_mm_tabling_proc_result_0_0 };

static const MR_Integer transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__functor_number_map_mm_tabling_proc_result_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_proc_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__tabling_analysis____Unify____mm_tabling_proc_result_0_0_10001)),
  ((MR_Box) (transform_hlds__tabling_analysis____Compare____mm_tabling_proc_result_0_0_10001)),
  (MR_String) "transform_hlds.tabling_analysis",
  (MR_String) "mm_tabling_proc_result",
  { transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__du_name_ordered_mm_tabling_proc_result_0 },
  { transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__du_ptag_ordered_mm_tabling_proc_result_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__functor_number_map_mm_tabling_proc_result_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__tabling_analysis__ClassMethod_for_analysis__to_term____transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__tabling_analysis__ClassMethod_for_analysis__to_term____transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__tabling_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__tabling_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__answer_pattern__arity2__analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__analysis__arity3__analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0__[11] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 6)),
  ((MR_Box) (transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__analysis_name_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__bottom_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__top_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__get_func_info_6_6_p_0_10001))
};

static MR_Word MR_CALL 
transform_hlds__tabling_analysis__IntroducedFrom__func__check_goal_for_mm_tabling__385__1_1_f_0(
  MR_Word LambdaHeadVar__1_102)
{
  MR_Word LambdaHeadVar__2_103 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_102, (MR_Integer) 2))));

  return LambdaHeadVar__2_103;
}

static MR_bool MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__to_term____transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__from_term_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);
  MR_String String_3;
  MR_Word Status_5;
  MR_Word Var_6;
  MR_Word Var_7;

  if (succeeded)
  {
    Var_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    Var_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_6)) == (MR_Integer) 0);
    if (succeeded)
    {
      String_3 = ((MR_String) ((MR_hl_field(0, Var_6, (MR_Integer) 0))));
      succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((strcmp(String_3, (MR_String) "mm_tabled_may_call") == 0))
        {
          Status_5 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(String_3, (MR_String) "mm_tabled_conditional") == 0))
        {
          Status_5 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(String_3, (MR_String) "mm_tabled_will_not_call") == 0))
        {
          Status_5 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          *HeadVar__2_2 = (MR_Word) (Status_5);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__to_term____transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__to_term_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word Status_3 = (MR_Word) (HeadVar__1_1);
  MR_String String_4;
  MR_Word Var_5;
  MR_Word Var_7;

  switch (Status_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      String_4 = (MR_String) "mm_tabled_conditional";
      break;
    case (MR_Integer) 0:
      String_4 = (MR_String) "mm_tabled_may_call";
      break;
    case (MR_Integer) 1:
      String_4 = (MR_String) "mm_tabled_will_not_call";
      break;
  }
  {
    Var_5 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_5, 0) = ((MR_Box) (String_4));
  }
  Var_7 = mercury__term_context__dummy_context_0_f_0();
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_7));
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__equivalent_3_3_p_0(
  MR_Word Status_8,
  MR_Word Status_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (Status_3);
  MR_Integer CastY_12 = (MR_Integer) (Status_8);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_9 = (MR_Word) (Status_3);
    MR_Word ArgY1_10 = (MR_Word) (Status_8);

    succeeded = (ArgX1_9 == ArgY1_10);
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0(
  MR_Word Answer1_4,
  MR_Word Answer2_5)
{
  MR_bool succeeded;
  MR_Word Status1_6 = (MR_Word) (Answer1_4);
  MR_Word Status2_7 = (MR_Word) (Answer2_5);

  switch (Status1_6) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 2:
      succeeded = (Status2_7 == (MR_Integer) 0);
      break;
    case (MR_Integer) 1:
      switch (Status2_7) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      break;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__get_func_info_6_6_p_0(
  MR_Word HeadVar__1_17,
  MR_Word HeadVar__2_18,
  MR_Word HeadVar__3_19)
{
}

static MR_Word MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__top_2_2_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) 0)));
}

static MR_Word MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__bottom_2_2_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) 1)));
}

static MR_Word MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void)
{
  return (MR_Integer) 0;
}

static MR_Integer MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0(void)
{
  return (MR_Integer) 1;
}

static MR_String MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__analysis_name_2_2_f_0(void)
{
  return (MR_String) "mm_tabling_analysis";
}

static void MR_CALL 
transform_hlds__tabling_analysis____Compare____mm_tabling_proc_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_17 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_18 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_17 > Var_18);
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
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__tabling_analysis_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__tabling_analysis____Unify____mm_tabling_proc_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__tabling_analysis____Compare____mm_tabling_analysis_answer_0_0(
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
transform_hlds__tabling_analysis____Unify____mm_tabling_analysis_answer_0_0(
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

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__tabling_analysis__output_proc_name_5_p_0(
  MR_Word Stream_6,
  MR_Word Moduleinfo_7,
  MR_Word PPId_8)
{
  MR_Word Pieces_10;
  MR_String Str_11;

  Pieces_10 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(Moduleinfo_7, (MR_Integer) 0, PPId_8);
  Str_11 = parse_tree__write_error_spec__error_pieces_to_string_1_f_0(Pieces_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\t");
  mercury__io__write_string_4_p_0(Stream_6, Str_11);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
}

static void MR_CALL 
transform_hlds__tabling_analysis__maybe_record_mm_tabling_result_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_18,
  MR_Word * STATE_VARIABLE_AnalysisInfo_19)
{
  MR_Word ShouldWrite_12;

  transform_hlds__intermod_analysis__should_write_mm_tabling_info_6_p_0(ModuleInfo_7, PredId_8, ProcId_10, PredInfo_9, (MR_Integer) 0, &ShouldWrite_12);
  switch (ShouldWrite_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_AnalysisInfo_19 = STATE_VARIABLE_AnalysisInfo_0_18;
      break;
    case (MR_Integer) 1:
      {
        MR_Word PPId_13;
        MR_Word Status_14;
        MR_Word ResultStatus_15;
        MR_Word ModuleName_16;
        MR_Word FuncId_17;
        MR_Word Var_22;
        MR_Word ProcInfo_25;
        MR_Word MaybeProcTablingInfo_26;
        MR_Word _PredInfo_24;

        {
          PPId_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PPId_13, 0) = ((MR_Box) (PredId_8));
          MR_hl_field(0, PPId_13, 1) = ((MR_Box) (ProcId_10));
        }
        hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_7, PPId_13, &_PredInfo_24, &ProcInfo_25);
        hlds__hlds_pred__proc_info_get_mm_tabling_info_2_p_0(ProcInfo_25, &MaybeProcTablingInfo_26);
        if ((MaybeProcTablingInfo_26 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Status_14 = (MR_Integer) 0;
          ResultStatus_15 = (MR_Integer) 2;
        }
        else
        {
          MR_Word ProcTablingInfo_27 = ((MR_Word) ((MR_hl_field(1, MaybeProcTablingInfo_26, (MR_Integer) 0))));
          MR_Word MaybeResultStatus_28;

          Status_14 = ((MR_Unsigned) ((MR_hl_field(0, ProcTablingInfo_27, (MR_Integer) 0))) & (MR_Integer) 3);
          MaybeResultStatus_28 = ((MR_Word) ((MR_hl_field(0, ProcTablingInfo_27, (MR_Integer) 1))));
          if ((MaybeResultStatus_28 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tabling_analysis.lookup_proc_mm_tabling_info\'/4", (MR_String) "no result status");
              return;
            }
          else
            ResultStatus_15 = ((MR_Word) ((MR_hl_field(1, MaybeResultStatus_28, (MR_Integer) 0))));
        }
        transform_hlds__mmc_analysis__module_name_func_id_4_p_0(ModuleInfo_7, PPId_13, &ModuleName_16, &FuncId_17);
        Var_22 = (MR_Word) (Status_14);
        analysis__record_result_7_p_0((MR_Word) (&transform_hlds__tabling_analysis_scalar_common_4[0]), ModuleName_16, FuncId_17, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Var_22)), ResultStatus_15, STATE_VARIABLE_AnalysisInfo_0_18, STATE_VARIABLE_AnalysisInfo_19);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__tabling_analysis__maybe_record_mm_tabling_result_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AnalysisInfo_19;

  transform_hlds__tabling_analysis__maybe_record_mm_tabling_result_2_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AnalysisInfo_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AnalysisInfo_19));
}

static void MR_CALL 
transform_hlds__tabling_analysis__maybe_record_mm_tabling_result_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_10,
  MR_Word * STATE_VARIABLE_AnalysisInfo_11)
{
  MR_Word PredInfo_8;
  MR_Word ProcIds_9;
  MR_Word Var_12;
  MR_Box conv1_STATE_VARIABLE_AnalysisInfo_11;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_8);
  ProcIds_9 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_8);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_8[3]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__tabling_analysis__maybe_record_mm_tabling_result_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (PredId_6));
    MR_hl_field(0, Var_12, 5) = ((MR_Box) (PredInfo_8));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), Var_12, ProcIds_9, ((MR_Box) (STATE_VARIABLE_AnalysisInfo_0_10)), &conv1_STATE_VARIABLE_AnalysisInfo_11);
  *STATE_VARIABLE_AnalysisInfo_11 = ((MR_Word) (conv1_STATE_VARIABLE_AnalysisInfo_11));
}

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_case_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_Case_0_15,
  MR_Word * STATE_VARIABLE_Case_16,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  MR_Word MainConsId_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_15, (MR_Integer) 0))));
  MR_Word OtherConsIds_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_15, (MR_Integer) 1))));
  MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_15, (MR_Integer) 2))));
  MR_Word Goal_14;
  MR_Word GoalExpr0_19 = ((MR_Word) ((MR_hl_field(0, Goal0_13, (MR_Integer) 0))));
  MR_Word GoalInfo0_20 = ((MR_Word) ((MR_hl_field(0, Goal0_13, (MR_Integer) 1))));
  MR_Word GoalExpr_21;
  MR_Word GoalInfo_22;

  transform_hlds__tabling_analysis__mm_tabling_annotate_goal_2_6_p_0(VarTable_7, GoalExpr0_19, &GoalExpr_21, Status_9, STATE_VARIABLE_ModuleInfo_0_17, STATE_VARIABLE_ModuleInfo_18);
  switch (*Status_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 0:
      GoalInfo_22 = GoalInfo0_20;
      break;
    case (MR_Integer) 1:
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 19, GoalInfo0_20, &GoalInfo_22);
      break;
  }
  {
    Goal_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_14, 0) = ((MR_Box) (GoalExpr_21));
    MR_hl_field(0, Goal_14, 1) = ((MR_Box) (GoalInfo_22));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Case_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Goal_14));
  }
}

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_proc_3_p_0(
  MR_Word PPId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  MR_Word PredInfo_8;
  MR_Word VarTable_9;
  MR_Word _Status_10;
  MR_Word STATE_VARIABLE_ProcInfo_13_13;
  MR_Word STATE_VARIABLE_Body_14_14;
  MR_Word STATE_VARIABLE_Body_15_15;
  MR_Word STATE_VARIABLE_ModuleInfo_16_16;
  MR_Word STATE_VARIABLE_ProcInfo_17_17;
  MR_Word GoalExpr0_18;
  MR_Word GoalInfo0_19;
  MR_Word GoalExpr_20;
  MR_Word GoalInfo_21;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_11, PPId_4, &PredInfo_8, &STATE_VARIABLE_ProcInfo_13_13);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_13_13, &STATE_VARIABLE_Body_14_14);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_13_13, &VarTable_9);
  GoalExpr0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Body_14_14, (MR_Integer) 0))));
  GoalInfo0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Body_14_14, (MR_Integer) 1))));
  transform_hlds__tabling_analysis__mm_tabling_annotate_goal_2_6_p_0(VarTable_9, GoalExpr0_18, &GoalExpr_20, &_Status_10, STATE_VARIABLE_ModuleInfo_0_11, &STATE_VARIABLE_ModuleInfo_16_16);
  switch (_Status_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 0:
      GoalInfo_21 = GoalInfo0_19;
      break;
    case (MR_Integer) 1:
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 19, GoalInfo0_19, &GoalInfo_21);
      break;
  }
  {
    STATE_VARIABLE_Body_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Body_15_15, 0) = ((MR_Box) (GoalExpr_20));
    MR_hl_field(0, STATE_VARIABLE_Body_15_15, 1) = ((MR_Box) (GoalInfo_21));
  }
  hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Body_15_15, STATE_VARIABLE_ProcInfo_13_13, &STATE_VARIABLE_ProcInfo_17_17);
  hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_4, PredInfo_8, STATE_VARIABLE_ProcInfo_17_17, STATE_VARIABLE_ModuleInfo_16_16, STATE_VARIABLE_ModuleInfo_12);
}

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_goal_2_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_GoalExpr_0_90,
  MR_Word * STATE_VARIABLE_GoalExpr_91,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_92,
  MR_Word * STATE_VARIABLE_ModuleInfo_93)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) STATE_VARIABLE_GoalExpr_0_90)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_84 = (MR_Word) ((MR_Word) (STATE_VARIABLE_GoalExpr_0_90));
        MR_Word SubGoal_85;

        transform_hlds__tabling_analysis__mm_tabling_annotate_goal_6_p_0(VarTable_7, SubGoal0_84, &SubGoal_85, Status_9, STATE_VARIABLE_ModuleInfo_0_92, STATE_VARIABLE_ModuleInfo_93);
        *STATE_VARIABLE_GoalExpr_91 = (MR_Word) ((MR_Word) (SubGoal_85));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Kind_14 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 3))));

        switch (MR_tag((MR_Word) Kind_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 2:
            {
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Kind_14, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tabling_analysis.mm_tabling_annotate_goal_2\'/6", (MR_String) "complicated unify");
                  return;
                }
                break;
            }
            break;
        }
        *Status_9 = (MR_Integer) 1;
        *STATE_VARIABLE_GoalExpr_91 = STATE_VARIABLE_GoalExpr_0_90;
        *STATE_VARIABLE_ModuleInfo_93 = STATE_VARIABLE_ModuleInfo_0_92;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CalleePredId_36 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 0))));
        MR_Integer CalleeProcId_37 = ((MR_Integer) ((MR_hl_field(2, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 1))));
        MR_Word CalleePPId_42;

        {
          CalleePPId_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CalleePPId_42, 0) = ((MR_Box) (CalleePredId_36));
          MR_hl_field(0, CalleePPId_42, 1) = ((MR_Box) (CalleeProcId_37));
        }
        transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_6_p_0(CalleePPId_42, Status_9, STATE_VARIABLE_ModuleInfo_0_92, STATE_VARIABLE_ModuleInfo_93);
        *STATE_VARIABLE_GoalExpr_91 = STATE_VARIABLE_GoalExpr_0_90;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_50 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) GenericCall_50)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Status_9 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                *Status_9 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                *Status_9 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *Status_9 = (MR_Integer) 1;
                break;
            }
            *STATE_VARIABLE_GoalExpr_91 = STATE_VARIABLE_GoalExpr_0_90;
            *STATE_VARIABLE_ModuleInfo_93 = STATE_VARIABLE_ModuleInfo_0_92;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attributes_43 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 1))));

            {
              MR_Word Var_116;

              Var_116 = parse_tree__prog_data_foreign__get_may_call_mm_tabled_1_f_0(Attributes_43);
              succeeded = (Var_116 == (MR_Integer) 1);
            }
            if (!(succeeded))
            {
              MR_Word Var_117;
              MR_Word Var_118;

              Var_117 = parse_tree__prog_data_foreign__get_may_call_mm_tabled_1_f_0(Attributes_43);
              succeeded = (Var_117 == (MR_Integer) 2);
              if (succeeded)
              {
                Var_118 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_43);
                succeeded = (Var_118 == (MR_Integer) 1);
              }
            }
            if (succeeded)
              *Status_9 = (MR_Integer) 1;
            else
              *Status_9 = (MR_Integer) 0;
            *STATE_VARIABLE_GoalExpr_91 = STATE_VARIABLE_GoalExpr_0_90;
            *STATE_VARIABLE_ModuleInfo_93 = STATE_VARIABLE_ModuleInfo_0_92;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_65 = ((MR_Unsigned) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Conjuncts0_66 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 2))));
            MR_Word Conjuncts_67;

            transform_hlds__tabling_analysis__mm_tabling_annotate_goal_list_6_p_0(VarTable_7, Conjuncts0_66, &Conjuncts_67, Status_9, STATE_VARIABLE_ModuleInfo_0_92, STATE_VARIABLE_ModuleInfo_93);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_GoalExpr_91 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_65));
              MR_hl_field(3, base, 2) = ((MR_Box) (Conjuncts_67));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_68 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 1))));
            MR_Word Disjuncts_69;

            transform_hlds__tabling_analysis__mm_tabling_annotate_goal_list_6_p_0(VarTable_7, Disjuncts0_68, &Disjuncts_69, Status_9, STATE_VARIABLE_ModuleInfo_0_92, STATE_VARIABLE_ModuleInfo_93);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_GoalExpr_91 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Disjuncts_69));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_70 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 1))));
            MR_Word CanFail_71 = ((MR_Unsigned) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_72 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 3))));
            MR_Word Cases_73;

            transform_hlds__tabling_analysis__mm_tabling_annotate_cases_6_p_0(VarTable_7, Cases0_72, &Cases_73, Status_9, STATE_VARIABLE_ModuleInfo_0_92, STATE_VARIABLE_ModuleInfo_93);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_GoalExpr_91 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_70));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_71));
              MR_hl_field(3, base, 3) = ((MR_Box) (Cases_73));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_86 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 1))));
            MR_Word SubGoal0_115 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 2))));
            MR_Word FGT_88;

            succeeded = ((((MR_tag((MR_Word) Reason_86)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_86, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_88 = ((MR_Unsigned) ((MR_hl_field(3, Reason_86, (MR_Integer) 2))) & (MR_Integer) 3);
              switch (FGT_88) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            if (succeeded)
            {
              *Status_9 = (MR_Integer) 1;
              *STATE_VARIABLE_ModuleInfo_93 = STATE_VARIABLE_ModuleInfo_0_92;
              *STATE_VARIABLE_GoalExpr_91 = STATE_VARIABLE_GoalExpr_0_90;
            }
            else
            {
              MR_Word SubGoal_113;

              transform_hlds__tabling_analysis__mm_tabling_annotate_goal_6_p_0(VarTable_7, SubGoal0_115, &SubGoal_113, Status_9, STATE_VARIABLE_ModuleInfo_0_92, STATE_VARIABLE_ModuleInfo_93);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_GoalExpr_91 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Reason_86));
                MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_113));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_74 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 1))));
            MR_Word Cond0_75 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 2))));
            MR_Word Then0_76 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 3))));
            MR_Word Else0_77 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_90, (MR_Integer) 4))));
            MR_Word Cond_78;
            MR_Word CondStatus_79;
            MR_Word Then_80;
            MR_Word ThenStatus_81;
            MR_Word Else_82;
            MR_Word ElseStatus_83;
            MR_Word STATE_VARIABLE_ModuleInfo_103_103;
            MR_Word STATE_VARIABLE_ModuleInfo_104_104;

            transform_hlds__tabling_analysis__mm_tabling_annotate_goal_6_p_0(VarTable_7, Cond0_75, &Cond_78, &CondStatus_79, STATE_VARIABLE_ModuleInfo_0_92, &STATE_VARIABLE_ModuleInfo_103_103);
            transform_hlds__tabling_analysis__mm_tabling_annotate_goal_6_p_0(VarTable_7, Then0_76, &Then_80, &ThenStatus_81, STATE_VARIABLE_ModuleInfo_103_103, &STATE_VARIABLE_ModuleInfo_104_104);
            transform_hlds__tabling_analysis__mm_tabling_annotate_goal_6_p_0(VarTable_7, Else0_77, &Else_82, &ElseStatus_83, STATE_VARIABLE_ModuleInfo_104_104, STATE_VARIABLE_ModuleInfo_93);
            succeeded = (CondStatus_79 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (ThenStatus_81 == (MR_Integer) 1);
              if (succeeded)
                succeeded = (ElseStatus_83 == (MR_Integer) 1);
            }
            if (succeeded)
              *Status_9 = (MR_Integer) 1;
            else
              *Status_9 = (MR_Integer) 0;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_GoalExpr_91 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_74));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_78));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_80));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_82));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tabling_analysis.mm_tabling_annotate_goal_2\'/6", (MR_String) "shorthand goal");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_goal_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  MR_Word GoalExpr0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_15, (MR_Integer) 0))));
  MR_Word GoalInfo0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_15, (MR_Integer) 1))));
  MR_Word GoalExpr_13;
  MR_Word GoalInfo_14;

  transform_hlds__tabling_analysis__mm_tabling_annotate_goal_2_6_p_0(VarTable_7, GoalExpr0_11, &GoalExpr_13, Status_9, STATE_VARIABLE_ModuleInfo_0_17, STATE_VARIABLE_ModuleInfo_18);
  switch (*Status_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 0:
      GoalInfo_14 = GoalInfo0_12;
      break;
    case (MR_Integer) 1:
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 19, GoalInfo0_12, &GoalInfo_14);
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Goal_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_14));
  }
}

static void MR_CALL 
transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_6_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
}

static void MR_CALL 
transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_6_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  {
    MR_String _TypeSpecPredName_20;

    mdbcomp__prim_data__special_pred_name_arity_4_p_0((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__SpecialPredId_18, &(env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__GenericPredName_19, &_TypeSpecPredName_20, &(env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__Var_35);
    (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__PredFormArityInt_17 == (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__Var_35);
    if ((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__succeeded)
    {
      (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__Name_16, (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__GenericPredName_19) == 0);
      if ((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__succeeded)
        transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_6_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_6_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
    {
      {
        MR_Word ModuleName_15;
        MR_Word Var_30;

        ModuleName_15 = hlds__hlds_pred__pred_info_module_1_f_0((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__CalleePredInfo_14);
        (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(ModuleName_15);
        if ((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__Name_16 = hlds__hlds_pred__pred_info_name_1_f_0((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__CalleePredInfo_14);
          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__CalleePredInfo_14, &Var_30);
          (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__PredFormArityInt_17 = (MR_Integer) (Var_30);
          {
            MR_Integer slot_1 = (MR_Integer) 0;

            do
            {
              (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__SpecialPredId_18 = ((&transform_hlds__tabling_analysis_vector_common_10[2 + slot_1]))->transform_hlds__tabling_analysis__vector_common_type_10_0__vct_10_f_0;
              transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_6_p_0_2(env_ptr);
              slot_1 = (MR_Integer) ((MR_Unsigned) slot_1 + (MR_Unsigned) 1);
            }
            while ((slot_1 < (MR_Integer) 2));
          }
        }
      }
      (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_6_p_0(
  MR_Word CalleePPId_8,
  MR_Word * Status_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29)
{
  struct transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_0_s env;

  {
    MR_Word CalleePredId_12 = ((MR_Word) ((MR_hl_field(0, CalleePPId_8, (MR_Integer) 0))));
    MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(0, CalleePPId_8, (MR_Integer) 1))));

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_28, CalleePredId_12, &(env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__CalleePredInfo_14);
    (env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0((env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__CalleePredInfo_14);
    if ((env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__succeeded)
    {
      *Status_10 = (MR_Integer) 1;
      *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
    }
    else
    {
      transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_6_p_0_3(&env);
      if ((env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        *Status_10 = (MR_Integer) 0;
        *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
      }
      else
      {
        MR_Word Globals_21;
        MR_Word IntermodAnalysis_22;

        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_28, &Globals_21);
        libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 504, &IntermodAnalysis_22);
        (env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__succeeded = (IntermodAnalysis_22 == (MR_Integer) 1);
        if ((env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__succeeded)
          (env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0((env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__CalleePredInfo_14);
        if ((env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_109_95_116_97_98_108_105_110_103_95_97_110_110_111_116_97_116_101_95_99_97_108_108_95_95_91_49_44_32_51_93_95_48_95_54_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          MR_Word AnalysisInfo0_36;
          MR_Word AnalysisInfo_37;
          MR_Word ModuleName_38;
          MR_Word FuncId_39;
          MR_Word MaybeBestStatus_41;

          hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_28, &AnalysisInfo0_36);
          transform_hlds__mmc_analysis__module_name_func_id_4_p_0(STATE_VARIABLE_ModuleInfo_0_28, CalleePPId_8, &ModuleName_38, &FuncId_39);
          analysis__lookup_best_result_6_p_0((MR_Word) (&transform_hlds__tabling_analysis_scalar_common_4[0]), AnalysisInfo0_36, ModuleName_38, FuncId_39, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), &MaybeBestStatus_41);
          if ((MaybeBestStatus_41 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Result_23;
            MR_Word Answer_45;
            MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
            MR_Box conv1_Answer_45;

            func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_4[0]), (MR_Integer) 0)), (MR_Integer) 9))));
            conv1_Answer_45 = func_0(((MR_Box) ((MR_Word) (&transform_hlds__tabling_analysis_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)));
            Answer_45 = ((MR_Word) (conv1_Answer_45));
            Result_23 = (MR_Word) (Answer_45);
            analysis__record_request_6_p_0((MR_Word) (&transform_hlds__tabling_analysis_scalar_common_3[0]), (MR_String) "mm_tabling_analysis", ModuleName_38, FuncId_39, ((MR_Box) ((MR_Integer) 0)), AnalysisInfo0_36, &AnalysisInfo_37);
            switch (Result_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                *Status_10 = (MR_Integer) 1;
                break;
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                *Status_10 = Result_23;
                break;
            }
          }
          else
          {
            MR_Word BestAnswer_43;
            MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, MaybeBestStatus_41, (MR_Integer) 0))));
            MR_Word Result_60;
            MR_Word AnalysisStatus_61;
            MR_Unsigned packed_word_0;
            MR_Word Var_49;

            BestAnswer_43 = ((MR_Word) ((MR_hl_field(0, Var_47, (MR_Integer) 1))));
            packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_47, (MR_Integer) 2)));
            AnalysisStatus_61 = ((MR_Unsigned) ((MR_hl_field(0, Var_47, (MR_Integer) 2))) & (MR_Integer) 3);
            Result_60 = (MR_Word) (BestAnswer_43);
            analysis__record_dependency_7_p_0((MR_Word) (&transform_hlds__tabling_analysis_scalar_common_4[0]), ModuleName_38, FuncId_39, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), AnalysisInfo0_36, &AnalysisInfo_37);
            switch (AnalysisStatus_61) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tabling_analysis.mm_tabling_annotate_call\'/6", (MR_String) "invalid analysis result while annotating goals");
                  return;
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 1:
                switch (Result_60) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                    *Status_10 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *Status_10 = Result_60;
                    break;
                }
                break;
            }
          }
          hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_37, STATE_VARIABLE_ModuleInfo_0_28, STATE_VARIABLE_ModuleInfo_29);
        }
        else
        {
          MR_Word MaybeResult_25;
          MR_Word ProcInfo_59;
          MR_Word _PredInfo_58;

          hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_28, CalleePPId_8, &_PredInfo_58, &ProcInfo_59);
          hlds__hlds_pred__proc_info_get_mm_tabling_info_2_p_0(ProcInfo_59, &MaybeResult_25);
          if ((MaybeResult_25 == (MR_Word) ((MR_Unsigned) 0U)))
            *Status_10 = (MR_Integer) 0;
          else
          {
            MR_Word CalleeProcTablingInfo_26 = ((MR_Word) ((MR_hl_field(1, MaybeResult_25, (MR_Integer) 0))));
            MR_Word Var_27;
            MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, CalleeProcTablingInfo_26, (MR_Integer) 0)));

            *Status_10 = ((MR_Unsigned) ((MR_hl_field(0, CalleeProcTablingInfo_26, (MR_Integer) 0))) & (MR_Integer) 3);
            Var_27 = ((MR_Word) ((MR_hl_field(0, CalleeProcTablingInfo_26, (MR_Integer) 1))));
          }
          *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_cases_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;

  transform_hlds__tabling_analysis__combine_mm_tabling_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_cases_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Case_16;
  MR_Word conv1_Status_9;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_18;

  transform_hlds__tabling_analysis__mm_tabling_annotate_case_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Case_16, &conv1_Status_9, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_18);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Case_16));
  *wrapper_arg_3 = ((MR_Box) (conv1_Status_9));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_18));
}

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_cases_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_Cases_0_12,
  MR_Word * STATE_VARIABLE_Cases_13,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  MR_Word Statuses_11;
  MR_Word Var_16;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_15;
  MR_Box conv5_Status_9;

  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_8[2]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (transform_hlds__tabling_analysis__mm_tabling_annotate_cases_6_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (VarTable_7));
  }
  mercury__list__map2_foldl_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_16, STATE_VARIABLE_Cases_0_12, STATE_VARIABLE_Cases_13, &Statuses_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv3_STATE_VARIABLE_ModuleInfo_15);
  *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_15));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_2[13]), Statuses_11, ((MR_Box) ((MR_Integer) 1)), &conv5_Status_9);
  *Status_9 = ((MR_Word) (conv5_Status_9));
}

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_goal_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;

  transform_hlds__tabling_analysis__combine_mm_tabling_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_goal_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Goal_16;
  MR_Word conv1_Status_9;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_18;

  transform_hlds__tabling_analysis__mm_tabling_annotate_goal_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Goal_16, &conv1_Status_9, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_18);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Goal_16));
  *wrapper_arg_3 = ((MR_Box) (conv1_Status_9));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_18));
}

static void MR_CALL 
transform_hlds__tabling_analysis__mm_tabling_annotate_goal_list_6_p_0(
  MR_Word VarTable_7,
  MR_Word STATE_VARIABLE_Goals_0_12,
  MR_Word * STATE_VARIABLE_Goals_13,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  MR_Word Statuses_11;
  MR_Word Var_16;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_15;
  MR_Box conv5_Status_9;

  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_8[1]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (transform_hlds__tabling_analysis__mm_tabling_annotate_goal_list_6_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (VarTable_7));
  }
  mercury__list__map2_foldl_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_16, STATE_VARIABLE_Goals_0_12, STATE_VARIABLE_Goals_13, &Statuses_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv3_STATE_VARIABLE_ModuleInfo_15);
  *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_15));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_2[12]), Statuses_11, ((MR_Box) ((MR_Integer) 1)), &conv5_Status_9);
  *Status_9 = ((MR_Word) (conv5_Status_9));
}

static void MR_CALL 
transform_hlds__tabling_analysis__combine_maybe_mm_tabling_analysis_status_3_p_0(
  MR_Word MaybeStatusA_4,
  MR_Word MaybeStatusB_5,
  MR_Word * MaybeStatus_6)
{
  MR_bool succeeded = (MaybeStatusA_4 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word StatusA_7;
  MR_Word StatusB_8;

  if (succeeded)
  {
    StatusA_7 = ((MR_Word) ((MR_hl_field(1, MaybeStatusA_4, (MR_Integer) 0))));
    succeeded = (MaybeStatusB_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      StatusB_8 = ((MR_Word) ((MR_hl_field(1, MaybeStatusB_5, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word Var_9;

    Var_9 = analysis__lub_2_f_0(StatusA_7, StatusB_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeStatus_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_9));
    }
  }
  else
    *MaybeStatus_6 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
transform_hlds__tabling_analysis__combine_mm_tabling_status_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
      }
      break;
    case (MR_Integer) 0:
      *HeadVar__3_3 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      *HeadVar__3_3 = HeadVar__2_2;
      break;
  }
}

static void MR_CALL 
transform_hlds__tabling_analysis__check_proc_for_mm_tabling_6_p_0(
  MR_Word SCC_7,
  MR_Word PPId_8,
  MR_Word STATE_VARIABLE_Results_0_22,
  MR_Word * STATE_VARIABLE_Results_23,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25)
{
  MR_Word ProcInfo_12;
  MR_Word EvalMethod_13;
  MR_Word Result_15;
  MR_Word MaybeAnalysisStatus_16;
  MR_Word Var_32;
  MR_Word Var_11;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_24, PPId_8, &Var_11, &ProcInfo_12);
  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_12, &EvalMethod_13);
  if ((EvalMethod_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Body_20;
    MR_Word VarTable_21;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_12, &Body_20);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_12, &VarTable_21);
    transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0(SCC_7, VarTable_21, Body_20, &Result_15, &MaybeAnalysisStatus_16, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
  }
  else
  {
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(1, EvalMethod_13, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) Var_42)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Body_34;
          MR_Word VarTable_35;

          hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_12, &Body_34);
          hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_12, &VarTable_35);
          transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0(SCC_7, VarTable_35, Body_34, &Result_15, &MaybeAnalysisStatus_16, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Body_36;
          MR_Word VarTable_37;

          hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_12, &Body_36);
          hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_12, &VarTable_37);
          transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0(SCC_7, VarTable_37, Body_36, &Result_15, &MaybeAnalysisStatus_16, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Body_38;
          MR_Word VarTable_39;

          hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_12, &Body_38);
          hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_12, &VarTable_39);
          transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0(SCC_7, VarTable_39, Body_38, &Result_15, &MaybeAnalysisStatus_16, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
        }
        break;
      case (MR_Integer) 3:
        {
          Result_15 = (MR_Integer) 0;
          MaybeAnalysisStatus_16 = (MR_Word) (MR_mkword(1, &transform_hlds__tabling_analysis_scalar_common_5[0]));
          *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
        }
        break;
    }
  }
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (PPId_8));
    MR_hl_field(0, Var_32, 1) = (MR_Box) ((MR_Unsigned) (Result_15));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) (MaybeAnalysisStatus_16));
  }
  mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_proc_result_0), ((MR_Box) (Var_32)), STATE_VARIABLE_Results_0_22, STATE_VARIABLE_Results_23);
}

static MR_Box MR_CALL 
transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv16_LambdaHeadVar__2_103;

  conv16_LambdaHeadVar__2_103 = transform_hlds__tabling_analysis__IntroducedFrom__func__check_goal_for_mm_tabling__385__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv16_LambdaHeadVar__2_103));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_MaybeStatus_6;

  transform_hlds__tabling_analysis__combine_maybe_mm_tabling_analysis_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_MaybeStatus_6);
  *wrapper_arg_3 = ((MR_Box) (conv14_MaybeStatus_6));
}

static void MR_CALL 
transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__3_3;

  transform_hlds__tabling_analysis__combine_mm_tabling_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv12_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_Result_11;
  MR_Word conv9_MaybeAnalysisStatus_12;
  MR_Word conv8_STATE_VARIABLE_ModuleInfo_88;

  transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv10_Result_11, &conv9_MaybeAnalysisStatus_12, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_ModuleInfo_88);
  *wrapper_arg_2 = ((MR_Box) (conv10_Result_11));
  *wrapper_arg_3 = ((MR_Box) (conv9_MaybeAnalysisStatus_12));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_ModuleInfo_88));
}

static void MR_CALL 
transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_MaybeStatus_6;

  transform_hlds__tabling_analysis__combine_maybe_mm_tabling_analysis_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_MaybeStatus_6);
  *wrapper_arg_3 = ((MR_Box) (conv6_MaybeStatus_6));
}

static void MR_CALL 
transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;

  transform_hlds__tabling_analysis__combine_mm_tabling_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Result_11;
  MR_Word conv1_MaybeAnalysisStatus_12;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_88;

  transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_Result_11, &conv1_MaybeAnalysisStatus_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_88);
  *wrapper_arg_2 = ((MR_Box) (conv2_Result_11));
  *wrapper_arg_3 = ((MR_Box) (conv1_MaybeAnalysisStatus_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_88));
}

static void MR_CALL 
transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0(
  MR_Word SCC_8,
  MR_Word VarTable_9,
  MR_Word Goal_10,
  MR_Word * Result_11,
  MR_Word * MaybeAnalysisStatus_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_87,
  MR_Word * STATE_VARIABLE_ModuleInfo_88)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_14 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_70 = (MR_Word) ((MR_Word) (GoalExpr_14));
          MR_Word next_value_of_Goal_10 = SubGoal_70;

          // direct tailcall eliminated
          ;
          Goal_10 = next_value_of_Goal_10;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Kind_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr_14, (MR_Integer) 3))));

          *Result_11 = (MR_Integer) 1;
          *MaybeAnalysisStatus_12 = (MR_Word) (MR_mkword(1, &transform_hlds__tabling_analysis_scalar_common_5[0]));
          switch (MR_tag((MR_Word) Kind_19)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
              }
              break;
            case (MR_Integer) 2:
              {
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Kind_19, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tabling_analysis.check_goal_for_mm_tabling\'/7", (MR_String) "complicated unify");
                    return;
                  }
                  break;
              }
              break;
          }
          *STATE_VARIABLE_ModuleInfo_88 = STATE_VARIABLE_ModuleInfo_0_87;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CalleePredId_41 = ((MR_Word) ((MR_hl_field(2, GoalExpr_14, (MR_Integer) 0))));
          MR_Integer CalleeProcId_42 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_14, (MR_Integer) 1))));
          MR_Word CalleePPId_47;

          {
            CalleePPId_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CalleePPId_47, 0) = ((MR_Box) (CalleePredId_41));
            MR_hl_field(0, CalleePPId_47, 1) = ((MR_Box) (CalleeProcId_42));
          }
          transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_8_p_0(CalleePPId_47, SCC_8, Result_11, MaybeAnalysisStatus_12, STATE_VARIABLE_ModuleInfo_0_87, STATE_VARIABLE_ModuleInfo_88);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Details_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Details_48)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Result_11 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  *Result_11 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  *Result_11 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *Result_11 = (MR_Integer) 1;
                  break;
              }
              *MaybeAnalysisStatus_12 = (MR_Word) (MR_mkword(1, &transform_hlds__tabling_analysis_scalar_common_5[0]));
              *STATE_VARIABLE_ModuleInfo_88 = STATE_VARIABLE_ModuleInfo_0_87;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 1))));

              {
                MR_Word Var_118;

                Var_118 = parse_tree__prog_data_foreign__get_may_call_mm_tabled_1_f_0(Attributes_63);
                succeeded = (Var_118 == (MR_Integer) 1);
              }
              if (!(succeeded))
              {
                MR_Word Var_119;
                MR_Word Var_120;

                Var_119 = parse_tree__prog_data_foreign__get_may_call_mm_tabled_1_f_0(Attributes_63);
                succeeded = (Var_119 == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_120 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_63);
                  succeeded = (Var_120 == (MR_Integer) 1);
                }
              }
              if (succeeded)
                *Result_11 = (MR_Integer) 1;
              else
                *Result_11 = (MR_Integer) 0;
              *MaybeAnalysisStatus_12 = (MR_Word) (MR_mkword(1, &transform_hlds__tabling_analysis_scalar_common_5[0]));
              *STATE_VARIABLE_ModuleInfo_88 = STATE_VARIABLE_ModuleInfo_0_87;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 2))));
              MR_Word Results_121;
              MR_Word MaybeAnalysisStatuses_122;
              MR_Word Var_123;
              MR_Box conv3_STATE_VARIABLE_ModuleInfo_88;
              MR_Box conv5_Result_11;
              MR_Box conv7_MaybeAnalysisStatus_12;

              {
                Var_123 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_123, 0) = ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_9[0]));
                MR_hl_field(0, Var_123, 1) = ((MR_Box) (transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_1));
                MR_hl_field(0, Var_123, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_123, 3) = ((MR_Box) (SCC_8));
                MR_hl_field(0, Var_123, 4) = ((MR_Box) (VarTable_9));
              }
              mercury__list__map2_foldl_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_123, Goals_75, &Results_121, &MaybeAnalysisStatuses_122, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_87)), &conv3_STATE_VARIABLE_ModuleInfo_88);
              *STATE_VARIABLE_ModuleInfo_88 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_88));
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_2[7]), Results_121, ((MR_Box) ((MR_Integer) 1)), &conv5_Result_11);
              *Result_11 = ((MR_Word) (conv5_Result_11));
              mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tabling_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_2[8]), MaybeAnalysisStatuses_122, ((MR_Box) (MR_mkword(1, &transform_hlds__tabling_analysis_scalar_common_5[0]))), &conv7_MaybeAnalysisStatus_12);
              *MaybeAnalysisStatus_12 = ((MR_Word) (conv7_MaybeAnalysisStatus_12));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_115 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 1))));
              MR_Word Results_132;
              MR_Word MaybeAnalysisStatuses_133;
              MR_Word Var_134;
              MR_Box conv11_STATE_VARIABLE_ModuleInfo_88;
              MR_Box conv13_Result_11;
              MR_Box conv15_MaybeAnalysisStatus_12;

              {
                Var_134 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_134, 0) = ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_9[0]));
                MR_hl_field(0, Var_134, 1) = ((MR_Box) (transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0_4));
                MR_hl_field(0, Var_134, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_134, 3) = ((MR_Box) (SCC_8));
                MR_hl_field(0, Var_134, 4) = ((MR_Box) (VarTable_9));
              }
              mercury__list__map2_foldl_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_134, Goals_115, &Results_132, &MaybeAnalysisStatuses_133, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_87)), &conv11_STATE_VARIABLE_ModuleInfo_88);
              *STATE_VARIABLE_ModuleInfo_88 = ((MR_Word) (conv11_STATE_VARIABLE_ModuleInfo_88));
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_2[9]), Results_132, ((MR_Box) ((MR_Integer) 1)), &conv13_Result_11);
              *Result_11 = ((MR_Word) (conv13_Result_11));
              mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tabling_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_2[10]), MaybeAnalysisStatuses_133, ((MR_Box) (MR_mkword(1, &transform_hlds__tabling_analysis_scalar_common_5[0]))), &conv15_MaybeAnalysisStatus_12);
              *MaybeAnalysisStatus_12 = ((MR_Word) (conv15_MaybeAnalysisStatus_12));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 3))));
              MR_Word Goals_117;

              Goals_117 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_2[11]), Cases_82);
              transform_hlds__tabling_analysis__check_goals_for_mm_tabling_7_p_0(SCC_8, VarTable_9, Goals_117, Result_11, MaybeAnalysisStatus_12, STATE_VARIABLE_ModuleInfo_0_87, STATE_VARIABLE_ModuleInfo_88);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 1))));
              MR_Word SubGoal_107 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 2))));
              MR_Word FGT_73;

              succeeded = ((((MR_tag((MR_Word) Reason_71)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_71, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_73 = ((MR_Unsigned) ((MR_hl_field(3, Reason_71, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_73) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
              {
                *Result_11 = (MR_Integer) 1;
                *MaybeAnalysisStatus_12 = (MR_Word) (MR_mkword(1, &transform_hlds__tabling_analysis_scalar_common_5[0]));
                *STATE_VARIABLE_ModuleInfo_88 = STATE_VARIABLE_ModuleInfo_0_87;
              }
              else
              {
                MR_Word next_value_of_Goal_10 = SubGoal_107;

                // direct tailcall eliminated
                ;
                Goal_10 = next_value_of_Goal_10;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 2))));
              MR_Word Then_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 3))));
              MR_Word Else_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 4))));
              MR_Word Var_98;
              MR_Word Var_99;
              MR_Word Goals_116;

              {
                Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_99, 0) = ((MR_Box) (Else_79));
                MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_98, 0) = ((MR_Box) (Then_78));
                MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_99));
              }
              {
                Goals_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Goals_116, 0) = ((MR_Box) (Cond_77));
                MR_hl_field(1, Goals_116, 1) = ((MR_Box) (Var_98));
              }
              transform_hlds__tabling_analysis__check_goals_for_mm_tabling_7_p_0(SCC_8, VarTable_9, Goals_116, Result_11, MaybeAnalysisStatus_12, STATE_VARIABLE_ModuleInfo_0_87, STATE_VARIABLE_ModuleInfo_88);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tabling_analysis.check_goal_for_mm_tabling\'/7", (MR_String) "shorthand");
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
transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_8_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
}

static void MR_CALL 
transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_8_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  {
    MR_String _TypeSpecificPredName_24;

    mdbcomp__prim_data__special_pred_name_arity_4_p_0((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__SpecialPredId_22, &(env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__GenericPredName_23, &_TypeSpecificPredName_24, &(env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_41);
    (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__PredFormArityInt_21 == (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_41);
    if ((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
    {
      (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Name_20, (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__GenericPredName_23) == 0);
      if ((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
        transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_8_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_8_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
    {
      {
        MR_Word ModuleName_19;
        MR_Word Var_35;

        ModuleName_19 = hlds__hlds_pred__pred_info_module_1_f_0((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CalleePredInfo_18);
        (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(ModuleName_19);
        if ((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Name_20 = hlds__hlds_pred__pred_info_name_1_f_0((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CalleePredInfo_18);
          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0((env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CalleePredInfo_18, &Var_35);
          (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__PredFormArityInt_21 = (MR_Integer) (Var_35);
          {
            MR_Integer slot_1 = (MR_Integer) 0;

            do
            {
              (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__SpecialPredId_22 = ((&transform_hlds__tabling_analysis_vector_common_10[0 + slot_1]))->transform_hlds__tabling_analysis__vector_common_type_10_0__vct_10_f_0;
              transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_8_p_0_2(env_ptr);
              slot_1 = (MR_Integer) ((MR_Unsigned) slot_1 + (MR_Unsigned) 1);
            }
            while ((slot_1 < (MR_Integer) 2));
          }
        }
      }
      (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_8_p_0(
  MR_Word CalleePPId_9,
  MR_Word SCC_11,
  MR_Word * Result_13,
  MR_Word * MaybeAnalysisStatus_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32)
{
  struct transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s env;

  {
    MR_Word CalleePredId_16 = ((MR_Word) ((MR_hl_field(0, CalleePPId_9, (MR_Integer) 0))));
    MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, CalleePPId_9, (MR_Integer) 1))));

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, CalleePredId_16, &(env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CalleePredInfo_18);
    (env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (CalleePPId_9)), SCC_11);
    if ((env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
    {
      *Result_13 = (MR_Integer) 1;
      *MaybeAnalysisStatus_14 = (MR_Word) (MR_mkword(1, &transform_hlds__tabling_analysis_scalar_common_5[0]));
      *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
    }
    else
    {
      (env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0((env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CalleePredInfo_18);
      if ((env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        *Result_13 = (MR_Integer) 1;
        *MaybeAnalysisStatus_14 = (MR_Word) (MR_mkword(1, &transform_hlds__tabling_analysis_scalar_common_5[0]));
        *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
      }
      else
      {
        transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_8_p_0_3(&env);
        if ((env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          *Result_13 = (MR_Integer) 0;
          *MaybeAnalysisStatus_14 = (MR_Word) (MR_mkword(1, &transform_hlds__tabling_analysis_scalar_common_5[0]));
          *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
        }
        else
        {
          MR_Word Globals_25;
          MR_Word Intermod_26;

          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &Globals_25);
          libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 504, &Intermod_26);
          (env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (Intermod_26 == (MR_Integer) 1);
          if ((env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
          {
            (env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0((env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CalleePredInfo_18);
            if ((env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
            {
              (env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0((env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CalleePredInfo_18);
              (env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = !((env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded);
            }
          }
          if ((env).transform_hlds__tabling_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_97_108_108_95_102_111_114_95_109_109_95_116_97_98_108_105_110_103_95_95_91_50_44_32_52_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
          {
            MR_Word Result0_27;
            MR_Word AnalysisStatus_28;
            MR_Word AnalysisInfo0_42;
            MR_Word AnalysisInfo_43;
            MR_Word ModuleName_44;
            MR_Word FuncId_45;
            MR_Word MaybeBestStatus_47;

            hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &AnalysisInfo0_42);
            transform_hlds__mmc_analysis__module_name_func_id_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, CalleePPId_9, &ModuleName_44, &FuncId_45);
            analysis__lookup_best_result_6_p_0((MR_Word) (&transform_hlds__tabling_analysis_scalar_common_4[0]), AnalysisInfo0_42, ModuleName_44, FuncId_45, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), &MaybeBestStatus_47);
            if ((MaybeBestStatus_47 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Answer_51;
              MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
              MR_Box conv1_Answer_51;

              func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_4[0]), (MR_Integer) 0)), (MR_Integer) 9))));
              conv1_Answer_51 = func_0(((MR_Box) ((MR_Word) (&transform_hlds__tabling_analysis_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)));
              Answer_51 = ((MR_Word) (conv1_Answer_51));
              Result0_27 = (MR_Word) (Answer_51);
              AnalysisStatus_28 = (MR_Integer) 2;
              analysis__record_request_6_p_0((MR_Word) (&transform_hlds__tabling_analysis_scalar_common_3[0]), (MR_String) "mm_tabling_analysis", ModuleName_44, FuncId_45, ((MR_Box) ((MR_Integer) 0)), AnalysisInfo0_42, &AnalysisInfo_43);
            }
            else
            {
              MR_Word BestAnswer_49;
              MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, MaybeBestStatus_47, (MR_Integer) 0))));
              MR_Unsigned packed_word_0;
              MR_Word Var_55;

              BestAnswer_49 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 1))));
              packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_53, (MR_Integer) 2)));
              AnalysisStatus_28 = ((MR_Unsigned) ((MR_hl_field(0, Var_53, (MR_Integer) 2))) & (MR_Integer) 3);
              Result0_27 = (MR_Word) (BestAnswer_49);
              analysis__record_dependency_7_p_0((MR_Word) (&transform_hlds__tabling_analysis_scalar_common_4[0]), ModuleName_44, FuncId_45, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), AnalysisInfo0_42, &AnalysisInfo_43);
            }
            hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_43, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
            switch (Result0_27) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                *Result_13 = (MR_Integer) 1;
                break;
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                *Result_13 = Result0_27;
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeAnalysisStatus_14 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (AnalysisStatus_28));
            }
          }
          else
          {
            MR_Word MaybeResult_29;
            MR_Word ProcInfo_65;
            MR_Word _PredInfo_64;

            hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, CalleePPId_9, &_PredInfo_64, &ProcInfo_65);
            hlds__hlds_pred__proc_info_get_mm_tabling_info_2_p_0(ProcInfo_65, &MaybeResult_29);
            if ((MaybeResult_29 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *Result_13 = (MR_Integer) 0;
              switch (Intermod_26) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *MaybeAnalysisStatus_14 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  *MaybeAnalysisStatus_14 = (MR_Word) (MR_mkword(1, &transform_hlds__tabling_analysis_scalar_common_5[0]));
                  break;
              }
            }
            else
            {
              MR_Word ProcTablingInfo_30 = ((MR_Word) ((MR_hl_field(1, MaybeResult_29, (MR_Integer) 0))));
              MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, ProcTablingInfo_30, (MR_Integer) 0)));

              *Result_13 = ((MR_Unsigned) ((MR_hl_field(0, ProcTablingInfo_30, (MR_Integer) 0))) & (MR_Integer) 3);
              *MaybeAnalysisStatus_14 = ((MR_Word) ((MR_hl_field(0, ProcTablingInfo_30, (MR_Integer) 1))));
            }
            *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
          }
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__tabling_analysis__check_goals_for_mm_tabling_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_MaybeStatus_6;

  transform_hlds__tabling_analysis__combine_maybe_mm_tabling_analysis_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_MaybeStatus_6);
  *wrapper_arg_3 = ((MR_Box) (conv6_MaybeStatus_6));
}

static void MR_CALL 
transform_hlds__tabling_analysis__check_goals_for_mm_tabling_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;

  transform_hlds__tabling_analysis__combine_mm_tabling_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__tabling_analysis__check_goals_for_mm_tabling_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Result_11;
  MR_Word conv1_MaybeAnalysisStatus_12;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_88;

  transform_hlds__tabling_analysis__check_goal_for_mm_tabling_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_Result_11, &conv1_MaybeAnalysisStatus_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_88);
  *wrapper_arg_2 = ((MR_Box) (conv2_Result_11));
  *wrapper_arg_3 = ((MR_Box) (conv1_MaybeAnalysisStatus_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_88));
}

static void MR_CALL 
transform_hlds__tabling_analysis__check_goals_for_mm_tabling_7_p_0(
  MR_Word SCC_8,
  MR_Word VarTable_9,
  MR_Word Goals_10,
  MR_Word * Result_11,
  MR_Word * MaybeAnalysisStatus_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  MR_Word Results_14;
  MR_Word MaybeAnalysisStatuses_15;
  MR_Word Var_18;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_17;
  MR_Box conv5_Result_11;
  MR_Box conv7_MaybeAnalysisStatus_12;

  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_9[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (transform_hlds__tabling_analysis__check_goals_for_mm_tabling_7_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (SCC_8));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (VarTable_9));
  }
  mercury__list__map2_foldl_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_18, Goals_10, &Results_14, &MaybeAnalysisStatuses_15, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_16)), &conv3_STATE_VARIABLE_ModuleInfo_17);
  *STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_17));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_2[5]), Results_14, ((MR_Box) ((MR_Integer) 1)), &conv5_Result_11);
  *Result_11 = ((MR_Word) (conv5_Result_11));
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tabling_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_2[6]), MaybeAnalysisStatuses_15, ((MR_Box) (MR_mkword(1, &transform_hlds__tabling_analysis_scalar_common_5[0]))), &conv7_MaybeAnalysisStatus_12);
  *MaybeAnalysisStatus_12 = ((MR_Word) (conv7_MaybeAnalysisStatus_12));
}

static void MR_CALL 
transform_hlds__tabling_analysis__maybe_mm_tabling_analysis_status_2_p_0(
  MR_Word ProcResult_3,
  MR_Word * MaybeAnalysisStatus_4)
{
  *MaybeAnalysisStatus_4 = ((MR_Word) ((MR_hl_field(0, ProcResult_3, (MR_Integer) 2))));
}

static void MR_CALL 
transform_hlds__tabling_analysis__set_mm_tabling_info_4_p_0(
  MR_Word ProcTablingInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  MR_Word PredInfo0_8;
  MR_Word ProcInfo0_9;
  MR_Word ProcInfo_10;
  MR_Word Var_13;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_11, PPId_6, &PredInfo0_8, &ProcInfo0_9);
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (ProcTablingInfo_5));
  }
  hlds__hlds_pred__proc_info_set_mm_tabling_info_3_p_0(Var_13, ProcInfo0_9, &ProcInfo_10);
  hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_6, PredInfo0_8, ProcInfo_10, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_ModuleInfo_12;

  transform_hlds__tabling_analysis__mm_tabling_annotate_proc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_ModuleInfo_12);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_ModuleInfo_12));
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_ModuleInfo_12;

  transform_hlds__tabling_analysis__set_mm_tabling_info_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_ModuleInfo_12);
  *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_ModuleInfo_12));
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__tabling_analysis__output_proc_name_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_MaybeStatus_6;

  transform_hlds__tabling_analysis__combine_maybe_mm_tabling_analysis_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_MaybeStatus_6);
  *wrapper_arg_3 = ((MR_Box) (conv8_MaybeStatus_6));
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_MaybeAnalysisStatus_4;

  transform_hlds__tabling_analysis__maybe_mm_tabling_analysis_status_2_p_0(((MR_Word) (wrapper_arg_1)), &conv7_MaybeAnalysisStatus_4);
  *wrapper_arg_2 = ((MR_Box) (conv7_MaybeAnalysisStatus_4));
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Results_23;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_25;

  transform_hlds__tabling_analysis__check_proc_for_mm_tabling_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Results_23, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_25);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Results_23));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_25));
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResult_44 = ((MR_Word) ((env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__conv4_ProcResult_44));
  transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_3(env_ptr);
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_45 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResult_44, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResult_44, (MR_Integer) 0))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResult_44, (MR_Integer) 2))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResult_44, (MR_Integer) 1)));

    (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded = (Var_45 != (MR_Integer) 1);
    if ((env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded)
      transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_proc_result_0), &(env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__conv4_ProcResult_44, (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResults_10, transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_4, env_ptr);
      (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_6(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_8(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResult_58 = ((MR_Word) ((env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__conv5_ProcResult_58));
  transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_7(env_ptr);
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_7(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResult_58, (MR_Integer) 0))));
    MR_Word Var_52;
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResult_58, (MR_Integer) 1)));

    (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__Var_46 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResult_58, (MR_Integer) 1))) & (MR_Integer) 3);
    Var_52 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResult_58, (MR_Integer) 2))));
    (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__Var_46 == (MR_Integer) 0);
    if ((env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded)
      transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_6(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_9(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__commit_1) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_proc_result_0), &(env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__conv5_ProcResult_58, (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResults_10, transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_8, env_ptr);
      (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_10(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__commit_2, 1);
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_12(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ConditionalResult_48 = ((MR_Word) ((env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__conv6_ConditionalResult_48));
  transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_11(env_ptr);
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_11(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ConditionalResult_48, (MR_Integer) 0))));
    MR_Word Var_54;
    MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ConditionalResult_48, (MR_Integer) 1)));

    (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__Var_47 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ConditionalResult_48, (MR_Integer) 1))) & (MR_Integer) 3);
    Var_54 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ConditionalResult_48, (MR_Integer) 2))));
    (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__Var_47 == (MR_Integer) 2);
    if ((env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded)
      transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_10(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_13(
  void * env_ptr_arg)
{
  struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__commit_2) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_proc_result_0), &(env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__conv6_ConditionalResult_48, (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResults_10, transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_12, env_ptr);
      (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0(
  MR_Word Debug_6,
  MR_Word Pass1Only_7,
  MR_Word SCC_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  struct transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0_s env;

  {
    MR_Word TablingStatus_11;
    MR_Word MaybeAnalysisStatus_12;
    MR_Word ProcTablingInfo_15;
    MR_Word Var_18;
    MR_Word STATE_VARIABLE_ModuleInfo_20_20;
    MR_Word Var_24;
    MR_Word STATE_VARIABLE_ModuleInfo_25_25;
    MR_Box conv3_ProcResults_10;
    MR_Box conv2_STATE_VARIABLE_ModuleInfo_20_20;
    MR_Box conv12_STATE_VARIABLE_ModuleInfo_25_25;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_8[0]));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_1));
      MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_18, 3) = ((MR_Box) (SCC_8));
    }
    mercury__set__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_1[1]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_18, SCC_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_ProcResults_10, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_16)), &conv2_STATE_VARIABLE_ModuleInfo_20_20);
    (env).transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResults_10 = ((MR_Word) (conv3_ProcResults_10));
    STATE_VARIABLE_ModuleInfo_20_20 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_20_20));
    if (((env).transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResults_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.tabling_analysis.mm_tabling_combine_individual_proc_results\'/3", (MR_String) "empty SCC");
        return;
      }
    else
    {
      MR_Word MaybeAnalysisStatuses_63;
      MR_Box conv9_MaybeAnalysisStatus_12;

      transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_5(&env);
      (env).transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded = !((env).transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded);
      if ((env).transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded)
        TablingStatus_11 = (MR_Integer) 1;
      else
      {
        transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_9(&env);
        (env).transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded = !((env).transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded);
        if ((env).transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded)
          transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_13(&env);
        if ((env).transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__succeeded)
          TablingStatus_11 = (MR_Integer) 2;
        else
          TablingStatus_11 = (MR_Integer) 0;
      }
      mercury__list__map_3_p_0((MR_Word) (&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_proc_result_0), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_2[2]), (env).transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_env_0__ProcResults_10, &MaybeAnalysisStatuses_63);
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tabling_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_2[3]), MaybeAnalysisStatuses_63, ((MR_Box) (MR_mkword(1, &transform_hlds__tabling_analysis_scalar_common_5[0]))), &conv9_MaybeAnalysisStatus_12);
      MaybeAnalysisStatus_12 = ((MR_Word) (conv9_MaybeAnalysisStatus_12));
    }
    switch (Debug_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DebugStream_14;
          MR_Word Var_74;
          MR_Box conv10_STATE_VARIABLE_IO_17_72;

          hlds__passes_aux__get_debug_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_20_20, &DebugStream_14);
          mercury__io__write_string_4_p_0(DebugStream_14, (MR_String) "SCC: ");
          mercury__io__write_line_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), DebugStream_14, ((MR_Box) (TablingStatus_11)));
          {
            Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_74, 0) = ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_6[1]));
            MR_hl_field(0, Var_74, 1) = ((MR_Box) (transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_16));
            MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_74, 3) = ((MR_Box) (DebugStream_14));
            MR_hl_field(0, Var_74, 4) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_20_20));
          }
          mercury__set__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, SCC_8, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_17_72);
          mercury__io__nl_3_p_0(DebugStream_14);
        }
        break;
    }
    {
      ProcTablingInfo_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcTablingInfo_15, 0) = (MR_Box) ((MR_Unsigned) (TablingStatus_11));
      MR_hl_field(0, ProcTablingInfo_15, 1) = ((MR_Box) (MaybeAnalysisStatus_12));
    }
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_7[1]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0_17));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (ProcTablingInfo_15));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_24, SCC_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_20_20)), &conv12_STATE_VARIABLE_ModuleInfo_25_25);
    STATE_VARIABLE_ModuleInfo_25_25 = ((MR_Word) (conv12_STATE_VARIABLE_ModuleInfo_25_25));
    switch (Pass1Only_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box conv14_STATE_VARIABLE_ModuleInfo_17;

          mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__tabling_analysis_scalar_common_2[4]), SCC_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_25_25)), &conv14_STATE_VARIABLE_ModuleInfo_17);
          *STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) (conv14_STATE_VARIABLE_ModuleInfo_17));
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_25_25;
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_module_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_AnalysisInfo_11;

  transform_hlds__tabling_analysis__maybe_record_mm_tabling_result_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AnalysisInfo_11);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AnalysisInfo_11));
}

static void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_17;

  transform_hlds__tabling_analysis__analyse_mm_tabling_in_scc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_17));
}

void MR_CALL 
transform_hlds__tabling_analysis__analyse_mm_tabling_in_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21)
{
  MR_bool succeeded;
  MR_Word Globals_4;
  MR_Word UseMinimalModel_5;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &Globals_4);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 270, &UseMinimalModel_5);
  switch (UseMinimalModel_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
      break;
    case (MR_Integer) 1:
      {
        MR_Word OpMode_6;
        MR_Word Pass1Only_9;
        MR_Word DepInfo_10;
        MR_Word SCCs_11;
        MR_Word Debug_12;
        MR_Word ProcAnalysisKinds0_13;
        MR_Word ProcAnalysisKinds_14;
        MR_Word STATE_VARIABLE_ModuleInfo_24_24;
        MR_Word Var_26;
        MR_Word STATE_VARIABLE_ModuleInfo_27_27;
        MR_Word STATE_VARIABLE_ModuleInfo_29_29;
        MR_Word OpModeAugment_7;
        MR_Word Var_23;
        MR_Box conv1_STATE_VARIABLE_ModuleInfo_27_27;
        MR_Word OpModeArgs_15;
        MR_Word Var_30;

        libs__globals__get_op_mode_2_p_0(Globals_4, &OpMode_6);
        succeeded = ((MR_tag((MR_Word) OpMode_6)) == (MR_Integer) 3);
        if (succeeded)
        {
          Var_23 = ((MR_Word) ((MR_hl_field(3, OpMode_6, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 2);
          if (succeeded)
          {
            OpModeAugment_7 = ((MR_Word) ((MR_hl_field(2, Var_23, (MR_Integer) 0))));
            switch (MR_tag((MR_Word) OpModeAugment_7)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(OpModeAugment_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
                break;
            }
          }
        }
        if (succeeded)
          Pass1Only_9 = (MR_Integer) 1;
        else
          Pass1Only_9 = (MR_Integer) 0;
        hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_20, &STATE_VARIABLE_ModuleInfo_24_24, &DepInfo_10);
        SCCs_11 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_10);
        libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 111, &Debug_12);
        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_26, 0) = ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_6[0]));
          MR_hl_field(0, Var_26, 1) = ((MR_Box) (transform_hlds__tabling_analysis__analyse_mm_tabling_in_module_2_p_0_1));
          MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_26, 3) = ((MR_Box) (Debug_12));
          MR_hl_field(0, Var_26, 4) = ((MR_Box) (Pass1Only_9));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__tabling_analysis_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_26, SCCs_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_24_24)), &conv1_STATE_VARIABLE_ModuleInfo_27_27);
        STATE_VARIABLE_ModuleInfo_27_27 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_27_27));
        hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(STATE_VARIABLE_ModuleInfo_27_27, &ProcAnalysisKinds0_13);
        mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ((MR_Box) ((MR_Integer) 2)), ProcAnalysisKinds0_13, &ProcAnalysisKinds_14);
        hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(ProcAnalysisKinds_14, STATE_VARIABLE_ModuleInfo_27_27, &STATE_VARIABLE_ModuleInfo_29_29);
        succeeded = ((MR_tag((MR_Word) OpMode_6)) == (MR_Integer) 3);
        if (succeeded)
        {
          OpModeArgs_15 = ((MR_Word) ((MR_hl_field(3, OpMode_6, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) OpModeArgs_15)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_30 = ((MR_Word) ((MR_hl_field(2, OpModeArgs_15, (MR_Integer) 0))));
            succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 8U));
          }
        }
        if (succeeded)
        {
          MR_Word AnalysisInfo0_17;
          MR_Word PredIds_18;
          MR_Word AnalysisInfo_19;
          MR_Word Var_31;
          MR_Box conv3_AnalysisInfo_19;

          hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_29_29, &AnalysisInfo0_17);
          hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_29_29, &PredIds_18);
          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_31, 0) = ((MR_Box) (&transform_hlds__tabling_analysis_scalar_common_7[0]));
            MR_hl_field(0, Var_31, 1) = ((MR_Box) (transform_hlds__tabling_analysis__analyse_mm_tabling_in_module_2_p_0_2));
            MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_31, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_29_29));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), Var_31, PredIds_18, ((MR_Box) (AnalysisInfo0_17)), &conv3_AnalysisInfo_19);
          AnalysisInfo_19 = ((MR_Word) (conv3_AnalysisInfo_19));
          hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_19, STATE_VARIABLE_ModuleInfo_29_29, STATE_VARIABLE_ModuleInfo_21);
        }
        else
          *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_29_29;
      }
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__tabling_analysis____Unify____mm_tabling_analysis_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__tabling_analysis____Unify____mm_tabling_analysis_answer_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__tabling_analysis____Compare____mm_tabling_analysis_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__tabling_analysis____Compare____mm_tabling_analysis_answer_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__tabling_analysis____Unify____mm_tabling_proc_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__tabling_analysis____Unify____mm_tabling_proc_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__tabling_analysis____Compare____mm_tabling_proc_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__tabling_analysis____Compare____mm_tabling_proc_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__to_term____transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = transform_hlds__tabling_analysis__ClassMethod_for_analysis__to_term____transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__to_term_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__to_term____transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = transform_hlds__tabling_analysis__ClassMethod_for_analysis__to_term____transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__from_term_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__tabling_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__tabling_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__equivalent_3_3_p_0(((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__analysis_name_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__bottom_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__top_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  transform_hlds__tabling_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__tabling_analysis__mm_tabling_analysis_answer__arity0______analysis__get_func_info_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
}

void mercury__transform_hlds__tabling_analysis__init(void)
{
}

void mercury__transform_hlds__tabling_analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_analysis_answer_0);
	MR_register_type_ctor_info(&transform_hlds__tabling_analysis__transform_hlds__tabling_analysis__type_ctor_info_mm_tabling_proc_result_0);
}

void mercury__transform_hlds__tabling_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__tabling_analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.tabling_analysis.
