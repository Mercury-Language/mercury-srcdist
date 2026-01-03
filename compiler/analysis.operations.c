/*
** Automatically generated from `analysis.operations.m'
** by the Mercury compiler,
** version rotd-2026-01-03
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


// :- module analysis.operations.
// :- implementation.

/*
INIT mercury__analysis__operations__init
REQUIRED_INIT mercury__analysis__operations__required_init
ENDINIT
*/

#include "analysis.operations.mih"
#include "analysis.operations.mh"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
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
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.file.mih"
#include "analysis.framework.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 analysis__operations__analysis__framework__pti_analysis_result_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__operations__analysis__framework__pti_analysis_result_2__pseudo_2__pseudo_3;

static const MR_FA_PseudoTypeInfo_Struct1 analysis__operations__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 analysis__operations__list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__operations__tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0;

static const MR_FA_PseudoTypeInfo_Struct1 analysis__operations__list__pti_list_1__plain_analysis__framework__type_ctor_info_some_analysis_result_0;

static const MR_FA_TypeInfo_Struct1 analysis__operations__list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__operations__tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0;

static const MR_FA_PseudoTypeInfo_Struct1 analysis__operations__list__pti_list_1__plain_analysis__operations__type_ctor_info_imdg_arc_0;

static const MR_FA_TypeInfo_Struct1 analysis__operations__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 analysis__operations__list__ti_list_1analysis__operations__type_ctor_info_analysis_request_0;

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_analysis_request_0;

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_analysis_request_0;

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_analysis_request_0;

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0analysis__framework__type_ctor_info_analysis_status_0;

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0;

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0;

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0;

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0;

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0;

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0;

static const MR_PseudoTypeInfo analysis__operations__analysis__operations__field_types_analysis_info_0_0[10];

static const MR_ConstString analysis__operations__analysis__operations__field_names_analysis_info_0_0[10];

static const MR_DuArgLocn analysis__operations__analysis__operations__field_locns_analysis_info_0_0[10];

static const MR_TypeClassConstraint_1Struct analysis__operations__analysis__operations__exist_tc_constr_analysis_info_0_0_1;

static const MR_TypeClassConstraint analysis__operations__analysis__operations__exist_tc_constrs_analysis_info_0_0[1];

static const MR_DuExistLocn analysis__operations__analysis__operations__exist_locns_analysis_info_0_0[1];

static const MR_DuExistInfo analysis__operations__analysis__operations__exist_info_analysis_info_0_0;

static const MR_DuFunctorDesc analysis__operations__analysis__operations__du_functor_desc_analysis_info_0_0;

static const MR_DuFunctorDescPtr analysis__operations__analysis__operations__du_stag_ordered_analysis_info_0_0[1];

static const MR_DuPtagLayout analysis__operations__analysis__operations__du_ptag_ordered_analysis_info_0[1];

static const MR_DuFunctorDescPtr analysis__operations__analysis__operations__du_name_ordered_analysis_info_0[1];

static const MR_Integer analysis__operations__analysis__operations__functor_number_map_analysis_info_0[1];

static const MR_PseudoTypeInfo analysis__operations__analysis__operations__field_types_analysis_request_0_0[2];

static const MR_ConstString analysis__operations__analysis__operations__field_names_analysis_request_0_0[2];

static const MR_TypeClassConstraint_2Struct analysis__operations__analysis__operations__exist_tc_constr_analysis_request_0_0_1;

static const MR_TypeClassConstraint analysis__operations__analysis__operations__exist_tc_constrs_analysis_request_0_0[1];

static const MR_DuExistLocn analysis__operations__analysis__operations__exist_locns_analysis_request_0_0[2];

static const MR_DuExistInfo analysis__operations__analysis__operations__exist_info_analysis_request_0_0;

static const MR_DuFunctorDesc analysis__operations__analysis__operations__du_functor_desc_analysis_request_0_0;

static const MR_DuFunctorDescPtr analysis__operations__analysis__operations__du_stag_ordered_analysis_request_0_0[1];

static const MR_DuPtagLayout analysis__operations__analysis__operations__du_ptag_ordered_analysis_request_0[1];

static const MR_DuFunctorDescPtr analysis__operations__analysis__operations__du_name_ordered_analysis_request_0[1];

static const MR_Integer analysis__operations__analysis__operations__functor_number_map_analysis_request_0[1];

static const MR_EnumFunctorDesc analysis__operations__analysis__operations__enum_functor_desc_any_call_0_0;

static const MR_EnumFunctorDescPtr analysis__operations__analysis__operations__enum_ordinal_ordered_any_call_0[1];

static const MR_EnumFunctorDescPtr analysis__operations__analysis__operations__enum_name_ordered_any_call_0[1];

static const MR_Integer analysis__operations__analysis__operations__functor_number_map_any_call_0[1];

static const MR_PseudoTypeInfo analysis__operations__analysis__operations__field_types_imdg_arc_0_0[2];

static const MR_ConstString analysis__operations__analysis__operations__field_names_imdg_arc_0_0[2];

static const MR_TypeClassConstraint_2Struct analysis__operations__analysis__operations__exist_tc_constr_imdg_arc_0_0_1;

static const MR_TypeClassConstraint analysis__operations__analysis__operations__exist_tc_constrs_imdg_arc_0_0[1];

static const MR_DuExistLocn analysis__operations__analysis__operations__exist_locns_imdg_arc_0_0[2];

static const MR_DuExistInfo analysis__operations__analysis__operations__exist_info_imdg_arc_0_0;

static const MR_DuFunctorDesc analysis__operations__analysis__operations__du_functor_desc_imdg_arc_0_0;

static const MR_DuFunctorDescPtr analysis__operations__analysis__operations__du_stag_ordered_imdg_arc_0_0[1];

static const MR_DuPtagLayout analysis__operations__analysis__operations__du_ptag_ordered_imdg_arc_0[1];

static const MR_DuFunctorDescPtr analysis__operations__analysis__operations__du_name_ordered_imdg_arc_0[1];

static const MR_Integer analysis__operations__analysis__operations__functor_number_map_imdg_arc_0[1];

static const MR_EnumFunctorDesc analysis__operations__analysis__operations__enum_functor_desc_make_analysis_registry_0_0;

static const MR_EnumFunctorDesc analysis__operations__analysis__operations__enum_functor_desc_make_analysis_registry_0_1;

static const MR_EnumFunctorDescPtr analysis__operations__analysis__operations__enum_ordinal_ordered_make_analysis_registry_0[2];

static const MR_EnumFunctorDescPtr analysis__operations__analysis__operations__enum_name_ordered_make_analysis_registry_0[2];

static const MR_Integer analysis__operations__analysis__operations__functor_number_map_make_analysis_registry_0[2];

static const MR_EnumFunctorDesc analysis__operations__analysis__operations__enum_functor_desc_no_func_info_0_0;

static const MR_EnumFunctorDescPtr analysis__operations__analysis__operations__enum_ordinal_ordered_no_func_info_0[1];

static const MR_EnumFunctorDescPtr analysis__operations__analysis__operations__enum_name_ordered_no_func_info_0[1];

static const MR_Integer analysis__operations__analysis__operations__functor_number_map_no_func_info_0[1];

static MR_bool MR_CALL 
analysis__operations__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1109__1_2_p_0(
  MR_Word ModuleName_4,
  MR_Word LambdaHeadVar__1_9);

static MR_bool MR_CALL 
analysis__operations__IntroducedFrom__func__update_analysis_registry_5__871__1_1_f_0(
  MR_Word LambdaHeadVar__1_62,
  MR_Word * LambdaHeadVar__2_63);

static MR_Word MR_CALL 
analysis__operations__IntroducedFrom__func__lookup_results_2__588__1_2_f_0(
  MR_Word TypeClassInfo_for_analysis_29,
  MR_Word LambdaHeadVar__1_24);

static MR_bool MR_CALL 
analysis__operations__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__420__1_4_p_0(
  MR_Word TypeClassInfo_for_analysis_31,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word LambdaHeadVar__1_22);

static MR_bool MR_CALL 
analysis__operations__IntroducedFrom__func__lookup_requests__689__1_2_f_0(
  MR_Word TypeClassInfo_for_call_pattern_45,
  MR_Word LambdaHeadVar__1_22,
  MR_Box * LambdaHeadVar__2_23);

static MR_Box MR_CALL 
analysis__operations__IntroducedFrom__func__lookup_existing_call_patterns__667__1_2_f_0(
  MR_Word TypeClassInfo_for_call_pattern_45,
  MR_Word LambdaHeadVar__1_23);

static MR_bool MR_CALL 
analysis__operations__IntroducedFrom__pred__lookup_matching_results__603__1_4_p_0(
  MR_Word TypeClassInfo_for_analysis_21,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word LambdaHeadVar__1_17);

static MR_bool MR_CALL 
analysis__operations__ClassMethod_for_analysis__framework__to_term____analysis__operations__any_call__arity0______analysis__framework__from_term_2_2_p_0(
  MR_Word Term_3);

static MR_Word MR_CALL 
analysis__operations__ClassMethod_for_analysis__framework__to_term____analysis__operations__any_call__arity0______analysis__framework__to_term_1_1_f_0(void);

static MR_bool MR_CALL 
analysis__operations__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0______analysis__framework__equivalent_3_3_p_0(void);

static MR_bool MR_CALL 
analysis__operations__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0______analysis__framework__more_precise_than_3_3_p_0(void);

static void MR_CALL 
analysis__operations____Compare____make_analysis_registry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
analysis__operations____Unify____make_analysis_registry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
analysis__operations__unsafe_set_debug_analysis_stream_1_p_0(
  MR_Word X_1);

static void MR_CALL 
analysis__operations__unsafe_get_debug_analysis_stream_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
analysis__operations__unlock_debug_analysis_stream_0_p_0(void);

static void MR_CALL 
analysis__operations__lock_debug_analysis_stream_0_p_0(void);

static void MR_CALL 
analysis__operations__pre_initialise_mutable_debug_analysis_stream_0_p_0(void);

static void MR_CALL 
analysis__operations__initialise_mutable_debug_analysis_stream_0_p_0(void);

static MR_Word MR_CALL 
analysis__operations__lub_result_statuses_4_2_f_0(
  MR_Word Result_4,
  MR_Word Acc_5);

static MR_Word MR_CALL 
analysis__operations__lub_result_statuses_3_3_f_0(
  MR_Word _FuncId_5,
  MR_Word Results_6,
  MR_Word Acc_7);

static MR_Box MR_CALL 
analysis__operations__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
analysis__operations__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0(
  MR_Word Results_6,
  MR_Word Acc_7);

static MR_Word MR_CALL 
analysis__operations__lub_result_statuses_2_3_f_0(
  MR_String _AnalysisName_5,
  MR_Word FuncMap_6,
  MR_Word Acc_7);

static MR_Box MR_CALL 
analysis__operations__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Word MR_CALL 
analysis__operations__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0(
  MR_Word FuncMap_6,
  MR_Word Acc_7);

static void MR_CALL 
analysis__operations__maybe_write_module_imdg_5_p_0(
  MR_Word Info_6,
  MR_Word Globals_7,
  MR_Word ModuleName_8);

static void MR_CALL 
analysis__operations__maybe_write_module_requests_5_p_0(
  MR_Word Info_6,
  MR_Word Globals_7,
  MR_Word ModuleName_8);

static void MR_CALL 
analysis__operations__maybe_write_module_overall_status_5_p_0(
  MR_Word Info_6,
  MR_Word Globals_7,
  MR_Word ModuleName_8);

static void MR_CALL 
analysis__operations__load_module_imdg_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
analysis__operations__combine_imdg_lists_3_p_0(
  MR_Word ArcsA_4,
  MR_Word ArcsB_5,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
analysis__operations__combine_func_imdg_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__operations__combine_func_imdg_3_p_0(
  MR_Word FuncImdgA_4,
  MR_Word FuncImdgB_5,
  MR_Word * FuncImdg_6);

static MR_bool MR_CALL 
analysis__operations__clear_imdg_entries_pointing_at_3_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis__operations__clear_imdg_entries_pointing_at_3_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Arcs0_5,
  MR_Word * Arcs_6);

static void MR_CALL 
analysis__operations__clear_imdg_entries_pointing_at_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__operations__clear_imdg_entries_pointing_at_2_3_p_0(
  MR_Word ModuleName_4,
  MR_Word FuncMap0_5,
  MR_Word * FuncMap_6);

static void MR_CALL 
analysis__operations__update_intermodule_dependencies_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__operations__update_intermodule_dependencies_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__operations__update_intermodule_dependencies_2_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ImportedModuleName_6,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
analysis__operations__taint_module_overall_status_7_p_0(
  MR_Word Globals_8,
  MR_Word Status_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static MR_bool MR_CALL 
analysis__operations__arc_module_name_4_p_0(
  MR_Word TypeClassInfo_for_call_pattern_11,
  MR_Box FuncInfo_5,
  MR_Box CallA_6,
  MR_Word HeadVar__3_3,
  MR_Word * ModuleName_8);

static void MR_CALL 
analysis__operations__update_analysis_registry_5_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
analysis__operations__update_analysis_registry_5_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__operations__update_analysis_registry_5_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
analysis__operations__update_analysis_registry_5_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ModuleName_11,
  MR_String AnalysisName_12,
  MR_Word FuncId_13,
  MR_Word NewResult_14,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46);

static void MR_CALL 
analysis__operations__get_debug_analysis_stream_3_p_0(
  MR_Word * X_4);

static void MR_CALL 
analysis__operations__write_changed_answer_7_p_0(
  MR_Word TypeInfo_for_Answer_37,
  MR_Word OutStream_8,
  MR_Box OldAnswer_9,
  MR_Box NewAnswer_10,
  MR_Word Status_11,
  MR_Word DepModules_12);

static void MR_CALL 
analysis__operations__write_no_change_in_result_7_p_0(
  MR_Word TypeInfo_for_Call_31,
  MR_Word TypeInfo_for_Answer_32,
  MR_Word OutStream_8,
  MR_Word ModuleName_9,
  MR_Word FuncId_10,
  MR_Box Call_11,
  MR_Box NewAnswer_12);

static MR_bool MR_CALL 
analysis__operations__imdg_dependent_modules_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
analysis__operations__imdg_dependent_modules_5_f_0(
  MR_Word TypeClassInfo_for_call_pattern_17,
  MR_Word ModuleMap_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Box FuncInfo_10,
  MR_Box Call_11);

static void MR_CALL 
analysis__operations__replace_result_in_analysis_map_8_p_0(
  MR_Word TypeClassInfo_for_analysis_24,
  MR_Word ModuleName_9,
  MR_Word FuncId_10,
  MR_Box FuncInfo_11,
  MR_Box CallPattern_12,
  MR_Box AnswerPattern_13,
  MR_Word Status_14,
  MR_Word Map0_15,
  MR_Word * Map_16);

static void MR_CALL 
analysis__operations__replace_result_in_list_6_p_0(
  MR_Word TypeClassInfo_for_analysis_24,
  MR_Box FuncInfo_7,
  MR_Box Call_8,
  MR_Box Answer_9,
  MR_Word Status_10,
  MR_Word Results0_11,
  MR_Word * Results_12);

static void MR_CALL 
analysis__operations__update_analysis_registry_4_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
analysis__operations__update_analysis_registry_4_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ModuleName_11,
  MR_String AnalysisName_12,
  MR_Word FuncId_13,
  MR_Word NewResults_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
analysis__operations__update_analysis_registry_3_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
analysis__operations__update_analysis_registry_3_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ModuleName_10,
  MR_String AnalysisName_11,
  MR_Word FuncMap_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
analysis__operations__more_precise_answer_4_p_0(
  MR_Word TypeClassInfo_for_analysis_15,
  MR_Box FuncInfo_5,
  MR_Word Result_6,
  MR_Word Best0_7,
  MR_Word * Best_8);

static void MR_CALL 
analysis__operations__record_result_in_analysis_map_6_p_0(
  MR_Word TypeClassInfo_for_analysis_21,
  MR_Word FuncId_7,
  MR_Box CallPattern_8,
  MR_Box AnswerPattern_9,
  MR_Word Status_10,
  MR_Word ModuleResults0_11,
  MR_Word * ModuleResults_12);

static MR_bool MR_CALL 
analysis__operations__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis__operations__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(
  MR_Word TypeClassInfo_for_analysis_31,
  MR_Word Info_7,
  MR_Word ModuleName_8,
  MR_Word FuncId_9,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word * MaybeResult_12);

static void MR_CALL 
analysis__operations__write_analysis_files_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__operations__write_analysis_files_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__operations__write_analysis_files_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__operations__write_analysis_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_Box MR_CALL 
analysis__operations__lub_result_statuses_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Word MR_CALL 
analysis__operations__lub_result_statuses_1_f_0(
  MR_Word ModuleMap_3);

static void MR_CALL 
analysis__operations__update_intermodule_dependencies_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__operations__update_intermodule_dependencies_4_p_0(
  MR_Word ModuleName_5,
  MR_Word LocalImportedModules_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
analysis__operations__update_analysis_registry_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
analysis__operations__update_analysis_registry_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
analysis__operations__prepare_intermodule_analysis_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
analysis__operations__load_module_analysis_results_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static MR_bool MR_CALL 
analysis__operations__lookup_requests_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
analysis__operations__lookup_existing_call_patterns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis__operations__lookup_best_result_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
analysis__operations__lookup_matching_results_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
analysis__operations__record_dependency_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
analysis__operations__lookup_results_1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis__operations__lookup_results_1_5_p_0(
  MR_Word TypeClassInfo_for_analysis_58,
  MR_Word Info_6,
  MR_Word ModuleName_7,
  MR_Word FuncId_8,
  MR_Word AllowInvalidModules_9,
  MR_Word * ResultList_10);

static void MR_CALL 
analysis__operations__record_dependency_2_7_p_0(
  MR_Word TypeClassInfo_for_call_pattern_47,
  MR_Word CallerModuleName_8,
  MR_String AnalysisName_9,
  MR_Word CalleeModuleName_10,
  MR_Word FuncId_11,
  MR_Box Call_12,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
analysis__operations__record_request_2_7_p_0(
  MR_Word TypeClassInfo_for_call_pattern_47,
  MR_Word CallerModule_8,
  MR_String AnalysisName_9,
  MR_Word ModuleName_10,
  MR_Word FuncId_11,
  MR_Box CallPattern_12,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static MR_bool MR_CALL 
analysis__operations____Unify____analysis_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__operations____Compare____analysis_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__operations____Unify____analysis_request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__operations____Compare____analysis_request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__operations____Unify____any_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__operations____Compare____any_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__operations____Unify____imdg_arc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__operations____Compare____imdg_arc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__operations____Unify____make_analysis_registry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__operations____Compare____make_analysis_registry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__operations____Unify____no_func_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__operations____Compare____no_func_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
analysis__operations__ClassMethod_for_analysis__framework__to_term____analysis__operations__any_call__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
analysis__operations__ClassMethod_for_analysis__framework__to_term____analysis__operations__any_call__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
analysis__operations__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__operations__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box analysis__operations_scalar_common_1[6][2];

static /* final */ const MR_Box analysis__operations_scalar_common_2[16][3];

static /* final */ const MR_Box analysis__operations_scalar_common_3[1][1];

static /* final */ const MR_Integer analysis__operations_scalar_common_4[2][3];

static /* final */ const MR_Box analysis__operations_scalar_common_5[8][6];

static /* final */ const MR_Integer analysis__operations_scalar_common_6[1][4];

static /* final */ const MR_Box analysis__operations_scalar_common_7[4][7];

static /* final */ const MR_Box analysis__operations_scalar_common_8[3][8];

static /* final */ const MR_Integer analysis__operations_scalar_common_9[1][2];

static /* final */ const MR_Box analysis__operations_scalar_common_10[3][12];

static /* final */ const MR_Box analysis__operations_scalar_common_11[2][11];

static /* final */ const MR_Box analysis__operations_scalar_common_12[1][10];

static /* final */ const MR_Box analysis__operations_scalar_common_13[2][5];




static /* final */ const MR_Box analysis__operations_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_request_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_some_analysis_result_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_imdg_arc_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 10U)
  },
};

static /* final */ const MR_Box analysis__operations_scalar_common_2[16][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__operations_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__operations_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__operations_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__operations_scalar_common_2[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__operations_scalar_common_1[2]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__operations_scalar_common_2[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__operations_scalar_common_2[1]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__operations_scalar_common_2[3]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__operations_scalar_common_2[5]))
  },
  /* row  10 */
  {
    ((MR_Box) (&analysis__operations_scalar_common_7[2])),
    ((MR_Box) (analysis__operations__lub_result_statuses_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&analysis__operations_scalar_common_13[0])),
    ((MR_Box) (analysis__operations__update_analysis_registry_5_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&analysis__operations_scalar_common_5[4])),
    ((MR_Box) (analysis__operations__update_intermodule_dependencies_2_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&analysis__operations_scalar_common_5[6])),
    ((MR_Box) (analysis__operations__combine_func_imdg_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&analysis__operations_scalar_common_7[3])),
    ((MR_Box) (analysis__operations__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&analysis__operations_scalar_common_5[7])),
    ((MR_Box) (analysis__operations__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box analysis__operations_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "any")) },
};

