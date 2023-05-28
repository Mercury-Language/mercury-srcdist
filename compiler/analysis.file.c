/*
** Automatically generated from `analysis.file.m'
** by the Mercury compiler,
** version rotd-2023-05-28
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
#include "libs.maybe_util.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_VA_PseudoTypeInfo_Struct6 analysis__file____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_analysis_request_0;

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

static const MR_EnumFunctorDesc analysis__file__analysis__file__enum_functor_desc_dummy_answer_0_0;

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_ordinal_ordered_dummy_answer_0[1];

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_name_ordered_dummy_answer_0[1];

static const MR_Integer analysis__file__analysis__file__functor_number_map_dummy_answer_0[1];

static const MR_EnumFunctorDesc analysis__file__analysis__file__enum_functor_desc_maybe_add_dot_temp_0_0;

static const MR_EnumFunctorDesc analysis__file__analysis__file__enum_functor_desc_maybe_add_dot_temp_0_1;

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_ordinal_ordered_maybe_add_dot_temp_0[2];

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_name_ordered_maybe_add_dot_temp_0[2];

static const MR_Integer analysis__file__analysis__file__functor_number_map_maybe_add_dot_temp_0[2];

static const MR_FA_TypeInfo_Struct1 analysis__file__varset__ti_varset_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 analysis__file__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_VA_PseudoTypeInfo_Struct6 analysis__file____vpti_pred_6__plain_varset__ti_varset_1term__type_ctor_info_generic_0__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_module_analysis_func__994__1_8_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word OutStream_8,
  MR_Word WriteEntry_9,
  MR_String AnalysisName_10,
  MR_Word FuncId_11,
  MR_Box LambdaHeadVar__1_20);

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
analysis__file__write_module_analysis_func_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__file__write_module_analysis_func_7_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word OutStream_8,
  MR_Word WriteEntry_9,
  MR_String AnalysisName_10,
  MR_Word FuncId_11,
  MR_Word FuncResultList_12);

static void MR_CALL 
analysis__file__write_module_analysis_map_entry_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
analysis__file__write_module_analysis_map_entry_6_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word OutStream_7,
  MR_Word WriteEntry_8,
  MR_String AnalysisName_9,
  MR_Word FuncResults_10);

static void MR_CALL 
analysis__file__write_imdg_arc_7_p_0(
  MR_Word TypeClassInfo_for_compiler_46,
  MR_Box Compiler_8,
  MR_Word OutStream_9,
  MR_String AnalysisName_10,
  MR_Word FuncId_11,
  MR_Word Arc_12);

static void MR_CALL 
analysis__file__parse_imdg_arc_7_p_0(
  MR_Word TypeClassInfo_for_compiler_76,
  MR_Box Compiler_8,
  MR_Word VarSet_9,
  MR_Word Term_10,
  MR_Word STATE_VARIABLE_Arcs_0_41,
  MR_Word * STATE_VARIABLE_Arcs_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44);

static void MR_CALL 
analysis__file__write_request_entry_7_p_0(
  MR_Word TypeClassInfo_for_compiler_46,
  MR_Box Compiler_8,
  MR_Word OutStream_9,
  MR_String AnalysisName_10,
  MR_Word FuncId_11,
  MR_Word Request_12);

static void MR_CALL 
analysis__file__parse_request_entry_7_p_0(
  MR_Word TypeClassInfo_for_compiler_76,
  MR_Box Compiler_8,
  MR_Word VarSet_9,
  MR_Word Term_10,
  MR_Word STATE_VARIABLE_Requests_0_41,
  MR_Word * STATE_VARIABLE_Requests_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44);

static void MR_CALL 
analysis__file__write_result_entry_6_p_0(
  MR_Word OutStream_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Word Result_10);

static MR_String MR_CALL 
analysis__file__func_id_to_string_1_f_0(
  MR_Word FuncId_3);

static void MR_CALL 
analysis__file__parse_result_entry_7_p_0(
  MR_Word TypeClassInfo_for_compiler_78,
  MR_Box Compiler_8,
  MR_Word VarSet_9,
  MR_Word Term_10,
  MR_Word STATE_VARIABLE_Results_0_43,
  MR_Word * STATE_VARIABLE_Results_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46);

static MR_bool MR_CALL 
analysis__file__parse_func_id_2_p_0(
  MR_Word Term_3,
  MR_Word * FuncId_4);

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
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
analysis__file__read_module_imdg_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
analysis__file__write_analysis_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
analysis__file__write_analysis_file_5_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_String FileName_6,
  MR_Word WriteEntry_7,
  MR_Word ModuleResults_8);

static void MR_CALL 
analysis__file__read_module_analysis_requests_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_97_110_100_95_114_101_97_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_95_91_49_93_95_48_11_p_0(
  MR_Word TypeClassInfo_for_compiler_47,
  MR_Box Compiler_12,
  MR_Word Globals_13,
  MR_Word ParseEntry_14,
  MR_Word OtherExt_15,
  MR_Word ModuleName_16,
  MR_Box STATE_VARIABLE_ModuleResults_0_26,
  MR_Box * STATE_VARIABLE_ModuleResults_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
analysis__file__check_analysis_file_version_number_9_p_0(
  MR_String FileName_10,
  MR_String FileStr_11,
  MR_Integer MaxOffset_12,
  MR_Word STATE_VARIABLE_LineContext_0_27,
  MR_Word * STATE_VARIABLE_LineContext_28,
  MR_Word STATE_VARIABLE_LinePosn_0_29,
  MR_Word * STATE_VARIABLE_LinePosn_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static MR_bool MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

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
analysis__file__read_module_analysis_results_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
analysis__file__read_module_analysis_results_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis__file__maybe_write_analysis_cache_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
analysis__file__maybe_write_analysis_cache_file_5_p_0(
  MR_String CacheFileName_6,
  MR_Word ModuleResults_7,
  MR_Word Specs_8);

static void MR_CALL 
analysis__file__do_read_module_analysis_results_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
analysis__file__do_read_module_analysis_results_6_p_0(
  MR_Word TypeClassInfo_for_compiler_51,
  MR_Box Compiler_7,
  MR_String AnalysisFileName_8,
  MR_Word * STATE_VARIABLE_ModuleResults_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_101_110_116_114_105_101_115_95_95_91_49_93_95_48_10_p_0(
  MR_String FileName_11,
  MR_String FileStr_12,
  MR_Integer MaxOffset_13,
  MR_Word ParseEntry_14,
  MR_Word STATE_VARIABLE_LineContext_0_30,
  MR_Word STATE_VARIABLE_LinePosn_0_31,
  MR_Box STATE_VARIABLE_Results_0_32,
  MR_Box * STATE_VARIABLE_Results_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35);

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


static /* final */ const MR_Box analysis__file_scalar_common_1[26][2];

static /* final */ const MR_Box analysis__file_scalar_common_2[9][3];

static /* final */ const MR_Box analysis__file_scalar_common_3[2][1];

static /* final */ const MR_Integer analysis__file_scalar_common_4[2][2];

static /* final */ const MR_Box analysis__file_scalar_common_5[8][11];

static /* final */ const MR_Box analysis__file_scalar_common_6[1][8];

static /* final */ const MR_Box analysis__file_scalar_common_7[1][4];

static /* final */ const MR_Box analysis__file_scalar_common_8[1][9];

static /* final */ const MR_Box analysis__file_scalar_common_9[1][10];




static /* final */ const MR_Box analysis__file_scalar_common_1[26][2] = {
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
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected a result entry, got"))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &analysis__file_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected a request entry, got"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected an imdb arc, got"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: version number mismatch."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Expected"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: this file"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should start with a version number"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(specifically,"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but it does not."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &analysis__file_scalar_common_1[5])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "),"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &analysis__file_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &analysis__file_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &analysis__file_scalar_common_1[22])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &analysis__file_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &analysis__file_scalar_common_1[24])))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_2[9][3] = {
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
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__file_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&analysis__file_scalar_common_6[0])),
    ((MR_Box) (analysis__file__maybe_write_analysis_cache_file_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&analysis__file_scalar_common_7[0])),
    ((MR_Box) (analysis__file__read_module_analysis_results_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&analysis__file_scalar_common_6[0])),
    ((MR_Box) (analysis__file__write_analysis_cache_file_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&analysis__file_scalar_common_8[0])),
    ((MR_Box) (analysis__file__write_module_analysis_results_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&analysis__file_scalar_common_7[0])),
    ((MR_Box) (analysis__file__write_module_analysis_results_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "dummy")) },
};

static /* final */ const MR_Integer analysis__file_scalar_common_4[2][2] = {
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

static /* final */ const MR_Box analysis__file_scalar_common_5[8][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&analysis__file__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&analysis__file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
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
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&analysis__file__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0)),
    ((MR_Box) (&analysis__file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&analysis__file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&analysis__file__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&analysis__file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&analysis__file____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__file__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&analysis__file____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_6[1][8] = {
  /* row   0 */
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
};

static /* final */ const MR_Box analysis__file_scalar_common_7[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_8[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_9[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&analysis__file____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "analysis.mh"
#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&analysis__analysis__type_ctor_info_some_analysis_result_0) }
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

static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_VA_PseudoTypeInfo_Struct6 analysis__file____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&analysis__analysis__type_ctor_info_func_id_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
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
  { (MR_TypeInfo) (&analysis__analysis__type_ctor_info_analysis_request_0) }
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

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&analysis__analysis__type_ctor_info_imdg_arc_0) }
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

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_ordinal_ordered_dummy_answer_0[1] = { &analysis__file__analysis__file__enum_functor_desc_dummy_answer_0_0 };

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_name_ordered_dummy_answer_0[1] = { &analysis__file__analysis__file__enum_functor_desc_dummy_answer_0_0 };

static const MR_Integer analysis__file__analysis__file__functor_number_map_dummy_answer_0[1] = { (MR_Integer) 0 };

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

static const MR_FA_TypeInfo_Struct1 analysis__file__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 analysis__file__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_VA_PseudoTypeInfo_Struct6 analysis__file____vpti_pred_6__plain_varset__ti_varset_1term__type_ctor_info_generic_0__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) (&analysis__file__varset__ti_varset_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&analysis__file__term__ti_term_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&analysis__file__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
    (MR_PseudoTypeInfo) (&analysis__file__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
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
  { (MR_PseudoTypeInfo) (&analysis__file____vpti_pred_6__plain_varset__ti_varset_1term__type_ctor_info_generic_0__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
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
  { (MR_PseudoTypeInfo) (&analysis__file____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
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
analysis__file__IntroducedFrom__pred__write_module_analysis_func__994__1_8_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word OutStream_8,
  MR_Word WriteEntry_9,
  MR_String AnalysisName_10,
  MR_Word FuncId_11,
  MR_Box LambdaHeadVar__1_20)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteEntry_9, (MR_Integer) 1))));
  MR_Box conv1_LambdaHeadVar__3_22;

  func_0(((MR_Box) (WriteEntry_9)), ((MR_Box) (OutStream_8)), ((MR_Box) (AnalysisName_10)), ((MR_Box) (FuncId_11)), LambdaHeadVar__1_20, ((MR_Box) ((MR_Integer) 0)), &conv1_LambdaHeadVar__3_22);
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
analysis__file__write_module_analysis_func_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  analysis__file__IntroducedFrom__pred__write_module_analysis_func__994__1_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), wrapper_arg_1);
}

