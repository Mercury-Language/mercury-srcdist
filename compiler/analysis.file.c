/*
** Automatically generated from `analysis.file.m'
** by the Mercury compiler,
** version rotd-2023-02-13
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


// :- module analysis.file.
// :- implementation.

/*
INIT mercury__analysis__file__init
ENDINIT
*/

#include "analysis.file.mih"


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
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
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
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_int.mih"
#include "term_io.mih"
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
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "io.file.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.pickle.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_sym_name.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_FA_TypeInfo_Struct1 analysis__file__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_VA_PseudoTypeInfo_Struct3 analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_VA_PseudoTypeInfo_Struct5 analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_analysis_request_0;

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

static const MR_VA_PseudoTypeInfo_Struct3 analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

static const MR_EnumFunctorDesc analysis__file__analysis__file__enum_functor_desc_dummy_answer_0_0;

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_ordinal_ordered_dummy_answer_0[1];

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_name_ordered_dummy_answer_0[1];

static const MR_Integer analysis__file__analysis__file__functor_number_map_dummy_answer_0[1];

static const MR_Integer analysis__file__analysis__file__functor_number_map_invalid_analysis_file_0[1];

static const MR_NotagFunctorDesc analysis__file__analysis__file__notag_functor_desc_invalid_analysis_file_0;

static const MR_EnumFunctorDesc analysis__file__analysis__file__enum_functor_desc_maybe_add_dot_temp_0_0;

static const MR_EnumFunctorDesc analysis__file__analysis__file__enum_functor_desc_maybe_add_dot_temp_0_1;

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_ordinal_ordered_maybe_add_dot_temp_0[2];

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_name_ordered_maybe_add_dot_temp_0[2];

static const MR_Integer analysis__file__analysis__file__functor_number_map_maybe_add_dot_temp_0[2];

static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_analysis_file_4__910__1_7_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word WriteEntry_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Box LambdaHeadVar__1_18);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__769__1_7_p_0(
  MR_Word TypeInfo_for_T_60,
  MR_Word ParseEntry_8,
  MR_Box ModuleResults0_9,
  MR_Word Stream_13,
  MR_Box * LambdaHeadVar__1_34);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__762__1_3_p_0(
  MR_String AnalysisFileName_7);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__785__1_3_p_0(
  MR_String AnalysisFileName_7);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__find_and_read_analysis_file__744__1_5_p_0(
  MR_Word OtherExt_13,
  MR_Word ModuleName_14,
  MR_String Message_20);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__377__1_6_p_0(
  MR_Word ModuleResults0_10,
  MR_Word Stream_12,
  MR_Word HeadVar__3_33,
  MR_Word * HeadVar__4_53);

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_50_95_95_91_49_93_95_48_6_p_0(
  MR_Word Stream_7,
  MR_Word ParseEntry_8,
  MR_Box Results0_9,
  MR_Box * Results_10);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__368__1_3_p_0(
  MR_String AnalysisFileName_7);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__390__1_3_p_0(
  MR_String AnalysisFileName_7);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__empty_request_file__919__1_3_p_0(
  MR_String RequestFileName_10);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_module_analysis_requests__549__1_3_p_0(
  MR_String AnalysisFileName_13);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_module_analysis_results__447__1_3_p_0(
  MR_Word ModuleName_9);

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0(
  MR_Word Term_3);

static MR_Word MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0(void);

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0(void);

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0(void);

static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0(
  MR_Word HeadVar__1_17,
  MR_Word HeadVar__2_18,
  MR_Word HeadVar__3_19);

static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0(void);

static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0(void);

static MR_Word MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void);

static MR_Integer MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0(void);

static MR_String MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0(void);

static void MR_CALL 
analysis__file____Compare____write_entry_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
analysis__file____Unify____write_entry_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
analysis__file____Compare____parse_entry_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
analysis__file____Unify____parse_entry_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
analysis__file____Compare____maybe_add_dot_temp_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
analysis__file____Unify____maybe_add_dot_temp_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
analysis__file____Compare____invalid_analysis_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
analysis__file____Unify____invalid_analysis_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
analysis__file____Compare____dummy_answer_0_0(
  MR_Word * HeadVar__1_1);

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1);

static MR_bool MR_CALL 
analysis__file____Unify____dummy_answer_0_0(void);

static void MR_CALL 
analysis__file__unpickle_analysis_result_7_p_0(
  MR_Word TypeClassInfo_for_compiler_34,
  MR_Box Compiler_8,
  MR_Word Unpicklers_9,
  MR_Box Handle_10,
  MR_Word _Type_11,
  MR_Word * Univ_12,
  MR_Integer STATE_VARIABLE_State_0_22,
  MR_Integer * STATE_VARIABLE_State_23);

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_112_105_99_107_108_101_95_97_110_97_108_121_115_105_115_95_114_101_115_117_108_116_95_95_91_53_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_compiler_34,
  MR_Box Compiler_8,
  MR_Word Unpicklers_9,
  MR_Box Handle_10,
  MR_Word * Univ_12,
  MR_Integer STATE_VARIABLE_State_0_22,
  MR_Integer * STATE_VARIABLE_State_23);

static void MR_CALL 
analysis__file__pickle_analysis_result_5_p_0(
  MR_Word OutputStream_6,
  MR_Word Pickles_7,
  MR_Word Univ_8);

static MR_bool MR_CALL 
analysis__file__dir_sep_1_p_0(
  MR_Char Char_2);

static void MR_CALL 
analysis__file__write_analysis_file_4_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__file__write_analysis_file_4_6_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word WriteEntry_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Word FuncResultList_10);

static void MR_CALL 
analysis__file__write_analysis_file_3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
analysis__file__write_analysis_file_3_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word WriteEntry_6,
  MR_String AnalysisName_7,
  MR_Word FuncResults_8);

static void MR_CALL 
analysis__file__write_imdg_arc_6_p_0(
  MR_Word TypeClassInfo_for_compiler_44,
  MR_Box Compiler_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Word Arc_10);

static void MR_CALL 
analysis__file__parse_imdg_arc_4_p_0(
  MR_Word TypeClassInfo_for_compiler_56,
  MR_Box Compiler_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Arcs_0_34,
  MR_Word * STATE_VARIABLE_Arcs_35);

static void MR_CALL 
analysis__file__write_request_entry_6_p_0(
  MR_Word TypeClassInfo_for_compiler_44,
  MR_Box Compiler_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Word Request_10);

static void MR_CALL 
analysis__file__parse_request_entry_4_p_0(
  MR_Word TypeClassInfo_for_compiler_56,
  MR_Box Compiler_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Requests_0_34,
  MR_Word * STATE_VARIABLE_Requests_35);

static void MR_CALL 
analysis__file__write_result_entry_5_p_0(
  MR_String AnalysisName_6,
  MR_Word FuncId_7,
  MR_Word Result_8);

static MR_String MR_CALL 
analysis__file__func_id_to_string_1_f_0(
  MR_Word FuncId_3);

static void MR_CALL 
analysis__file__parse_result_entry_4_p_0(
  MR_Word TypeClassInfo_for_compiler_58,
  MR_Box Compiler_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Results_0_36,
  MR_Word * STATE_VARIABLE_Results_37);

static void MR_CALL 
analysis__file__empty_request_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__write_module_imdg_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
analysis__file__write_module_imdg_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__read_module_analysis_results_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
analysis__file__read_module_analysis_results_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis__file__write_analysis_cache_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
analysis__file__write_analysis_cache_file_4_p_0(
  MR_String CacheFileName_5,
  MR_Word ModuleResults_6);

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0(
  MR_Word TypeClassInfo_for_compiler_50,
  MR_Box Compiler_6,
  MR_String AnalysisFileName_7,
  MR_Word * ModuleResults_8);

static MR_bool MR_CALL 
analysis__file____Unify____dummy_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__file____Compare____dummy_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__file____Unify____invalid_analysis_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__file____Compare____invalid_analysis_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__file____Unify____maybe_add_dot_temp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__file____Compare____maybe_add_dot_temp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__file____Unify____parse_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
analysis__file____Compare____parse_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
analysis__file____Unify____write_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
analysis__file____Compare____write_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6);


static /* final */ const MR_Box analysis__file_scalar_common_1[5][2];

static /* final */ const MR_Box analysis__file_scalar_common_2[10][3];

static /* final */ const MR_Box analysis__file_scalar_common_3[2][1];

static /* final */ const MR_Box analysis__file_scalar_common_4[2][6];

static /* final */ const MR_Integer analysis__file_scalar_common_5[2][2];

static /* final */ const MR_Box analysis__file_scalar_common_6[6][8];

static /* final */ const MR_Box analysis__file_scalar_common_7[2][9];

static /* final */ const MR_Box analysis__file_scalar_common_8[1][4];

static /* final */ const MR_Box analysis__file_scalar_common_9[1][11];

static /* final */ const MR_Box analysis__file_scalar_common_10[1][5];

static /* final */ const MR_Box analysis__file_scalar_common_11[5][10];