static /* final */ const MR_Integer analysis__operations_scalar_common_4[2][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67727,
    (MR_Integer) 67759
  },
  /* row   1 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67695,
    (MR_Integer) 67727
  },
};

static /* final */ const MR_Box analysis__operations_scalar_common_5[8][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&analysis__operations_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__operations__analysis__framework__pti_analysis_result_2__pseudo_1__pseudo_2))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&analysis__operations_scalar_common_9[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&analysis__operations_scalar_common_9[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_request_0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__operations__tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__operations__tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&analysis__operations__tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__operations__tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__operations__tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__operations__list__pti_list_1__plain_analysis__operations__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__operations__list__pti_list_1__plain_analysis__operations__type_ctor_info_imdg_arc_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&analysis__operations__list__pti_list_1__plain_analysis__operations__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__operations__list__pti_list_1__plain_analysis__operations__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__operations__list__pti_list_1__plain_analysis__operations__type_ctor_info_imdg_arc_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0))
  },
};

static /* final */ const MR_Integer analysis__operations_scalar_common_6[1][4] = {
  /* row   0 */
  {
    (MR_Integer) 3,
    (MR_Integer) 67695,
    (MR_Integer) 67727,
    (MR_Integer) 67759
  },
};

static /* final */ const MR_Box analysis__operations_scalar_common_7[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&analysis__operations_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&analysis__operations__analysis__framework__pti_analysis_result_2__pseudo_2__pseudo_3))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__operations__tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__operations__list__pti_list_1__plain_analysis__framework__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0))
  },
};

static /* final */ const MR_Box analysis__operations_scalar_common_8[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&analysis__operations_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&analysis__operations__analysis__framework__pti_analysis_result_2__pseudo_2__pseudo_3)),
    ((MR_Box) (&analysis__operations__analysis__framework__pti_analysis_result_2__pseudo_2__pseudo_3)),
    ((MR_Box) (&analysis__operations__analysis__framework__pti_analysis_result_2__pseudo_2__pseudo_3))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&analysis__operations_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Integer analysis__operations_scalar_common_9[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67727
  },
};

static /* final */ const MR_Box analysis__operations_scalar_common_10[3][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&analysis__operations__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__operations__list__pti_list_1__plain_analysis__framework__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis__operations_scalar_common_11[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__operations__tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&analysis__operations__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis__operations_scalar_common_12[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis__operations_scalar_common_13[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_analysis_request_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__operations__analysis__operations__type_ctor_info_imdg_arc_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "analysis.operations.mh"
#include "io.stream_ops.mh"
#line 1365 "analysis.operations.m"
MR_Word analysis__operations__mutable_variable_debug_analysis_stream;
#ifdef MR_THREAD_SAFE
    MercuryLock analysis__operations__mutable_variable_debug_analysis_stream_lock;
#endif


#line 1365 "analysis.operations.m"
void 
analysis__operations__user_init_pred_147_0(void)
#line 1365 "analysis.operations.m"
{
#line 1365 "analysis.operations.m"
	analysis__operations__initialise_mutable_debug_analysis_stream_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct2 analysis__operations__analysis__framework__pti_analysis_result_2__pseudo_1__pseudo_2 = {
  &analysis__framework__analysis__framework__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__operations__analysis__framework__pti_analysis_result_2__pseudo_2__pseudo_3 = {
  &analysis__framework__analysis__framework__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 3)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__operations__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 analysis__operations__list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&analysis__framework__analysis__framework__type_ctor_info_some_analysis_result_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__operations__tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0),
    (MR_PseudoTypeInfo) (&analysis__operations__list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__operations__list__pti_list_1__plain_analysis__framework__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&analysis__framework__analysis__framework__type_ctor_info_some_analysis_result_0) }
};

static const MR_FA_TypeInfo_Struct1 analysis__operations__list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&analysis__operations__analysis__operations__type_ctor_info_imdg_arc_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__operations__tree234__pti_tree234_2__plain_analysis__framework__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0),
    (MR_PseudoTypeInfo) (&analysis__operations__list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__operations__list__pti_list_1__plain_analysis__operations__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&analysis__operations__analysis__operations__type_ctor_info_imdg_arc_0) }
};

static const MR_FA_TypeInfo_Struct1 analysis__operations__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct1 analysis__operations__list__ti_list_1analysis__operations__type_ctor_info_analysis_request_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&analysis__operations__analysis__operations__type_ctor_info_analysis_request_0) }
};

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0),
    (MR_TypeInfo) (&analysis__operations__list__ti_list_1analysis__operations__type_ctor_info_analysis_request_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&analysis__operations__tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_analysis_request_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&analysis__operations__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_analysis_request_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0analysis__framework__type_ctor_info_analysis_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0),
    (MR_TypeInfo) (&analysis__operations__list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&analysis__operations__tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&analysis__operations__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0),
    (MR_TypeInfo) (&analysis__operations__list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&analysis__operations__tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__operations__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&analysis__operations__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0)
  }
};

static const MR_PseudoTypeInfo analysis__operations__analysis__operations__field_types_analysis_info_0_0[10] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 513),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&analysis__operations__analysis__operations__type_ctor_info_make_analysis_registry_0),
  (MR_PseudoTypeInfo) (&analysis__operations__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&analysis__operations__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_analysis_request_0),
  (MR_PseudoTypeInfo) (&analysis__operations__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0analysis__framework__type_ctor_info_analysis_status_0),
  (MR_PseudoTypeInfo) (&analysis__operations__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0),
  (MR_PseudoTypeInfo) (&analysis__operations__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__framework__type_ctor_info_some_analysis_result_0),
  (MR_PseudoTypeInfo) (&analysis__operations__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0),
  (MR_PseudoTypeInfo) (&analysis__operations__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__framework__type_ctor_info_func_id_0list__ti_list_1analysis__operations__type_ctor_info_imdg_arc_0)
};

static const MR_ConstString analysis__operations__analysis__operations__field_names_analysis_info_0_0[10] = {
  (MR_String) "compiler",
  (MR_String) "this_module",
  (MR_String) "make_analysis_registry",
  (MR_String) "local_module_names",
  (MR_String) "analysis_requests_map",
  (MR_String) "module_status_map",
  (MR_String) "old_analysis_results",
  (MR_String) "new_analysis_results",
  (MR_String) "old_imdg_map",
  (MR_String) "new_imdg_map"
};

static const MR_DuArgLocn analysis__operations__analysis__operations__field_locns_analysis_info_0_0[10] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_TypeClassConstraint_1Struct analysis__operations__analysis__operations__exist_tc_constr_analysis_info_0_0_1 = {
  &analysis__framework__analysis__framework__type_class_decl_compiler_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_TypeClassConstraint analysis__operations__analysis__operations__exist_tc_constrs_analysis_info_0_0[1] = { (MR_TypeClassConstraint) (&analysis__operations__analysis__operations__exist_tc_constr_analysis_info_0_0_1) };

static const MR_DuExistLocn analysis__operations__analysis__operations__exist_locns_analysis_info_0_0[1] = {
  {
    INT16_C(0),
    INT16_C(1)
  }
};

static const MR_DuExistInfo analysis__operations__analysis__operations__exist_info_analysis_info_0_0 = {
  INT16_C(0),
  INT16_C(1),
  INT16_C(1),
  analysis__operations__analysis__operations__exist_locns_analysis_info_0_0,
  analysis__operations__analysis__operations__exist_tc_constrs_analysis_info_0_0
};

static const MR_DuFunctorDesc analysis__operations__analysis__operations__du_functor_desc_analysis_info_0_0 = {
  (MR_String) "analysis_info",
  INT16_C(10),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  analysis__operations__analysis__operations__field_types_analysis_info_0_0,
  analysis__operations__analysis__operations__field_names_analysis_info_0_0,
  analysis__operations__analysis__operations__field_locns_analysis_info_0_0,
  &analysis__operations__analysis__operations__exist_info_analysis_info_0_0,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr analysis__operations__analysis__operations__du_stag_ordered_analysis_info_0_0[1] = { &analysis__operations__analysis__operations__du_functor_desc_analysis_info_0_0 };

static const MR_DuPtagLayout analysis__operations__analysis__operations__du_ptag_ordered_analysis_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    analysis__operations__analysis__operations__du_stag_ordered_analysis_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr analysis__operations__analysis__operations__du_name_ordered_analysis_info_0[1] = { &analysis__operations__analysis__operations__du_functor_desc_analysis_info_0_0 };

static const MR_Integer analysis__operations__analysis__operations__functor_number_map_analysis_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct analysis__operations__analysis__operations__type_ctor_info_analysis_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis__operations____Unify____analysis_info_0_0_10001)),
  ((MR_Box) (analysis__operations____Compare____analysis_info_0_0_10001)),
  (MR_String) "analysis.operations",
  (MR_String) "analysis_info",
  { analysis__operations__analysis__operations__du_name_ordered_analysis_info_0 },
  { analysis__operations__analysis__operations__du_ptag_ordered_analysis_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__operations__analysis__operations__functor_number_map_analysis_info_0,

};

static const MR_PseudoTypeInfo analysis__operations__analysis__operations__field_types_analysis_request_0_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 514),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString analysis__operations__analysis__operations__field_names_analysis_request_0_0[2] = {
  (MR_String) "req_call",
  (MR_String) "req_caller"
};

static const MR_TypeClassConstraint_2Struct analysis__operations__analysis__operations__exist_tc_constr_analysis_request_0_0_1 = {
  &analysis__framework__analysis__framework__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint analysis__operations__analysis__operations__exist_tc_constrs_analysis_request_0_0[1] = { (MR_TypeClassConstraint) (&analysis__operations__analysis__operations__exist_tc_constr_analysis_request_0_0_1) };

static const MR_DuExistLocn analysis__operations__analysis__operations__exist_locns_analysis_request_0_0[2] = {
  {
    INT16_C(0),
    INT16_C(3)
  },
  {
    INT16_C(0),
    INT16_C(4)
  }
};

static const MR_DuExistInfo analysis__operations__analysis__operations__exist_info_analysis_request_0_0 = {
  INT16_C(0),
  INT16_C(2),
  INT16_C(1),
  analysis__operations__analysis__operations__exist_locns_analysis_request_0_0,
  analysis__operations__analysis__operations__exist_tc_constrs_analysis_request_0_0
};

static const MR_DuFunctorDesc analysis__operations__analysis__operations__du_functor_desc_analysis_request_0_0 = {
  (MR_String) "analysis_request",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  analysis__operations__analysis__operations__field_types_analysis_request_0_0,
  analysis__operations__analysis__operations__field_names_analysis_request_0_0,
  NULL,
  &analysis__operations__analysis__operations__exist_info_analysis_request_0_0,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr analysis__operations__analysis__operations__du_stag_ordered_analysis_request_0_0[1] = { &analysis__operations__analysis__operations__du_functor_desc_analysis_request_0_0 };

static const MR_DuPtagLayout analysis__operations__analysis__operations__du_ptag_ordered_analysis_request_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    analysis__operations__analysis__operations__du_stag_ordered_analysis_request_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr analysis__operations__analysis__operations__du_name_ordered_analysis_request_0[1] = { &analysis__operations__analysis__operations__du_functor_desc_analysis_request_0_0 };

static const MR_Integer analysis__operations__analysis__operations__functor_number_map_analysis_request_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct analysis__operations__analysis__operations__type_ctor_info_analysis_request_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis__operations____Unify____analysis_request_0_0_10001)),
  ((MR_Box) (analysis__operations____Compare____analysis_request_0_0_10001)),
  (MR_String) "analysis.operations",
  (MR_String) "analysis_request",
  { analysis__operations__analysis__operations__du_name_ordered_analysis_request_0 },
  { analysis__operations__analysis__operations__du_ptag_ordered_analysis_request_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__operations__analysis__operations__functor_number_map_analysis_request_0,

};

static const MR_EnumFunctorDesc analysis__operations__analysis__operations__enum_functor_desc_any_call_0_0 = {
  (MR_String) "any_call",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr analysis__operations__analysis__operations__enum_ordinal_ordered_any_call_0[1] = { &analysis__operations__analysis__operations__enum_functor_desc_any_call_0_0 };

static const MR_EnumFunctorDescPtr analysis__operations__analysis__operations__enum_name_ordered_any_call_0[1] = { &analysis__operations__analysis__operations__enum_functor_desc_any_call_0_0 };

static const MR_Integer analysis__operations__analysis__operations__functor_number_map_any_call_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct analysis__operations__analysis__operations__type_ctor_info_any_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (analysis__operations____Unify____any_call_0_0_10001)),
  ((MR_Box) (analysis__operations____Compare____any_call_0_0_10001)),
  (MR_String) "analysis.operations",
  (MR_String) "any_call",
  { analysis__operations__analysis__operations__enum_name_ordered_any_call_0 },
  { analysis__operations__analysis__operations__enum_ordinal_ordered_any_call_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__operations__analysis__operations__functor_number_map_any_call_0,

};

static const MR_PseudoTypeInfo analysis__operations__analysis__operations__field_types_imdg_arc_0_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 514),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString analysis__operations__analysis__operations__field_names_imdg_arc_0_0[2] = {
  (MR_String) "imdg_call",
  (MR_String) "imdg_caller"
};

static const MR_TypeClassConstraint_2Struct analysis__operations__analysis__operations__exist_tc_constr_imdg_arc_0_0_1 = {
  &analysis__framework__analysis__framework__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint analysis__operations__analysis__operations__exist_tc_constrs_imdg_arc_0_0[1] = { (MR_TypeClassConstraint) (&analysis__operations__analysis__operations__exist_tc_constr_imdg_arc_0_0_1) };

static const MR_DuExistLocn analysis__operations__analysis__operations__exist_locns_imdg_arc_0_0[2] = {
  {
    INT16_C(0),
    INT16_C(3)
  },
  {
    INT16_C(0),
    INT16_C(4)
  }
};

static const MR_DuExistInfo analysis__operations__analysis__operations__exist_info_imdg_arc_0_0 = {
  INT16_C(0),
  INT16_C(2),
  INT16_C(1),
  analysis__operations__analysis__operations__exist_locns_imdg_arc_0_0,
  analysis__operations__analysis__operations__exist_tc_constrs_imdg_arc_0_0
};

static const MR_DuFunctorDesc analysis__operations__analysis__operations__du_functor_desc_imdg_arc_0_0 = {
  (MR_String) "imdg_arc",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  analysis__operations__analysis__operations__field_types_imdg_arc_0_0,
  analysis__operations__analysis__operations__field_names_imdg_arc_0_0,
  NULL,
  &analysis__operations__analysis__operations__exist_info_imdg_arc_0_0,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr analysis__operations__analysis__operations__du_stag_ordered_imdg_arc_0_0[1] = { &analysis__operations__analysis__operations__du_functor_desc_imdg_arc_0_0 };

static const MR_DuPtagLayout analysis__operations__analysis__operations__du_ptag_ordered_imdg_arc_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    analysis__operations__analysis__operations__du_stag_ordered_imdg_arc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr analysis__operations__analysis__operations__du_name_ordered_imdg_arc_0[1] = { &analysis__operations__analysis__operations__du_functor_desc_imdg_arc_0_0 };

static const MR_Integer analysis__operations__analysis__operations__functor_number_map_imdg_arc_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct analysis__operations__analysis__operations__type_ctor_info_imdg_arc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis__operations____Unify____imdg_arc_0_0_10001)),
  ((MR_Box) (analysis__operations____Compare____imdg_arc_0_0_10001)),
  (MR_String) "analysis.operations",
  (MR_String) "imdg_arc",
  { analysis__operations__analysis__operations__du_name_ordered_imdg_arc_0 },
  { analysis__operations__analysis__operations__du_ptag_ordered_imdg_arc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__operations__analysis__operations__functor_number_map_imdg_arc_0,

};

static const MR_EnumFunctorDesc analysis__operations__analysis__operations__enum_functor_desc_make_analysis_registry_0_0 = {
  (MR_String) "make_analysis_registry",
  INT32_C(0)
};

static const MR_EnumFunctorDesc analysis__operations__analysis__operations__enum_functor_desc_make_analysis_registry_0_1 = {
  (MR_String) "use_analysis_registry_only",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr analysis__operations__analysis__operations__enum_ordinal_ordered_make_analysis_registry_0[2] = {
  &analysis__operations__analysis__operations__enum_functor_desc_make_analysis_registry_0_0,
  &analysis__operations__analysis__operations__enum_functor_desc_make_analysis_registry_0_1
};

static const MR_EnumFunctorDescPtr analysis__operations__analysis__operations__enum_name_ordered_make_analysis_registry_0[2] = {
  &analysis__operations__analysis__operations__enum_functor_desc_make_analysis_registry_0_0,
  &analysis__operations__analysis__operations__enum_functor_desc_make_analysis_registry_0_1
};

static const MR_Integer analysis__operations__analysis__operations__functor_number_map_make_analysis_registry_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct analysis__operations__analysis__operations__type_ctor_info_make_analysis_registry_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis__operations____Unify____make_analysis_registry_0_0_10001)),
  ((MR_Box) (analysis__operations____Compare____make_analysis_registry_0_0_10001)),
  (MR_String) "analysis.operations",
  (MR_String) "make_analysis_registry",
  { analysis__operations__analysis__operations__enum_name_ordered_make_analysis_registry_0 },
  { analysis__operations__analysis__operations__enum_ordinal_ordered_make_analysis_registry_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  analysis__operations__analysis__operations__functor_number_map_make_analysis_registry_0,

};

static const MR_EnumFunctorDesc analysis__operations__analysis__operations__enum_functor_desc_no_func_info_0_0 = {
  (MR_String) "no_func_info",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr analysis__operations__analysis__operations__enum_ordinal_ordered_no_func_info_0[1] = { &analysis__operations__analysis__operations__enum_functor_desc_no_func_info_0_0 };

static const MR_EnumFunctorDescPtr analysis__operations__analysis__operations__enum_name_ordered_no_func_info_0[1] = { &analysis__operations__analysis__operations__enum_functor_desc_no_func_info_0_0 };

static const MR_Integer analysis__operations__analysis__operations__functor_number_map_no_func_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct analysis__operations__analysis__operations__type_ctor_info_no_func_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (analysis__operations____Unify____no_func_info_0_0_10001)),
  ((MR_Box) (analysis__operations____Compare____no_func_info_0_0_10001)),
  (MR_String) "analysis.operations",
  (MR_String) "no_func_info",
  { analysis__operations__analysis__operations__enum_name_ordered_no_func_info_0 },
  { analysis__operations__analysis__operations__enum_ordinal_ordered_no_func_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__operations__analysis__operations__functor_number_map_no_func_info_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__to_term__arity1__analysis__operations__any_call__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (analysis__operations__ClassMethod_for_analysis__framework__to_term____analysis__operations__any_call__arity0______analysis__framework__to_term_1_1_f_0_10001)),
  ((MR_Box) (analysis__operations__ClassMethod_for_analysis__framework__to_term____analysis__operations__any_call__arity0______analysis__framework__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__partial_order__arity2__analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (analysis__operations__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0______analysis__framework__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (analysis__operations__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0______analysis__framework__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__framework__call_pattern__arity2__analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

static MR_bool MR_CALL 
analysis__operations__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1109__1_2_p_0(
  MR_Word ModuleName_4,
  MR_Word LambdaHeadVar__1_9)
{
  MR_bool succeeded;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_9, 2))));

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_4, Var_14);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
analysis__operations__IntroducedFrom__func__update_analysis_registry_5__871__1_1_f_0(
  MR_Word LambdaHeadVar__1_62,
  MR_Word * LambdaHeadVar__2_63)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_call_pattern_198 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_62, 0))));
  MR_Word TypeInfo_200_200;
  MR_Word TypeInfo_201_201;
  MR_Word Var_64;
  MR_Box Call0_77 = (MR_hl_field(0, LambdaHeadVar__1_62, 1));
  MR_Word Var_211;

  *LambdaHeadVar__2_63 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_62, 2))));
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_198, (MR_Integer) 4, &TypeInfo_200_200);
  Var_64 = mercury__univ__univ_1_f_0(TypeInfo_200_200, Call0_77);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_198, (MR_Integer) 4, &TypeInfo_201_201);
  Var_211 = mercury__univ__univ_1_f_0(TypeInfo_201_201, Call0_77);
  succeeded = mercury__univ____Unify____univ_0_0(Var_64, Var_211);
  return succeeded;
}