static void MR_CALL 
analysis__file__write_module_analysis_func_7_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word OutStream_8,
  MR_Word WriteEntry_9,
  MR_String AnalysisName_10,
  MR_Word FuncId_11,
  MR_Word FuncResultList_12)
{
  MR_Word FuncResultListSorted_14;
  MR_Word Var_18;
  MR_Box conv0_STATE_VARIABLE_IO_17;

  mercury__list__sort_2_p_0(TypeInfo_for_T_29, FuncResultList_12, &FuncResultListSorted_14);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&analysis__file_scalar_common_5[7]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (analysis__file__write_module_analysis_func_7_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (TypeInfo_for_T_29));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (OutStream_8));
    MR_hl_field(0, Var_18, 5) = ((MR_Box) (WriteEntry_9));
    MR_hl_field(0, Var_18, 6) = ((MR_Box) (AnalysisName_10));
    MR_hl_field(0, Var_18, 7) = ((MR_Box) (FuncId_11));
  }
  mercury__list__foldl_4_p_2(TypeInfo_for_T_29, (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, FuncResultListSorted_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
}

static void MR_CALL 
analysis__file__write_module_analysis_map_entry_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  analysis__file__write_module_analysis_func_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
analysis__file__write_module_analysis_map_entry_6_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word OutStream_7,
  MR_Word WriteEntry_8,
  MR_String AnalysisName_9,
  MR_Word FuncResults_10)
{
  MR_Word TypeInfo_22_22;
  MR_Word Var_14;
  MR_Box conv0_STATE_VARIABLE_IO_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&analysis__file_scalar_common_5[6]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (analysis__file__write_module_analysis_map_entry_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeInfo_for_T_15));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (OutStream_7));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (WriteEntry_8));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (AnalysisName_9));
  }
  {
    TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_15));
  }
  mercury__map__foldl_4_p_2((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), TypeInfo_22_22, (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, FuncResults_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

static void MR_CALL 
analysis__file__write_imdg_arc_7_p_0(
  MR_Word TypeClassInfo_for_compiler_46,
  MR_Box Compiler_8,
  MR_Word OutStream_9,
  MR_String AnalysisName_10,
  MR_Word FuncId_11,
  MR_Word Arc_12)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_call_pattern_47 = ((MR_Word) ((MR_hl_field(0, Arc_12, (MR_Integer) 0))));
  MR_Word TypeClassInfo_for_to_term_50;
  MR_Box Call_14 = (MR_hl_field(0, Arc_12, (MR_Integer) 1));
  MR_Word DependentModule_15 = ((MR_Word) ((MR_hl_field(0, Arc_12, (MR_Integer) 2))));
  MR_Integer VersionNumber_20;
  MR_String FuncIdStr_23;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_String Var_58;
  MR_Word TypeClassInfo_for_analysis_48;
  MR_Word Analysis_16;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_46, (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_Analysis_16;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_Var_43;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_compiler_46)), Compiler_8, ((MR_Box) (AnalysisName_10)), &conv1_Analysis_16);
  if (succeeded)
  {
    Analysis_16 = ((MR_Word) (conv1_Analysis_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeClassInfo_for_analysis_48 = ((MR_Word) ((MR_hl_field(0, Analysis_16, (MR_Integer) 0))));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Box MR_CALL (* func_2)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_48, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv3_VersionNumber_20;

    conv3_VersionNumber_20 = func_2(((MR_Box) (TypeClassInfo_for_analysis_48)));
    VersionNumber_20 = ((MR_Integer) (conv3_VersionNumber_20));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.write_imdg_arc\'/7", (MR_String) "unknown analysis type");
      return;
    }
  FuncIdStr_23 = analysis__file__func_id_to_string_1_f_0(FuncId_11);
  parse_tree__parse_tree_out_sym_name__write_quoted_sym_name_4_p_0(OutStream_9, DependentModule_15);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) " -> ");
  mercury__io__write_string_4_p_0(OutStream_9, AnalysisName_10);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) "(");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&analysis__file_scalar_common_3[0]), VersionNumber_20, &Var_58);
  mercury__io__write_string_4_p_0(OutStream_9, Var_58);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) ", ");
  mercury__io__write_string_4_p_0(OutStream_9, FuncIdStr_23);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) ", ");
  Var_42 = mercury__varset__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0));
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_47, (MR_Integer) 2, &TypeClassInfo_for_to_term_50);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_50, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_43 = func_4(((MR_Box) (TypeClassInfo_for_to_term_50)), Call_14);
  Var_43 = ((MR_Word) (conv5_Var_43));
  mercury__term_io__write_term_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), OutStream_9, Var_42, Var_43);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) ").\n");
}

static void MR_CALL 
analysis__file__parse_imdg_arc_7_p_0(
  MR_Word TypeClassInfo_for_compiler_76,
  MR_Box Compiler_8,
  MR_Word VarSet_9,
  MR_Word Term_10,
  MR_Word STATE_VARIABLE_Arcs_0_41,
  MR_Word * STATE_VARIABLE_Arcs_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_10)) == (MR_Integer) 0);
  MR_Word TypeClassInfo_for_analysis_77;
  MR_String AnalysisName_16;
  MR_Word VersionNumberTerm_17;
  MR_Word DependentModule_26;
  MR_Word FuncId_27;
  MR_Box CallPattern_28;
  MR_Word TypeClassInfo_for_call_pattern_78;
  MR_Word TypeClassInfo_for_to_term_80;
  MR_Word TypeCtorInfo_5_97;
  MR_Word DependentModuleTerm_13;
  MR_Word ResultTerm_14;
  MR_Word FuncIdTerm_18;
  MR_Word CallPatternTerm_19;
  MR_Word Analysis_21;
  MR_Word Var_45;
  MR_String Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Integer PolyConst1_79;
  MR_Integer PolyConst2_81;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_Analysis_21;
  MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box *);

  if (succeeded)
  {
    Var_45 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 0))));
    Var_47 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_46 = ((MR_String) ((MR_hl_field(0, Var_45, (MR_Integer) 0))));
      succeeded = (strcmp(Var_46, (MR_String) "->") == 0);
      if (succeeded)
      {
        succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          DependentModuleTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 0))));
          Var_48 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 1))));
          succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ResultTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 0))));
            Var_49 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 1))));
            succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) ResultTerm_14)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_50 = ((MR_Word) ((MR_hl_field(0, ResultTerm_14, (MR_Integer) 0))));
                Var_51 = ((MR_Word) ((MR_hl_field(0, ResultTerm_14, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_Integer) 0);
                if (succeeded)
                {
                  AnalysisName_16 = ((MR_String) ((MR_hl_field(0, Var_50, (MR_Integer) 0))));
                  succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    VersionNumberTerm_17 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 0))));
                    Var_52 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 1))));
                    succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      FuncIdTerm_18 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 0))));
                      Var_53 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 1))));
                      succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        CallPatternTerm_19 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 0))));
                        Var_54 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 1))));
                        succeeded = (Var_54 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_76, (MR_Integer) 0)), (MR_Integer) 6))));
                          succeeded = func_0(((MR_Box) (TypeClassInfo_for_compiler_76)), Compiler_8, ((MR_Box) (AnalysisName_16)), &conv1_Analysis_21);
                          if (succeeded)
                          {
                            Analysis_21 = ((MR_Word) (conv1_Analysis_21));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
                            TypeClassInfo_for_analysis_77 = ((MR_Word) ((MR_hl_field(0, Analysis_21, (MR_Integer) 0))));
                            TypeCtorInfo_5_97 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                            succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeCtorInfo_5_97, DependentModuleTerm_13, &DependentModule_26);
                            if (succeeded)
                            {
                              succeeded = analysis__file__parse_func_id_2_p_0(FuncIdTerm_18, &FuncId_27);
                              if (succeeded)
                              {
                                PolyConst1_79 = (MR_Integer) 1;
                                mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_77, PolyConst1_79, &TypeClassInfo_for_call_pattern_78);
                                PolyConst2_81 = (MR_Integer) 2;
                                mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_78, PolyConst2_81, &TypeClassInfo_for_to_term_80);
                                func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_80, (MR_Integer) 0)), (MR_Integer) 6))));
                                succeeded = func_2(((MR_Box) (TypeClassInfo_for_to_term_80)), ((MR_Box) (CallPatternTerm_19)), &CallPattern_28);
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
    MR_Integer VersionNumber_29;
    MR_Integer Var_96;
    MR_Box MR_CALL (* func_3)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_77, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv4_VersionNumber_29;

    conv4_VersionNumber_29 = func_3(((MR_Box) (TypeClassInfo_for_analysis_77)));
    VersionNumber_29 = ((MR_Integer) (conv4_VersionNumber_29));
    succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VersionNumberTerm_17, &Var_96);
    if (succeeded)
      succeeded = (VersionNumber_29 == Var_96);
    if (succeeded)
    {
      MR_Word TypeClassInfo_for_call_pattern_83;
      MR_Word Arc_32;
      MR_Word AnalysisArcs1_34;
      MR_Word FuncArcs_36;
      MR_Word AnalysisArcs_37;
      MR_Word AnalysisArcs0_33;
      MR_Box conv5_AnalysisArcs0_33;
      MR_Word FuncArcs0_35;
      MR_Box conv6_FuncArcs0_35;

      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_77, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_83);
      {
        Arc_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Arc_32, 0) = ((MR_Box) (TypeClassInfo_for_call_pattern_83));
        MR_hl_field(0, Arc_32, 1) = CallPattern_28;
        MR_hl_field(0, Arc_32, 2) = ((MR_Box) (DependentModule_26));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[3]), STATE_VARIABLE_Arcs_0_41, ((MR_Box) (AnalysisName_16)), &conv5_AnalysisArcs0_33);
      if (succeeded)
      {
        AnalysisArcs0_33 = ((MR_Word) (conv5_AnalysisArcs0_33));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        AnalysisArcs1_34 = AnalysisArcs0_33;
      else
        AnalysisArcs1_34 = mercury__map__init_0_f_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[2]));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[2]), AnalysisArcs1_34, ((MR_Box) (FuncId_27)), &conv6_FuncArcs0_35);
      if (succeeded)
      {
        FuncArcs0_35 = ((MR_Word) (conv6_FuncArcs0_35));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          FuncArcs_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncArcs_36, 0) = ((MR_Box) (Arc_32));
          MR_hl_field(1, FuncArcs_36, 1) = ((MR_Box) (FuncArcs0_35));
        }
      else
        {
          FuncArcs_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncArcs_36, 0) = ((MR_Box) (Arc_32));
          MR_hl_field(1, FuncArcs_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      mercury__map__set_4_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[2]), ((MR_Box) (FuncId_27)), ((MR_Box) (FuncArcs_36)), AnalysisArcs1_34, &AnalysisArcs_37);
      mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[3]), ((MR_Box) (AnalysisName_16)), ((MR_Box) (AnalysisArcs_37)), STATE_VARIABLE_Arcs_0_41, STATE_VARIABLE_Arcs_42);
    }
    else
      *STATE_VARIABLE_Arcs_42 = STATE_VARIABLE_Arcs_0_41;
    *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
  }
  else
  {
    MR_String TermStr_38;
    MR_Word Pieces_39;
    MR_Word Spec_40;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_75;

    TermStr_38 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Term_10);
    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_65, 1) = ((MR_Box) (TermStr_38));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &analysis__file_scalar_common_1[7])));
    }
    {
      Pieces_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_39, 0) = ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[9])));
      MR_hl_field(1, Pieces_39, 1) = ((MR_Box) (Var_64));
    }
    Var_75 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
    {
      Spec_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_40, 0) = ((MR_Box) ((MR_String) "predicate \140analysis.file.parse_imdg_arc\'/7"));
      MR_hl_field(1, Spec_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_40, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(1, Spec_40, 3) = ((MR_Box) (Var_75));
      MR_hl_field(1, Spec_40, 4) = ((MR_Box) (Pieces_39));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_44 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_40));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
    }
    *STATE_VARIABLE_Arcs_42 = STATE_VARIABLE_Arcs_0_41;
  }
}

static void MR_CALL 
analysis__file__write_request_entry_7_p_0(
  MR_Word TypeClassInfo_for_compiler_46,
  MR_Box Compiler_8,
  MR_Word OutStream_9,
  MR_String AnalysisName_10,
  MR_Word FuncId_11,
  MR_Word Request_12)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_call_pattern_47 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 0))));
  MR_Word TypeClassInfo_for_to_term_50;
  MR_Box Call_14 = (MR_hl_field(0, Request_12, (MR_Integer) 1));
  MR_Word CallerModule_15 = ((MR_Word) ((MR_hl_field(0, Request_12, (MR_Integer) 2))));
  MR_Integer VersionNumber_20;
  MR_String FuncIdStr_23;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_String Var_58;
  MR_Word TypeClassInfo_for_analysis_48;
  MR_Word Analysis_16;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_46, (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_Analysis_16;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_Var_43;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_compiler_46)), Compiler_8, ((MR_Box) (AnalysisName_10)), &conv1_Analysis_16);
  if (succeeded)
  {
    Analysis_16 = ((MR_Word) (conv1_Analysis_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeClassInfo_for_analysis_48 = ((MR_Word) ((MR_hl_field(0, Analysis_16, (MR_Integer) 0))));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Box MR_CALL (* func_2)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_48, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv3_VersionNumber_20;

    conv3_VersionNumber_20 = func_2(((MR_Box) (TypeClassInfo_for_analysis_48)));
    VersionNumber_20 = ((MR_Integer) (conv3_VersionNumber_20));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.write_request_entry\'/7", (MR_String) "unknown analysis type");
      return;
    }
  FuncIdStr_23 = analysis__file__func_id_to_string_1_f_0(FuncId_11);
  parse_tree__parse_tree_out_sym_name__write_quoted_sym_name_4_p_0(OutStream_9, CallerModule_15);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) " -> ");
  mercury__io__write_string_4_p_0(OutStream_9, AnalysisName_10);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) "(");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&analysis__file_scalar_common_3[0]), VersionNumber_20, &Var_58);
  mercury__io__write_string_4_p_0(OutStream_9, Var_58);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) ", ");
  mercury__io__write_string_4_p_0(OutStream_9, FuncIdStr_23);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) ", ");
  Var_42 = mercury__varset__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0));
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_47, (MR_Integer) 2, &TypeClassInfo_for_to_term_50);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_50, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_43 = func_4(((MR_Box) (TypeClassInfo_for_to_term_50)), Call_14);
  Var_43 = ((MR_Word) (conv5_Var_43));
  mercury__term_io__write_term_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), OutStream_9, Var_42, Var_43);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) ").\n");
}

