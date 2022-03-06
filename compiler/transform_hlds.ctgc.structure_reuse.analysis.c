/*
** Automatically generated from `structure_reuse.analysis.m'
** by the Mercury compiler,
** version rotd-2022-03-06
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


// :- module transform_hlds.ctgc.structure_reuse.analysis.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__analysis__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.analysis.mih"


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
#include "term_conversion.mih"
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
#include "hlds.goal_path.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_ctgc.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.intermod_analysis.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.structure_reuse.direct.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_reuse.indirect.mih"
#include "transform_hlds.ctgc.structure_reuse.lbu.mih"
#include "transform_hlds.ctgc.structure_reuse.lfu.mih"
#include "transform_hlds.ctgc.structure_reuse.versions.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__analysis__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__analysis__bimap__pti_bimap_2__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__analysis__analysis__pti_analysis_result_2__plain_transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0__plain_transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0;

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_functor_desc_structure_reuse_answer_0_0;

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_functor_desc_structure_reuse_answer_0_1;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__analysis__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__analysis__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__field_types_structure_reuse_answer_0_2[3];

static const MR_ConstString transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__field_names_structure_reuse_answer_0_2[3];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_functor_desc_structure_reuse_answer_0_2;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_stag_ordered_structure_reuse_answer_0_0[2];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_stag_ordered_structure_reuse_answer_0_1[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_ptag_ordered_structure_reuse_answer_0[2];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_name_ordered_structure_reuse_answer_0[3];

static const MR_Integer transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__functor_number_map_structure_reuse_answer_0[3];

static const MR_Integer transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__functor_number_map_structure_reuse_call_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__analysis__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_NotagFunctorDesc transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__notag_functor_desc_structure_reuse_call_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__field_types_structure_reuse_func_info_0_0[2];

static const MR_ConstString transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__field_names_structure_reuse_func_info_0_0[2];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_functor_desc_structure_reuse_func_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_stag_ordered_structure_reuse_func_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_ptag_ordered_structure_reuse_func_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_name_ordered_structure_reuse_func_info_0[1];

static const MR_Integer transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__functor_number_map_structure_reuse_func_info_0[1];

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__from_term_2_2_p_0(
  MR_Word Term_4,
  MR_Word * Call_3);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__to_term_1_1_f_0(
  MR_Word Call_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__from_term_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__to_term_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__equivalent_3_3_p_0(
  MR_Word HeadVar__1_9,
  MR_Word Call_10,
  MR_Word Call_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__more_precise_than_3_3_p_0(
  MR_Word HeadVar__1_4,
  MR_Word Call1_5,
  MR_Word Call2_6);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__equivalent_3_3_p_0(
  MR_Word FuncInfo_4,
  MR_Word Answer1_5,
  MR_Word Answer2_6);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__more_precise_than_3_3_p_0(
  MR_Word FuncInfo_4,
  MR_Word Answer1_5,
  MR_Word Answer2_6);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__get_func_info_6_6_p_0(
  MR_Word ModuleInfo_18,
  MR_Word ModuleName_19,
  MR_Word FuncId_20,
  MR_Word * FuncInfo_23);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__top_2_2_f_0(
  MR_Word HeadVar__1_12);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__bottom_2_2_f_0(
  MR_Word HeadVar__1_10);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void);

static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__analysis_version_number_2_2_f_0(void);

static MR_String MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__analysis_name_2_2_f_0(void);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__remove_useless_reuse_proc_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word VeryVerbose_9,
  MR_Word ReuseAsMap_10,
  MR_Word HeadVar__4_11,
  MR_Word PPId_12,
  MR_Word STATE_VARIABLE_PredTable_0_22,
  MR_Word * STATE_VARIABLE_PredTable_23);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_117_115_101_108_101_115_115_95_114_101_117_115_101_95_112_114_111_99_95_95_91_52_93_95_48_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word VeryVerbose_9,
  MR_Word ReuseAsMap_10,
  MR_Word PPId_12,
  MR_Word STATE_VARIABLE_PredTable_0_22,
  MR_Word * STATE_VARIABLE_PredTable_23);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__record_intermod_requests_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_11,
  MR_Word * STATE_VARIABLE_AnalysisInfo_12);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__handle_structure_reuse_dependency_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_15,
  MR_Word * STATE_VARIABLE_AnalysisInfo_16);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__record_structure_reuse_results_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word CondReuseMap_8,
  MR_Word PPId_9,
  MR_Word ReuseAs_Status_10,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_15,
  MR_Word * STATE_VARIABLE_AnalysisInfo_16);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__annotate_in_use_information_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_6,
  MR_Word * STATE_VARIABLE_ProcInfo_7);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_p_0(
  MR_Word PPId_5,
  MR_Word ReuseAs_Status_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__add_reuse_request_4_p_0(
  MR_Word PPId_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Requests_0_10,
  MR_Word * STATE_VARIABLE_Requests_11);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_defined_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_defined_proc_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ExternalRequests_0_30,
  MR_Word * STATE_VARIABLE_ExternalRequests_31,
  MR_Word STATE_VARIABLE_MustHaveReuseVersions_0_32,
  MR_Word * STATE_VARIABLE_MustHaveReuseVersions_33);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_imported_reuse_answer_8_p_0(
  MR_Word PPId_9,
  MR_Word PredInfo_10,
  MR_Word ProcInfo_11,
  MR_Word ImportedResult_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_ReuseTable_0_28,
  MR_Word * STATE_VARIABLE_ReuseTable_29);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_proc_7_p_0(
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_ReuseTable_0_21,
  MR_Word * STATE_VARIABLE_ReuseTable_22);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_pred_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_pred_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_pred_9_p_0(
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_ReuseTable_0_21,
  MR_Word * STATE_VARIABLE_ReuseTable_22,
  MR_Word STATE_VARIABLE_ExternalRequests_0_23,
  MR_Word * STATE_VARIABLE_ExternalRequests_24,
  MR_Word STATE_VARIABLE_MustHaveReuseVersions_0_25,
  MR_Word * STATE_VARIABLE_MustHaveReuseVersions_26);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_p_0(
  MR_Word PredInfo_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ProcTable_0_18,
  MR_Word * STATE_VARIABLE_ProcTable_19);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__maybe_create_forwarding_procedures_intermod_analysis_4_p_0(
  MR_Word ReuseTable_5,
  MR_Word PredProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__maybe_create_forwarding_procedures_intermod_opt_2_5_p_0(
  MR_Word FinalReuseTable_6,
  MR_Word PPId_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__make_intermediate_reuse_proc_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * NewPPId_9,
  MR_Word STATE_VARIABLE_ReuseTable_0_17,
  MR_Word * STATE_VARIABLE_ReuseTable_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__get_numbered_args_4_p_0(
  MR_Integer I_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_5_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word * ReuseTable_7,
  MR_Word * ExternalRequests_8,
  MR_Word * MustHaveReuseVersions_9);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__maybe_create_forwarding_procedures_intermod_opt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__maybe_create_forwarding_procedures_intermod_opt_4_p_0(
  MR_Word InitialReuseTable_5,
  MR_Word FinalReuseTable_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__handle_structure_reuse_requests_2_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__handle_structure_reuse_requests_11_p_0(
  MR_Integer tscc_proc_1_input_1_Repeats_12,
  MR_Word tscc_proc_1_input_2_SharingTable_13,
  MR_Word tscc_proc_1_input_3_Requests_14,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_ReuseTable_0_19,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ReuseTable_20,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_22,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_DepProcs_0_23,
  MR_Word * tscc_output_ptr_3_STATE_VARIABLE_DepProcs_24,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_IntermodRequests_0_25,
  MR_Word * tscc_output_ptr_4_STATE_VARIABLE_IntermodRequests_26);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__handle_structure_reuse_requests_2_11_p_0(
  MR_Integer tscc_proc_2_input_1_Repeats_12,
  MR_Word tscc_proc_2_input_2_SharingTable_13,
  MR_Word tscc_proc_2_input_3_Requests_14,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_ReuseTable_0_27,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ReuseTable_20,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_22,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_DepProcs_0_31,
  MR_Word * tscc_output_ptr_3_STATE_VARIABLE_DepProcs_24,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_IntermodRequests_0_33,
  MR_Word * tscc_output_ptr_4_STATE_VARIABLE_IntermodRequests_26);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Compare____structure_reuse_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Compare____structure_reuse_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_func_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Compare____structure_reuse_func_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_1[10][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[10][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_3[2][5];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_4[3][6];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_5[4][1];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_6[2][9];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_7[1][8];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_8[1][12];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_9[6][7];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_10[3][10];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_11[1][11];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_1[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__handle_structure_reuse_requests_2_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_9[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[2]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__call_pattern__arity2__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[0])),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__answer_pattern__arity2__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[1])),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_4[3][6] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__analysis__arity3__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0__)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_3[1])),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_5[4][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "cond"))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "no_reuse"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "uncond"))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_1[7]))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_6[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__bimap__pti_bimap_2__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_7[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_8[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_9[6][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_10[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__analysis_scalar_common_11[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis__analysis__pti_analysis_result_2__plain_transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0__plain_transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__analysis__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__analysis__bimap__pti_bimap_2__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__analysis__analysis__pti_analysis_result_2__plain_transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0__plain_transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0)
  }
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_functor_desc_structure_reuse_answer_0_0 = {
  (MR_String) "structure_reuse_answer_no_reuse",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_functor_desc_structure_reuse_answer_0_1 = {
  (MR_String) "structure_reuse_answer_unconditional",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_reuse__analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__analysis__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__analysis__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__field_types_structure_reuse_answer_0_2[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__analysis__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__analysis__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0)
};

static const MR_ConstString transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__field_names_structure_reuse_answer_0_2[3] = {
  (MR_String) "srac_vars",
  (MR_String) "srac_types",
  (MR_String) "srac_conds"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_functor_desc_structure_reuse_answer_0_2 = {
  (MR_String) "structure_reuse_answer_conditional",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__field_types_structure_reuse_answer_0_2,
  transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__field_names_structure_reuse_answer_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_stag_ordered_structure_reuse_answer_0_0[2] = {
  &transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_functor_desc_structure_reuse_answer_0_0,
  &transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_functor_desc_structure_reuse_answer_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_stag_ordered_structure_reuse_answer_0_1[1] = {
  &transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_functor_desc_structure_reuse_answer_0_2
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_ptag_ordered_structure_reuse_answer_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_stag_ordered_structure_reuse_answer_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_stag_ordered_structure_reuse_answer_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_name_ordered_structure_reuse_answer_0[3] = {
  &transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_functor_desc_structure_reuse_answer_0_2,
  &transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_functor_desc_structure_reuse_answer_0_0,
  &transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_functor_desc_structure_reuse_answer_0_1
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__functor_number_map_structure_reuse_answer_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_answer_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis____Compare____structure_reuse_answer_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.analysis",
  (MR_String) "structure_reuse_answer",
  { transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_name_ordered_structure_reuse_answer_0 },
  { transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_ptag_ordered_structure_reuse_answer_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__functor_number_map_structure_reuse_answer_0,

};

static const MR_Integer transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__functor_number_map_structure_reuse_call_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__analysis__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_NotagFunctorDesc transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__notag_functor_desc_structure_reuse_call_0 = {
  (MR_String) "structure_reuse_call",
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__analysis__list__ti_list_1builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_call_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis____Compare____structure_reuse_call_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.analysis",
  (MR_String) "structure_reuse_call",
  { &transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__notag_functor_desc_structure_reuse_call_0 },
  { &transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__notag_functor_desc_structure_reuse_call_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__functor_number_map_structure_reuse_call_0,

};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__field_types_structure_reuse_func_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
};

static const MR_ConstString transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__field_names_structure_reuse_func_info_0_0[2] = {
  (MR_String) "srfi_module",
  (MR_String) "srfi_proc"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_functor_desc_structure_reuse_func_info_0_0 = {
  (MR_String) "structure_reuse_func_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__field_types_structure_reuse_func_info_0_0,
  transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__field_names_structure_reuse_func_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_stag_ordered_structure_reuse_func_info_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_functor_desc_structure_reuse_func_info_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_ptag_ordered_structure_reuse_func_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_stag_ordered_structure_reuse_func_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_name_ordered_structure_reuse_func_info_0[1] = {
  &transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_functor_desc_structure_reuse_func_info_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__functor_number_map_structure_reuse_func_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_func_info_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis____Compare____structure_reuse_func_info_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.analysis",
  (MR_String) "structure_reuse_func_info",
  { transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_name_ordered_structure_reuse_func_info_0 },
  { transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__du_ptag_ordered_structure_reuse_func_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__functor_number_map_structure_reuse_func_info_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__call_pattern__arity2__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__answer_pattern__arity2__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__analysis__arity3__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0__[11] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 6)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__analysis_name_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__bottom_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__top_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__get_func_info_6_6_p_0_10001))
};

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__from_term_2_2_p_0(
  MR_Word Term_4,
  MR_Word * Call_3)
{
  MR_bool succeeded;
  MR_Word NoClobbers_5;
  MR_Box conv0_NoClobbers_5;

  succeeded = mercury__term_conversion__term_to_type_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[9]), Term_4, &conv0_NoClobbers_5);
  if (succeeded)
  {
    NoClobbers_5 = ((MR_Word) (conv0_NoClobbers_5));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Call_3 = (MR_Word) (NoClobbers_5);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__to_term_1_1_f_0(
  MR_Word Call_3)
{
  MR_Word Term_4;
  MR_Word NoClobbers_5 = (MR_Word) (Call_3);

  mercury__term_conversion__type_to_term_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[9]), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ((MR_Box) (NoClobbers_5)), &Term_4);
  return Term_4;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__from_term_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);
  MR_Word Var_31;
  MR_Word Var_32;
  MR_String Var_34;

  if (succeeded)
  {
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
      if ((Var_31 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((strcmp(Var_34, (MR_String) "uncond") == 0))
        {
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 4U);
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(Var_34, (MR_String) "no_reuse") == 0))
        {
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      else
      {
        MR_Word TypeCtorInfo_26_26;
        MR_Word TypeInfo_27_27;
        MR_Word TypeInfo_28_28;
        MR_Word TypeInfo_29_29;
        MR_Word HeadVarsTerm_7;
        MR_Word TypesTerm_8;
        MR_Word ConditionsTerm_9;
        MR_Word HeadVars_11;
        MR_Word Types_12;
        MR_Word Conditions_13;
        MR_Word Var_17;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Box conv0_HeadVars_11;
        MR_Box conv1_Types_12;
        MR_Box conv2_Conditions_13;

        succeeded = (strcmp(Var_34, (MR_String) "cond") == 0);
        if (succeeded)
        {
          HeadVarsTerm_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0))));
          Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1))));
          succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TypesTerm_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0))));
            Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 1))));
            succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ConditionsTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
              succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeCtorInfo_26_26 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                TypeInfo_27_27 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[6]);
                succeeded = mercury__term_conversion__term_to_type_2_p_0(TypeCtorInfo_26_26, TypeInfo_27_27, HeadVarsTerm_7, &conv0_HeadVars_11);
                if (succeeded)
                {
                  HeadVars_11 = ((MR_Word) (conv0_HeadVars_11));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  TypeInfo_28_28 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[7]);
                  succeeded = mercury__term_conversion__term_to_type_2_p_0(TypeCtorInfo_26_26, TypeInfo_28_28, TypesTerm_8, &conv1_Types_12);
                  if (succeeded)
                  {
                    Types_12 = ((MR_Word) (conv1_Types_12));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    TypeInfo_29_29 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[8]);
                    succeeded = mercury__term_conversion__term_to_type_2_p_0(TypeCtorInfo_26_26, TypeInfo_29_29, ConditionsTerm_9, &conv2_Conditions_13);
                    if (succeeded)
                    {
                      Conditions_13 = ((MR_Word) (conv2_Conditions_13));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__2_2 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVars_11));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Types_12));
                        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Conditions_13));
                      }
                      succeeded = MR_TRUE;
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
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__to_term_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_25;

            Var_25 = mercury__term__context_init_0_f_0();
            {
              HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_5[1]));
              MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_25));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_21;

            Var_21 = mercury__term__context_init_0_f_0();
            {
              HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_5[2]));
              MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_21));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word HeadVars_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Types_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word Conditions_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
        MR_Word HeadVarsTerm_8;
        MR_Word TypesTerm_9;
        MR_Word ConditionsTerm_10;
        MR_Word Var_13;
        MR_Word Var_14;
        MR_Word Var_15;
        MR_Word Var_17;

        mercury__term_conversion__type_to_term_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[6]), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ((MR_Box) (HeadVars_5)), &HeadVarsTerm_8);
        mercury__term_conversion__type_to_term_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[7]), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ((MR_Box) (Types_6)), &TypesTerm_9);
        mercury__term_conversion__type_to_term_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[8]), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ((MR_Box) (Conditions_7)), &ConditionsTerm_10);
        {
          Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (ConditionsTerm_10));
          MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (TypesTerm_9));
          MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_15));
        }
        {
          Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (HeadVarsTerm_8));
          MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_14));
        }
        Var_17 = mercury__term__context_init_0_f_0();
        {
          HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_13));
          MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_17));
        }
      }
      break;
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__equivalent_3_3_p_0(
  MR_Word HeadVar__1_9,
  MR_Word Call_10,
  MR_Word Call_3)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_call_0_0(Call_3, Call_10);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__more_precise_than_3_3_p_0(
  MR_Word HeadVar__1_4,
  MR_Word Call1_5,
  MR_Word Call2_6)
{
  MR_bool succeeded;
  MR_Word Args1_7 = (MR_Word) (Call1_5);
  MR_Word Args2_8 = (MR_Word) (Call2_6);
  MR_Word Var_11;
  MR_Word Var_12;

  Var_11 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Args2_8);
  Var_12 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Args1_7);
  succeeded = mercury__set__subset_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_11, Var_12);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__equivalent_3_3_p_0(
  MR_Word FuncInfo_4,
  MR_Word Answer1_5,
  MR_Word Answer2_6)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_answer_0_0(Answer1_5, Answer2_6);
  if (!(succeeded))
  {
    MR_Word TypeInfo_20_46;
    MR_Word TypeInfo_20_64;
    MR_Word ModuleInfo_16;
    MR_Word ProcInfo_17;
    MR_Word HeadVars_18;
    MR_Word VarTypes_19;
    MR_Word HeadVarTypes_20;
    MR_Word Reuse1_21;
    MR_Word Reuse2_22;
    MR_Word ReuseAs1_23;
    MR_Word ReuseAs2_24;
    MR_Word ImpHeadVars_35;
    MR_Word ImpTypes_36;
    MR_Word ImpReuseConditions_37;
    MR_Word HeadVars_38;
    MR_Word VarRenaming_39;
    MR_Word ImpHeadVars_53;
    MR_Word ImpTypes_54;
    MR_Word ImpReuseConditions_55;
    MR_Word HeadVars_56;
    MR_Word VarRenaming_57;
    MR_Word TypeSubst_40;
    MR_Word TypeInfo_21_47;
    MR_Word TypeCtorInfo_22_48;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word TypeSubst_58;
    MR_Word TypeInfo_21_65;
    MR_Word TypeCtorInfo_22_66;
    MR_Word Var_59;
    MR_Word Var_60;

    succeeded = ((MR_tag((MR_Word) Answer1_5)) == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Answer2_6)) == (MR_Integer) 1);
      if (succeeded)
      {
        ModuleInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncInfo_4, (MR_Integer) 0))));
        ProcInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncInfo_4, (MR_Integer) 1))));
        hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_17, &HeadVars_18);
        hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_17, &VarTypes_19);
        hlds__vartypes__lookup_var_types_3_p_0(VarTypes_19, HeadVars_18, &HeadVarTypes_20);
        ImpHeadVars_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Answer1_5, (MR_Integer) 0))));
        ImpTypes_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Answer1_5, (MR_Integer) 1))));
        ImpReuseConditions_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Answer1_5, (MR_Integer) 2))));
        hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_17, &HeadVars_38);
        TypeInfo_20_46 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[2]);
        mercury__map__from_corresponding_lists_3_p_0(TypeInfo_20_46, TypeInfo_20_46, ImpHeadVars_35, HeadVars_38, &VarRenaming_39);
        Var_41 = (MR_Word) ((MR_Unsigned) 0U);
        TypeInfo_21_47 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[3]);
        TypeCtorInfo_22_48 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        Var_42 = mercury__map__init_0_f_0(TypeInfo_21_47, TypeCtorInfo_22_48);
        succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ImpTypes_36, HeadVarTypes_20, Var_41, Var_42, &TypeSubst_40);
        if (succeeded)
        {
          MR_Word Var_43;

          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (ImpReuseConditions_37));
          }
          parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0(VarRenaming_39, TypeSubst_40, Var_43, &Reuse1_21);
        }
        else
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.analysis.structure_reuse_answer_to_domain\'/4", (MR_String) "type_unify_list failed");
        ImpHeadVars_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Answer2_6, (MR_Integer) 0))));
        ImpTypes_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Answer2_6, (MR_Integer) 1))));
        ImpReuseConditions_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Answer2_6, (MR_Integer) 2))));
        hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_17, &HeadVars_56);
        TypeInfo_20_64 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[2]);
        mercury__map__from_corresponding_lists_3_p_0(TypeInfo_20_64, TypeInfo_20_64, ImpHeadVars_53, HeadVars_56, &VarRenaming_57);
        Var_59 = (MR_Word) ((MR_Unsigned) 0U);
        TypeInfo_21_65 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[3]);
        TypeCtorInfo_22_66 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        Var_60 = mercury__map__init_0_f_0(TypeInfo_21_65, TypeCtorInfo_22_66);
        succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ImpTypes_54, HeadVarTypes_20, Var_59, Var_60, &TypeSubst_58);
        if (succeeded)
        {
          MR_Word Var_61;

          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ImpReuseConditions_55));
          }
          parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0(VarRenaming_57, TypeSubst_58, Var_61, &Reuse2_22);
        }
        else
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.analysis.structure_reuse_answer_to_domain\'/4", (MR_String) "type_unify_list failed");
        ReuseAs1_23 = transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0(Reuse1_21);
        ReuseAs2_24 = transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0(Reuse2_22);
        succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0(ModuleInfo_16, ProcInfo_17, ReuseAs2_24, ReuseAs1_23);
        if (succeeded)
          succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0(ModuleInfo_16, ProcInfo_17, ReuseAs1_23, ReuseAs2_24);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__more_precise_than_3_3_p_0(
  MR_Word FuncInfo_4,
  MR_Word Answer1_5,
  MR_Word Answer2_6)
{
  MR_bool succeeded;

  if ((Answer1_5 == (MR_Word) ((MR_Unsigned) 4U)))
    succeeded = (Answer2_6 == (MR_Word) ((MR_Unsigned) 0U));
  else
  if (((MR_tag((MR_Word) Answer1_5)) == (MR_Integer) 1))
    if ((Answer2_6 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) Answer2_6)) == (MR_Integer) 1))
    {
      MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncInfo_4, (MR_Integer) 0))));
      MR_Word ProcInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncInfo_4, (MR_Integer) 1))));
      MR_Word HeadVars_18;
      MR_Word VarTypes_19;
      MR_Word HeadVarTypes_20;
      MR_Word Reuse1_21;
      MR_Word Reuse2_22;
      MR_Word ReuseAs1_23;
      MR_Word ReuseAs2_24;
      MR_Word ImpHeadVars_38;
      MR_Word ImpTypes_39;
      MR_Word ImpReuseConditions_40;
      MR_Word HeadVars_41;
      MR_Word VarRenaming_42;
      MR_Word ImpHeadVars_56;
      MR_Word ImpTypes_57;
      MR_Word ImpReuseConditions_58;
      MR_Word HeadVars_59;
      MR_Word VarRenaming_60;
      MR_Word TypeSubst_43;
      MR_Word Var_45;
      MR_Word TypeSubst_61;
      MR_Word Var_63;

      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_17, &HeadVars_18);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_17, &VarTypes_19);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes_19, HeadVars_18, &HeadVarTypes_20);
      ImpHeadVars_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Answer1_5, (MR_Integer) 0))));
      ImpTypes_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Answer1_5, (MR_Integer) 1))));
      ImpReuseConditions_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Answer1_5, (MR_Integer) 2))));
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_17, &HeadVars_41);
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[2]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[2]), ImpHeadVars_38, HeadVars_41, &VarRenaming_42);
      Var_45 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
      succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ImpTypes_39, HeadVarTypes_20, (MR_Word) ((MR_Unsigned) 0U), Var_45, &TypeSubst_43);
      if (succeeded)
      {
        MR_Word Var_46;

        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (ImpReuseConditions_40));
        }
        parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0(VarRenaming_42, TypeSubst_43, Var_46, &Reuse1_21);
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.analysis.structure_reuse_answer_to_domain\'/4", (MR_String) "type_unify_list failed");
      ImpHeadVars_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Answer2_6, (MR_Integer) 0))));
      ImpTypes_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Answer2_6, (MR_Integer) 1))));
      ImpReuseConditions_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Answer2_6, (MR_Integer) 2))));
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_17, &HeadVars_59);
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[2]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[2]), ImpHeadVars_56, HeadVars_59, &VarRenaming_60);
      Var_63 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
      succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ImpTypes_57, HeadVarTypes_20, (MR_Word) ((MR_Unsigned) 0U), Var_63, &TypeSubst_61);
      if (succeeded)
      {
        MR_Word Var_64;

        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (ImpReuseConditions_58));
        }
        parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0(VarRenaming_60, TypeSubst_61, Var_64, &Reuse2_22);
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.analysis.structure_reuse_answer_to_domain\'/4", (MR_String) "type_unify_list failed");
      ReuseAs1_23 = transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0(Reuse1_21);
      ReuseAs2_24 = transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0(Reuse2_22);
      succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0(ModuleInfo_16, ProcInfo_17, ReuseAs1_23, ReuseAs2_24);
      if (succeeded)
      {
        succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0(ModuleInfo_16, ProcInfo_17, ReuseAs2_24, ReuseAs1_23);
        succeeded = !(succeeded);
      }
    }
    else
      succeeded = MR_FALSE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__get_func_info_6_6_p_0(
  MR_Word ModuleInfo_18,
  MR_Word ModuleName_19,
  MR_Word FuncId_20,
  MR_Word * FuncInfo_23)
{
  MR_Word PPId_24;
  MR_Word ProcInfo_25;

  transform_hlds__mmc_analysis__func_id_to_ppid_4_p_0(ModuleInfo_18, ModuleName_19, FuncId_20, &PPId_24);
  hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_18, PPId_24, &ProcInfo_25);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *FuncInfo_23 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_18));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcInfo_25));
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__top_2_2_f_0(
  MR_Word HeadVar__1_12)
{
  MR_Word HeadVar__3_14;

  mercury__require__unexpected_2_p_0((MR_String) "instance method function \140analysis.top\'/2 for \140analysis.analysis(transform_hlds.ctgc.structure_reuse.analysis.structure_reuse_func_info, transform_hlds.ctgc.str" "ucture_reuse.analysis.structure_reuse_call, transform_hlds.ctgc.structure_reuse.analysis.structure_reuse_answer)\'", (MR_String) "top/2 called");
  return HeadVar__3_14;
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__bottom_2_2_f_0(
  MR_Word HeadVar__1_10)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void)
{
  return (MR_Integer) 1;
}

static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__analysis_version_number_2_2_f_0(void)
{
  return (MR_Integer) 3;
}

static MR_String MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__analysis_name_2_2_f_0(void)
{
  return (MR_String) "structure_reuse";
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Compare____structure_reuse_func_info_0_0(
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
      hlds__hlds_pred____Compare____proc_info_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_func_info_0_0(
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
      succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Compare____structure_reuse_call_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[9]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_call_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[9]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Compare____structure_reuse_answer_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_18;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[6]), &SubResult1_18, ((MR_Box) (Var_31)), ((MR_Box) (ArgY1_17)));
                succeeded = (SubResult1_18 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_18;
                else
                {
                  MR_Word SubResult2_21;

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[7]), &SubResult2_21, ((MR_Box) (Var_30)), ((MR_Box) (ArgY2_20)));
                  succeeded = (SubResult2_21 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_21;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[8]), HeadVar__1_1, ((MR_Box) (Var_29)), ((MR_Box) (ArgY3_23)));
                }
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_answer_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_15_15;
          MR_Word TypeInfo_16_16;
          MR_Word TypeInfo_17_17;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_10;
          MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            TypeInfo_15_15 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            if (succeeded)
            {
              TypeInfo_16_16 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[7]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
              if (succeeded)
              {
                TypeInfo_17_17 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[8]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_11)), ((MR_Box) (ArgY3_12)));
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__remove_useless_reuse_proc_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word VeryVerbose_9,
  MR_Word ReuseAsMap_10,
  MR_Word HeadVar__4_11,
  MR_Word PPId_12,
  MR_Word STATE_VARIABLE_PredTable_0_22,
  MR_Word * STATE_VARIABLE_PredTable_23)
{
  transform_hlds__ctgc__structure_reuse__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_117_115_101_108_101_115_115_95_114_101_117_115_101_95_112_114_111_99_95_95_91_52_93_95_48_7_p_0(ModuleInfo_8, VeryVerbose_9, ReuseAsMap_10, PPId_12, STATE_VARIABLE_PredTable_0_22, STATE_VARIABLE_PredTable_23);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_117_115_101_108_101_115_115_95_114_101_117_115_101_95_112_114_111_99_95_95_91_52_93_95_48_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word VeryVerbose_9,
  MR_Word ReuseAsMap_10,
  MR_Word PPId_12,
  MR_Word STATE_VARIABLE_PredTable_0_22,
  MR_Word * STATE_VARIABLE_PredTable_23)
{
  MR_bool succeeded;
  MR_Word ReuseAs_Status_14;
  MR_Word ReuseAs_15;
  MR_Box conv0_ReuseAs_Status_14;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0), ReuseAsMap_10, ((MR_Box) (PPId_12)), &conv0_ReuseAs_Status_14);
  ReuseAs_Status_14 = ((MR_Word) (conv0_ReuseAs_Status_14));
  ReuseAs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseAs_Status_14, (MR_Integer) 0))));
  succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_p_0(ReuseAs_15);
  if (succeeded)
  {
    MR_Word PredId_20;

    switch (VeryVerbose_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProgressStream_18;
          MR_String PPIdStr_19;

          hlds__passes_aux__get_progress_output_stream_4_p_0(ModuleInfo_8, &ProgressStream_18);
          PPIdStr_19 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_f_0(ModuleInfo_8, PPId_12);
          mercury__io__write_string_4_p_0(ProgressStream_18, (MR_String) "% Removing useless reuse ");
          mercury__io__write_string_4_p_0(ProgressStream_18, PPIdStr_19);
          mercury__io__write_string_4_p_0(ProgressStream_18, (MR_String) "\n");
        }
        break;
    }
    PredId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_12, (MR_Integer) 0))));
    hlds__pred_table__predicate_table_remove_predicate_3_p_0(PredId_20, STATE_VARIABLE_PredTable_0_22, STATE_VARIABLE_PredTable_23);
  }
  else
    *STATE_VARIABLE_PredTable_23 = STATE_VARIABLE_PredTable_0_22;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__record_intermod_requests_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_11,
  MR_Word * STATE_VARIABLE_AnalysisInfo_12)
{
  MR_Word PPId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word NoClobbers_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word ModuleName_9;
  MR_Word FuncId_10;
  MR_Word Var_14;

  transform_hlds__mmc_analysis__module_name_func_id_4_p_0(ModuleInfo_5, PPId_6, &ModuleName_9, &FuncId_10);
  Var_14 = (MR_Word) (NoClobbers_7);
  analysis__record_request_6_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_3[0]), (MR_String) "structure_reuse", ModuleName_9, FuncId_10, ((MR_Box) (Var_14)), STATE_VARIABLE_AnalysisInfo_0_11, STATE_VARIABLE_AnalysisInfo_12);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__handle_structure_reuse_dependency_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_15,
  MR_Word * STATE_VARIABLE_AnalysisInfo_16)
{
  MR_Word DepPPId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word NoClobbers_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word DepModuleName_9;
  MR_Word DepFuncId_10;
  MR_Word Call_11;
  MR_Word FuncInfo_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_FuncInfo_14;

  transform_hlds__mmc_analysis__module_name_func_id_4_p_0(ModuleInfo_5, DepPPId_6, &DepModuleName_9, &DepFuncId_10);
  Call_11 = (MR_Word) (NoClobbers_7);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_4[0]), (MR_Integer) 0)), (MR_Integer) 10))));
  func_0(((MR_Box) ((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_4[0]))), ((MR_Box) (ModuleInfo_5)), ((MR_Box) (DepModuleName_9)), ((MR_Box) (DepFuncId_10)), &conv1_FuncInfo_14);
  FuncInfo_14 = ((MR_Word) (conv1_FuncInfo_14));
  analysis__record_dependency_7_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_4[0]), DepModuleName_9, DepFuncId_10, ((MR_Box) (FuncInfo_14)), ((MR_Box) (Call_11)), STATE_VARIABLE_AnalysisInfo_0_15, STATE_VARIABLE_AnalysisInfo_16);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__record_structure_reuse_results_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word CondReuseMap_8,
  MR_Word PPId_9,
  MR_Word ReuseAs_Status_10,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_15,
  MR_Word * STATE_VARIABLE_AnalysisInfo_16)
{
  MR_bool succeeded;
  MR_Word RecordPPId_13;
  MR_Word NoClobbers_14;
  MR_Word PredId_27;
  MR_Integer ProcId_28;
  MR_Word ReuseAs_29;
  MR_Word Status_30;
  MR_Word PredInfo_31;
  MR_Word ShouldWrite_32;
  MR_Word Key_12;
  MR_Box conv0_Key_12;

  succeeded = mercury__bimap__reverse_search_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CondReuseMap_8, &conv0_Key_12, ((MR_Box) (PPId_9)));
  if (succeeded)
  {
    Key_12 = ((MR_Word) (conv0_Key_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    RecordPPId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Key_12, (MR_Integer) 0))));
    NoClobbers_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Key_12, (MR_Integer) 1))));
  }
  else
  {
    RecordPPId_13 = PPId_9;
    NoClobbers_14 = (MR_Word) ((MR_Unsigned) 0U);
  }
  PredId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RecordPPId_13, (MR_Integer) 0))));
  ProcId_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), RecordPPId_13, (MR_Integer) 1))));
  ReuseAs_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseAs_Status_10, (MR_Integer) 0))));
  Status_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ReuseAs_Status_10, (MR_Integer) 1))) & (MR_Integer) 3);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_27, &PredInfo_31);
  transform_hlds__intermod_analysis__should_write_reuse_info_6_p_0(ModuleInfo_7, PredId_27, ProcId_28, PredInfo_31, (MR_Integer) 0, &ShouldWrite_32);
  switch (ShouldWrite_32) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_AnalysisInfo_16 = STATE_VARIABLE_AnalysisInfo_0_15;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Answer_33;
        MR_Word ModuleName_34;
        MR_Word FuncId_35;
        MR_Word Var_37;
        MR_Word Reuse_44;

        Reuse_44 = transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_f_0(ReuseAs_29);
        switch (MR_tag((MR_Word) Reuse_44)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Reuse_44)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Answer_33 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                Answer_33 = (MR_Word) ((MR_Unsigned) 4U);
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Conditions_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Reuse_44, (MR_Integer) 0))));
              MR_Word ProcInfo_46;
              MR_Word HeadVars_47;
              MR_Word VarTypes_48;
              MR_Word HeadVarTypes_49;

              hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_7, RecordPPId_13, &ProcInfo_46);
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_46, &HeadVars_47);
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_46, &VarTypes_48);
              hlds__vartypes__lookup_var_types_3_p_0(VarTypes_48, HeadVars_47, &HeadVarTypes_49);
              {
                Answer_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Answer_33, 0) = ((MR_Box) (HeadVars_47));
                MR_hl_field(MR_mktag(1), Answer_33, 1) = ((MR_Box) (HeadVarTypes_49));
                MR_hl_field(MR_mktag(1), Answer_33, 2) = ((MR_Box) (Conditions_45));
              }
            }
            break;
        }
        transform_hlds__mmc_analysis__module_name_func_id_4_p_0(ModuleInfo_7, RecordPPId_13, &ModuleName_34, &FuncId_35);
        Var_37 = (MR_Word) (NoClobbers_14);
        analysis__record_result_7_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_4[0]), ModuleName_34, FuncId_35, ((MR_Box) (Var_37)), ((MR_Box) (Answer_33)), Status_30, STATE_VARIABLE_AnalysisInfo_0_15, STATE_VARIABLE_AnalysisInfo_16);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__annotate_in_use_information_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_6,
  MR_Word * STATE_VARIABLE_ProcInfo_7)
{
  MR_Word STATE_VARIABLE_ProcInfo_8_8;
  MR_Word STATE_VARIABLE_ProcInfo_9_9;

  transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_p_0(STATE_VARIABLE_ProcInfo_0_6, &STATE_VARIABLE_ProcInfo_8_8);
  transform_hlds__ctgc__structure_reuse__lbu__backward_use_information_3_p_0(ModuleInfo_4, STATE_VARIABLE_ProcInfo_8_8, &STATE_VARIABLE_ProcInfo_9_9);
  hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(ModuleInfo_4, STATE_VARIABLE_ProcInfo_9_9, STATE_VARIABLE_ProcInfo_7);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_p_0(
  MR_Word PPId_5,
  MR_Word ReuseAs_Status_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16)
{
  MR_Word ReuseAs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseAs_Status_6, (MR_Integer) 0))));
  MR_Word Status_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ReuseAs_Status_6, (MR_Integer) 1))) & (MR_Integer) 3);
  MR_Word ReuseDomain_10;
  MR_Word Domain_Status_11;
  MR_Word PredInfo_12;
  MR_Word ProcInfo0_13;
  MR_Word ProcInfo_14;

  ReuseDomain_10 = transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_f_0(ReuseAs_8);
  {
    Domain_Status_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Domain_Status_11, 0) = ((MR_Box) (ReuseDomain_10));
    MR_hl_field(MR_mktag(0), Domain_Status_11, 1) = (MR_Box) ((MR_Unsigned) (Status_9));
  }
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_15, PPId_5, &PredInfo_12, &ProcInfo0_13);
  hlds__hlds_pred__proc_info_set_structure_reuse_3_p_0(Domain_Status_11, ProcInfo0_13, &ProcInfo_14);
  hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_5, PredInfo_12, ProcInfo_14, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__add_reuse_request_4_p_0(
  MR_Word PPId_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Requests_0_10,
  MR_Word * STATE_VARIABLE_Requests_11)
{
  MR_Word NoClobbers_6 = (MR_Word) (HeadVar__2_2);

  if ((NoClobbers_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Requests_11 = STATE_VARIABLE_Requests_0_10;
  else
  {
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (PPId_5));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (NoClobbers_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Requests_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Requests_0_10));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_defined_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Requests_11;

  transform_hlds__ctgc__structure_reuse__analysis__add_reuse_request_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Requests_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Requests_11));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_defined_proc_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ExternalRequests_0_30,
  MR_Word * STATE_VARIABLE_ExternalRequests_31,
  MR_Word STATE_VARIABLE_MustHaveReuseVersions_0_32,
  MR_Word * STATE_VARIABLE_MustHaveReuseVersions_33)
{
  MR_bool succeeded;
  MR_Word PPId_13;
  MR_Word AnalysisInfo_14;
  MR_Word ModuleName_15;
  MR_Word FuncId_16;
  MR_Word ThisModule_17;

  {
    PPId_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PPId_13, 0) = ((MR_Box) (PredId_9));
    MR_hl_field(MR_mktag(0), PPId_13, 1) = ((MR_Box) (ProcId_10));
  }
  hlds__hlds_module__module_info_get_analysis_info_2_p_0(ModuleInfo_8, &AnalysisInfo_14);
  transform_hlds__mmc_analysis__module_name_func_id_4_p_0(ModuleInfo_8, PPId_13, &ModuleName_15, &FuncId_16);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ThisModule_17);
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModule_17, ModuleName_15);
  if (succeeded)
  {
    MR_Word OldCalls_18;
    MR_Word NewCalls_19;
    MR_Word ProcInfo_20;
    MR_Word FuncInfo_21;
    MR_Word MaybeBestResult_23;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_ExternalRequests_36_36;
    MR_Box conv1_STATE_VARIABLE_ExternalRequests_36_36;
    MR_Box conv2_STATE_VARIABLE_ExternalRequests_31;

    analysis__lookup_existing_call_patterns_5_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_3[0]), AnalysisInfo_14, (MR_String) "structure_reuse", ModuleName_15, FuncId_16, &OldCalls_18);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_9[5]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_defined_proc_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (PPId_13));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[4]), Var_35, OldCalls_18, ((MR_Box) (STATE_VARIABLE_ExternalRequests_0_30)), &conv1_STATE_VARIABLE_ExternalRequests_36_36);
    STATE_VARIABLE_ExternalRequests_36_36 = ((MR_Word) (conv1_STATE_VARIABLE_ExternalRequests_36_36));
    analysis__lookup_requests_5_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_3[0]), AnalysisInfo_14, (MR_String) "structure_reuse", ModuleName_15, FuncId_16, &NewCalls_19);
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[4]), Var_35, NewCalls_19, ((MR_Box) (STATE_VARIABLE_ExternalRequests_36_36)), &conv2_STATE_VARIABLE_ExternalRequests_31);
    *STATE_VARIABLE_ExternalRequests_31 = ((MR_Word) (conv2_STATE_VARIABLE_ExternalRequests_31));
    hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_8, PPId_13, &ProcInfo_20);
    {
      FuncInfo_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FuncInfo_21, 0) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), FuncInfo_21, 1) = ((MR_Box) (ProcInfo_20));
    }
    analysis__lookup_best_result_6_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_4[0]), AnalysisInfo_14, ModuleName_15, FuncId_16, ((MR_Box) (FuncInfo_21)), ((MR_Box) (((MR_Box) ((MR_Unsigned) 0U)))), &MaybeBestResult_23);
    if ((MaybeBestResult_23 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_MustHaveReuseVersions_33 = STATE_VARIABLE_MustHaveReuseVersions_0_32;
    else
    {
      MR_Word Answer_25;
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBestResult_23, (MR_Integer) 0))));

      Answer_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) Answer_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Answer_25)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_MustHaveReuseVersions_33 = STATE_VARIABLE_MustHaveReuseVersions_0_32;
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_MustHaveReuseVersions_33 = STATE_VARIABLE_MustHaveReuseVersions_0_32;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_MustHaveReuseVersions_33 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PPId_13));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MustHaveReuseVersions_0_32));
          }
          break;
      }
    }
  }
  else
  {
    *STATE_VARIABLE_MustHaveReuseVersions_33 = STATE_VARIABLE_MustHaveReuseVersions_0_32;
    *STATE_VARIABLE_ExternalRequests_31 = STATE_VARIABLE_ExternalRequests_0_30;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_imported_reuse_answer_8_p_0(
  MR_Word PPId_9,
  MR_Word PredInfo_10,
  MR_Word ProcInfo_11,
  MR_Word ImportedResult_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_ReuseTable_0_28,
  MR_Word * STATE_VARIABLE_ReuseTable_29)
{
  MR_bool succeeded;
  MR_Word Call_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportedResult_12, (MR_Integer) 0))));
  MR_Word Answer_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportedResult_12, (MR_Integer) 1))));
  MR_Word ResultStatus_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImportedResult_12, (MR_Integer) 2))) & (MR_Integer) 3);
  MR_Word NoClobbers_18 = (MR_Word) (Call_15);
  MR_Word HeadVarTypes_19;
  MR_Word Domain_20;
  MR_Word ReuseAs_21;
  MR_Word ReuseAs_Status_22;

  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_10, &HeadVarTypes_19);
  switch (MR_tag((MR_Word) Answer_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Answer_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Domain_20 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          Domain_20 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ImpHeadVars_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Answer_16, (MR_Integer) 0))));
        MR_Word ImpTypes_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Answer_16, (MR_Integer) 1))));
        MR_Word ImpReuseConditions_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Answer_16, (MR_Integer) 2))));
        MR_Word HeadVars_41;
        MR_Word VarRenaming_42;
        MR_Word TypeSubst_43;
        MR_Word Var_45;

        hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_11, &HeadVars_41);
        mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[2]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[2]), ImpHeadVars_38, HeadVars_41, &VarRenaming_42);
        Var_45 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
        succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ImpTypes_39, HeadVarTypes_19, (MR_Word) ((MR_Unsigned) 0U), Var_45, &TypeSubst_43);
        if (succeeded)
        {
          MR_Word Var_46;

          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (ImpReuseConditions_40));
          }
          parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0(VarRenaming_42, TypeSubst_43, Var_46, &Domain_20);
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.analysis.structure_reuse_answer_to_domain\'/4", (MR_String) "type_unify_list failed");
            return;
          }
      }
      break;
  }
  ReuseAs_21 = transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0(Domain_20);
  {
    ReuseAs_Status_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ReuseAs_Status_22, 0) = ((MR_Box) (ReuseAs_21));
    MR_hl_field(MR_mktag(0), ReuseAs_Status_22, 1) = (MR_Box) ((MR_Unsigned) (ResultStatus_17));
  }
  if ((NoClobbers_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(PPId_9, ReuseAs_Status_22, STATE_VARIABLE_ReuseTable_0_28, STATE_VARIABLE_ReuseTable_29);
    *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
  }
  else
  {
    MR_Word NewPPId_25;
    MR_Word STATE_VARIABLE_ReuseTable_31_31;

    transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_p_0(PPId_9, NoClobbers_18, &NewPPId_25, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27);
    transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(NewPPId_25, ReuseAs_Status_22, STATE_VARIABLE_ReuseTable_0_28, &STATE_VARIABLE_ReuseTable_31_31);
    transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_insert_reuse_version_proc_5_p_0(PPId_9, NoClobbers_18, NewPPId_25, STATE_VARIABLE_ReuseTable_31_31, STATE_VARIABLE_ReuseTable_29);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_27;
  MR_Word conv0_STATE_VARIABLE_ReuseTable_29;

  transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_imported_reuse_answer_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ReuseTable_29);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_27));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ReuseTable_29));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_proc_7_p_0(
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_ReuseTable_0_21,
  MR_Word * STATE_VARIABLE_ReuseTable_22)
{
  MR_Word PPId_13;
  MR_Word AnalysisInfo_14;
  MR_Word ModuleName_15;
  MR_Word FuncId_16;
  MR_Word ProcInfo_17;
  MR_Word ImportedResults_18;
  MR_Word Var_23;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_20;
  MR_Box conv2_STATE_VARIABLE_ReuseTable_22;

  {
    PPId_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PPId_13, 0) = ((MR_Box) (PredId_8));
    MR_hl_field(MR_mktag(0), PPId_13, 1) = ((MR_Box) (ProcId_10));
  }
  hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_19, &AnalysisInfo_14);
  transform_hlds__mmc_analysis__module_name_func_id_4_p_0(STATE_VARIABLE_ModuleInfo_0_19, PPId_13, &ModuleName_15, &FuncId_16);
  hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo_9, ProcId_10, &ProcInfo_17);
  analysis__lookup_results_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_4[0]), AnalysisInfo_14, ModuleName_15, FuncId_16, &ImportedResults_18);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_11[0]));
    MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_proc_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (PPId_13));
    MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (PredInfo_9));
    MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (ProcInfo_17));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_1[3]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), Var_23, ImportedResults_18, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_19)), &conv3_STATE_VARIABLE_ModuleInfo_20, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_21)), &conv2_STATE_VARIABLE_ReuseTable_22);
  *STATE_VARIABLE_ModuleInfo_20 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_20));
  *STATE_VARIABLE_ReuseTable_22 = ((MR_Word) (conv2_STATE_VARIABLE_ReuseTable_22));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_pred_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_ExternalRequests_31;
  MR_Word conv4_STATE_VARIABLE_MustHaveReuseVersions_33;

  transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_defined_proc_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_ExternalRequests_31, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_MustHaveReuseVersions_33);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_ExternalRequests_31));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_MustHaveReuseVersions_33));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_pred_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_20;
  MR_Word conv0_STATE_VARIABLE_ReuseTable_22;

  transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_proc_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ReuseTable_22);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_20));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ReuseTable_22));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_pred_9_p_0(
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_ReuseTable_0_21,
  MR_Word * STATE_VARIABLE_ReuseTable_22,
  MR_Word STATE_VARIABLE_ExternalRequests_0_23,
  MR_Word * STATE_VARIABLE_ExternalRequests_24,
  MR_Word STATE_VARIABLE_MustHaveReuseVersions_0_25,
  MR_Word * STATE_VARIABLE_MustHaveReuseVersions_26)
{
  MR_bool succeeded;
  MR_Word PredInfo_15;
  MR_Word PredStatus_16;
  MR_Word ProcIds_17;
  MR_Word Var_27;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_19, PredId_10, &PredInfo_15);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_15, &PredStatus_16);
  ProcIds_17 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(PredInfo_15);
  Var_27 = (MR_Word) (PredStatus_16);
  succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 2);
  if (succeeded)
  {
    MR_Word Var_28;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_20;
    MR_Box conv2_STATE_VARIABLE_ReuseTable_22;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_pred_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (PredId_10));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (PredInfo_15));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), Var_28, ProcIds_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_19)), &conv3_STATE_VARIABLE_ModuleInfo_20, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_21)), &conv2_STATE_VARIABLE_ReuseTable_22);
    *STATE_VARIABLE_ModuleInfo_20 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_20));
    *STATE_VARIABLE_ReuseTable_22 = ((MR_Word) (conv2_STATE_VARIABLE_ReuseTable_22));
    *STATE_VARIABLE_MustHaveReuseVersions_26 = STATE_VARIABLE_MustHaveReuseVersions_0_25;
    *STATE_VARIABLE_ExternalRequests_24 = STATE_VARIABLE_ExternalRequests_0_23;
  }
  else
  {
    MR_Word Var_31;

    Var_31 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_16);
    succeeded = (Var_31 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word Var_32;
      MR_Box conv7_STATE_VARIABLE_ExternalRequests_24;
      MR_Box conv6_STATE_VARIABLE_MustHaveReuseVersions_26;

      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_10[2]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_pred_9_p_0_2));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_19));
        MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (PredId_10));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[4]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[5]), Var_32, ProcIds_17, ((MR_Box) (STATE_VARIABLE_ExternalRequests_0_23)), &conv7_STATE_VARIABLE_ExternalRequests_24, ((MR_Box) (STATE_VARIABLE_MustHaveReuseVersions_0_25)), &conv6_STATE_VARIABLE_MustHaveReuseVersions_26);
      *STATE_VARIABLE_ExternalRequests_24 = ((MR_Word) (conv7_STATE_VARIABLE_ExternalRequests_24));
      *STATE_VARIABLE_MustHaveReuseVersions_26 = ((MR_Word) (conv6_STATE_VARIABLE_MustHaveReuseVersions_26));
    }
    else
    {
      *STATE_VARIABLE_MustHaveReuseVersions_26 = STATE_VARIABLE_MustHaveReuseVersions_0_25;
      *STATE_VARIABLE_ExternalRequests_24 = STATE_VARIABLE_ExternalRequests_0_23;
    }
    *STATE_VARIABLE_ReuseTable_22 = STATE_VARIABLE_ReuseTable_0_21;
    *STATE_VARIABLE_ModuleInfo_20 = STATE_VARIABLE_ModuleInfo_0_19;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_p_0(
  MR_Word PredInfo_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ProcTable_0_18,
  MR_Word * STATE_VARIABLE_ProcTable_19)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_ProcInfo_20_20;
  MR_Box conv0_STATE_VARIABLE_ProcInfo_20_20;
  MR_Word ImpHeadVars_9;
  MR_Word ImpTypes_10;
  MR_Word ImpReuse_11;

  conv0_STATE_VARIABLE_ProcInfo_20_20 = mercury__map__det_elem_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_6)), STATE_VARIABLE_ProcTable_0_18);
  STATE_VARIABLE_ProcInfo_20_20 = ((MR_Word) (conv0_STATE_VARIABLE_ProcInfo_20_20));
  succeeded = hlds__hlds_pred__proc_info_get_imported_structure_reuse_4_p_0(STATE_VARIABLE_ProcInfo_20_20, &ImpHeadVars_9, &ImpTypes_10, &ImpReuse_11);
  if (succeeded)
  {
    MR_Word HeadVars_12;
    MR_Word HeadVarTypes_13;
    MR_Word VarRenaming_14;
    MR_Word Reuse_17;
    MR_Word STATE_VARIABLE_TypeSubst_21_21;
    MR_Word STATE_VARIABLE_TypeSubst_23_23;
    MR_Word Var_24;
    MR_Word STATE_VARIABLE_ProcInfo_25_25;
    MR_Word STATE_VARIABLE_ProcInfo_27_27;
    MR_Word TypeSubstNew_16;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_20_20, &HeadVars_12);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_5, &HeadVarTypes_13);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[2]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[2]), ImpHeadVars_9, HeadVars_12, &VarRenaming_14);
    STATE_VARIABLE_TypeSubst_21_21 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
    succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ImpTypes_10, HeadVarTypes_13, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_TypeSubst_21_21, &TypeSubstNew_16);
    if (succeeded)
      STATE_VARIABLE_TypeSubst_23_23 = TypeSubstNew_16;
    else
      STATE_VARIABLE_TypeSubst_23_23 = STATE_VARIABLE_TypeSubst_21_21;
    parse_tree__prog_ctgc__rename_structure_reuse_domain_4_p_0(VarRenaming_14, STATE_VARIABLE_TypeSubst_23_23, ImpReuse_11, &Reuse_17);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (Reuse_17));
      MR_hl_field(MR_mktag(0), Var_24, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
    hlds__hlds_pred__proc_info_set_structure_reuse_3_p_0(Var_24, STATE_VARIABLE_ProcInfo_20_20, &STATE_VARIABLE_ProcInfo_25_25);
    hlds__hlds_pred__proc_info_reset_imported_structure_reuse_2_p_0(STATE_VARIABLE_ProcInfo_25_25, &STATE_VARIABLE_ProcInfo_27_27);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_6)), ((MR_Box) (STATE_VARIABLE_ProcInfo_27_27)), STATE_VARIABLE_ProcTable_0_18, STATE_VARIABLE_ProcTable_19);
  }
  else
    *STATE_VARIABLE_ProcTable_19 = STATE_VARIABLE_ProcTable_0_18;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcTable_19;

  transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_proc_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ProcTable_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ProcTable_19));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_Word PredInfo0_6;
  MR_Word PredInfo_7;
  MR_Word ProcIds_15;
  MR_Word STATE_VARIABLE_ProcTable_8_16;
  MR_Word Var_17;
  MR_Word STATE_VARIABLE_ProcTable_10_18;
  MR_Box conv1_STATE_VARIABLE_ProcTable_10_18;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, PredId_4, &PredInfo0_6);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_6, &STATE_VARIABLE_ProcTable_8_16);
  ProcIds_15 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(PredInfo0_6);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_9[4]));
    MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (PredInfo0_6));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_1[2]), Var_17, ProcIds_15, ((MR_Box) (STATE_VARIABLE_ProcTable_8_16)), &conv1_STATE_VARIABLE_ProcTable_10_18);
  STATE_VARIABLE_ProcTable_10_18 = ((MR_Word) (conv1_STATE_VARIABLE_ProcTable_10_18));
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(STATE_VARIABLE_ProcTable_10_18, PredInfo0_6, &PredInfo_7);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_4, PredInfo_7, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__maybe_create_forwarding_procedures_intermod_analysis_4_p_0(
  MR_Word ReuseTable_5,
  MR_Word PredProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  MR_bool succeeded;
  MR_Word ReuseAs_Status_8;
  MR_Word ReuseAs_9;

  succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_3_p_0(ReuseTable_5, PredProcId_6, &ReuseAs_Status_8);
  if (succeeded)
  {
    ReuseAs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseAs_Status_8, (MR_Integer) 0))));
    succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_p_0(ReuseAs_9);
  }
  if (succeeded)
    *STATE_VARIABLE_ModuleInfo_13 = STATE_VARIABLE_ModuleInfo_0_12;
  else
    transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_p_0(PredProcId_6, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__maybe_create_forwarding_procedures_intermod_opt_2_5_p_0(
  MR_Word FinalReuseTable_6,
  MR_Word PPId_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20)
{
  MR_bool succeeded;
  MR_Word InitialReuseAs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
  MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_7, (MR_Integer) 0))));
  MR_Word PredInfo_13;
  MR_Word PredStatus_14;
  MR_Word FinalReuseAs_Status_15;
  MR_Word FinalReuseAs_16;
  MR_Word Var_21;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_19, PredId_11, &PredInfo_13);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_13, &PredStatus_14);
  succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_p_0(InitialReuseAs_8);
  if (succeeded)
  {
    Var_21 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_14);
    succeeded = (Var_21 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_3_p_0(FinalReuseTable_6, PPId_7, &FinalReuseAs_Status_15);
      if (succeeded)
      {
        FinalReuseAs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinalReuseAs_Status_15, (MR_Integer) 0))));
        succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_p_0(FinalReuseAs_16);
      }
    }
  }
  if (succeeded)
    transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_p_0(PPId_7, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_19, STATE_VARIABLE_ModuleInfo_20);
  else
    *STATE_VARIABLE_ModuleInfo_20 = STATE_VARIABLE_ModuleInfo_0_19;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__make_intermediate_reuse_proc_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * NewPPId_9,
  MR_Word STATE_VARIABLE_ReuseTable_0_17,
  MR_Word * STATE_VARIABLE_ReuseTable_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20)
{
  MR_Word PPId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word NoClobbers_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word PredInfo_12;
  MR_Word ProcInfo0_13;
  MR_Word HeadVars_14;
  MR_Word NoClobberVars_15;
  MR_Word ProcInfo_16;
  MR_Word STATE_VARIABLE_ModuleInfo_21_21;
  MR_Word Var_23;

  transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_p_0(PPId_7, NoClobbers_8, NewPPId_9, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_21_21);
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_21_21, *NewPPId_9, &PredInfo_12, &ProcInfo0_13);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_13, &HeadVars_14);
  transform_hlds__ctgc__structure_reuse__analysis__get_numbered_args_4_p_0((MR_Integer) 1, NoClobbers_8, HeadVars_14, &NoClobberVars_15);
  Var_23 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NoClobberVars_15);
  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_p_0(Var_23, ProcInfo0_13, &ProcInfo_16);
  hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(*NewPPId_9, PredInfo_12, ProcInfo_16, STATE_VARIABLE_ModuleInfo_21_21, STATE_VARIABLE_ModuleInfo_20);
  transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_insert_reuse_version_proc_5_p_0(PPId_7, NoClobbers_8, *NewPPId_9, STATE_VARIABLE_ReuseTable_0_17, STATE_VARIABLE_ReuseTable_18);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__get_numbered_args_4_p_0(
  MR_Integer I_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.analysis.get_numbered_args\'/4", (MR_String) "argument list too short");
          return;
        }
      else
      {
        MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Vars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));

        succeeded = (I_1 == Var_26);
        if (succeeded)
        {
          MR_Word Selected0_19;
          MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) I_1 + (MR_Unsigned) 1);

          transform_hlds__ctgc__structure_reuse__analysis__get_numbered_args_4_p_0(Var_20, Var_25, Vars_17, &Selected0_19);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Selected0_19));
          }
        }
        else
        {
          MR_Integer Var_22 = (MR_Integer) ((MR_Unsigned) I_1 + (MR_Unsigned) 1);
          MR_Integer next_value_of_I_1 = Var_22;
          MR_Word next_value_of_HeadVar__3_3 = Vars_17;

          // direct tailcall eliminated
          ;
          I_1 = next_value_of_I_1;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer_harsher_than_in_analysis_registry_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ReuseTable_6,
  MR_Word ReusePPId_7,
  MR_Word * Harsher_8)
{
  MR_bool succeeded;
  MR_Word AnalysisInfo_9;
  MR_Word OrigPPId_10;
  MR_Word NoClobbers_11;
  MR_Word ModuleName_12;
  MR_Word FuncId_13;
  MR_Word ProcInfo_14;
  MR_Word FuncInfo_15;
  MR_Word Call_16;
  MR_Word MaybeOldResult_17;
  MR_Word OldAnswer_19;
  MR_Word TypeClassInfo_for_partial_order_42;
  MR_Word OldCall_18;
  MR_Word Var_25;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

  hlds__hlds_module__module_info_get_analysis_info_2_p_0(ModuleInfo_5, &AnalysisInfo_9);
  transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_reverse_search_reuse_version_proc_4_p_0(ReuseTable_6, ReusePPId_7, &OrigPPId_10, &NoClobbers_11);
  transform_hlds__mmc_analysis__module_name_func_id_4_p_0(ModuleInfo_5, OrigPPId_10, &ModuleName_12, &FuncId_13);
  hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_5, OrigPPId_10, &ProcInfo_14);
  {
    FuncInfo_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), FuncInfo_15, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(MR_mktag(0), FuncInfo_15, 1) = ((MR_Box) (ProcInfo_14));
  }
  Call_16 = (MR_Word) (NoClobbers_11);
  analysis__lookup_best_result_6_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_4[0]), AnalysisInfo_9, ModuleName_12, FuncId_13, ((MR_Box) (FuncInfo_15)), ((MR_Box) (Call_16)), &MaybeOldResult_17);
  succeeded = (MaybeOldResult_17 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOldResult_17, (MR_Integer) 0))));
    OldCall_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
    OldAnswer_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
    TypeClassInfo_for_partial_order_42 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_1[0]);
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_partial_order_42, (MR_Integer) 0)), (MR_Integer) 6))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_42)), ((MR_Box) (FuncInfo_15)), ((MR_Box) (Call_16)), ((MR_Box) (OldCall_18)));
  }
  if (succeeded)
  {
    MR_Word NewAnswer_21;
    MR_Word NewReuseAs_54;
    MR_Word Reuse_62;
    MR_Word ReuseAs_Status_53;
    MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box);

    succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_3_p_0(ReuseTable_6, ReusePPId_7, &ReuseAs_Status_53);
    if (succeeded)
      NewReuseAs_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseAs_Status_53, (MR_Integer) 0))));
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.analysis.lookup_new_structure_reuse_answer\'/4", (MR_String) "search failed");
        return;
      }
    Reuse_62 = transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_f_0(NewReuseAs_54);
    switch (MR_tag((MR_Word) Reuse_62)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Reuse_62)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            NewAnswer_21 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            NewAnswer_21 = (MR_Word) ((MR_Unsigned) 4U);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Conditions_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Reuse_62, (MR_Integer) 0))));
          MR_Word ProcInfo_64;
          MR_Word HeadVars_65;
          MR_Word VarTypes_66;
          MR_Word HeadVarTypes_67;

          hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_5, ReusePPId_7, &ProcInfo_64);
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_64, &HeadVars_65);
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_64, &VarTypes_66);
          hlds__vartypes__lookup_var_types_3_p_0(VarTypes_66, HeadVars_65, &HeadVarTypes_67);
          {
            NewAnswer_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NewAnswer_21, 0) = ((MR_Box) (HeadVars_65));
            MR_hl_field(MR_mktag(1), NewAnswer_21, 1) = ((MR_Box) (HeadVarTypes_67));
            MR_hl_field(MR_mktag(1), NewAnswer_21, 2) = ((MR_Box) (Conditions_63));
          }
        }
        break;
    }
    func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    succeeded = func_1(((MR_Box) ((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_1[1]))), ((MR_Box) (FuncInfo_15)), ((MR_Box) (NewAnswer_21)), ((MR_Box) (OldAnswer_19)));
    if (succeeded)
      *Harsher_8 = (MR_Integer) 1;
    else
      *Harsher_8 = (MR_Integer) 0;
  }
  else
    *Harsher_8 = (MR_Integer) 0;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_STATE_VARIABLE_PredTable_23;

  transform_hlds__ctgc__structure_reuse__analysis__remove_useless_reuse_proc_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv16_STATE_VARIABLE_PredTable_23);
  *wrapper_arg_4 = ((MR_Box) (conv16_STATE_VARIABLE_PredTable_23));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_AnalysisInfo_12;

  transform_hlds__ctgc__structure_reuse__analysis__record_intermod_requests_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_AnalysisInfo_12);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_AnalysisInfo_12));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_AnalysisInfo_16;

  transform_hlds__ctgc__structure_reuse__analysis__handle_structure_reuse_dependency_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_AnalysisInfo_16);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_AnalysisInfo_16));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_AnalysisInfo_16;

  transform_hlds__ctgc__structure_reuse__analysis__record_structure_reuse_results_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_AnalysisInfo_16);
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_AnalysisInfo_16));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_ModuleInfo_16;

  transform_hlds__ctgc__structure_reuse__analysis__save_reuse_in_module_info_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv8_STATE_VARIABLE_ModuleInfo_16);
  *wrapper_arg_4 = ((MR_Box) (conv8_STATE_VARIABLE_ModuleInfo_16));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ModuleInfo_13;

  transform_hlds__ctgc__structure_reuse__analysis__maybe_create_forwarding_procedures_intermod_analysis_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ModuleInfo_13);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_13));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_NewPPId_9;
  MR_Word conv2_STATE_VARIABLE_ReuseTable_18;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_20;

  transform_hlds__ctgc__structure_reuse__analysis__make_intermediate_reuse_proc_6_p_0(((MR_Word) (wrapper_arg_1)), &conv3_NewPPId_9, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_ReuseTable_18, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ModuleInfo_20);
  *wrapper_arg_2 = ((MR_Box) (conv3_NewPPId_9));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_ReuseTable_18));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_20));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcInfo_7;

  transform_hlds__ctgc__structure_reuse__analysis__annotate_in_use_information_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ProcInfo_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ProcInfo_7));
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30)
{
  MR_bool succeeded;
  MR_Word Globals_4;
  MR_Word VeryVerbose_5;
  MR_Word SharingTable_6;
  MR_Word IntermodAnalysis_7;
  MR_Word ExternalRequests_9;
  MR_Word MustHaveReuseVersions_10;
  MR_Word ReuseTable_11;
  MR_Word DepProcs0_15;
  MR_Word InternalRequests_16;
  MR_Word IntermodRequests0_17;
  MR_Integer Repeats_18;
  MR_Word DepProcs_19;
  MR_Word IntermodRequests_20;
  MR_Word ReuseInfoMap_21;
  MR_Word ReuseVersionMap_22;
  MR_Word ProcAnalysisKinds0_23;
  MR_Word ProcAnalysisKinds_24;
  MR_Word OpMode_25;
  MR_Word PredTable0_27;
  MR_Word PredTable_28;
  MR_Word STATE_VARIABLE_ModuleInfo_34_34;
  MR_Word STATE_VARIABLE_ReuseTable_35_35;
  MR_Word STATE_VARIABLE_ModuleInfo_41_41;
  MR_Word STATE_VARIABLE_ReuseTable_51_51;
  MR_Word STATE_VARIABLE_ModuleInfo_52_52;
  MR_Word STATE_VARIABLE_ModuleInfo_60_60;
  MR_Word STATE_VARIABLE_ReuseTable_61_61;
  MR_Word STATE_VARIABLE_ModuleInfo_71_71;
  MR_Word STATE_VARIABLE_ReuseTable_72_72;
  MR_Word STATE_VARIABLE_ReuseTable_79_79;
  MR_Word STATE_VARIABLE_ModuleInfo_80_80;
  MR_Word STATE_VARIABLE_ModuleInfo_82_82;
  MR_Word STATE_VARIABLE_ModuleInfo_85_85;
  MR_Word STATE_VARIABLE_ModuleInfo_87_87;
  MR_Word STATE_VARIABLE_ModuleInfo_89_89;
  MR_Word STATE_VARIABLE_ModuleInfo_99_99;
  MR_Word Var_100;
  MR_Word DebugStream_102;
  MR_Word DebugStream_103;
  MR_Word _NewPPIds_14;
  MR_Box conv5_STATE_VARIABLE_ReuseTable_51_51;
  MR_Box conv4_STATE_VARIABLE_ModuleInfo_52_52;
  MR_Word DebugStream_104;
  MR_Word DebugStream_105;
  MR_Word DebugStream_106;
  MR_Word DebugStream_107;
  MR_Box conv9_STATE_VARIABLE_ModuleInfo_87_87;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Box conv17_PredTable_28;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &Globals_4);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 71, &VeryVerbose_5);
  SharingTable_6 = transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_1_f_0(STATE_VARIABLE_ModuleInfo_0_29);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 497, &IntermodAnalysis_7);
  switch (IntermodAnalysis_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &STATE_VARIABLE_ModuleInfo_34_34);
        STATE_VARIABLE_ReuseTable_35_35 = transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_f_0(STATE_VARIABLE_ModuleInfo_34_34);
        ExternalRequests_9 = (MR_Word) ((MR_Unsigned) 0U);
        MustHaveReuseVersions_10 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_5_p_0(STATE_VARIABLE_ModuleInfo_0_29, &STATE_VARIABLE_ModuleInfo_34_34, &STATE_VARIABLE_ReuseTable_35_35, &ExternalRequests_9, &MustHaveReuseVersions_10);
      break;
  }
  hlds__passes_aux__get_debug_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_34_34, &DebugStream_102);
  libs__file_util__maybe_write_string_5_p_0(DebugStream_102, VeryVerbose_5, (MR_String) "% Annotating in use information...");
  hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_5[3]), STATE_VARIABLE_ModuleInfo_34_34, &STATE_VARIABLE_ModuleInfo_41_41);
  hlds__passes_aux__get_debug_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_41_41, &DebugStream_103);
  libs__file_util__maybe_write_string_5_p_0(DebugStream_103, VeryVerbose_5, (MR_String) "done.\n");
  libs__file_util__maybe_write_string_5_p_0(DebugStream_103, VeryVerbose_5, (MR_String) "% Reuse table before intermediate reuse:\n");
  transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_6_p_0(DebugStream_103, VeryVerbose_5, STATE_VARIABLE_ModuleInfo_41_41, STATE_VARIABLE_ReuseTable_35_35);
  mercury__list__map_foldl2_7_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_1[8]), ExternalRequests_9, &_NewPPIds_14, ((MR_Box) (STATE_VARIABLE_ReuseTable_35_35)), &conv5_STATE_VARIABLE_ReuseTable_51_51, ((MR_Box) (STATE_VARIABLE_ModuleInfo_41_41)), &conv4_STATE_VARIABLE_ModuleInfo_52_52);
  STATE_VARIABLE_ReuseTable_51_51 = ((MR_Word) (conv5_STATE_VARIABLE_ReuseTable_51_51));
  STATE_VARIABLE_ModuleInfo_52_52 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_52_52));
  hlds__passes_aux__get_debug_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_52_52, &DebugStream_104);
  libs__file_util__maybe_write_string_5_p_0(DebugStream_104, VeryVerbose_5, (MR_String) "% Reuse table after intermediate reuse:\n");
  transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_6_p_0(DebugStream_104, VeryVerbose_5, STATE_VARIABLE_ModuleInfo_52_52, STATE_VARIABLE_ReuseTable_51_51);
  libs__file_util__maybe_write_string_5_p_0(DebugStream_104, VeryVerbose_5, (MR_String) "% Direct reuse...\n");
  transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_p_0(SharingTable_6, STATE_VARIABLE_ModuleInfo_52_52, &STATE_VARIABLE_ModuleInfo_60_60, STATE_VARIABLE_ReuseTable_51_51, &STATE_VARIABLE_ReuseTable_61_61);
  hlds__passes_aux__get_debug_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_60_60, &DebugStream_105);
  libs__file_util__maybe_write_string_5_p_0(DebugStream_105, VeryVerbose_5, (MR_String) "% Direct reuse: done.\n");
  transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_6_p_0(DebugStream_105, VeryVerbose_5, STATE_VARIABLE_ModuleInfo_60_60, STATE_VARIABLE_ReuseTable_61_61);
  hlds__passes_aux__get_debug_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_60_60, &DebugStream_106);
  libs__file_util__maybe_write_string_5_p_0(DebugStream_106, VeryVerbose_5, (MR_String) "% Indirect reuse...\n");
  transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_p_0(SharingTable_6, STATE_VARIABLE_ModuleInfo_60_60, &STATE_VARIABLE_ModuleInfo_71_71, STATE_VARIABLE_ReuseTable_61_61, &STATE_VARIABLE_ReuseTable_72_72, &DepProcs0_15, &InternalRequests_16, &IntermodRequests0_17);
  hlds__passes_aux__get_debug_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_71_71, &DebugStream_107);
  libs__file_util__maybe_write_string_5_p_0(DebugStream_107, VeryVerbose_5, (MR_String) "% Indirect reuse: done.\n");
  transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_6_p_0(DebugStream_107, VeryVerbose_5, STATE_VARIABLE_ModuleInfo_71_71, STATE_VARIABLE_ReuseTable_72_72);
  libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 510, &Repeats_18);
  transform_hlds__ctgc__structure_reuse__analysis__handle_structure_reuse_requests_11_p_0(Repeats_18, SharingTable_6, InternalRequests_16, STATE_VARIABLE_ReuseTable_72_72, &STATE_VARIABLE_ReuseTable_79_79, STATE_VARIABLE_ModuleInfo_71_71, &STATE_VARIABLE_ModuleInfo_80_80, DepProcs0_15, &DepProcs_19, IntermodRequests0_17, &IntermodRequests_20);
  transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_p_0(STATE_VARIABLE_ReuseTable_79_79, &ReuseTable_11, STATE_VARIABLE_ModuleInfo_80_80, &STATE_VARIABLE_ModuleInfo_82_82);
  switch (IntermodAnalysis_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      transform_hlds__ctgc__structure_reuse__analysis__maybe_create_forwarding_procedures_intermod_opt_4_p_0(STATE_VARIABLE_ReuseTable_35_35, ReuseTable_11, STATE_VARIABLE_ModuleInfo_82_82, &STATE_VARIABLE_ModuleInfo_85_85);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_83;
        MR_Box conv7_STATE_VARIABLE_ModuleInfo_85_85;

        {
          Var_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_9[0]));
          MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_3));
          MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (ReuseTable_11));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_83, MustHaveReuseVersions_10, ((MR_Box) (STATE_VARIABLE_ModuleInfo_82_82)), &conv7_STATE_VARIABLE_ModuleInfo_85_85);
        STATE_VARIABLE_ModuleInfo_85_85 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_85_85));
      }
      break;
  }
  ReuseInfoMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseTable_11, (MR_Integer) 0))));
  ReuseVersionMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseTable_11, (MR_Integer) 1))));
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_1[9]), ReuseInfoMap_21, ((MR_Box) (STATE_VARIABLE_ModuleInfo_85_85)), &conv9_STATE_VARIABLE_ModuleInfo_87_87);
  STATE_VARIABLE_ModuleInfo_87_87 = ((MR_Word) (conv9_STATE_VARIABLE_ModuleInfo_87_87));
  hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(STATE_VARIABLE_ModuleInfo_87_87, &ProcAnalysisKinds0_23);
  mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ((MR_Box) ((MR_Integer) 6)), ProcAnalysisKinds0_23, &ProcAnalysisKinds_24);
  hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(ProcAnalysisKinds_24, STATE_VARIABLE_ModuleInfo_87_87, &STATE_VARIABLE_ModuleInfo_89_89);
  libs__globals__get_op_mode_2_p_0(Globals_4, &OpMode_25);
  succeeded = ((MR_tag((MR_Word) OpMode_25)) == (MR_Integer) 3);
  if (succeeded)
  {
    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_25, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_90)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_90, (MR_Integer) 0))));
      succeeded = (Var_91 == (MR_Word) ((MR_Unsigned) 8U));
    }
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_AnalysisInfo_92_92;
    MR_Word Var_93;
    MR_Word STATE_VARIABLE_AnalysisInfo_94_94;
    MR_Word Var_95;
    MR_Word STATE_VARIABLE_AnalysisInfo_96_96;
    MR_Word Var_97;
    MR_Word STATE_VARIABLE_AnalysisInfo_98_98;
    MR_Box conv11_STATE_VARIABLE_AnalysisInfo_94_94;
    MR_Box conv13_STATE_VARIABLE_AnalysisInfo_96_96;
    MR_Box conv15_STATE_VARIABLE_AnalysisInfo_98_98;

    hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_89_89, &STATE_VARIABLE_AnalysisInfo_92_92);
    {
      Var_93 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_5));
      MR_hl_field(MR_mktag(0), Var_93, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_93, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_89_89));
      MR_hl_field(MR_mktag(0), Var_93, 4) = ((MR_Box) (ReuseVersionMap_22));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), Var_93, ReuseInfoMap_21, ((MR_Box) (STATE_VARIABLE_AnalysisInfo_92_92)), &conv11_STATE_VARIABLE_AnalysisInfo_94_94);
    STATE_VARIABLE_AnalysisInfo_94_94 = ((MR_Word) (conv11_STATE_VARIABLE_AnalysisInfo_94_94));
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_6));
      MR_hl_field(MR_mktag(0), Var_95, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_95, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_89_89));
    }
    mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), Var_95, DepProcs_19, ((MR_Box) (STATE_VARIABLE_AnalysisInfo_94_94)), &conv13_STATE_VARIABLE_AnalysisInfo_96_96);
    STATE_VARIABLE_AnalysisInfo_96_96 = ((MR_Word) (conv13_STATE_VARIABLE_AnalysisInfo_96_96));
    {
      Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_7));
      MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_89_89));
    }
    mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), Var_97, IntermodRequests_20, ((MR_Box) (STATE_VARIABLE_AnalysisInfo_96_96)), &conv15_STATE_VARIABLE_AnalysisInfo_98_98);
    STATE_VARIABLE_AnalysisInfo_98_98 = ((MR_Word) (conv15_STATE_VARIABLE_AnalysisInfo_98_98));
    hlds__hlds_module__module_info_set_analysis_info_3_p_0(STATE_VARIABLE_AnalysisInfo_98_98, STATE_VARIABLE_ModuleInfo_89_89, &STATE_VARIABLE_ModuleInfo_99_99);
  }
  else
    STATE_VARIABLE_ModuleInfo_99_99 = STATE_VARIABLE_ModuleInfo_89_89;
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_99_99, &PredTable0_27);
  {
    Var_100 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_10[0]));
    MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0_8));
    MR_hl_field(MR_mktag(0), Var_100, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_100, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_99_99));
    MR_hl_field(MR_mktag(0), Var_100, 4) = ((MR_Box) (VeryVerbose_5));
    MR_hl_field(MR_mktag(0), Var_100, 5) = ((MR_Box) (ReuseInfoMap_21));
  }
  mercury__bimap__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0), Var_100, ReuseVersionMap_22, ((MR_Box) (PredTable0_27)), &conv17_PredTable_28);
  PredTable_28 = ((MR_Word) (conv17_PredTable_28));
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_28, STATE_VARIABLE_ModuleInfo_99_99, STATE_VARIABLE_ModuleInfo_30);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_20;
  MR_Word conv2_STATE_VARIABLE_ReuseTable_22;
  MR_Word conv1_STATE_VARIABLE_ExternalRequests_24;
  MR_Word conv0_STATE_VARIABLE_MustHaveReuseVersions_26;

  transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_pred_9_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_ReuseTable_22, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ExternalRequests_24, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_MustHaveReuseVersions_26);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_20));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_ReuseTable_22));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_ExternalRequests_24));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_MustHaveReuseVersions_26));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_intermod_analysis_reuse_5_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word * ReuseTable_7,
  MR_Word * ExternalRequests_8,
  MR_Word * MustHaveReuseVersions_9)
{
  MR_Word PredIds_10;
  MR_Word ExternalRequests0_11;
  MR_Word Var_16;
  MR_Box conv7_STATE_VARIABLE_ModuleInfo_13;
  MR_Box conv6_ReuseTable_7;
  MR_Box conv5_ExternalRequests0_11;
  MR_Box conv4_MustHaveReuseVersions_9;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &PredIds_10);
  Var_16 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_init_0_f_0();
  mercury__list__foldl4_10_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[4]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_2[5]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_1[6]), PredIds_10, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_12)), &conv7_STATE_VARIABLE_ModuleInfo_13, ((MR_Box) (Var_16)), &conv6_ReuseTable_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_ExternalRequests0_11, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_MustHaveReuseVersions_9);
  *STATE_VARIABLE_ModuleInfo_13 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_13));
  *ReuseTable_7 = ((MR_Word) (conv6_ReuseTable_7));
  ExternalRequests0_11 = ((MR_Word) (conv5_ExternalRequests0_11));
  *MustHaveReuseVersions_9 = ((MR_Word) (conv4_MustHaveReuseVersions_9));
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0), ExternalRequests0_11, ExternalRequests_8);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_9;

  transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_in_pred_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_9));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__process_imported_reuse_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  MR_Word PredIds_4;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_6;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_5, &PredIds_4);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_1[5]), PredIds_4, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv1_STATE_VARIABLE_ModuleInfo_6);
  *STATE_VARIABLE_ModuleInfo_6 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_6));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__maybe_create_forwarding_procedures_intermod_opt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_20;

  transform_hlds__ctgc__structure_reuse__analysis__maybe_create_forwarding_procedures_intermod_opt_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ModuleInfo_20);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_20));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__maybe_create_forwarding_procedures_intermod_opt_4_p_0(
  MR_Word InitialReuseTable_5,
  MR_Word FinalReuseTable_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_9;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_7[0]));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__analysis__maybe_create_forwarding_procedures_intermod_opt_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (FinalReuseTable_6));
  }
  Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InitialReuseTable_5, (MR_Integer) 0))));
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_10, Var_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv1_STATE_VARIABLE_ModuleInfo_9);
  *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_9));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__handle_structure_reuse_requests_2_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_NewPPId_9;
  MR_Word conv1_STATE_VARIABLE_ReuseTable_18;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_20;

  transform_hlds__ctgc__structure_reuse__analysis__make_intermediate_reuse_proc_6_p_0(((MR_Word) (wrapper_arg_1)), &conv2_NewPPId_9, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ReuseTable_18, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_ModuleInfo_20);
  *wrapper_arg_2 = ((MR_Box) (conv2_NewPPId_9));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ReuseTable_18));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_20));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__handle_structure_reuse_requests_11_p_0(
  MR_Integer tscc_proc_1_input_1_Repeats_12,
  MR_Word tscc_proc_1_input_2_SharingTable_13,
  MR_Word tscc_proc_1_input_3_Requests_14,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_ReuseTable_0_19,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ReuseTable_20,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_22,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_DepProcs_0_23,
  MR_Word * tscc_output_ptr_3_STATE_VARIABLE_DepProcs_24,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_IntermodRequests_0_25,
  MR_Word * tscc_output_ptr_4_STATE_VARIABLE_IntermodRequests_26)
{
  MR_Integer tscc_proc_2_input_1_Repeats_12;
  MR_Word tscc_proc_2_input_2_SharingTable_13;
  MR_Word tscc_proc_2_input_3_Requests_14;
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_ReuseTable_0_27;
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_ModuleInfo_0_29;
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_DepProcs_0_31;
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_IntermodRequests_0_33;
  MR_Word tscc_output_1_STATE_VARIABLE_ReuseTable_20;
  MR_Word tscc_output_2_STATE_VARIABLE_ModuleInfo_22;
  MR_Word tscc_output_3_STATE_VARIABLE_DepProcs_24;
  MR_Word tscc_output_4_STATE_VARIABLE_IntermodRequests_26;

  // The code for TSCC PROC 1: pred transform_hlds.ctgc.structure_reuse.analysis.handle_structure_reuse_requests/11-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred transform_hlds.ctgc.structure_reuse.analysis.handle_structure_reuse_requests/11-0
  ;
  // proc 2 in TSCC: pred transform_hlds.ctgc.structure_reuse.analysis.handle_structure_reuse_requests_2/11-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Integer Repeats_12 = tscc_proc_1_input_1_Repeats_12;
    MR_Word SharingTable_13 = tscc_proc_1_input_2_SharingTable_13;
    MR_Word Requests_14 = tscc_proc_1_input_3_Requests_14;
    MR_Word STATE_VARIABLE_ReuseTable_0_19 = tscc_proc_1_input_4_STATE_VARIABLE_ReuseTable_0_19;
    MR_Word STATE_VARIABLE_ReuseTable_20;
    MR_Word STATE_VARIABLE_ModuleInfo_0_21 = tscc_proc_1_input_5_STATE_VARIABLE_ModuleInfo_0_21;
    MR_Word STATE_VARIABLE_ModuleInfo_22;
    MR_Word STATE_VARIABLE_DepProcs_0_23 = tscc_proc_1_input_6_STATE_VARIABLE_DepProcs_0_23;
    MR_Word STATE_VARIABLE_DepProcs_24;
    MR_Word STATE_VARIABLE_IntermodRequests_0_25 = tscc_proc_1_input_7_STATE_VARIABLE_IntermodRequests_0_25;
    MR_Word STATE_VARIABLE_IntermodRequests_26;
    MR_bool succeeded = (Repeats_12 > (MR_Integer) 0);

    if (succeeded)
    {
      MR_Integer next_value_of_tscc_proc_2_input_1_Repeats_12 = Repeats_12;
      MR_Word next_value_of_tscc_proc_2_input_2_SharingTable_13 = SharingTable_13;
      MR_Word next_value_of_tscc_proc_2_input_3_Requests_14 = Requests_14;
      MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_ReuseTable_0_27 = STATE_VARIABLE_ReuseTable_0_19;
      MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_ModuleInfo_0_29 = STATE_VARIABLE_ModuleInfo_0_21;
      MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DepProcs_0_31 = STATE_VARIABLE_DepProcs_0_23;
      MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_IntermodRequests_0_33 = STATE_VARIABLE_IntermodRequests_0_25;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Repeats_12 = next_value_of_tscc_proc_2_input_1_Repeats_12;
      tscc_proc_2_input_2_SharingTable_13 = next_value_of_tscc_proc_2_input_2_SharingTable_13;
      tscc_proc_2_input_3_Requests_14 = next_value_of_tscc_proc_2_input_3_Requests_14;
      tscc_proc_2_input_4_STATE_VARIABLE_ReuseTable_0_27 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_ReuseTable_0_27;
      tscc_proc_2_input_5_STATE_VARIABLE_ModuleInfo_0_29 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_ModuleInfo_0_29;
      tscc_proc_2_input_6_STATE_VARIABLE_DepProcs_0_31 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DepProcs_0_31;
      tscc_proc_2_input_7_STATE_VARIABLE_IntermodRequests_0_33 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_IntermodRequests_0_33;
      goto top_of_proc_2;
    }
    else
    {
      STATE_VARIABLE_IntermodRequests_26 = STATE_VARIABLE_IntermodRequests_0_25;
      STATE_VARIABLE_DepProcs_24 = STATE_VARIABLE_DepProcs_0_23;
      STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_0_21;
      STATE_VARIABLE_ReuseTable_20 = STATE_VARIABLE_ReuseTable_0_19;
    }
    tscc_output_1_STATE_VARIABLE_ReuseTable_20 = STATE_VARIABLE_ReuseTable_20;
    tscc_output_2_STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_22;
    tscc_output_3_STATE_VARIABLE_DepProcs_24 = STATE_VARIABLE_DepProcs_24;
    tscc_output_4_STATE_VARIABLE_IntermodRequests_26 = STATE_VARIABLE_IntermodRequests_26;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Integer Repeats_12 = tscc_proc_2_input_1_Repeats_12;
    MR_Word SharingTable_13 = tscc_proc_2_input_2_SharingTable_13;
    MR_Word Requests_14 = tscc_proc_2_input_3_Requests_14;
    MR_Word STATE_VARIABLE_ReuseTable_0_27 = tscc_proc_2_input_4_STATE_VARIABLE_ReuseTable_0_27;
    MR_Word STATE_VARIABLE_ReuseTable_28;
    MR_Word STATE_VARIABLE_ModuleInfo_0_29 = tscc_proc_2_input_5_STATE_VARIABLE_ModuleInfo_0_29;
    MR_Word STATE_VARIABLE_ModuleInfo_30;
    MR_Word STATE_VARIABLE_DepProcs_0_31 = tscc_proc_2_input_6_STATE_VARIABLE_DepProcs_0_31;
    MR_Word STATE_VARIABLE_DepProcs_32;
    MR_Word STATE_VARIABLE_IntermodRequests_0_33 = tscc_proc_2_input_7_STATE_VARIABLE_IntermodRequests_0_33;
    MR_Word STATE_VARIABLE_IntermodRequests_34;
    MR_bool succeeded;
    MR_Word Globals_19;
    MR_Word VeryVerbose_20;
    MR_Word RequestList_21;
    MR_Word NewPPIds_22;
    MR_Word NewDepProcs_25;
    MR_Word NewRequests_26;
    MR_Word STATE_VARIABLE_ReuseTable_37_37;
    MR_Word STATE_VARIABLE_ModuleInfo_38_38;
    MR_Word STATE_VARIABLE_ModuleInfo_43_43;
    MR_Word STATE_VARIABLE_ReuseTable_44_44;
    MR_Word STATE_VARIABLE_ModuleInfo_53_53;
    MR_Word STATE_VARIABLE_ReuseTable_54_54;
    MR_Word STATE_VARIABLE_IntermodRequests_55_55;
    MR_Word STATE_VARIABLE_DepProcs_56_56;
    MR_Box conv4_STATE_VARIABLE_ReuseTable_37_37;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_38_38;
    MR_Word ProgressStream_75;
    MR_Word ProgressStream_76;
    MR_Word ProgressStream_77;
    MR_Word ProgressStream_78;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &Globals_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 71, &VeryVerbose_20);
    RequestList_21 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0), Requests_14);
    mercury__list__map_foldl2_7_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_1[4]), RequestList_21, &NewPPIds_22, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_27)), &conv4_STATE_VARIABLE_ReuseTable_37_37, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_29)), &conv3_STATE_VARIABLE_ModuleInfo_38_38);
    STATE_VARIABLE_ReuseTable_37_37 = ((MR_Word) (conv4_STATE_VARIABLE_ReuseTable_37_37));
    STATE_VARIABLE_ModuleInfo_38_38 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_38_38));
    hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_38_38, &ProgressStream_75);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_75, VeryVerbose_20, (MR_String) "% Repeating direct reuse...\n");
    transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0(SharingTable_13, NewPPIds_22, STATE_VARIABLE_ModuleInfo_38_38, &STATE_VARIABLE_ModuleInfo_43_43, STATE_VARIABLE_ReuseTable_37_37, &STATE_VARIABLE_ReuseTable_44_44);
    hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_43_43, &ProgressStream_76);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_76, VeryVerbose_20, (MR_String) "% done.\n");
    hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_43_43, &ProgressStream_77);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_77, VeryVerbose_20, (MR_String) "% Repeating indirect reuse...\n");
    transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_p_0(SharingTable_13, STATE_VARIABLE_ModuleInfo_43_43, &STATE_VARIABLE_ModuleInfo_53_53, STATE_VARIABLE_ReuseTable_44_44, &STATE_VARIABLE_ReuseTable_54_54, &NewDepProcs_25, &NewRequests_26, STATE_VARIABLE_IntermodRequests_0_33, &STATE_VARIABLE_IntermodRequests_55_55);
    STATE_VARIABLE_DepProcs_56_56 = mercury__set__union_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0), NewDepProcs_25, STATE_VARIABLE_DepProcs_0_31);
    hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_53_53, &ProgressStream_78);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_78, VeryVerbose_20, (MR_String) "% done.\n");
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0), NewRequests_26);
    if (succeeded)
    {
      MR_Word ProgressStream_79;

      hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_53_53, &ProgressStream_79);
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_79, VeryVerbose_20, (MR_String) "% No more structure reuse requests.\n");
      STATE_VARIABLE_IntermodRequests_34 = STATE_VARIABLE_IntermodRequests_55_55;
      STATE_VARIABLE_DepProcs_32 = STATE_VARIABLE_DepProcs_56_56;
      STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_53_53;
      STATE_VARIABLE_ReuseTable_28 = STATE_VARIABLE_ReuseTable_54_54;
    }
    else
    {
      MR_Integer Var_69;
      MR_Word ProgressStream_80;
      MR_Integer next_value_of_tscc_proc_1_input_1_Repeats_12;
      MR_Word next_value_of_tscc_proc_1_input_2_SharingTable_13;
      MR_Word next_value_of_tscc_proc_1_input_3_Requests_14;
      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ReuseTable_0_19;
      MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_ModuleInfo_0_21;
      MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_DepProcs_0_23;
      MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_IntermodRequests_0_25;

      hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_53_53, &ProgressStream_80);
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_80, VeryVerbose_20, (MR_String) "% Outstanding structure reuse requests exist.\n");
      Var_69 = (MR_Integer) ((MR_Unsigned) Repeats_12 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_Repeats_12 = Var_69;
      next_value_of_tscc_proc_1_input_2_SharingTable_13 = SharingTable_13;
      next_value_of_tscc_proc_1_input_3_Requests_14 = NewRequests_26;
      next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ReuseTable_0_19 = STATE_VARIABLE_ReuseTable_54_54;
      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_ModuleInfo_0_21 = STATE_VARIABLE_ModuleInfo_53_53;
      next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_DepProcs_0_23 = STATE_VARIABLE_DepProcs_56_56;
      next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_IntermodRequests_0_25 = STATE_VARIABLE_IntermodRequests_55_55;
      tscc_proc_1_input_1_Repeats_12 = next_value_of_tscc_proc_1_input_1_Repeats_12;
      tscc_proc_1_input_2_SharingTable_13 = next_value_of_tscc_proc_1_input_2_SharingTable_13;
      tscc_proc_1_input_3_Requests_14 = next_value_of_tscc_proc_1_input_3_Requests_14;
      tscc_proc_1_input_4_STATE_VARIABLE_ReuseTable_0_19 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ReuseTable_0_19;
      tscc_proc_1_input_5_STATE_VARIABLE_ModuleInfo_0_21 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_ModuleInfo_0_21;
      tscc_proc_1_input_6_STATE_VARIABLE_DepProcs_0_23 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_DepProcs_0_23;
      tscc_proc_1_input_7_STATE_VARIABLE_IntermodRequests_0_25 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_IntermodRequests_0_25;
      goto top_of_proc_1;
    }
    tscc_output_1_STATE_VARIABLE_ReuseTable_20 = STATE_VARIABLE_ReuseTable_28;
    tscc_output_2_STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_30;
    tscc_output_3_STATE_VARIABLE_DepProcs_24 = STATE_VARIABLE_DepProcs_32;
    tscc_output_4_STATE_VARIABLE_IntermodRequests_26 = STATE_VARIABLE_IntermodRequests_34;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_ReuseTable_20 = tscc_output_1_STATE_VARIABLE_ReuseTable_20;
  *tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_22 = tscc_output_2_STATE_VARIABLE_ModuleInfo_22;
  *tscc_output_ptr_3_STATE_VARIABLE_DepProcs_24 = tscc_output_3_STATE_VARIABLE_DepProcs_24;
  *tscc_output_ptr_4_STATE_VARIABLE_IntermodRequests_26 = tscc_output_4_STATE_VARIABLE_IntermodRequests_26;
  return;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__handle_structure_reuse_requests_2_11_p_0(
  MR_Integer tscc_proc_2_input_1_Repeats_12,
  MR_Word tscc_proc_2_input_2_SharingTable_13,
  MR_Word tscc_proc_2_input_3_Requests_14,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_ReuseTable_0_27,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ReuseTable_20,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_22,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_DepProcs_0_31,
  MR_Word * tscc_output_ptr_3_STATE_VARIABLE_DepProcs_24,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_IntermodRequests_0_33,
  MR_Word * tscc_output_ptr_4_STATE_VARIABLE_IntermodRequests_26)
{
  MR_Integer tscc_proc_1_input_1_Repeats_12;
  MR_Word tscc_proc_1_input_2_SharingTable_13;
  MR_Word tscc_proc_1_input_3_Requests_14;
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_ReuseTable_0_19;
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_ModuleInfo_0_21;
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_DepProcs_0_23;
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_IntermodRequests_0_25;
  MR_Word tscc_output_1_STATE_VARIABLE_ReuseTable_20;
  MR_Word tscc_output_2_STATE_VARIABLE_ModuleInfo_22;
  MR_Word tscc_output_3_STATE_VARIABLE_DepProcs_24;
  MR_Word tscc_output_4_STATE_VARIABLE_IntermodRequests_26;

  // The code for TSCC PROC 2: pred transform_hlds.ctgc.structure_reuse.analysis.handle_structure_reuse_requests_2/11-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred transform_hlds.ctgc.structure_reuse.analysis.handle_structure_reuse_requests/11-0
  ;
  // proc 2 in TSCC: pred transform_hlds.ctgc.structure_reuse.analysis.handle_structure_reuse_requests_2/11-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Integer Repeats_12 = tscc_proc_1_input_1_Repeats_12;
    MR_Word SharingTable_13 = tscc_proc_1_input_2_SharingTable_13;
    MR_Word Requests_14 = tscc_proc_1_input_3_Requests_14;
    MR_Word STATE_VARIABLE_ReuseTable_0_19 = tscc_proc_1_input_4_STATE_VARIABLE_ReuseTable_0_19;
    MR_Word STATE_VARIABLE_ReuseTable_20;
    MR_Word STATE_VARIABLE_ModuleInfo_0_21 = tscc_proc_1_input_5_STATE_VARIABLE_ModuleInfo_0_21;
    MR_Word STATE_VARIABLE_ModuleInfo_22;
    MR_Word STATE_VARIABLE_DepProcs_0_23 = tscc_proc_1_input_6_STATE_VARIABLE_DepProcs_0_23;
    MR_Word STATE_VARIABLE_DepProcs_24;
    MR_Word STATE_VARIABLE_IntermodRequests_0_25 = tscc_proc_1_input_7_STATE_VARIABLE_IntermodRequests_0_25;
    MR_Word STATE_VARIABLE_IntermodRequests_26;
    MR_bool succeeded = (Repeats_12 > (MR_Integer) 0);

    if (succeeded)
    {
      MR_Integer next_value_of_tscc_proc_2_input_1_Repeats_12 = Repeats_12;
      MR_Word next_value_of_tscc_proc_2_input_2_SharingTable_13 = SharingTable_13;
      MR_Word next_value_of_tscc_proc_2_input_3_Requests_14 = Requests_14;
      MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_ReuseTable_0_27 = STATE_VARIABLE_ReuseTable_0_19;
      MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_ModuleInfo_0_29 = STATE_VARIABLE_ModuleInfo_0_21;
      MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DepProcs_0_31 = STATE_VARIABLE_DepProcs_0_23;
      MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_IntermodRequests_0_33 = STATE_VARIABLE_IntermodRequests_0_25;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Repeats_12 = next_value_of_tscc_proc_2_input_1_Repeats_12;
      tscc_proc_2_input_2_SharingTable_13 = next_value_of_tscc_proc_2_input_2_SharingTable_13;
      tscc_proc_2_input_3_Requests_14 = next_value_of_tscc_proc_2_input_3_Requests_14;
      tscc_proc_2_input_4_STATE_VARIABLE_ReuseTable_0_27 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_ReuseTable_0_27;
      tscc_proc_2_input_5_STATE_VARIABLE_ModuleInfo_0_29 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_ModuleInfo_0_29;
      tscc_proc_2_input_6_STATE_VARIABLE_DepProcs_0_31 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DepProcs_0_31;
      tscc_proc_2_input_7_STATE_VARIABLE_IntermodRequests_0_33 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_IntermodRequests_0_33;
      goto top_of_proc_2;
    }
    else
    {
      STATE_VARIABLE_IntermodRequests_26 = STATE_VARIABLE_IntermodRequests_0_25;
      STATE_VARIABLE_DepProcs_24 = STATE_VARIABLE_DepProcs_0_23;
      STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_0_21;
      STATE_VARIABLE_ReuseTable_20 = STATE_VARIABLE_ReuseTable_0_19;
    }
    tscc_output_1_STATE_VARIABLE_ReuseTable_20 = STATE_VARIABLE_ReuseTable_20;
    tscc_output_2_STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_22;
    tscc_output_3_STATE_VARIABLE_DepProcs_24 = STATE_VARIABLE_DepProcs_24;
    tscc_output_4_STATE_VARIABLE_IntermodRequests_26 = STATE_VARIABLE_IntermodRequests_26;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Integer Repeats_12 = tscc_proc_2_input_1_Repeats_12;
    MR_Word SharingTable_13 = tscc_proc_2_input_2_SharingTable_13;
    MR_Word Requests_14 = tscc_proc_2_input_3_Requests_14;
    MR_Word STATE_VARIABLE_ReuseTable_0_27 = tscc_proc_2_input_4_STATE_VARIABLE_ReuseTable_0_27;
    MR_Word STATE_VARIABLE_ReuseTable_28;
    MR_Word STATE_VARIABLE_ModuleInfo_0_29 = tscc_proc_2_input_5_STATE_VARIABLE_ModuleInfo_0_29;
    MR_Word STATE_VARIABLE_ModuleInfo_30;
    MR_Word STATE_VARIABLE_DepProcs_0_31 = tscc_proc_2_input_6_STATE_VARIABLE_DepProcs_0_31;
    MR_Word STATE_VARIABLE_DepProcs_32;
    MR_Word STATE_VARIABLE_IntermodRequests_0_33 = tscc_proc_2_input_7_STATE_VARIABLE_IntermodRequests_0_33;
    MR_Word STATE_VARIABLE_IntermodRequests_34;
    MR_bool succeeded;
    MR_Word Globals_19;
    MR_Word VeryVerbose_20;
    MR_Word RequestList_21;
    MR_Word NewPPIds_22;
    MR_Word NewDepProcs_25;
    MR_Word NewRequests_26;
    MR_Word STATE_VARIABLE_ReuseTable_37_37;
    MR_Word STATE_VARIABLE_ModuleInfo_38_38;
    MR_Word STATE_VARIABLE_ModuleInfo_43_43;
    MR_Word STATE_VARIABLE_ReuseTable_44_44;
    MR_Word STATE_VARIABLE_ModuleInfo_53_53;
    MR_Word STATE_VARIABLE_ReuseTable_54_54;
    MR_Word STATE_VARIABLE_IntermodRequests_55_55;
    MR_Word STATE_VARIABLE_DepProcs_56_56;
    MR_Box conv4_STATE_VARIABLE_ReuseTable_37_37;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_38_38;
    MR_Word ProgressStream_75;
    MR_Word ProgressStream_76;
    MR_Word ProgressStream_77;
    MR_Word ProgressStream_78;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &Globals_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 71, &VeryVerbose_20);
    RequestList_21 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0), Requests_14);
    mercury__list__map_foldl2_7_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__analysis_scalar_common_1[4]), RequestList_21, &NewPPIds_22, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_27)), &conv4_STATE_VARIABLE_ReuseTable_37_37, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_29)), &conv3_STATE_VARIABLE_ModuleInfo_38_38);
    STATE_VARIABLE_ReuseTable_37_37 = ((MR_Word) (conv4_STATE_VARIABLE_ReuseTable_37_37));
    STATE_VARIABLE_ModuleInfo_38_38 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_38_38));
    hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_38_38, &ProgressStream_75);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_75, VeryVerbose_20, (MR_String) "% Repeating direct reuse...\n");
    transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_p_0(SharingTable_13, NewPPIds_22, STATE_VARIABLE_ModuleInfo_38_38, &STATE_VARIABLE_ModuleInfo_43_43, STATE_VARIABLE_ReuseTable_37_37, &STATE_VARIABLE_ReuseTable_44_44);
    hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_43_43, &ProgressStream_76);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_76, VeryVerbose_20, (MR_String) "% done.\n");
    hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_43_43, &ProgressStream_77);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_77, VeryVerbose_20, (MR_String) "% Repeating indirect reuse...\n");
    transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_p_0(SharingTable_13, STATE_VARIABLE_ModuleInfo_43_43, &STATE_VARIABLE_ModuleInfo_53_53, STATE_VARIABLE_ReuseTable_44_44, &STATE_VARIABLE_ReuseTable_54_54, &NewDepProcs_25, &NewRequests_26, STATE_VARIABLE_IntermodRequests_0_33, &STATE_VARIABLE_IntermodRequests_55_55);
    STATE_VARIABLE_DepProcs_56_56 = mercury__set__union_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0), NewDepProcs_25, STATE_VARIABLE_DepProcs_0_31);
    hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_53_53, &ProgressStream_78);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_78, VeryVerbose_20, (MR_String) "% done.\n");
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0), NewRequests_26);
    if (succeeded)
    {
      MR_Word ProgressStream_79;

      hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_53_53, &ProgressStream_79);
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_79, VeryVerbose_20, (MR_String) "% No more structure reuse requests.\n");
      STATE_VARIABLE_IntermodRequests_34 = STATE_VARIABLE_IntermodRequests_55_55;
      STATE_VARIABLE_DepProcs_32 = STATE_VARIABLE_DepProcs_56_56;
      STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_53_53;
      STATE_VARIABLE_ReuseTable_28 = STATE_VARIABLE_ReuseTable_54_54;
    }
    else
    {
      MR_Integer Var_69;
      MR_Word ProgressStream_80;
      MR_Integer next_value_of_tscc_proc_1_input_1_Repeats_12;
      MR_Word next_value_of_tscc_proc_1_input_2_SharingTable_13;
      MR_Word next_value_of_tscc_proc_1_input_3_Requests_14;
      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ReuseTable_0_19;
      MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_ModuleInfo_0_21;
      MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_DepProcs_0_23;
      MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_IntermodRequests_0_25;

      hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_53_53, &ProgressStream_80);
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_80, VeryVerbose_20, (MR_String) "% Outstanding structure reuse requests exist.\n");
      Var_69 = (MR_Integer) ((MR_Unsigned) Repeats_12 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_Repeats_12 = Var_69;
      next_value_of_tscc_proc_1_input_2_SharingTable_13 = SharingTable_13;
      next_value_of_tscc_proc_1_input_3_Requests_14 = NewRequests_26;
      next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ReuseTable_0_19 = STATE_VARIABLE_ReuseTable_54_54;
      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_ModuleInfo_0_21 = STATE_VARIABLE_ModuleInfo_53_53;
      next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_DepProcs_0_23 = STATE_VARIABLE_DepProcs_56_56;
      next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_IntermodRequests_0_25 = STATE_VARIABLE_IntermodRequests_55_55;
      tscc_proc_1_input_1_Repeats_12 = next_value_of_tscc_proc_1_input_1_Repeats_12;
      tscc_proc_1_input_2_SharingTable_13 = next_value_of_tscc_proc_1_input_2_SharingTable_13;
      tscc_proc_1_input_3_Requests_14 = next_value_of_tscc_proc_1_input_3_Requests_14;
      tscc_proc_1_input_4_STATE_VARIABLE_ReuseTable_0_19 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ReuseTable_0_19;
      tscc_proc_1_input_5_STATE_VARIABLE_ModuleInfo_0_21 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_ModuleInfo_0_21;
      tscc_proc_1_input_6_STATE_VARIABLE_DepProcs_0_23 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_DepProcs_0_23;
      tscc_proc_1_input_7_STATE_VARIABLE_IntermodRequests_0_25 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_IntermodRequests_0_25;
      goto top_of_proc_1;
    }
    tscc_output_1_STATE_VARIABLE_ReuseTable_20 = STATE_VARIABLE_ReuseTable_28;
    tscc_output_2_STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_30;
    tscc_output_3_STATE_VARIABLE_DepProcs_24 = STATE_VARIABLE_DepProcs_32;
    tscc_output_4_STATE_VARIABLE_IntermodRequests_26 = STATE_VARIABLE_IntermodRequests_34;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_ReuseTable_20 = tscc_output_1_STATE_VARIABLE_ReuseTable_20;
  *tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_22 = tscc_output_2_STATE_VARIABLE_ModuleInfo_22;
  *tscc_output_ptr_3_STATE_VARIABLE_DepProcs_24 = tscc_output_3_STATE_VARIABLE_DepProcs_24;
  *tscc_output_ptr_4_STATE_VARIABLE_IntermodRequests_26 = tscc_output_4_STATE_VARIABLE_IntermodRequests_26;
  return;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_answer_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Compare____structure_reuse_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__structure_reuse__analysis____Compare____structure_reuse_answer_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Compare____structure_reuse_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__structure_reuse__analysis____Compare____structure_reuse_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_func_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_reuse__analysis____Unify____structure_reuse_func_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis____Compare____structure_reuse_func_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__structure_reuse__analysis____Compare____structure_reuse_func_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__to_term_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__from_term_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_4;

  conv0_Term_4 = transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__to_term_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Term_4));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Call_3;

  succeeded = transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__to_term____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__from_term_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Call_3);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_Call_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__equivalent_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__partial_order____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0______analysis__equivalent_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__analysis_name_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__analysis_version_number_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__bottom_2_2_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_14;

  conv0_HeadVar__3_14 = transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__top_2_2_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_14));
  return wrapper_arg_3;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_FuncInfo_23;

  transform_hlds__ctgc__structure_reuse__analysis__ClassMethod_for_analysis__analysis____transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_func_info__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_call__arity0__transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer__arity0______analysis__get_func_info_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_FuncInfo_23);
  *wrapper_arg_6 = ((MR_Box) (conv0_FuncInfo_23));
}

void mercury__transform_hlds__ctgc__structure_reuse__analysis__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_answer_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_call_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__analysis__transform_hlds__ctgc__structure_reuse__analysis__type_ctor_info_structure_reuse_func_info_0);
}

void mercury__transform_hlds__ctgc__structure_reuse__analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__structure_reuse__analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.structure_reuse.analysis.