static MR_Word MR_CALL 
analysis__operations__IntroducedFrom__func__lookup_results_2__588__1_2_f_0(
  MR_Word TypeClassInfo_for_analysis_29,
  MR_Word LambdaHeadVar__1_24)
{
  MR_Word LambdaHeadVar__2_25;
  MR_Word TypeClassInfo_for_analysis_43 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_24, 0))));
  MR_Word TypeInfo_45_45;
  MR_Word TypeInfo_46_46;
  MR_Word TypeInfo_48_48;
  MR_Word TypeInfo_49_49;
  MR_Box Call_11;
  MR_Box Answer_13;
  MR_Word Status_18 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_24, 3))) & (MR_Integer) 3);
  MR_Box Call0_19 = (MR_hl_field(0, LambdaHeadVar__1_24, 1));
  MR_Box Answer0_20 = (MR_hl_field(0, LambdaHeadVar__1_24, 2));
  MR_Word Var_26;
  MR_Word Var_27;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_43, (MR_Integer) 4, &TypeInfo_45_45);
  Var_26 = mercury__univ__univ_1_f_0(TypeInfo_45_45, Call0_19);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_29, (MR_Integer) 4, &TypeInfo_46_46);
  mercury__univ__det_univ_to_type_2_p_0(TypeInfo_46_46, Var_26, &Call_11);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_43, (MR_Integer) 5, &TypeInfo_48_48);
  Var_27 = mercury__univ__univ_1_f_0(TypeInfo_48_48, Answer0_20);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_29, (MR_Integer) 5, &TypeInfo_49_49);
  mercury__univ__det_univ_to_type_2_p_0(TypeInfo_49_49, Var_27, &Answer_13);
  {
    LambdaHeadVar__2_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_25, 0) = Call_11;
    MR_hl_field(0, LambdaHeadVar__2_25, 1) = Answer_13;
    MR_hl_field(0, LambdaHeadVar__2_25, 2) = (MR_Box) ((MR_Unsigned) (Status_18));
  }
  return LambdaHeadVar__2_25;
}

static MR_bool MR_CALL 
analysis__operations__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__420__1_4_p_0(
  MR_Word TypeClassInfo_for_analysis_31,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word LambdaHeadVar__1_22)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_call_pattern_38;
  MR_Word TypeClassInfo_for_partial_order_40;
  MR_Box Var_23 = (MR_hl_field(0, LambdaHeadVar__1_22, 0));
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_31, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_38);
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_38, (MR_Integer) 1, &TypeClassInfo_for_partial_order_40);
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_partial_order_40, 0)), 6))));
  succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_40)), FuncInfo_10, Call_11, Var_23);
  return succeeded;
}

static MR_bool MR_CALL 
analysis__operations__IntroducedFrom__func__lookup_requests__689__1_2_f_0(
  MR_Word TypeClassInfo_for_call_pattern_45,
  MR_Word LambdaHeadVar__1_22,
  MR_Box * LambdaHeadVar__2_23)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_call_pattern_57 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_22, 0))));
  MR_Word TypeInfo_59_59;
  MR_Word TypeInfo_60_60;
  MR_Word Var_24;
  MR_Box Call0_26 = (MR_hl_field(0, LambdaHeadVar__1_22, 1));

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_45, (MR_Integer) 4, &TypeInfo_59_59);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_57, (MR_Integer) 4, &TypeInfo_60_60);
  Var_24 = mercury__univ__univ_1_f_0(TypeInfo_60_60, Call0_26);
  succeeded = mercury__univ__univ_1_f_2(TypeInfo_59_59, LambdaHeadVar__2_23, Var_24);
  return succeeded;
}

static MR_Box MR_CALL 
analysis__operations__IntroducedFrom__func__lookup_existing_call_patterns__667__1_2_f_0(
  MR_Word TypeClassInfo_for_call_pattern_45,
  MR_Word LambdaHeadVar__1_23)
{
  MR_Box LambdaHeadVar__2_24;
  MR_Word TypeClassInfo_for_analysis_57 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_23, 0))));
  MR_Word TypeInfo_59_59;
  MR_Word TypeInfo_60_60;
  MR_Box Call0_17 = (MR_hl_field(0, LambdaHeadVar__1_23, 1));
  MR_Word Var_25;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_57, (MR_Integer) 4, &TypeInfo_59_59);
  Var_25 = mercury__univ__univ_1_f_0(TypeInfo_59_59, Call0_17);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_45, (MR_Integer) 4, &TypeInfo_60_60);
  mercury__univ__det_univ_to_type_2_p_0(TypeInfo_60_60, Var_25, &LambdaHeadVar__2_24);
  return LambdaHeadVar__2_24;
}

static MR_bool MR_CALL 
analysis__operations__IntroducedFrom__pred__lookup_matching_results__603__1_4_p_0(
  MR_Word TypeClassInfo_for_analysis_21,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word LambdaHeadVar__1_17)
{
  MR_bool succeeded;
  MR_Box ResultCall_15 = (MR_hl_field(0, LambdaHeadVar__1_17, 0));

  {
    MR_Word TypeClassInfo_for_call_pattern_28;
    MR_Word TypeClassInfo_for_partial_order_30;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_21, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_28);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_28, (MR_Integer) 1, &TypeClassInfo_for_partial_order_30);
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_partial_order_30, 0)), 5))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_30)), FuncInfo_10, Call_11, ResultCall_15);
  }
  if (!(succeeded))
  {
    MR_Word TypeClassInfo_for_call_pattern_31;
    MR_Word TypeClassInfo_for_partial_order_33;
    MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box);

    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_21, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_31);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_31, (MR_Integer) 1, &TypeClassInfo_for_partial_order_33);
    func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_partial_order_33, 0)), 6))));
    succeeded = func_1(((MR_Box) (TypeClassInfo_for_partial_order_33)), FuncInfo_10, Call_11, ResultCall_15);
  }
  return succeeded;
}

static MR_bool MR_CALL 
analysis__operations__ClassMethod_for_analysis__framework__to_term____analysis__operations__any_call__arity0______analysis__framework__from_term_2_2_p_0(
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
analysis__operations__ClassMethod_for_analysis__framework__to_term____analysis__operations__any_call__arity0______analysis__framework__to_term_1_1_f_0(void)
{
  MR_Word Term_3;
  MR_Word Var_8;

  Var_8 = mercury__term_context__dummy_context_0_f_0();
  {
    Term_3 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_3, 0) = ((MR_Box) (&analysis__operations_scalar_common_3[0]));
    MR_hl_field(0, Term_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Term_3, 2) = ((MR_Box) (Var_8));
  }
  return Term_3;
}

static MR_bool MR_CALL 
analysis__operations__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0______analysis__framework__equivalent_3_3_p_0(void)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__semidet_succeed_0_p_0();
  return succeeded;
}

static MR_bool MR_CALL 
analysis__operations__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0______analysis__framework__more_precise_than_3_3_p_0(void)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__semidet_fail_0_p_0();
  return succeeded;
}

void MR_CALL 
analysis__operations____Compare____no_func_info_0_0(
  MR_Word * HeadVar__1_1)
{
  analysis__operations__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_111_112_101_114_97_116_105_111_110_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
analysis__operations__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_111_112_101_114_97_116_105_111_110_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
analysis__operations____Unify____no_func_info_0_0(void)
{
  return MR_TRUE;
}

static void MR_CALL 
analysis__operations____Compare____make_analysis_registry_0_0(
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
analysis__operations____Unify____make_analysis_registry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
analysis__operations____Compare____imdg_arc_0_0(
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
    MR_Word TypeClassInfo_for_call_pattern_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word TypeClassInfo_for_call_pattern_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 1));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &TypeInfo_14_14);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &TypeInfo_15_15);
    mercury__private_builtin__typed_compare_3_p_0(TypeInfo_14_14, TypeInfo_15_15, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
analysis__operations____Unify____imdg_arc_0_0(
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
    MR_Word TypeClassInfo_for_call_pattern_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word TypeClassInfo_for_call_pattern_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 1));
    MR_Box ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_9, (MR_Integer) 4, &TypeInfo_12_12);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_10, (MR_Integer) 4, &TypeInfo_13_13);
    succeeded = mercury__private_builtin__typed_unify_2_p_0(TypeInfo_12_12, TypeInfo_13_13, ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
analysis__operations____Compare____any_call_0_0(
  MR_Word * HeadVar__1_1)
{
  analysis__operations__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_111_112_101_114_97_116_105_111_110_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
analysis__operations__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_111_112_101_114_97_116_105_111_110_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
analysis__operations____Unify____any_call_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
analysis__operations____Compare____analysis_request_0_0(
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
    MR_Word TypeClassInfo_for_call_pattern_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word TypeClassInfo_for_call_pattern_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 1));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &TypeInfo_14_14);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &TypeInfo_15_15);
    mercury__private_builtin__typed_compare_3_p_0(TypeInfo_14_14, TypeInfo_15_15, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
analysis__operations____Unify____analysis_request_0_0(
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
    MR_Word TypeClassInfo_for_call_pattern_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word TypeClassInfo_for_call_pattern_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 1));
    MR_Box ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_9, (MR_Integer) 4, &TypeInfo_12_12);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_10, (MR_Integer) 4, &TypeInfo_13_13);
    succeeded = mercury__private_builtin__typed_unify_2_p_0(TypeInfo_12_12, TypeInfo_13_13, ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
analysis__operations____Compare____analysis_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_33 == CastY_34);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word TypeClassInfo_for_compiler_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word TypeClassInfo_for_compiler_36 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 1));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Word SubResult1_6;
    MR_Word TypeInfo_38_38;
    MR_Word TypeInfo_39_39;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_compiler_35, (MR_Integer) 1, &TypeInfo_38_38);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_compiler_36, (MR_Integer) 1, &TypeInfo_39_39);
    mercury__private_builtin__typed_compare_3_p_0(TypeInfo_38_38, TypeInfo_39_39, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_49 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_50 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_49 < Var_50);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_49 > Var_50);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&analysis__operations_scalar_common_1[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&analysis__operations_scalar_common_2[6]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&analysis__operations_scalar_common_2[7]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&analysis__operations_scalar_common_2[8]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&analysis__operations_scalar_common_2[3]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&analysis__operations_scalar_common_2[9]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&analysis__operations_scalar_common_2[9]), HeadVar__1_1, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
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

MR_bool MR_CALL 
analysis__operations____Unify____analysis_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeClassInfo_for_compiler_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word TypeClassInfo_for_compiler_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word TypeInfo_28_28;
    MR_Word TypeInfo_29_29;
    MR_Word TypeInfo_31_31;
    MR_Word TypeInfo_32_32;
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Word TypeInfo_35_35;
    MR_Word TypeInfo_36_36;
    MR_Word TypeInfo_37_37;
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 1));
    MR_Box ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_compiler_25, (MR_Integer) 1, &TypeInfo_28_28);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_compiler_26, (MR_Integer) 1, &TypeInfo_29_29);
    succeeded = mercury__private_builtin__typed_unify_2_p_0(TypeInfo_28_28, TypeInfo_29_29, ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_31_31 = (MR_Word) (&analysis__operations_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_32_32 = (MR_Word) (&analysis__operations_scalar_common_2[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_33_33 = (MR_Word) (&analysis__operations_scalar_common_2[7]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_34_34 = (MR_Word) (&analysis__operations_scalar_common_2[8]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_35_35 = (MR_Word) (&analysis__operations_scalar_common_2[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_36_36 = (MR_Word) (&analysis__operations_scalar_common_2[9]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_37_37 = (MR_Word) (&analysis__operations_scalar_common_2[9]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
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

static void MR_CALL 
analysis__operations__unsafe_set_debug_analysis_stream_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL analysis__operations__unsafe_set_debug_analysis_stream_1_p_0

	MR_Word X;

	X = X_1 ;
		{
analysis__operations__mutable_variable_debug_analysis_stream = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
analysis__operations__unsafe_get_debug_analysis_stream_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL analysis__operations__unsafe_get_debug_analysis_stream_1_p_0

	MR_Word X;

		{
X = analysis__operations__mutable_variable_debug_analysis_stream;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
analysis__operations__unlock_debug_analysis_stream_0_p_0(void)
{
{
#define MR_PROC_LABEL analysis__operations__unlock_debug_analysis_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
analysis__operations__lock_debug_analysis_stream_0_p_0(void)
{
{
#define MR_PROC_LABEL analysis__operations__lock_debug_analysis_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
analysis__operations__pre_initialise_mutable_debug_analysis_stream_0_p_0(void)
{
{
#define MR_PROC_LABEL analysis__operations__pre_initialise_mutable_debug_analysis_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&analysis__operations__mutable_variable_debug_analysis_stream_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
analysis__operations__initialise_mutable_debug_analysis_stream_0_p_0(void)
{
{
#define MR_PROC_LABEL analysis__operations__initialise_mutable_debug_analysis_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&analysis__operations__mutable_variable_debug_analysis_stream_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__operations__initialise_mutable_debug_analysis_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__operations__initialise_mutable_debug_analysis_stream_0_p_0

	MR_Word X;

	X = (MR_Word) ((MR_Unsigned) 0U) ;
		{
analysis__operations__mutable_variable_debug_analysis_stream = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__operations__initialise_mutable_debug_analysis_stream_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static MR_Word MR_CALL 
analysis__operations__lub_result_statuses_4_2_f_0(
  MR_Word Result_4,
  MR_Word Acc_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6 = ((MR_Unsigned) ((MR_hl_field(0, Result_4, 3))) & (MR_Integer) 3);

  HeadVar__3_3 = analysis__framework__lub_2_f_0(Var_6, Acc_5);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
analysis__operations__lub_result_statuses_3_3_f_0(
  MR_Word _FuncId_5,
  MR_Word Results_6,
  MR_Word Acc_7)
{
  MR_Word HeadVar__4_4;

  HeadVar__4_4 = analysis__operations__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0(Results_6, Acc_7);
  return HeadVar__4_4;
}

static MR_Box MR_CALL 
analysis__operations__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = analysis__operations__lub_result_statuses_4_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Word MR_CALL 
analysis__operations__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0(
  MR_Word Results_6,
  MR_Word Acc_7)
{
  MR_Word HeadVar__4_4;
  MR_Box conv1_HeadVar__4_4;

  conv1_HeadVar__4_4 = mercury__list__foldl_3_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_some_analysis_result_0), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0), (MR_Word) (&analysis__operations_scalar_common_2[15]), Results_6, ((MR_Box) (Acc_7)));
  HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
analysis__operations__lub_result_statuses_2_3_f_0(
  MR_String _AnalysisName_5,
  MR_Word FuncMap_6,
  MR_Word Acc_7)
{
  MR_Word HeadVar__4_4;

  HeadVar__4_4 = analysis__operations__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0(FuncMap_6, Acc_7);
  return HeadVar__4_4;
}

static MR_Box MR_CALL 
analysis__operations__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = analysis__operations__lub_result_statuses_3_3_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_4;
}

static MR_Word MR_CALL 
analysis__operations__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0(
  MR_Word FuncMap_6,
  MR_Word Acc_7)
{
  MR_Word HeadVar__4_4;
  MR_Box conv1_HeadVar__4_4;

  conv1_HeadVar__4_4 = mercury__map__foldl_3_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_1[1]), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0), (MR_Word) (&analysis__operations_scalar_common_2[14]), FuncMap_6, ((MR_Box) (Acc_7)));
  HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
  return HeadVar__4_4;
}

static void MR_CALL 
analysis__operations__maybe_write_module_imdg_5_p_0(
  MR_Word Info_6,
  MR_Word Globals_7,
  MR_Word ModuleName_8)
{
  MR_bool succeeded;
  MR_Word ModuleEntries_10;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, Info_6, 9))));
  MR_Box conv0_ModuleEntries_10;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[5]), Var_13, ((MR_Box) (ModuleName_8)), &conv0_ModuleEntries_10);
  if (succeeded)
  {
    ModuleEntries_10 = ((MR_Word) (conv0_ModuleEntries_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    analysis__file__write_module_imdg_6_p_0(Info_6, Globals_7, ModuleName_8, ModuleEntries_10);
}

static void MR_CALL 
analysis__operations__maybe_write_module_requests_5_p_0(
  MR_Word Info_6,
  MR_Word Globals_7,
  MR_Word ModuleName_8)
{
  MR_bool succeeded;
  MR_Word Requests_10;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, Info_6, 5))));
  MR_Box conv0_Requests_10;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[1]), Var_13, ((MR_Box) (ModuleName_8)), &conv0_Requests_10);
  if (succeeded)
  {
    Requests_10 = ((MR_Word) (conv0_Requests_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    analysis__file__write_module_analysis_requests_6_p_0(Info_6, Globals_7, ModuleName_8, Requests_10);
}

static void MR_CALL 
analysis__operations__maybe_write_module_overall_status_5_p_0(
  MR_Word Info_6,
  MR_Word Globals_7,
  MR_Word ModuleName_8)
{
  MR_bool succeeded;
  MR_Word Status_10;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, Info_6, 6))));
  MR_Box conv0_Status_10;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0), Var_13, ((MR_Box) (ModuleName_8)), &conv0_Status_10);
  if (succeeded)
  {
    Status_10 = ((MR_Word) (conv0_Status_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    analysis__file__write_module_overall_status_6_p_0(Info_6, Globals_7, ModuleName_8, Status_10);
}

static void MR_CALL 
analysis__operations__load_module_imdg_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_Word IMDG_14;
  MR_Word ModuleSpecs_15;

  analysis__file__read_module_imdg_7_p_0(STATE_VARIABLE_Info_0_20, Globals_9, ModuleName_10, &IMDG_14, &ModuleSpecs_15);
  if ((ModuleSpecs_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OldIMDGMap0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, 9))));
    MR_Word OldIMDGMap_17;
    MR_Word TypeClassInfo_for_compiler_48;
    MR_Box Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_44;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[5]), ((MR_Box) (ModuleName_10)), ((MR_Box) (IMDG_14)), OldIMDGMap0_16, &OldIMDGMap_17);
    TypeClassInfo_for_compiler_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, 0))));
    Var_35 = (MR_hl_field(0, STATE_VARIABLE_Info_0_20, 1));
    Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, 2))));
    Var_37 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, 3))) & (MR_Integer) 1);
    Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, 4))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, 5))));
    Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, 6))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, 7))));
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, 8))));
    Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, 10))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_21 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_48));
      MR_hl_field(0, base, 1) = Var_35;
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_37));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_39));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_40));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_41));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_42));
      MR_hl_field(0, base, 9) = ((MR_Box) (OldIMDGMap_17));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_44));
    }
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  }
  else
  {
    *STATE_VARIABLE_Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ModuleSpecs_15, STATE_VARIABLE_Specs_0_22);
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
  }
}

static void MR_CALL 
analysis__operations__combine_imdg_lists_3_p_0(
  MR_Word ArcsA_4,
  MR_Word ArcsB_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_imdg_arc_0), ArcsA_4, ArcsB_5);
}

static void MR_CALL 
analysis__operations__combine_func_imdg_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  analysis__operations__combine_imdg_lists_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
analysis__operations__combine_func_imdg_3_p_0(
  MR_Word FuncImdgA_4,
  MR_Word FuncImdgB_5,
  MR_Word * FuncImdg_6)
{
  mercury__map__union_4_p_1((MR_Word) (&analysis__operations_scalar_common_1[2]), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_2[13]), FuncImdgA_4, FuncImdgB_5, FuncImdg_6);
}

static MR_bool MR_CALL 
analysis__operations__clear_imdg_entries_pointing_at_3_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__operations__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1109__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
analysis__operations__clear_imdg_entries_pointing_at_3_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Arcs0_5,
  MR_Word * Arcs_6)
{
  MR_bool succeeded;
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&analysis__operations_scalar_common_13[1]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (analysis__operations__clear_imdg_entries_pointing_at_3_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (ModuleName_4));
  }
  mercury__list__filter_3_p_0((MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_imdg_arc_0), Var_8, Arcs0_5, Arcs_6);
}

static void MR_CALL 
analysis__operations__clear_imdg_entries_pointing_at_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Arcs_6;

  analysis__operations__clear_imdg_entries_pointing_at_3_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Arcs_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Arcs_6));
}

static void MR_CALL 
analysis__operations__clear_imdg_entries_pointing_at_2_3_p_0(
  MR_Word ModuleName_4,
  MR_Word FuncMap0_5,
  MR_Word * FuncMap_6)
{
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&analysis__operations_scalar_common_5[5]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (analysis__operations__clear_imdg_entries_pointing_at_2_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (ModuleName_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&analysis__operations_scalar_common_1[2]), (MR_Word) (&analysis__operations_scalar_common_1[2]), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), Var_7, FuncMap0_5, FuncMap_6);
}

static void MR_CALL 
analysis__operations__update_intermodule_dependencies_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_FuncImdg_6;

  analysis__operations__combine_func_imdg_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_FuncImdg_6);
  *wrapper_arg_3 = ((MR_Box) (conv3_FuncImdg_6));
}

static void MR_CALL 
analysis__operations__update_intermodule_dependencies_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_FuncMap_6;

  analysis__operations__clear_imdg_entries_pointing_at_2_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_FuncMap_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_FuncMap_6));
}