static void MR_CALL 
analysis__file__parse_request_entry_7_p_0(
  MR_Word TypeClassInfo_for_compiler_76,
  MR_Box Compiler_8,
  MR_Word VarSet_9,
  MR_Word Term_10,
  MR_Word STATE_VARIABLE_Requests_0_41,
  MR_Word * STATE_VARIABLE_Requests_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_10)) == (MR_Integer) 0);
  MR_Word TypeClassInfo_for_analysis_77;
  MR_String AnalysisName_16;
  MR_Word VersionNumberTerm_17;
  MR_Word CallerModule_26;
  MR_Word FuncId_27;
  MR_Box CallPattern_28;
  MR_Word TypeClassInfo_for_call_pattern_78;
  MR_Word TypeClassInfo_for_to_term_80;
  MR_Word TypeCtorInfo_5_97;
  MR_Word CallerModuleTerm_13;
  MR_Word RHS_14;
  MR_Word FuncIdTerm_18;
  MR_Word CallPatternTerm_19;
  MR_Word Analysis_21;
  MR_Word Var_45;
  MR_String Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Integer PolyConst1_79;
  MR_Integer PolyConst2_81;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_Analysis_21;
  MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box *);

  if (succeeded)
  {
    Var_45 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 0))));
    Var_47 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_46 = ((MR_String) ((MR_hl_field(0, Var_45, (MR_Integer) 0))));
      succeeded = (strcmp(Var_46, (MR_String) "->") == 0);
      if (succeeded)
      {
        succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          CallerModuleTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 0))));
          Var_48 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 1))));
          succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RHS_14 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 0))));
            Var_49 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 1))));
            succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) RHS_14)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_50 = ((MR_Word) ((MR_hl_field(0, RHS_14, (MR_Integer) 0))));
                Var_51 = ((MR_Word) ((MR_hl_field(0, RHS_14, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_Integer) 0);
                if (succeeded)
                {
                  AnalysisName_16 = ((MR_String) ((MR_hl_field(0, Var_50, (MR_Integer) 0))));
                  succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    VersionNumberTerm_17 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 0))));
                    Var_52 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 1))));
                    succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      FuncIdTerm_18 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 0))));
                      Var_53 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 1))));
                      succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        CallPatternTerm_19 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 0))));
                        Var_54 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 1))));
                        succeeded = (Var_54 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_76, (MR_Integer) 0)), (MR_Integer) 6))));
                          succeeded = func_0(((MR_Box) (TypeClassInfo_for_compiler_76)), Compiler_8, ((MR_Box) (AnalysisName_16)), &conv1_Analysis_21);
                          if (succeeded)
                          {
                            Analysis_21 = ((MR_Word) (conv1_Analysis_21));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
                            TypeClassInfo_for_analysis_77 = ((MR_Word) ((MR_hl_field(0, Analysis_21, (MR_Integer) 0))));
                            TypeCtorInfo_5_97 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                            succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeCtorInfo_5_97, CallerModuleTerm_13, &CallerModule_26);
                            if (succeeded)
                            {
                              succeeded = analysis__file__parse_func_id_2_p_0(FuncIdTerm_18, &FuncId_27);
                              if (succeeded)
                              {
                                PolyConst1_79 = (MR_Integer) 1;
                                mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_77, PolyConst1_79, &TypeClassInfo_for_call_pattern_78);
                                PolyConst2_81 = (MR_Integer) 2;
                                mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_78, PolyConst2_81, &TypeClassInfo_for_to_term_80);
                                func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_80, (MR_Integer) 0)), (MR_Integer) 6))));
                                succeeded = func_2(((MR_Box) (TypeClassInfo_for_to_term_80)), ((MR_Box) (CallPatternTerm_19)), &CallPattern_28);
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
    MR_Integer VersionNumber_29;
    MR_Integer Var_96;
    MR_Box MR_CALL (* func_3)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_77, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv4_VersionNumber_29;

    conv4_VersionNumber_29 = func_3(((MR_Box) (TypeClassInfo_for_analysis_77)));
    VersionNumber_29 = ((MR_Integer) (conv4_VersionNumber_29));
    succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VersionNumberTerm_17, &Var_96);
    if (succeeded)
      succeeded = (VersionNumber_29 == Var_96);
    if (succeeded)
    {
      MR_Word TypeClassInfo_for_call_pattern_83;
      MR_Word Result_32;
      MR_Word AnalysisRequests1_34;
      MR_Word FuncRequests_36;
      MR_Word AnalysisRequests_37;
      MR_Word AnalysisRequests0_33;
      MR_Box conv5_AnalysisRequests0_33;
      MR_Word FuncRequests0_35;
      MR_Box conv6_FuncRequests0_35;

      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_77, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_83);
      {
        Result_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Result_32, 0) = ((MR_Box) (TypeClassInfo_for_call_pattern_83));
        MR_hl_field(0, Result_32, 1) = CallPattern_28;
        MR_hl_field(0, Result_32, 2) = ((MR_Box) (CallerModule_26));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[2]), STATE_VARIABLE_Requests_0_41, ((MR_Box) (AnalysisName_16)), &conv5_AnalysisRequests0_33);
      if (succeeded)
      {
        AnalysisRequests0_33 = ((MR_Word) (conv5_AnalysisRequests0_33));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        AnalysisRequests1_34 = AnalysisRequests0_33;
      else
        AnalysisRequests1_34 = mercury__map__init_0_f_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[1]));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[1]), AnalysisRequests1_34, ((MR_Box) (FuncId_27)), &conv6_FuncRequests0_35);
      if (succeeded)
      {
        FuncRequests0_35 = ((MR_Word) (conv6_FuncRequests0_35));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          FuncRequests_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncRequests_36, 0) = ((MR_Box) (Result_32));
          MR_hl_field(1, FuncRequests_36, 1) = ((MR_Box) (FuncRequests0_35));
        }
      else
        {
          FuncRequests_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncRequests_36, 0) = ((MR_Box) (Result_32));
          MR_hl_field(1, FuncRequests_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      mercury__map__set_4_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[1]), ((MR_Box) (FuncId_27)), ((MR_Box) (FuncRequests_36)), AnalysisRequests1_34, &AnalysisRequests_37);
      mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[2]), ((MR_Box) (AnalysisName_16)), ((MR_Box) (AnalysisRequests_37)), STATE_VARIABLE_Requests_0_41, STATE_VARIABLE_Requests_42);
    }
    else
      *STATE_VARIABLE_Requests_42 = STATE_VARIABLE_Requests_0_41;
    *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
  }
  else
  {
    MR_String TermStr_38;
    MR_Word Pieces_39;
    MR_Word Spec_40;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_75;

    TermStr_38 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Term_10);
    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_65, 1) = ((MR_Box) (TermStr_38));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &analysis__file_scalar_common_1[7])));
    }
    {
      Pieces_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_39, 0) = ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[8])));
      MR_hl_field(1, Pieces_39, 1) = ((MR_Box) (Var_64));
    }
    Var_75 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
    {
      Spec_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_40, 0) = ((MR_Box) ((MR_String) "predicate \140analysis.file.parse_request_entry\'/7"));
      MR_hl_field(1, Spec_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_40, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(1, Spec_40, 3) = ((MR_Box) (Var_75));
      MR_hl_field(1, Spec_40, 4) = ((MR_Box) (Pieces_39));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_44 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_40));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
    }
    *STATE_VARIABLE_Requests_42 = STATE_VARIABLE_Requests_0_41;
  }
}