static /* final */ const MR_Box analysis__file_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_read_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_2[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__file_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__file_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__file_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__file_scalar_common_2[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__file_scalar_common_1[2]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__file_scalar_common_2[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&analysis__file_scalar_common_6[1])),
    ((MR_Box) (analysis__file__write_analysis_cache_file_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&analysis__file_scalar_common_8[0])),
    ((MR_Box) (analysis__file__read_module_analysis_results_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&analysis__file_scalar_common_6[2])),
    ((MR_Box) (analysis__file__write_module_analysis_results_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&analysis__file_scalar_common_8[0])),
    ((MR_Box) (analysis__file__write_module_analysis_results_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_3[2][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "dummy"))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_4[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer analysis__file_scalar_common_5[2][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
  /* row   1 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_6[6][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_output_stream_0)),
    ((MR_Box) (&libs__pickle__libs__pickle__type_ctor_info_picklers_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_7[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_input_stream_0)),
    ((MR_Box) (&analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_5[1])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_8[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_9[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&libs__pickle__libs__pickle__type_ctor_info_unpicklers_0)),
    ((MR_Box) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_10[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (&analysis__file_scalar_common_7[1])),
    ((MR_Box) (analysis__file__write_module_analysis_results_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__file_scalar_common_2[8]))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_11[5][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_5[1])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_1__pseudo_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_input_stream_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_5[1])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__file__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_5[1])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "analysis.mh"
#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&analysis__analysis__type_ctor_info_some_analysis_result_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&analysis__analysis__type_ctor_info_func_id_0),
    (MR_TypeInfo) (&analysis__file__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)
  }
};

static const MR_FA_TypeInfo_Struct1 analysis__file__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&analysis__file__term__ti_term_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&analysis__file__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0),
    (MR_PseudoTypeInfo) (&analysis__file__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&analysis__analysis__type_ctor_info_func_id_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&analysis__analysis__type_ctor_info_func_id_0),
    (MR_PseudoTypeInfo) (&analysis__file__list__pti_list_1__pseudo_1)
  }
};

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&analysis__analysis__type_ctor_info_analysis_request_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&analysis__analysis__type_ctor_info_func_id_0),
    (MR_TypeInfo) (&analysis__file__list__ti_list_1analysis__type_ctor_info_analysis_request_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&analysis__file__term__ti_term_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&analysis__analysis__type_ctor_info_imdg_arc_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&analysis__analysis__type_ctor_info_func_id_0),
    (MR_TypeInfo) (&analysis__file__list__ti_list_1analysis__type_ctor_info_imdg_arc_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0)
  }
};

static const MR_EnumFunctorDesc analysis__file__analysis__file__enum_functor_desc_dummy_answer_0_0 = {
  (MR_String) "dummy_answer",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_ordinal_ordered_dummy_answer_0[1] = {
  &analysis__file__analysis__file__enum_functor_desc_dummy_answer_0_0
};

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_name_ordered_dummy_answer_0[1] = {
  &analysis__file__analysis__file__enum_functor_desc_dummy_answer_0_0
};

static const MR_Integer analysis__file__analysis__file__functor_number_map_dummy_answer_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct analysis__file__analysis__file__type_ctor_info_dummy_answer_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (analysis__file____Unify____dummy_answer_0_0_10001)),
  ((MR_Box) (analysis__file____Compare____dummy_answer_0_0_10001)),
  (MR_String) "analysis.file",
  (MR_String) "dummy_answer",
  { analysis__file__analysis__file__enum_name_ordered_dummy_answer_0 },
  { analysis__file__analysis__file__enum_ordinal_ordered_dummy_answer_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__file__analysis__file__functor_number_map_dummy_answer_0,

};

static const MR_Integer analysis__file__analysis__file__functor_number_map_invalid_analysis_file_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc analysis__file__analysis__file__notag_functor_desc_invalid_analysis_file_0 = {
  (MR_String) "invalid_analysis_file",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (analysis__file____Unify____invalid_analysis_file_0_0_10001)),
  ((MR_Box) (analysis__file____Compare____invalid_analysis_file_0_0_10001)),
  (MR_String) "analysis.file",
  (MR_String) "invalid_analysis_file",
  { &analysis__file__analysis__file__notag_functor_desc_invalid_analysis_file_0 },
  { &analysis__file__analysis__file__notag_functor_desc_invalid_analysis_file_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  analysis__file__analysis__file__functor_number_map_invalid_analysis_file_0,

};

static const MR_EnumFunctorDesc analysis__file__analysis__file__enum_functor_desc_maybe_add_dot_temp_0_0 = {
  (MR_String) "do_not_add_dot_temp",
  INT32_C(0)
};

static const MR_EnumFunctorDesc analysis__file__analysis__file__enum_functor_desc_maybe_add_dot_temp_0_1 = {
  (MR_String) "add_dot_temp",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_ordinal_ordered_maybe_add_dot_temp_0[2] = {
  &analysis__file__analysis__file__enum_functor_desc_maybe_add_dot_temp_0_0,
  &analysis__file__analysis__file__enum_functor_desc_maybe_add_dot_temp_0_1
};

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_name_ordered_maybe_add_dot_temp_0[2] = {
  &analysis__file__analysis__file__enum_functor_desc_maybe_add_dot_temp_0_1,
  &analysis__file__analysis__file__enum_functor_desc_maybe_add_dot_temp_0_0
};

static const MR_Integer analysis__file__analysis__file__functor_number_map_maybe_add_dot_temp_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct analysis__file__analysis__file__type_ctor_info_maybe_add_dot_temp_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis__file____Unify____maybe_add_dot_temp_0_0_10001)),
  ((MR_Box) (analysis__file____Compare____maybe_add_dot_temp_0_0_10001)),
  (MR_String) "analysis.file",
  (MR_String) "maybe_add_dot_temp",
  { analysis__file__analysis__file__enum_name_ordered_maybe_add_dot_temp_0 },
  { analysis__file__analysis__file__enum_ordinal_ordered_maybe_add_dot_temp_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  analysis__file__analysis__file__functor_number_map_maybe_add_dot_temp_0,

};

const MR_TypeCtorInfo_Struct analysis__file__analysis__file__type_ctor_info_parse_entry_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis__file____Unify____parse_entry_1_0_10001)),
  ((MR_Box) (analysis__file____Compare____parse_entry_1_0_10001)),
  (MR_String) "analysis.file",
  (MR_String) "parse_entry",
  { NULL },
  { (MR_PseudoTypeInfo) (&analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct analysis__file__analysis__file__type_ctor_info_write_entry_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis__file____Unify____write_entry_1_0_10001)),
  ((MR_Box) (analysis__file____Compare____write_entry_1_0_10001)),
  (MR_String) "analysis.file",
  (MR_String) "write_entry",
  { NULL },
  { (MR_PseudoTypeInfo) (&analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__analysis__file__dummy_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__answer_pattern__arity2__analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__analysis__arity3__analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0__[11] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 6)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0_10001))
};

static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_analysis_file_4__910__1_7_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word WriteEntry_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Box LambdaHeadVar__1_18)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteEntry_7, (MR_Integer) 1))));
  MR_Box conv1_LambdaHeadVar__3_20;

  func_0(((MR_Box) (WriteEntry_7)), ((MR_Box) (AnalysisName_8)), ((MR_Box) (FuncId_9)), LambdaHeadVar__1_18, ((MR_Box) ((MR_Integer) 0)), &conv1_LambdaHeadVar__3_20);
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__769__1_7_p_0(
  MR_Word TypeInfo_for_T_60,
  MR_Word ParseEntry_8,
  MR_Box ModuleResults0_9,
  MR_Word Stream_13,
  MR_Box * LambdaHeadVar__1_34)
{
  MR_bool succeeded;
  MR_Word TermResult_61;
  MR_Word NumberTerm_63;
  MR_Integer Var_66;
  MR_Integer Var_73;

  mercury__mercury_term_parser__read_term_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Stream_13, &TermResult_61);
  succeeded = ((MR_tag((MR_Word) TermResult_61)) == (MR_Integer) 2);
  if (succeeded)
  {
    NumberTerm_63 = ((MR_Word) ((MR_hl_field(2, TermResult_61, (MR_Integer) 1))));
    Var_66 = (MR_Integer) 6;
    succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NumberTerm_63, &Var_73);
    if (succeeded)
      succeeded = (Var_66 == Var_73);
  }
  if (!(succeeded))
  {
    MR_String Msg_64;
    MR_String Var_68;
    MR_Word Var_69;

    Var_68 = mercury__string__string_1_f_0((MR_Word) (&analysis__file_scalar_common_1[4]), ((MR_Box) (TermResult_61)));
    Msg_64 = mercury__string__f_43_43_2_f_0((MR_String) "bad analysis file version: ", Var_68);
    Var_69 = (MR_Word) (Msg_64);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0), ((MR_Box) (Var_69)));
      return;
    }
  }
  analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_50_95_95_91_49_93_95_48_6_p_0(Stream_13, ParseEntry_8, ModuleResults0_9, LambdaHeadVar__1_34);
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__762__1_3_p_0(
  MR_String AnalysisFileName_7)
{
  MR_Word Var_28;
  MR_Word Var_30;

  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (AnalysisFileName_7));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_4_p_0((MR_String) "%% Reading analysis file %s\n", Var_28);
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__785__1_3_p_0(
  MR_String AnalysisFileName_7)
{
  MR_Word Var_49;
  MR_Word Var_51;

  {
    Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_51, 1) = ((MR_Box) (AnalysisFileName_7));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_51));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_4_p_0((MR_String) "Error reading analysis file: %s\n", Var_49);
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__find_and_read_analysis_file__744__1_5_p_0(
  MR_Word OtherExt_13,
  MR_Word ModuleName_14,
  MR_String Message_20)
{
  MR_String OtherExtStr_21;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_String Var_38;
  MR_Word Var_39;
  MR_Word Var_40;

  OtherExtStr_21 = parse_tree__file_names__other_extension_to_string_1_f_0(OtherExt_13);
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (OtherExtStr_21));
  }
  Var_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_14);
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_40, 1) = ((MR_Box) (Message_20));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
  }
  mercury__io__format_4_p_0((MR_String) "Couldn\'t open %s for module %s: %s\n", Var_33);
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__377__1_6_p_0(
  MR_Word ModuleResults0_10,
  MR_Word Stream_12,
  MR_Word HeadVar__3_33,
  MR_Word * HeadVar__4_53)
{
  MR_Box conv0_HeadVar__4_53;

  analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_50_95_95_91_49_93_95_48_6_p_0(Stream_12, HeadVar__3_33, ((MR_Box) (ModuleResults0_10)), &conv0_HeadVar__4_53);
  *HeadVar__4_53 = ((MR_Word) (conv0_HeadVar__4_53));
}

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_50_95_95_91_49_93_95_48_6_p_0(
  MR_Word Stream_7,
  MR_Word ParseEntry_8,
  MR_Box Results0_9,
  MR_Box * Results_10)
{
  while (MR_TRUE)
  {
    MR_Word TermResult_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__mercury_term_parser__read_term_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Stream_7, &TermResult_12);
    switch (MR_tag((MR_Word) TermResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Results_10 = Results0_9;
        break;
      case (MR_Integer) 1:
        {
          MR_String Msg_16 = ((MR_String) ((MR_hl_field(1, TermResult_12, (MR_Integer) 0))));
          MR_Word Var_23 = (MR_Word) (Msg_16);

          {
            mercury__exception__throw_1_p_0((MR_Word) (&analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0), ((MR_Box) (Var_23)));
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Term_14 = ((MR_Word) ((MR_hl_field(2, TermResult_12, (MR_Integer) 1))));
          MR_Box Results1_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ParseEntry_8, (MR_Integer) 1))));
          MR_Box next_value_of_Results0_9;

          func_0(((MR_Box) (ParseEntry_8)), ((MR_Box) (Term_14)), Results0_9, &Results1_15);
          // direct tailcall eliminated
          ;
          next_value_of_Results0_9 = Results1_15;
          Results0_9 = next_value_of_Results0_9;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__368__1_3_p_0(
  MR_String AnalysisFileName_7)
{
  MR_Word Var_26;
  MR_Word Var_28;

  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_28, 1) = ((MR_Box) (AnalysisFileName_7));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_4_p_0((MR_String) "%% Reading analysis registry file %s\n", Var_26);
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__390__1_3_p_0(
  MR_String AnalysisFileName_7)
{
  MR_Word Var_42;
  MR_Word Var_44;

  {
    Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_44, 1) = ((MR_Box) (AnalysisFileName_7));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_4_p_0((MR_String) "%% Error reading analysis registry file: %s\n", Var_42);
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__empty_request_file__919__1_3_p_0(
  MR_String RequestFileName_10)
{
  mercury__io__write_string_3_p_0((MR_String) "% Removing request file ");
  mercury__io__write_string_3_p_0(RequestFileName_10);
  mercury__io__nl_2_p_0();
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_module_analysis_requests__549__1_3_p_0(
  MR_String AnalysisFileName_13)
{
  mercury__io__write_string_3_p_0((MR_String) "% Writing module analysis requests to ");
  mercury__io__write_string_3_p_0(AnalysisFileName_13);
  mercury__io__nl_2_p_0();
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_module_analysis_results__447__1_3_p_0(
  MR_Word ModuleName_9)
{
  MR_Word Var_25;
  MR_Word Var_27;
  MR_String Var_28;

  Var_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_9);
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_4_p_0((MR_String) "%%s Writing module analysis results for %s\n", Var_25);
}

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0(
  MR_Word Term_3)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_String Var_6;
  MR_Word Var_7;

  succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_5 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_7 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_6 = ((MR_String) ((MR_hl_field(0, Var_5, (MR_Integer) 0))));
        succeeded = (strcmp(Var_6, (MR_String) "dummy") == 0);
      }
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0(void)
{
  MR_Word Term_3;
  MR_Word Var_8;

  Var_8 = mercury__term_context__dummy_context_0_f_0();
  {
    Term_3 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_3, 0) = ((MR_Box) (&analysis__file_scalar_common_3[1]));
    MR_hl_field(0, Term_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_3, 2) = ((MR_Box) (Var_8));
  }
  return Term_3;
}

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0(void)
{
  return MR_TRUE;
}

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0(void)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__semidet_fail_0_p_0();
  return succeeded;
}

static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0(
  MR_Word HeadVar__1_17,
  MR_Word HeadVar__2_18,
  MR_Word HeadVar__3_19)
{
}

static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0(void)
{
}

static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0(void)
{
}

static MR_Word MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void)
{
  return (MR_Integer) 1;
}

static MR_Integer MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0(void)
{
  return (MR_Integer) 1;
}

static MR_String MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0(void)
{
  return (MR_String) "dummy";
}

static void MR_CALL 
analysis__file____Compare____write_entry_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

static MR_bool MR_CALL 
analysis__file____Unify____write_entry_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
analysis__file____Compare____parse_entry_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

static MR_bool MR_CALL 
analysis__file____Unify____parse_entry_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
analysis__file____Compare____maybe_add_dot_temp_0_0(
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
analysis__file____Unify____maybe_add_dot_temp_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
analysis__file____Compare____invalid_analysis_file_0_0(
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
    MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
    MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
analysis__file____Unify____invalid_analysis_file_0_0(
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
    MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
    MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
  }
  return succeeded;
}

static void MR_CALL 
analysis__file____Compare____dummy_answer_0_0(
  MR_Word * HeadVar__1_1)
{
  analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

static MR_bool MR_CALL 
analysis__file____Unify____dummy_answer_0_0(void)
{
  return MR_TRUE;
}

static void MR_CALL 
analysis__file__unpickle_analysis_result_7_p_0(
  MR_Word TypeClassInfo_for_compiler_34,
  MR_Box Compiler_8,
  MR_Word Unpicklers_9,
  MR_Box Handle_10,
  MR_Word _Type_11,
  MR_Word * Univ_12,
  MR_Integer STATE_VARIABLE_State_0_22,
  MR_Integer * STATE_VARIABLE_State_23)
{
  analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_112_105_99_107_108_101_95_97_110_97_108_121_115_105_115_95_114_101_115_117_108_116_95_95_91_53_93_95_48_7_p_0(TypeClassInfo_for_compiler_34, Compiler_8, Unpicklers_9, Handle_10, Univ_12, STATE_VARIABLE_State_0_22, STATE_VARIABLE_State_23);
}

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_112_105_99_107_108_101_95_97_110_97_108_121_115_105_115_95_114_101_115_117_108_116_95_95_91_53_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_compiler_34,
  MR_Box Compiler_8,
  MR_Word Unpicklers_9,
  MR_Box Handle_10,
  MR_Word * Univ_12,
  MR_Integer STATE_VARIABLE_State_0_22,
  MR_Integer * STATE_VARIABLE_State_23)
{
  MR_bool succeeded;
  MR_String AnalysisName_14;
  MR_Integer STATE_VARIABLE_State_25_25;
  MR_Box conv0_AnalysisName_14;
  MR_Word TypeClassInfo_for_analysis_36;
  MR_Word Analysis_15;
  MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv2_Analysis_15;

  libs__pickle__unpickle_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Unpicklers_9, Handle_10, &conv0_AnalysisName_14, STATE_VARIABLE_State_0_22, &STATE_VARIABLE_State_25_25);
  AnalysisName_14 = ((MR_String) (conv0_AnalysisName_14));
  func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_34, (MR_Integer) 0)), (MR_Integer) 6))));
  succeeded = func_1(((MR_Box) (TypeClassInfo_for_compiler_34)), Compiler_8, ((MR_Box) (AnalysisName_14)), &conv2_Analysis_15);
  if (succeeded)
  {
    Analysis_15 = ((MR_Word) (conv2_Analysis_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeClassInfo_for_analysis_36 = ((MR_Word) ((MR_hl_field(0, Analysis_15, (MR_Integer) 0))));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TypeInfo_38_38;
    MR_Word TypeInfo_40_40;
    MR_Box Call_17;
    MR_Box Answer_19;
    MR_Word Status_20;
    MR_Word Result_21;
    MR_Integer STATE_VARIABLE_State_29_29;
    MR_Integer STATE_VARIABLE_State_31_31;
    MR_Box conv3_Status_20;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_36, (MR_Integer) 4, &TypeInfo_38_38);
    libs__pickle__unpickle_5_p_0(TypeInfo_38_38, Unpicklers_9, Handle_10, &Call_17, STATE_VARIABLE_State_25_25, &STATE_VARIABLE_State_29_29);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_36, (MR_Integer) 5, &TypeInfo_40_40);
    libs__pickle__unpickle_5_p_0(TypeInfo_40_40, Unpicklers_9, Handle_10, &Answer_19, STATE_VARIABLE_State_29_29, &STATE_VARIABLE_State_31_31);
    libs__pickle__unpickle_5_p_0((MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0), Unpicklers_9, Handle_10, &conv3_Status_20, STATE_VARIABLE_State_31_31, STATE_VARIABLE_State_23);
    Status_20 = ((MR_Word) (conv3_Status_20));
    {
      Result_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_21, 0) = ((MR_Box) (TypeClassInfo_for_analysis_36));
      MR_hl_field(0, Result_21, 1) = Call_17;
      MR_hl_field(0, Result_21, 2) = Answer_19;
      MR_hl_field(0, Result_21, 3) = (MR_Box) ((MR_Unsigned) (Status_20));
    }
    mercury__univ__type_to_univ_2_p_1((MR_Word) (&analysis__analysis__type_ctor_info_some_analysis_result_0), ((MR_Box) (Result_21)), Univ_12);
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.unpickle_analysis_result\'/7", AnalysisName_14);
      return;
    }
}

static void MR_CALL 
analysis__file__pickle_analysis_result_5_p_0(
  MR_Word OutputStream_6,
  MR_Word Pickles_7,
  MR_Word Univ_8)
{
  MR_Word TypeClassInfo_for_analysis_20;
  MR_Word TypeInfo_24_24;
  MR_Word TypeInfo_26_26;
  MR_Box Call_10;
  MR_Box Answer_11;
  MR_Word Status_12;
  MR_String Name_13;
  MR_Word Var_16;
  MR_Box conv0_Var_16;
  MR_Box MR_CALL (* func_1)(MR_Box);
  MR_Box conv2_Name_13;

  mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&analysis__analysis__type_ctor_info_some_analysis_result_0), Univ_8, &conv0_Var_16);
  Var_16 = ((MR_Word) (conv0_Var_16));
  TypeClassInfo_for_analysis_20 = ((MR_Word) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));
  Call_10 = (MR_hl_field(0, Var_16, (MR_Integer) 1));
  Answer_11 = (MR_hl_field(0, Var_16, (MR_Integer) 2));
  Status_12 = ((MR_Unsigned) ((MR_hl_field(0, Var_16, (MR_Integer) 3))) & (MR_Integer) 3);
  func_1 = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_20, (MR_Integer) 0)), (MR_Integer) 5))));
  conv2_Name_13 = func_1(((MR_Box) (TypeClassInfo_for_analysis_20)));
  Name_13 = ((MR_String) (conv2_Name_13));
  libs__pickle__pickle_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OutputStream_6, Pickles_7, ((MR_Box) (Name_13)));
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_20, (MR_Integer) 4, &TypeInfo_24_24);
  libs__pickle__pickle_5_p_0(TypeInfo_24_24, OutputStream_6, Pickles_7, Call_10);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_20, (MR_Integer) 5, &TypeInfo_26_26);
  libs__pickle__pickle_5_p_0(TypeInfo_26_26, OutputStream_6, Pickles_7, Answer_11);
  libs__pickle__pickle_5_p_0((MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0), OutputStream_6, Pickles_7, ((MR_Box) (Status_12)));
}

static MR_bool MR_CALL 
analysis__file__dir_sep_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded;

  succeeded = mercury__dir__is_directory_separator_1_p_0(Char_2);
  return succeeded;
}

static void MR_CALL 
analysis__file__write_analysis_file_4_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  analysis__file__IntroducedFrom__pred__write_analysis_file_4__910__1_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), wrapper_arg_1);
}

static void MR_CALL 
analysis__file__write_analysis_file_4_6_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word WriteEntry_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Word FuncResultList_10)
{
  MR_Word FuncResultListSorted_12;
  MR_Word Var_16;
  MR_Box conv0_STATE_VARIABLE_IO_15;

  mercury__list__sort_2_p_0(TypeInfo_for_T_27, FuncResultList_10, &FuncResultListSorted_12);
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&analysis__file_scalar_common_11[4]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (analysis__file__write_analysis_file_4_6_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (TypeInfo_for_T_27));
    MR_hl_field(0, Var_16, 4) = ((MR_Box) (WriteEntry_7));
    MR_hl_field(0, Var_16, 5) = ((MR_Box) (AnalysisName_8));
    MR_hl_field(0, Var_16, 6) = ((MR_Box) (FuncId_9));
  }
  mercury__list__foldl_4_p_2(TypeInfo_for_T_27, (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_16, FuncResultListSorted_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15);
}

static void MR_CALL 
analysis__file__write_analysis_file_3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  analysis__file__write_analysis_file_4_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
analysis__file__write_analysis_file_3_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word WriteEntry_6,
  MR_String AnalysisName_7,
  MR_Word FuncResults_8)
{
  MR_Word TypeInfo_20_20;
  MR_Word Var_12;
  MR_Box conv0_STATE_VARIABLE_IO_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&analysis__file_scalar_common_11[3]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (analysis__file__write_analysis_file_3_5_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (TypeInfo_for_T_13));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (WriteEntry_6));
    MR_hl_field(0, Var_12, 5) = ((MR_Box) (AnalysisName_7));
  }
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_13));
  }
  mercury__map__foldl_4_p_2((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), TypeInfo_20_20, (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, FuncResults_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

static void MR_CALL 
analysis__file__write_imdg_arc_6_p_0(
  MR_Word TypeClassInfo_for_compiler_44,
  MR_Box Compiler_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Word Arc_10)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_call_pattern_45 = ((MR_Word) ((MR_hl_field(0, Arc_10, (MR_Integer) 0))));
  MR_Word TypeClassInfo_for_to_term_48;
  MR_Box Call_12 = (MR_hl_field(0, Arc_10, (MR_Integer) 1));
  MR_Word DependentModule_13 = ((MR_Word) ((MR_hl_field(0, Arc_10, (MR_Integer) 2))));
  MR_Integer VersionNumber_18;
  MR_String FuncIdStr_21;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_String Var_56;
  MR_Word TypeClassInfo_for_analysis_46;
  MR_Word Analysis_14;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_44, (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_Analysis_14;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_Var_41;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_compiler_44)), Compiler_7, ((MR_Box) (AnalysisName_8)), &conv1_Analysis_14);
  if (succeeded)
  {
    Analysis_14 = ((MR_Word) (conv1_Analysis_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeClassInfo_for_analysis_46 = ((MR_Word) ((MR_hl_field(0, Analysis_14, (MR_Integer) 0))));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Box MR_CALL (* func_2)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_46, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv3_VersionNumber_18;

    conv3_VersionNumber_18 = func_2(((MR_Box) (TypeClassInfo_for_analysis_46)));
    VersionNumber_18 = ((MR_Integer) (conv3_VersionNumber_18));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.write_imdg_arc\'/6", (MR_String) "unknown analysis type");
      return;
    }
  FuncIdStr_21 = analysis__file__func_id_to_string_1_f_0(FuncId_9);
  parse_tree__prog_out__write_quoted_sym_name_3_p_0(DependentModule_13);
  mercury__io__write_string_3_p_0((MR_String) " -> ");
  mercury__io__write_string_3_p_0(AnalysisName_8);
  mercury__io__write_string_3_p_0((MR_String) "(");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&analysis__file_scalar_common_3[0]), VersionNumber_18, &Var_56);
  mercury__io__write_string_3_p_0(Var_56);
  mercury__io__write_string_3_p_0((MR_String) ", ");
  mercury__io__write_string_3_p_0(FuncIdStr_21);
  mercury__io__write_string_3_p_0((MR_String) ", ");
  Var_40 = mercury__varset__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0));
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_45, (MR_Integer) 2, &TypeClassInfo_for_to_term_48);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_48, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_41 = func_4(((MR_Box) (TypeClassInfo_for_to_term_48)), Call_12);
  Var_41 = ((MR_Word) (conv5_Var_41));
  mercury__term_io__write_term_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_40, Var_41);
  mercury__io__write_string_3_p_0((MR_String) ").\n");
}

static void MR_CALL 
analysis__file__parse_imdg_arc_4_p_0(
  MR_Word TypeClassInfo_for_compiler_56,
  MR_Box Compiler_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Arcs_0_34,
  MR_Word * STATE_VARIABLE_Arcs_35)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
  MR_Word TypeClassInfo_for_analysis_57;
  MR_String AnalysisName_11;
  MR_Word VersionNumberTerm_12;
  MR_Word DependentModule_21;
  MR_Word FuncId_22;
  MR_Box CallPattern_23;
  MR_Word TypeClassInfo_for_call_pattern_58;
  MR_Word TypeClassInfo_for_to_term_60;
  MR_Word TypeCtorInfo_5_78;
  MR_Word TypeCtorInfo_24_98;
  MR_Word DependentModuleTerm_8;
  MR_Word ResultTerm_9;
  MR_Word FuncIdTerm_13;
  MR_Word CallPatternTerm_14;
  MR_Word Analysis_16;
  MR_Word Var_36;
  MR_String Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Integer PolyConst1_59;
  MR_Integer PolyConst2_61;
  MR_String PF_79;
  MR_Word NameTerm_80;
  MR_Word ArityTerm_81;
  MR_Word ProcTerm_82;
  MR_Word PredOrFunc_84;
  MR_String Name_85;
  MR_Integer Arity_87;
  MR_Integer ProcIdInt_88;
  MR_Integer ProcId_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_Analysis_16;
  MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box *);

  if (succeeded)
  {
    Var_36 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 0))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_37 = ((MR_String) ((MR_hl_field(0, Var_36, (MR_Integer) 0))));
      succeeded = (strcmp(Var_37, (MR_String) "->") == 0);
      if (succeeded)
      {
        succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          DependentModuleTerm_8 = ((MR_Word) ((MR_hl_field(1, Var_38, (MR_Integer) 0))));
          Var_39 = ((MR_Word) ((MR_hl_field(1, Var_38, (MR_Integer) 1))));
          succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ResultTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 0))));
            Var_40 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 1))));
            succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) ResultTerm_9)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_41 = ((MR_Word) ((MR_hl_field(0, ResultTerm_9, (MR_Integer) 0))));
                Var_42 = ((MR_Word) ((MR_hl_field(0, ResultTerm_9, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 0);
                if (succeeded)
                {
                  AnalysisName_11 = ((MR_String) ((MR_hl_field(0, Var_41, (MR_Integer) 0))));
                  succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    VersionNumberTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 0))));
                    Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 1))));
                    succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      FuncIdTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 0))));
                      Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 1))));
                      succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        CallPatternTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 0))));
                        Var_45 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 1))));
                        succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_56, (MR_Integer) 0)), (MR_Integer) 6))));
                          succeeded = func_0(((MR_Box) (TypeClassInfo_for_compiler_56)), Compiler_5, ((MR_Box) (AnalysisName_11)), &conv1_Analysis_16);
                          if (succeeded)
                          {
                            Analysis_16 = ((MR_Word) (conv1_Analysis_16));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
                            TypeClassInfo_for_analysis_57 = ((MR_Word) ((MR_hl_field(0, Analysis_16, (MR_Integer) 0))));
                            TypeCtorInfo_5_78 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                            succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeCtorInfo_5_78, DependentModuleTerm_8, &DependentModule_21);
                            if (succeeded)
                            {
                              succeeded = ((MR_tag((MR_Word) FuncIdTerm_13)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_90 = ((MR_Word) ((MR_hl_field(0, FuncIdTerm_13, (MR_Integer) 0))));
                                Var_91 = ((MR_Word) ((MR_hl_field(0, FuncIdTerm_13, (MR_Integer) 1))));
                                succeeded = ((MR_tag((MR_Word) Var_90)) == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  PF_79 = ((MR_String) ((MR_hl_field(0, Var_90, (MR_Integer) 0))));
                                  succeeded = (Var_91 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    NameTerm_80 = ((MR_Word) ((MR_hl_field(1, Var_91, (MR_Integer) 0))));
                                    Var_92 = ((MR_Word) ((MR_hl_field(1, Var_91, (MR_Integer) 1))));
                                    succeeded = (Var_92 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      ArityTerm_81 = ((MR_Word) ((MR_hl_field(1, Var_92, (MR_Integer) 0))));
                                      Var_93 = ((MR_Word) ((MR_hl_field(1, Var_92, (MR_Integer) 1))));
                                      succeeded = (Var_93 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        ProcTerm_82 = ((MR_Word) ((MR_hl_field(1, Var_93, (MR_Integer) 0))));
                                        Var_94 = ((MR_Word) ((MR_hl_field(1, Var_93, (MR_Integer) 1))));
                                        succeeded = (Var_94 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          if ((strcmp(PF_79, (MR_String) "f") == 0))
                                          {
                                            PredOrFunc_84 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          if ((strcmp(PF_79, (MR_String) "p") == 0))
                                          {
                                            PredOrFunc_84 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                            succeeded = MR_FALSE;
                                          if (succeeded)
                                          {
                                            succeeded = ((MR_tag((MR_Word) NameTerm_80)) == (MR_Integer) 0);
                                            if (succeeded)
                                            {
                                              Var_95 = ((MR_Word) ((MR_hl_field(0, NameTerm_80, (MR_Integer) 0))));
                                              Var_96 = ((MR_Word) ((MR_hl_field(0, NameTerm_80, (MR_Integer) 1))));
                                              succeeded = (Var_96 == (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                succeeded = ((MR_tag((MR_Word) Var_95)) == (MR_Integer) 0);
                                                if (succeeded)
                                                {
                                                  Name_85 = ((MR_String) ((MR_hl_field(0, Var_95, (MR_Integer) 0))));
                                                  TypeCtorInfo_24_98 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                                                  succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeCtorInfo_24_98, ArityTerm_81, &Arity_87);
                                                  if (succeeded)
                                                  {
                                                    succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeCtorInfo_24_98, ProcTerm_82, &ProcIdInt_88);
                                                    if (succeeded)
                                                    {
                                                      hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_89, ProcIdInt_88);
                                                      PolyConst1_59 = (MR_Integer) 1;
                                                      Var_97 = (MR_Word) (Arity_87);
                                                      {
                                                        FuncId_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(0, FuncId_22, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_84));
                                                        MR_hl_field(0, FuncId_22, 1) = ((MR_Box) (Name_85));
                                                        MR_hl_field(0, FuncId_22, 2) = ((MR_Box) (Var_97));
                                                        MR_hl_field(0, FuncId_22, 3) = ((MR_Box) (ProcId_89));
                                                      }
                                                      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_57, PolyConst1_59, &TypeClassInfo_for_call_pattern_58);
                                                      PolyConst2_61 = (MR_Integer) 2;
                                                      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_58, PolyConst2_61, &TypeClassInfo_for_to_term_60);
                                                      func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_60, (MR_Integer) 0)), (MR_Integer) 6))));
                                                      succeeded = func_2(((MR_Box) (TypeClassInfo_for_to_term_60)), ((MR_Box) (CallPatternTerm_14)), &CallPattern_23);
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
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Integer VersionNumber_24;
    MR_Integer Var_77;
    MR_Box MR_CALL (* func_3)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_57, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv4_VersionNumber_24;

    conv4_VersionNumber_24 = func_3(((MR_Box) (TypeClassInfo_for_analysis_57)));
    VersionNumber_24 = ((MR_Integer) (conv4_VersionNumber_24));
    succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VersionNumberTerm_12, &Var_77);
    if (succeeded)
      succeeded = (VersionNumber_24 == Var_77);
    if (succeeded)
    {
      MR_Word TypeClassInfo_for_call_pattern_63;
      MR_Word Arc_27;
      MR_Word AnalysisArcs1_29;
      MR_Word FuncArcs_31;
      MR_Word AnalysisArcs_32;
      MR_Word AnalysisArcs0_28;
      MR_Box conv5_AnalysisArcs0_28;
      MR_Word FuncArcs0_30;
      MR_Box conv6_FuncArcs0_30;

      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_57, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_63);
      {
        Arc_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Arc_27, 0) = ((MR_Box) (TypeClassInfo_for_call_pattern_63));
        MR_hl_field(0, Arc_27, 1) = CallPattern_23;
        MR_hl_field(0, Arc_27, 2) = ((MR_Box) (DependentModule_21));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[4]), STATE_VARIABLE_Arcs_0_34, ((MR_Box) (AnalysisName_11)), &conv5_AnalysisArcs0_28);
      if (succeeded)
      {
        AnalysisArcs0_28 = ((MR_Word) (conv5_AnalysisArcs0_28));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        AnalysisArcs1_29 = AnalysisArcs0_28;
      else
        AnalysisArcs1_29 = mercury__map__init_0_f_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[2]));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[2]), AnalysisArcs1_29, ((MR_Box) (FuncId_22)), &conv6_FuncArcs0_30);
      if (succeeded)
      {
        FuncArcs0_30 = ((MR_Word) (conv6_FuncArcs0_30));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          FuncArcs_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncArcs_31, 0) = ((MR_Box) (Arc_27));
          MR_hl_field(1, FuncArcs_31, 1) = ((MR_Box) (FuncArcs0_30));
        }
      else
        {
          FuncArcs_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncArcs_31, 0) = ((MR_Box) (Arc_27));
          MR_hl_field(1, FuncArcs_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      mercury__map__set_4_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[2]), ((MR_Box) (FuncId_22)), ((MR_Box) (FuncArcs_31)), AnalysisArcs1_29, &AnalysisArcs_32);
      mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[4]), ((MR_Box) (AnalysisName_11)), ((MR_Box) (AnalysisArcs_32)), STATE_VARIABLE_Arcs_0_34, STATE_VARIABLE_Arcs_35);
    }
    else
      *STATE_VARIABLE_Arcs_35 = STATE_VARIABLE_Arcs_0_34;
  }
  else
  {
    MR_String Msg_33;
    MR_String Var_54;
    MR_Word Var_55;

    Var_54 = mercury__string__string_1_f_0((MR_Word) (&analysis__file_scalar_common_1[3]), ((MR_Box) (Term_6)));
    Msg_33 = mercury__string__f_43_43_2_f_0((MR_String) "failed to parse IMDG arc: ", Var_54);
    Var_55 = (MR_Word) (Msg_33);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0), ((MR_Box) (Var_55)));
      return;
    }
  }
}

static void MR_CALL 
analysis__file__write_request_entry_6_p_0(
  MR_Word TypeClassInfo_for_compiler_44,
  MR_Box Compiler_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Word Request_10)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_call_pattern_45 = ((MR_Word) ((MR_hl_field(0, Request_10, (MR_Integer) 0))));
  MR_Word TypeClassInfo_for_to_term_48;
  MR_Box Call_12 = (MR_hl_field(0, Request_10, (MR_Integer) 1));
  MR_Word CallerModule_13 = ((MR_Word) ((MR_hl_field(0, Request_10, (MR_Integer) 2))));
  MR_Integer VersionNumber_18;
  MR_String FuncIdStr_21;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_String Var_56;
  MR_Word TypeClassInfo_for_analysis_46;
  MR_Word Analysis_14;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_44, (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_Analysis_14;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_Var_41;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_compiler_44)), Compiler_7, ((MR_Box) (AnalysisName_8)), &conv1_Analysis_14);
  if (succeeded)
  {
    Analysis_14 = ((MR_Word) (conv1_Analysis_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeClassInfo_for_analysis_46 = ((MR_Word) ((MR_hl_field(0, Analysis_14, (MR_Integer) 0))));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Box MR_CALL (* func_2)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_46, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv3_VersionNumber_18;

    conv3_VersionNumber_18 = func_2(((MR_Box) (TypeClassInfo_for_analysis_46)));
    VersionNumber_18 = ((MR_Integer) (conv3_VersionNumber_18));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.write_request_entry\'/6", (MR_String) "unknown analysis type");
      return;
    }
  FuncIdStr_21 = analysis__file__func_id_to_string_1_f_0(FuncId_9);
  parse_tree__prog_out__write_quoted_sym_name_3_p_0(CallerModule_13);
  mercury__io__write_string_3_p_0((MR_String) " -> ");
  mercury__io__write_string_3_p_0(AnalysisName_8);
  mercury__io__write_string_3_p_0((MR_String) "(");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&analysis__file_scalar_common_3[0]), VersionNumber_18, &Var_56);
  mercury__io__write_string_3_p_0(Var_56);
  mercury__io__write_string_3_p_0((MR_String) ", ");
  mercury__io__write_string_3_p_0(FuncIdStr_21);
  mercury__io__write_string_3_p_0((MR_String) ", ");
  Var_40 = mercury__varset__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0));
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_45, (MR_Integer) 2, &TypeClassInfo_for_to_term_48);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_48, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_41 = func_4(((MR_Box) (TypeClassInfo_for_to_term_48)), Call_12);
  Var_41 = ((MR_Word) (conv5_Var_41));
  mercury__term_io__write_term_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_40, Var_41);
  mercury__io__write_string_3_p_0((MR_String) ").\n");
}

static void MR_CALL 
analysis__file__parse_request_entry_4_p_0(
  MR_Word TypeClassInfo_for_compiler_56,
  MR_Box Compiler_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Requests_0_34,
  MR_Word * STATE_VARIABLE_Requests_35)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
  MR_Word TypeClassInfo_for_analysis_57;
  MR_String AnalysisName_11;
  MR_Word VersionNumberTerm_12;
  MR_Word CallerModule_21;
  MR_Word FuncId_22;
  MR_Box CallPattern_23;
  MR_Word TypeClassInfo_for_call_pattern_58;
  MR_Word TypeClassInfo_for_to_term_60;
  MR_Word TypeCtorInfo_5_78;
  MR_Word TypeCtorInfo_24_98;
  MR_Word CallerModuleTerm_8;
  MR_Word RHS_9;
  MR_Word FuncIdTerm_13;
  MR_Word CallPatternTerm_14;
  MR_Word Analysis_16;
  MR_Word Var_36;
  MR_String Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Integer PolyConst1_59;
  MR_Integer PolyConst2_61;
  MR_String PF_79;
  MR_Word NameTerm_80;
  MR_Word ArityTerm_81;
  MR_Word ProcTerm_82;
  MR_Word PredOrFunc_84;
  MR_String Name_85;
  MR_Integer Arity_87;
  MR_Integer ProcIdInt_88;
  MR_Integer ProcId_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_Analysis_16;
  MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box *);

  if (succeeded)
  {
    Var_36 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 0))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_37 = ((MR_String) ((MR_hl_field(0, Var_36, (MR_Integer) 0))));
      succeeded = (strcmp(Var_37, (MR_String) "->") == 0);
      if (succeeded)
      {
        succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          CallerModuleTerm_8 = ((MR_Word) ((MR_hl_field(1, Var_38, (MR_Integer) 0))));
          Var_39 = ((MR_Word) ((MR_hl_field(1, Var_38, (MR_Integer) 1))));
          succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RHS_9 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 0))));
            Var_40 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 1))));
            succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) RHS_9)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_41 = ((MR_Word) ((MR_hl_field(0, RHS_9, (MR_Integer) 0))));
                Var_42 = ((MR_Word) ((MR_hl_field(0, RHS_9, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 0);
                if (succeeded)
                {
                  AnalysisName_11 = ((MR_String) ((MR_hl_field(0, Var_41, (MR_Integer) 0))));
                  succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    VersionNumberTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 0))));
                    Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 1))));
                    succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      FuncIdTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 0))));
                      Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 1))));
                      succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        CallPatternTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 0))));
                        Var_45 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 1))));
                        succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_56, (MR_Integer) 0)), (MR_Integer) 6))));
                          succeeded = func_0(((MR_Box) (TypeClassInfo_for_compiler_56)), Compiler_5, ((MR_Box) (AnalysisName_11)), &conv1_Analysis_16);
                          if (succeeded)
                          {
                            Analysis_16 = ((MR_Word) (conv1_Analysis_16));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
                            TypeClassInfo_for_analysis_57 = ((MR_Word) ((MR_hl_field(0, Analysis_16, (MR_Integer) 0))));
                            TypeCtorInfo_5_78 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                            succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeCtorInfo_5_78, CallerModuleTerm_8, &CallerModule_21);
                            if (succeeded)
                            {
                              succeeded = ((MR_tag((MR_Word) FuncIdTerm_13)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_90 = ((MR_Word) ((MR_hl_field(0, FuncIdTerm_13, (MR_Integer) 0))));
                                Var_91 = ((MR_Word) ((MR_hl_field(0, FuncIdTerm_13, (MR_Integer) 1))));
                                succeeded = ((MR_tag((MR_Word) Var_90)) == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  PF_79 = ((MR_String) ((MR_hl_field(0, Var_90, (MR_Integer) 0))));
                                  succeeded = (Var_91 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    NameTerm_80 = ((MR_Word) ((MR_hl_field(1, Var_91, (MR_Integer) 0))));
                                    Var_92 = ((MR_Word) ((MR_hl_field(1, Var_91, (MR_Integer) 1))));
                                    succeeded = (Var_92 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      ArityTerm_81 = ((MR_Word) ((MR_hl_field(1, Var_92, (MR_Integer) 0))));
                                      Var_93 = ((MR_Word) ((MR_hl_field(1, Var_92, (MR_Integer) 1))));
                                      succeeded = (Var_93 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        ProcTerm_82 = ((MR_Word) ((MR_hl_field(1, Var_93, (MR_Integer) 0))));
                                        Var_94 = ((MR_Word) ((MR_hl_field(1, Var_93, (MR_Integer) 1))));
                                        succeeded = (Var_94 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          if ((strcmp(PF_79, (MR_String) "f") == 0))
                                          {
                                            PredOrFunc_84 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          if ((strcmp(PF_79, (MR_String) "p") == 0))
                                          {
                                            PredOrFunc_84 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                            succeeded = MR_FALSE;
                                          if (succeeded)
                                          {
                                            succeeded = ((MR_tag((MR_Word) NameTerm_80)) == (MR_Integer) 0);
                                            if (succeeded)
                                            {
                                              Var_95 = ((MR_Word) ((MR_hl_field(0, NameTerm_80, (MR_Integer) 0))));
                                              Var_96 = ((MR_Word) ((MR_hl_field(0, NameTerm_80, (MR_Integer) 1))));
                                              succeeded = (Var_96 == (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                succeeded = ((MR_tag((MR_Word) Var_95)) == (MR_Integer) 0);
                                                if (succeeded)
                                                {
                                                  Name_85 = ((MR_String) ((MR_hl_field(0, Var_95, (MR_Integer) 0))));
                                                  TypeCtorInfo_24_98 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                                                  succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeCtorInfo_24_98, ArityTerm_81, &Arity_87);
                                                  if (succeeded)
                                                  {
                                                    succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeCtorInfo_24_98, ProcTerm_82, &ProcIdInt_88);
                                                    if (succeeded)
                                                    {
                                                      hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_89, ProcIdInt_88);
                                                      PolyConst1_59 = (MR_Integer) 1;
                                                      Var_97 = (MR_Word) (Arity_87);
                                                      {
                                                        FuncId_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(0, FuncId_22, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_84));
                                                        MR_hl_field(0, FuncId_22, 1) = ((MR_Box) (Name_85));
                                                        MR_hl_field(0, FuncId_22, 2) = ((MR_Box) (Var_97));
                                                        MR_hl_field(0, FuncId_22, 3) = ((MR_Box) (ProcId_89));
                                                      }
                                                      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_57, PolyConst1_59, &TypeClassInfo_for_call_pattern_58);
                                                      PolyConst2_61 = (MR_Integer) 2;
                                                      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_58, PolyConst2_61, &TypeClassInfo_for_to_term_60);
                                                      func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_60, (MR_Integer) 0)), (MR_Integer) 6))));
                                                      succeeded = func_2(((MR_Box) (TypeClassInfo_for_to_term_60)), ((MR_Box) (CallPatternTerm_14)), &CallPattern_23);
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
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Integer VersionNumber_24;
    MR_Integer Var_77;
    MR_Box MR_CALL (* func_3)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_57, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv4_VersionNumber_24;

    conv4_VersionNumber_24 = func_3(((MR_Box) (TypeClassInfo_for_analysis_57)));
    VersionNumber_24 = ((MR_Integer) (conv4_VersionNumber_24));
    succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VersionNumberTerm_12, &Var_77);
    if (succeeded)
      succeeded = (VersionNumber_24 == Var_77);
    if (succeeded)
    {
      MR_Word TypeClassInfo_for_call_pattern_63;
      MR_Word Result_27;
      MR_Word AnalysisRequests1_29;
      MR_Word FuncRequests_31;
      MR_Word AnalysisRequests_32;
      MR_Word AnalysisRequests0_28;
      MR_Box conv5_AnalysisRequests0_28;
      MR_Word FuncRequests0_30;
      MR_Box conv6_FuncRequests0_30;

      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_57, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_63);
      {
        Result_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Result_27, 0) = ((MR_Box) (TypeClassInfo_for_call_pattern_63));
        MR_hl_field(0, Result_27, 1) = CallPattern_23;
        MR_hl_field(0, Result_27, 2) = ((MR_Box) (CallerModule_21));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[2]), STATE_VARIABLE_Requests_0_34, ((MR_Box) (AnalysisName_11)), &conv5_AnalysisRequests0_28);
      if (succeeded)
      {
        AnalysisRequests0_28 = ((MR_Word) (conv5_AnalysisRequests0_28));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        AnalysisRequests1_29 = AnalysisRequests0_28;
      else
        AnalysisRequests1_29 = mercury__map__init_0_f_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[1]));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[1]), AnalysisRequests1_29, ((MR_Box) (FuncId_22)), &conv6_FuncRequests0_30);
      if (succeeded)
      {
        FuncRequests0_30 = ((MR_Word) (conv6_FuncRequests0_30));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          FuncRequests_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncRequests_31, 0) = ((MR_Box) (Result_27));
          MR_hl_field(1, FuncRequests_31, 1) = ((MR_Box) (FuncRequests0_30));
        }
      else
        {
          FuncRequests_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncRequests_31, 0) = ((MR_Box) (Result_27));
          MR_hl_field(1, FuncRequests_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      mercury__map__set_4_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[1]), ((MR_Box) (FuncId_22)), ((MR_Box) (FuncRequests_31)), AnalysisRequests1_29, &AnalysisRequests_32);
      mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[2]), ((MR_Box) (AnalysisName_11)), ((MR_Box) (AnalysisRequests_32)), STATE_VARIABLE_Requests_0_34, STATE_VARIABLE_Requests_35);
    }
    else
      *STATE_VARIABLE_Requests_35 = STATE_VARIABLE_Requests_0_34;
  }
  else
  {
    MR_String Msg_33;
    MR_String Var_54;
    MR_Word Var_55;

    Var_54 = mercury__string__string_1_f_0((MR_Word) (&analysis__file_scalar_common_1[3]), ((MR_Box) (Term_6)));
    Msg_33 = mercury__string__f_43_43_2_f_0((MR_String) "failed to parse request entry: ", Var_54);
    Var_55 = (MR_Word) (Msg_33);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0), ((MR_Box) (Var_55)));
      return;
    }
  }
}

static void MR_CALL 
analysis__file__write_result_entry_5_p_0(
  MR_String AnalysisName_6,
  MR_Word FuncId_7,
  MR_Word Result_8)
{
  MR_Word TypeClassInfo_for_analysis_40 = ((MR_Word) ((MR_hl_field(0, Result_8, (MR_Integer) 0))));
  MR_Word TypeClassInfo_for_call_pattern_42;
  MR_Word TypeClassInfo_for_to_term_44;
  MR_Word TypeClassInfo_for_answer_pattern_46;
  MR_Word TypeClassInfo_for_to_term_47;
  MR_Box Call_10 = (MR_hl_field(0, Result_8, (MR_Integer) 1));
  MR_Box Answer_11 = (MR_hl_field(0, Result_8, (MR_Integer) 2));
  MR_Word Status_12 = ((MR_Unsigned) ((MR_hl_field(0, Result_8, (MR_Integer) 3))) & (MR_Integer) 3);
  MR_Integer VersionNumber_13;
  MR_String StatusString_14;
  MR_String FuncIdStr_15;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_String Var_54;
  MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_40, (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_VersionNumber_13;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_28;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_Var_33;

  conv1_VersionNumber_13 = func_0(((MR_Box) (TypeClassInfo_for_analysis_40)));
  VersionNumber_13 = ((MR_Integer) (conv1_VersionNumber_13));
  switch (Status_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      StatusString_14 = (MR_String) "invalid";
      break;
    case (MR_Integer) 2:
      StatusString_14 = (MR_String) "optimal";
      break;
    case (MR_Integer) 1:
      StatusString_14 = (MR_String) "suboptimal";
      break;
  }
  FuncIdStr_15 = analysis__file__func_id_to_string_1_f_0(FuncId_7);
  mercury__io__write_string_3_p_0(AnalysisName_6);
  mercury__io__write_string_3_p_0((MR_String) "(");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&analysis__file_scalar_common_3[0]), VersionNumber_13, &Var_54);
  mercury__io__write_string_3_p_0(Var_54);
  mercury__io__write_string_3_p_0((MR_String) ", ");
  mercury__io__write_string_3_p_0(FuncIdStr_15);
  mercury__io__write_string_3_p_0((MR_String) ", ");
  Var_27 = mercury__varset__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0));
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_40, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_42);
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_42, (MR_Integer) 2, &TypeClassInfo_for_to_term_44);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_44, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_28 = func_2(((MR_Box) (TypeClassInfo_for_to_term_44)), Call_10);
  Var_28 = ((MR_Word) (conv3_Var_28));
  mercury__term_io__write_term_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_27, Var_28);
  mercury__io__write_string_3_p_0((MR_String) ", ");
  Var_32 = mercury__varset__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0));
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_40, (MR_Integer) 2, &TypeClassInfo_for_answer_pattern_46);
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_answer_pattern_46, (MR_Integer) 2, &TypeClassInfo_for_to_term_47);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_47, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_33 = func_4(((MR_Box) (TypeClassInfo_for_to_term_47)), Answer_11);
  Var_33 = ((MR_Word) (conv5_Var_33));
  mercury__term_io__write_term_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_32, Var_33);
  mercury__io__write_string_3_p_0((MR_String) ", ");
  mercury__io__write_string_3_p_0(StatusString_14);
  mercury__io__write_string_3_p_0((MR_String) ").\n");
}

static MR_String MR_CALL 
analysis__file__func_id_to_string_1_f_0(
  MR_Word FuncId_3)
{
  MR_String String_4;
  MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(0, FuncId_3, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_String Name_6 = ((MR_String) ((MR_hl_field(0, FuncId_3, (MR_Integer) 1))));
  MR_Word PredFormArity_7 = ((MR_Word) ((MR_hl_field(0, FuncId_3, (MR_Integer) 2))));
  MR_Integer ProcId_8 = ((MR_Integer) ((MR_hl_field(0, FuncId_3, (MR_Integer) 3))));
  MR_String PFStr_9;
  MR_Integer Arity_10;
  MR_String NameStr_11;
  MR_Integer Var_21;
  MR_String Var_24;
  MR_String Var_31;
  MR_String Var_33;
  MR_String Var_34;
  MR_String Var_41;
  MR_String Var_43;
  MR_String Var_44;
  MR_String Var_46;

  switch (PredOrFunc_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      PFStr_9 = (MR_String) "f";
      break;
    case (MR_Integer) 0:
      PFStr_9 = (MR_String) "p";
      break;
  }
  Arity_10 = (MR_Integer) (PredFormArity_7);
  NameStr_11 = mercury__term_io__quoted_atom_1_f_0(Name_6);
  Var_21 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_8);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&analysis__file_scalar_common_3[0]), Var_21, &Var_24);
  Var_31 = mercury__string__f_43_43_2_f_0(Var_24, (MR_String) ")");
  Var_33 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_31);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&analysis__file_scalar_common_3[0]), Arity_10, &Var_34);
  Var_41 = mercury__string__f_43_43_2_f_0(Var_34, Var_33);
  Var_43 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_41);
  Var_44 = mercury__string__f_43_43_2_f_0(NameStr_11, Var_43);
  Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_44);
  String_4 = mercury__string__f_43_43_2_f_0(PFStr_9, Var_46);
  return String_4;
}

static void MR_CALL 
analysis__file__parse_result_entry_4_p_0(
  MR_Word TypeClassInfo_for_compiler_58,
  MR_Box Compiler_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Results_0_36,
  MR_Word * STATE_VARIABLE_Results_37)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
  MR_Word TypeClassInfo_for_analysis_59;
  MR_String AnalysisName_8;
  MR_Word VersionNumberTerm_9;
  MR_Word FuncId_22;
  MR_Box CallPattern_23;
  MR_Box AnswerPattern_24;
  MR_Word Status_25;
  MR_Word TypeClassInfo_for_call_pattern_60;
  MR_Word TypeClassInfo_for_to_term_62;
  MR_Word TypeClassInfo_for_answer_pattern_64;
  MR_Word TypeClassInfo_for_to_term_65;
  MR_Word TypeCtorInfo_24_99;
  MR_Word FuncIdTerm_10;
  MR_Word CallPatternTerm_11;
  MR_Word AnswerPatternTerm_12;
  MR_Word StatusTerm_13;
  MR_String StatusString_15;
  MR_Word Analysis_17;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Integer PolyConst1_61;
  MR_Integer PolyConst2_63;
  MR_String PF_80;
  MR_Word NameTerm_81;
  MR_Word ArityTerm_82;
  MR_Word ProcTerm_83;
  MR_Word PredOrFunc_85;
  MR_String Name_86;
  MR_Integer Arity_88;
  MR_Integer ProcIdInt_89;
  MR_Integer ProcId_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_Analysis_17;
  MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box *);
  MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *);

  if (succeeded)
  {
    Var_38 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 0))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
    if (succeeded)
    {
      AnalysisName_8 = ((MR_String) ((MR_hl_field(0, Var_38, (MR_Integer) 0))));
      succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        VersionNumberTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 0))));
        Var_40 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 1))));
        succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          FuncIdTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 0))));
          Var_41 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 1))));
          succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            CallPatternTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
            Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 1))));
            succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              AnswerPatternTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 0))));
              Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 1))));
              succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                StatusTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 0))));
                Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 1))));
                succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) StatusTerm_13)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_45 = ((MR_Word) ((MR_hl_field(0, StatusTerm_13, (MR_Integer) 0))));
                    Var_46 = ((MR_Word) ((MR_hl_field(0, StatusTerm_13, (MR_Integer) 1))));
                    succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        StatusString_15 = ((MR_String) ((MR_hl_field(0, Var_45, (MR_Integer) 0))));
                        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_58, (MR_Integer) 0)), (MR_Integer) 6))));
                        succeeded = func_0(((MR_Box) (TypeClassInfo_for_compiler_58)), Compiler_5, ((MR_Box) (AnalysisName_8)), &conv1_Analysis_17);
                        if (succeeded)
                        {
                          Analysis_17 = ((MR_Word) (conv1_Analysis_17));
                          succeeded = MR_TRUE;
                        }
                        if (succeeded)
                        {
                          TypeClassInfo_for_analysis_59 = ((MR_Word) ((MR_hl_field(0, Analysis_17, (MR_Integer) 0))));
                          succeeded = ((MR_tag((MR_Word) FuncIdTerm_10)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Var_91 = ((MR_Word) ((MR_hl_field(0, FuncIdTerm_10, (MR_Integer) 0))));
                            Var_92 = ((MR_Word) ((MR_hl_field(0, FuncIdTerm_10, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_91)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              PF_80 = ((MR_String) ((MR_hl_field(0, Var_91, (MR_Integer) 0))));
                              succeeded = (Var_92 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                NameTerm_81 = ((MR_Word) ((MR_hl_field(1, Var_92, (MR_Integer) 0))));
                                Var_93 = ((MR_Word) ((MR_hl_field(1, Var_92, (MR_Integer) 1))));
                                succeeded = (Var_93 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ArityTerm_82 = ((MR_Word) ((MR_hl_field(1, Var_93, (MR_Integer) 0))));
                                  Var_94 = ((MR_Word) ((MR_hl_field(1, Var_93, (MR_Integer) 1))));
                                  succeeded = (Var_94 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ProcTerm_83 = ((MR_Word) ((MR_hl_field(1, Var_94, (MR_Integer) 0))));
                                    Var_95 = ((MR_Word) ((MR_hl_field(1, Var_94, (MR_Integer) 1))));
                                    succeeded = (Var_95 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      if ((strcmp(PF_80, (MR_String) "f") == 0))
                                      {
                                        PredOrFunc_85 = (MR_Integer) 1;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      if ((strcmp(PF_80, (MR_String) "p") == 0))
                                      {
                                        PredOrFunc_85 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                        succeeded = MR_FALSE;
                                      if (succeeded)
                                      {
                                        succeeded = ((MR_tag((MR_Word) NameTerm_81)) == (MR_Integer) 0);
                                        if (succeeded)
                                        {
                                          Var_96 = ((MR_Word) ((MR_hl_field(0, NameTerm_81, (MR_Integer) 0))));
                                          Var_97 = ((MR_Word) ((MR_hl_field(0, NameTerm_81, (MR_Integer) 1))));
                                          succeeded = (Var_97 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            succeeded = ((MR_tag((MR_Word) Var_96)) == (MR_Integer) 0);
                                            if (succeeded)
                                            {
                                              Name_86 = ((MR_String) ((MR_hl_field(0, Var_96, (MR_Integer) 0))));
                                              TypeCtorInfo_24_99 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                                              succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeCtorInfo_24_99, ArityTerm_82, &Arity_88);
                                              if (succeeded)
                                              {
                                                succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeCtorInfo_24_99, ProcTerm_83, &ProcIdInt_89);
                                                if (succeeded)
                                                {
                                                  hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_90, ProcIdInt_89);
                                                  PolyConst1_61 = (MR_Integer) 1;
                                                  Var_98 = (MR_Word) (Arity_88);
                                                  {
                                                    FuncId_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(0, FuncId_22, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_85));
                                                    MR_hl_field(0, FuncId_22, 1) = ((MR_Box) (Name_86));
                                                    MR_hl_field(0, FuncId_22, 2) = ((MR_Box) (Var_98));
                                                    MR_hl_field(0, FuncId_22, 3) = ((MR_Box) (ProcId_90));
                                                  }
                                                  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_59, PolyConst1_61, &TypeClassInfo_for_call_pattern_60);
                                                  PolyConst2_63 = (MR_Integer) 2;
                                                  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_60, PolyConst2_63, &TypeClassInfo_for_to_term_62);
                                                  func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_62, (MR_Integer) 0)), (MR_Integer) 6))));
                                                  succeeded = func_2(((MR_Box) (TypeClassInfo_for_to_term_62)), ((MR_Box) (CallPatternTerm_11)), &CallPattern_23);
                                                  if (succeeded)
                                                  {
                                                    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_59, PolyConst2_63, &TypeClassInfo_for_answer_pattern_64);
                                                    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_answer_pattern_64, PolyConst2_63, &TypeClassInfo_for_to_term_65);
                                                    func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_65, (MR_Integer) 0)), (MR_Integer) 6))));
                                                    succeeded = func_3(((MR_Box) (TypeClassInfo_for_to_term_65)), ((MR_Box) (AnswerPatternTerm_12)), &AnswerPattern_24);
                                                    if (succeeded)
                                                    {
                                                      if ((strcmp(StatusString_15, (MR_String) "invalid") == 0))
                                                      {
                                                        Status_25 = (MR_Integer) 0;
                                                        succeeded = MR_TRUE;
                                                      }
                                                      else
                                                      if ((strcmp(StatusString_15, (MR_String) "optimal") == 0))
                                                      {
                                                        Status_25 = (MR_Integer) 2;
                                                        succeeded = MR_TRUE;
                                                      }
                                                      else
                                                      if ((strcmp(StatusString_15, (MR_String) "suboptimal") == 0))
                                                      {
                                                        Status_25 = (MR_Integer) 1;
                                                        succeeded = MR_TRUE;
                                                      }
                                                      else
                                                        succeeded = MR_FALSE;
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
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Integer VersionNumber_26;
    MR_Integer Var_79;
    MR_Box MR_CALL (* func_4)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_59, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv5_VersionNumber_26;

    conv5_VersionNumber_26 = func_4(((MR_Box) (TypeClassInfo_for_analysis_59)));
    VersionNumber_26 = ((MR_Integer) (conv5_VersionNumber_26));
    succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VersionNumberTerm_9, &Var_79);
    if (succeeded)
      succeeded = (VersionNumber_26 == Var_79);
    if (succeeded)
    {
      MR_Word Result_29;
      MR_Word AnalysisResults1_31;
      MR_Word FuncResults_33;
      MR_Word AnalysisResults_34;
      MR_Word AnalysisResults0_30;
      MR_Box conv6_AnalysisResults0_30;
      MR_Word FuncResults0_32;
      MR_Box conv7_FuncResults0_32;

      {
        Result_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Result_29, 0) = ((MR_Box) (TypeClassInfo_for_analysis_59));
        MR_hl_field(0, Result_29, 1) = CallPattern_23;
        MR_hl_field(0, Result_29, 2) = AnswerPattern_24;
        MR_hl_field(0, Result_29, 3) = (MR_Box) ((MR_Unsigned) (Status_25));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[0]), STATE_VARIABLE_Results_0_36, ((MR_Box) (AnalysisName_8)), &conv6_AnalysisResults0_30);
      if (succeeded)
      {
        AnalysisResults0_30 = ((MR_Word) (conv6_AnalysisResults0_30));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        AnalysisResults1_31 = AnalysisResults0_30;
      else
        AnalysisResults1_31 = mercury__map__init_0_f_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[0]));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[0]), AnalysisResults1_31, ((MR_Box) (FuncId_22)), &conv7_FuncResults0_32);
      if (succeeded)
      {
        FuncResults0_32 = ((MR_Word) (conv7_FuncResults0_32));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          FuncResults_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncResults_33, 0) = ((MR_Box) (Result_29));
          MR_hl_field(1, FuncResults_33, 1) = ((MR_Box) (FuncResults0_32));
        }
      else
        {
          FuncResults_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncResults_33, 0) = ((MR_Box) (Result_29));
          MR_hl_field(1, FuncResults_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      mercury__map__set_4_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[0]), ((MR_Box) (FuncId_22)), ((MR_Box) (FuncResults_33)), AnalysisResults1_31, &AnalysisResults_34);
      mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[0]), ((MR_Box) (AnalysisName_8)), ((MR_Box) (AnalysisResults_34)), STATE_VARIABLE_Results_0_36, STATE_VARIABLE_Results_37);
    }
    else
      *STATE_VARIABLE_Results_37 = STATE_VARIABLE_Results_0_36;
  }
  else
  {
    MR_String Msg_35;
    MR_String Var_56;
    MR_Word Var_57;

    Var_56 = mercury__string__string_1_f_0((MR_Word) (&analysis__file_scalar_common_1[3]), ((MR_Box) (Term_6)));
    Msg_35 = mercury__string__f_43_43_2_f_0((MR_String) "failed to parse result entry: ", Var_56);
    Var_57 = (MR_Word) (Msg_35);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0), ((MR_Box) (Var_57)));
      return;
    }
  }
}

static void MR_CALL 
analysis__file__empty_request_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  analysis__file__IntroducedFrom__pred__empty_request_file__919__1_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

void MR_CALL 
analysis__file__empty_request_file_5_p_0(
  MR_Word Info_6,
  MR_Word Globals_7,
  MR_Word ModuleName_8)
{
  MR_Word TypeClassInfo_for_compiler_39 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 0))));
  MR_String RequestFileName_10;
  MR_Box Var_14 = (MR_hl_field(0, Info_6, (MR_Integer) 1));
  MR_Word Var_17;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_39, (MR_Integer) 0)), (MR_Integer) 9))));
  MR_Box conv2_RequestFileName_10;
  MR_Box conv1_STATE_VARIABLE_IO_16_16;
  MR_Word Var_11;

  func_0(((MR_Box) (TypeClassInfo_for_compiler_39)), Var_14, ((MR_Box) (Globals_7)), ((MR_Box) (((MR_Box) ((MR_String) ".request")))), ((MR_Box) (ModuleName_8)), &conv2_RequestFileName_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16_16);
  RequestFileName_10 = ((MR_String) (conv2_RequestFileName_10));
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&analysis__file_scalar_common_4[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (analysis__file__empty_request_file_5_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (RequestFileName_10));
  }
  analysis__debug_msg_3_p_0(Var_17);
  mercury__io__file__remove_file_4_p_0(RequestFileName_10, &Var_11);
}

static void MR_CALL 
analysis__file__write_module_imdg_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  analysis__file__write_analysis_file_3_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
analysis__file__write_module_imdg_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;

  analysis__file__write_imdg_arc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
}

void MR_CALL 
analysis__file__write_module_imdg_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word ModuleEntries_10)
{
  MR_Word TypeClassInfo_for_compiler_45 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
  MR_Box Var_15 = (MR_hl_field(0, Info_7, (MR_Integer) 1));
  MR_Word Var_17;
  MR_String WriteFileName_48;
  MR_Word OpenResult_51;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_WriteFileName_48;
  MR_Box conv1_STATE_VARIABLE_IO_23_49;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&analysis__file_scalar_common_11[2]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (analysis__file__write_module_imdg_6_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (TypeClassInfo_for_compiler_45));
    MR_hl_field(0, Var_17, 4) = Var_15;
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_45, (MR_Integer) 0)), (MR_Integer) 9))));
  func_0(((MR_Box) (TypeClassInfo_for_compiler_45)), Var_15, ((MR_Box) (Globals_8)), ((MR_Box) (((MR_Box) ((MR_String) ".imdg")))), ((MR_Box) (ModuleName_9)), &conv2_WriteFileName_48, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_49);
  WriteFileName_48 = ((MR_String) (conv2_WriteFileName_48));
  mercury__io__open_output_4_p_0(WriteFileName_48, &OpenResult_51);
  if (((MR_tag((MR_Word) OpenResult_51)) == (MR_Integer) 1))
  {
    MR_Word IOError_55 = ((MR_Word) ((MR_hl_field(1, OpenResult_51, (MR_Integer) 0))));
    MR_String Var_65;
    MR_String Var_67;
    MR_String Var_68;
    MR_String Var_70;

    Var_70 = mercury__io__error_message_1_f_0(IOError_55);
    Var_68 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", Var_70);
    Var_67 = mercury__string__f_43_43_2_f_0(WriteFileName_48, Var_68);
    Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "error opening \140", Var_67);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.write_analysis_file\'/5", Var_65);
      return;
    }
  }
  else
  {
    MR_Word Stream_52 = ((MR_Word) ((MR_hl_field(0, OpenResult_51, (MR_Integer) 0))));
    MR_Word OldOutput_53;
    MR_Word Var_71;
    MR_Box conv3_STATE_VARIABLE_IO_23_62;
    MR_Word Var_54;

    mercury__io__set_output_stream_4_p_0(Stream_52, &OldOutput_53);
    mercury__io__write_int_3_p_0((MR_Integer) 6);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_71, 0) = ((MR_Box) (&analysis__file_scalar_common_7[1]));
      MR_hl_field(0, Var_71, 1) = ((MR_Box) (analysis__file__write_module_imdg_6_p_0_2));
      MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_71, 3) = ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0));
      MR_hl_field(0, Var_71, 4) = ((MR_Box) (Var_17));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_71, ModuleEntries_10, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_23_62);
    mercury__io__set_output_stream_4_p_0(OldOutput_53, &Var_54);
    mercury__io__close_output_3_p_0(Stream_52);
  }
}

static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  analysis__file__IntroducedFrom__pred__read_analysis_file__769__1_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), (MR_hl_field(0, closure, (MR_Integer) 5)), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), wrapper_arg_1);
}

static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  analysis__file__IntroducedFrom__pred__read_analysis_file__762__1_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  analysis__file__IntroducedFrom__pred__read_analysis_file__785__1_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  analysis__file__IntroducedFrom__pred__find_and_read_analysis_file__744__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
}

static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Arcs_35;

  analysis__file__parse_imdg_arc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Arcs_35);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Arcs_35));
}

void MR_CALL 
analysis__file__read_module_imdg_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * ModuleEntries_10)
{
  MR_Word TypeClassInfo_for_compiler_42 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
  MR_Box Var_14 = (MR_hl_field(0, Info_7, (MR_Integer) 1));
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word MaybeAnalysisFileName_47;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv3_MaybeAnalysisFileName_47;
  MR_Box conv2_STATE_VARIABLE_IO_24_50;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&analysis__file_scalar_common_6[5]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (analysis__file__read_module_imdg_6_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (TypeClassInfo_for_compiler_42));
    MR_hl_field(0, Var_15, 4) = Var_14;
  }
  Var_16 = (MR_Word) (((MR_Box) ((MR_String) ".imdg")));
  Var_17 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[4]));
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_42, (MR_Integer) 0)), (MR_Integer) 8))));
  func_1(((MR_Box) (TypeClassInfo_for_compiler_42)), Var_14, ((MR_Box) (Globals_8)), ((MR_Box) (Var_16)), ((MR_Box) (ModuleName_9)), &conv3_MaybeAnalysisFileName_47, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_24_50);
  MaybeAnalysisFileName_47 = ((MR_Word) (conv3_MaybeAnalysisFileName_47));
  if (((MR_tag((MR_Word) MaybeAnalysisFileName_47)) == (MR_Integer) 1))
  {
    MR_String Message_49 = ((MR_String) ((MR_hl_field(1, MaybeAnalysisFileName_47, (MR_Integer) 0))));
    MR_Word Var_51;

    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (&analysis__file_scalar_common_6[4]));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) (analysis__file__read_module_imdg_6_p_0_2));
      MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_51, 3) = ((MR_Box) (Var_16));
      MR_hl_field(0, Var_51, 4) = ((MR_Box) (ModuleName_9));
      MR_hl_field(0, Var_51, 5) = ((MR_Box) (Message_49));
    }
    analysis__debug_msg_3_p_0(Var_51);
    *ModuleEntries_10 = Var_17;
  }
  else
  {
    MR_String AnalysisFileName_48 = ((MR_String) ((MR_hl_field(0, MaybeAnalysisFileName_47, (MR_Integer) 0))));
    MR_Word OpenResult_52;

    mercury__io__open_input_4_p_0(AnalysisFileName_48, &OpenResult_52);
    if (((MR_tag((MR_Word) OpenResult_52)) == (MR_Integer) 1))
    {
      MR_Word Var_60;

      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_60, 0) = ((MR_Box) (&analysis__file_scalar_common_4[0]));
        MR_hl_field(0, Var_60, 1) = ((MR_Box) (analysis__file__read_module_imdg_6_p_0_3));
        MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_60, 3) = ((MR_Box) (AnalysisFileName_48));
      }
      analysis__debug_msg_3_p_0(Var_60);
      *ModuleEntries_10 = Var_17;
    }
    else
    {
      MR_Word Stream_53 = ((MR_Word) ((MR_hl_field(0, OpenResult_52, (MR_Integer) 0))));
      MR_Word Result_54;
      MR_Word Var_56;
      MR_Word Var_58;

      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_56, 0) = ((MR_Box) (&analysis__file_scalar_common_4[0]));
        MR_hl_field(0, Var_56, 1) = ((MR_Box) (analysis__file__read_module_imdg_6_p_0_4));
        MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_56, 3) = ((MR_Box) (AnalysisFileName_48));
      }
      analysis__debug_msg_3_p_0(Var_56);
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_58, 0) = ((MR_Box) (&analysis__file_scalar_common_11[0]));
        MR_hl_field(0, Var_58, 1) = ((MR_Box) (analysis__file__read_module_imdg_6_p_0_5));
        MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_58, 3) = ((MR_Box) (&analysis__file_scalar_common_2[5]));
        MR_hl_field(0, Var_58, 4) = ((MR_Box) (Var_15));
        MR_hl_field(0, Var_58, 5) = ((MR_Box) (Var_17));
        MR_hl_field(0, Var_58, 6) = ((MR_Box) (Stream_53));
      }
      mercury__exception__try_io_4_p_0((MR_Word) (&analysis__file_scalar_common_2[5]), Var_58, &Result_54);
      mercury__io__close_input_3_p_0(Stream_53);
      if (((MR_tag((MR_Word) Result_54)) == (MR_Integer) 2))
        {
          mercury__exception__rethrow_1_p_0((MR_Word) (&analysis__file_scalar_common_2[5]), Result_54);
          return;
        }
      else
        *ModuleEntries_10 = ((MR_Word) ((MR_hl_field(1, Result_54, (MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  analysis__file__write_analysis_file_3_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;

  analysis__file__write_request_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
}

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  analysis__file__write_analysis_file_3_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;

  analysis__file__write_request_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
}

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  analysis__file__IntroducedFrom__pred__write_module_analysis_requests__549__1_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word ModuleRequests_10)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_compiler_64 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
  MR_Box Compiler_12 = (MR_hl_field(0, Info_7, (MR_Integer) 1));
  MR_String AnalysisFileName_13;
  MR_Word InputResult_14;
  MR_Word Appended_23;
  MR_Word Var_30;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_64, (MR_Integer) 0)), (MR_Integer) 9))));
  MR_Box conv2_AnalysisFileName_13;
  MR_Box conv1_STATE_VARIABLE_IO_29_29;

  func_0(((MR_Box) (TypeClassInfo_for_compiler_64)), Compiler_12, ((MR_Box) (Globals_8)), ((MR_Box) (((MR_Box) ((MR_String) ".request")))), ((MR_Box) (ModuleName_9)), &conv2_AnalysisFileName_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29_29);
  AnalysisFileName_13 = ((MR_String) (conv2_AnalysisFileName_13));
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&analysis__file_scalar_common_4[0]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (AnalysisFileName_13));
  }
  analysis__debug_msg_3_p_0(Var_30);
  mercury__io__open_input_4_p_0(AnalysisFileName_13, &InputResult_14);
  if (((MR_tag((MR_Word) InputResult_14)) == (MR_Integer) 1))
    Appended_23 = (MR_Integer) 0;
  else
  {
    MR_Word InputStream_15 = ((MR_Word) ((MR_hl_field(0, InputResult_14, (MR_Integer) 0))));
    MR_Word VersionResult_16;
    MR_Word NumberTerm_18;
    MR_Integer Var_44;
    MR_Integer Var_78;

    mercury__mercury_term_parser__read_term_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), InputStream_15, &VersionResult_16);
    mercury__io__close_input_3_p_0(InputStream_15);
    succeeded = ((MR_tag((MR_Word) VersionResult_16)) == (MR_Integer) 2);
    if (succeeded)
    {
      NumberTerm_18 = ((MR_Word) ((MR_hl_field(2, VersionResult_16, (MR_Integer) 1))));
      Var_44 = (MR_Integer) 6;
      succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NumberTerm_18, &Var_78);
      if (succeeded)
        succeeded = (Var_44 == Var_78);
    }
    if (succeeded)
    {
      MR_Word AppendResult_19;

      mercury__io__open_append_4_p_0(AnalysisFileName_13, &AppendResult_19);
      if (((MR_tag((MR_Word) AppendResult_19)) == (MR_Integer) 1))
        Appended_23 = (MR_Integer) 0;
      else
      {
        MR_Word AppendStream_20 = ((MR_Word) ((MR_hl_field(0, AppendResult_19, (MR_Integer) 0))));
        MR_Word OldOutputStream_21;
        MR_Word Var_47;
        MR_Word Var_80;
        MR_Box conv3_STATE_VARIABLE_IO_48_48;
        MR_Word Var_22;

        mercury__io__set_output_stream_4_p_0(AppendStream_20, &OldOutputStream_21);
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_47, 0) = ((MR_Box) (&analysis__file_scalar_common_11[1]));
          MR_hl_field(0, Var_47, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_2));
          MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_47, 3) = ((MR_Box) (TypeClassInfo_for_compiler_64));
          MR_hl_field(0, Var_47, 4) = Compiler_12;
        }
        {
          Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_80, 0) = ((MR_Box) (&analysis__file_scalar_common_7[1]));
          MR_hl_field(0, Var_80, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_3));
          MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_80, 3) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0));
          MR_hl_field(0, Var_80, 4) = ((MR_Box) (Var_47));
        }
        mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_80, ModuleRequests_10, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_48_48);
        mercury__io__set_output_stream_4_p_0(OldOutputStream_21, &Var_22);
        mercury__io__close_output_3_p_0(AppendStream_20);
        Appended_23 = (MR_Integer) 1;
      }
    }
    else
      Appended_23 = (MR_Integer) 0;
  }
  switch (Appended_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_51;
        MR_Word OpenResult_88;

        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_51, 0) = ((MR_Box) (&analysis__file_scalar_common_11[1]));
          MR_hl_field(0, Var_51, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_4));
          MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_51, 3) = ((MR_Box) (TypeClassInfo_for_compiler_64));
          MR_hl_field(0, Var_51, 4) = Compiler_12;
        }
        mercury__io__open_output_4_p_0(AnalysisFileName_13, &OpenResult_88);
        if (((MR_tag((MR_Word) OpenResult_88)) == (MR_Integer) 1))
        {
          MR_Word IOError_92 = ((MR_Word) ((MR_hl_field(1, OpenResult_88, (MR_Integer) 0))));
          MR_String Var_102;
          MR_String Var_104;
          MR_String Var_105;
          MR_String Var_107;

          Var_107 = mercury__io__error_message_1_f_0(IOError_92);
          Var_105 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", Var_107);
          Var_104 = mercury__string__f_43_43_2_f_0(AnalysisFileName_13, Var_105);
          Var_102 = mercury__string__f_43_43_2_f_0((MR_String) "error opening \140", Var_104);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.write_analysis_file\'/5", Var_102);
            return;
          }
        }
        else
        {
          MR_Word Stream_89 = ((MR_Word) ((MR_hl_field(0, OpenResult_88, (MR_Integer) 0))));
          MR_Word OldOutput_90;
          MR_Word Var_108;
          MR_Box conv4_STATE_VARIABLE_IO_23_99;
          MR_Word Var_91;

          mercury__io__set_output_stream_4_p_0(Stream_89, &OldOutput_90);
          mercury__io__write_int_3_p_0((MR_Integer) 6);
          mercury__io__write_string_3_p_0((MR_String) ".\n");
          {
            Var_108 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_108, 0) = ((MR_Box) (&analysis__file_scalar_common_7[1]));
            MR_hl_field(0, Var_108, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_5));
            MR_hl_field(0, Var_108, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_108, 3) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0));
            MR_hl_field(0, Var_108, 4) = ((MR_Box) (Var_51));
          }
          mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_108, ModuleRequests_10, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_23_99);
          mercury__io__set_output_stream_4_p_0(OldOutput_90, &Var_91);
          mercury__io__close_output_3_p_0(Stream_89);
        }
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  analysis__file__IntroducedFrom__pred__read_analysis_file__769__1_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), (MR_hl_field(0, closure, (MR_Integer) 5)), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), wrapper_arg_1);
}

static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  analysis__file__IntroducedFrom__pred__read_analysis_file__762__1_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  analysis__file__IntroducedFrom__pred__read_analysis_file__785__1_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  analysis__file__IntroducedFrom__pred__find_and_read_analysis_file__744__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
}

static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Requests_35;

  analysis__file__parse_request_entry_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Requests_35);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Requests_35));
}

void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * ModuleRequests_10)
{
  MR_Word TypeClassInfo_for_compiler_42 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
  MR_Box Var_14 = (MR_hl_field(0, Info_7, (MR_Integer) 1));
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word MaybeAnalysisFileName_47;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv3_MaybeAnalysisFileName_47;
  MR_Box conv2_STATE_VARIABLE_IO_24_50;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&analysis__file_scalar_common_6[3]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (analysis__file__read_module_analysis_requests_6_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (TypeClassInfo_for_compiler_42));
    MR_hl_field(0, Var_15, 4) = Var_14;
  }
  Var_16 = (MR_Word) (((MR_Box) ((MR_String) ".request")));
  Var_17 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[2]));
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_42, (MR_Integer) 0)), (MR_Integer) 8))));
  func_1(((MR_Box) (TypeClassInfo_for_compiler_42)), Var_14, ((MR_Box) (Globals_8)), ((MR_Box) (Var_16)), ((MR_Box) (ModuleName_9)), &conv3_MaybeAnalysisFileName_47, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_24_50);
  MaybeAnalysisFileName_47 = ((MR_Word) (conv3_MaybeAnalysisFileName_47));
  if (((MR_tag((MR_Word) MaybeAnalysisFileName_47)) == (MR_Integer) 1))
  {
    MR_String Message_49 = ((MR_String) ((MR_hl_field(1, MaybeAnalysisFileName_47, (MR_Integer) 0))));
    MR_Word Var_51;

    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (&analysis__file_scalar_common_6[4]));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) (analysis__file__read_module_analysis_requests_6_p_0_2));
      MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_51, 3) = ((MR_Box) (Var_16));
      MR_hl_field(0, Var_51, 4) = ((MR_Box) (ModuleName_9));
      MR_hl_field(0, Var_51, 5) = ((MR_Box) (Message_49));
    }
    analysis__debug_msg_3_p_0(Var_51);
    *ModuleRequests_10 = Var_17;
  }
  else
  {
    MR_String AnalysisFileName_48 = ((MR_String) ((MR_hl_field(0, MaybeAnalysisFileName_47, (MR_Integer) 0))));
    MR_Word OpenResult_52;

    mercury__io__open_input_4_p_0(AnalysisFileName_48, &OpenResult_52);
    if (((MR_tag((MR_Word) OpenResult_52)) == (MR_Integer) 1))
    {
      MR_Word Var_60;

      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_60, 0) = ((MR_Box) (&analysis__file_scalar_common_4[0]));
        MR_hl_field(0, Var_60, 1) = ((MR_Box) (analysis__file__read_module_analysis_requests_6_p_0_3));
        MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_60, 3) = ((MR_Box) (AnalysisFileName_48));
      }
      analysis__debug_msg_3_p_0(Var_60);
      *ModuleRequests_10 = Var_17;
    }
    else
    {
      MR_Word Stream_53 = ((MR_Word) ((MR_hl_field(0, OpenResult_52, (MR_Integer) 0))));
      MR_Word Result_54;
      MR_Word Var_56;
      MR_Word Var_58;

      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_56, 0) = ((MR_Box) (&analysis__file_scalar_common_4[0]));
        MR_hl_field(0, Var_56, 1) = ((MR_Box) (analysis__file__read_module_analysis_requests_6_p_0_4));
        MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_56, 3) = ((MR_Box) (AnalysisFileName_48));
      }
      analysis__debug_msg_3_p_0(Var_56);
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_58, 0) = ((MR_Box) (&analysis__file_scalar_common_11[0]));
        MR_hl_field(0, Var_58, 1) = ((MR_Box) (analysis__file__read_module_analysis_requests_6_p_0_5));
        MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_58, 3) = ((MR_Box) (&analysis__file_scalar_common_2[3]));
        MR_hl_field(0, Var_58, 4) = ((MR_Box) (Var_15));
        MR_hl_field(0, Var_58, 5) = ((MR_Box) (Var_17));
        MR_hl_field(0, Var_58, 6) = ((MR_Box) (Stream_53));
      }
      mercury__exception__try_io_4_p_0((MR_Word) (&analysis__file_scalar_common_2[3]), Var_58, &Result_54);
      mercury__io__close_input_3_p_0(Stream_53);
      if (((MR_tag((MR_Word) Result_54)) == (MR_Integer) 2))
        {
          mercury__exception__rethrow_1_p_0((MR_Word) (&analysis__file_scalar_common_2[3]), Result_54);
          return;
        }
      else
        *ModuleRequests_10 = ((MR_Word) ((MR_hl_field(1, Result_54, (MR_Integer) 0))));
    }
  }
}

static MR_bool MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__file__dir_sep_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  analysis__file__write_analysis_file_3_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;

  analysis__file__write_result_entry_5_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
}

static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  analysis__file__IntroducedFrom__pred__write_module_analysis_results__447__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word ModuleResults_10)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_compiler_49;
  MR_String FileName_12;
  MR_Word UpdateResult_13;
  MR_String CacheDir_14;
  MR_Word Var_18;
  MR_Box Var_30;
  MR_String WriteFileName_57;
  MR_Word OpenResult_60;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_FileName_12;
  MR_Box conv1_STATE_VARIABLE_IO_23_58;

  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&analysis__file_scalar_common_4[1]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (analysis__file__write_module_analysis_results_6_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (ModuleName_9));
  }
  analysis__debug_msg_3_p_0(Var_18);
  TypeClassInfo_for_compiler_49 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
  Var_30 = (MR_hl_field(0, Info_7, (MR_Integer) 1));
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_49, (MR_Integer) 0)), (MR_Integer) 9))));
  func_0(((MR_Box) (TypeClassInfo_for_compiler_49)), Var_30, ((MR_Box) (Globals_8)), ((MR_Box) (((MR_Box) ((MR_String) ".analysis")))), ((MR_Box) (ModuleName_9)), &conv2_FileName_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_58);
  FileName_12 = ((MR_String) (conv2_FileName_12));
  WriteFileName_57 = mercury__string__f_43_43_2_f_0(FileName_12, (MR_String) ".tmp");
  mercury__io__open_output_4_p_0(WriteFileName_57, &OpenResult_60);
  if (((MR_tag((MR_Word) OpenResult_60)) == (MR_Integer) 1))
  {
    MR_Word IOError_64 = ((MR_Word) ((MR_hl_field(1, OpenResult_60, (MR_Integer) 0))));
    MR_String Var_74;
    MR_String Var_76;
    MR_String Var_77;
    MR_String Var_79;

    Var_79 = mercury__io__error_message_1_f_0(IOError_64);
    Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", Var_79);
    Var_76 = mercury__string__f_43_43_2_f_0(WriteFileName_57, Var_77);
    Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "error opening \140", Var_76);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.write_analysis_file\'/5", Var_74);
      return;
    }
  }
  else
  {
    MR_Word Stream_61 = ((MR_Word) ((MR_hl_field(0, OpenResult_60, (MR_Integer) 0))));
    MR_Word OldOutput_62;
    MR_Box conv3_STATE_VARIABLE_IO_23_71;
    MR_Word Var_63;

    mercury__io__set_output_stream_4_p_0(Stream_61, &OldOutput_62);
    mercury__io__write_int_3_p_0((MR_Integer) 6);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&analysis__file_scalar_common_10[0]), ModuleResults_10, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_23_71);
    mercury__io__set_output_stream_4_p_0(OldOutput_62, &Var_63);
    mercury__io__close_output_3_p_0(Stream_61);
  }
  parse_tree__module_cmds__update_interface_return_changed_6_p_0(Globals_8, ModuleName_9, FileName_12, &UpdateResult_13);
  libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 706, &CacheDir_14);
  succeeded = (strcmp(CacheDir_14, (MR_String) "") == 0);
  succeeded = !(succeeded);
  if (succeeded)
    succeeded = (UpdateResult_13 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_String CacheFileName_15;
    MR_Word Components_88;
    MR_String EscFileName_89;

    Components_88 = mercury__string__split_at_separator_2_f_0((MR_Word) (&analysis__file_scalar_common_2[9]), FileName_12);
    EscFileName_89 = mercury__string__join_list_2_f_0((MR_String) ":", Components_88);
    CacheFileName_15 = mercury__dir__f_slash_2_f_0(CacheDir_14, EscFileName_89);
    analysis__file__write_analysis_cache_file_4_p_0(CacheFileName_15, ModuleResults_10);
  }
}

static void MR_CALL 
analysis__file__read_module_analysis_results_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Univ_12;
  MR_Integer conv3_STATE_VARIABLE_State_23;

  analysis__file__unpickle_analysis_result_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Word) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_Univ_12, ((MR_Integer) (wrapper_arg_5)), &conv3_STATE_VARIABLE_State_23);
  *wrapper_arg_4 = ((MR_Box) (conv4_Univ_12));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_State_23));
}

static MR_bool MR_CALL 
analysis__file__read_module_analysis_results_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__file__dir_sep_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

void MR_CALL 
analysis__file__read_module_analysis_results_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * ModuleResults_10)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_compiler_56 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
  MR_Box Compiler_12 = (MR_hl_field(0, Info_7, (MR_Integer) 1));
  MR_Word MaybeAnalysisFileName_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_56, (MR_Integer) 0)), (MR_Integer) 8))));
  MR_Box conv2_MaybeAnalysisFileName_13;
  MR_Box conv1_STATE_VARIABLE_IO_30_30;

  func_0(((MR_Box) (TypeClassInfo_for_compiler_56)), Compiler_12, ((MR_Box) (Globals_8)), ((MR_Box) (((MR_Box) ((MR_String) ".analysis")))), ((MR_Box) (ModuleName_9)), &conv2_MaybeAnalysisFileName_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_30_30);
  MaybeAnalysisFileName_13 = ((MR_Word) (conv2_MaybeAnalysisFileName_13));
  if (((MR_tag((MR_Word) MaybeAnalysisFileName_13)) == (MR_Integer) 1))
    *ModuleResults_10 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[0]));
  else
  {
    MR_String AnalysisFileName_14 = ((MR_String) ((MR_hl_field(0, MaybeAnalysisFileName_13, (MR_Integer) 0))));
    MR_String CacheDir_15;

    libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 706, &CacheDir_15);
    succeeded = (strcmp(CacheDir_15, (MR_String) "") == 0);
    if (succeeded)
      analysis__file__read_module_analysis_results_2_5_p_0(TypeClassInfo_for_compiler_56, Compiler_12, AnalysisFileName_14, ModuleResults_10);
    else
    {
      MR_String CacheFileName_16;
      MR_Word AnalysisTimeResult_17;
      MR_Word CacheTimeResult_18;
      MR_Word Components_70;
      MR_String EscFileName_71;
      MR_Word AnalysisTime_19;
      MR_Word CacheTime_20;
      MR_Word Var_68;

      Components_70 = mercury__string__split_at_separator_2_f_0((MR_Word) (&analysis__file_scalar_common_2[7]), AnalysisFileName_14);
      EscFileName_71 = mercury__string__join_list_2_f_0((MR_String) ":", Components_70);
      CacheFileName_16 = mercury__dir__f_slash_2_f_0(CacheDir_15, EscFileName_71);
      mercury__io__file__file_modification_time_4_p_0(AnalysisFileName_14, &AnalysisTimeResult_17);
      mercury__io__file__file_modification_time_4_p_0(CacheFileName_16, &CacheTimeResult_18);
      succeeded = ((MR_tag((MR_Word) AnalysisTimeResult_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        AnalysisTime_19 = ((MR_Word) ((MR_hl_field(0, AnalysisTimeResult_17, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) CacheTimeResult_18)) == (MR_Integer) 0);
        if (succeeded)
        {
          CacheTime_20 = ((MR_Word) ((MR_hl_field(0, CacheTimeResult_18, (MR_Integer) 0))));
          mercury__time____Compare____time_t_0_0(&Var_68, CacheTime_20, AnalysisTime_19);
          succeeded = (Var_68 != (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word Unpicklers_21;
        MR_Word UnpickleResult_22;
        MR_Word Type_75;
        MR_Word STATE_VARIABLE_Unpicklers_7_76;
        MR_Word Var_80;
        MR_Word Var_81;

        STATE_VARIABLE_Unpicklers_7_76 = libs__pickle__init_unpicklers_0_f_0();
        Var_80 = mercury__type_desc__type_of_1_f_0((MR_Word) (&analysis__analysis__type_ctor_info_some_analysis_result_0));
        Type_75 = mercury__type_desc__type_ctor_1_f_0(Var_80);
        {
          Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_81, 0) = ((MR_Box) (&analysis__file_scalar_common_9[0]));
          MR_hl_field(0, Var_81, 1) = ((MR_Box) (analysis__file__read_module_analysis_results_6_p_0_2));
          MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_81, 3) = ((MR_Box) (TypeClassInfo_for_compiler_56));
          MR_hl_field(0, Var_81, 4) = Compiler_12;
        }
        libs__pickle__register_unpickler_4_p_0(Type_75, Var_81, STATE_VARIABLE_Unpicklers_7_76, &Unpicklers_21);
        libs__pickle__unpickle_from_file_5_p_0((MR_Word) (&analysis__file_scalar_common_2[1]), Unpicklers_21, CacheFileName_16, &UnpickleResult_22);
        if (((MR_tag((MR_Word) UnpickleResult_22)) == (MR_Integer) 1))
        {
          MR_Word Error_23 = ((MR_Word) ((MR_hl_field(1, UnpickleResult_22, (MR_Integer) 0))));
          MR_Word ErrorStream_24;
          MR_String ErrorMsg_25;

          libs__globals__get_error_output_stream_5_p_0(Globals_8, ModuleName_9, &ErrorStream_24);
          mercury__io__error_message_2_p_0(Error_23, &ErrorMsg_25);
          mercury__io__write_string_4_p_0(ErrorStream_24, (MR_String) "Error reading ");
          mercury__io__write_string_4_p_0(ErrorStream_24, CacheFileName_16);
          mercury__io__write_string_4_p_0(ErrorStream_24, (MR_String) ": ");
          mercury__io__write_string_4_p_0(ErrorStream_24, ErrorMsg_25);
          mercury__io__write_string_4_p_0(ErrorStream_24, (MR_String) "\n");
          analysis__file__read_module_analysis_results_2_5_p_0(TypeClassInfo_for_compiler_56, Compiler_12, AnalysisFileName_14, ModuleResults_10);
          analysis__file__write_analysis_cache_file_4_p_0(CacheFileName_16, *ModuleResults_10);
        }
        else
          *ModuleResults_10 = ((MR_Word) ((MR_hl_field(0, UnpickleResult_22, (MR_Integer) 0))));
      }
      else
      {
        analysis__file__read_module_analysis_results_2_5_p_0(TypeClassInfo_for_compiler_56, Compiler_12, AnalysisFileName_14, ModuleResults_10);
        analysis__file__write_analysis_cache_file_4_p_0(CacheFileName_16, *ModuleResults_10);
      }
    }
  }
}

static void MR_CALL 
analysis__file__write_analysis_cache_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;

  analysis__file__pickle_analysis_result_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
}

static void MR_CALL 
analysis__file__write_analysis_cache_file_4_p_0(
  MR_String CacheFileName_5,
  MR_Word ModuleResults_6)
{
  MR_String TmpFileName_8;
  MR_Word TmpFileResult_9;

  TmpFileName_8 = mercury__string__f_43_43_2_f_0(CacheFileName_5, (MR_String) ".tmp");
  mercury__io__open_binary_output_4_p_0(TmpFileName_8, &TmpFileResult_9);
  if (((MR_tag((MR_Word) TmpFileResult_9)) == (MR_Integer) 1))
  {
    MR_String Var_32;
    MR_Word Error_33 = ((MR_Word) ((MR_hl_field(1, TmpFileResult_9, (MR_Integer) 0))));

    Var_32 = mercury__io__error_message_1_f_0(Error_33);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.write_analysis_cache_file\'/4", Var_32);
      return;
    }
  }
  else
  {
    MR_Word TmpFileStream_10 = ((MR_Word) ((MR_hl_field(0, TmpFileResult_9, (MR_Integer) 0))));
    MR_Word RenameRes_11;
    MR_Word Var_18;
    MR_Word Type_43;
    MR_Word STATE_VARIABLE_Pickles_5_44;
    MR_Word Var_48;

    STATE_VARIABLE_Pickles_5_44 = libs__pickle__init_picklers_0_f_0();
    Var_48 = mercury__type_desc__type_of_1_f_0((MR_Word) (&analysis__analysis__type_ctor_info_some_analysis_result_0));
    Type_43 = mercury__type_desc__type_ctor_1_f_0(Var_48);
    libs__pickle__register_pickler_4_p_0(Type_43, (MR_Word) (&analysis__file_scalar_common_2[6]), STATE_VARIABLE_Pickles_5_44, &Var_18);
    libs__pickle__pickle_5_p_0((MR_Word) (&analysis__file_scalar_common_2[1]), TmpFileStream_10, Var_18, ((MR_Box) (ModuleResults_6)));
    mercury__io__close_binary_output_3_p_0(TmpFileStream_10);
    mercury__io__file__rename_file_5_p_0(TmpFileName_8, CacheFileName_5, &RenameRes_11);
    if (!((RenameRes_11 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Error_12 = ((MR_Word) ((MR_hl_field(1, RenameRes_11, (MR_Integer) 0))));
      MR_String Var_28;
      MR_Word Var_13;

      Var_28 = mercury__io__error_message_1_f_0(Error_12);
      mercury__io__write_string_3_p_0((MR_String) "Error renaming ");
      mercury__io__write_string_3_p_0(CacheFileName_5);
      mercury__io__write_string_3_p_0((MR_String) ": ");
      mercury__io__write_string_3_p_0(Var_28);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      mercury__io__file__remove_file_4_p_0(TmpFileName_8, &Var_13);
    }
  }
}

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_53;

  analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__377__1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), &conv1_HeadVar__4_53);
  *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__4_53));
}

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Results_37;

  analysis__file__parse_result_entry_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Results_37);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Results_37));
}

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__368__1_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__390__1_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0(
  MR_Word TypeClassInfo_for_compiler_50,
  MR_Box Compiler_6,
  MR_String AnalysisFileName_7,
  MR_Word * ModuleResults_8)
{
  MR_bool succeeded;
  MR_Word ModuleResults0_10;
  MR_Word OpenResult_11;

  ModuleResults0_10 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[0]));
  mercury__io__open_input_4_p_0(AnalysisFileName_7, &OpenResult_11);
  if (((MR_tag((MR_Word) OpenResult_11)) == (MR_Integer) 1))
  {
    MR_Word Var_35;

    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&analysis__file_scalar_common_4[0]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (analysis__file__read_module_analysis_results_2_5_p_0_1));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) (AnalysisFileName_7));
    }
    analysis__debug_msg_3_p_0(Var_35);
    *ModuleResults_8 = ModuleResults0_10;
  }
  else
  {
    MR_Word Stream_12 = ((MR_Word) ((MR_hl_field(0, OpenResult_11, (MR_Integer) 0))));
    MR_Word Results_13;
    MR_Word Var_19;
    MR_Word TermResult_62;
    MR_Word NumberTerm_64;
    MR_Integer Var_67;
    MR_Integer Var_74;
    MR_Word Var_31;
    MR_Word Var_33;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&analysis__file_scalar_common_4[0]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (analysis__file__read_module_analysis_results_2_5_p_0_2));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (AnalysisFileName_7));
    }
    analysis__debug_msg_3_p_0(Var_19);
    mercury__mercury_term_parser__read_term_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Stream_12, &TermResult_62);
    succeeded = ((MR_tag((MR_Word) TermResult_62)) == (MR_Integer) 2);
    if (succeeded)
    {
      NumberTerm_64 = ((MR_Word) ((MR_hl_field(2, TermResult_62, (MR_Integer) 1))));
      Var_67 = (MR_Integer) 6;
      succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NumberTerm_64, &Var_74);
      if (succeeded)
        succeeded = (Var_67 == Var_74);
    }
    if (!(succeeded))
    {
      MR_String Msg_65;
      MR_String Var_69;
      MR_Word Var_70;

      Var_69 = mercury__string__string_1_f_0((MR_Word) (&analysis__file_scalar_common_1[4]), ((MR_Box) (TermResult_62)));
      Msg_65 = mercury__string__f_43_43_2_f_0((MR_String) "bad analysis file version: ", Var_69);
      Var_70 = (MR_Word) (Msg_65);
      {
        mercury__exception__throw_1_p_0((MR_Word) (&analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0), ((MR_Box) (Var_70)));
        return;
      }
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_33, 0) = ((MR_Box) (&analysis__file_scalar_common_6[0]));
      MR_hl_field(0, Var_33, 1) = ((MR_Box) (analysis__file__read_module_analysis_results_2_5_p_0_3));
      MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_33, 3) = ((MR_Box) (TypeClassInfo_for_compiler_50));
      MR_hl_field(0, Var_33, 4) = Compiler_6;
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = ((MR_Box) (&analysis__file_scalar_common_7[0]));
      MR_hl_field(0, Var_31, 1) = ((MR_Box) (analysis__file__read_module_analysis_results_2_5_p_0_4));
      MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_31, 3) = ((MR_Box) (ModuleResults0_10));
      MR_hl_field(0, Var_31, 4) = ((MR_Box) (Stream_12));
      MR_hl_field(0, Var_31, 5) = ((MR_Box) (Var_33));
    }
    mercury__exception__try_io_4_p_0((MR_Word) (&analysis__file_scalar_common_2[1]), Var_31, &Results_13);
    mercury__io__close_input_3_p_0(Stream_12);
    if (((MR_tag((MR_Word) Results_13)) == (MR_Integer) 2))
      {
        mercury__exception__rethrow_1_p_0((MR_Word) (&analysis__file_scalar_common_2[1]), Results_13);
        return;
      }
    else
      *ModuleResults_8 = ((MR_Word) ((MR_hl_field(1, Results_13, (MR_Integer) 0))));
  }
}

void MR_CALL 
analysis__file__write_module_overall_status_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word Status_10)
{
  MR_Word TypeClassInfo_for_compiler_40 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
  MR_String FileName_12;
  MR_Word OpenResult_13;
  MR_Box Var_18 = (MR_hl_field(0, Info_7, (MR_Integer) 1));
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_40, (MR_Integer) 0)), (MR_Integer) 9))));
  MR_Box conv2_FileName_12;
  MR_Box conv1_STATE_VARIABLE_IO_20_20;

  func_0(((MR_Box) (TypeClassInfo_for_compiler_40)), Var_18, ((MR_Box) (Globals_8)), ((MR_Box) (((MR_Box) ((MR_String) ".analysis_status")))), ((MR_Box) (ModuleName_9)), &conv2_FileName_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
  FileName_12 = ((MR_String) (conv2_FileName_12));
  mercury__io__open_output_4_p_0(FileName_12, &OpenResult_13);
  if (((MR_tag((MR_Word) OpenResult_13)) == (MR_Integer) 1))
  {
    MR_Word IOError_15 = ((MR_Word) ((MR_hl_field(1, OpenResult_13, (MR_Integer) 0))));
    MR_String Var_30;

    Var_30 = mercury__io__error_message_1_f_0(IOError_15);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.write_module_overall_status\'/6", Var_30);
      return;
    }
  }
  else
  {
    MR_Word Stream_14 = ((MR_Word) ((MR_hl_field(0, OpenResult_13, (MR_Integer) 0))));

    switch (Status_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_14, (MR_String) "invalid.\n");
        break;
      case (MR_Integer) 2:
        mercury__io__write_string_4_p_0(Stream_14, (MR_String) "optimal.\n");
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_14, (MR_String) "suboptimal.\n");
        break;
    }
    mercury__io__close_output_3_p_0(Stream_14);
  }
}

void MR_CALL 
analysis__file__read_module_overall_status_6_p_0(
  MR_Word TypeClassInfo_for_compiler_25,
  MR_Box Compiler_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * ModuleStatus_10)
{
  MR_bool succeeded;
  MR_Word MaybeFileName_12;
  MR_Word ModuleStatus0_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_25, (MR_Integer) 0)), (MR_Integer) 8))));
  MR_Box conv2_MaybeFileName_12;
  MR_Box conv1_STATE_VARIABLE_IO_22_22;

  func_0(((MR_Box) (TypeClassInfo_for_compiler_25)), Compiler_7, ((MR_Box) (Globals_8)), ((MR_Box) (((MR_Box) ((MR_String) ".analysis_status")))), ((MR_Box) (ModuleName_9)), &conv2_MaybeFileName_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_22_22);
  MaybeFileName_12 = ((MR_Word) (conv2_MaybeFileName_12));
  if (((MR_tag((MR_Word) MaybeFileName_12)) == (MR_Integer) 1))
    ModuleStatus0_14 = (MR_Integer) 2;
  else
  {
    MR_String FileName_13 = ((MR_String) ((MR_hl_field(0, MaybeFileName_12, (MR_Integer) 0))));
    MR_Word OpenResult_27;

    mercury__io__open_input_4_p_0(FileName_13, &OpenResult_27);
    if (((MR_tag((MR_Word) OpenResult_27)) == (MR_Integer) 1))
    {
      MR_String Var_44;
      MR_Word IOError_45 = ((MR_Word) ((MR_hl_field(1, OpenResult_27, (MR_Integer) 0))));

      Var_44 = mercury__io__error_message_1_f_0(IOError_45);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.read_module_overall_status_2\'/4", Var_44);
        return;
      }
    }
    else
    {
      MR_Word Stream_28 = ((MR_Word) ((MR_hl_field(0, OpenResult_27, (MR_Integer) 0))));
      MR_Word ReadResult_29;

      mercury__io__read_line_as_string_4_p_0(Stream_28, &ReadResult_29);
      mercury__io__close_input_3_p_0(Stream_28);
      switch (MR_tag((MR_Word) ReadResult_29)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.read_module_overall_status_2\'/4", (MR_String) "unexpected eof");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String String_30 = ((MR_String) ((MR_hl_field(1, ReadResult_29, (MR_Integer) 0))));

            succeeded = mercury__string__prefix_2_p_0(String_30, (MR_String) "optimal.");
            if (succeeded)
              ModuleStatus0_14 = (MR_Integer) 2;
            else
            {
              succeeded = mercury__string__prefix_2_p_0(String_30, (MR_String) "suboptimal.");
              if (succeeded)
                ModuleStatus0_14 = (MR_Integer) 1;
              else
              {
                succeeded = mercury__string__prefix_2_p_0(String_30, (MR_String) "invalid.");
                if (succeeded)
                  ModuleStatus0_14 = (MR_Integer) 0;
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.read_module_overall_status_2\'/4", (MR_String) "unexpected line");
                    return;
                  }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word IOError_31 = ((MR_Word) ((MR_hl_field(2, ReadResult_29, (MR_Integer) 0))));
            MR_String Var_42;

            Var_42 = mercury__io__error_message_1_f_0(IOError_31);
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.read_module_overall_status_2\'/4", Var_42);
              return;
            }
          }
          break;
      }
    }
  }
  switch (ModuleStatus0_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *ModuleStatus_10 = ModuleStatus0_14;
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybeRequestFileName_16;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_25, (MR_Integer) 0)), (MR_Integer) 8))));
        MR_Box conv5_MaybeRequestFileName_16;
        MR_Box conv4_STATE_VARIABLE_IO_20;

        func_3(((MR_Box) (TypeClassInfo_for_compiler_25)), Compiler_7, ((MR_Box) (Globals_8)), ((MR_Box) (((MR_Box) ((MR_String) ".request")))), ((MR_Box) (ModuleName_9)), &conv5_MaybeRequestFileName_16, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_20);
        MaybeRequestFileName_16 = ((MR_Word) (conv5_MaybeRequestFileName_16));
        if (((MR_tag((MR_Word) MaybeRequestFileName_16)) == (MR_Integer) 1))
          *ModuleStatus_10 = ModuleStatus0_14;
        else
          *ModuleStatus_10 = (MR_Integer) 1;
      }
      break;
  }
}

static MR_bool MR_CALL 
analysis__file____Unify____dummy_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis__file____Unify____dummy_answer_0_0();
  return succeeded;
}

static void MR_CALL 
analysis__file____Compare____dummy_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__file____Compare____dummy_answer_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__file____Unify____invalid_analysis_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis__file____Unify____invalid_analysis_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis__file____Compare____invalid_analysis_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__file____Compare____invalid_analysis_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__file____Unify____maybe_add_dot_temp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis__file____Unify____maybe_add_dot_temp_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis__file____Compare____maybe_add_dot_temp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__file____Compare____maybe_add_dot_temp_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__file____Unify____parse_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = analysis__file____Unify____parse_entry_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
analysis__file____Compare____parse_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__file____Compare____parse_entry_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__file____Unify____write_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = analysis__file____Unify____write_entry_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
analysis__file____Compare____write_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__file____Compare____write_entry_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_3;

  conv0_Term_3 = analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0();
  wrapper_arg_2 = ((MR_Box) (conv0_Term_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0();
  return succeeded;
}

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0();
  return succeeded;
}

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0();
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;

  analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0();
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;

  analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0();
  return wrapper_arg_3;
}

static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
}

void mercury__analysis__file__init(void)
{
}

void mercury__analysis__file__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&analysis__file__analysis__file__type_ctor_info_dummy_answer_0);
	MR_register_type_ctor_info(&analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0);
	MR_register_type_ctor_info(&analysis__file__analysis__file__type_ctor_info_maybe_add_dot_temp_0);
	MR_register_type_ctor_info(&analysis__file__analysis__file__type_ctor_info_parse_entry_1);
	MR_register_type_ctor_info(&analysis__file__analysis__file__type_ctor_info_write_entry_1);
}

void mercury__analysis__file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__analysis__file__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module analysis.file.