static void MR_CALL 
analysis__operations__update_intermodule_dependencies_2_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ImportedModuleName_6,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_compiler_95;
  MR_Word IMDG0_8;
  MR_Word IMDG1_12;
  MR_Word IMDG_14;
  MR_Word OldIMDGMap0_15;
  MR_Word NewIMDGMap0_16;
  MR_Word OldIMDGMap_17;
  MR_Word NewIMDGMap_18;
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 9))));
  MR_Box Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_111;
  MR_Box conv0_IMDG0_8;
  MR_Word MaybeDebugStream_10;
  MR_Word NewArcs_13;
  MR_Word Var_25;
  MR_Box conv2_NewArcs_13;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[5]), Var_21, ((MR_Box) (ImportedModuleName_6)), &conv0_IMDG0_8);
  IMDG0_8 = ((MR_Word) (conv0_IMDG0_8));
{
#define MR_PROC_LABEL analysis__operations__update_intermodule_dependencies_2_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__operations__update_intermodule_dependencies_2_4_p_0

	MR_Word X;

		{
X = analysis__operations__mutable_variable_debug_analysis_stream;


		;}
#undef MR_PROC_LABEL
	MaybeDebugStream_10  = X;
}
{
#define MR_PROC_LABEL analysis__operations__update_intermodule_dependencies_2_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  if (!((MaybeDebugStream_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word DebugStream_11 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_10, 0))));
    MR_String ModuleNameStr_96;
    MR_String ImportedModuleNameStr_97;

    ModuleNameStr_96 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_5);
    ImportedModuleNameStr_97 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ImportedModuleName_6);
    mercury__io__write_string_4_p_0(DebugStream_11, (MR_String) "% Clearing entries involving ");
    mercury__io__write_string_4_p_0(DebugStream_11, ModuleNameStr_96);
    mercury__io__write_string_4_p_0(DebugStream_11, (MR_String) " from ");
    mercury__io__write_string_4_p_0(DebugStream_11, ImportedModuleNameStr_97);
    mercury__io__write_string_4_p_0(DebugStream_11, (MR_String) "\'s IMDG.");
  }
  {
    Var_111 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_111, 0) = ((MR_Box) (&analysis__operations_scalar_common_5[3]));
    MR_hl_field(0, Var_111, 1) = ((MR_Box) (analysis__operations__update_intermodule_dependencies_2_4_p_0_1));
    MR_hl_field(0, Var_111, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_111, 3) = ((MR_Box) (ModuleName_5));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&analysis__operations_scalar_common_2[4]), (MR_Word) (&analysis__operations_scalar_common_2[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_111, IMDG0_8, &IMDG1_12);
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 10))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[5]), Var_25, ((MR_Box) (ImportedModuleName_6)), &conv2_NewArcs_13);
  if (succeeded)
  {
    NewArcs_13 = ((MR_Word) (conv2_NewArcs_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    mercury__map__union_4_p_1((MR_Word) (&analysis__operations_scalar_common_2[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[12]), IMDG1_12, NewArcs_13, &IMDG_14);
  else
    IMDG_14 = IMDG1_12;
  OldIMDGMap0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 9))));
  NewIMDGMap0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 10))));
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[5]), ((MR_Box) (ImportedModuleName_6)), ((MR_Box) (IMDG_14)), OldIMDGMap0_15, &OldIMDGMap_17);
  mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[5]), ((MR_Box) (ImportedModuleName_6)), NewIMDGMap0_16, &NewIMDGMap_18);
  TypeClassInfo_for_compiler_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 0))));
  Var_64 = (MR_hl_field(0, STATE_VARIABLE_Info_0_19, 1));
  Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 2))));
  Var_66 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 3))) & (MR_Integer) 1);
  Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 4))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 5))));
  Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 6))));
  Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 7))));
  Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_20 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_95));
    MR_hl_field(0, base, 1) = Var_64;
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_65));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_66));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_67));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_68));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_69));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_70));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_71));
    MR_hl_field(0, base, 9) = ((MR_Box) (OldIMDGMap_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (NewIMDGMap_18));
  }
}

static void MR_CALL 
analysis__operations__taint_module_overall_status_7_p_0(
  MR_Word Globals_8,
  MR_Word Status_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;

  switch (Status_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word ModuleStatusMap0_13;
        MR_Word ModuleStatus0_14;
        MR_Word ModuleStatus_15;
        MR_Word MaybeDebugStream_16;
        MR_Word ModuleStatusMap_18;
        MR_Word STATE_VARIABLE_Info_1_23;
        MR_Word ModuleStatusMap0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 6))));
        MR_Box conv0_ModuleStatus0_14;
        MR_Word TypeClassInfo_for_compiler_48;
        MR_Box Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;

        succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0), ModuleStatusMap0_49, ((MR_Box) (ModuleName_10)));
        if (succeeded)
          STATE_VARIABLE_Info_1_23 = STATE_VARIABLE_Info_0_19;
        else
        {
          MR_Word TypeClassInfo_for_compiler_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 0))));
          MR_Word ModuleStatus_50;
          MR_Word ModuleStatusMap_51;
          MR_Box Var_52 = (MR_hl_field(0, STATE_VARIABLE_Info_0_19, 1));
          MR_Word TypeClassInfo_for_compiler_87;
          MR_Box Var_71;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;

          analysis__file__read_module_overall_status_6_p_0(TypeClassInfo_for_compiler_84, Var_52, Globals_8, ModuleName_10, &ModuleStatus_50);
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0), ((MR_Box) (ModuleName_10)), ((MR_Box) (ModuleStatus_50)), ModuleStatusMap0_49, &ModuleStatusMap_51);
          TypeClassInfo_for_compiler_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 0))));
          Var_71 = (MR_hl_field(0, STATE_VARIABLE_Info_0_19, 1));
          Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 2))));
          Var_73 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 3))) & (MR_Integer) 1);
          Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 4))));
          Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 5))));
          Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 7))));
          Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 8))));
          Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 9))));
          Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, 10))));
          {
            STATE_VARIABLE_Info_1_23 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_1_23, 0) = ((MR_Box) (TypeClassInfo_for_compiler_87));
            MR_hl_field(0, STATE_VARIABLE_Info_1_23, 1) = Var_71;
            MR_hl_field(0, STATE_VARIABLE_Info_1_23, 2) = ((MR_Box) (Var_72));
            MR_hl_field(0, STATE_VARIABLE_Info_1_23, 3) = (MR_Box) ((MR_Unsigned) (Var_73));
            MR_hl_field(0, STATE_VARIABLE_Info_1_23, 4) = ((MR_Box) (Var_74));
            MR_hl_field(0, STATE_VARIABLE_Info_1_23, 5) = ((MR_Box) (Var_75));
            MR_hl_field(0, STATE_VARIABLE_Info_1_23, 6) = ((MR_Box) (ModuleStatusMap_51));
            MR_hl_field(0, STATE_VARIABLE_Info_1_23, 7) = ((MR_Box) (Var_77));
            MR_hl_field(0, STATE_VARIABLE_Info_1_23, 8) = ((MR_Box) (Var_78));
            MR_hl_field(0, STATE_VARIABLE_Info_1_23, 9) = ((MR_Box) (Var_79));
            MR_hl_field(0, STATE_VARIABLE_Info_1_23, 10) = ((MR_Box) (Var_80));
          }
        }
        ModuleStatusMap0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 6))));
        mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0), ModuleStatusMap0_13, ((MR_Box) (ModuleName_10)), &conv0_ModuleStatus0_14);
        ModuleStatus0_14 = ((MR_Word) (conv0_ModuleStatus0_14));
        ModuleStatus_15 = analysis__framework__lub_2_f_0(ModuleStatus0_14, Status_9);
{
#define MR_PROC_LABEL analysis__operations__taint_module_overall_status_7_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__operations__taint_module_overall_status_7_p_0

	MR_Word X;

		{
X = analysis__operations__mutable_variable_debug_analysis_stream;


		;}
#undef MR_PROC_LABEL
	MaybeDebugStream_16  = X;
}
{
#define MR_PROC_LABEL analysis__operations__taint_module_overall_status_7_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        if (!((MaybeDebugStream_16 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word DebugStream_17 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_16, 0))));
          MR_String ModuleNameStr_88;
          MR_String ModuleStatusStr_89;

          ModuleNameStr_88 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_10);
          ModuleStatusStr_89 = mercury__string__string_1_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0), ((MR_Box) (ModuleStatus_15)));
          mercury__io__write_string_4_p_0(DebugStream_17, (MR_String) "% Tainting the overall module status of ");
          mercury__io__write_string_4_p_0(DebugStream_17, ModuleNameStr_88);
          mercury__io__write_string_4_p_0(DebugStream_17, (MR_String) " with ");
          mercury__io__write_string_4_p_0(DebugStream_17, ModuleStatusStr_89);
          mercury__io__write_string_4_p_0(DebugStream_17, (MR_String) "\n");
        }
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0), ((MR_Box) (ModuleName_10)), ((MR_Box) (ModuleStatus_15)), ModuleStatusMap0_13, &ModuleStatusMap_18);
        TypeClassInfo_for_compiler_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 0))));
        Var_35 = (MR_hl_field(0, STATE_VARIABLE_Info_1_23, 1));
        Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 2))));
        Var_37 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 3))) & (MR_Integer) 1);
        Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 4))));
        Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 5))));
        Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 7))));
        Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 8))));
        Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 9))));
        Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 10))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_20 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_48));
          MR_hl_field(0, base, 1) = Var_35;
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_36));
          MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_37));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_38));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_39));
          MR_hl_field(0, base, 6) = ((MR_Box) (ModuleStatusMap_18));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_41));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_42));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_43));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_44));
        }
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
      break;
  }
}

static MR_bool MR_CALL 
analysis__operations__arc_module_name_4_p_0(
  MR_Word TypeClassInfo_for_call_pattern_11,
  MR_Box FuncInfo_5,
  MR_Box CallA_6,
  MR_Word HeadVar__3_3,
  MR_Word * ModuleName_8)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_call_pattern_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word TypeInfo_14_14;
  MR_Word TypeInfo_15_15;
  MR_Word TypeClassInfo_for_partial_order_16;
  MR_Box CallB0_7 = (MR_hl_field(0, HeadVar__3_3, 1));
  MR_Box CallB_9;
  MR_Word Var_10;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

  *ModuleName_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &TypeInfo_14_14);
  Var_10 = mercury__univ__univ_1_f_0(TypeInfo_14_14, CallB0_7);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &TypeInfo_15_15);
  mercury__univ__det_univ_to_type_2_p_0(TypeInfo_15_15, Var_10, &CallB_9);
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_11, (MR_Integer) 1, &TypeClassInfo_for_partial_order_16);
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_partial_order_16, 0)), 6))));
  succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_16)), FuncInfo_5, CallA_6, CallB_9);
  return succeeded;
}

static void MR_CALL 
analysis__operations__update_analysis_registry_5_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_Info_20;

  analysis__operations__taint_module_overall_status_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_Info_20));
}

static MR_bool MR_CALL 
analysis__operations__update_analysis_registry_5_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv8_LambdaHeadVar__2_63;

  succeeded = analysis__operations__IntroducedFrom__func__update_analysis_registry_5__871__1_1_f_0(((MR_Word) (wrapper_arg_1)), &conv8_LambdaHeadVar__2_63);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_63));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
analysis__operations__update_analysis_registry_5_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_20;

  analysis__operations__taint_module_overall_status_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
analysis__operations__update_analysis_registry_5_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ModuleName_11,
  MR_String AnalysisName_12,
  MR_Word FuncId_13,
  MR_Word NewResult_14,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_analysis_154 = ((MR_Word) ((MR_hl_field(0, NewResult_14, 0))));
  MR_Box Call_17 = (MR_hl_field(0, NewResult_14, 1));
  MR_Box NewAnswer_18 = (MR_hl_field(0, NewResult_14, 2));
  MR_Word NewStatus_19 = ((MR_Unsigned) ((MR_hl_field(0, NewResult_14, 3))) & (MR_Integer) 3);
  MR_Box FuncInfo_20;
  MR_Word MaybeResult_21;
  MR_Word Globals_22;
  MR_Word STATE_VARIABLE_Info_1_51;
  MR_Word Requests_38;
  MR_Word TypeCtorInfo_192_192;
  MR_Word TypeInfo_193_193;
  MR_Word TypeCtorInfo_194_194;
  MR_Word TypeInfo_195_195;
  MR_Word ModuleRequests_36;
  MR_Word ModuleAnalysisMap_37;
  MR_Word Var_60;
  MR_Box conv5_ModuleRequests_36;
  MR_Box conv6_ModuleAnalysisMap_37;
  MR_Box conv7_Requests_38;

  analysis__framework__get_func_info_6_p_0(TypeClassInfo_for_analysis_154, ModuleInfo_10, ModuleName_11, FuncId_13, &FuncInfo_20);
  analysis__operations__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(TypeClassInfo_for_analysis_154, STATE_VARIABLE_Info_0_45, ModuleName_11, FuncId_13, FuncInfo_20, Call_17, &MaybeResult_21);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_22);
  if ((MaybeResult_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OldAnalysisResults0_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 7))));
    MR_Word OldAnalysisResults_35;
    MR_Word OldMap0_75;
    MR_Word OldMap_76;
    MR_Box conv0_OldMap0_75;
    MR_Word TypeClassInfo_for_compiler_188;
    MR_Box Var_135;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[3]), OldAnalysisResults0_34, ((MR_Box) (ModuleName_11)), &conv0_OldMap0_75);
    OldMap0_75 = ((MR_Word) (conv0_OldMap0_75));
    analysis__operations__record_result_in_analysis_map_6_p_0(TypeClassInfo_for_analysis_154, FuncId_13, Call_17, NewAnswer_18, NewStatus_19, OldMap0_75, &OldMap_76);
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[3]), ((MR_Box) (ModuleName_11)), ((MR_Box) (OldMap_76)), OldAnalysisResults0_34, &OldAnalysisResults_35);
    TypeClassInfo_for_compiler_188 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 0))));
    Var_135 = (MR_hl_field(0, STATE_VARIABLE_Info_0_45, 1));
    Var_136 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 2))));
    Var_137 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 3))) & (MR_Integer) 1);
    Var_138 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 4))));
    Var_139 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 5))));
    Var_140 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 6))));
    Var_142 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 8))));
    Var_143 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 9))));
    Var_144 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 10))));
    {
      STATE_VARIABLE_Info_1_51 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_1_51, 0) = ((MR_Box) (TypeClassInfo_for_compiler_188));
      MR_hl_field(0, STATE_VARIABLE_Info_1_51, 1) = Var_135;
      MR_hl_field(0, STATE_VARIABLE_Info_1_51, 2) = ((MR_Box) (Var_136));
      MR_hl_field(0, STATE_VARIABLE_Info_1_51, 3) = (MR_Box) ((MR_Unsigned) (Var_137));
      MR_hl_field(0, STATE_VARIABLE_Info_1_51, 4) = ((MR_Box) (Var_138));
      MR_hl_field(0, STATE_VARIABLE_Info_1_51, 5) = ((MR_Box) (Var_139));
      MR_hl_field(0, STATE_VARIABLE_Info_1_51, 6) = ((MR_Box) (Var_140));
      MR_hl_field(0, STATE_VARIABLE_Info_1_51, 7) = ((MR_Box) (OldAnalysisResults_35));
      MR_hl_field(0, STATE_VARIABLE_Info_1_51, 8) = ((MR_Box) (Var_142));
      MR_hl_field(0, STATE_VARIABLE_Info_1_51, 9) = ((MR_Box) (Var_143));
      MR_hl_field(0, STATE_VARIABLE_Info_1_51, 10) = ((MR_Box) (Var_144));
    }
  }
  else
  {
    MR_Word OldResult_23 = ((MR_Word) ((MR_hl_field(1, MaybeResult_21, 0))));
    MR_Box OldAnswer_25 = (MR_hl_field(0, OldResult_23, 1));
    MR_Word OldStatus_26 = ((MR_Unsigned) ((MR_hl_field(0, OldResult_23, 2))) & (MR_Integer) 3);
    MR_Word TypeClassInfo_for_answer_pattern_155;
    MR_Word TypeClassInfo_for_partial_order_157;

    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_154, (MR_Integer) 2, &TypeClassInfo_for_answer_pattern_155);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_answer_pattern_155, (MR_Integer) 1, &TypeClassInfo_for_partial_order_157);
    succeeded = analysis__framework__equivalent_3_p_0(TypeClassInfo_for_partial_order_157, FuncInfo_20, NewAnswer_18, OldAnswer_25);
    if (succeeded)
    {
      MR_Word MaybeDebugStream_27;

      analysis__operations__get_debug_analysis_stream_3_p_0(&MaybeDebugStream_27);
      if (!((MaybeDebugStream_27 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word TypeInfo_160_160;
        MR_Word TypeInfo_162_162;
        MR_Word DebugStream_28 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_27, 0))));

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_154, (MR_Integer) 4, &TypeInfo_160_160);
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_154, (MR_Integer) 5, &TypeInfo_162_162);
        analysis__operations__write_no_change_in_result_7_p_0(TypeInfo_160_160, TypeInfo_162_162, DebugStream_28, ModuleName_11, FuncId_13, Call_17, NewAnswer_18);
      }
      succeeded = (NewStatus_19 == OldStatus_26);
      if (succeeded)
        STATE_VARIABLE_Info_1_51 = STATE_VARIABLE_Info_0_45;
      else
      {
        MR_Word OldMap0_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 7))));
        MR_Word OldMap_30;
        MR_Word TypeClassInfo_for_compiler_164;
        MR_Box Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;

        analysis__operations__replace_result_in_analysis_map_8_p_0(TypeClassInfo_for_analysis_154, ModuleName_11, FuncId_13, FuncInfo_20, Call_17, NewAnswer_18, NewStatus_19, OldMap0_29, &OldMap_30);
        TypeClassInfo_for_compiler_164 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 0))));
        Var_88 = (MR_hl_field(0, STATE_VARIABLE_Info_0_45, 1));
        Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 2))));
        Var_90 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 3))) & (MR_Integer) 1);
        Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 4))));
        Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 5))));
        Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 6))));
        Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 8))));
        Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 9))));
        Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 10))));
        {
          STATE_VARIABLE_Info_1_51 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_1_51, 0) = ((MR_Box) (TypeClassInfo_for_compiler_164));
          MR_hl_field(0, STATE_VARIABLE_Info_1_51, 1) = Var_88;
          MR_hl_field(0, STATE_VARIABLE_Info_1_51, 2) = ((MR_Box) (Var_89));
          MR_hl_field(0, STATE_VARIABLE_Info_1_51, 3) = (MR_Box) ((MR_Unsigned) (Var_90));
          MR_hl_field(0, STATE_VARIABLE_Info_1_51, 4) = ((MR_Box) (Var_91));
          MR_hl_field(0, STATE_VARIABLE_Info_1_51, 5) = ((MR_Box) (Var_92));
          MR_hl_field(0, STATE_VARIABLE_Info_1_51, 6) = ((MR_Box) (Var_93));
          MR_hl_field(0, STATE_VARIABLE_Info_1_51, 7) = ((MR_Box) (OldMap_30));
          MR_hl_field(0, STATE_VARIABLE_Info_1_51, 8) = ((MR_Box) (Var_95));
          MR_hl_field(0, STATE_VARIABLE_Info_1_51, 9) = ((MR_Box) (Var_96));
          MR_hl_field(0, STATE_VARIABLE_Info_1_51, 10) = ((MR_Box) (Var_97));
        }
      }
    }
    else
    {
      MR_Word TypeClassInfo_for_call_pattern_174;
      MR_Word Status_31;
      MR_Word OldArcs_32;
      MR_Word DepModules_33;
      MR_Word STATE_VARIABLE_Info_2_52;
      MR_Word Var_53;
      MR_Word Var_56;
      MR_Word MaybeDebugStream_71;
      MR_Word OldMap0_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 7))));
      MR_Word OldMap_74;
      MR_Word TypeClassInfo_for_compiler_166;
      MR_Box Var_107;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Word TypeClassInfo_for_answer_pattern_167;
      MR_Word TypeClassInfo_for_partial_order_169;
      MR_Box conv1_OldArcs_32;
      MR_Box conv4_STATE_VARIABLE_Info_1_51;
      MR_Box conv3_STATE_VARIABLE_IO_2_50;

      analysis__operations__replace_result_in_analysis_map_8_p_0(TypeClassInfo_for_analysis_154, ModuleName_11, FuncId_13, FuncInfo_20, Call_17, NewAnswer_18, NewStatus_19, OldMap0_73, &OldMap_74);
      TypeClassInfo_for_compiler_166 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 0))));
      Var_107 = (MR_hl_field(0, STATE_VARIABLE_Info_0_45, 1));
      Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 2))));
      Var_109 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 3))) & (MR_Integer) 1);
      Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 4))));
      Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 5))));
      Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 6))));
      Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 8))));
      Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 9))));
      Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 10))));
      {
        STATE_VARIABLE_Info_2_52 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_2_52, 0) = ((MR_Box) (TypeClassInfo_for_compiler_166));
        MR_hl_field(0, STATE_VARIABLE_Info_2_52, 1) = Var_107;
        MR_hl_field(0, STATE_VARIABLE_Info_2_52, 2) = ((MR_Box) (Var_108));
        MR_hl_field(0, STATE_VARIABLE_Info_2_52, 3) = (MR_Box) ((MR_Unsigned) (Var_109));
        MR_hl_field(0, STATE_VARIABLE_Info_2_52, 4) = ((MR_Box) (Var_110));
        MR_hl_field(0, STATE_VARIABLE_Info_2_52, 5) = ((MR_Box) (Var_111));
        MR_hl_field(0, STATE_VARIABLE_Info_2_52, 6) = ((MR_Box) (Var_112));
        MR_hl_field(0, STATE_VARIABLE_Info_2_52, 7) = ((MR_Box) (OldMap_74));
        MR_hl_field(0, STATE_VARIABLE_Info_2_52, 8) = ((MR_Box) (Var_114));
        MR_hl_field(0, STATE_VARIABLE_Info_2_52, 9) = ((MR_Box) (Var_115));
        MR_hl_field(0, STATE_VARIABLE_Info_2_52, 10) = ((MR_Box) (Var_116));
      }
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_154, (MR_Integer) 2, &TypeClassInfo_for_answer_pattern_167);
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_answer_pattern_167, (MR_Integer) 1, &TypeClassInfo_for_partial_order_169);
      succeeded = analysis__framework__more_precise_than_3_p_0(TypeClassInfo_for_partial_order_169, FuncInfo_20, NewAnswer_18, OldAnswer_25);
      if (succeeded)
        Status_31 = (MR_Integer) 1;
      else
        Status_31 = (MR_Integer) 0;
      Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_52, 9))));
      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[5]), Var_53, ((MR_Box) (ModuleName_11)), &conv1_OldArcs_32);
      OldArcs_32 = ((MR_Word) (conv1_OldArcs_32));
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_154, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_174);
      DepModules_33 = analysis__operations__imdg_dependent_modules_5_f_0(TypeClassInfo_for_call_pattern_174, OldArcs_32, AnalysisName_12, FuncId_13, FuncInfo_20, Call_17);
      analysis__operations__get_debug_analysis_stream_3_p_0(&MaybeDebugStream_71);
      if (!((MaybeDebugStream_71 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word TypeInfo_177_177;
        MR_Word DebugStream_69 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_71, 0))));

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_154, (MR_Integer) 5, &TypeInfo_177_177);
        analysis__operations__write_changed_answer_7_p_0(TypeInfo_177_177, DebugStream_69, OldAnswer_25, NewAnswer_18, Status_31, DepModules_33);
      }
      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_56, 0) = ((MR_Box) (&analysis__operations_scalar_common_12[0]));
        MR_hl_field(0, Var_56, 1) = ((MR_Box) (analysis__operations__update_analysis_registry_5_9_p_0_1));
        MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_56, 3) = ((MR_Box) (Globals_22));
        MR_hl_field(0, Var_56, 4) = ((MR_Box) (Status_31));
      }
      mercury__set__fold2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_56, DepModules_33, ((MR_Box) (STATE_VARIABLE_Info_2_52)), &conv4_STATE_VARIABLE_Info_1_51, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_2_50);
      STATE_VARIABLE_Info_1_51 = ((MR_Word) (conv4_STATE_VARIABLE_Info_1_51));
    }
  }
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_51, 5))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[1]), Var_60, ((MR_Box) (ModuleName_11)), &conv5_ModuleRequests_36);
  if (succeeded)
  {
    ModuleRequests_36 = ((MR_Word) (conv5_ModuleRequests_36));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeCtorInfo_192_192 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
    TypeInfo_193_193 = (MR_Word) (&analysis__operations_scalar_common_2[0]);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_192_192, TypeInfo_193_193, ModuleRequests_36, ((MR_Box) (AnalysisName_12)), &conv6_ModuleAnalysisMap_37);
    if (succeeded)
    {
      ModuleAnalysisMap_37 = ((MR_Word) (conv6_ModuleAnalysisMap_37));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeCtorInfo_194_194 = (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0);
      TypeInfo_195_195 = (MR_Word) (&analysis__operations_scalar_common_1[0]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_194_194, TypeInfo_195_195, ModuleAnalysisMap_37, ((MR_Box) (FuncId_13)), &conv7_Requests_38);
      if (succeeded)
      {
        Requests_38 = ((MR_Word) (conv7_Requests_38));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        succeeded = (Requests_38 != (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word Callers0_41;
    MR_Word Callers_44;
    MR_Word Var_65;
    MR_Box conv11_STATE_VARIABLE_Info_46;
    MR_Box conv10_STATE_VARIABLE_IO_48;

    Callers0_41 = mercury__list__filter_map_2_f_0((MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_request_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[11]), Requests_38);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Callers0_41, &Callers_44);
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_65, 0) = ((MR_Box) (&analysis__operations_scalar_common_12[0]));
      MR_hl_field(0, Var_65, 1) = ((MR_Box) (analysis__operations__update_analysis_registry_5_9_p_0_3));
      MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_65, 3) = ((MR_Box) (Globals_22));
      MR_hl_field(0, Var_65, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, Callers_44, ((MR_Box) (STATE_VARIABLE_Info_1_51)), &conv11_STATE_VARIABLE_Info_46, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_48);
    *STATE_VARIABLE_Info_46 = ((MR_Word) (conv11_STATE_VARIABLE_Info_46));
  }
  else
    *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_1_51;
}