static void MR_CALL 
analysis__file__write_result_entry_6_p_0(
  MR_Word OutStream_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Word Result_10)
{
  MR_Word TypeClassInfo_for_analysis_42 = ((MR_Word) ((MR_hl_field(0, Result_10, (MR_Integer) 0))));
  MR_Word TypeClassInfo_for_call_pattern_44;
  MR_Word TypeClassInfo_for_to_term_46;
  MR_Word TypeClassInfo_for_answer_pattern_48;
  MR_Word TypeClassInfo_for_to_term_49;
  MR_Box Call_12 = (MR_hl_field(0, Result_10, (MR_Integer) 1));
  MR_Box Answer_13 = (MR_hl_field(0, Result_10, (MR_Integer) 2));
  MR_Word Status_14 = ((MR_Unsigned) ((MR_hl_field(0, Result_10, (MR_Integer) 3))) & (MR_Integer) 3);
  MR_Integer VersionNumber_15;
  MR_String StatusString_16;
  MR_String FuncIdStr_17;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_String Var_56;
  MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_42, (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_VersionNumber_15;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_30;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_Var_35;

  conv1_VersionNumber_15 = func_0(((MR_Box) (TypeClassInfo_for_analysis_42)));
  VersionNumber_15 = ((MR_Integer) (conv1_VersionNumber_15));
  switch (Status_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      StatusString_16 = (MR_String) "invalid";
      break;
    case (MR_Integer) 2:
      StatusString_16 = (MR_String) "optimal";
      break;
    case (MR_Integer) 1:
      StatusString_16 = (MR_String) "suboptimal";
      break;
  }
  FuncIdStr_17 = analysis__file__func_id_to_string_1_f_0(FuncId_9);
  mercury__io__write_string_4_p_0(OutStream_7, AnalysisName_8);
  mercury__io__write_string_4_p_0(OutStream_7, (MR_String) "(");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&analysis__file_scalar_common_3[0]), VersionNumber_15, &Var_56);
  mercury__io__write_string_4_p_0(OutStream_7, Var_56);
  mercury__io__write_string_4_p_0(OutStream_7, (MR_String) ", ");
  mercury__io__write_string_4_p_0(OutStream_7, FuncIdStr_17);
  mercury__io__write_string_4_p_0(OutStream_7, (MR_String) ", ");
  Var_29 = mercury__varset__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0));
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_42, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_44);
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_44, (MR_Integer) 2, &TypeClassInfo_for_to_term_46);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_46, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_30 = func_2(((MR_Box) (TypeClassInfo_for_to_term_46)), Call_12);
  Var_30 = ((MR_Word) (conv3_Var_30));
  mercury__term_io__write_term_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), OutStream_7, Var_29, Var_30);
  mercury__io__write_string_4_p_0(OutStream_7, (MR_String) ", ");
  Var_34 = mercury__varset__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0));
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_42, (MR_Integer) 2, &TypeClassInfo_for_answer_pattern_48);
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_answer_pattern_48, (MR_Integer) 2, &TypeClassInfo_for_to_term_49);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_49, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_35 = func_4(((MR_Box) (TypeClassInfo_for_to_term_49)), Answer_13);
  Var_35 = ((MR_Word) (conv5_Var_35));
  mercury__term_io__write_term_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), OutStream_7, Var_34, Var_35);
  mercury__io__write_string_4_p_0(OutStream_7, (MR_String) ", ");
  mercury__io__write_string_4_p_0(OutStream_7, StatusString_16);
  mercury__io__write_string_4_p_0(OutStream_7, (MR_String) ").\n");
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
analysis__file__parse_result_entry_7_p_0(
  MR_Word TypeClassInfo_for_compiler_78,
  MR_Box Compiler_8,
  MR_Word VarSet_9,
  MR_Word Term_10,
  MR_Word STATE_VARIABLE_Results_0_43,
  MR_Word * STATE_VARIABLE_Results_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_10)) == (MR_Integer) 0);
  MR_Word TypeClassInfo_for_analysis_79;
  MR_String AnalysisName_13;
  MR_Word VersionNumberTerm_14;
  MR_Word FuncId_27;
  MR_Box CallPattern_28;
  MR_Box AnswerPattern_29;
  MR_Word Status_30;
  MR_Word TypeClassInfo_for_call_pattern_80;
  MR_Word TypeClassInfo_for_to_term_82;
  MR_Word TypeClassInfo_for_answer_pattern_84;
  MR_Word TypeClassInfo_for_to_term_85;
  MR_Word FuncIdTerm_15;
  MR_Word CallPatternTerm_16;
  MR_Word AnswerPatternTerm_17;
  MR_Word StatusTerm_18;
  MR_String StatusString_20;
  MR_Word Analysis_22;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Integer PolyConst1_81;
  MR_Integer PolyConst2_83;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_Analysis_22;
  MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box *);
  MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *);

  if (succeeded)
  {
    Var_47 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 0))));
    Var_48 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
    if (succeeded)
    {
      AnalysisName_13 = ((MR_String) ((MR_hl_field(0, Var_47, (MR_Integer) 0))));
      succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        VersionNumberTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 0))));
        Var_49 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 1))));
        succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          FuncIdTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 0))));
          Var_50 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 1))));
          succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            CallPatternTerm_16 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 0))));
            Var_51 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 1))));
            succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              AnswerPatternTerm_17 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 0))));
              Var_52 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 1))));
              succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                StatusTerm_18 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 0))));
                Var_53 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 1))));
                succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) StatusTerm_18)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_54 = ((MR_Word) ((MR_hl_field(0, StatusTerm_18, (MR_Integer) 0))));
                    Var_55 = ((MR_Word) ((MR_hl_field(0, StatusTerm_18, (MR_Integer) 1))));
                    succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        StatusString_20 = ((MR_String) ((MR_hl_field(0, Var_54, (MR_Integer) 0))));
                        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_78, (MR_Integer) 0)), (MR_Integer) 6))));
                        succeeded = func_0(((MR_Box) (TypeClassInfo_for_compiler_78)), Compiler_8, ((MR_Box) (AnalysisName_13)), &conv1_Analysis_22);
                        if (succeeded)
                        {
                          Analysis_22 = ((MR_Word) (conv1_Analysis_22));
                          succeeded = MR_TRUE;
                        }
                        if (succeeded)
                        {
                          TypeClassInfo_for_analysis_79 = ((MR_Word) ((MR_hl_field(0, Analysis_22, (MR_Integer) 0))));
                          succeeded = analysis__file__parse_func_id_2_p_0(FuncIdTerm_15, &FuncId_27);
                          if (succeeded)
                          {
                            PolyConst1_81 = (MR_Integer) 1;
                            mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_79, PolyConst1_81, &TypeClassInfo_for_call_pattern_80);
                            PolyConst2_83 = (MR_Integer) 2;
                            mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_80, PolyConst2_83, &TypeClassInfo_for_to_term_82);
                            func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_82, (MR_Integer) 0)), (MR_Integer) 6))));
                            succeeded = func_2(((MR_Box) (TypeClassInfo_for_to_term_82)), ((MR_Box) (CallPatternTerm_16)), &CallPattern_28);
                            if (succeeded)
                            {
                              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_79, PolyConst2_83, &TypeClassInfo_for_answer_pattern_84);
                              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_answer_pattern_84, PolyConst2_83, &TypeClassInfo_for_to_term_85);
                              func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_to_term_85, (MR_Integer) 0)), (MR_Integer) 6))));
                              succeeded = func_3(((MR_Box) (TypeClassInfo_for_to_term_85)), ((MR_Box) (AnswerPatternTerm_17)), &AnswerPattern_29);
                              if (succeeded)
                              {
                                if ((strcmp(StatusString_20, (MR_String) "invalid") == 0))
                                {
                                  Status_30 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                                else
                                if ((strcmp(StatusString_20, (MR_String) "optimal") == 0))
                                {
                                  Status_30 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                else
                                if ((strcmp(StatusString_20, (MR_String) "suboptimal") == 0))
                                {
                                  Status_30 = (MR_Integer) 1;
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
  if (succeeded)
  {
    MR_Integer VersionNumber_31;
    MR_Integer Var_98;
    MR_Box MR_CALL (* func_4)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_79, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv5_VersionNumber_31;

    conv5_VersionNumber_31 = func_4(((MR_Box) (TypeClassInfo_for_analysis_79)));
    VersionNumber_31 = ((MR_Integer) (conv5_VersionNumber_31));
    succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VersionNumberTerm_14, &Var_98);
    if (succeeded)
      succeeded = (VersionNumber_31 == Var_98);
    if (succeeded)
    {
      MR_Word Result_34;
      MR_Word AnalysisResults1_36;
      MR_Word FuncResults_38;
      MR_Word AnalysisResults_39;
      MR_Word AnalysisResults0_35;
      MR_Box conv6_AnalysisResults0_35;
      MR_Word FuncResults0_37;
      MR_Box conv7_FuncResults0_37;

      {
        Result_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Result_34, 0) = ((MR_Box) (TypeClassInfo_for_analysis_79));
        MR_hl_field(0, Result_34, 1) = CallPattern_28;
        MR_hl_field(0, Result_34, 2) = AnswerPattern_29;
        MR_hl_field(0, Result_34, 3) = (MR_Box) ((MR_Unsigned) (Status_30));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[0]), STATE_VARIABLE_Results_0_43, ((MR_Box) (AnalysisName_13)), &conv6_AnalysisResults0_35);
      if (succeeded)
      {
        AnalysisResults0_35 = ((MR_Word) (conv6_AnalysisResults0_35));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        AnalysisResults1_36 = AnalysisResults0_35;
      else
        AnalysisResults1_36 = mercury__map__init_0_f_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[0]));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[0]), AnalysisResults1_36, ((MR_Box) (FuncId_27)), &conv7_FuncResults0_37);
      if (succeeded)
      {
        FuncResults0_37 = ((MR_Word) (conv7_FuncResults0_37));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          FuncResults_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncResults_38, 0) = ((MR_Box) (Result_34));
          MR_hl_field(1, FuncResults_38, 1) = ((MR_Box) (FuncResults0_37));
        }
      else
        {
          FuncResults_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncResults_38, 0) = ((MR_Box) (Result_34));
          MR_hl_field(1, FuncResults_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      mercury__map__set_4_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis__file_scalar_common_1[0]), ((MR_Box) (FuncId_27)), ((MR_Box) (FuncResults_38)), AnalysisResults1_36, &AnalysisResults_39);
      mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[0]), ((MR_Box) (AnalysisName_13)), ((MR_Box) (AnalysisResults_39)), STATE_VARIABLE_Results_0_43, STATE_VARIABLE_Results_44);
    }
    else
      *STATE_VARIABLE_Results_44 = STATE_VARIABLE_Results_0_43;
    *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_0_45;
  }
  else
  {
    MR_String TermStr_40;
    MR_Word Pieces_41;
    MR_Word Spec_42;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_77;

    TermStr_40 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Term_10);
    {
      Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_67, 1) = ((MR_Box) (TermStr_40));
    }
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) (MR_mkword(1, &analysis__file_scalar_common_1[7])));
    }
    {
      Pieces_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_41, 0) = ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[4])));
      MR_hl_field(1, Pieces_41, 1) = ((MR_Box) (Var_66));
    }
    Var_77 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
    {
      Spec_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_42, 0) = ((MR_Box) ((MR_String) "predicate \140analysis.file.parse_result_entry\'/7"));
      MR_hl_field(1, Spec_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_42, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(1, Spec_42, 3) = ((MR_Box) (Var_77));
      MR_hl_field(1, Spec_42, 4) = ((MR_Box) (Pieces_41));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_46 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_42));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_45));
    }
    *STATE_VARIABLE_Results_44 = STATE_VARIABLE_Results_0_43;
  }
}

static MR_bool MR_CALL 
analysis__file__parse_func_id_2_p_0(
  MR_Word Term_3,
  MR_Word * FuncId_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word TypeCtorInfo_24_24;
  MR_String PF_5;
  MR_Word NameTerm_6;
  MR_Word ArityTerm_7;
  MR_Word ProcTerm_8;
  MR_Word PredOrFunc_10;
  MR_String Name_11;
  MR_Integer Arity_13;
  MR_Integer ProcIdInt_14;
  MR_Integer ProcId_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;

  if (succeeded)
  {
    Var_16 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_17 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
    if (succeeded)
    {
      PF_5 = ((MR_String) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));
      succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        NameTerm_6 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 1))));
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArityTerm_7 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 1))));
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ProcTerm_8 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
            succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              if ((strcmp(PF_5, (MR_String) "f") == 0))
              {
                PredOrFunc_10 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              if ((strcmp(PF_5, (MR_String) "p") == 0))
              {
                PredOrFunc_10 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) NameTerm_6)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_21 = ((MR_Word) ((MR_hl_field(0, NameTerm_6, (MR_Integer) 0))));
                  Var_22 = ((MR_Word) ((MR_hl_field(0, NameTerm_6, (MR_Integer) 1))));
                  succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Name_11 = ((MR_String) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
                      TypeCtorInfo_24_24 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                      succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeCtorInfo_24_24, ArityTerm_7, &Arity_13);
                      if (succeeded)
                      {
                        succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeCtorInfo_24_24, ProcTerm_8, &ProcIdInt_14);
                        if (succeeded)
                        {
                          hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_15, ProcIdInt_14);
                          Var_23 = (MR_Word) (Arity_13);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                            *FuncId_4 = base;
                            MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_10));
                            MR_hl_field(0, base, 1) = ((MR_Box) (Name_11));
                            MR_hl_field(0, base, 2) = ((MR_Box) (Var_23));
                            MR_hl_field(0, base, 3) = ((MR_Box) (ProcId_15));
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
    }
  }
  return succeeded;
}

void MR_CALL 
analysis__file__empty_request_file_5_p_0(
  MR_Word Info_6,
  MR_Word Globals_7,
  MR_Word ModuleName_8)
{
  MR_Word TypeClassInfo_for_compiler_34 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 0))));
  MR_String RequestFileName_10;
  MR_Word MaybeDebugStream_11;
  MR_Box Var_16 = (MR_hl_field(0, Info_6, (MR_Integer) 1));
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_34, (MR_Integer) 0)), (MR_Integer) 9))));
  MR_Box conv2_RequestFileName_10;
  MR_Box conv1_STATE_VARIABLE_IO_18_18;
  MR_Word Var_13;

  func_0(((MR_Box) (TypeClassInfo_for_compiler_34)), Var_16, ((MR_Box) (Globals_7)), ((MR_Box) (((MR_Box) ((MR_String) ".request")))), ((MR_Box) (ModuleName_8)), &conv2_RequestFileName_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18_18);
  RequestFileName_10 = ((MR_String) (conv2_RequestFileName_10));
  analysis__get_debug_analysis_stream_3_p_0(&MaybeDebugStream_11);
  if (!((MaybeDebugStream_11 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word DebugStream_12 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_11, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(DebugStream_12, (MR_String) "% Removing request file ");
    mercury__io__write_string_4_p_0(DebugStream_12, RequestFileName_10);
    mercury__io__write_string_4_p_0(DebugStream_12, (MR_String) "\n");
  }
  mercury__io__file__remove_file_4_p_0(RequestFileName_10, &Var_13);
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

  analysis__file__write_module_analysis_map_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
analysis__file__write_module_imdg_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  analysis__file__write_imdg_arc_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
}

void MR_CALL 
analysis__file__write_module_imdg_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word ModuleEntries_10)
{
  MR_Word TypeClassInfo_for_compiler_46 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
  MR_Box Var_15 = (MR_hl_field(0, Info_7, (MR_Integer) 1));
  MR_Word Var_17;
  MR_String WriteFileName_49;
  MR_Word OpenResult_52;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_WriteFileName_49;
  MR_Box conv1_STATE_VARIABLE_IO_23_50;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&analysis__file_scalar_common_5[5]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (analysis__file__write_module_imdg_6_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (TypeClassInfo_for_compiler_46));
    MR_hl_field(0, Var_17, 4) = Var_15;
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_46, (MR_Integer) 0)), (MR_Integer) 9))));
  func_0(((MR_Box) (TypeClassInfo_for_compiler_46)), Var_15, ((MR_Box) (Globals_8)), ((MR_Box) (((MR_Box) ((MR_String) ".imdg")))), ((MR_Box) (ModuleName_9)), &conv2_WriteFileName_49, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_50);
  WriteFileName_49 = ((MR_String) (conv2_WriteFileName_49));
  mercury__io__open_output_4_p_0(WriteFileName_49, &OpenResult_52);
  if (((MR_tag((MR_Word) OpenResult_52)) == (MR_Integer) 1))
  {
    MR_Word IOError_54 = ((MR_Word) ((MR_hl_field(1, OpenResult_52, (MR_Integer) 0))));
    MR_String IOErrorMsg_55;
    MR_String Var_69;
    MR_String Var_82;
    MR_String Var_84;
    MR_String Var_85;

    Var_69 = mercury__io__error_message_1_f_0(IOError_54);
    Var_82 = mercury__string__f_43_43_2_f_0(Var_69, (MR_String) "\n");
    Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", Var_82);
    Var_85 = mercury__string__f_43_43_2_f_0(WriteFileName_49, Var_84);
    IOErrorMsg_55 = mercury__string__f_43_43_2_f_0((MR_String) "error opening \140", Var_85);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.write_analysis_file\'/5", IOErrorMsg_55);
      return;
    }
  }
  else
  {
    MR_Word FileStream_53 = ((MR_Word) ((MR_hl_field(0, OpenResult_52, (MR_Integer) 0))));
    MR_String Var_73;
    MR_Word Var_87;
    MR_Box conv3_STATE_VARIABLE_IO_23_63;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&analysis__file_scalar_common_3[0]), (MR_Integer) 6, &Var_73);
    mercury__io__write_string_4_p_0(FileStream_53, Var_73);
    mercury__io__write_string_4_p_0(FileStream_53, (MR_String) ".\n");
    {
      Var_87 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_87, 0) = ((MR_Box) (&analysis__file_scalar_common_9[0]));
      MR_hl_field(0, Var_87, 1) = ((MR_Box) (analysis__file__write_module_imdg_6_p_0_2));
      MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_87, 3) = ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0));
      MR_hl_field(0, Var_87, 4) = ((MR_Box) (FileStream_53));
      MR_hl_field(0, Var_87, 5) = ((MR_Box) (Var_17));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_87, ModuleEntries_10, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_23_63);
    mercury__io__close_output_3_p_0(FileStream_53);
  }
}