static void MR_CALL 
analysis__operations__get_debug_analysis_stream_3_p_0(
  MR_Word * X_4)
{
{
#define MR_PROC_LABEL analysis__operations__get_debug_analysis_stream_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__operations__get_debug_analysis_stream_3_p_0

	MR_Word X;

		{
X = analysis__operations__mutable_variable_debug_analysis_stream;


		;}
#undef MR_PROC_LABEL
	*X_4  = X;
}
{
#define MR_PROC_LABEL analysis__operations__get_debug_analysis_stream_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
analysis__operations__write_changed_answer_7_p_0(
  MR_Word TypeInfo_for_Answer_37,
  MR_Word OutStream_8,
  MR_Box OldAnswer_9,
  MR_Box NewAnswer_10,
  MR_Word Status_11,
  MR_Word DepModules_12)
{
  MR_String OldAnswerStr_14;
  MR_String NewAnswerStr_15;
  MR_String StatusStr_16;
  MR_String DepModulesStr_17;

  OldAnswerStr_14 = mercury__string__string_1_f_0(TypeInfo_for_Answer_37, OldAnswer_9);
  NewAnswerStr_15 = mercury__string__string_1_f_0(TypeInfo_for_Answer_37, NewAnswer_10);
  StatusStr_16 = mercury__string__string_1_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0), ((MR_Box) (Status_11)));
  DepModulesStr_17 = mercury__string__string_1_f_0((MR_Word) (&analysis__operations_scalar_common_1[4]), ((MR_Box) (DepModules_12)));
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "% ");
  mercury__io__write_string_4_p_0(OutStream_8, OldAnswerStr_14);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) " changed to ");
  mercury__io__write_string_4_p_0(OutStream_8, NewAnswerStr_15);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "Mark dependent modules as ");
  mercury__io__write_string_4_p_0(OutStream_8, StatusStr_16);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "The modules to mark are: ");
  mercury__io__write_string_4_p_0(OutStream_8, DepModulesStr_17);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "\n");
}

static void MR_CALL 
analysis__operations__write_no_change_in_result_7_p_0(
  MR_Word TypeInfo_for_Call_31,
  MR_Word TypeInfo_for_Answer_32,
  MR_Word OutStream_8,
  MR_Word ModuleName_9,
  MR_Word FuncId_10,
  MR_Box Call_11,
  MR_Box NewAnswer_12)
{
  MR_String ModuleNameStr_14;
  MR_String FuncIdStr_15;
  MR_String CallStr_16;
  MR_String NewAnswerStr_17;

  ModuleNameStr_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_9);
  FuncIdStr_15 = mercury__string__string_1_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), ((MR_Box) (FuncId_10)));
  CallStr_16 = mercury__string__string_1_f_0(TypeInfo_for_Call_31, Call_11);
  NewAnswerStr_17 = mercury__string__string_1_f_0(TypeInfo_for_Answer_32, NewAnswer_12);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "% No change in the result ");
  mercury__io__write_string_4_p_0(OutStream_8, ModuleNameStr_14);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) ".");
  mercury__io__write_string_4_p_0(OutStream_8, FuncIdStr_15);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) ": ");
  mercury__io__write_string_4_p_0(OutStream_8, CallStr_16);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) " --> ");
  mercury__io__write_string_4_p_0(OutStream_8, NewAnswerStr_17);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "\n");
}

static MR_bool MR_CALL 
analysis__operations__imdg_dependent_modules_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_ModuleName_8;

  succeeded = analysis__operations__arc_module_name_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), (MR_hl_field(0, closure, 5)), ((MR_Word) (wrapper_arg_1)), &conv2_ModuleName_8);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_ModuleName_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Word MR_CALL 
analysis__operations__imdg_dependent_modules_5_f_0(
  MR_Word TypeClassInfo_for_call_pattern_17,
  MR_Word ModuleMap_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Box FuncInfo_10,
  MR_Box Call_11)
{
  MR_bool succeeded;
  MR_Word ModuleNameSet_12;
  MR_Word IMDGEntries_14;
  MR_Word TypeCtorInfo_20_20;
  MR_Word TypeInfo_21_21;
  MR_Word FuncAnalysisMap_13;
  MR_Box conv0_FuncAnalysisMap_13;
  MR_Box conv1_IMDGEntries_14;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[4]), ModuleMap_7, ((MR_Box) (AnalysisName_8)), &conv0_FuncAnalysisMap_13);
  if (succeeded)
  {
    FuncAnalysisMap_13 = ((MR_Word) (conv0_FuncAnalysisMap_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeCtorInfo_20_20 = (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0);
    TypeInfo_21_21 = (MR_Word) (&analysis__operations_scalar_common_1[2]);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_20_20, TypeInfo_21_21, FuncAnalysisMap_13, ((MR_Box) (FuncId_9)), &conv1_IMDGEntries_14);
    if (succeeded)
    {
      IMDGEntries_14 = ((MR_Word) (conv1_IMDGEntries_14));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word ModuleNames_15;
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_16, 0) = ((MR_Box) (&analysis__operations_scalar_common_8[2]));
      MR_hl_field(0, Var_16, 1) = ((MR_Box) (analysis__operations__imdg_dependent_modules_5_f_0_1));
      MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_16, 3) = ((MR_Box) (TypeClassInfo_for_call_pattern_17));
      MR_hl_field(0, Var_16, 4) = FuncInfo_10;
      MR_hl_field(0, Var_16, 5) = Call_11;
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_imdg_arc_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_16, IMDGEntries_14, &ModuleNames_15);
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleNames_15, &ModuleNameSet_12);
  }
  else
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ModuleNameSet_12);
  return ModuleNameSet_12;
}

static void MR_CALL 
analysis__operations__replace_result_in_analysis_map_8_p_0(
  MR_Word TypeClassInfo_for_analysis_24,
  MR_Word ModuleName_9,
  MR_Word FuncId_10,
  MR_Box FuncInfo_11,
  MR_Box CallPattern_12,
  MR_Box AnswerPattern_13,
  MR_Word Status_14,
  MR_Word Map0_15,
  MR_Word * Map_16)
{
  MR_String AnalysisName_17;
  MR_Word ModuleResults0_18;
  MR_Word AnalysisResults0_19;
  MR_Word FuncResults0_20;
  MR_Word FuncResults_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_24, 0)), 5))));
  MR_Box conv1_AnalysisName_17;
  MR_Box conv2_ModuleResults0_18;
  MR_Box conv3_AnalysisResults0_19;
  MR_Box conv4_FuncResults0_20;

  conv1_AnalysisName_17 = func_0(((MR_Box) (TypeClassInfo_for_analysis_24)));
  AnalysisName_17 = ((MR_String) (conv1_AnalysisName_17));
  conv2_ModuleResults0_18 = mercury__map__lookup_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[3]), Map0_15, ((MR_Box) (ModuleName_9)));
  ModuleResults0_18 = ((MR_Word) (conv2_ModuleResults0_18));
  conv3_AnalysisResults0_19 = mercury__map__lookup_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[2]), ModuleResults0_18, ((MR_Box) (AnalysisName_17)));
  AnalysisResults0_19 = ((MR_Word) (conv3_AnalysisResults0_19));
  conv4_FuncResults0_20 = mercury__map__lookup_2_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_1[1]), AnalysisResults0_19, ((MR_Box) (FuncId_10)));
  FuncResults0_20 = ((MR_Word) (conv4_FuncResults0_20));
  analysis__operations__replace_result_in_list_6_p_0(TypeClassInfo_for_analysis_24, FuncInfo_11, CallPattern_12, AnswerPattern_13, Status_14, FuncResults0_20, &FuncResults_21);
  Var_23 = mercury__map__det_update_3_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_1[1]), AnalysisResults0_19, ((MR_Box) (FuncId_10)), ((MR_Box) (FuncResults_21)));
  Var_22 = mercury__map__det_update_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[2]), ModuleResults0_18, ((MR_Box) (AnalysisName_17)), ((MR_Box) (Var_23)));
  *Map_16 = mercury__map__det_update_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[3]), Map0_15, ((MR_Box) (ModuleName_9)), ((MR_Box) (Var_22)));
}

static void MR_CALL 
analysis__operations__replace_result_in_list_6_p_0(
  MR_Word TypeClassInfo_for_analysis_24,
  MR_Box FuncInfo_7,
  MR_Box Call_8,
  MR_Box Answer_9,
  MR_Word Status_10,
  MR_Word Results0_11,
  MR_Word * Results_12)
{
  MR_bool succeeded;

  if ((Results0_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.operations.replace_result_in_list\'/6", (MR_String) "found no result to replace");
      return;
    }
  else
  {
    MR_Word TypeInfo_25_25;
    MR_Word TypeClassInfo_for_analysis_26;
    MR_Word TypeInfo_29_29;
    MR_Word H0_13 = ((MR_Word) ((MR_hl_field(1, Results0_11, 0))));
    MR_Word T0_14 = ((MR_Word) ((MR_hl_field(1, Results0_11, 1))));
    MR_Box HCall_15;
    MR_Word H_16;
    MR_Word T_17;
    MR_Word Var_20;
    MR_Box Var_21;
    MR_Word TypeClassInfo_for_call_pattern_30;
    MR_Word TypeClassInfo_for_partial_order_32;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

    TypeClassInfo_for_analysis_26 = ((MR_Word) ((MR_hl_field(0, H0_13, 0))));
    Var_21 = (MR_hl_field(0, H0_13, 1));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_26, (MR_Integer) 4, &TypeInfo_25_25);
    Var_20 = mercury__univ__univ_1_f_0(TypeInfo_25_25, Var_21);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_24, (MR_Integer) 4, &TypeInfo_29_29);
    mercury__univ__det_univ_to_type_2_p_0(TypeInfo_29_29, Var_20, &HCall_15);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_24, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_30);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_30, (MR_Integer) 1, &TypeClassInfo_for_partial_order_32);
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_partial_order_32, 0)), 6))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_32)), FuncInfo_7, Call_8, HCall_15);
    if (succeeded)
    {
      {
        H_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, H_16, 0) = ((MR_Box) (TypeClassInfo_for_analysis_24));
        MR_hl_field(0, H_16, 1) = Call_8;
        MR_hl_field(0, H_16, 2) = Answer_9;
        MR_hl_field(0, H_16, 3) = (MR_Box) ((MR_Unsigned) (Status_10));
      }
      T_17 = T0_14;
    }
    else
    {
      H_16 = H0_13;
      analysis__operations__replace_result_in_list_6_p_0(TypeClassInfo_for_analysis_24, FuncInfo_7, Call_8, Answer_9, Status_10, T0_14, &T_17);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Results_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (H_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (T_17));
    }
  }
}

static void MR_CALL 
analysis__operations__update_analysis_registry_4_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_46;

  analysis__operations__update_analysis_registry_5_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_46);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_46));
}

static void MR_CALL 
analysis__operations__update_analysis_registry_4_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ModuleName_11,
  MR_String AnalysisName_12,
  MR_Word FuncId_13,
  MR_Word NewResults_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word Var_21;
  MR_Box conv2_STATE_VARIABLE_Info_18;
  MR_Box conv1_STATE_VARIABLE_IO_20;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&analysis__operations_scalar_common_10[2]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (analysis__operations__update_analysis_registry_4_9_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) (AnalysisName_12));
    MR_hl_field(0, Var_21, 6) = ((MR_Box) (FuncId_13));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_some_analysis_result_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, NewResults_14, ((MR_Box) (STATE_VARIABLE_Info_0_17)), &conv2_STATE_VARIABLE_Info_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20);
  *STATE_VARIABLE_Info_18 = ((MR_Word) (conv2_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
analysis__operations__update_analysis_registry_3_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_18;

  analysis__operations__update_analysis_registry_4_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_18);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
analysis__operations__update_analysis_registry_3_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ModuleName_10,
  MR_String AnalysisName_11,
  MR_Word FuncMap_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word Var_19;
  MR_Box conv2_STATE_VARIABLE_Info_16;
  MR_Box conv1_STATE_VARIABLE_IO_18;

  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&analysis__operations_scalar_common_10[1]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (analysis__operations__update_analysis_registry_3_8_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (ModuleInfo_9));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (ModuleName_10));
    MR_hl_field(0, Var_19, 5) = ((MR_Box) (AnalysisName_11));
  }
  mercury__map__foldl2_6_p_2((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_1[1]), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, FuncMap_12, ((MR_Box) (STATE_VARIABLE_Info_0_15)), &conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
  *STATE_VARIABLE_Info_16 = ((MR_Word) (conv2_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
analysis__operations__more_precise_answer_4_p_0(
  MR_Word TypeClassInfo_for_analysis_15,
  MR_Box FuncInfo_5,
  MR_Word Result_6,
  MR_Word Best0_7,
  MR_Word * Best_8)
{
  MR_bool succeeded;
  MR_Box ResultAnswer_9 = (MR_hl_field(0, Result_6, 1));
  MR_Box BestAnswer0_10 = (MR_hl_field(0, Best0_7, 1));
  MR_Word TypeClassInfo_for_answer_pattern_16;
  MR_Word TypeClassInfo_for_partial_order_18;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_15, (MR_Integer) 2, &TypeClassInfo_for_answer_pattern_16);
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_answer_pattern_16, (MR_Integer) 1, &TypeClassInfo_for_partial_order_18);
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_partial_order_18, 0)), 5))));
  succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_18)), FuncInfo_5, ResultAnswer_9, BestAnswer0_10);
  if (succeeded)
    *Best_8 = Result_6;
  else
    *Best_8 = Best0_7;
}

static void MR_CALL 
analysis__operations__record_result_in_analysis_map_6_p_0(
  MR_Word TypeClassInfo_for_analysis_21,
  MR_Word FuncId_7,
  MR_Box CallPattern_8,
  MR_Box AnswerPattern_9,
  MR_Word Status_10,
  MR_Word ModuleResults0_11,
  MR_Word * ModuleResults_12)
{
  MR_bool succeeded;
  MR_String AnalysisName_13;
  MR_Word AnalysisResults1_15;
  MR_Word FuncResults1_17;
  MR_Word Result_18;
  MR_Word FuncResults_19;
  MR_Word Var_20;
  MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_21, 0)), 5))));
  MR_Box conv1_AnalysisName_13;
  MR_Word AnalysisResults0_14;
  MR_Box conv2_AnalysisResults0_14;
  MR_Word FuncResults0_16;
  MR_Box conv3_FuncResults0_16;

  conv1_AnalysisName_13 = func_0(((MR_Box) (TypeClassInfo_for_analysis_21)));
  AnalysisName_13 = ((MR_String) (conv1_AnalysisName_13));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[2]), ModuleResults0_11, ((MR_Box) (AnalysisName_13)), &conv2_AnalysisResults0_14);
  if (succeeded)
  {
    AnalysisResults0_14 = ((MR_Word) (conv2_AnalysisResults0_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    AnalysisResults1_15 = AnalysisResults0_14;
  else
    AnalysisResults1_15 = mercury__map__init_0_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_1[1]));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_1[1]), AnalysisResults1_15, ((MR_Box) (FuncId_7)), &conv3_FuncResults0_16);
  if (succeeded)
  {
    FuncResults0_16 = ((MR_Word) (conv3_FuncResults0_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    FuncResults1_17 = FuncResults0_16;
  else
    FuncResults1_17 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Result_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Result_18, 0) = ((MR_Box) (TypeClassInfo_for_analysis_21));
    MR_hl_field(0, Result_18, 1) = CallPattern_8;
    MR_hl_field(0, Result_18, 2) = AnswerPattern_9;
    MR_hl_field(0, Result_18, 3) = (MR_Box) ((MR_Unsigned) (Status_10));
  }
  {
    FuncResults_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FuncResults_19, 0) = ((MR_Box) (Result_18));
    MR_hl_field(1, FuncResults_19, 1) = ((MR_Box) (FuncResults1_17));
  }
  Var_20 = mercury__map__set_3_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_1[1]), AnalysisResults1_15, ((MR_Box) (FuncId_7)), ((MR_Box) (FuncResults_19)));
  *ModuleResults_12 = mercury__map__set_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[2]), ModuleResults0_11, ((MR_Box) (AnalysisName_13)), ((MR_Box) (Var_20)));
}

static MR_bool MR_CALL 
analysis__operations__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__operations__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__420__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), (MR_hl_field(0, closure, 5)), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
analysis__operations__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(
  MR_Word TypeClassInfo_for_analysis_31,
  MR_Word Info_7,
  MR_Word ModuleName_8,
  MR_Word FuncId_9,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word * MaybeResult_12)
{
  MR_bool succeeded;
  MR_Word TypeInfo_33_33;
  MR_Word TypeInfo_35_35;
  MR_Word TypeInfo_37_37;
  MR_Word AllResultsList_14;
  MR_Word ResultList_15;
  MR_Word Var_21;

  analysis__operations__lookup_results_1_5_p_0(TypeClassInfo_for_analysis_31, Info_7, ModuleName_8, FuncId_9, (MR_Integer) 1, &AllResultsList_14);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_31, (MR_Integer) 4, &TypeInfo_33_33);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_31, (MR_Integer) 5, &TypeInfo_35_35);
  {
    TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_37_37, 0) = ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_result_2));
    MR_hl_field(0, TypeInfo_37_37, 1) = ((MR_Box) (TypeInfo_33_33));
    MR_hl_field(0, TypeInfo_37_37, 2) = ((MR_Box) (TypeInfo_35_35));
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&analysis__operations_scalar_common_7[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (analysis__operations__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (TypeClassInfo_for_analysis_31));
    MR_hl_field(0, Var_21, 4) = FuncInfo_10;
    MR_hl_field(0, Var_21, 5) = Call_11;
  }
  ResultList_15 = mercury__list__filter_2_f_0(TypeInfo_37_37, Var_21, AllResultsList_14);
  if ((ResultList_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeResult_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, ResultList_15, 1))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(1, ResultList_15, 0))));

    if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeResult_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_42));
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.operations.lookup_exactly_matching_result_even_from_invalid_modules\'/6", (MR_String) "zero or one exactly matching results expected");
        return;
      }
  }
}

void MR_CALL 
analysis__operations__set_analysis_debug_stream_3_p_0(
  MR_Word MaybeDebugStream_4)
{
{
#define MR_PROC_LABEL analysis__operations__set_analysis_debug_stream_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__operations__set_analysis_debug_stream_3_p_0

	MR_Word X;

	X = MaybeDebugStream_4 ;
		{
analysis__operations__mutable_variable_debug_analysis_stream = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__operations__set_analysis_debug_stream_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
analysis__operations__get_analysis_debug_stream_3_p_0(
  MR_Word * MaybeDebugStream_4)
{
{
#define MR_PROC_LABEL analysis__operations__get_analysis_debug_stream_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__operations__get_analysis_debug_stream_3_p_0

	MR_Word X;

		{
X = analysis__operations__mutable_variable_debug_analysis_stream;


		;}
#undef MR_PROC_LABEL
	*MaybeDebugStream_4  = X;
}
{
#define MR_PROC_LABEL analysis__operations__get_analysis_debug_stream_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
analysis__operations__do_read_module_overall_status_6_p_0(
  MR_Word TypeClassInfo_for_compiler_14,
  MR_Box Compiler_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * ModuleStatus_10)
{
  analysis__file__read_module_overall_status_6_p_0(TypeClassInfo_for_compiler_14, Compiler_7, Globals_8, ModuleName_9, ModuleStatus_10);
}

static void MR_CALL 
analysis__operations__write_analysis_files_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  analysis__operations__maybe_write_module_imdg_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
analysis__operations__write_analysis_files_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  analysis__operations__maybe_write_module_requests_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
analysis__operations__write_analysis_files_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  analysis__operations__maybe_write_module_overall_status_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
analysis__operations__write_analysis_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Info_21;
  MR_Word conv0_STATE_VARIABLE_Specs_23;

  analysis__operations__load_module_imdg_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Info_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Info_21));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_23));
}

void MR_CALL 
analysis__operations__write_analysis_files_8_p_0(
  MR_Word TypeClassInfo_for_compiler_120,
  MR_Word ProgressStream_9,
  MR_Box Compiler_10,
  MR_Word ModuleInfo_11,
  MR_Word ImportedModules0_12,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * Specs_14)
{
  MR_bool succeeded;
  MR_Word ThisModule_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, 2))));
  MR_Word ImportedModules_17;
  MR_Word LocalModules_18;
  MR_Word LocalImportedModules_19;
  MR_Word Globals_20;
  MR_Word Var_33;
  MR_Word STATE_VARIABLE_Info_1_34;
  MR_Box conv4_STATE_VARIABLE_Info_1_34;
  MR_Box conv3_Specs_14;
  MR_Box conv2_STATE_VARIABLE_IO_1_36;

  ImportedModules_17 = mercury__set__delete_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportedModules0_12, ((MR_Box) (ThisModule_16)));
  LocalModules_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, 4))));
  mercury__set__intersect_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), LocalModules_18, ImportedModules_17, &LocalImportedModules_19);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_20);
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&analysis__operations_scalar_common_11[1]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (analysis__operations__write_analysis_files_8_p_0_1));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (Globals_20));
  }
  mercury__set__fold3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), (MR_Word) (&analysis__operations_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, LocalModules_18, ((MR_Box) (STATE_VARIABLE_Info_0_30)), &conv4_STATE_VARIABLE_Info_1_34, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Specs_14, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_1_36);
  STATE_VARIABLE_Info_1_34 = ((MR_Word) (conv4_STATE_VARIABLE_Info_1_34));
  *Specs_14 = ((MR_Word) (conv3_Specs_14));
  if ((*Specs_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ModuleStatus_23;
    MR_Word ModuleStatusMap0_24;
    MR_Word ModuleStatusMap_25;
    MR_Word ModuleResults_26;
    MR_String TimestampFileName_28;
    MR_Word STATE_VARIABLE_Info_2_37;
    MR_Word Var_39;
    MR_Word STATE_VARIABLE_Info_3_40;
    MR_Word STATE_VARIABLE_Info_4_41;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word TypeClassInfo_for_compiler_137;
    MR_Box Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_42;
    MR_Box conv5_STATE_VARIABLE_IO_3_46;
    MR_Box conv6_ModuleResults_26;
    MR_Box conv7_STATE_VARIABLE_IO_5_50;
    MR_Box conv8_STATE_VARIABLE_IO_7_53;
    MR_Word _Succeeded_29;

    analysis__operations__update_analysis_registry_5_p_0(ModuleInfo_11, STATE_VARIABLE_Info_1_34, &STATE_VARIABLE_Info_2_37);
    Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_37, 8))));
    ModuleStatus_23 = analysis__operations__lub_result_statuses_1_f_0(Var_39);
    ModuleStatusMap0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_37, 6))));
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0), ((MR_Box) (ThisModule_16)), ((MR_Box) (ModuleStatus_23)), ModuleStatusMap0_24, &ModuleStatusMap_25);
    TypeClassInfo_for_compiler_137 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_37, 0))));
    Var_92 = (MR_hl_field(0, STATE_VARIABLE_Info_2_37, 1));
    Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_37, 2))));
    Var_94 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_2_37, 3))) & (MR_Integer) 1);
    Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_37, 4))));
    Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_37, 5))));
    Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_37, 7))));
    Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_37, 8))));
    Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_37, 9))));
    Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_37, 10))));
    {
      STATE_VARIABLE_Info_3_40 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_3_40, 0) = ((MR_Box) (TypeClassInfo_for_compiler_137));
      MR_hl_field(0, STATE_VARIABLE_Info_3_40, 1) = Var_92;
      MR_hl_field(0, STATE_VARIABLE_Info_3_40, 2) = ((MR_Box) (Var_93));
      MR_hl_field(0, STATE_VARIABLE_Info_3_40, 3) = (MR_Box) ((MR_Unsigned) (Var_94));
      MR_hl_field(0, STATE_VARIABLE_Info_3_40, 4) = ((MR_Box) (Var_95));
      MR_hl_field(0, STATE_VARIABLE_Info_3_40, 5) = ((MR_Box) (Var_96));
      MR_hl_field(0, STATE_VARIABLE_Info_3_40, 6) = ((MR_Box) (ModuleStatusMap_25));
      MR_hl_field(0, STATE_VARIABLE_Info_3_40, 7) = ((MR_Box) (Var_98));
      MR_hl_field(0, STATE_VARIABLE_Info_3_40, 8) = ((MR_Box) (Var_99));
      MR_hl_field(0, STATE_VARIABLE_Info_3_40, 9) = ((MR_Box) (Var_100));
      MR_hl_field(0, STATE_VARIABLE_Info_3_40, 10) = ((MR_Box) (Var_101));
    }
    analysis__operations__update_intermodule_dependencies_4_p_0(ThisModule_16, LocalImportedModules_19, STATE_VARIABLE_Info_3_40, &STATE_VARIABLE_Info_4_41);
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_4_41, 8))));
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[2]), Var_42);
    if (!(succeeded))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.operations.write_analysis_files\'/8", (MR_String) "new_analysis_results is not empty");
        return;
      }
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (&analysis__operations_scalar_common_8[1]));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) (analysis__operations__write_analysis_files_8_p_0_2));
      MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_45, 3) = ((MR_Box) (STATE_VARIABLE_Info_4_41));
      MR_hl_field(0, Var_45, 4) = ((MR_Box) (Globals_20));
    }
    mercury__set__fold_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, LocalModules_18, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_3_46);
    Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_4_41, 7))));
    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[3]), Var_47, ((MR_Box) (ThisModule_16)), &conv6_ModuleResults_26);
    ModuleResults_26 = ((MR_Word) (conv6_ModuleResults_26));
    analysis__file__write_module_analysis_results_7_p_0(ProgressStream_9, STATE_VARIABLE_Info_4_41, Globals_20, ThisModule_16, ModuleResults_26);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (&analysis__operations_scalar_common_8[1]));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (analysis__operations__write_analysis_files_8_p_0_3));
      MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_49, 3) = ((MR_Box) (STATE_VARIABLE_Info_4_41));
      MR_hl_field(0, Var_49, 4) = ((MR_Box) (Globals_20));
    }
    mercury__set__fold_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, LocalImportedModules_19, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_5_50);
    analysis__file__empty_request_file_5_p_0(STATE_VARIABLE_Info_4_41, Globals_20, ThisModule_16);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_52, 0) = ((MR_Box) (&analysis__operations_scalar_common_8[1]));
      MR_hl_field(0, Var_52, 1) = ((MR_Box) (analysis__operations__write_analysis_files_8_p_0_4));
      MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_52, 3) = ((MR_Box) (STATE_VARIABLE_Info_4_41));
      MR_hl_field(0, Var_52, 4) = ((MR_Box) (Globals_20));
    }
    mercury__set__fold_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, LocalImportedModules_19, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_7_53);
    analysis__framework__module_name_to_write_file_name_7_p_0(TypeClassInfo_for_compiler_120, Compiler_10, Globals_20, (MR_Word) (MR_mkword(3, &analysis__operations_scalar_common_1[5])), ThisModule_16, &TimestampFileName_28);
    parse_tree__module_cmds__touch_file_datestamp_6_p_0(Globals_20, ProgressStream_9, TimestampFileName_28, &_Succeeded_29);
  }
}

static MR_Box MR_CALL 
analysis__operations__lub_result_statuses_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = analysis__operations__lub_result_statuses_2_3_f_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_4;
}

static MR_Word MR_CALL 
analysis__operations__lub_result_statuses_1_f_0(
  MR_Word ModuleMap_3)
{
  MR_Word HeadVar__2_2;
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = mercury__map__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[2]), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0), (MR_Word) (&analysis__operations_scalar_common_2[10]), ModuleMap_3, ((MR_Box) ((MR_Integer) 2)));
  HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

static void MR_CALL 
analysis__operations__update_intermodule_dependencies_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_20;

  analysis__operations__update_intermodule_dependencies_2_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
analysis__operations__update_intermodule_dependencies_4_p_0(
  MR_Word ModuleName_5,
  MR_Word LocalImportedModules_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word Var_10;
  MR_Box conv1_STATE_VARIABLE_Info_9;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&analysis__operations_scalar_common_7[1]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (analysis__operations__update_intermodule_dependencies_4_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (ModuleName_5));
  }
  mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), Var_10, LocalImportedModules_6, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv1_STATE_VARIABLE_Info_9);
  *STATE_VARIABLE_Info_9 = ((MR_Word) (conv1_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
analysis__operations__update_analysis_registry_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_16;

  analysis__operations__update_analysis_registry_3_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_16);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
analysis__operations__update_analysis_registry_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_Word MaybeDebugStream_9;
  MR_Word NewResults_11;
  MR_Word STATE_VARIABLE_Info_1_20;
  MR_Word Var_23;
  MR_Word Var_25;
  MR_Word Var_57;
  MR_Box conv2_STATE_VARIABLE_Info_1_20;
  MR_Box conv1_STATE_VARIABLE_IO_15;
  MR_Word TypeClassInfo_for_compiler_56;
  MR_Box Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_51;

{
#define MR_PROC_LABEL analysis__operations__update_analysis_registry_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__operations__update_analysis_registry_5_p_0

	MR_Word X;

		{
X = analysis__operations__mutable_variable_debug_analysis_stream;


		;}
#undef MR_PROC_LABEL
	MaybeDebugStream_9  = X;
}
{
#define MR_PROC_LABEL analysis__operations__update_analysis_registry_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  if (!((MaybeDebugStream_9 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word DebugStream_10 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_9, 0))));

    mercury__io__write_string_4_p_0(DebugStream_10, (MR_String) "% Updating analysis registry.\n");
  }
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, 2))));
  NewResults_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, 8))));
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (&analysis__operations_scalar_common_11[0]));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (analysis__operations__update_analysis_registry_5_p_0_1));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_57, 4) = ((MR_Box) (Var_25));
  }
  mercury__map__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[2]), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, NewResults_11, ((MR_Box) (STATE_VARIABLE_Info_0_12)), &conv2_STATE_VARIABLE_Info_1_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_15);
  STATE_VARIABLE_Info_1_20 = ((MR_Word) (conv2_STATE_VARIABLE_Info_1_20));
  Var_23 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[2]));
  TypeClassInfo_for_compiler_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_20, 0))));
  Var_42 = (MR_hl_field(0, STATE_VARIABLE_Info_1_20, 1));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_20, 2))));
  Var_44 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_1_20, 3))) & (MR_Integer) 1);
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_20, 4))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_20, 5))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_20, 6))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_20, 7))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_20, 9))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_20, 10))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_56));
    MR_hl_field(0, base, 1) = Var_42;
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_44));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_51));
  }
}

void MR_CALL 
analysis__operations__module_is_local_3_p_0(
  MR_Word Info_4,
  MR_Word ModuleName_5,
  MR_Word * IsLocal_6)
{
  MR_bool succeeded;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, Info_4, 4))));

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_7, ((MR_Box) (ModuleName_5)));
  if (succeeded)
    *IsLocal_6 = (MR_Integer) 1;
  else
    *IsLocal_6 = (MR_Integer) 0;
}

static void MR_CALL 
analysis__operations__prepare_intermodule_analysis_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Info_26;
  MR_Word conv0_STATE_VARIABLE_Specs_28;

  analysis__operations__load_module_analysis_results_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Info_26, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_28);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Info_26));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_28));
}

void MR_CALL 
analysis__operations__prepare_intermodule_analysis_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ImportedModuleNames0_12,
  MR_Word LocalModuleNames_13,
  MR_Word * Specs_14,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_Word ThisModule_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 2))));
  MR_Word ImportedModuleNames_18;
  MR_Word Specs0_19;
  MR_Word Specs1_20;
  MR_Word ThisModuleRequests_21;
  MR_Word STATE_VARIABLE_Info_1_30;
  MR_Word Var_31;
  MR_Word STATE_VARIABLE_Info_2_32;
  MR_Word STATE_VARIABLE_Info_3_35;
  MR_Word TypeClassInfo_for_compiler_77;
  MR_Box Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Box conv4_STATE_VARIABLE_Info_2_32;
  MR_Box conv3_Specs0_19;
  MR_Box conv2_STATE_VARIABLE_IO_1_34;

  ImportedModuleNames_18 = mercury__set__delete_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportedModuleNames0_12, ((MR_Box) (ThisModule_17)));
  TypeClassInfo_for_compiler_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 0))));
  Var_46 = (MR_hl_field(0, STATE_VARIABLE_Info_0_26, 1));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 2))));
  Var_48 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 3))) & (MR_Integer) 1);
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 5))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 6))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 7))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 8))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 9))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 10))));
  {
    STATE_VARIABLE_Info_1_30 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_1_30, 0) = ((MR_Box) (TypeClassInfo_for_compiler_77));
    MR_hl_field(0, STATE_VARIABLE_Info_1_30, 1) = Var_46;
    MR_hl_field(0, STATE_VARIABLE_Info_1_30, 2) = ((MR_Box) (Var_47));
    MR_hl_field(0, STATE_VARIABLE_Info_1_30, 3) = (MR_Box) ((MR_Unsigned) (Var_48));
    MR_hl_field(0, STATE_VARIABLE_Info_1_30, 4) = ((MR_Box) (LocalModuleNames_13));
    MR_hl_field(0, STATE_VARIABLE_Info_1_30, 5) = ((MR_Box) (Var_50));
    MR_hl_field(0, STATE_VARIABLE_Info_1_30, 6) = ((MR_Box) (Var_51));
    MR_hl_field(0, STATE_VARIABLE_Info_1_30, 7) = ((MR_Box) (Var_52));
    MR_hl_field(0, STATE_VARIABLE_Info_1_30, 8) = ((MR_Box) (Var_53));
    MR_hl_field(0, STATE_VARIABLE_Info_1_30, 9) = ((MR_Box) (Var_54));
    MR_hl_field(0, STATE_VARIABLE_Info_1_30, 10) = ((MR_Box) (Var_55));
  }
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&analysis__operations_scalar_common_10[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (analysis__operations__prepare_intermodule_analysis_9_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (ProgressStream_10));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (Globals_11));
  }
  mercury__set__fold3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0), (MR_Word) (&analysis__operations_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_31, ImportedModuleNames_18, ((MR_Box) (STATE_VARIABLE_Info_1_30)), &conv4_STATE_VARIABLE_Info_2_32, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Specs0_19, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_1_34);
  STATE_VARIABLE_Info_2_32 = ((MR_Word) (conv4_STATE_VARIABLE_Info_2_32));
  Specs0_19 = ((MR_Word) (conv3_Specs0_19));
  analysis__operations__load_module_analysis_results_9_p_0(ProgressStream_10, Globals_11, ThisModule_17, STATE_VARIABLE_Info_2_32, &STATE_VARIABLE_Info_3_35, Specs0_19, &Specs1_20);
  analysis__file__read_module_analysis_requests_8_p_0(STATE_VARIABLE_Info_3_35, Globals_11, ThisModule_17, &ThisModuleRequests_21, Specs1_20, Specs_14);
  if ((*Specs_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word RequestsMap0_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_3_35, 5))));
    MR_Word RequestsMap_23;
    MR_Word TypeClassInfo_for_compiler_90;
    MR_Box Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;

    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[1]), ((MR_Box) (ThisModule_17)), ((MR_Box) (ThisModuleRequests_21)), RequestsMap0_22, &RequestsMap_23);
    TypeClassInfo_for_compiler_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_3_35, 0))));
    Var_65 = (MR_hl_field(0, STATE_VARIABLE_Info_3_35, 1));
    Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_3_35, 2))));
    Var_67 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_3_35, 3))) & (MR_Integer) 1);
    Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_3_35, 4))));
    Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_3_35, 6))));
    Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_3_35, 7))));
    Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_3_35, 8))));
    Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_3_35, 9))));
    Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_3_35, 10))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_27 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_90));
      MR_hl_field(0, base, 1) = Var_65;
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_66));
      MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_67));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_68));
      MR_hl_field(0, base, 5) = ((MR_Box) (RequestsMap_23));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_70));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_71));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_72));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_73));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_74));
    }
  }
  else
    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_3_35;
}

static void MR_CALL 
analysis__operations__load_module_analysis_results_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_bool succeeded;
  MR_Word OldResultsMap0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 7))));
  MR_Word ModuleStatusMap0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 6))));

  succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[3]), OldResultsMap0_16, ((MR_Box) (ModuleName_12)));
  if (!(succeeded))
    succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0), ModuleStatusMap0_17, ((MR_Box) (ModuleName_12)));
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.operations.load_module_analysis_results\'/9", (MR_String) "ensure_old_module_analysis_results_loaded");
      return;
    }
  else
  {
    MR_Word TypeClassInfo_for_compiler_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 0))));
    MR_Word ModuleStatus_18;
    MR_Word ModuleResults_19;
    MR_Word ModuleSpecs_20;
    MR_Box Var_33 = (MR_hl_field(0, STATE_VARIABLE_Info_0_25, 1));

    analysis__file__read_module_overall_status_6_p_0(TypeClassInfo_for_compiler_90, Var_33, Globals_11, ModuleName_12, &ModuleStatus_18);
    analysis__file__read_module_analysis_results_8_p_0(ProgressStream_10, STATE_VARIABLE_Info_0_25, Globals_11, ModuleName_12, &ModuleResults_19, &ModuleSpecs_20);
    if ((ModuleSpecs_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeClassInfo_for_compiler_94;
      MR_Word ModuleStatusMap_21;
      MR_Word OldResultsMap_22;
      MR_Box Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;

      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0), ((MR_Box) (ModuleName_12)), ((MR_Box) (ModuleStatus_18)), ModuleStatusMap0_17, &ModuleStatusMap_21);
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[3]), ((MR_Box) (ModuleName_12)), ((MR_Box) (ModuleResults_19)), OldResultsMap0_16, &OldResultsMap_22);
      TypeClassInfo_for_compiler_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 0))));
      Var_64 = (MR_hl_field(0, STATE_VARIABLE_Info_0_25, 1));
      Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 2))));
      Var_66 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 3))) & (MR_Integer) 1);
      Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 4))));
      Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 5))));
      Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 8))));
      Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 9))));
      Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 10))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_26 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_94));
        MR_hl_field(0, base, 1) = Var_64;
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_65));
        MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_66));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_67));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_68));
        MR_hl_field(0, base, 6) = ((MR_Box) (ModuleStatusMap_21));
        MR_hl_field(0, base, 7) = ((MR_Box) (OldResultsMap_22));
        MR_hl_field(0, base, 8) = ((MR_Box) (Var_71));
        MR_hl_field(0, base, 9) = ((MR_Box) (Var_72));
        MR_hl_field(0, base, 10) = ((MR_Box) (Var_73));
      }
      *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
    }
    else
    {
      *STATE_VARIABLE_Specs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ModuleSpecs_20, STATE_VARIABLE_Specs_0_27);
      *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
    }
  }
}