static void MR_CALL 
analysis__file__read_module_imdg_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Arcs_42;
  MR_Word conv0_STATE_VARIABLE_Specs_44;

  analysis__file__parse_imdg_arc_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Arcs_42, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_44);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Arcs_42));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_44));
}

void MR_CALL 
analysis__file__read_module_imdg_7_p_0(
  MR_Word Info_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word * ModuleEntries_11,
  MR_Word * Specs_12)
{
  MR_Word TypeClassInfo_for_compiler_48 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
  MR_Box Var_16 = (MR_hl_field(0, Info_8, (MR_Integer) 1));
  MR_Word Var_17;
  MR_Word Var_19;
  MR_Box conv2_ModuleEntries_11;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&analysis__file_scalar_common_5[4]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (analysis__file__read_module_imdg_7_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (TypeClassInfo_for_compiler_48));
    MR_hl_field(0, Var_17, 4) = Var_16;
  }
  Var_19 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[3]));
  analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_97_110_100_95_114_101_97_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_95_91_49_93_95_48_11_p_0(TypeClassInfo_for_compiler_48, Var_16, Globals_9, Var_17, (MR_Word) (((MR_Box) ((MR_String) ".imdg"))), ModuleName_10, ((MR_Box) (Var_19)), &conv2_ModuleEntries_11, (MR_Word) ((MR_Unsigned) 0U), Specs_12);
  *ModuleEntries_11 = ((MR_Word) (conv2_ModuleEntries_11));
}

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  analysis__file__write_request_entry_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
}

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  analysis__file__write_module_analysis_map_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  analysis__file__write_request_entry_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
}

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  analysis__file__write_request_entry_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
}

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  analysis__file__write_request_entry_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
}

void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word ModuleRequests_10)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_compiler_61 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
  MR_Box Compiler_12 = (MR_hl_field(0, Info_7, (MR_Integer) 1));
  MR_String AnalysisFileName_13;
  MR_Word MaybeDebugStream_14;
  MR_Word FileResult_16;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_61, (MR_Integer) 0)), (MR_Integer) 9))));
  MR_Box conv2_AnalysisFileName_13;
  MR_Box conv1_STATE_VARIABLE_IO_34_34;

  func_0(((MR_Box) (TypeClassInfo_for_compiler_61)), Compiler_12, ((MR_Box) (Globals_8)), ((MR_Box) (((MR_Box) ((MR_String) ".request")))), ((MR_Box) (ModuleName_9)), &conv2_AnalysisFileName_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_34_34);
  AnalysisFileName_13 = ((MR_String) (conv2_AnalysisFileName_13));
  analysis__get_debug_analysis_stream_3_p_0(&MaybeDebugStream_14);
  if (!((MaybeDebugStream_14 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word DebugStream_15 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_14, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(DebugStream_15, (MR_String) "% Writing module analysis requests to ");
    mercury__io__write_string_4_p_0(DebugStream_15, AnalysisFileName_13);
    mercury__io__write_string_4_p_0(DebugStream_15, (MR_String) "\n");
  }
  mercury__io__read_named_file_as_string_4_p_0(AnalysisFileName_13, &FileResult_16);
  if (((MR_tag((MR_Word) FileResult_16)) == (MR_Integer) 1))
  {
    MR_Word Var_51;

    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (&analysis__file_scalar_common_5[3]));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_1));
      MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_51, 3) = ((MR_Box) (TypeClassInfo_for_compiler_61));
      MR_hl_field(0, Var_51, 4) = Compiler_12;
    }
    analysis__file__write_analysis_file_5_p_0((MR_Word) (&analysis__analysis__type_ctor_info_analysis_request_0), AnalysisFileName_13, Var_51, ModuleRequests_10);
  }
  else
  {
    MR_String FileStr_17 = ((MR_String) ((MR_hl_field(0, FileResult_16, (MR_Integer) 0))));
    MR_Integer MaxOffset_18;
    MR_Word VersionResult_23;
    MR_Word _LineContext1_21;
    MR_Word _LinePosn1_22;
    MR_Word NumberTerm_25;
    MR_Integer Var_46;
    MR_Integer Var_77;

    mercury__string__length_2_p_0(FileStr_17, &MaxOffset_18);
    mercury__mercury_term_parser__read_term_from_linestr_8_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), AnalysisFileName_13, FileStr_17, MaxOffset_18, (MR_Word) (&analysis__file_scalar_common_1[3]), &_LineContext1_21, (MR_Word) (((MR_Box) ((MR_Integer) 0))), &_LinePosn1_22, &VersionResult_23);
    succeeded = ((MR_tag((MR_Word) VersionResult_23)) == (MR_Integer) 2);
    if (succeeded)
    {
      NumberTerm_25 = ((MR_Word) ((MR_hl_field(2, VersionResult_23, (MR_Integer) 1))));
      Var_46 = (MR_Integer) 6;
      succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NumberTerm_25, &Var_77);
      if (succeeded)
        succeeded = (Var_46 == Var_77);
    }
    if (succeeded)
    {
      MR_Word AppendResult_26;

      mercury__io__open_append_4_p_0(AnalysisFileName_13, &AppendResult_26);
      if (((MR_tag((MR_Word) AppendResult_26)) == (MR_Integer) 1))
      {
        MR_Word Var_91;

        {
          Var_91 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_91, 0) = ((MR_Box) (&analysis__file_scalar_common_5[3]));
          MR_hl_field(0, Var_91, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_2));
          MR_hl_field(0, Var_91, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_91, 3) = ((MR_Box) (TypeClassInfo_for_compiler_61));
          MR_hl_field(0, Var_91, 4) = Compiler_12;
        }
        analysis__file__write_analysis_file_5_p_0((MR_Word) (&analysis__analysis__type_ctor_info_analysis_request_0), AnalysisFileName_13, Var_91, ModuleRequests_10);
      }
      else
      {
        MR_Word AppendStream_27 = ((MR_Word) ((MR_hl_field(0, AppendResult_26, (MR_Integer) 0))));
        MR_Word Var_48;
        MR_Word Var_83;
        MR_Box conv3_STATE_VARIABLE_IO_49_49;

        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_48, 0) = ((MR_Box) (&analysis__file_scalar_common_5[3]));
          MR_hl_field(0, Var_48, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_3));
          MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_48, 3) = ((MR_Box) (TypeClassInfo_for_compiler_61));
          MR_hl_field(0, Var_48, 4) = Compiler_12;
        }
        {
          Var_83 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_83, 0) = ((MR_Box) (&analysis__file_scalar_common_9[0]));
          MR_hl_field(0, Var_83, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_4));
          MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_83, 3) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0));
          MR_hl_field(0, Var_83, 4) = ((MR_Box) (AppendStream_27));
          MR_hl_field(0, Var_83, 5) = ((MR_Box) (Var_48));
        }
        mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_83, ModuleRequests_10, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_49_49);
        mercury__io__close_output_3_p_0(AppendStream_27);
      }
    }
    else
    {
      MR_Word Var_100;

      {
        Var_100 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_100, 0) = ((MR_Box) (&analysis__file_scalar_common_5[3]));
        MR_hl_field(0, Var_100, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_5));
        MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_100, 3) = ((MR_Box) (TypeClassInfo_for_compiler_61));
        MR_hl_field(0, Var_100, 4) = Compiler_12;
      }
      analysis__file__write_analysis_file_5_p_0((MR_Word) (&analysis__analysis__type_ctor_info_analysis_request_0), AnalysisFileName_13, Var_100, ModuleRequests_10);
    }
  }
}

static void MR_CALL 
analysis__file__write_analysis_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  analysis__file__write_module_analysis_map_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
analysis__file__write_analysis_file_5_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_String FileName_6,
  MR_Word WriteEntry_7,
  MR_Word ModuleResults_8)
{
  MR_Word OpenResult_10;

  mercury__io__open_output_4_p_0(FileName_6, &OpenResult_10);
  if (((MR_tag((MR_Word) OpenResult_10)) == (MR_Integer) 1))
  {
    MR_Word IOError_12 = ((MR_Word) ((MR_hl_field(1, OpenResult_10, (MR_Integer) 0))));
    MR_String IOErrorMsg_13;
    MR_String Var_30;
    MR_String Var_44;
    MR_String Var_46;
    MR_String Var_47;

    Var_30 = mercury__io__error_message_1_f_0(IOError_12);
    Var_44 = mercury__string__f_43_43_2_f_0(Var_30, (MR_String) "\n");
    Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", Var_44);
    Var_47 = mercury__string__f_43_43_2_f_0(FileName_6, Var_46);
    IOErrorMsg_13 = mercury__string__f_43_43_2_f_0((MR_String) "error opening \140", Var_47);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.write_analysis_file\'/5", IOErrorMsg_13);
      return;
    }
  }
  else
  {
    MR_Word TypeInfo_21_53;
    MR_Word TypeInfo_23_55;
    MR_Word FileStream_11 = ((MR_Word) ((MR_hl_field(0, OpenResult_10, (MR_Integer) 0))));
    MR_String Var_35;
    MR_Word Var_49;
    MR_Box conv0_STATE_VARIABLE_IO_23_23;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&analysis__file_scalar_common_3[0]), (MR_Integer) 6, &Var_35);
    mercury__io__write_string_4_p_0(FileStream_11, Var_35);
    mercury__io__write_string_4_p_0(FileStream_11, (MR_String) ".\n");
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (&analysis__file_scalar_common_9[0]));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (analysis__file__write_analysis_file_5_p_0_1));
      MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_49, 3) = ((MR_Box) (TypeInfo_for_T_33));
      MR_hl_field(0, Var_49, 4) = ((MR_Box) (FileStream_11));
      MR_hl_field(0, Var_49, 5) = ((MR_Box) (WriteEntry_7));
    }
    {
      TypeInfo_21_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_21_53, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(0, TypeInfo_21_53, 1) = ((MR_Box) (TypeInfo_for_T_33));
    }
    {
      TypeInfo_23_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_23_55, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(0, TypeInfo_23_55, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
      MR_hl_field(0, TypeInfo_23_55, 2) = ((MR_Box) (TypeInfo_21_53));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_23_55, (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, ModuleResults_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_23_23);
    mercury__io__close_output_3_p_0(FileStream_11);
  }
}

static void MR_CALL 
analysis__file__read_module_analysis_requests_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Requests_42;
  MR_Word conv0_STATE_VARIABLE_Specs_44;

  analysis__file__parse_request_entry_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Requests_42, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_44);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Requests_42));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_44));
}