static MR_bool MR_CALL 
analysis__operations__lookup_requests_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__operations__IntroducedFrom__func__lookup_requests__689__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2);
  return succeeded;
}

void MR_CALL 
analysis__operations__lookup_requests_5_p_0(
  MR_Word TypeClassInfo_for_call_pattern_45,
  MR_Word Info_6,
  MR_String AnalysisName_7,
  MR_Word ModuleName_8,
  MR_Word FuncId_9,
  MR_Word * CallPatterns_10)
{
  MR_bool succeeded;
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Info_6, 2))));
  MR_Word CallPatterns0_13;
  MR_Word TypeCtorInfo_50_50;
  MR_Word TypeInfo_51_51;
  MR_Word TypeCtorInfo_52_52;
  MR_Word TypeInfo_53_53;
  MR_Word ModuleRequests_11;
  MR_Word AnalysisRequests_12;
  MR_Word Var_20;
  MR_Box conv0_ModuleRequests_11;
  MR_Box conv1_AnalysisRequests_12;
  MR_Box conv2_CallPatterns0_13;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_8, Var_62);
  if (!(succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.operations.lookup_requests\'/5", (MR_String) "not this_module");
      return;
    }
  Var_20 = ((MR_Word) ((MR_hl_field(0, Info_6, 5))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[1]), Var_20, ((MR_Box) (ModuleName_8)), &conv0_ModuleRequests_11);
  if (succeeded)
  {
    ModuleRequests_11 = ((MR_Word) (conv0_ModuleRequests_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeCtorInfo_50_50 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
    TypeInfo_51_51 = (MR_Word) (&analysis__operations_scalar_common_2[0]);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_50_50, TypeInfo_51_51, ModuleRequests_11, ((MR_Box) (AnalysisName_7)), &conv1_AnalysisRequests_12);
    if (succeeded)
    {
      AnalysisRequests_12 = ((MR_Word) (conv1_AnalysisRequests_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeCtorInfo_52_52 = (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0);
      TypeInfo_53_53 = (MR_Word) (&analysis__operations_scalar_common_1[0]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_52_52, TypeInfo_53_53, AnalysisRequests_12, ((MR_Box) (FuncId_9)), &conv2_CallPatterns0_13);
      if (succeeded)
      {
        CallPatterns0_13 = ((MR_Word) (conv2_CallPatterns0_13));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word TypeInfo_56_56;
    MR_Word TypeInfo_61_61;
    MR_Word CallPatterns1_14;
    MR_Word Var_21;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_45, (MR_Integer) 4, &TypeInfo_56_56);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&analysis__operations_scalar_common_5[2]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (analysis__operations__lookup_requests_5_p_0_1));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (TypeClassInfo_for_call_pattern_45));
    }
    CallPatterns1_14 = mercury__list__filter_map_2_f_0((MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_analysis_request_0), TypeInfo_56_56, Var_21, CallPatterns0_13);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_45, (MR_Integer) 4, &TypeInfo_61_61);
    mercury__list__sort_and_remove_dups_2_p_0(TypeInfo_61_61, CallPatterns1_14, CallPatterns_10);
  }
  else
    *CallPatterns_10 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_Box MR_CALL 
analysis__operations__lookup_existing_call_patterns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;

  wrapper_arg_2 = analysis__operations__IntroducedFrom__func__lookup_existing_call_patterns__667__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return wrapper_arg_2;
}

void MR_CALL 
analysis__operations__lookup_existing_call_patterns_5_p_0(
  MR_Word TypeClassInfo_for_call_pattern_45,
  MR_Word Info_6,
  MR_String AnalysisName_7,
  MR_Word ModuleName_8,
  MR_Word FuncId_9,
  MR_Word * Calls_10)
{
  MR_bool succeeded;
  MR_Word Map_11;
  MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Info_6, 2))));
  MR_Word Results_14;
  MR_Word TypeCtorInfo_50_50;
  MR_Word TypeInfo_51_51;
  MR_Word TypeCtorInfo_52_52;
  MR_Word TypeInfo_53_53;
  MR_Word ModuleResults_12;
  MR_Word AnalysisResults_13;
  MR_Box conv0_ModuleResults_12;
  MR_Box conv1_AnalysisResults_13;
  MR_Box conv2_Results_14;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_8, Var_61);
  if (!(succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.operations.lookup_existing_call_patterns\'/5", (MR_String) "not this_module");
      return;
    }
  Map_11 = ((MR_Word) ((MR_hl_field(0, Info_6, 7))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[3]), Map_11, ((MR_Box) (ModuleName_8)), &conv0_ModuleResults_12);
  if (succeeded)
  {
    ModuleResults_12 = ((MR_Word) (conv0_ModuleResults_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeCtorInfo_50_50 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
    TypeInfo_51_51 = (MR_Word) (&analysis__operations_scalar_common_2[2]);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_50_50, TypeInfo_51_51, ModuleResults_12, ((MR_Box) (AnalysisName_7)), &conv1_AnalysisResults_13);
    if (succeeded)
    {
      AnalysisResults_13 = ((MR_Word) (conv1_AnalysisResults_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeCtorInfo_52_52 = (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0);
      TypeInfo_53_53 = (MR_Word) (&analysis__operations_scalar_common_1[1]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_52_52, TypeInfo_53_53, AnalysisResults_13, ((MR_Box) (FuncId_9)), &conv2_Results_14);
      if (succeeded)
      {
        Results_14 = ((MR_Word) (conv2_Results_14));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word TypeInfo_56_56;
    MR_Word Var_22;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_45, (MR_Integer) 4, &TypeInfo_56_56);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_22, 0) = ((MR_Box) (&analysis__operations_scalar_common_5[1]));
      MR_hl_field(0, Var_22, 1) = ((MR_Box) (analysis__operations__lookup_existing_call_patterns_5_p_0_1));
      MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_22, 3) = ((MR_Box) (TypeClassInfo_for_call_pattern_45));
    }
    *Calls_10 = mercury__list__map_2_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_some_analysis_result_0), TypeInfo_56_56, Var_22, Results_14);
  }
  else
    *Calls_10 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
analysis__operations__lookup_best_result_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Best_8;

  analysis__operations__more_precise_answer_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Best_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_Best_8));
}

void MR_CALL 
analysis__operations__lookup_best_result_6_p_0(
  MR_Word TypeClassInfo_for_analysis_32,
  MR_Word Info_7,
  MR_Word ModuleName_8,
  MR_Word FuncId_9,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word * MaybeBestResult_12)
{
  MR_Word MatchingResults_18;
  MR_Word MaybeDebugStream_14;

{
#define MR_PROC_LABEL analysis__operations__lookup_best_result_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__operations__lookup_best_result_6_p_0

	MR_Word X;

		{
X = analysis__operations__mutable_variable_debug_analysis_stream;


		;}
#undef MR_PROC_LABEL
	MaybeDebugStream_14  = X;
}
{
#define MR_PROC_LABEL analysis__operations__lookup_best_result_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  if (!((MaybeDebugStream_14 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word DebugStream_15 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_14, 0))));
    MR_String ModuleNameStr_16;
    MR_String FuncIdStr_17;

    ModuleNameStr_16 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_8);
    FuncIdStr_17 = mercury__string__string_1_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), ((MR_Box) (FuncId_9)));
    mercury__io__write_string_4_p_0(DebugStream_15, (MR_String) "% Looking up best analysis result for ");
    mercury__io__write_string_4_p_0(DebugStream_15, ModuleNameStr_16);
    mercury__io__write_string_4_p_0(DebugStream_15, (MR_String) ".");
    mercury__io__write_string_4_p_0(DebugStream_15, FuncIdStr_17);
    mercury__io__write_string_4_p_0(DebugStream_15, (MR_String) "\n");
  }
  analysis__operations__lookup_matching_results_6_p_0(TypeClassInfo_for_analysis_32, Info_7, ModuleName_8, FuncId_9, FuncInfo_10, Call_11, &MatchingResults_18);
  if ((MatchingResults_18 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeBestResult_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeInfo_38_38;
    MR_Word TypeInfo_40_40;
    MR_Word TypeInfo_42_42;
    MR_Word Result_19 = ((MR_Word) ((MR_hl_field(1, MatchingResults_18, 0))));
    MR_Word Results_20 = ((MR_Word) ((MR_hl_field(1, MatchingResults_18, 1))));
    MR_Word BestResult_21;
    MR_Word Var_31;
    MR_Box conv1_BestResult_21;

    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = ((MR_Box) (&analysis__operations_scalar_common_8[0]));
      MR_hl_field(0, Var_31, 1) = ((MR_Box) (analysis__operations__lookup_best_result_6_p_0_1));
      MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_31, 3) = ((MR_Box) (TypeClassInfo_for_analysis_32));
      MR_hl_field(0, Var_31, 4) = FuncInfo_10;
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_32, (MR_Integer) 4, &TypeInfo_38_38);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_32, (MR_Integer) 5, &TypeInfo_40_40);
    {
      TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_42_42, 0) = ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_result_2));
      MR_hl_field(0, TypeInfo_42_42, 1) = ((MR_Box) (TypeInfo_38_38));
      MR_hl_field(0, TypeInfo_42_42, 2) = ((MR_Box) (TypeInfo_40_40));
    }
    mercury__list__foldl_4_p_0(TypeInfo_42_42, TypeInfo_42_42, (MR_Word) (Var_31), Results_20, ((MR_Box) (Result_19)), &conv1_BestResult_21);
    BestResult_21 = ((MR_Word) (conv1_BestResult_21));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeBestResult_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BestResult_21));
    }
  }
}

static MR_bool MR_CALL 
analysis__operations__lookup_matching_results_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__operations__IntroducedFrom__pred__lookup_matching_results__603__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), (MR_hl_field(0, closure, 5)), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
analysis__operations__lookup_matching_results_6_p_0(
  MR_Word TypeClassInfo_for_analysis_21,
  MR_Word Info_7,
  MR_Word ModuleName_8,
  MR_Word FuncId_9,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word * ResultList_12)
{
  MR_bool succeeded;
  MR_Word TypeInfo_23_23;
  MR_Word TypeInfo_25_25;
  MR_Word TypeInfo_27_27;
  MR_Word AllResultsList_13;
  MR_Word Var_16;

  analysis__operations__lookup_results_1_5_p_0(TypeClassInfo_for_analysis_21, Info_7, ModuleName_8, FuncId_9, (MR_Integer) 0, &AllResultsList_13);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_21, (MR_Integer) 4, &TypeInfo_23_23);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_21, (MR_Integer) 5, &TypeInfo_25_25);
  {
    TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_result_2));
    MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_23_23));
    MR_hl_field(0, TypeInfo_27_27, 2) = ((MR_Box) (TypeInfo_25_25));
  }
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&analysis__operations_scalar_common_7[0]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (analysis__operations__lookup_matching_results_6_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (TypeClassInfo_for_analysis_21));
    MR_hl_field(0, Var_16, 4) = FuncInfo_10;
    MR_hl_field(0, Var_16, 5) = Call_11;
  }
  *ResultList_12 = mercury__list__filter_2_f_0(TypeInfo_27_27, Var_16, AllResultsList_13);
}

void MR_CALL 
analysis__operations__lookup_results_4_p_0(
  MR_Word TypeClassInfo_for_analysis_10,
  MR_Word Info_5,
  MR_Word ModuleName_6,
  MR_Word FuncId_7,
  MR_Word * ResultList_8)
{
  analysis__operations__lookup_results_1_5_p_0(TypeClassInfo_for_analysis_10, Info_5, ModuleName_6, FuncId_7, (MR_Integer) 0, ResultList_8);
}

void MR_CALL 
analysis__operations__record_result_7_p_0(
  MR_Word TypeClassInfo_for_analysis_58,
  MR_Word ModuleName_8,
  MR_Word FuncId_9,
  MR_Box CallPattern_10,
  MR_Box AnswerPattern_11,
  MR_Word Status_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_bool succeeded;
  MR_Word MakeAnalysisReg_14;
  MR_Word Var_36;
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 2))));

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_8, Var_63);
  if (!(succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.operations.record_result\'/7", (MR_String) "recording result for procedure defined in another module");
      return;
    }
  MakeAnalysisReg_14 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 3))) & (MR_Integer) 1);
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 8))));
  switch (MakeAnalysisReg_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Map_16;
        MR_String AnalysisName_65;
        MR_Word AnalysisResults1_67;
        MR_Word FuncResults1_69;
        MR_Word Result_70;
        MR_Word FuncResults_71;
        MR_Word Var_72;
        MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_58, 0)), 5))));
        MR_Box conv1_AnalysisName_65;
        MR_Word AnalysisResults0_66;
        MR_Box conv2_AnalysisResults0_66;
        MR_Word FuncResults0_68;
        MR_Box conv3_FuncResults0_68;
        MR_Word TypeClassInfo_for_compiler_62;
        MR_Box Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_56;
        MR_Word Var_57;

        conv1_AnalysisName_65 = func_0(((MR_Box) (TypeClassInfo_for_analysis_58)));
        AnalysisName_65 = ((MR_String) (conv1_AnalysisName_65));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[2]), Var_36, ((MR_Box) (AnalysisName_65)), &conv2_AnalysisResults0_66);
        if (succeeded)
        {
          AnalysisResults0_66 = ((MR_Word) (conv2_AnalysisResults0_66));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          AnalysisResults1_67 = AnalysisResults0_66;
        else
          AnalysisResults1_67 = mercury__map__init_0_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_1[1]));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_1[1]), AnalysisResults1_67, ((MR_Box) (FuncId_9)), &conv3_FuncResults0_68);
        if (succeeded)
        {
          FuncResults0_68 = ((MR_Word) (conv3_FuncResults0_68));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          FuncResults1_69 = FuncResults0_68;
        else
          FuncResults1_69 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Result_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Result_70, 0) = ((MR_Box) (TypeClassInfo_for_analysis_58));
          MR_hl_field(0, Result_70, 1) = CallPattern_10;
          MR_hl_field(0, Result_70, 2) = AnswerPattern_11;
          MR_hl_field(0, Result_70, 3) = (MR_Box) ((MR_Unsigned) (Status_12));
        }
        {
          FuncResults_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FuncResults_71, 0) = ((MR_Box) (Result_70));
          MR_hl_field(1, FuncResults_71, 1) = ((MR_Box) (FuncResults1_69));
        }
        Var_72 = mercury__map__set_3_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_1[1]), AnalysisResults1_67, ((MR_Box) (FuncId_9)), ((MR_Box) (FuncResults_71)));
        Map_16 = mercury__map__set_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[2]), Var_36, ((MR_Box) (AnalysisName_65)), ((MR_Box) (Var_72)));
        TypeClassInfo_for_compiler_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 0))));
        Var_48 = (MR_hl_field(0, STATE_VARIABLE_Info_0_17, 1));
        Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 2))));
        Var_50 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 3))) & (MR_Integer) 1);
        Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 4))));
        Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 5))));
        Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 6))));
        Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 7))));
        Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 9))));
        Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 10))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_62));
          MR_hl_field(0, base, 1) = Var_48;
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_49));
          MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_50));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_51));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_52));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_53));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_54));
          MR_hl_field(0, base, 8) = ((MR_Box) (Map_16));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_56));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_57));
        }
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
      break;
  }
}

static MR_bool MR_CALL 
analysis__operations__record_dependency_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__operations__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__420__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), (MR_hl_field(0, closure, 5)), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
analysis__operations__record_dependency_7_p_0(
  MR_Word TypeClassInfo_for_analysis_46,
  MR_Word CalleeModuleName_8,
  MR_Word FuncId_9,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word ThisModule_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, 2))));
  MR_Word MakeAnalysisReg_15;
  MR_Word IsLocal_16;
  MR_Word Var_61;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModule_14, CalleeModuleName_8);
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.operations.record_dependency\'/7", (MR_String) "dependency on self");
      return;
    }
  MakeAnalysisReg_15 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, 3))) & (MR_Integer) 1);
  Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, 4))));
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_61, ((MR_Box) (CalleeModuleName_8)));
  if (succeeded)
    IsLocal_16 = (MR_Integer) 1;
  else
    IsLocal_16 = (MR_Integer) 0;
  succeeded = (MakeAnalysisReg_15 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (IsLocal_16 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word TypeClassInfo_for_call_pattern_49;
    MR_Word TypeInfo_33_80;
    MR_Word TypeInfo_35_82;
    MR_Word TypeInfo_37_84;
    MR_String AnalysisName_17;
    MR_Word MaybeResult_18;
    MR_Word STATE_VARIABLE_Info_1_25;
    MR_Word AllResultsList_74;
    MR_Word ResultList_75;
    MR_Word Var_76;
    MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_46, 0)), 5))));
    MR_Box conv1_AnalysisName_17;

    conv1_AnalysisName_17 = func_0(((MR_Box) (TypeClassInfo_for_analysis_46)));
    AnalysisName_17 = ((MR_String) (conv1_AnalysisName_17));
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_46, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_49);
    analysis__operations__record_dependency_2_7_p_0(TypeClassInfo_for_call_pattern_49, ThisModule_14, AnalysisName_17, CalleeModuleName_8, FuncId_9, Call_11, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_1_25);
    analysis__operations__lookup_results_1_5_p_0(TypeClassInfo_for_analysis_46, STATE_VARIABLE_Info_1_25, CalleeModuleName_8, FuncId_9, (MR_Integer) 1, &AllResultsList_74);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_46, (MR_Integer) 4, &TypeInfo_33_80);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_46, (MR_Integer) 5, &TypeInfo_35_82);
    {
      TypeInfo_37_84 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_37_84, 0) = ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_result_2));
      MR_hl_field(0, TypeInfo_37_84, 1) = ((MR_Box) (TypeInfo_33_80));
      MR_hl_field(0, TypeInfo_37_84, 2) = ((MR_Box) (TypeInfo_35_82));
    }
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_76, 0) = ((MR_Box) (&analysis__operations_scalar_common_7[0]));
      MR_hl_field(0, Var_76, 1) = ((MR_Box) (analysis__operations__record_dependency_7_p_0_1));
      MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_76, 3) = ((MR_Box) (TypeClassInfo_for_analysis_46));
      MR_hl_field(0, Var_76, 4) = FuncInfo_10;
      MR_hl_field(0, Var_76, 5) = Call_11;
    }
    ResultList_75 = mercury__list__filter_2_f_0(TypeInfo_37_84, Var_76, AllResultsList_74);
    if ((ResultList_75 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeResult_18 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(1, ResultList_75, 1))));
      MR_Word Var_86 = ((MR_Word) ((MR_hl_field(1, ResultList_75, 0))));

      if ((Var_85 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeResult_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeResult_18, 0) = ((MR_Box) (Var_86));
        }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.operations.lookup_exactly_matching_result_even_from_invalid_modules\'/6", (MR_String) "zero or one exactly matching results expected");
          return;
        }
    }
    if ((MaybeResult_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeClassInfo_for_call_pattern_51;

      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_46, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_51);
      analysis__operations__record_request_6_p_0(TypeClassInfo_for_call_pattern_51, AnalysisName_17, CalleeModuleName_8, FuncId_9, Call_11, STATE_VARIABLE_Info_1_25, STATE_VARIABLE_Info_22);
    }
    else
    {
      MR_Word TypeInfo_53_53;
      MR_Word TypeInfo_55_55;
      MR_Word TypeInfo_57_57;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_46, (MR_Integer) 4, &TypeInfo_53_53);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_46, (MR_Integer) 5, &TypeInfo_55_55);
      {
        TypeInfo_57_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_57_57, 0) = ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_result_2));
        MR_hl_field(0, TypeInfo_57_57, 1) = ((MR_Box) (TypeInfo_53_53));
        MR_hl_field(0, TypeInfo_57_57, 2) = ((MR_Box) (TypeInfo_55_55));
      }
      mercury__type_desc__same_type_2_p_0(TypeInfo_57_57);
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_1_25;
    }
  }
  else
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
}