void MR_CALL 
analysis__file__read_module_analysis_requests_8_p_0(
  MR_Word Info_9,
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word * ModuleRequests_12,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word TypeClassInfo_for_compiler_51 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 0))));
  MR_Box Var_19 = (MR_hl_field(0, Info_9, (MR_Integer) 1));
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Box conv2_ModuleRequests_12;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&analysis__file_scalar_common_5[2]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (analysis__file__read_module_analysis_requests_8_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (TypeClassInfo_for_compiler_51));
    MR_hl_field(0, Var_20, 4) = Var_19;
  }
  Var_22 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[2]));
  analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_97_110_100_95_114_101_97_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_95_91_49_93_95_48_11_p_0(TypeClassInfo_for_compiler_51, Var_19, Globals_10, Var_20, (MR_Word) (((MR_Box) ((MR_String) ".request"))), ModuleName_11, ((MR_Box) (Var_22)), &conv2_ModuleRequests_12, STATE_VARIABLE_Specs_0_15, STATE_VARIABLE_Specs_16);
  *ModuleRequests_12 = ((MR_Word) (conv2_ModuleRequests_12));
}

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_97_110_100_95_114_101_97_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_95_91_49_93_95_48_11_p_0(
  MR_Word TypeClassInfo_for_compiler_47,
  MR_Box Compiler_12,
  MR_Word Globals_13,
  MR_Word ParseEntry_14,
  MR_Word OtherExt_15,
  MR_Word ModuleName_16,
  MR_Box STATE_VARIABLE_ModuleResults_0_26,
  MR_Box * STATE_VARIABLE_ModuleResults_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_Word MaybeAnalysisFileName_20;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_47, (MR_Integer) 0)), (MR_Integer) 8))));
  MR_Box conv2_MaybeAnalysisFileName_20;
  MR_Box conv1_STATE_VARIABLE_IO_32_32;

  func_0(((MR_Box) (TypeClassInfo_for_compiler_47)), Compiler_12, ((MR_Box) (Globals_13)), ((MR_Box) (OtherExt_15)), ((MR_Box) (ModuleName_16)), &conv2_MaybeAnalysisFileName_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_32_32);
  MaybeAnalysisFileName_20 = ((MR_Word) (conv2_MaybeAnalysisFileName_20));
  if (((MR_tag((MR_Word) MaybeAnalysisFileName_20)) == (MR_Integer) 1))
  {
    MR_String Message_22 = ((MR_String) ((MR_hl_field(1, MaybeAnalysisFileName_20, (MR_Integer) 0))));
    MR_Word MaybeDebugStream_23;

    analysis__get_debug_analysis_stream_3_p_0(&MaybeDebugStream_23);
    if (!((MaybeDebugStream_23 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word DebugStream_24 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_23, (MR_Integer) 0))));
      MR_String OtherExtStr_25;
      MR_String Var_43;

      OtherExtStr_25 = parse_tree__file_names__other_extension_to_string_1_f_0(OtherExt_15);
      Var_43 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_16);
      mercury__io__write_string_4_p_0(DebugStream_24, (MR_String) "Couldn\'t find ");
      mercury__io__write_string_4_p_0(DebugStream_24, OtherExtStr_25);
      mercury__io__write_string_4_p_0(DebugStream_24, (MR_String) " file for module ");
      mercury__io__write_string_4_p_0(DebugStream_24, Var_43);
      mercury__io__write_string_4_p_0(DebugStream_24, (MR_String) ": ");
      mercury__io__write_string_4_p_0(DebugStream_24, Message_22);
      mercury__io__write_string_4_p_0(DebugStream_24, (MR_String) "\n");
    }
    *STATE_VARIABLE_ModuleResults_27 = STATE_VARIABLE_ModuleResults_0_26;
    *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
  }
  else
  {
    MR_String AnalysisFileName_21 = ((MR_String) ((MR_hl_field(0, MaybeAnalysisFileName_20, (MR_Integer) 0))));
    MR_Word FileResult_59;

    mercury__io__read_named_file_as_string_4_p_0(AnalysisFileName_21, &FileResult_59);
    if (((MR_tag((MR_Word) FileResult_59)) == (MR_Integer) 1))
    {
      MR_Word MaybeDebugStream_85;

      analysis__get_debug_analysis_stream_3_p_0(&MaybeDebugStream_85);
      if (!((MaybeDebugStream_85 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word DebugStream_84 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_85, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(DebugStream_84, (MR_String) "Error reading analysis file: ");
        mercury__io__write_string_4_p_0(DebugStream_84, AnalysisFileName_21);
        mercury__io__write_string_4_p_0(DebugStream_84, (MR_String) "\n");
      }
      *STATE_VARIABLE_ModuleResults_27 = STATE_VARIABLE_ModuleResults_0_26;
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
    }
    else
    {
      MR_String FileStr_60 = ((MR_String) ((MR_hl_field(0, FileResult_59, (MR_Integer) 0))));
      MR_Word MaybeDebugStream_61;
      MR_Integer MaxOffset_63;
      MR_Word LineContext1_66;
      MR_Word LinePosn1_67;
      MR_Word STATE_VARIABLE_Specs_40_78;

      analysis__get_debug_analysis_stream_3_p_0(&MaybeDebugStream_61);
      if (!((MaybeDebugStream_61 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word DebugStream_62 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_61, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(DebugStream_62, (MR_String) "% Reading analysis file ");
        mercury__io__write_string_4_p_0(DebugStream_62, AnalysisFileName_21);
        mercury__io__write_string_4_p_0(DebugStream_62, (MR_String) "\n");
      }
      mercury__string__length_2_p_0(FileStr_60, &MaxOffset_63);
      analysis__file__check_analysis_file_version_number_9_p_0(AnalysisFileName_21, FileStr_60, MaxOffset_63, (MR_Word) (&analysis__file_scalar_common_1[3]), &LineContext1_66, (MR_Word) (((MR_Box) ((MR_Integer) 0))), &LinePosn1_67, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_40_78);
      analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_101_110_116_114_105_101_115_95_95_91_49_93_95_48_10_p_0(AnalysisFileName_21, FileStr_60, MaxOffset_63, ParseEntry_14, LineContext1_66, LinePosn1_67, STATE_VARIABLE_ModuleResults_0_26, STATE_VARIABLE_ModuleResults_27, STATE_VARIABLE_Specs_40_78, STATE_VARIABLE_Specs_29);
    }
  }
}

static void MR_CALL 
analysis__file__check_analysis_file_version_number_9_p_0(
  MR_String FileName_10,
  MR_String FileStr_11,
  MR_Integer MaxOffset_12,
  MR_Word STATE_VARIABLE_LineContext_0_27,
  MR_Word * STATE_VARIABLE_LineContext_28,
  MR_Word STATE_VARIABLE_LinePosn_0_29,
  MR_Word * STATE_VARIABLE_LinePosn_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_bool succeeded;
  MR_Word TermResult_17;
  MR_Integer Number_20;
  MR_Word NumberTerm_19;

  mercury__mercury_term_parser__read_term_from_linestr_8_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FileName_10, FileStr_11, MaxOffset_12, STATE_VARIABLE_LineContext_0_27, STATE_VARIABLE_LineContext_28, STATE_VARIABLE_LinePosn_0_29, STATE_VARIABLE_LinePosn_30, &TermResult_17);
  succeeded = ((MR_tag((MR_Word) TermResult_17)) == (MR_Integer) 2);
  if (succeeded)
  {
    NumberTerm_19 = ((MR_Word) ((MR_hl_field(2, TermResult_17, (MR_Integer) 1))));
    succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NumberTerm_19, &Number_20);
  }
  if (succeeded)
  {
    succeeded = (Number_20 == (MR_Integer) 6);
    if (succeeded)
      *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
    else
    {
      MR_Word Pieces_21;
      MR_Integer LineNumber_22;
      MR_Word Context_24;
      MR_Word Spec_25;
      MR_Word Var_38;
      MR_Word Var_41;
      MR_Word Var_44;
      MR_Word Var_47;
      MR_Word Var_50;
      MR_Word Var_51;

      {
        Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_51, 1) = ((MR_Box) (Number_20));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &analysis__file_scalar_common_1[7])));
      }
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[13])));
        MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[12])));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[21])));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[11])));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
      }
      {
        Pieces_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_21, 0) = ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[10])));
        MR_hl_field(1, Pieces_21, 1) = ((MR_Box) (Var_38));
      }
      LineNumber_22 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LineContext_0_27, (MR_Integer) 0))));
      {
        Context_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Context_24, 0) = ((MR_Box) (FileName_10));
        MR_hl_field(0, Context_24, 1) = ((MR_Box) (LineNumber_22));
      }
      {
        Spec_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140analysis.file.check_analysis_file_version_number\'/9"));
        MR_hl_field(1, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(1, Spec_25, 3) = ((MR_Box) (Context_24));
        MR_hl_field(1, Spec_25, 4) = ((MR_Box) (Pieces_21));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_32 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
      }
    }
  }
  else
  {
    MR_Integer LineNumber_87 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LineContext_0_27, (MR_Integer) 0))));
    MR_Word Context_88;
    MR_Word Spec_89;

    {
      Context_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Context_88, 0) = ((MR_Box) (FileName_10));
      MR_hl_field(0, Context_88, 1) = ((MR_Box) (LineNumber_87));
    }
    {
      Spec_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_89, 0) = ((MR_Box) ((MR_String) "predicate \140analysis.file.check_analysis_file_version_number\'/9"));
      MR_hl_field(1, Spec_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_89, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(1, Spec_89, 3) = ((MR_Box) (Context_88));
      MR_hl_field(1, Spec_89, 4) = ((MR_Box) (MR_mkword(1, &analysis__file_scalar_common_1[25])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_32 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_89));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
    }
  }
}

static MR_bool MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__file__dir_sep_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  analysis__file__write_module_analysis_map_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  analysis__file__write_result_entry_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
}