static MR_Box MR_CALL 
analysis__operations__lookup_results_1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__2_25;

  conv6_LambdaHeadVar__2_25 = analysis__operations__IntroducedFrom__func__lookup_results_2__588__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_25));
  return wrapper_arg_2;
}

static void MR_CALL 
analysis__operations__lookup_results_1_5_p_0(
  MR_Word TypeClassInfo_for_analysis_58,
  MR_Word Info_6,
  MR_Word ModuleName_7,
  MR_Word FuncId_8,
  MR_Word AllowInvalidModules_9,
  MR_Word * ResultList_10)
{
  MR_bool succeeded;
  MR_Word MaybeDebugStream_35;
  MR_Word TypeCtorInfo_61_61;
  MR_Word TypeCtorInfo_62_62;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_72;
  MR_Box conv0_Var_72;

{
#define MR_PROC_LABEL analysis__operations__lookup_results_1_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__operations__lookup_results_1_5_p_0

	MR_Word X;

		{
X = analysis__operations__mutable_variable_debug_analysis_stream;


		;}
#undef MR_PROC_LABEL
	MaybeDebugStream_35  = X;
}
{
#define MR_PROC_LABEL analysis__operations__lookup_results_1_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  if (!((MaybeDebugStream_35 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String ModuleNameStr_14;
    MR_String FuncIdStr_15;
    MR_Word DebugStream_33 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_35, 0))));

    ModuleNameStr_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_7);
    FuncIdStr_15 = mercury__string__string_1_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), ((MR_Box) (FuncId_8)));
    mercury__io__write_string_4_p_0(DebugStream_33, (MR_String) "% Looking up analysis results for ");
    mercury__io__write_string_4_p_0(DebugStream_33, ModuleNameStr_14);
    mercury__io__write_string_4_p_0(DebugStream_33, (MR_String) ".");
    mercury__io__write_string_4_p_0(DebugStream_33, FuncIdStr_15);
    mercury__io__write_string_4_p_0(DebugStream_33, (MR_String) "\n");
  }
  succeeded = (AllowInvalidModules_9 == (MR_Integer) 0);
  if (succeeded)
  {
    Var_25 = ((MR_Word) ((MR_hl_field(0, Info_6, 6))));
    Var_26 = (MR_Integer) 0;
    TypeCtorInfo_61_61 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    TypeCtorInfo_62_62 = (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_61_61, TypeCtorInfo_62_62, Var_25, ((MR_Box) (ModuleName_7)), &conv0_Var_72);
    if (succeeded)
    {
      Var_72 = ((MR_Word) (conv0_Var_72));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      succeeded = (Var_26 == Var_72);
  }
  if (succeeded)
    *ResultList_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Info_6, 7))));
    MR_String AnalysisName_80;
    MR_Box MR_CALL (* func_1)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_analysis_58, 0)), 5))));
    MR_Box conv2_AnalysisName_80;
    MR_Word Results_83;
    MR_Word TypeCtorInfo_32_89;
    MR_Word TypeInfo_33_90;
    MR_Word TypeCtorInfo_34_91;
    MR_Word TypeInfo_35_92;
    MR_Word ModuleResults_81;
    MR_Word AnalysisResults_82;
    MR_Box conv3_ModuleResults_81;
    MR_Box conv4_AnalysisResults_82;
    MR_Box conv5_Results_83;
    MR_Word MaybeDebugStream_39;

    conv2_AnalysisName_80 = func_1(((MR_Box) (TypeClassInfo_for_analysis_58)));
    AnalysisName_80 = ((MR_String) (conv2_AnalysisName_80));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[3]), Var_27, ((MR_Box) (ModuleName_7)), &conv3_ModuleResults_81);
    if (succeeded)
    {
      ModuleResults_81 = ((MR_Word) (conv3_ModuleResults_81));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeCtorInfo_32_89 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
      TypeInfo_33_90 = (MR_Word) (&analysis__operations_scalar_common_2[2]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_32_89, TypeInfo_33_90, ModuleResults_81, ((MR_Box) (AnalysisName_80)), &conv4_AnalysisResults_82);
      if (succeeded)
      {
        AnalysisResults_82 = ((MR_Word) (conv4_AnalysisResults_82));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        TypeCtorInfo_34_91 = (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0);
        TypeInfo_35_92 = (MR_Word) (&analysis__operations_scalar_common_1[1]);
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_34_91, TypeInfo_35_92, AnalysisResults_82, ((MR_Box) (FuncId_8)), &conv5_Results_83);
        if (succeeded)
        {
          Results_83 = ((MR_Word) (conv5_Results_83));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_38_95;
      MR_Word TypeInfo_40_97;
      MR_Word TypeInfo_42_99;
      MR_Word Var_86;
      MR_Word conv7_ResultList_10;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_58, (MR_Integer) 4, &TypeInfo_38_95);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_58, (MR_Integer) 5, &TypeInfo_40_97);
      {
        TypeInfo_42_99 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_42_99, 0) = ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_result_2));
        MR_hl_field(0, TypeInfo_42_99, 1) = ((MR_Box) (TypeInfo_38_95));
        MR_hl_field(0, TypeInfo_42_99, 2) = ((MR_Box) (TypeInfo_40_97));
      }
      {
        Var_86 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_86, 0) = ((MR_Box) (&analysis__operations_scalar_common_5[0]));
        MR_hl_field(0, Var_86, 1) = ((MR_Box) (analysis__operations__lookup_results_1_5_p_0_1));
        MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_86, 3) = ((MR_Box) (TypeClassInfo_for_analysis_58));
      }
      conv7_ResultList_10 = mercury__list__map_2_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_some_analysis_result_0), TypeInfo_42_99, (MR_Word) (Var_86), Results_83);
      *ResultList_10 = (MR_Word) (conv7_ResultList_10);
    }
    else
      *ResultList_10 = (MR_Word) ((MR_Unsigned) 0U);
{
#define MR_PROC_LABEL analysis__operations__lookup_results_1_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__operations__lookup_results_1_5_p_0

	MR_Word X;

		{
X = analysis__operations__mutable_variable_debug_analysis_stream;


		;}
#undef MR_PROC_LABEL
	MaybeDebugStream_39  = X;
}
{
#define MR_PROC_LABEL analysis__operations__lookup_results_1_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__operations__mutable_variable_debug_analysis_stream_lock, "analysis__operations__mutable_variable_debug_analysis_stream_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    if (!((MaybeDebugStream_39 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word TypeInfo_65_65;
      MR_Word TypeInfo_67_67;
      MR_Word TypeInfo_69_69;
      MR_Word TypeInfo_71_71;
      MR_Word DebugStream_37 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_39, 0))));

      mercury__io__write_string_4_p_0(DebugStream_37, (MR_String) "% Found these results: ");
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_58, (MR_Integer) 4, &TypeInfo_65_65);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_58, (MR_Integer) 5, &TypeInfo_67_67);
      {
        TypeInfo_69_69 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_69_69, 0) = ((MR_Box) (&analysis__framework__analysis__framework__type_ctor_info_analysis_result_2));
        MR_hl_field(0, TypeInfo_69_69, 1) = ((MR_Box) (TypeInfo_65_65));
        MR_hl_field(0, TypeInfo_69_69, 2) = ((MR_Box) (TypeInfo_67_67));
      }
      {
        TypeInfo_71_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_71_71, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(0, TypeInfo_71_71, 1) = ((MR_Box) (TypeInfo_69_69));
      }
      mercury__io__print_line_4_p_0(TypeInfo_71_71, DebugStream_37, ((MR_Box) (*ResultList_10)));
    }
  }
}

static void MR_CALL 
analysis__operations__record_dependency_2_7_p_0(
  MR_Word TypeClassInfo_for_call_pattern_47,
  MR_Word CallerModuleName_8,
  MR_String AnalysisName_9,
  MR_Word CalleeModuleName_10,
  MR_Word FuncId_11,
  MR_Box Call_12,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_bool succeeded;
  MR_Word NewIMDGMap0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 10))));
  MR_Word Analyses1_16;
  MR_Word Funcs1_18;
  MR_Word FuncArcs1_20;
  MR_Word Dep_21;
  MR_Word Analyses0_15;
  MR_Box conv0_Analyses0_15;
  MR_Word Funcs0_17;
  MR_Box conv1_Funcs0_17;
  MR_Word FuncArcs0_19;
  MR_Box conv2_FuncArcs0_19;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[5]), NewIMDGMap0_14, ((MR_Box) (CalleeModuleName_10)), &conv0_Analyses0_15);
  if (succeeded)
  {
    Analyses0_15 = ((MR_Word) (conv0_Analyses0_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    Analyses1_16 = Analyses0_15;
  else
    Analyses1_16 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[4]));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[4]), Analyses1_16, ((MR_Box) (AnalysisName_9)), &conv1_Funcs0_17);
  if (succeeded)
  {
    Funcs0_17 = ((MR_Word) (conv1_Funcs0_17));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    Funcs1_18 = Funcs0_17;
  else
    Funcs1_18 = mercury__map__init_0_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_1[2]));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_1[2]), Funcs1_18, ((MR_Box) (FuncId_11)), &conv2_FuncArcs0_19);
  if (succeeded)
  {
    FuncArcs0_19 = ((MR_Word) (conv2_FuncArcs0_19));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    FuncArcs1_20 = FuncArcs0_19;
  else
    FuncArcs1_20 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Dep_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Dep_21, 0) = ((MR_Box) (TypeClassInfo_for_call_pattern_47));
    MR_hl_field(0, Dep_21, 1) = Call_12;
    MR_hl_field(0, Dep_21, 2) = ((MR_Box) (CallerModuleName_8));
  }
  succeeded = mercury__list__member_2_p_0((MR_Word) (&analysis__operations__analysis__operations__type_ctor_info_imdg_arc_0), ((MR_Box) (Dep_21)), FuncArcs1_20);
  if (succeeded)
    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
  else
  {
    MR_Word FuncArcs_22;
    MR_Word Funcs_23;
    MR_Word Analyses_24;
    MR_Word NewIMDGMap_25;
    MR_Word TypeClassInfo_for_compiler_66;
    MR_Box Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;

    {
      FuncArcs_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FuncArcs_22, 0) = ((MR_Box) (Dep_21));
      MR_hl_field(1, FuncArcs_22, 1) = ((MR_Box) (FuncArcs1_20));
    }
    mercury__map__set_4_p_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_1[2]), ((MR_Box) (FuncId_11)), ((MR_Box) (FuncArcs_22)), Funcs1_18, &Funcs_23);
    mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[4]), ((MR_Box) (AnalysisName_9)), ((MR_Box) (Funcs_23)), Analyses1_16, &Analyses_24);
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[5]), ((MR_Box) (CalleeModuleName_10)), ((MR_Box) (Analyses_24)), NewIMDGMap0_14, &NewIMDGMap_25);
    TypeClassInfo_for_compiler_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 0))));
    Var_37 = (MR_hl_field(0, STATE_VARIABLE_Info_0_26, 1));
    Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 2))));
    Var_39 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 3))) & (MR_Integer) 1);
    Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 4))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 5))));
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 6))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 7))));
    Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 8))));
    Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 9))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_27 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_66));
      MR_hl_field(0, base, 1) = Var_37;
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_39));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_40));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_41));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_42));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_44));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_45));
      MR_hl_field(0, base, 10) = ((MR_Box) (NewIMDGMap_25));
    }
  }
}

void MR_CALL 
analysis__operations__record_request_6_p_0(
  MR_Word TypeClassInfo_for_call_pattern_37,
  MR_String AnalysisName_7,
  MR_Word ModuleName_8,
  MR_Word FuncId_9,
  MR_Box CallPattern_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_bool succeeded;
  MR_Word ThisModule_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, 2))));
  MR_Word MakeAnalysisReg_13;
  MR_Word IsLocal_14;
  MR_Word Var_41;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModule_12, ModuleName_8);
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.operations.record_request\'/6", (MR_String) "request on self");
      return;
    }
  MakeAnalysisReg_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, 3))) & (MR_Integer) 1);
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, 4))));
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_41, ((MR_Box) (ModuleName_8)));
  if (succeeded)
    IsLocal_14 = (MR_Integer) 1;
  else
    IsLocal_14 = (MR_Integer) 0;
  succeeded = (MakeAnalysisReg_13 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (IsLocal_14 == (MR_Integer) 1);
  if (succeeded)
    analysis__operations__record_request_2_7_p_0(TypeClassInfo_for_call_pattern_37, ThisModule_12, AnalysisName_7, ModuleName_8, FuncId_9, CallPattern_10, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
  else
    *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
}

static void MR_CALL 
analysis__operations__record_request_2_7_p_0(
  MR_Word TypeClassInfo_for_call_pattern_47,
  MR_Word CallerModule_8,
  MR_String AnalysisName_9,
  MR_Word ModuleName_10,
  MR_Word FuncId_11,
  MR_Box CallPattern_12,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_bool succeeded;
  MR_Word RequestsMap0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 5))));
  MR_Word ModuleResults1_16;
  MR_Word AnalysisResults1_18;
  MR_Word FuncResults1_20;
  MR_Word Request_21;
  MR_Word FuncResults_22;
  MR_Word AnalysisResults_23;
  MR_Word ModuleResults_24;
  MR_Word RequestsMap_25;
  MR_Word ModuleResults0_15;
  MR_Box conv0_ModuleResults0_15;
  MR_Word AnalysisResults0_17;
  MR_Box conv1_AnalysisResults0_17;
  MR_Word FuncResults0_19;
  MR_Box conv2_FuncResults0_19;
  MR_Word TypeClassInfo_for_compiler_65;
  MR_Box Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[1]), RequestsMap0_14, ((MR_Box) (ModuleName_10)), &conv0_ModuleResults0_15);
  if (succeeded)
  {
    ModuleResults0_15 = ((MR_Word) (conv0_ModuleResults0_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    ModuleResults1_16 = ModuleResults0_15;
  else
    ModuleResults1_16 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[0]));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[0]), ModuleResults1_16, ((MR_Box) (AnalysisName_9)), &conv1_AnalysisResults0_17);
  if (succeeded)
  {
    AnalysisResults0_17 = ((MR_Word) (conv1_AnalysisResults0_17));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    AnalysisResults1_18 = AnalysisResults0_17;
  else
    AnalysisResults1_18 = mercury__map__init_0_f_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_1[0]));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_1[0]), AnalysisResults1_18, ((MR_Box) (FuncId_11)), &conv2_FuncResults0_19);
  if (succeeded)
  {
    FuncResults0_19 = ((MR_Word) (conv2_FuncResults0_19));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    FuncResults1_20 = FuncResults0_19;
  else
    FuncResults1_20 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Request_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Request_21, 0) = ((MR_Box) (TypeClassInfo_for_call_pattern_47));
    MR_hl_field(0, Request_21, 1) = CallPattern_12;
    MR_hl_field(0, Request_21, 2) = ((MR_Box) (CallerModule_8));
  }
  {
    FuncResults_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FuncResults_22, 0) = ((MR_Box) (Request_21));
    MR_hl_field(1, FuncResults_22, 1) = ((MR_Box) (FuncResults1_20));
  }
  mercury__map__set_4_p_0((MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_func_id_0), (MR_Word) (&analysis__operations_scalar_common_1[0]), ((MR_Box) (FuncId_11)), ((MR_Box) (FuncResults_22)), AnalysisResults1_18, &AnalysisResults_23);
  mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[0]), ((MR_Box) (AnalysisName_9)), ((MR_Box) (AnalysisResults_23)), ModuleResults1_16, &ModuleResults_24);
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[1]), ((MR_Box) (ModuleName_10)), ((MR_Box) (ModuleResults_24)), RequestsMap0_14, &RequestsMap_25);
  TypeClassInfo_for_compiler_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 0))));
  Var_37 = (MR_hl_field(0, STATE_VARIABLE_Info_0_26, 1));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 2))));
  Var_39 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 3))) & (MR_Integer) 1);
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 4))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 6))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 7))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 8))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 9))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, 10))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_27 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_65));
    MR_hl_field(0, base, 1) = Var_37;
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_39));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 5) = ((MR_Box) (RequestsMap_25));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_46));
  }
}

MR_Box MR_CALL 
analysis__operations__analysis_info_get_compiler_1_f_0(
  MR_Word * TypeClassInfo_for_compiler_13,
  MR_Word Info_3)
{
  MR_Box HeadVar__2_2;

  *TypeClassInfo_for_compiler_13 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));
  HeadVar__2_2 = (MR_hl_field(0, Info_3, 1));
  return HeadVar__2_2;
}

MR_Word MR_CALL 
analysis__operations__init_analysis_info_3_f_0(
  MR_Word TypeClassInfo_for_compiler_17,
  MR_Box Compiler_5,
  MR_Word ThisModuleName_6,
  MR_Word MakeAnalysisRegBool_7)
{
  MR_Word Info_8;
  MR_Word MakeAnalysisReg_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;

  switch (MakeAnalysisRegBool_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MakeAnalysisReg_9 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      MakeAnalysisReg_9 = (MR_Integer) 0;
      break;
  }
  Var_10 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_11 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[1]));
  Var_12 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__framework__analysis__framework__type_ctor_info_analysis_status_0));
  Var_13 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[3]));
  Var_14 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis__operations_scalar_common_2[2]));
  Var_15 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[5]));
  Var_16 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__operations_scalar_common_2[5]));
  {
    Info_8 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_8, 0) = ((MR_Box) (TypeClassInfo_for_compiler_17));
    MR_hl_field(0, Info_8, 1) = Compiler_5;
    MR_hl_field(0, Info_8, 2) = ((MR_Box) (ThisModuleName_6));
    MR_hl_field(0, Info_8, 3) = (MR_Box) ((MR_Unsigned) (MakeAnalysisReg_9));
    MR_hl_field(0, Info_8, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, Info_8, 5) = ((MR_Box) (Var_11));
    MR_hl_field(0, Info_8, 6) = ((MR_Box) (Var_12));
    MR_hl_field(0, Info_8, 7) = ((MR_Box) (Var_13));
    MR_hl_field(0, Info_8, 8) = ((MR_Box) (Var_14));
    MR_hl_field(0, Info_8, 9) = ((MR_Box) (Var_15));
    MR_hl_field(0, Info_8, 10) = ((MR_Box) (Var_16));
  }
  return Info_8;
}

static MR_bool MR_CALL 
analysis__operations____Unify____analysis_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis__operations____Unify____analysis_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis__operations____Compare____analysis_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__operations____Compare____analysis_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__operations____Unify____analysis_request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis__operations____Unify____analysis_request_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis__operations____Compare____analysis_request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__operations____Compare____analysis_request_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__operations____Unify____any_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis__operations____Unify____any_call_0_0();
  return succeeded;
}

static void MR_CALL 
analysis__operations____Compare____any_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__operations____Compare____any_call_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__operations____Unify____imdg_arc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis__operations____Unify____imdg_arc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis__operations____Compare____imdg_arc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__operations____Compare____imdg_arc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__operations____Unify____make_analysis_registry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis__operations____Unify____make_analysis_registry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis__operations____Compare____make_analysis_registry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__operations____Compare____make_analysis_registry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis__operations____Unify____no_func_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis__operations____Unify____no_func_info_0_0();
  return succeeded;
}

static void MR_CALL 
analysis__operations____Compare____no_func_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis__operations____Compare____no_func_info_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
analysis__operations__ClassMethod_for_analysis__framework__to_term____analysis__operations__any_call__arity0______analysis__framework__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_3;

  conv0_Term_3 = analysis__operations__ClassMethod_for_analysis__framework__to_term____analysis__operations__any_call__arity0______analysis__framework__to_term_1_1_f_0();
  wrapper_arg_2 = ((MR_Box) (conv0_Term_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
analysis__operations__ClassMethod_for_analysis__framework__to_term____analysis__operations__any_call__arity0______analysis__framework__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__operations__ClassMethod_for_analysis__framework__to_term____analysis__operations__any_call__arity0______analysis__framework__from_term_2_2_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
analysis__operations__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0______analysis__framework__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__operations__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0______analysis__framework__more_precise_than_3_3_p_0();
  return succeeded;
}

static MR_bool MR_CALL 
analysis__operations__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0______analysis__framework__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__operations__ClassMethod_for_analysis__framework__partial_order____analysis__operations__no_func_info__arity0__analysis__operations__any_call__arity0______analysis__framework__equivalent_3_3_p_0();
  return succeeded;
}

void mercury__analysis__operations__init(void)
{
}

void mercury__analysis__operations__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&analysis__operations__analysis__operations__type_ctor_info_analysis_info_0);
  MR_register_type_ctor_info(&analysis__operations__analysis__operations__type_ctor_info_analysis_request_0);
  MR_register_type_ctor_info(&analysis__operations__analysis__operations__type_ctor_info_any_call_0);
  MR_register_type_ctor_info(&analysis__operations__analysis__operations__type_ctor_info_imdg_arc_0);
  MR_register_type_ctor_info(&analysis__operations__analysis__operations__type_ctor_info_make_analysis_registry_0);
  MR_register_type_ctor_info(&analysis__operations__analysis__operations__type_ctor_info_no_func_info_0);
}

void mercury__analysis__operations__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__analysis__operations__required_init(void)
{
  analysis__operations__user_init_pred_147_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__analysis__operations__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module analysis.operations.