void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word ModuleResults_10)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_compiler_43;
  MR_Word MaybeDebugStream_12;
  MR_String FileName_14;
  MR_Word UpdateResult_15;
  MR_String CacheDir_16;
  MR_Box Var_27;
  MR_String WriteFileName_56;
  MR_Word OpenResult_59;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_FileName_14;
  MR_Box conv1_STATE_VARIABLE_IO_23_57;

  analysis__get_debug_analysis_stream_3_p_0(&MaybeDebugStream_12);
  if (!((MaybeDebugStream_12 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word DebugStream_13 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_12, (MR_Integer) 0))));
    MR_String Var_25;

    Var_25 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_9);
    mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) "%s Writing module analysis results for ");
    mercury__io__write_string_4_p_0(DebugStream_13, Var_25);
    mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) "\n");
  }
  TypeClassInfo_for_compiler_43 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
  Var_27 = (MR_hl_field(0, Info_7, (MR_Integer) 1));
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_43, (MR_Integer) 0)), (MR_Integer) 9))));
  func_0(((MR_Box) (TypeClassInfo_for_compiler_43)), Var_27, ((MR_Box) (Globals_8)), ((MR_Box) (((MR_Box) ((MR_String) ".analysis")))), ((MR_Box) (ModuleName_9)), &conv2_FileName_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_57);
  FileName_14 = ((MR_String) (conv2_FileName_14));
  WriteFileName_56 = mercury__string__f_43_43_2_f_0(FileName_14, (MR_String) ".tmp");
  mercury__io__open_output_4_p_0(WriteFileName_56, &OpenResult_59);
  if (((MR_tag((MR_Word) OpenResult_59)) == (MR_Integer) 1))
  {
    MR_Word IOError_61 = ((MR_Word) ((MR_hl_field(1, OpenResult_59, (MR_Integer) 0))));
    MR_String IOErrorMsg_62;
    MR_String Var_76;
    MR_String Var_89;
    MR_String Var_91;
    MR_String Var_92;

    Var_76 = mercury__io__error_message_1_f_0(IOError_61);
    Var_89 = mercury__string__f_43_43_2_f_0(Var_76, (MR_String) "\n");
    Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", Var_89);
    Var_92 = mercury__string__f_43_43_2_f_0(WriteFileName_56, Var_91);
    IOErrorMsg_62 = mercury__string__f_43_43_2_f_0((MR_String) "error opening \140", Var_92);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.write_analysis_file\'/5", IOErrorMsg_62);
      return;
    }
  }
  else
  {
    MR_Word FileStream_60 = ((MR_Word) ((MR_hl_field(0, OpenResult_59, (MR_Integer) 0))));
    MR_String Var_80;
    MR_Word Var_94;
    MR_Box conv3_STATE_VARIABLE_IO_23_70;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&analysis__file_scalar_common_3[0]), (MR_Integer) 6, &Var_80);
    mercury__io__write_string_4_p_0(FileStream_60, Var_80);
    mercury__io__write_string_4_p_0(FileStream_60, (MR_String) ".\n");
    {
      Var_94 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_94, 0) = ((MR_Box) (&analysis__file_scalar_common_9[0]));
      MR_hl_field(0, Var_94, 1) = ((MR_Box) (analysis__file__write_module_analysis_results_6_p_0_2));
      MR_hl_field(0, Var_94, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_94, 3) = ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0));
      MR_hl_field(0, Var_94, 4) = ((MR_Box) (FileStream_60));
      MR_hl_field(0, Var_94, 5) = ((MR_Box) (&analysis__file_scalar_common_2[7]));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_94, ModuleResults_10, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_23_70);
    mercury__io__close_output_3_p_0(FileStream_60);
  }
  parse_tree__module_cmds__update_interface_return_changed_6_p_0(Globals_8, ModuleName_9, FileName_14, &UpdateResult_15);
  libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 706, &CacheDir_16);
  succeeded = (strcmp(CacheDir_16, (MR_String) "") == 0);
  succeeded = !(succeeded);
  if (succeeded)
    succeeded = (UpdateResult_15 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_String CacheFileName_17;
    MR_Word Components_102;
    MR_String EscFileName_103;

    Components_102 = mercury__string__split_at_separator_2_f_0((MR_Word) (&analysis__file_scalar_common_2[8]), FileName_14);
    EscFileName_103 = mercury__string__join_list_2_f_0((MR_String) ":", Components_102);
    CacheFileName_17 = mercury__dir__f_slash_2_f_0(CacheDir_16, EscFileName_103);
    analysis__file__write_analysis_cache_file_4_p_0(CacheFileName_17, ModuleResults_10);
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
    MR_String Var_34;
    MR_Word Error_35 = ((MR_Word) ((MR_hl_field(1, TmpFileResult_9, (MR_Integer) 0))));

    Var_34 = mercury__io__error_message_1_f_0(Error_35);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.write_analysis_cache_file\'/4", Var_34);
      return;
    }
  }
  else
  {
    MR_Word TmpFileStream_10 = ((MR_Word) ((MR_hl_field(0, TmpFileResult_9, (MR_Integer) 0))));
    MR_Word RenameResult_11;
    MR_Word Var_19;
    MR_Word Type_45;
    MR_Word STATE_VARIABLE_Pickles_5_46;
    MR_Word Var_50;

    STATE_VARIABLE_Pickles_5_46 = libs__pickle__init_picklers_0_f_0();
    Var_50 = mercury__type_desc__type_of_1_f_0((MR_Word) (&analysis__analysis__type_ctor_info_some_analysis_result_0));
    Type_45 = mercury__type_desc__type_ctor_1_f_0(Var_50);
    libs__pickle__register_pickler_4_p_0(Type_45, (MR_Word) (&analysis__file_scalar_common_2[6]), STATE_VARIABLE_Pickles_5_46, &Var_19);
    libs__pickle__pickle_5_p_0((MR_Word) (&analysis__file_scalar_common_2[1]), TmpFileStream_10, Var_19, ((MR_Box) (ModuleResults_6)));
    mercury__io__close_binary_output_3_p_0(TmpFileStream_10);
    mercury__io__file__rename_file_5_p_0(TmpFileName_8, CacheFileName_5, &RenameResult_11);
    if (!((RenameResult_11 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Error_12 = ((MR_Word) ((MR_hl_field(1, RenameResult_11, (MR_Integer) 0))));
      MR_Word StdErrStream_13;
      MR_String Var_30;
      MR_Word Var_14;

      mercury__io__stderr_stream_3_p_0(&StdErrStream_13);
      Var_30 = mercury__io__error_message_1_f_0(Error_12);
      mercury__io__write_string_4_p_0(StdErrStream_13, (MR_String) "Error renaming ");
      mercury__io__write_string_4_p_0(StdErrStream_13, CacheFileName_5);
      mercury__io__write_string_4_p_0(StdErrStream_13, (MR_String) ": ");
      mercury__io__write_string_4_p_0(StdErrStream_13, Var_30);
      mercury__io__write_string_4_p_0(StdErrStream_13, (MR_String) "\n");
      mercury__io__file__remove_file_4_p_0(TmpFileName_8, &Var_14);
    }
  }
}

static void MR_CALL 
analysis__file__read_module_analysis_results_7_p_0_2(
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
analysis__file__read_module_analysis_results_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__file__dir_sep_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

void MR_CALL 
analysis__file__read_module_analysis_results_7_p_0(
  MR_Word Info_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word * ModuleResults_11,
  MR_Word * Specs_12)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_compiler_58 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
  MR_Box Compiler_14 = (MR_hl_field(0, Info_8, (MR_Integer) 1));
  MR_Word MaybeAnalysisFileName_15;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_compiler_58, (MR_Integer) 0)), (MR_Integer) 8))));
  MR_Box conv2_MaybeAnalysisFileName_15;
  MR_Box conv1_STATE_VARIABLE_IO_32_32;

  func_0(((MR_Box) (TypeClassInfo_for_compiler_58)), Compiler_14, ((MR_Box) (Globals_9)), ((MR_Box) (((MR_Box) ((MR_String) ".analysis")))), ((MR_Box) (ModuleName_10)), &conv2_MaybeAnalysisFileName_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_32_32);
  MaybeAnalysisFileName_15 = ((MR_Word) (conv2_MaybeAnalysisFileName_15));
  if (((MR_tag((MR_Word) MaybeAnalysisFileName_15)) == (MR_Integer) 1))
  {
    *ModuleResults_11 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[0]));
    *Specs_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_String AnalysisFileName_16 = ((MR_String) ((MR_hl_field(0, MaybeAnalysisFileName_15, (MR_Integer) 0))));
    MR_String CacheDir_17;

    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 706, &CacheDir_17);
    succeeded = (strcmp(CacheDir_17, (MR_String) "") == 0);
    if (succeeded)
      analysis__file__do_read_module_analysis_results_6_p_0(TypeClassInfo_for_compiler_58, Compiler_14, AnalysisFileName_16, ModuleResults_11, Specs_12);
    else
    {
      MR_String CacheFileName_18;
      MR_Word AnalysisTimeResult_19;
      MR_Word CacheTimeResult_20;
      MR_Word Components_72;
      MR_String EscFileName_73;
      MR_Word AnalysisTime_21;
      MR_Word CacheTime_22;
      MR_Word Var_70;

      Components_72 = mercury__string__split_at_separator_2_f_0((MR_Word) (&analysis__file_scalar_common_2[5]), AnalysisFileName_16);
      EscFileName_73 = mercury__string__join_list_2_f_0((MR_String) ":", Components_72);
      CacheFileName_18 = mercury__dir__f_slash_2_f_0(CacheDir_17, EscFileName_73);
      mercury__io__file__file_modification_time_4_p_0(AnalysisFileName_16, &AnalysisTimeResult_19);
      mercury__io__file__file_modification_time_4_p_0(CacheFileName_18, &CacheTimeResult_20);
      succeeded = ((MR_tag((MR_Word) AnalysisTimeResult_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        AnalysisTime_21 = ((MR_Word) ((MR_hl_field(0, AnalysisTimeResult_19, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) CacheTimeResult_20)) == (MR_Integer) 0);
        if (succeeded)
        {
          CacheTime_22 = ((MR_Word) ((MR_hl_field(0, CacheTimeResult_20, (MR_Integer) 0))));
          mercury__time____Compare____time_t_0_0(&Var_70, CacheTime_22, AnalysisTime_21);
          succeeded = (Var_70 != (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word Unpicklers_23;
        MR_Word UnpickleResult_24;
        MR_Word Type_77;
        MR_Word STATE_VARIABLE_Unpicklers_7_78;
        MR_Word Var_82;
        MR_Word Var_83;

        STATE_VARIABLE_Unpicklers_7_78 = libs__pickle__init_unpicklers_0_f_0();
        Var_82 = mercury__type_desc__type_of_1_f_0((MR_Word) (&analysis__analysis__type_ctor_info_some_analysis_result_0));
        Type_77 = mercury__type_desc__type_ctor_1_f_0(Var_82);
        {
          Var_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_83, 0) = ((MR_Box) (&analysis__file_scalar_common_5[1]));
          MR_hl_field(0, Var_83, 1) = ((MR_Box) (analysis__file__read_module_analysis_results_7_p_0_2));
          MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_83, 3) = ((MR_Box) (TypeClassInfo_for_compiler_58));
          MR_hl_field(0, Var_83, 4) = Compiler_14;
        }
        libs__pickle__register_unpickler_4_p_0(Type_77, Var_83, STATE_VARIABLE_Unpicklers_7_78, &Unpicklers_23);
        libs__pickle__unpickle_from_file_5_p_0((MR_Word) (&analysis__file_scalar_common_2[1]), Unpicklers_23, CacheFileName_18, &UnpickleResult_24);
        if (((MR_tag((MR_Word) UnpickleResult_24)) == (MR_Integer) 1))
        {
          MR_Word Error_25 = ((MR_Word) ((MR_hl_field(1, UnpickleResult_24, (MR_Integer) 0))));
          MR_Word ErrorStream_26;
          MR_String ErrorMsg_27;

          libs__globals__get_error_output_stream_5_p_0(Globals_9, ModuleName_10, &ErrorStream_26);
          mercury__io__error_message_2_p_0(Error_25, &ErrorMsg_27);
          mercury__io__write_string_4_p_0(ErrorStream_26, (MR_String) "Error reading ");
          mercury__io__write_string_4_p_0(ErrorStream_26, CacheFileName_18);
          mercury__io__write_string_4_p_0(ErrorStream_26, (MR_String) ": ");
          mercury__io__write_string_4_p_0(ErrorStream_26, ErrorMsg_27);
          mercury__io__write_string_4_p_0(ErrorStream_26, (MR_String) "\n");
          analysis__file__do_read_module_analysis_results_6_p_0(TypeClassInfo_for_compiler_58, Compiler_14, AnalysisFileName_16, ModuleResults_11, Specs_12);
          analysis__file__maybe_write_analysis_cache_file_5_p_0(CacheFileName_18, *ModuleResults_11, *Specs_12);
        }
        else
        {
          *ModuleResults_11 = ((MR_Word) ((MR_hl_field(0, UnpickleResult_24, (MR_Integer) 0))));
          *Specs_12 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      else
      {
        analysis__file__do_read_module_analysis_results_6_p_0(TypeClassInfo_for_compiler_58, Compiler_14, AnalysisFileName_16, ModuleResults_11, Specs_12);
        analysis__file__maybe_write_analysis_cache_file_5_p_0(CacheFileName_18, *ModuleResults_11, *Specs_12);
      }
    }
  }
}

static void MR_CALL 
analysis__file__maybe_write_analysis_cache_file_5_p_0_1(
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
analysis__file__maybe_write_analysis_cache_file_5_p_0(
  MR_String CacheFileName_6,
  MR_Word ModuleResults_7,
  MR_Word Specs_8)
{
  if ((Specs_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String TmpFileName_14;
    MR_Word TmpFileResult_15;

    TmpFileName_14 = mercury__string__f_43_43_2_f_0(CacheFileName_6, (MR_String) ".tmp");
    mercury__io__open_binary_output_4_p_0(TmpFileName_14, &TmpFileResult_15);
    if (((MR_tag((MR_Word) TmpFileResult_15)) == (MR_Integer) 1))
    {
      MR_String Var_37;
      MR_Word Error_38 = ((MR_Word) ((MR_hl_field(1, TmpFileResult_15, (MR_Integer) 0))));

      Var_37 = mercury__io__error_message_1_f_0(Error_38);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.file.write_analysis_cache_file\'/4", Var_37);
        return;
      }
    }
    else
    {
      MR_Word TmpFileStream_16 = ((MR_Word) ((MR_hl_field(0, TmpFileResult_15, (MR_Integer) 0))));
      MR_Word RenameResult_17;
      MR_Word Var_23;
      MR_Word Type_48;
      MR_Word STATE_VARIABLE_Pickles_5_49;
      MR_Word Var_53;

      STATE_VARIABLE_Pickles_5_49 = libs__pickle__init_picklers_0_f_0();
      Var_53 = mercury__type_desc__type_of_1_f_0((MR_Word) (&analysis__analysis__type_ctor_info_some_analysis_result_0));
      Type_48 = mercury__type_desc__type_ctor_1_f_0(Var_53);
      libs__pickle__register_pickler_4_p_0(Type_48, (MR_Word) (&analysis__file_scalar_common_2[4]), STATE_VARIABLE_Pickles_5_49, &Var_23);
      libs__pickle__pickle_5_p_0((MR_Word) (&analysis__file_scalar_common_2[1]), TmpFileStream_16, Var_23, ((MR_Box) (ModuleResults_7)));
      mercury__io__close_binary_output_3_p_0(TmpFileStream_16);
      mercury__io__file__rename_file_5_p_0(TmpFileName_14, CacheFileName_6, &RenameResult_17);
      if (!((RenameResult_17 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word Error_18 = ((MR_Word) ((MR_hl_field(1, RenameResult_17, (MR_Integer) 0))));
        MR_Word StdErrStream_19;
        MR_String Var_34;
        MR_Word Var_20;

        mercury__io__stderr_stream_3_p_0(&StdErrStream_19);
        Var_34 = mercury__io__error_message_1_f_0(Error_18);
        mercury__io__write_string_4_p_0(StdErrStream_19, (MR_String) "Error renaming ");
        mercury__io__write_string_4_p_0(StdErrStream_19, CacheFileName_6);
        mercury__io__write_string_4_p_0(StdErrStream_19, (MR_String) ": ");
        mercury__io__write_string_4_p_0(StdErrStream_19, Var_34);
        mercury__io__write_string_4_p_0(StdErrStream_19, (MR_String) "\n");
        mercury__io__file__remove_file_4_p_0(TmpFileName_14, &Var_20);
      }
    }
  }
}

static void MR_CALL 
analysis__file__do_read_module_analysis_results_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Results_44;
  MR_Word conv0_STATE_VARIABLE_Specs_46;

  analysis__file__parse_result_entry_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Results_44, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_46);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Results_44));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_46));
}

static void MR_CALL 
analysis__file__do_read_module_analysis_results_6_p_0(
  MR_Word TypeClassInfo_for_compiler_51,
  MR_Box Compiler_7,
  MR_String AnalysisFileName_8,
  MR_Word * STATE_VARIABLE_ModuleResults_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_bool succeeded;
  MR_Word FileResult_12;
  MR_Word STATE_VARIABLE_ModuleResults_26_26;

  STATE_VARIABLE_ModuleResults_26_26 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__file_scalar_common_2[0]));
  mercury__io__read_named_file_as_string_4_p_0(AnalysisFileName_8, &FileResult_12);
  if (((MR_tag((MR_Word) FileResult_12)) == (MR_Integer) 1))
  {
    MR_Word MaybeDebugStream_50;

    analysis__get_debug_analysis_stream_3_p_0(&MaybeDebugStream_50);
    if (!((MaybeDebugStream_50 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word DebugStream_48 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_50, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(DebugStream_48, (MR_String) "% Error reading analysis registry file: ");
      mercury__io__write_string_4_p_0(DebugStream_48, AnalysisFileName_8);
      mercury__io__write_string_4_p_0(DebugStream_48, (MR_String) "\n");
    }
    *STATE_VARIABLE_ModuleResults_22 = STATE_VARIABLE_ModuleResults_26_26;
    *STATE_VARIABLE_Specs_23 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_String FileStr_13 = ((MR_String) ((MR_hl_field(0, FileResult_12, (MR_Integer) 0))));
    MR_Word MaybeDebugStream_14;
    MR_Integer MaxOffset_16;
    MR_Word LineContext1_19;
    MR_Word LinePosn1_20;
    MR_Word STATE_VARIABLE_Specs_38_38;
    MR_Word Var_39;
    MR_Word TermResult_70;
    MR_Integer Number_73;
    MR_Word NumberTerm_72;
    MR_Box conv2_STATE_VARIABLE_ModuleResults_22;

    analysis__get_debug_analysis_stream_3_p_0(&MaybeDebugStream_14);
    if (!((MaybeDebugStream_14 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word DebugStream_15 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_14, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(DebugStream_15, (MR_String) "% Reading analysis registry file ");
      mercury__io__write_string_4_p_0(DebugStream_15, AnalysisFileName_8);
      mercury__io__write_string_4_p_0(DebugStream_15, (MR_String) "\n");
    }
    mercury__string__length_2_p_0(FileStr_13, &MaxOffset_16);
    mercury__mercury_term_parser__read_term_from_linestr_8_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), AnalysisFileName_8, FileStr_13, MaxOffset_16, (MR_Word) (&analysis__file_scalar_common_1[3]), &LineContext1_19, (MR_Word) (((MR_Box) ((MR_Integer) 0))), &LinePosn1_20, &TermResult_70);
    succeeded = ((MR_tag((MR_Word) TermResult_70)) == (MR_Integer) 2);
    if (succeeded)
    {
      NumberTerm_72 = ((MR_Word) ((MR_hl_field(2, TermResult_70, (MR_Integer) 1))));
      succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NumberTerm_72, &Number_73);
    }
    if (succeeded)
    {
      succeeded = (Number_73 == (MR_Integer) 6);
      if (succeeded)
        STATE_VARIABLE_Specs_38_38 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Pieces_74;
        MR_Integer LineNumber_75;
        MR_Word Context_77;
        MR_Word Spec_78;
        MR_Word Var_83;
        MR_Word Var_86;
        MR_Word Var_89;
        MR_Word Var_92;
        MR_Word Var_95;
        MR_Word Var_96;

        {
          Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_96, 1) = ((MR_Box) (Number_73));
        }
        {
          Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
          MR_hl_field(1, Var_95, 1) = ((MR_Box) (MR_mkword(1, &analysis__file_scalar_common_1[7])));
        }
        {
          Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_92, 0) = ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[13])));
          MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_95));
        }
        {
          Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_89, 0) = ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[12])));
          MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_92));
        }
        {
          Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_86, 0) = ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[21])));
          MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_89));
        }
        {
          Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_83, 0) = ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[11])));
          MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_86));
        }
        {
          Pieces_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_74, 0) = ((MR_Box) (MR_mkword(3, &analysis__file_scalar_common_1[10])));
          MR_hl_field(1, Pieces_74, 1) = ((MR_Box) (Var_83));
        }
        LineNumber_75 = ((MR_Integer) ((MR_hl_field(0, (MR_Word) (&analysis__file_scalar_common_1[3]), (MR_Integer) 0))));
        {
          Context_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Context_77, 0) = ((MR_Box) (AnalysisFileName_8));
          MR_hl_field(0, Context_77, 1) = ((MR_Box) (LineNumber_75));
        }
        {
          Spec_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_78, 0) = ((MR_Box) ((MR_String) "predicate \140analysis.file.check_analysis_file_version_number\'/9"));
          MR_hl_field(1, Spec_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_78, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(1, Spec_78, 3) = ((MR_Box) (Context_77));
          MR_hl_field(1, Spec_78, 4) = ((MR_Box) (Pieces_74));
        }
        {
          STATE_VARIABLE_Specs_38_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_38_38, 0) = ((MR_Box) (Spec_78));
          MR_hl_field(1, STATE_VARIABLE_Specs_38_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
    else
    {
      MR_Integer LineNumber_117 = ((MR_Integer) ((MR_hl_field(0, (MR_Word) (&analysis__file_scalar_common_1[3]), (MR_Integer) 0))));
      MR_Word Context_118;
      MR_Word Spec_119;

      {
        Context_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Context_118, 0) = ((MR_Box) (AnalysisFileName_8));
        MR_hl_field(0, Context_118, 1) = ((MR_Box) (LineNumber_117));
      }
      {
        Spec_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_119, 0) = ((MR_Box) ((MR_String) "predicate \140analysis.file.check_analysis_file_version_number\'/9"));
        MR_hl_field(1, Spec_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_119, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(1, Spec_119, 3) = ((MR_Box) (Context_118));
        MR_hl_field(1, Spec_119, 4) = ((MR_Box) (MR_mkword(1, &analysis__file_scalar_common_1[25])));
      }
      {
        STATE_VARIABLE_Specs_38_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_38_38, 0) = ((MR_Box) (Spec_119));
        MR_hl_field(1, STATE_VARIABLE_Specs_38_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (&analysis__file_scalar_common_5[0]));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) (analysis__file__do_read_module_analysis_results_6_p_0_1));
      MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_39, 3) = ((MR_Box) (TypeClassInfo_for_compiler_51));
      MR_hl_field(0, Var_39, 4) = Compiler_7;
    }
    analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_101_110_116_114_105_101_115_95_95_91_49_93_95_48_10_p_0(AnalysisFileName_8, FileStr_13, MaxOffset_16, Var_39, LineContext1_19, LinePosn1_20, ((MR_Box) (STATE_VARIABLE_ModuleResults_26_26)), &conv2_STATE_VARIABLE_ModuleResults_22, STATE_VARIABLE_Specs_38_38, STATE_VARIABLE_Specs_23);
    *STATE_VARIABLE_ModuleResults_22 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleResults_22));
  }
}

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_101_110_116_114_105_101_115_95_95_91_49_93_95_48_10_p_0(
  MR_String FileName_11,
  MR_String FileStr_12,
  MR_Integer MaxOffset_13,
  MR_Word ParseEntry_14,
  MR_Word STATE_VARIABLE_LineContext_0_30,
  MR_Word STATE_VARIABLE_LinePosn_0_31,
  MR_Box STATE_VARIABLE_Results_0_32,
  MR_Box * STATE_VARIABLE_Results_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  while (MR_TRUE)
  {
    MR_Word TermResult_20;
    MR_Word STATE_VARIABLE_LineContext_36_36;
    MR_Word STATE_VARIABLE_LinePosn_37_37;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__mercury_term_parser__read_term_from_linestr_8_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FileName_11, FileStr_12, MaxOffset_13, STATE_VARIABLE_LineContext_0_30, &STATE_VARIABLE_LineContext_36_36, STATE_VARIABLE_LinePosn_0_31, &STATE_VARIABLE_LinePosn_37_37, &TermResult_20);
    switch (MR_tag((MR_Word) TermResult_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Results_33 = STATE_VARIABLE_Results_0_32;
          *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Msg_23 = ((MR_String) ((MR_hl_field(1, TermResult_20, (MR_Integer) 0))));
          MR_Word Pieces_25;
          MR_Integer LineNumber_26;
          MR_Word Context_28;
          MR_Word Spec_29;
          MR_Word Var_43;

          {
            Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_43, 1) = ((MR_Box) (Msg_23));
          }
          {
            Pieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_25, 0) = ((MR_Box) (Var_43));
            MR_hl_field(1, Pieces_25, 1) = ((MR_Box) (MR_mkword(1, &analysis__file_scalar_common_1[5])));
          }
          LineNumber_26 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LineContext_0_30, (MR_Integer) 0))));
          {
            Context_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Context_28, 0) = ((MR_Box) (FileName_11));
            MR_hl_field(0, Context_28, 1) = ((MR_Box) (LineNumber_26));
          }
          {
            Spec_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140analysis.file.parse_analysis_file_entries\'/10"));
            MR_hl_field(1, Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(1, Spec_29, 3) = ((MR_Box) (Context_28));
            MR_hl_field(1, Spec_29, 4) = ((MR_Box) (Pieces_25));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_35 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_29));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_34));
          }
          *STATE_VARIABLE_Results_33 = STATE_VARIABLE_Results_0_32;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word VarSet_21 = ((MR_Word) ((MR_hl_field(2, TermResult_20, (MR_Integer) 0))));
          MR_Word Term_22 = ((MR_Word) ((MR_hl_field(2, TermResult_20, (MR_Integer) 1))));
          MR_Box STATE_VARIABLE_Results_39_39;
          MR_Word STATE_VARIABLE_Specs_40_40;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, ParseEntry_14, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_Specs_40_40;
          MR_Word next_value_of_STATE_VARIABLE_LineContext_0_30;
          MR_Word next_value_of_STATE_VARIABLE_LinePosn_0_31;
          MR_Box next_value_of_STATE_VARIABLE_Results_0_32;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_34;

          func_0(((MR_Box) (ParseEntry_14)), ((MR_Box) (VarSet_21)), ((MR_Box) (Term_22)), STATE_VARIABLE_Results_0_32, &STATE_VARIABLE_Results_39_39, ((MR_Box) (STATE_VARIABLE_Specs_0_34)), &conv1_STATE_VARIABLE_Specs_40_40);
          STATE_VARIABLE_Specs_40_40 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_40_40));
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_LineContext_0_30 = STATE_VARIABLE_LineContext_36_36;
          next_value_of_STATE_VARIABLE_LinePosn_0_31 = STATE_VARIABLE_LinePosn_37_37;
          next_value_of_STATE_VARIABLE_Results_0_32 = STATE_VARIABLE_Results_39_39;
          next_value_of_STATE_VARIABLE_Specs_0_34 = STATE_VARIABLE_Specs_40_40;
          STATE_VARIABLE_LineContext_0_30 = next_value_of_STATE_VARIABLE_LineContext_0_30;
          STATE_VARIABLE_LinePosn_0_31 = next_value_of_STATE_VARIABLE_LinePosn_0_31;
          STATE_VARIABLE_Results_0_32 = next_value_of_STATE_VARIABLE_Results_0_32;
          STATE_VARIABLE_Specs_0_34 = next_value_of_STATE_VARIABLE_Specs_0_34;
          continue;
        }
        break;
    }
    break;
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
