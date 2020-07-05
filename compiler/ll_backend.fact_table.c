/*
** Automatically generated from `fact_table.m'
** by the Mercury compiler,
** version rotd-2020-07-05
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


// :- module ll_backend.fact_table.
// :- implementation.

/*
INIT mercury__ll_backend__fact_table__init
ENDINIT
*/

#include "ll_backend.fact_table.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "enum.mih"
#include "float.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "parser.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.export.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
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
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__fact_table__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__fact_table__list__pti_list_1__plain_term__type_ctor_info_const_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__maybe__ti_maybe_1term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__fact_table__pair__pti_pair_2__plain_maybe__ti_maybe_1term__type_ctor_info_context_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_value_ordered_comparison_kind_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_comparison_kind_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_comparison_kind_0[2];

static const MR_FA_TypeInfo_Struct2 ll_backend__fact_table__pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_info_0_0[3];

static const MR_DuArgLocn ll_backend__fact_table__ll_backend__fact_table__field_locns_fact_arg_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_info_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_arg_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_arg_info_0[1];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_arg_info_0[1];

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_value_ordered_fact_result_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_result_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_result_0[2];

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_1;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_2;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_3;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_4;

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_value_ordered_fact_table_mode_type_0[5];

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_table_mode_type_0[5];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_mode_type_0[5];

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_entry_0_0[3];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_entry_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_entry_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_entry_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_entry_0[1];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_entry_0[1];

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_index_0_0[1];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_0;

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_index_0_1[2];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_1;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_index_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_index_0_1[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_index_0[2];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_index_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_index_0[2];

static const MR_FA_TypeInfo_Struct2 ll_backend__fact_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table__type_ctor_info_hash_entry_0;

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_table_0_0[2];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_table_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_table_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_table_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_table_0[1];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_table_0[1];

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_inferred_determinism_0_0[1];

static const MR_DuArgLocn ll_backend__fact_table__ll_backend__fact_table__field_locns_inferred_determinism_0_0[1];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_0;

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_1;

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_2;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_0[2];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_1[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_inferred_determinism_0[2];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_inferred_determinism_0[3];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_inferred_determinism_0[3];

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_proc_stream_0_0[2];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_proc_stream_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_proc_stream_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_proc_stream_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_proc_stream_0[1];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_proc_stream_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1term__type_ctor_info_const_0;

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_sort_file_line_0_0[3];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_sort_file_line_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_sort_file_line_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_sort_file_line_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_sort_file_line_0[1];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_sort_file_line_0[1];

static void MR_CALL 
ll_backend__fact_table__IntroducedFrom__pred__generate_argument_vars_code__3067__1_2_p_0(
  MR_Word LambdaHeadVar__1_27,
  MR_Word * LambdaHeadVar__2_28);

static void MR_CALL 
ll_backend__fact_table__IntroducedFrom__pred__build_hash_table_2__1628__1_2_p_0(
  MR_Word LambdaHeadVar__1_80,
  MR_Word * LambdaHeadVar__2_81);

static MR_bool MR_CALL 
ll_backend__fact_table__IntroducedFrom__pred__check_fact_term_2__488__1_2_p_0(
  MR_Word LambdaHeadVar__1_55,
  MR_Word * LambdaHeadVar__2_56);

static void MR_CALL 
ll_backend__fact_table____Compare____sort_file_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____sort_file_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____proc_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____proc_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____inferred_determinism_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____inferred_determinism_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_mode_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_mode_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_result_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____error_reports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____error_reports_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____error_report_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____error_report_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____comparison_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____comparison_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table__generate_secondary_nondet_code_8_p_0(
  MR_String PredName_9,
  MR_Word PragmaVars_10,
  MR_Integer ProcID_11,
  MR_Word ArgTypes_12,
  MR_Word ModuleInfo_13,
  MR_Integer FactTableSize_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16);

static void MR_CALL 
ll_backend__fact_table__generate_primary_nondet_code_8_p_0(
  MR_String PredName_9,
  MR_Word PragmaVars_10,
  MR_Integer ProcID_11,
  MR_Word ArgTypes_12,
  MR_Word ModuleInfo_13,
  MR_Integer FactTableSize_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16);

static void MR_CALL 
ll_backend__fact_table__generate_fact_test_code_6_p_0(
  MR_String PredName_7,
  MR_Word PragmaVars_8,
  MR_Word ArgTypes_9,
  MR_Word ModuleInfo_10,
  MR_Integer FactTableSize_11,
  MR_String * FactTestCode_12);

static void MR_CALL 
ll_backend__fact_table__generate_decl_code_3_p_0(
  MR_String Name_4,
  MR_Integer ProcID_5,
  MR_String * DeclCode_6);

static void MR_CALL 
ll_backend__fact_table__generate_semidet_in_out_code_7_p_0(
  MR_String PredName_8,
  MR_Word PragmaVars_9,
  MR_Integer ProcID_10,
  MR_Word ArgTypes_11,
  MR_Word ModuleInfo_12,
  MR_Integer FactTableSize_13,
  MR_String * ProcCode_14);

static void MR_CALL 
ll_backend__fact_table__generate_all_in_code_7_p_0(
  MR_String PredName_8,
  MR_Word PragmaVars_9,
  MR_Integer ProcID_10,
  MR_Word ArgTypes_11,
  MR_Word ModuleInfo_12,
  MR_Integer FactTableSize_13,
  MR_String * ProcCode_14);

static void MR_CALL 
ll_backend__fact_table__generate_hash_code_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3,
  MR_String LabelName_4,
  MR_Integer LabelNum_5,
  MR_String PredName_6,
  MR_Integer ArgNum_7,
  MR_Integer FactTableSize_8,
  MR_String * HeadVar__9_9);

static void MR_CALL 
ll_backend__fact_table__generate_hash_string_code_10_p_0(
  MR_String Name_11,
  MR_String LabelName_12,
  MR_Integer LabelNum_13,
  MR_String PredName_14,
  MR_Word PragmaVars_15,
  MR_Word Types_16,
  MR_Word ModuleInfo_17,
  MR_Integer ArgNum_18,
  MR_Integer FactTableSize_19,
  MR_String * C_Code_20);

static void MR_CALL 
ll_backend__fact_table__generate_hash_float_code_10_p_0(
  MR_String Name_11,
  MR_String LabelName_12,
  MR_Integer LabelNum_13,
  MR_String PredName_14,
  MR_Word PragmaVars_15,
  MR_Word Types_16,
  MR_Word ModuleInfo_17,
  MR_Integer ArgNum_18,
  MR_Integer FactTableSize_19,
  MR_String * C_Code_20);

static void MR_CALL 
ll_backend__fact_table__generate_hash_int_code_10_p_0(
  MR_String Name_11,
  MR_String LabelName_12,
  MR_Integer LabelNum_13,
  MR_String PredName_14,
  MR_Word PragmaVars_15,
  MR_Word Types_16,
  MR_Word ModuleInfo_17,
  MR_Integer ArgNum_18,
  MR_Integer FactTableSize_19,
  MR_String * C_Code_20);

static void MR_CALL 
ll_backend__fact_table__generate_hash_lookup_code_13_p_0(
  MR_String VarName_14,
  MR_String LabelName_15,
  MR_Integer LabelNum_16,
  MR_Word ComparisonKind_17,
  MR_Char KeyType_18,
  MR_Word CheckKeys_19,
  MR_String PredName_20,
  MR_Word PragmaVars_21,
  MR_Word Types_22,
  MR_Word ModuleInfo_23,
  MR_Integer ArgNum_24,
  MR_Integer FactTableSize_25,
  MR_String * HashLookupCode_26);

static void MR_CALL 
ll_backend__fact_table__generate_test_condition_code_8_p_0(
  MR_String FactTableName_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word ModuleInfo_4,
  MR_Integer ArgNum_5,
  MR_Word STATE_VARIABLE_IsFirstInputArg_0_6,
  MR_Integer FactTableSize_7,
  MR_String * HeadVar__8_8);

static void MR_CALL 
ll_backend__fact_table__generate_cc_multi_code_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String StructName_2,
  MR_Integer ArgNum_3,
  MR_String STATE_VARIABLE_ProcCode_0_4,
  MR_String * STATE_VARIABLE_ProcCode_5);

static void MR_CALL 
ll_backend__fact_table__generate_multidet_code_8_p_0(
  MR_String PredName_9,
  MR_Word PragmaVars_10,
  MR_Integer ProcID_11,
  MR_Word ArgTypes_12,
  MR_Word ModuleInfo_13,
  MR_Integer FactTableSize_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16);

static void MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_9_p_0(
  MR_Word PragmaVars_10,
  MR_Word Types_11,
  MR_Word ModuleInfo_12,
  MR_String * DeclCode_13,
  MR_String * InputCode_14,
  MR_String * OutputCode_15,
  MR_String * SaveRegsCode_16,
  MR_String * GetRegsCode_17,
  MR_Integer * NumInputArgs_18);

static void MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_2_11_p_0(
  MR_Word PragmaVars0_12,
  MR_Word ArgInfos0_13,
  MR_Word Types0_14,
  MR_Word Module_15,
  MR_String * DeclCode_16,
  MR_String * InputCode_17,
  MR_String * OutputCode_18,
  MR_String * SaveRegsCode_19,
  MR_String * GetRegsCode_20,
  MR_Integer STATE_VARIABLE_NumInputArgs_0_42,
  MR_Integer * STATE_VARIABLE_NumInputArgs_43);

static void MR_CALL 
ll_backend__fact_table__generate_arg_input_code_7_p_0(
  MR_String Name_8,
  MR_Word Type_9,
  MR_Word ArgLoc_10,
  MR_Integer FrameVarNum_11,
  MR_String * InputCode_12,
  MR_String * SaveRegCode_13,
  MR_String * GetRegCode_14);

static void MR_CALL 
ll_backend__fact_table__generate_fact_lookup_code_7_p_0(
  MR_String PredName_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word ModuleInfo_4,
  MR_Integer ArgNum_5,
  MR_Integer FactTableSize_6,
  MR_String * HeadVar__7_7);

static void MR_CALL 
ll_backend__fact_table__generate_nondet_proc_code_5_p_0(
  MR_Word PragmaVars_6,
  MR_String PredName_7,
  MR_Integer ProcID_8,
  MR_String * ExtraCodeLabel_9,
  MR_String * ProcCode_10);

static void MR_CALL 
ll_backend__fact_table__pragma_vars_to_names_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table__fact_table_compile_facts_2_13_p_0(
  MR_Word PredName_14,
  MR_Integer Arity_15,
  MR_String FileName_16,
  MR_Word STATE_VARIABLE_PredInfo_0_62,
  MR_Word * STATE_VARIABLE_PredInfo_63,
  MR_Word Context_18,
  MR_Word ModuleInfo_19,
  MR_String * C_HeaderCode_20,
  MR_Integer * PrimaryProcID_21,
  MR_String OutputFileName_22,
  MR_Word OutputStream_23);

static void MR_CALL 
ll_backend__fact_table__print_error_reports_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__fact_table__print_error_reports_4_p_0(
  MR_Word Globals_5,
  MR_Word RevErrors_6);

static void MR_CALL 
ll_backend__fact_table__write_fact_table_numfacts_6_p_0(
  MR_Word OutputStream_7,
  MR_Word PredName_8,
  MR_Integer NumFacts_9,
  MR_String * C_HeaderCode_10);

static void MR_CALL 
ll_backend__fact_table__maybe_append_data_table_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String OutputFileName_3,
  MR_String DataFileName_4);

static void MR_CALL 
ll_backend__fact_table__write_fact_table_arrays_14_p_0(
  MR_Word ProcFiles0_15,
  MR_String DataFileName_16,
  MR_String StructName_17,
  MR_Word ProcTable_18,
  MR_Word ModuleInfo_19,
  MR_Integer NumFacts_20,
  MR_Word FactArgInfos_21,
  MR_Word WriteHashTables_22,
  MR_Word WriteDataTable_23,
  MR_Word OutputStream_24,
  MR_String * C_HeaderCode_25,
  MR_Integer * PrimaryProcID_26);

static void MR_CALL 
ll_backend__fact_table__write_secondary_hash_tables_11_p_0(
  MR_Word HeadVar__1_1,
  MR_String StructName_2,
  MR_Word ProcTable_3,
  MR_Word ModuleInfo_4,
  MR_Word OutputStream_5,
  MR_Word FactMap_6,
  MR_Word FactArgInfos_7,
  MR_String STATE_VARIABLE_C_HeaderCode_0_8,
  MR_String * STATE_VARIABLE_C_HeaderCode_9);

static void MR_CALL 
ll_backend__fact_table__write_primary_hash_table_16_p_0(
  MR_Integer ProcID_17,
  MR_String FileName_18,
  MR_String DataFileName_19,
  MR_String StructName_20,
  MR_Word ProcTable_21,
  MR_Word ModuleInfo_22,
  MR_Word OutputStream_23,
  MR_Word FactArgInfos_24,
  MR_Word WriteDataTable_25,
  MR_Integer NumFacts_26,
  MR_Word CreateFactMap_27,
  MR_Word * Result_28,
  MR_Word * FactMap_29,
  MR_String * C_HeaderCode_30);

static void MR_CALL 
ll_backend__fact_table__print_file_open_error_7_p_0(
  MR_Word Globals_8,
  MR_Word MaybeContext_9,
  MR_String FileName_10,
  MR_String InOrOut_11,
  MR_Word Error_12);

static void MR_CALL 
ll_backend__fact_table__print_error_report_4_p_0(
  MR_Word Globals_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table__delete_temporary_file_4_p_0(
  MR_Word Globals_5,
  MR_String FileName_6);

static void MR_CALL 
ll_backend__fact_table__write_fact_table_pointer_array_7_p_0(
  MR_Integer NumFacts_8,
  MR_Integer FactTableSize_9,
  MR_String StructName_10,
  MR_Word OutputStream_11,
  MR_String * C_HeaderCode_12);

static void MR_CALL 
ll_backend__fact_table__write_fact_table_pointer_array_2_7_p_0(
  MR_Integer CurrFact_8,
  MR_Integer NumFacts_9,
  MR_Integer FactTableSize_10,
  MR_String StructName_11,
  MR_Word OutputStream_12);

static void MR_CALL 
ll_backend__fact_table__build_hash_table_17_p_0(
  MR_Integer FactNum_18,
  MR_Integer InputArgNum_19,
  MR_String HashTableName_20,
  MR_String StructName_21,
  MR_Integer TableNum_22,
  MR_Word ArgModes_23,
  MR_Word ModuleInfo_24,
  MR_Word Infos_25,
  MR_Word IsPrimaryTable_26,
  MR_Word OutputStream_27,
  MR_Word FirstFact_28,
  MR_Word MaybeDataStream_29,
  MR_Word CreateFactMap_30,
  MR_Word STATE_VARIABLE_FactMap_0_39,
  MR_Word * STATE_VARIABLE_FactMap_40);

static void MR_CALL 
ll_backend__fact_table__build_hash_table_2_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table__build_hash_table_2_19_p_0(
  MR_Integer FactNum_1,
  MR_Integer InputArgNum_2,
  MR_String HashTableName_3,
  MR_String StructName_4,
  MR_Integer STATE_VARIABLE_TableNum_0_5,
  MR_Word ArgModes_6,
  MR_Word ModuleInfo_7,
  MR_Word Infos_8,
  MR_Word IsPrimaryTable_9,
  MR_Word OutputStream_10,
  MR_Word HeadVar__11_11,
  MR_Word MaybeDataStream_12,
  MR_Word CreateFactMap_13,
  MR_Word STATE_VARIABLE_FactMap_0_14,
  MR_Word * STATE_VARIABLE_FactMap_15,
  MR_Word STATE_VARIABLE_HashList_0_16,
  MR_Word * STATE_VARIABLE_HashList_17);

static void MR_CALL 
ll_backend__fact_table__update_fact_map_4_p_0(
  MR_Integer FactNum_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FactMap_0_3,
  MR_Word * STATE_VARIABLE_FactMap_4);

static void MR_CALL 
ll_backend__fact_table__top_level_collect_matching_facts_8_p_0(
  MR_Word Fact_9,
  MR_Word * MatchingFacts_10,
  MR_Word * MaybeNextFact_11,
  MR_Word Infos_12,
  MR_Word ArgModes_13,
  MR_Word ModuleInfo_14);

static void MR_CALL 
ll_backend__fact_table__top_level_collect_matching_facts_2_9_p_0(
  MR_Word Fact_10,
  MR_Word STATE_VARIABLE_MatchingFacts_0_27,
  MR_Word * STATE_VARIABLE_MatchingFacts_28,
  MR_Word * MaybeNextFact_12,
  MR_Word Infos_13,
  MR_Word ArgModes_14,
  MR_Word ModuleInfo_15);

static void MR_CALL 
ll_backend__fact_table__build_hash_table_lower_levels_2_14_p_0(
  MR_Word Globals_1,
  MR_Integer FactNum_2,
  MR_Integer InputArgNum_3,
  MR_String HashTableName_4,
  MR_Integer STATE_VARIABLE_TableNum_0_5,
  MR_Integer * STATE_VARIABLE_TableNum_6,
  MR_Word IsPrimaryTable_7,
  MR_Word OutputStream_8,
  MR_Word HeadVar__9_9,
  MR_Word FactMap_10,
  MR_Word STATE_VARIABLE_HashList_0_11,
  MR_Word * STATE_VARIABLE_HashList_12);

static void MR_CALL 
ll_backend__fact_table__do_build_hash_table_14_p_0(
  MR_Word Globals_15,
  MR_Integer FactNum_16,
  MR_Integer InputArgNum_17,
  MR_String HashTableName_18,
  MR_Integer STATE_VARIABLE_TableNum_0_38,
  MR_Integer * STATE_VARIABLE_TableNum_39,
  MR_Word IsPrimaryTable_20,
  MR_Word OutputStream_21,
  MR_Word Facts_22,
  MR_Word FactMap_23,
  MR_Word STATE_VARIABLE_HashList_0_40,
  MR_Word * STATE_VARIABLE_HashList_41);

static void MR_CALL 
ll_backend__fact_table__build_hash_table_lower_levels_12_p_0(
  MR_Word Globals_13,
  MR_Integer FactNum_14,
  MR_Integer InputArgNum_15,
  MR_String HashTableName_16,
  MR_Integer TableNum0_17,
  MR_Integer * TableNum_18,
  MR_Word IsPrimaryTable_19,
  MR_Word OutputStream_20,
  MR_Word Facts_21,
  MR_Word FactMap_22);

static void MR_CALL 
ll_backend__fact_table__hash_list_insert_many_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word IsPrimaryTable_2,
  MR_Word FactMap_3,
  MR_Integer FactNum_4,
  MR_Integer InputArgNum_5,
  MR_Word STATE_VARIABLE_HashList_0_6,
  MR_Word * STATE_VARIABLE_HashList_7);

static void MR_CALL 
ll_backend__fact_table__write_hash_table_6_p_0(
  MR_Word OutputStream_7,
  MR_String BaseName_8,
  MR_Integer TableNum_9,
  MR_Word HashTable_10);

static void MR_CALL 
ll_backend__fact_table__get_hash_table_type_2_p_0(
  MR_Word HashTable_3,
  MR_Char * TableType_4);

static void MR_CALL 
ll_backend__fact_table__get_hash_table_type_2_3_p_0(
  MR_Word Map_4,
  MR_Integer Index_5,
  MR_Char * TableType_6);

static void MR_CALL 
ll_backend__fact_table__write_hash_table_loop_6_p_0(
  MR_Word Stream_7,
  MR_Word HashTable_8,
  MR_Integer CurrIndex_9,
  MR_Integer MaxIndex_10);

static void MR_CALL 
ll_backend__fact_table__hash_table_from_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table__hash_table_from_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HashSize_2,
  MR_Word STATE_VARIABLE_HashTable_0_3,
  MR_Word * STATE_VARIABLE_HashTable_4);

static void MR_CALL 
ll_backend__fact_table__fact_table_hash_2_4_p_0(
  MR_Integer HashSize_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_HashVal_0_3,
  MR_Integer * STATE_VARIABLE_HashVal_4);

static void MR_CALL 
ll_backend__fact_table__hash_table_insert_2_6_p_0(
  MR_Integer HashVal_7,
  MR_Integer * FreeVal_8,
  MR_Word Index0_9,
  MR_Word Key0_10,
  MR_Word STATE_VARIABLE_HashTable_0_15,
  MR_Word * STATE_VARIABLE_HashTable_16);

static void MR_CALL 
ll_backend__fact_table__get_free_hash_slot_2_4_p_0(
  MR_Word HashTable_5,
  MR_Integer Start_6,
  MR_Integer Max_7,
  MR_Integer * Free_8);

static void MR_CALL 
ll_backend__fact_table__calculate_hash_table_size_3_p_0(
  MR_Word Globals_4,
  MR_Integer NumEntries_5,
  MR_Integer * HashTableSize_6);

static void MR_CALL 
ll_backend__fact_table__calculate_hash_table_size_2_3_p_0(
  MR_Integer N_1,
  MR_Word HeadVar__2_2,
  MR_Integer * H_3);

static void MR_CALL 
ll_backend__fact_table__lower_level_collect_matching_facts_2_6_p_0(
  MR_Word Fact_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * Matching_4,
  MR_Word * HeadVar__5_5,
  MR_Integer InputArgNum_6);

static void MR_CALL 
ll_backend__fact_table__write_fact_table_data_8_p_0(
  MR_Word VeryVerbose_1,
  MR_Integer FactNum_2,
  MR_Integer FactTableSize_3,
  MR_Word HeadVar__4_4,
  MR_String StructName_5,
  MR_Word OutputStream_6);

static void MR_CALL 
ll_backend__fact_table__read_sort_file_line_6_p_0(
  MR_Word FactArgInfos_7,
  MR_Word ArgModes_8,
  MR_Word ModuleInfo_9,
  MR_Word * MaybeSortFileLine_10);

static void MR_CALL 
ll_backend__fact_table__get_output_args_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgStrings0_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table__get_input_args_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3,
  MR_Word ArgStrings0_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
ll_backend__fact_table__remove_sort_file_escapes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table__split_key_to_arg_strings_2_p_0(
  MR_String Key0_3,
  MR_Word * ArgStrings_4);

static void MR_CALL 
ll_backend__fact_table__write_closing_brace_3_p_0(
  MR_Word OutputStream_4);

static void MR_CALL 
ll_backend__fact_table__write_new_data_array_5_p_0(
  MR_Word OutputStream_6,
  MR_String StructName_7,
  MR_Integer FactNum_8);

static void MR_CALL 
ll_backend__fact_table__infer_determinism_pass_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Globals_2,
  MR_Word ExistsAllInMode_3,
  MR_Word STATE_VARIABLE_ProcTable_0_4,
  MR_Word * STATE_VARIABLE_ProcTable_5);

static void MR_CALL 
ll_backend__fact_table__write_call_system_error_msg_5_p_0(
  MR_Word Globals_6,
  MR_String Cmd_7,
  MR_Word ErrorCode_8);

static void MR_CALL 
ll_backend__fact_table__close_sort_files_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table__open_sort_files_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Errors_0_3,
  MR_Word * STATE_VARIABLE_Errors_4);

static void MR_CALL 
ll_backend__fact_table__infer_determinism_pass_1_12_p_0(
  MR_Word STATE_VARIABLE_PredInfo_0_34,
  MR_Word * STATE_VARIABLE_PredInfo_35,
  MR_Word Context_14,
  MR_Word ModuleInfo_15,
  MR_Word * CheckProcs_16,
  MR_Word * ExistsAllInMode_17,
  MR_Word * WriteHashTables_18,
  MR_Word * WriteDataTable_19,
  MR_Word STATE_VARIABLE_FactArgInfos_0_36,
  MR_Word * STATE_VARIABLE_FactArgInfos_37,
  MR_Word STATE_VARIABLE_Errors_0_38,
  MR_Word * STATE_VARIABLE_Errors_39);

static void MR_CALL 
ll_backend__fact_table__infer_proc_determinism_pass_1_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_ProcTable_0_3,
  MR_Word * STATE_VARIABLE_ProcTable_4,
  MR_Word STATE_VARIABLE_CheckProcs_0_5,
  MR_Word * STATE_VARIABLE_CheckProcs_6,
  MR_Word STATE_VARIABLE_FactArgInfos_0_7,
  MR_Word * STATE_VARIABLE_FactArgInfos_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word STATE_VARIABLE_Errors_0_12,
  MR_Word * STATE_VARIABLE_Errors_13);

static void MR_CALL 
ll_backend__fact_table__fact_table_mode_type_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table__fill_in_fact_arg_infos_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__fact_table__init_fact_arg_infos_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table__create_fact_table_header_7_p_0(
  MR_Word PredName_8,
  MR_Word PredInfo_9,
  MR_Word FactArgInfos_10,
  MR_String * C_HeaderCode_11,
  MR_String * StructName_12,
  MR_Word STATE_VARIABLE_Errors_0_19,
  MR_Word * STATE_VARIABLE_Errors_20);

static void MR_CALL 
ll_backend__fact_table__create_fact_table_struct_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer I_2,
  MR_Word Context_3,
  MR_String * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Errors_0_5,
  MR_Word * STATE_VARIABLE_Errors_6);

static MR_String MR_CALL 
ll_backend__fact_table__fact_table_file_header_1_f_0(
  MR_String FileName_3);

static void MR_CALL 
ll_backend__fact_table__compile_facts_13_p_0(
  MR_Word PredName_14,
  MR_Integer Arity_15,
  MR_Word PredInfo_16,
  MR_Word ModuleInfo_17,
  MR_Word FactArgInfos_18,
  MR_Word ProcStreams_19,
  MR_Word MaybeOutput_20,
  MR_Integer STATE_VARIABLE_NumFacts_0_35,
  MR_Integer * STATE_VARIABLE_NumFacts_36,
  MR_Word STATE_VARIABLE_Errors_0_37,
  MR_Word * STATE_VARIABLE_Errors_38);

static void MR_CALL 
ll_backend__fact_table__check_fact_term_14_p_0(
  MR_Word PredName_1,
  MR_Integer Arity0_2,
  MR_Word PredInfo_3,
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word FactArgInfos_6,
  MR_Word ProcStreams_7,
  MR_Word MaybeOutput_8,
  MR_Integer FactNum_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_Errors_0_11,
  MR_Word * STATE_VARIABLE_Errors_12);

static MR_bool MR_CALL 
ll_backend__fact_table__check_fact_term_2_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table__check_fact_term_2_15_p_0(
  MR_Word PredOrFunc_16,
  MR_Integer Arity_17,
  MR_Word PredInfo_18,
  MR_Word ModuleInfo_19,
  MR_Word Terms_20,
  MR_Word Context_21,
  MR_Word FactArgInfos_22,
  MR_Word ProcStreams_23,
  MR_Word MaybeOutput_24,
  MR_Integer FactNum_25,
  MR_Word * Result_26,
  MR_Word STATE_VARIABLE_Errors_0_46,
  MR_Word * STATE_VARIABLE_Errors_47);

static void MR_CALL 
ll_backend__fact_table__add_error_report_4_p_0(
  MR_Word Context_5,
  MR_Word Pieces_6,
  MR_Word STATE_VARIABLE_Errors_0_8,
  MR_Word * STATE_VARIABLE_Errors_9);

static void MR_CALL 
ll_backend__fact_table__write_fact_data_8_p_0(
  MR_Word VeryVerbose_9,
  MR_Integer FactNum_10,
  MR_Integer FactTableSize_11,
  MR_Word Args_12,
  MR_String StructName_13,
  MR_Word OutputStream_14);

static void MR_CALL 
ll_backend__fact_table__write_fact_args_4_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table__write_sort_file_lines_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProcTable_2,
  MR_Word Terms_3,
  MR_Word ModuleInfo_4,
  MR_String FactNumStr_5,
  MR_Word FactArgInfos_6,
  MR_Word IsPrimary_7);

static MR_String MR_CALL 
ll_backend__fact_table__make_fact_data_string_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__fact_table__make_sort_file_key_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table__key_from_chars_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_EscapedCharsCord_0_2,
  MR_Word * STATE_VARIABLE_EscapedCharsCord_3);

static void MR_CALL 
ll_backend__fact_table__check_fact_type_and_mode_8_p_0(
  MR_Word Types0_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum0_3,
  MR_Word PredOrFunc_4,
  MR_Word Context0_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Errors_0_7,
  MR_Word * STATE_VARIABLE_Errors_8);

static void MR_CALL 
ll_backend__fact_table__report_type_error_6_p_0(
  MR_Word Context_7,
  MR_Integer ArgNum_8,
  MR_Word RemainingTerms_9,
  MR_Word PredOrFunc_10,
  MR_Word STATE_VARIABLE_Errors_0_13,
  MR_Word * STATE_VARIABLE_Errors_14);

static void MR_CALL 
ll_backend__fact_table__fact_table_size_2_p_0(
  MR_Word Globals_3,
  MR_Integer * FactTableSize_4);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____comparison_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____comparison_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____error_report_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____error_report_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____error_reports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____error_reports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_mode_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_mode_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____inferred_determinism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____inferred_determinism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____proc_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____proc_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____sort_file_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____sort_file_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__fact_table_scalar_common_1[92][2];

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_2[6][3];

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_3[10][1];

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_4[4][5];

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_5[2][4];

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_6[1][7];




static /* final */ const MR_Box ll_backend__fact_table_scalar_common_1[92][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_const_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__fact_table_scalar_common_2[0]))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "#include \"mercury_imp.h\"\n\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "*/\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "** Do not edit.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) ".\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 110)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 99)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 116)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "during fact table determinism inference."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "program"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "sort"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "an error occurred"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "fact table output files."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[18])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "An error occurred while concatenating"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Integer) 2147483647)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Integer) 1073741827)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Integer) 536870923)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_Integer) 268435459)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Integer) 134217757)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Integer) 67108879)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Integer) 33555799)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Integer) 16777903)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Integer) 8388949)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Integer) 4194493)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Integer) 2097257)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Integer) 1048627)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Integer) 524309)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Integer) 262147)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Integer) 131101)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Integer) 65537)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Integer) 32771)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Integer) 16411)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Integer) 8209)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Integer) 4099)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Integer) 2053)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Integer) 1031)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Integer) 521)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Integer) 257)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Integer) 131)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Integer) 67)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[59])))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Integer) 37)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[64])))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[65])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[18])))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: non-ground term in fact."))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: fact has wrong number of arguments."))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: term is not a fact."))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 75 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: invalid type in fact table: only \140string\', \140int\' and \140float\' types are allowed in fact tables."))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 77 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: only \140in\' and \140out\' modes are currently supported in fact tables."))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 79 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: mode list for procedure is empty."))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[79]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 81 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error executing system command"))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error reading file"))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_String) " = {\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 85 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error deleting file"))
  },
  /* row 86 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_3[9])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__fact_table_scalar_common_5[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_String) "_fact_table_num_facts = ")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Could not create temporary file:"))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_String) "_fact_table_num_facts")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 91 */
  {
    ((MR_Box) ((MR_String) "_fact_table")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__fact_table_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__fact_table_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[0])),
    ((MR_Box) (ll_backend__fact_table__check_fact_term_2_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[1])),
    ((MR_Box) (ll_backend__fact_table__hash_table_from_list_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[2])),
    ((MR_Box) (ll_backend__fact_table__build_hash_table_2_19_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[3])),
    ((MR_Box) (ll_backend__fact_table__generate_argument_vars_code_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_3[10][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_3[2])))
  },
  /* row 4 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_3[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 7 */
  {
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row 8 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[34])))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_const_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0)),
    ((MR_Box) (&ll_backend__fact_table__list__pti_list_1__plain_term__type_ctor_info_const_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_5[2][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[86])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.maybe_append_data_table\'/6")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 44U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[87])))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&ll_backend__fact_table__pair__pti_pair_2__plain_maybe__ti_maybe_1term__type_ctor_info_context_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__fact_table__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__fact_table__list__pti_list_1__plain_term__type_ctor_info_const_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_const_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__maybe__ti_maybe_1term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__fact_table__pair__pti_pair_2__plain_maybe__ti_maybe_1term__type_ctor_info_context_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__fact_table__maybe__ti_maybe_1term__type_ctor_info_context_0),
    (MR_PseudoTypeInfo) (&ll_backend__fact_table__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_0 = {
  (MR_String) "plain_equals",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_1 = {
  (MR_String) "string_equals",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_value_ordered_comparison_kind_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_comparison_kind_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_1
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_comparison_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_comparison_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____comparison_kind_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____comparison_kind_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "comparison_kind",
  {     ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_comparison_kind_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__enum_value_ordered_comparison_kind_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_comparison_kind_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__fact_table__pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&ll_backend__fact_table__maybe__ti_maybe_1term__type_ctor_info_context_0),
    (MR_TypeInfo) (&ll_backend__fact_table__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_error_report_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__fact_table____Unify____error_report_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____error_report_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "error_report",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__fact_table__pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__fact_table__pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_error_reports_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__fact_table____Unify____error_reports_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____error_reports_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "error_reports",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__fact_table__list__ti_list_1pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_arg_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_arg_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_arg",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_const_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_DuArgLocn ll_backend__fact_table__ll_backend__fact_table__field_locns_fact_arg_info_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_info_0_0 = {
  (MR_String) "fact_arg_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_info_0_0,
  NULL,
  ll_backend__fact_table__ll_backend__fact_table__field_locns_fact_arg_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_info_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_info_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_arg_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_arg_info_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_info_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_arg_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_arg_info_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_arg_info_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_arg_info",
  {     ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_arg_info_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_arg_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_arg_info_0
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_0 = {
  (MR_String) "ok",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_1 = {
  (MR_String) "error",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_value_ordered_fact_result_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_result_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_1,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_result_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_result_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_result_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_result",
  {     ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_result_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__enum_value_ordered_fact_result_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_result_0
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_0 = {
  (MR_String) "all_in",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_1 = {
  (MR_String) "all_out",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_2 = {
  (MR_String) "in_out",
  INT32_C(2)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_3 = {
  (MR_String) "other",
  INT32_C(3)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_4 = {
  (MR_String) "unknown",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_value_ordered_fact_table_mode_type_0[5] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_1,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_2,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_3,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_4
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_table_mode_type_0[5] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_1,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_2,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_3,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_4
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_mode_type_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_mode_type_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_table_mode_type_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_table_mode_type_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_table_mode_type",
  {     ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_table_mode_type_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__enum_value_ordered_fact_table_mode_type_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_mode_type_0
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_entry_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_const_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_index_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_entry_0_0 = {
  (MR_String) "hash_entry",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_hash_entry_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_entry_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_entry_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_entry_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_entry_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_entry_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_entry_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_entry_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____hash_entry_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____hash_entry_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "hash_entry",
  {     ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_entry_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_entry_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_entry_0
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_index_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_0 = {
  (MR_String) "fact",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_hash_index_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_index_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_1 = {
  (MR_String) "hash_table",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__fact_table__ll_backend__fact_table__field_types_hash_index_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_index_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_0
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_index_0_1[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_1
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_index_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_index_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_index_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_index_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_1
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_index_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_index_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____hash_index_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____hash_index_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "hash_index",
  {     ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_index_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_index_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_index_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__fact_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table__type_ctor_info_hash_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_table_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table__type_ctor_info_hash_entry_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_table_0_0 = {
  (MR_String) "hash_table",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_hash_table_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_table_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_table_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_table_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_table_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_table_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_table_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_table_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____hash_table_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____hash_table_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "hash_table",
  {     ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_table_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_table_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_table_0
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_inferred_determinism_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)
};

static const MR_DuArgLocn ll_backend__fact_table__ll_backend__fact_table__field_locns_inferred_determinism_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_0 = {
  (MR_String) "inferred",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_inferred_determinism_0_0,
  NULL,
  ll_backend__fact_table__ll_backend__fact_table__field_locns_inferred_determinism_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_1 = {
  (MR_String) "not_yet",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_2 = {
  (MR_String) "error",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_1,
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_2
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_1[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_inferred_determinism_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_inferred_determinism_0[3] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_2,
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_1
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_inferred_determinism_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_inferred_determinism_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____inferred_determinism_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____inferred_determinism_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "inferred_determinism",
  {     ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_inferred_determinism_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_inferred_determinism_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_inferred_determinism_0
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_proc_stream_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_proc_stream_0_0 = {
  (MR_String) "proc_stream",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_proc_stream_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_proc_stream_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_proc_stream_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_proc_stream_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_proc_stream_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_proc_stream_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_proc_stream_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_proc_stream_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_proc_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____proc_stream_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____proc_stream_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "proc_stream",
  {     ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_proc_stream_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_proc_stream_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_proc_stream_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1term__type_ctor_info_const_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_const_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_sort_file_line_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__list__ti_list_1term__type_ctor_info_const_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__list__ti_list_1term__type_ctor_info_const_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_sort_file_line_0_0 = {
  (MR_String) "sort_file_line",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_sort_file_line_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_sort_file_line_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_sort_file_line_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_sort_file_line_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_sort_file_line_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_sort_file_line_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_sort_file_line_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_sort_file_line_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____sort_file_line_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____sort_file_line_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "sort_file_line",
  {     ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_sort_file_line_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_sort_file_line_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_sort_file_line_0
};

static void MR_CALL 
ll_backend__fact_table__IntroducedFrom__pred__generate_argument_vars_code__3067__1_2_p_0(
  MR_Word LambdaHeadVar__1_27,
  MR_Word * LambdaHeadVar__2_28)
{
  *LambdaHeadVar__2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_27, (MR_Integer) 2))));
}

static void MR_CALL 
ll_backend__fact_table__IntroducedFrom__pred__build_hash_table_2__1628__1_2_p_0(
  MR_Word LambdaHeadVar__1_80,
  MR_Word * LambdaHeadVar__2_81)
{
  *LambdaHeadVar__2_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_80, (MR_Integer) 2))));
}

static MR_bool MR_CALL 
ll_backend__fact_table__IntroducedFrom__pred__check_fact_term_2__488__1_2_p_0(
  MR_Word LambdaHeadVar__1_55,
  MR_Word * LambdaHeadVar__2_56)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) LambdaHeadVar__1_55)) == (MR_Integer) 0);

    if (succeeded)
      *LambdaHeadVar__2_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_55, (MR_Integer) 0))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____sort_file_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
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
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____sort_file_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&ll_backend__fact_table_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____proc_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__io____Compare____output_stream_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____proc_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = mercury__io____Unify____output_stream_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____inferred_determinism_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_10 == CastY_11);
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
                  *HeadVar__1_1 = (MR_Integer) 2;
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
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Integer Var_14 = (MR_Integer) (Var_13);
                  MR_Integer Var_15 = (MR_Integer) (ArgY1_5);

                  succeeded = (Var_14 < Var_15);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_14 > Var_15);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____inferred_determinism_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
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
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&ll_backend__fact_table_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__term____Compare____const_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        ll_backend__fact_table____Compare____hash_index_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        succeeded = (Var_22 < ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_22 > ArgY1_5);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_String Var_23 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_String ArgY2_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_14;

        succeeded = (Var_24 < ArgY1_13);
        if (succeeded)
        {
          SubResult1_14 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_24 > ArgY1_13);
          if (succeeded)
          {
            SubResult1_14 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult1_14 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult1_14;
        else
          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_23, ArgY2_16);
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__term____Unify____const_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = ll_backend__fact_table____Unify____hash_index_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (ArgX1_3 == ArgY1_4);
      }
    }
    else
    {
      MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_6;
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (ArgX1_5 == ArgY1_6);
        if (succeeded)
          succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_mode_type_0_0(
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_mode_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_result_0_0(
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_result_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      parse_tree__prog_data____Compare____mer_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
        {
          MR_Integer Var_19 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_20 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_19 < Var_20);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_19 > Var_20);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__term____Compare____const_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__term____Unify____const_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____error_reports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____error_reports_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____error_report_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____error_report_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____comparison_kind_0_0(
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____comparison_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ll_backend__fact_table__fact_table_generate_c_code_11_p_0(
  MR_Word PredName_12,
  MR_Word PragmaVars_13,
  MR_Integer ProcID_14,
  MR_Integer PrimaryProcID_15,
  MR_Word ProcInfo_16,
  MR_Word ArgTypes_17,
  MR_Word ModuleInfo_18,
  MR_String * ProcCode_19,
  MR_String * ExtraCode_20)
{
  {
    MR_bool succeeded;
    MR_Word Globals_22;
    MR_Integer FactTableSize_23;
    MR_Word ArgModes_24;
    MR_Word Determinism_25;
    MR_Word ModeType_26;
    MR_String Identifier_27;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_18, &Globals_22);
    libs__globals__lookup_int_option_3_p_0(Globals_22, (MR_Integer) 345, &FactTableSize_23);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_16, &ArgModes_24);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_16, &Determinism_25);
    ll_backend__fact_table__fact_table_mode_type_3_p_0(ArgModes_24, ModuleInfo_18, &ModeType_26);
    Identifier_27 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(PredName_12);
    succeeded = (ModeType_26 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Determinism_25 == (MR_Integer) 2);
    if (succeeded)
      ll_backend__fact_table__generate_multidet_code_8_p_0(Identifier_27, PragmaVars_13, ProcID_14, ArgTypes_17, ModuleInfo_18, FactTableSize_23, ProcCode_19, ExtraCode_20);
    else
    {
      succeeded = (ModeType_26 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (Determinism_25 == (MR_Integer) 4);
      if (succeeded)
      {
        MR_String StructName_48;
        MR_Word Var_49;
        MR_Word Var_51;

        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Identifier_27));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[91])));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) ((MR_String) "mercury__"));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
        }
        mercury__string__append_list_2_p_0(Var_49, &StructName_48);
        ll_backend__fact_table__generate_cc_multi_code_2_5_p_0(PragmaVars_13, StructName_48, (MR_Integer) 1, (MR_String) "", ProcCode_19);
        *ExtraCode_20 = (MR_String) "";
      }
      else
      {
        succeeded = (ModeType_26 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Determinism_25 == (MR_Integer) 1);
        if (succeeded)
        {
          ll_backend__fact_table__generate_all_in_code_7_p_0(Identifier_27, PragmaVars_13, ProcID_14, ArgTypes_17, ModuleInfo_18, FactTableSize_23, ProcCode_19);
          *ExtraCode_20 = (MR_String) "";
        }
        else
        {
          succeeded = (ModeType_26 == (MR_Integer) 2);
          if (succeeded)
            switch (Determinism_25) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 5:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
            }
          if (succeeded)
          {
            ll_backend__fact_table__generate_semidet_in_out_code_7_p_0(Identifier_27, PragmaVars_13, ProcID_14, ArgTypes_17, ModuleInfo_18, FactTableSize_23, ProcCode_19);
            *ExtraCode_20 = (MR_String) "";
          }
          else
          {
            succeeded = (ModeType_26 == (MR_Integer) 2);
            if (succeeded)
            {
              succeeded = (Determinism_25 == (MR_Integer) 3);
              if (succeeded)
                succeeded = (ProcID_14 == PrimaryProcID_15);
            }
            if (succeeded)
              ll_backend__fact_table__generate_primary_nondet_code_8_p_0(Identifier_27, PragmaVars_13, ProcID_14, ArgTypes_17, ModuleInfo_18, FactTableSize_23, ProcCode_19, ExtraCode_20);
            else
            {
              succeeded = (ModeType_26 == (MR_Integer) 2);
              if (succeeded)
              {
                succeeded = (Determinism_25 == (MR_Integer) 3);
                if (succeeded)
                  succeeded = (ProcID_14 != PrimaryProcID_15);
              }
              if (succeeded)
                ll_backend__fact_table__generate_secondary_nondet_code_8_p_0(Identifier_27, PragmaVars_13, ProcID_14, ArgTypes_17, ModuleInfo_18, FactTableSize_23, ProcCode_19, ExtraCode_20);
              else
              {
                MR_String NamesString_28;
                MR_String Var_36;

                ll_backend__fact_table__pragma_vars_to_names_string_2_p_0(PragmaVars_13, &NamesString_28);
                Var_36 = mercury__string__f_43_43_2_f_0(NamesString_28, (MR_String) " */");
                *ProcCode_19 = mercury__string__f_43_43_2_f_0((MR_String) "/* ", Var_36);
                *ExtraCode_20 = (MR_String) "";
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_secondary_nondet_code_8_p_0(
  MR_String PredName_9,
  MR_Word PragmaVars_10,
  MR_Integer ProcID_11,
  MR_Word ArgTypes_12,
  MR_Word ModuleInfo_13,
  MR_Integer FactTableSize_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16)
{
  {
    MR_String ExtraCodeLabel_17;
    MR_String ArgDeclCode_19;
    MR_String InputCode_20;
    MR_String OutputCode_21;
    MR_String DeclCode_25;
    MR_Integer ProcInt_26;
    MR_String LabelName_27;
    MR_String LabelName2_28;
    MR_String HashCode_29;
    MR_String StringHashLookupCode_30;
    MR_String IntHashLookupCode_31;
    MR_String FloatHashLookupCode_32;
    MR_String FactLookupCode_33;
    MR_Integer Arity_34;
    MR_String Var_139;
    MR_String Var_147;
    MR_String Var_149;
    MR_String Var_151;
    MR_String Var_152;
    MR_String Var_154;
    MR_String Var_155;
    MR_String Var_157;
    MR_String Var_158;
    MR_String Var_160;
    MR_String Var_161;
    MR_String Var_163;
    MR_String Var_164;
    MR_String Var_166;
    MR_String Var_167;
    MR_String Var_169;
    MR_String Var_170;
    MR_String Var_172;
    MR_String Var_173;
    MR_String Var_175;
    MR_String Var_176;
    MR_String Var_178;
    MR_String Var_179;
    MR_String Var_181;
    MR_String Var_182;
    MR_String Var_184;
    MR_String Var_185;
    MR_String Var_187;
    MR_String Var_188;
    MR_String Var_190;
    MR_String Var_191;
    MR_String Var_193;
    MR_String Var_194;
    MR_String Var_196;
    MR_String Var_197;
    MR_String Var_199;
    MR_String Var_200;
    MR_String Var_202;
    MR_String Var_203;
    MR_String Var_205;
    MR_String Var_206;
    MR_String Var_208;
    MR_String Var_209;
    MR_String Var_211;
    MR_String Var_212;
    MR_String Var_214;
    MR_String Var_215;
    MR_String Var_217;
    MR_String Var_218;
    MR_String Var_225;
    MR_String Var_227;
    MR_String Var_228;
    MR_String Var_230;
    MR_String Var_231;
    MR_String Var_233;
    MR_String Var_234;
    MR_String Var_236;
    MR_String Var_237;
    MR_String Var_239;
    MR_String Var_240;
    MR_String Var_242;
    MR_String Var_243;
    MR_String Var_245;
    MR_String Var_246;
    MR_String _SaveRegsCode_22;
    MR_String _GetRegsCode_23;
    MR_Integer _NumFrameVars_24;

    ll_backend__fact_table__generate_nondet_proc_code_5_p_0(PragmaVars_10, PredName_9, ProcID_11, &ExtraCodeLabel_17, ProcCode_15);
    ll_backend__fact_table__generate_argument_vars_code_9_p_0(PragmaVars_10, ArgTypes_12, ModuleInfo_13, &ArgDeclCode_19, &InputCode_20, &OutputCode_21, &_SaveRegsCode_22, &_GetRegsCode_23, &_NumFrameVars_24);
    ll_backend__fact_table__generate_decl_code_3_p_0(PredName_9, ProcID_11, &DeclCode_25);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcID_11, &ProcInt_26);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcInt_26, &Var_139);
    Var_147 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_139);
    LabelName_27 = mercury__string__f_43_43_2_f_0(PredName_9, Var_147);
    mercury__string__append_3_p_2(LabelName_27, (MR_String) "_2", &LabelName2_28);
    ll_backend__fact_table__generate_hash_code_9_p_0(PragmaVars_10, ArgTypes_12, ModuleInfo_13, LabelName_27, (MR_Integer) 0, PredName_9, (MR_Integer) 1, FactTableSize_14, &HashCode_29);
    ll_backend__fact_table__generate_hash_lookup_code_13_p_0((MR_String) "(char *) MR_framevar(4)", LabelName2_28, (MR_Integer) 0, (MR_Integer) 1, (MR_Char) 115, (MR_Integer) 0, (MR_String) "", (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ModuleInfo_13, (MR_Integer) 0, (MR_Integer) 0, &StringHashLookupCode_30);
    ll_backend__fact_table__generate_hash_lookup_code_13_p_0((MR_String) "MR_framevar(4)", LabelName2_28, (MR_Integer) 1, (MR_Integer) 0, (MR_Char) 105, (MR_Integer) 0, (MR_String) "", (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ModuleInfo_13, (MR_Integer) 0, (MR_Integer) 0, &IntHashLookupCode_31);
    ll_backend__fact_table__generate_hash_lookup_code_13_p_0((MR_String) "MR_word_to_float(MR_framevar(4))", LabelName2_28, (MR_Integer) 2, (MR_Integer) 0, (MR_Char) 102, (MR_Integer) 0, (MR_String) "", (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ModuleInfo_13, (MR_Integer) 0, (MR_Integer) 0, &FloatHashLookupCode_32);
    ll_backend__fact_table__generate_fact_lookup_code_7_p_0(PredName_9, PragmaVars_10, ArgTypes_12, ModuleInfo_13, (MR_Integer) 1, FactTableSize_14, &FactLookupCode_33);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), PragmaVars_10, &Arity_34);
    Var_149 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, (MR_String) "_module();\n}\n\n    ");
    Var_151 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void) {\n    ", Var_149);
    Var_152 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_151);
    Var_154 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void);\nvoid mercury_sys_init_", Var_152);
    Var_155 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_154);
    Var_157 = mercury__string__f_43_43_2_f_0((MR_String) "_module\n*/\nvoid mercury_sys_init_", Var_155);
    Var_158 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_157);
    Var_160 = mercury__string__f_43_43_2_f_0((MR_String) "_module;\n\n/*\nINIT mercury_sys_init_", Var_158);
    Var_161 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_160);
    Var_163 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        MR_fail();\n    }\nMR_END_MODULE\n\nextern MR_ModuleFunc ", Var_161);
    Var_164 = mercury__string__f_43_43_2_f_0(LabelName2_28, Var_163);
    Var_166 = mercury__string__f_43_43_2_f_0((MR_String) "\n        if (hashval == -1) MR_succeed_discard();\n        MR_framevar(1) = hashval;\n        MR_succeed();\n    failure_code_", Var_164);
    Var_167 = mercury__string__f_43_43_2_f_0(OutputCode_21, Var_166);
    Var_169 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* save output args to registers */\n", Var_167);
    Var_170 = mercury__string__f_43_43_2_f_0(FactLookupCode_33, Var_169);
    Var_172 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        /* lookup fact table */\n", Var_170);
    Var_173 = mercury__string__f_43_43_2_f_0(LabelName2_28, Var_172);
    Var_175 = mercury__string__f_43_43_2_f_0((MR_String) "\n                break;\n            default:\n                MR_fatal_error(\n                    \"fact table hash lookup: nondet stack corrupted\?\");\n        }\n " "   success_code_", Var_173);
    Var_176 = mercury__string__f_43_43_2_f_0(FloatHashLookupCode_32, Var_175);
    Var_178 = mercury__string__f_43_43_2_f_0((MR_String) "\n                break;\n            case \'f\':\n", Var_176);
    Var_179 = mercury__string__f_43_43_2_f_0(IntHashLookupCode_31, Var_178);
    Var_181 = mercury__string__f_43_43_2_f_0((MR_String) "\n                break;\n            case \'i\':\n", Var_179);
    Var_182 = mercury__string__f_43_43_2_f_0(StringHashLookupCode_30, Var_181);
    Var_184 = mercury__string__f_43_43_2_f_0((MR_String) "\n        MR_Integer  hashval = MR_framevar(1);\n        MR_Word     ind;\n        void        *current_table = (void *) MR_framevar(2);\n        char        keytyp" "e = (char) MR_framevar(3);\n\n        /* lookup hash table */\n        switch(keytype)\n        {\n            case \'s\':\n", Var_182);
    Var_185 = mercury__string__f_43_43_2_f_0(ArgDeclCode_19, Var_184);
    Var_187 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n    {\n        /* create argument vars */\n", Var_185);
    Var_188 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_187);
    Var_190 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        MR_fail();\n    }\nMR_define_label(", Var_188);
    Var_191 = mercury__string__f_43_43_2_f_0(LabelName_27, Var_190);
    Var_193 = mercury__string__f_43_43_2_f_0((MR_String) "\n        if (hashval == -1) MR_succeed_discard();\n        MR_framevar(1) = hashval;\n        MR_framevar(2) = (MR_Word) current_table;\n        MR_framevar(3) = (" "MR_Word) keytype;\n        MR_framevar(4) = current_key;\n        MR_succeed();\n    failure_code_", Var_191);
    Var_194 = mercury__string__f_43_43_2_f_0(OutputCode_21, Var_193);
    Var_196 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* save output args to registers */\n", Var_194);
    Var_197 = mercury__string__f_43_43_2_f_0(FactLookupCode_33, Var_196);
    Var_199 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        /* lookup fact table */\n", Var_197);
    Var_200 = mercury__string__f_43_43_2_f_0(LabelName_27, Var_199);
    Var_202 = mercury__string__f_43_43_2_f_0((MR_String) "\n    success_code_", Var_200);
    Var_203 = mercury__string__f_43_43_2_f_0(HashCode_29, Var_202);
    Var_205 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* lookup hash table */\n", Var_203);
    Var_206 = mercury__string__f_43_43_2_f_0(InputCode_20, Var_205);
    Var_208 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* copy registers to input arg vars */\n", Var_206);
    Var_209 = mercury__string__f_43_43_2_f_0(DeclCode_25, Var_208);
    Var_211 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* declare local variables */\n", Var_209);
    Var_212 = mercury__string__f_43_43_2_f_0(ArgDeclCode_19, Var_211);
    Var_214 = mercury__string__f_43_43_2_f_0((MR_String) "_i1));\n    {\n        /* create argument vars */\n", Var_212);
    Var_215 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_214);
    Var_217 = mercury__string__f_43_43_2_f_0((MR_String) "\", 4, MR_LABEL(", Var_215);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), Arity_34, &Var_218);
    Var_225 = mercury__string__f_43_43_2_f_0(Var_218, Var_217);
    Var_227 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_225);
    Var_228 = mercury__string__f_43_43_2_f_0(PredName_9, Var_227);
    Var_230 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_mkframe(\"", Var_228);
    Var_231 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_230);
    Var_233 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\nMR_BEGIN_CODE\nMR_define_entry(", Var_231);
    Var_234 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_233);
    Var_236 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_init_label(", Var_234);
    Var_237 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_236);
    Var_239 = mercury__string__f_43_43_2_f_0((MR_String) "_module)\n    MR_init_entry(", Var_237);
    Var_240 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_239);
    Var_242 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n\nMR_BEGIN_MODULE(", Var_240);
    Var_243 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_242);
    Var_245 = mercury__string__f_43_43_2_f_0((MR_String) ");\nMR_declare_label(", Var_243);
    Var_246 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_245);
    *ExtraCode_16 = mercury__string__f_43_43_2_f_0((MR_String) "\n\nMR_define_extern_entry(", Var_246);
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_primary_nondet_code_8_p_0(
  MR_String PredName_9,
  MR_Word PragmaVars_10,
  MR_Integer ProcID_11,
  MR_Word ArgTypes_12,
  MR_Word ModuleInfo_13,
  MR_Integer FactTableSize_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16)
{
  {
    MR_String ExtraCodeLabel_17;
    MR_String ArgDeclCode_19;
    MR_String InputCode_20;
    MR_String OutputCode_21;
    MR_String SaveRegsCode_22;
    MR_String GetRegsCode_23;
    MR_Integer NumFrameVars_24;
    MR_String DeclCode_25;
    MR_Integer ProcInt_26;
    MR_String LabelName_27;
    MR_String HashCode_28;
    MR_String FactLookupCode_29;
    MR_String FactTestCode_30;
    MR_String NumFactsVar_31;
    MR_Integer Arity_32;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_String Var_114;
    MR_String Var_122;
    MR_String Var_124;
    MR_String Var_126;
    MR_String Var_127;
    MR_String Var_129;
    MR_String Var_130;
    MR_String Var_132;
    MR_String Var_133;
    MR_String Var_135;
    MR_String Var_136;
    MR_String Var_138;
    MR_String Var_139;
    MR_String Var_141;
    MR_String Var_142;
    MR_String Var_144;
    MR_String Var_145;
    MR_String Var_147;
    MR_String Var_148;
    MR_String Var_150;
    MR_String Var_151;
    MR_String Var_153;
    MR_String Var_154;
    MR_String Var_156;
    MR_String Var_157;
    MR_String Var_159;
    MR_String Var_160;
    MR_String Var_162;
    MR_String Var_163;
    MR_String Var_165;
    MR_String Var_166;
    MR_String Var_168;
    MR_String Var_169;
    MR_String Var_171;
    MR_String Var_172;
    MR_String Var_174;
    MR_String Var_175;
    MR_String Var_177;
    MR_String Var_178;
    MR_String Var_180;
    MR_String Var_181;
    MR_String Var_183;
    MR_String Var_184;
    MR_String Var_186;
    MR_String Var_187;
    MR_String Var_189;
    MR_String Var_190;
    MR_String Var_192;
    MR_String Var_193;
    MR_String Var_200;
    MR_String Var_202;
    MR_String Var_203;
    MR_String Var_210;
    MR_String Var_212;
    MR_String Var_213;
    MR_String Var_215;
    MR_String Var_216;
    MR_String Var_218;
    MR_String Var_219;
    MR_String Var_221;
    MR_String Var_222;
    MR_String Var_224;
    MR_String Var_225;
    MR_String Var_227;
    MR_String Var_228;
    MR_String Var_230;
    MR_String Var_231;

    ll_backend__fact_table__generate_nondet_proc_code_5_p_0(PragmaVars_10, PredName_9, ProcID_11, &ExtraCodeLabel_17, ProcCode_15);
    ll_backend__fact_table__generate_argument_vars_code_9_p_0(PragmaVars_10, ArgTypes_12, ModuleInfo_13, &ArgDeclCode_19, &InputCode_20, &OutputCode_21, &SaveRegsCode_22, &GetRegsCode_23, &NumFrameVars_24);
    ll_backend__fact_table__generate_decl_code_3_p_0(PredName_9, ProcID_11, &DeclCode_25);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcID_11, &ProcInt_26);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcInt_26, &Var_114);
    Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_114);
    LabelName_27 = mercury__string__f_43_43_2_f_0(PredName_9, Var_122);
    ll_backend__fact_table__generate_hash_code_9_p_0(PragmaVars_10, ArgTypes_12, ModuleInfo_13, LabelName_27, (MR_Integer) 0, PredName_9, (MR_Integer) 1, FactTableSize_14, &HashCode_28);
    ll_backend__fact_table__generate_fact_lookup_code_7_p_0(PredName_9, PragmaVars_10, ArgTypes_12, ModuleInfo_13, (MR_Integer) 1, FactTableSize_14, &FactLookupCode_29);
    ll_backend__fact_table__generate_fact_test_code_6_p_0(PredName_9, PragmaVars_10, ArgTypes_12, ModuleInfo_13, FactTableSize_14, &FactTestCode_30);
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (PredName_9));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[90])));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) ((MR_String) "mercury__"));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
    }
    mercury__string__append_list_2_p_0(Var_42, &NumFactsVar_31);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), PragmaVars_10, &Arity_32);
    Var_124 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, (MR_String) "_module();\n}\n\n    ");
    Var_126 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void) {\n    ", Var_124);
    Var_127 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_126);
    Var_129 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void);\nvoid mercury_sys_init_", Var_127);
    Var_130 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_129);
    Var_132 = mercury__string__f_43_43_2_f_0((MR_String) "_module\n*/\nvoid mercury_sys_init_", Var_130);
    Var_133 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_132);
    Var_135 = mercury__string__f_43_43_2_f_0((MR_String) "_module;\n\n/*\nINIT mercury_sys_init_", Var_133);
    Var_136 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_135);
    Var_138 = mercury__string__f_43_43_2_f_0((MR_String) "\n    }\n    MR_framevar(1)++;\n    MR_succeed();\nMR_END_MODULE\n\nextern MR_ModuleFunc ", Var_136);
    Var_139 = mercury__string__f_43_43_2_f_0(OutputCode_21, Var_138);
    Var_141 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* save output args to registers */\n", Var_139);
    Var_142 = mercury__string__f_43_43_2_f_0(FactLookupCode_29, Var_141);
    Var_144 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* lookup fact table */\n", Var_142);
    Var_145 = mercury__string__f_43_43_2_f_0(FactTestCode_30, Var_144);
    Var_147 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* test fact table entry */\n", Var_145);
    Var_148 = mercury__string__f_43_43_2_f_0(InputCode_20, Var_147);
    Var_150 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* copy registers to input arg vars */\n", Var_148);
    Var_151 = mercury__string__f_43_43_2_f_0(GetRegsCode_23, Var_150);
    Var_153 = mercury__string__f_43_43_2_f_0((MR_String) "\n        int ind = MR_framevar(1);\n        /* copy framevars to registers */\n", Var_151);
    Var_154 = mercury__string__f_43_43_2_f_0(ArgDeclCode_19, Var_153);
    Var_156 = mercury__string__f_43_43_2_f_0((MR_String) ")\n        MR_fail();\n    {\n        /* create argument vars */\n", Var_154);
    Var_157 = mercury__string__f_43_43_2_f_0(NumFactsVar_31, Var_156);
    Var_159 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n    if (MR_framevar(1) >= ", Var_157);
    Var_160 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_159);
    Var_162 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        MR_fail();\n    }\nMR_define_label(", Var_160);
    Var_163 = mercury__string__f_43_43_2_f_0(LabelName_27, Var_162);
    Var_165 = mercury__string__f_43_43_2_f_0((MR_String) "\n        MR_framevar(1) = ind + 1;\n        MR_succeed();\n    failure_code_", Var_163);
    Var_166 = mercury__string__f_43_43_2_f_0(OutputCode_21, Var_165);
    Var_168 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* save output args to registers */\n", Var_166);
    Var_169 = mercury__string__f_43_43_2_f_0(FactLookupCode_29, Var_168);
    Var_171 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        /* lookup fact table */\n", Var_169);
    Var_172 = mercury__string__f_43_43_2_f_0(LabelName_27, Var_171);
    Var_174 = mercury__string__f_43_43_2_f_0((MR_String) "\n    success_code_", Var_172);
    Var_175 = mercury__string__f_43_43_2_f_0(HashCode_28, Var_174);
    Var_177 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* lookup hash table */\n", Var_175);
    Var_178 = mercury__string__f_43_43_2_f_0(SaveRegsCode_22, Var_177);
    Var_180 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* copy registers to framevars */\n", Var_178);
    Var_181 = mercury__string__f_43_43_2_f_0(InputCode_20, Var_180);
    Var_183 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* copy registers to input arg vars */\n", Var_181);
    Var_184 = mercury__string__f_43_43_2_f_0(DeclCode_25, Var_183);
    Var_186 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* declare local variables */\n", Var_184);
    Var_187 = mercury__string__f_43_43_2_f_0(ArgDeclCode_19, Var_186);
    Var_189 = mercury__string__f_43_43_2_f_0((MR_String) "_i1));\n    {\n        /* create argument vars */\n", Var_187);
    Var_190 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_189);
    Var_192 = mercury__string__f_43_43_2_f_0((MR_String) ", MR_LABEL(", Var_190);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), NumFrameVars_24, &Var_193);
    Var_200 = mercury__string__f_43_43_2_f_0(Var_193, Var_192);
    Var_202 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", Var_200);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), Arity_32, &Var_203);
    Var_210 = mercury__string__f_43_43_2_f_0(Var_203, Var_202);
    Var_212 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_210);
    Var_213 = mercury__string__f_43_43_2_f_0(PredName_9, Var_212);
    Var_215 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_mkframe(\"", Var_213);
    Var_216 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_215);
    Var_218 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\nMR_BEGIN_CODE\nMR_define_entry(", Var_216);
    Var_219 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_218);
    Var_221 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_init_label(", Var_219);
    Var_222 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_221);
    Var_224 = mercury__string__f_43_43_2_f_0((MR_String) "_module)\n    MR_init_entry(", Var_222);
    Var_225 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_224);
    Var_227 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n\nMR_BEGIN_MODULE(", Var_225);
    Var_228 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_227);
    Var_230 = mercury__string__f_43_43_2_f_0((MR_String) ");\nMR_declare_label(", Var_228);
    Var_231 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_230);
    *ExtraCode_16 = mercury__string__f_43_43_2_f_0((MR_String) "\n\nMR_define_extern_entry(", Var_231);
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_fact_test_code_6_p_0(
  MR_String PredName_7,
  MR_Word PragmaVars_8,
  MR_Word ArgTypes_9,
  MR_Word ModuleInfo_10,
  MR_Integer FactTableSize_11,
  MR_String * FactTestCode_12)
{
  {
    MR_String FactTableName_13;
    MR_String CondCode_14;
    MR_String Var_16;
    MR_String Var_21;

    Var_16 = mercury__string__f_43_43_2_f_0(PredName_7, (MR_String) "_fact_table");
    FactTableName_13 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_16);
    ll_backend__fact_table__generate_test_condition_code_8_p_0(FactTableName_13, PragmaVars_8, ArgTypes_9, ModuleInfo_10, (MR_Integer) 1, (MR_Integer) 1, FactTableSize_11, &CondCode_14);
    Var_21 = mercury__string__f_43_43_2_f_0(CondCode_14, (MR_String) "\t\t) MR_fail();\n");
    *FactTestCode_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tif(", Var_21);
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_decl_code_3_p_0(
  MR_String Name_4,
  MR_Integer ProcID_5,
  MR_String * DeclCode_6)
{
  {
    MR_Integer ProcInt_8;
    MR_String Var_15;
    MR_String Var_22;
    MR_String Var_24;
    MR_String Var_25;

    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcID_5, &ProcInt_8);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcInt_8, &Var_15);
    Var_22 = mercury__string__f_43_43_2_f_0(Var_15, (MR_String) "_0;\n\n    ");
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "_fact_table_hash_table_", Var_22);
    Var_25 = mercury__string__f_43_43_2_f_0(Name_4, Var_24);
    *DeclCode_6 = mercury__string__f_43_43_2_f_0((MR_String) "\n            MR_Integer hashval, hashsize;\n            MR_Word ind;\n            void *current_table;\n            char keytype = \'\\0\';\n            MR_Word curren" "t_key, tmp;\n\n            /*\n            ** Initialise current_table to the top level hash table\n            ** for this ProcID.\n            */\n            curre" "nt_table =\n                &mercury__", Var_25);
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_semidet_in_out_code_7_p_0(
  MR_String PredName_8,
  MR_Word PragmaVars_9,
  MR_Integer ProcID_10,
  MR_Word ArgTypes_11,
  MR_Word ModuleInfo_12,
  MR_Integer FactTableSize_13,
  MR_String * ProcCode_14)
{
  {
    MR_String DeclCode_15;
    MR_Integer ProcInt_16;
    MR_String LabelName_17;
    MR_String HashCode_18;
    MR_String SuccessCode_20;
    MR_String FactLookupCode_21;
    MR_String FailCode_23;
    MR_String Var_44;
    MR_String Var_45;
    MR_String Var_46;
    MR_String Var_47;
    MR_String Var_48;
    MR_String Var_50;
    MR_String Var_58;
    MR_String Var_60;
    MR_String Var_63;
    MR_String Var_65;
    MR_String Var_66;
    MR_String Var_68;
    MR_String Var_69;
    MR_Integer ProcInt_75;
    MR_String Var_82;
    MR_String Var_89;
    MR_String Var_91;
    MR_String Var_92;

    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcID_10, &ProcInt_75);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcInt_75, &Var_82);
    Var_89 = mercury__string__f_43_43_2_f_0(Var_82, (MR_String) "_0;\n\n    ");
    Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "_fact_table_hash_table_", Var_89);
    Var_92 = mercury__string__f_43_43_2_f_0(PredName_8, Var_91);
    DeclCode_15 = mercury__string__f_43_43_2_f_0((MR_String) "\n            MR_Integer hashval, hashsize;\n            MR_Word ind;\n            void *current_table;\n            char keytype = \'\\0\';\n            MR_Word curren" "t_key, tmp;\n\n            /*\n            ** Initialise current_table to the top level hash table\n            ** for this ProcID.\n            */\n            curre" "nt_table =\n                &mercury__", Var_92);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcID_10, &ProcInt_16);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcInt_16, &Var_50);
    Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_50);
    LabelName_17 = mercury__string__f_43_43_2_f_0(PredName_8, Var_58);
    ll_backend__fact_table__generate_hash_code_9_p_0(PragmaVars_9, ArgTypes_11, ModuleInfo_12, LabelName_17, (MR_Integer) 0, PredName_8, (MR_Integer) 1, FactTableSize_13, &HashCode_18);
    Var_60 = mercury__string__f_43_43_2_f_0(LabelName_17, (MR_String) ":\n            SUCCESS_INDICATOR = MR_TRUE;\n    ");
    SuccessCode_20 = mercury__string__f_43_43_2_f_0((MR_String) "\n        success_code_", Var_60);
    ll_backend__fact_table__generate_fact_lookup_code_7_p_0(PredName_8, PragmaVars_9, ArgTypes_11, ModuleInfo_12, (MR_Integer) 1, FactTableSize_13, &FactLookupCode_21);
    Var_63 = mercury__string__f_43_43_2_f_0(LabelName_17, (MR_String) ":\n            ;\n    ");
    Var_65 = mercury__string__f_43_43_2_f_0((MR_String) ":\n            SUCCESS_INDICATOR = MR_FALSE;\n        skip_", Var_63);
    Var_66 = mercury__string__f_43_43_2_f_0(LabelName_17, Var_65);
    Var_68 = mercury__string__f_43_43_2_f_0((MR_String) ";\n        failure_code_", Var_66);
    Var_69 = mercury__string__f_43_43_2_f_0(LabelName_17, Var_68);
    FailCode_23 = mercury__string__f_43_43_2_f_0((MR_String) "\n            goto skip_", Var_69);
    Var_48 = mercury__string__f_43_43_2_f_0(FailCode_23, (MR_String) "\t}\n");
    Var_47 = mercury__string__f_43_43_2_f_0(FactLookupCode_21, Var_48);
    Var_46 = mercury__string__f_43_43_2_f_0(SuccessCode_20, Var_47);
    Var_45 = mercury__string__f_43_43_2_f_0(HashCode_18, Var_46);
    Var_44 = mercury__string__f_43_43_2_f_0(DeclCode_15, Var_45);
    *ProcCode_14 = mercury__string__f_43_43_2_f_0((MR_String) "\t{\n", Var_44);
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_all_in_code_7_p_0(
  MR_String PredName_8,
  MR_Word PragmaVars_9,
  MR_Integer ProcID_10,
  MR_Word ArgTypes_11,
  MR_Word ModuleInfo_12,
  MR_Integer FactTableSize_13,
  MR_String * ProcCode_14)
{
  {
    MR_String DeclCode_15;
    MR_Integer ProcInt_16;
    MR_String LabelName_17;
    MR_String HashCode_18;
    MR_String SuccessCode_20;
    MR_String Var_39;
    MR_String Var_40;
    MR_String Var_41;
    MR_String Var_43;
    MR_String Var_51;
    MR_String Var_53;
    MR_String Var_55;
    MR_String Var_56;
    MR_String Var_58;
    MR_String Var_59;
    MR_String Var_61;
    MR_String Var_62;
    MR_Integer ProcInt_68;
    MR_String Var_75;
    MR_String Var_82;
    MR_String Var_84;
    MR_String Var_85;

    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcID_10, &ProcInt_68);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcInt_68, &Var_75);
    Var_82 = mercury__string__f_43_43_2_f_0(Var_75, (MR_String) "_0;\n\n    ");
    Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "_fact_table_hash_table_", Var_82);
    Var_85 = mercury__string__f_43_43_2_f_0(PredName_8, Var_84);
    DeclCode_15 = mercury__string__f_43_43_2_f_0((MR_String) "\n            MR_Integer hashval, hashsize;\n            MR_Word ind;\n            void *current_table;\n            char keytype = \'\\0\';\n            MR_Word curren" "t_key, tmp;\n\n            /*\n            ** Initialise current_table to the top level hash table\n            ** for this ProcID.\n            */\n            curre" "nt_table =\n                &mercury__", Var_85);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcID_10, &ProcInt_16);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcInt_16, &Var_43);
    Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_43);
    LabelName_17 = mercury__string__f_43_43_2_f_0(PredName_8, Var_51);
    ll_backend__fact_table__generate_hash_code_9_p_0(PragmaVars_9, ArgTypes_11, ModuleInfo_12, LabelName_17, (MR_Integer) 0, PredName_8, (MR_Integer) 1, FactTableSize_13, &HashCode_18);
    Var_53 = mercury__string__f_43_43_2_f_0(LabelName_17, (MR_String) ":\n            ;\n    ");
    Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ":\n            SUCCESS_INDICATOR = MR_FALSE;\n        skip_", Var_53);
    Var_56 = mercury__string__f_43_43_2_f_0(LabelName_17, Var_55);
    Var_58 = mercury__string__f_43_43_2_f_0((MR_String) ";\n        failure_code_", Var_56);
    Var_59 = mercury__string__f_43_43_2_f_0(LabelName_17, Var_58);
    Var_61 = mercury__string__f_43_43_2_f_0((MR_String) ":\n            SUCCESS_INDICATOR = MR_TRUE;\n            goto skip_", Var_59);
    Var_62 = mercury__string__f_43_43_2_f_0(LabelName_17, Var_61);
    SuccessCode_20 = mercury__string__f_43_43_2_f_0((MR_String) "\n        success_code_", Var_62);
    Var_41 = mercury__string__f_43_43_2_f_0(SuccessCode_20, (MR_String) "\t}\n");
    Var_40 = mercury__string__f_43_43_2_f_0(HashCode_18, Var_41);
    Var_39 = mercury__string__f_43_43_2_f_0(DeclCode_15, Var_40);
    *ProcCode_14 = mercury__string__f_43_43_2_f_0((MR_String) "\t{\n", Var_39);
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_hash_code_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3,
  MR_String LabelName_4,
  MR_Integer LabelNum_5,
  MR_String PredName_6,
  MR_Integer ArgNum_7,
  MR_Integer FactTableSize_8,
  MR_String * HeadVar__9_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__9_9 = (MR_String) "";
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.generate_hash_code\'/9", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.generate_hash_code\'/9", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_String Name_39 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 1))));
        MR_Word Mode_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 2))));
        MR_Word Type_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Types_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Integer NextArgNum_52 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);

        succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(ModuleInfo_3, Mode_40);
        if (succeeded)
        {
          MR_String C_Code0_53;
          MR_String C_Code1_54;
          MR_Integer Var_63;
          MR_Word Var_57;
          MR_Word Var_58;

          succeeded = ((MR_tag((MR_Word) Type_43)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_43, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_57, (MR_Integer) 0))) & (MR_Integer) 15);
              succeeded = (Var_58 == (MR_Integer) 0);
            }
          }
          if (succeeded)
            ll_backend__fact_table__generate_hash_int_code_10_p_0(Name_39, LabelName_4, LabelNum_5, PredName_6, Var_65, Types_44, ModuleInfo_3, NextArgNum_52, FactTableSize_8, &C_Code0_53);
          else
          {
            MR_Word Var_59;

            succeeded = ((MR_tag((MR_Word) Type_43)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_43, (MR_Integer) 0))));
              succeeded = (Var_59 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
              ll_backend__fact_table__generate_hash_float_code_10_p_0(Name_39, LabelName_4, LabelNum_5, PredName_6, Var_65, Types_44, ModuleInfo_3, NextArgNum_52, FactTableSize_8, &C_Code0_53);
            else
            {
              MR_Word Var_60;

              succeeded = ((MR_tag((MR_Word) Type_43)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_43, (MR_Integer) 0))));
                succeeded = (Var_60 == (MR_Word) ((MR_Unsigned) 4U));
              }
              if (succeeded)
                ll_backend__fact_table__generate_hash_string_code_10_p_0(Name_39, LabelName_4, LabelNum_5, PredName_6, Var_65, Types_44, ModuleInfo_3, NextArgNum_52, FactTableSize_8, &C_Code0_53);
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.generate_hash_code\'/9", (MR_String) "unsupported type");
                  return;
                }
            }
          }
          Var_63 = (MR_Integer) ((MR_Unsigned) LabelNum_5 + (MR_Unsigned) 1);
          ll_backend__fact_table__generate_hash_code_9_p_0(Var_65, Types_44, ModuleInfo_3, LabelName_4, Var_63, PredName_6, NextArgNum_52, FactTableSize_8, &C_Code1_54);
          mercury__string__append_3_p_2(C_Code0_53, C_Code1_54, HeadVar__9_9);
        }
        else
        {
          MR_Word next_value_of_HeadVar__1_1 = Var_65;
          MR_Word next_value_of_HeadVar__2_2 = Types_44;
          MR_Integer next_value_of_ArgNum_7 = NextArgNum_52;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          ArgNum_7 = next_value_of_ArgNum_7;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_hash_string_code_10_p_0(
  MR_String Name_11,
  MR_String LabelName_12,
  MR_Integer LabelNum_13,
  MR_String PredName_14,
  MR_Word PragmaVars_15,
  MR_Word Types_16,
  MR_Word ModuleInfo_17,
  MR_Integer ArgNum_18,
  MR_Integer FactTableSize_19,
  MR_String * C_Code_20)
{
  {
    MR_String HashLookupCode_21;
    MR_String Var_34;
    MR_String Var_36;
    MR_String Var_37;
    MR_String Var_39;
    MR_String Var_40;

    ll_backend__fact_table__generate_hash_lookup_code_13_p_0(Name_11, LabelName_12, LabelNum_13, (MR_Integer) 1, (MR_Char) 115, (MR_Integer) 1, PredName_14, PragmaVars_15, Types_16, ModuleInfo_17, ArgNum_18, FactTableSize_19, &HashLookupCode_21);
    Var_34 = mercury__string__f_43_43_2_f_0(HashLookupCode_21, (MR_String) "\n\n    ");
    Var_36 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n        /* lookup the hash table */\n        ", Var_34);
    Var_37 = mercury__string__f_43_43_2_f_0(Name_11, Var_36);
    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) " ; *p != \'\\0\' ; p++) {\n                hashval = (*p + 31 * hashval) % hashsize;\n            }\n        }\n\n        current_key = (MR_Word) ", Var_37);
    Var_40 = mercury__string__f_43_43_2_f_0(Name_11, Var_39);
    *C_Code_20 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n        hashsize = ((struct MR_fact_table_hash_table_s *) current_table)->size;\n\n        /* calculate hash value for a string */\n        {\n            char *p" ";\n            hashval = 0;\n            for (p = ", Var_40);
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_hash_float_code_10_p_0(
  MR_String Name_11,
  MR_String LabelName_12,
  MR_Integer LabelNum_13,
  MR_String PredName_14,
  MR_Word PragmaVars_15,
  MR_Word Types_16,
  MR_Word ModuleInfo_17,
  MR_Integer ArgNum_18,
  MR_Integer FactTableSize_19,
  MR_String * C_Code_20)
{
  {
    MR_String HashLookupCode_21;
    MR_String Var_34;
    MR_String Var_36;
    MR_String Var_37;
    MR_String Var_39;
    MR_String Var_40;

    ll_backend__fact_table__generate_hash_lookup_code_13_p_0(Name_11, LabelName_12, LabelNum_13, (MR_Integer) 0, (MR_Char) 102, (MR_Integer) 1, PredName_14, PragmaVars_15, Types_16, ModuleInfo_17, ArgNum_18, FactTableSize_19, &HashLookupCode_21);
    Var_34 = mercury__string__f_43_43_2_f_0(HashLookupCode_21, (MR_String) "\n\n    ");
    Var_36 = mercury__string__f_43_43_2_f_0((MR_String) ");\n\n        /* lookup the hash table */\n        ", Var_34);
    Var_37 = mercury__string__f_43_43_2_f_0(Name_11, Var_36);
    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) ");\n        hashval = (hashval >= 0 \? hashval : -hashval) % hashsize;\n\n        current_key = MR_float_to_word(", Var_37);
    Var_40 = mercury__string__f_43_43_2_f_0(Name_11, Var_39);
    *C_Code_20 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n        /* calculate hash value for a float */\n\n        hashsize = ((struct MR_fact_table_hash_table_f *)current_table)\n            ->size;\n\n        hashval =" " MR_hash_float(", Var_40);
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_hash_int_code_10_p_0(
  MR_String Name_11,
  MR_String LabelName_12,
  MR_Integer LabelNum_13,
  MR_String PredName_14,
  MR_Word PragmaVars_15,
  MR_Word Types_16,
  MR_Word ModuleInfo_17,
  MR_Integer ArgNum_18,
  MR_Integer FactTableSize_19,
  MR_String * C_Code_20)
{
  {
    MR_String HashLookupCode_21;
    MR_String Var_38;
    MR_String Var_40;
    MR_String Var_41;
    MR_String Var_43;
    MR_String Var_44;
    MR_String Var_46;
    MR_String Var_47;
    MR_String Var_49;
    MR_String Var_50;

    ll_backend__fact_table__generate_hash_lookup_code_13_p_0(Name_11, LabelName_12, LabelNum_13, (MR_Integer) 0, (MR_Char) 105, (MR_Integer) 1, PredName_14, PragmaVars_15, Types_16, ModuleInfo_17, ArgNum_18, FactTableSize_19, &HashLookupCode_21);
    Var_38 = mercury__string__f_43_43_2_f_0(HashLookupCode_21, (MR_String) "\n\n    ");
    Var_40 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n        /* lookup the hash table */\n        ", Var_38);
    Var_41 = mercury__string__f_43_43_2_f_0(Name_11, Var_40);
    Var_43 = mercury__string__f_43_43_2_f_0((MR_String) ") % hashsize;\n\n        current_key = ", Var_41);
    Var_44 = mercury__string__f_43_43_2_f_0(Name_11, Var_43);
    Var_46 = mercury__string__f_43_43_2_f_0((MR_String) " : -", Var_44);
    Var_47 = mercury__string__f_43_43_2_f_0(Name_11, Var_46);
    Var_49 = mercury__string__f_43_43_2_f_0((MR_String) " >= 0 \? ", Var_47);
    Var_50 = mercury__string__f_43_43_2_f_0(Name_11, Var_49);
    *C_Code_20 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n        /* calculate hash value for an integer */\n\n        hashsize = ((struct MR_fact_table_hash_table_i *)current_table)\n            ->size;\n\n        hashva" "l = (", Var_50);
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_hash_lookup_code_13_p_0(
  MR_String VarName_14,
  MR_String LabelName_15,
  MR_Integer LabelNum_16,
  MR_Word ComparisonKind_17,
  MR_Char KeyType_18,
  MR_Word CheckKeys_19,
  MR_String PredName_20,
  MR_Word PragmaVars_21,
  MR_Word Types_22,
  MR_Word ModuleInfo_23,
  MR_Integer ArgNum_24,
  MR_Integer FactTableSize_25,
  MR_String * HashLookupCode_26)
{
  {
    MR_bool succeeded;
    MR_String HashTableEntry_27;
    MR_String HashTableKey_28;
    MR_String CompareString_29;
    MR_String TestCode_33;
    MR_String Var_93;
    MR_String Var_100;
    MR_String Var_117;
    MR_String Var_119;
    MR_String Var_120;
    MR_String Var_122;
    MR_String Var_123;
    MR_String Var_130;
    MR_String Var_132;
    MR_String Var_133;
    MR_String Var_135;
    MR_String Var_136;
    MR_String Var_138;
    MR_String Var_139;
    MR_String Var_146;
    MR_String Var_148;
    MR_String Var_149;
    MR_String Var_151;
    MR_String Var_152;
    MR_String Var_154;
    MR_String Var_155;
    MR_String Var_157;
    MR_String Var_158;
    MR_String Var_165;
    MR_String Var_167;
    MR_String Var_168;
    MR_String Var_170;
    MR_String Var_171;
    MR_String Var_173;
    MR_String Var_174;
    MR_String Var_176;
    MR_String Var_177;

    mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), KeyType_18, &Var_93);
    Var_100 = mercury__string__f_43_43_2_f_0(Var_93, (MR_String) " *) current_table)->table[hashval]");
    HashTableEntry_27 = mercury__string__f_43_43_2_f_0((MR_String) "((struct MR_fact_table_hash_table_", Var_100);
    mercury__string__append_3_p_2(HashTableEntry_27, (MR_String) ".key", &HashTableKey_28);
    switch (ComparisonKind_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_109;

          Var_109 = mercury__string__f_43_43_2_f_0((MR_String) " == ", VarName_14);
          CompareString_29 = mercury__string__f_43_43_2_f_0(HashTableKey_28, Var_109);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_103;
          MR_String Var_105;
          MR_String Var_106;

          Var_103 = mercury__string__f_43_43_2_f_0(VarName_14, (MR_String) ") == 0");
          Var_105 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_103);
          Var_106 = mercury__string__f_43_43_2_f_0(HashTableKey_28, Var_105);
          CompareString_29 = mercury__string__f_43_43_2_f_0((MR_String) "strcmp(", Var_106);
        }
        break;
    }
    switch (CheckKeys_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TestCode_33 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String FactTableName_31;
          MR_String CondCode_32;
          MR_String Var_55;

          Var_55 = mercury__string__f_43_43_2_f_0(PredName_20, (MR_String) "_fact_table");
          FactTableName_31 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_55);
          ll_backend__fact_table__generate_test_condition_code_8_p_0(FactTableName_31, PragmaVars_21, Types_22, ModuleInfo_23, ArgNum_24, (MR_Integer) 1, FactTableSize_25, &CondCode_32);
          succeeded = (strcmp(CondCode_32, (MR_String) "") == 0);
          if (succeeded)
            TestCode_33 = (MR_String) "";
          else
          {
            MR_String Var_111;
            MR_String Var_113;
            MR_String Var_114;

            Var_111 = mercury__string__f_43_43_2_f_0(LabelName_15, (MR_String) ";\n");
            Var_113 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t) goto failure_code_", Var_111);
            Var_114 = mercury__string__f_43_43_2_f_0(CondCode_32, Var_113);
            TestCode_33 = mercury__string__f_43_43_2_f_0((MR_String) "if (", Var_114);
          }
        }
        break;
    }
    Var_117 = mercury__string__f_43_43_2_f_0(LabelName_15, (MR_String) ";\n        }\n\n        current_table = (void *) MR_FACT_TABLE_HASH_POINTER(ind);\n\n    ");
    Var_119 = mercury__string__f_43_43_2_f_0((MR_String) ".next;\n            goto success_code_", Var_117);
    Var_120 = mercury__string__f_43_43_2_f_0(HashTableEntry_27, Var_119);
    Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "\';\n            hashval = ", Var_120);
    mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), KeyType_18, &Var_123);
    Var_130 = mercury__string__f_43_43_2_f_0(Var_123, Var_122);
    Var_132 = mercury__string__f_43_43_2_f_0((MR_String) "\n            keytype = \'", Var_130);
    Var_133 = mercury__string__f_43_43_2_f_0(TestCode_33, Var_132);
    Var_135 = mercury__string__f_43_43_2_f_0((MR_String) ") == 1) {\n            ind = MR_FACT_TABLE_HASH_INDEX(ind);\n\n            /* check that any remaining input arguments match */\n            ", Var_133);
    Var_136 = mercury__string__f_43_43_2_f_0(HashTableEntry_27, Var_135);
    Var_138 = mercury__string__f_43_43_2_f_0((MR_String) ":\n\n        if (MR_FACT_TABLE_HASH_ENTRY_TYPE(", Var_136);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), LabelNum_16, &Var_139);
    Var_146 = mercury__string__f_43_43_2_f_0(Var_139, Var_138);
    Var_148 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_146);
    Var_149 = mercury__string__f_43_43_2_f_0(LabelName_15, Var_148);
    Var_151 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n    found_", Var_149);
    Var_152 = mercury__string__f_43_43_2_f_0(LabelName_15, Var_151);
    Var_154 = mercury__string__f_43_43_2_f_0((MR_String) ".next) != -1);\n\n        /* key not found */\n        goto failure_code_", Var_152);
    Var_155 = mercury__string__f_43_43_2_f_0(HashTableEntry_27, Var_154);
    Var_157 = mercury__string__f_43_43_2_f_0((MR_String) ";\n            }\n        } while ((hashval = ", Var_155);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), LabelNum_16, &Var_158);
    Var_165 = mercury__string__f_43_43_2_f_0(Var_158, Var_157);
    Var_167 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_165);
    Var_168 = mercury__string__f_43_43_2_f_0(LabelName_15, Var_167);
    Var_170 = mercury__string__f_43_43_2_f_0((MR_String) ".index;\n                goto found_", Var_168);
    Var_171 = mercury__string__f_43_43_2_f_0(HashTableEntry_27, Var_170);
    Var_173 = mercury__string__f_43_43_2_f_0((MR_String) ")\n            {\n                ind = (MR_Word) ", Var_171);
    Var_174 = mercury__string__f_43_43_2_f_0(CompareString_29, Var_173);
    Var_176 = mercury__string__f_43_43_2_f_0((MR_String) ") != 0 && ", Var_174);
    Var_177 = mercury__string__f_43_43_2_f_0(HashTableEntry_27, Var_176);
    *HashLookupCode_26 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n        do {\n            if (MR_FACT_TABLE_HASH_ENTRY_TYPE(", Var_177);
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_test_condition_code_8_p_0(
  MR_String FactTableName_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word ModuleInfo_4,
  MR_Integer ArgNum_5,
  MR_Word STATE_VARIABLE_IsFirstInputArg_0_6,
  MR_Integer FactTableSize_7,
  MR_String * HeadVar__8_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__8_8 = (MR_String) "";
      else
      {
        *HeadVar__8_8 = (MR_String) "";
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.generate_test_condition_code\'/8", (MR_String) "too many ArgTypes");
          return;
        }
      }
    else
    {
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__8_8 = (MR_String) "";
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.generate_test_condition_code\'/8", (MR_String) "too many PragmaVars");
          return;
        }
      }
      else
      {
        MR_Word Type_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Types_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_String Name_43 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_80, (MR_Integer) 1))));
        MR_Word Mode_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_80, (MR_Integer) 2))));
        MR_String CondCode1_48;
        MR_String CondCode2_49;
        MR_Word STATE_VARIABLE_IsFirstInputArg_75_75;
        MR_Integer Var_76;

        succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(ModuleInfo_4, Mode_44);
        if (succeeded)
        {
          MR_String CondCode0_47;
          MR_Word Var_51;

          succeeded = ((MR_tag((MR_Word) Type_35)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_35, (MR_Integer) 0))));
            succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 4U));
          }
          if (succeeded)
          {
            MR_String Var_82;
            MR_String Var_84;
            MR_String Var_85;
            MR_String Var_92;
            MR_String Var_94;
            MR_String Var_95;
            MR_String Var_102;
            MR_String Var_104;
            MR_String Var_105;
            MR_String Var_112;
            MR_String Var_114;
            MR_String Var_115;

            Var_82 = mercury__string__f_43_43_2_f_0(Name_43, (MR_String) ") != 0\n");
            Var_84 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_82);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ArgNum_5, &Var_85);
            Var_92 = mercury__string__f_43_43_2_f_0(Var_85, Var_84);
            Var_94 = mercury__string__f_43_43_2_f_0((MR_String) "].V_", Var_92);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactTableSize_7, &Var_95);
            Var_102 = mercury__string__f_43_43_2_f_0(Var_95, Var_94);
            Var_104 = mercury__string__f_43_43_2_f_0((MR_String) "][ind%", Var_102);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactTableSize_7, &Var_105);
            Var_112 = mercury__string__f_43_43_2_f_0(Var_105, Var_104);
            Var_114 = mercury__string__f_43_43_2_f_0((MR_String) "[ind/", Var_112);
            Var_115 = mercury__string__f_43_43_2_f_0(FactTableName_1, Var_114);
            CondCode0_47 = mercury__string__f_43_43_2_f_0((MR_String) "strcmp(", Var_115);
          }
          else
          {
            MR_String Var_118;
            MR_String Var_120;
            MR_String Var_121;
            MR_String Var_128;
            MR_String Var_130;
            MR_String Var_131;
            MR_String Var_138;
            MR_String Var_140;
            MR_String Var_141;
            MR_String Var_148;
            MR_String Var_150;

            Var_118 = mercury__string__f_43_43_2_f_0(Name_43, (MR_String) "\n");
            Var_120 = mercury__string__f_43_43_2_f_0((MR_String) " != ", Var_118);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ArgNum_5, &Var_121);
            Var_128 = mercury__string__f_43_43_2_f_0(Var_121, Var_120);
            Var_130 = mercury__string__f_43_43_2_f_0((MR_String) "].V_", Var_128);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactTableSize_7, &Var_131);
            Var_138 = mercury__string__f_43_43_2_f_0(Var_131, Var_130);
            Var_140 = mercury__string__f_43_43_2_f_0((MR_String) "][ind%", Var_138);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactTableSize_7, &Var_141);
            Var_148 = mercury__string__f_43_43_2_f_0(Var_141, Var_140);
            Var_150 = mercury__string__f_43_43_2_f_0((MR_String) "[ind/", Var_148);
            CondCode0_47 = mercury__string__f_43_43_2_f_0(FactTableName_1, Var_150);
          }
          switch (STATE_VARIABLE_IsFirstInputArg_0_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              CondCode1_48 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t|| ", CondCode0_47);
              break;
            case (MR_Integer) 1:
              CondCode1_48 = CondCode0_47;
              break;
          }
          STATE_VARIABLE_IsFirstInputArg_75_75 = (MR_Integer) 0;
        }
        else
        {
          CondCode1_48 = (MR_String) "";
          STATE_VARIABLE_IsFirstInputArg_75_75 = STATE_VARIABLE_IsFirstInputArg_0_6;
        }
        Var_76 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
        ll_backend__fact_table__generate_test_condition_code_8_p_0(FactTableName_1, Var_79, Types_36, ModuleInfo_4, Var_76, STATE_VARIABLE_IsFirstInputArg_75_75, FactTableSize_7, &CondCode2_49);
        *HeadVar__8_8 = mercury__string__f_43_43_2_f_0(CondCode1_48, CondCode2_49);
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_cc_multi_code_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String StructName_2,
  MR_Integer ArgNum_3,
  MR_String STATE_VARIABLE_ProcCode_0_4,
  MR_String * STATE_VARIABLE_ProcCode_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcCode_5 = STATE_VARIABLE_ProcCode_0_4;
    else
    {
      MR_String VarName_12;
      MR_Word PragmaVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String NewProcCode_19;
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String STATE_VARIABLE_ProcCode_31_31;
      MR_Integer Var_32;
      MR_String Var_36;
      MR_String Var_43;
      MR_String Var_45;
      MR_String Var_46;
      MR_String Var_48;
      MR_String Var_49;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_ArgNum_3;
      MR_String next_value_of_STATE_VARIABLE_ProcCode_0_4;

      VarName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ArgNum_3, &Var_36);
      Var_43 = mercury__string__f_43_43_2_f_0(Var_36, (MR_String) ";\n");
      Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "[0][0].V_", Var_43);
      Var_46 = mercury__string__f_43_43_2_f_0(StructName_2, Var_45);
      Var_48 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_46);
      Var_49 = mercury__string__f_43_43_2_f_0(VarName_12, Var_48);
      NewProcCode_19 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_49);
      mercury__string__append_3_p_2(NewProcCode_19, STATE_VARIABLE_ProcCode_0_4, &STATE_VARIABLE_ProcCode_31_31);
      Var_32 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PragmaVars_15;
      next_value_of_ArgNum_3 = Var_32;
      next_value_of_STATE_VARIABLE_ProcCode_0_4 = STATE_VARIABLE_ProcCode_31_31;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      ArgNum_3 = next_value_of_ArgNum_3;
      STATE_VARIABLE_ProcCode_0_4 = next_value_of_STATE_VARIABLE_ProcCode_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_multidet_code_8_p_0(
  MR_String PredName_9,
  MR_Word PragmaVars_10,
  MR_Integer ProcID_11,
  MR_Word ArgTypes_12,
  MR_Word ModuleInfo_13,
  MR_Integer FactTableSize_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16)
{
  {
    MR_String ExtraCodeLabel_17;
    MR_String NumFactsVar_19;
    MR_Integer Arity_20;
    MR_String ArgDeclCode_21;
    MR_String OutputCode_23;
    MR_String FactLookupCode_27;
    MR_String Var_29;
    MR_String Var_75;
    MR_String Var_77;
    MR_String Var_78;
    MR_String Var_80;
    MR_String Var_81;
    MR_String Var_83;
    MR_String Var_84;
    MR_String Var_86;
    MR_String Var_87;
    MR_String Var_89;
    MR_String Var_90;
    MR_String Var_92;
    MR_String Var_93;
    MR_String Var_95;
    MR_String Var_96;
    MR_String Var_98;
    MR_String Var_99;
    MR_String Var_101;
    MR_String Var_102;
    MR_String Var_104;
    MR_String Var_105;
    MR_String Var_107;
    MR_String Var_108;
    MR_String Var_110;
    MR_String Var_111;
    MR_String Var_118;
    MR_String Var_120;
    MR_String Var_121;
    MR_String Var_123;
    MR_String Var_124;
    MR_String Var_126;
    MR_String Var_127;
    MR_String Var_129;
    MR_String Var_130;
    MR_String Var_132;
    MR_String Var_133;
    MR_String Var_135;
    MR_String Var_136;
    MR_String Var_138;
    MR_String Var_139;
    MR_String _InputCode_22;
    MR_String Var_24;
    MR_String Var_25;
    MR_Integer Var_26;

    ll_backend__fact_table__generate_nondet_proc_code_5_p_0(PragmaVars_10, PredName_9, ProcID_11, &ExtraCodeLabel_17, ProcCode_15);
    Var_29 = mercury__string__f_43_43_2_f_0(PredName_9, (MR_String) "_fact_table_num_facts");
    NumFactsVar_19 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_29);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), PragmaVars_10, &Arity_20);
    ll_backend__fact_table__generate_argument_vars_code_9_p_0(PragmaVars_10, ArgTypes_12, ModuleInfo_13, &ArgDeclCode_21, &_InputCode_22, &OutputCode_23, &Var_24, &Var_25, &Var_26);
    ll_backend__fact_table__generate_fact_lookup_code_7_p_0(PredName_9, PragmaVars_10, ArgTypes_12, ModuleInfo_13, (MR_Integer) 1, FactTableSize_14, &FactLookupCode_27);
    Var_75 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, (MR_String) "_module();\n}\n\n    ");
    Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void) {\n    ", Var_75);
    Var_78 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_77);
    Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void);\nvoid mercury_sys_init_", Var_78);
    Var_81 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_80);
    Var_83 = mercury__string__f_43_43_2_f_0((MR_String) "_module\n*/\nvoid mercury_sys_init_", Var_81);
    Var_84 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_83);
    Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "_module;\n\n/*\nINIT mercury_sys_init_", Var_84);
    Var_87 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_86);
    Var_89 = mercury__string__f_43_43_2_f_0((MR_String) "\n    }\n    MR_framevar(1)++;\n    MR_succeed();\nMR_END_MODULE\n\nextern MR_ModuleFunc ", Var_87);
    Var_90 = mercury__string__f_43_43_2_f_0(OutputCode_23, Var_89);
    Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* save output args to registers */\n", Var_90);
    Var_93 = mercury__string__f_43_43_2_f_0(FactLookupCode_27, Var_92);
    Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "\n        MR_Word ind = MR_framevar(1), tmp;\n        /* lookup fact table */\n", Var_93);
    Var_96 = mercury__string__f_43_43_2_f_0(ArgDeclCode_21, Var_95);
    Var_98 = mercury__string__f_43_43_2_f_0((MR_String) ") MR_fail();\n    {\n        /* declare argument vars */\n", Var_96);
    Var_99 = mercury__string__f_43_43_2_f_0(NumFactsVar_19, Var_98);
    Var_101 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n    if (MR_framevar(1) >= ", Var_99);
    Var_102 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_101);
    Var_104 = mercury__string__f_43_43_2_f_0((MR_String) "_i1));\nMR_define_label(", Var_102);
    Var_105 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_104);
    Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "_i1));\n    MR_framevar(1) = (MR_Integer) 0;\n    MR_GOTO(MR_LABEL(", Var_105);
    Var_108 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_107);
    Var_110 = mercury__string__f_43_43_2_f_0((MR_String) "\", 1, MR_LABEL(", Var_108);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), Arity_20, &Var_111);
    Var_118 = mercury__string__f_43_43_2_f_0(Var_111, Var_110);
    Var_120 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_118);
    Var_121 = mercury__string__f_43_43_2_f_0(PredName_9, Var_120);
    Var_123 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_mkframe(\"", Var_121);
    Var_124 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_123);
    Var_126 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\nMR_BEGIN_CODE\nMR_define_entry(", Var_124);
    Var_127 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_126);
    Var_129 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_init_label(", Var_127);
    Var_130 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_129);
    Var_132 = mercury__string__f_43_43_2_f_0((MR_String) "_module)\n    MR_init_entry(", Var_130);
    Var_133 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_132);
    Var_135 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n\nMR_BEGIN_MODULE(", Var_133);
    Var_136 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_135);
    Var_138 = mercury__string__f_43_43_2_f_0((MR_String) ");\nMR_declare_label(", Var_136);
    Var_139 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_138);
    *ExtraCode_16 = mercury__string__f_43_43_2_f_0((MR_String) "\n\nMR_define_extern_entry(", Var_139);
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_28;

    ll_backend__fact_table__IntroducedFrom__pred__generate_argument_vars_code__3067__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_28);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_28));
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_9_p_0(
  MR_Word PragmaVars_10,
  MR_Word Types_11,
  MR_Word ModuleInfo_12,
  MR_String * DeclCode_13,
  MR_String * InputCode_14,
  MR_String * OutputCode_15,
  MR_String * SaveRegsCode_16,
  MR_String * GetRegsCode_17,
  MR_Integer * NumInputArgs_18)
{
  {
    MR_Word Modes_24;
    MR_Word ArgInfos_25;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&ll_backend__fact_table_scalar_common_2[5]), PragmaVars_10, &Modes_24);
    hlds__arg_info__make_standard_arg_infos_5_p_0(Types_11, Modes_24, (MR_Integer) 2, ModuleInfo_12, &ArgInfos_25);
    ll_backend__fact_table__generate_argument_vars_code_2_11_p_0(PragmaVars_10, ArgInfos_25, Types_11, ModuleInfo_12, DeclCode_13, InputCode_14, OutputCode_15, SaveRegsCode_16, GetRegsCode_17, (MR_Integer) 1, NumInputArgs_18);
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_2_11_p_0(
  MR_Word PragmaVars0_12,
  MR_Word ArgInfos0_13,
  MR_Word Types0_14,
  MR_Word Module_15,
  MR_String * DeclCode_16,
  MR_String * InputCode_17,
  MR_String * OutputCode_18,
  MR_String * SaveRegsCode_19,
  MR_String * GetRegsCode_20,
  MR_Integer STATE_VARIABLE_NumInputArgs_0_42,
  MR_Integer * STATE_VARIABLE_NumInputArgs_43)
{
  {
    MR_bool succeeded = (PragmaVars0_12 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (ArgInfos0_13 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (Types0_14 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      *DeclCode_16 = (MR_String) "";
      *InputCode_17 = (MR_String) "";
      *OutputCode_18 = (MR_String) "";
      *SaveRegsCode_19 = (MR_String) "";
      *GetRegsCode_20 = (MR_String) "";
      *STATE_VARIABLE_NumInputArgs_43 = STATE_VARIABLE_NumInputArgs_0_42;
    }
    else
    {
      MR_String VarName_23;
      MR_Word PragmaVars_26;
      MR_Word Loc_27;
      MR_Word ArgMode_28;
      MR_Word ArgInfos_29;
      MR_Word Type_30;
      MR_Word Types_31;
      MR_Word Var_44;
      MR_Word Var_45;

      succeeded = (PragmaVars0_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaVars0_12, (MR_Integer) 0))));
        PragmaVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaVars0_12, (MR_Integer) 1))));
        VarName_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 1))));
        succeeded = (ArgInfos0_13 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInfos0_13, (MR_Integer) 0))));
          ArgInfos_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInfos0_13, (MR_Integer) 1))));
          Loc_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0))));
          ArgMode_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 1))) & (MR_Integer) 3);
          succeeded = (Types0_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Type_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Types0_14, (MR_Integer) 0))));
            Types_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Types0_14, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_String DeclCode0_32;
        MR_String InputCode0_33;
        MR_String SaveRegsCode0_34;
        MR_String GetRegsCode0_35;
        MR_String OutputCode0_36;
        MR_String DeclCode1_37;
        MR_String InputCode1_38;
        MR_String OutputCode1_39;
        MR_String SaveRegsCode1_40;
        MR_String GetRegsCode1_41;
        MR_Integer STATE_VARIABLE_NumInputArgs_46_46;
        MR_String C_Type_57;
        MR_String Var_65;
        MR_String Var_67;
        MR_String Var_68;

        C_Type_57 = backend_libs__foreign__exported_type_to_c_string_2_f_0(Module_15, Type_30);
        Var_65 = mercury__string__f_43_43_2_f_0(VarName_23, (MR_String) ";\n");
        Var_67 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_65);
        Var_68 = mercury__string__f_43_43_2_f_0(C_Type_57, Var_67);
        DeclCode0_32 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_68);
        succeeded = (ArgMode_28 == (MR_Integer) 0);
        if (succeeded)
        {
          STATE_VARIABLE_NumInputArgs_46_46 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumInputArgs_0_42 + (MR_Unsigned) 1);
          ll_backend__fact_table__generate_arg_input_code_7_p_0(VarName_23, Type_30, Loc_27, STATE_VARIABLE_NumInputArgs_46_46, &InputCode0_33, &SaveRegsCode0_34, &GetRegsCode0_35);
          OutputCode0_36 = (MR_String) "";
        }
        else
        {
          succeeded = (ArgMode_28 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word RegType_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Loc_27, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Integer RegNum_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Loc_27, (MR_Integer) 1))));
            MR_String RegName_76;
            MR_String Converted_77;
            MR_String Var_85;
            MR_String Var_87;
            MR_String Var_88;

            RegName_76 = ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(RegType_74, RegNum_75);
            backend_libs__export__convert_type_to_mercury_4_p_0(VarName_23, Type_30, Loc_27, &Converted_77);
            Var_85 = mercury__string__f_43_43_2_f_0(Converted_77, (MR_String) ";\n");
            Var_87 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_85);
            Var_88 = mercury__string__f_43_43_2_f_0(RegName_76, Var_87);
            OutputCode0_36 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_88);
            InputCode0_33 = (MR_String) "";
            SaveRegsCode0_34 = (MR_String) "";
            GetRegsCode0_35 = (MR_String) "";
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.generate_argument_vars_code_2\'/11", (MR_String) "invalid mode");
              return;
            }
          STATE_VARIABLE_NumInputArgs_46_46 = STATE_VARIABLE_NumInputArgs_0_42;
        }
        ll_backend__fact_table__generate_argument_vars_code_2_11_p_0(PragmaVars_26, ArgInfos_29, Types_31, Module_15, &DeclCode1_37, &InputCode1_38, &OutputCode1_39, &SaveRegsCode1_40, &GetRegsCode1_41, STATE_VARIABLE_NumInputArgs_46_46, STATE_VARIABLE_NumInputArgs_43);
        *DeclCode_16 = mercury__string__f_43_43_2_f_0(DeclCode0_32, DeclCode1_37);
        *InputCode_17 = mercury__string__f_43_43_2_f_0(InputCode0_33, InputCode1_38);
        *OutputCode_18 = mercury__string__f_43_43_2_f_0(OutputCode0_36, OutputCode1_39);
        *SaveRegsCode_19 = mercury__string__f_43_43_2_f_0(SaveRegsCode0_34, SaveRegsCode1_40);
        *GetRegsCode_20 = mercury__string__f_43_43_2_f_0(GetRegsCode0_35, GetRegsCode1_41);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.generate_argument_vars_code_2\'/11", (MR_String) "list length mismatch");
          return;
        }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_arg_input_code_7_p_0(
  MR_String Name_8,
  MR_Word Type_9,
  MR_Word ArgLoc_10,
  MR_Integer FrameVarNum_11,
  MR_String * InputCode_12,
  MR_String * SaveRegCode_13,
  MR_String * GetRegCode_14)
{
  {
    MR_Word RegType_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgLoc_10, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Integer RegNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgLoc_10, (MR_Integer) 1))));
    MR_String ConvertToFrameVar_17;
    MR_String ConvertFromFrameVar_18;
    MR_String RegName_19;
    MR_String Converted_20;
    MR_String Var_44;
    MR_String Var_46;
    MR_String Var_47;
    MR_String Var_50;
    MR_String Var_52;
    MR_String Var_53;
    MR_String Var_55;
    MR_String Var_56;
    MR_String Var_63;
    MR_String Var_66;
    MR_String Var_73;
    MR_String Var_75;
    MR_String Var_76;
    MR_String Var_78;
    MR_String Var_79;

    switch (RegType_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          ConvertToFrameVar_17 = (MR_String) "MR_float_to_word";
          ConvertFromFrameVar_18 = (MR_String) "MR_word_to_float";
        }
        break;
      case (MR_Integer) 0:
        {
          ConvertToFrameVar_17 = (MR_String) "";
          ConvertFromFrameVar_18 = (MR_String) "";
        }
        break;
    }
    RegName_19 = ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(RegType_15, RegNum_16);
    backend_libs__export__convert_type_from_mercury_4_p_0(ArgLoc_10, RegName_19, Type_9, &Converted_20);
    Var_44 = mercury__string__f_43_43_2_f_0(Converted_20, (MR_String) ";\n");
    Var_46 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_44);
    Var_47 = mercury__string__f_43_43_2_f_0(Name_8, Var_46);
    *InputCode_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_47);
    Var_50 = mercury__string__f_43_43_2_f_0(RegName_19, (MR_String) ");\n");
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_50);
    Var_53 = mercury__string__f_43_43_2_f_0(ConvertToFrameVar_17, Var_52);
    Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ") = ", Var_53);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FrameVarNum_11, &Var_56);
    Var_63 = mercury__string__f_43_43_2_f_0(Var_56, Var_55);
    *SaveRegCode_13 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_framevar(", Var_63);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FrameVarNum_11, &Var_66);
    Var_73 = mercury__string__f_43_43_2_f_0(Var_66, (MR_String) "));\n");
    Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_framevar(", Var_73);
    Var_76 = mercury__string__f_43_43_2_f_0(ConvertFromFrameVar_18, Var_75);
    Var_78 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_76);
    Var_79 = mercury__string__f_43_43_2_f_0(RegName_19, Var_78);
    *GetRegCode_14 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_79);
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_fact_lookup_code_7_p_0(
  MR_String PredName_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word ModuleInfo_4,
  MR_Integer ArgNum_5,
  MR_Integer FactTableSize_6,
  MR_String * HeadVar__7_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__7_7 = (MR_String) "";
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.generate_fact_lookup_code\'/7", (MR_String) "too many types");
          return;
        }
    else
    {
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.generate_fact_lookup_code\'/7", (MR_String) "too many pragma vars");
          return;
        }
      else
      {
        MR_String VarName_32 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_86, (MR_Integer) 1))));
        MR_Word Mode_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_86, (MR_Integer) 2))));
        MR_Word Type_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Types_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Integer NextArgNum_42 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);

        succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(ModuleInfo_4, Mode_33);
        if (succeeded)
        {
          MR_String TableEntry_44;
          MR_String C_Code0_48;
          MR_String C_Code1_49;
          MR_String Var_87;
          MR_String Var_95;
          MR_String Var_96;
          MR_String Var_103;
          MR_String Var_105;
          MR_String Var_106;
          MR_String Var_113;
          MR_String Var_115;
          MR_String Var_116;
          MR_Word Var_61;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ArgNum_5, &Var_87);
          Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "].V_", Var_87);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactTableSize_6, &Var_96);
          Var_103 = mercury__string__f_43_43_2_f_0(Var_96, Var_95);
          Var_105 = mercury__string__f_43_43_2_f_0((MR_String) "][ind%", Var_103);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactTableSize_6, &Var_106);
          Var_113 = mercury__string__f_43_43_2_f_0(Var_106, Var_105);
          Var_115 = mercury__string__f_43_43_2_f_0((MR_String) "_fact_table[ind/", Var_113);
          Var_116 = mercury__string__f_43_43_2_f_0(PredName_1, Var_115);
          TableEntry_44 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_116);
          succeeded = ((MR_tag((MR_Word) Type_36)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_36, (MR_Integer) 0))));
            succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 4U));
          }
          if (succeeded)
          {
            MR_Word FinalInst_46;
            MR_Word Var_45;

            check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_4, Mode_33, &Var_45, &FinalInst_46);
            succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_4, FinalInst_46);
            if (succeeded)
            {
              MR_String Var_119;
              MR_String Var_121;
              MR_String Var_122;

              Var_119 = mercury__string__f_43_43_2_f_0(TableEntry_44, (MR_String) ");\n");
              Var_121 = mercury__string__f_43_43_2_f_0((MR_String) ", (MR_String) (MR_Word) ", Var_119);
              Var_122 = mercury__string__f_43_43_2_f_0(VarName_32, Var_121);
              C_Code0_48 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_make_aligned_string(", Var_122);
            }
            else
            {
              MR_String Var_125;
              MR_String Var_127;
              MR_String Var_128;
              MR_String Var_130;
              MR_String Var_131;
              MR_String Var_133;
              MR_String Var_134;

              Var_125 = mercury__string__f_43_43_2_f_0(TableEntry_44, (MR_String) ");\n                    ");
              Var_127 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_125);
              Var_128 = mercury__string__f_43_43_2_f_0(VarName_32, Var_127);
              Var_130 = mercury__string__f_43_43_2_f_0((MR_String) " = (MR_String) tmp;\n                            strcpy(", Var_128);
              Var_131 = mercury__string__f_43_43_2_f_0(VarName_32, Var_130);
              Var_133 = mercury__string__f_43_43_2_f_0((MR_String) ") + sizeof(MR_Word))\n                                    / sizeof(MR_Word));\n                            ", Var_131);
              Var_134 = mercury__string__f_43_43_2_f_0(TableEntry_44, Var_133);
              C_Code0_48 = mercury__string__f_43_43_2_f_0((MR_String) "       MR_incr_hp_atomic(tmp,\n                                (strlen(", Var_134);
            }
          }
          else
          {
            MR_String Var_137;
            MR_String Var_139;
            MR_String Var_140;

            Var_137 = mercury__string__f_43_43_2_f_0(TableEntry_44, (MR_String) ";\n");
            Var_139 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_137);
            Var_140 = mercury__string__f_43_43_2_f_0(VarName_32, Var_139);
            C_Code0_48 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_140);
          }
          ll_backend__fact_table__generate_fact_lookup_code_7_p_0(PredName_1, Var_85, Types_37, ModuleInfo_4, NextArgNum_42, FactTableSize_6, &C_Code1_49);
          mercury__string__append_3_p_2(C_Code0_48, C_Code1_49, HeadVar__7_7);
        }
        else
        {
          MR_Word next_value_of_HeadVar__2_2 = Var_85;
          MR_Word next_value_of_HeadVar__3_3 = Types_37;
          MR_Integer next_value_of_ArgNum_5 = NextArgNum_42;

          // direct tailcall eliminated
          ;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          ArgNum_5 = next_value_of_ArgNum_5;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_nondet_proc_code_5_p_0(
  MR_Word PragmaVars_6,
  MR_String PredName_7,
  MR_Integer ProcID_8,
  MR_String * ExtraCodeLabel_9,
  MR_String * ProcCode_10)
{
  {
    MR_Integer Arity_12;
    MR_Integer ProcInt_13;
    MR_String NamesString_14;
    MR_String Var_32;
    MR_String Var_39;
    MR_String Var_41;
    MR_String Var_42;
    MR_String Var_49;
    MR_String Var_51;
    MR_String Var_52;
    MR_String Var_55;
    MR_String Var_57;
    MR_String Var_58;
    MR_String Var_60;
    MR_String Var_61;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), PragmaVars_6, &Arity_12);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcID_8, &ProcInt_13);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcInt_13, &Var_32);
    Var_39 = mercury__string__f_43_43_2_f_0(Var_32, (MR_String) "_xx");
    Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_39);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), Arity_12, &Var_42);
    Var_49 = mercury__string__f_43_43_2_f_0(Var_42, Var_41);
    Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_49);
    Var_52 = mercury__string__f_43_43_2_f_0(PredName_7, Var_51);
    *ExtraCodeLabel_9 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_52);
    ll_backend__fact_table__pragma_vars_to_names_string_2_p_0(PragmaVars_6, &NamesString_14);
    Var_55 = mercury__string__f_43_43_2_f_0(*ExtraCodeLabel_9, (MR_String) "));\n    }\n    ");
    Var_57 = mercury__string__f_43_43_2_f_0((MR_String) ");\n        MR_GOTO(MR_ENTRY(", Var_55);
    Var_58 = mercury__string__f_43_43_2_f_0(*ExtraCodeLabel_9, Var_57);
    Var_60 = mercury__string__f_43_43_2_f_0((MR_String) " to stop the compiler giving a warning.\n    **\n    ** Pop off the nondet stack frame that the pragma c_code generates\n    ** then jump to the code where the wor" "k is actually done.\n    */\n\n    MR_maxfr_word = MR_prevfr_slot_word(MR_curfr);\n    MR_curfr_word = MR_succfr_slot_word(MR_curfr);\n    {\n        MR_declare_entry" "(", Var_58);
    Var_61 = mercury__string__f_43_43_2_f_0(NamesString_14, Var_60);
    *ProcCode_10 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n    /*\n    ** Mention arguments ", Var_61);
  }
}

static void MR_CALL 
ll_backend__fact_table__pragma_vars_to_names_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_String) "";
  else
  {
    MR_String Name_4;
    MR_Word PVars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_String NamesString0_9;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_14;

    Name_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
    ll_backend__fact_table__pragma_vars_to_names_string_2_p_0(PVars_7, &NamesString0_9);
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (NamesString0_9));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) ((MR_String) ", "));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Name_4));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
    }
    mercury__string__append_list_2_p_0(Var_11, HeadVar__2_2);
  }
}

void MR_CALL 
ll_backend__fact_table__fact_table_compile_facts_11_p_0(
  MR_Word PredName_12,
  MR_Integer Arity_13,
  MR_String FileName_14,
  MR_Word STATE_VARIABLE_PredInfo_0_28,
  MR_Word * STATE_VARIABLE_PredInfo_29,
  MR_Word Context_16,
  MR_Word ModuleInfo_17,
  MR_String * C_HeaderCode_18,
  MR_Integer * PrimaryProcID_19)
{
  {
    MR_Word Globals_21;
    MR_Word SeeResult_22;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_17, &Globals_21);
    mercury__io__see_4_p_0(FileName_14, &SeeResult_22);
    if ((SeeResult_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ModuleName_23;
      MR_String OutputFileName_24;
      MR_Word OpenResult_25;

      hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_17, &ModuleName_23);
      parse_tree__file_names__fact_table_file_name_8_p_0(Globals_21, ModuleName_23, FileName_14, (MR_String) ".c", (MR_Integer) 0, &OutputFileName_24);
      mercury__io__open_output_4_p_0(OutputFileName_24, &OpenResult_25);
      if (((MR_tag((MR_Word) OpenResult_25)) == (MR_Integer) 1))
      {
        MR_Word Error_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_25, (MR_Integer) 0))));
        MR_Word Var_40;

        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Context_16));
        }
        ll_backend__fact_table__print_file_open_error_7_p_0(Globals_21, Var_40, FileName_14, (MR_String) "output", Error_27);
        *C_HeaderCode_18 = (MR_String) "";
        *PrimaryProcID_19 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        *STATE_VARIABLE_PredInfo_29 = STATE_VARIABLE_PredInfo_0_28;
      }
      else
      {
        MR_Word OutputStream_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_25, (MR_Integer) 0))));

        ll_backend__fact_table__fact_table_compile_facts_2_13_p_0(PredName_12, Arity_13, FileName_14, STATE_VARIABLE_PredInfo_0_28, STATE_VARIABLE_PredInfo_29, Context_16, ModuleInfo_17, C_HeaderCode_18, PrimaryProcID_19, OutputFileName_24, OutputStream_26);
      }
    }
    else
    {
      MR_Word Var_33;
      MR_Word Error_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SeeResult_22, (MR_Integer) 0))));
      MR_String ErrorMsg_54;
      MR_String Msg_55;
      MR_Word Pieces_56;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_71;
      MR_String Var_77;

      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Context_16));
      }
      mercury__io__error_message_2_p_0(Error_45, &ErrorMsg_54);
      Var_77 = mercury__string__f_43_43_2_f_0(FileName_14, (MR_String) "\' for input:");
      Msg_55 = mercury__string__f_43_43_2_f_0((MR_String) "Error opening file \140", Var_77);
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (Msg_55));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (ErrorMsg_54));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[18])));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
      }
      {
        Pieces_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_56, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), Pieces_56, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (Pieces_56));
      }
      ll_backend__fact_table__print_error_report_4_p_0(Globals_21, Var_71);
      *C_HeaderCode_18 = (MR_String) "";
      *PrimaryProcID_19 = hlds__hlds_pred__invalid_proc_id_0_f_0();
      *STATE_VARIABLE_PredInfo_29 = STATE_VARIABLE_PredInfo_0_28;
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__fact_table_compile_facts_2_13_p_0(
  MR_Word PredName_14,
  MR_Integer Arity_15,
  MR_String FileName_16,
  MR_Word STATE_VARIABLE_PredInfo_0_62,
  MR_Word * STATE_VARIABLE_PredInfo_63,
  MR_Word Context_18,
  MR_Word ModuleInfo_19,
  MR_String * C_HeaderCode_20,
  MR_Integer * PrimaryProcID_21,
  MR_String OutputFileName_22,
  MR_Word OutputStream_23)
{
  {
    MR_Word Types_25;
    MR_Word FactArgInfos0_26;
    MR_Word CheckProcs_27;
    MR_Word ExistsAllInMode_28;
    MR_Word WriteHashTables_29;
    MR_Word WriteDataTable_30;
    MR_Word FactArgInfos_31;
    MR_Word Pass1Errors_32;
    MR_String C_HeaderCode0_33;
    MR_String StructName_34;
    MR_Word Pass1HeaderErrors_35;
    MR_Word Globals_36;
    MR_Word WriteDataAfterSorting_40;
    MR_String DataFileName_53;
    MR_Word STATE_VARIABLE_PredInfo_66_66;

    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_PredInfo_0_62, &Types_25);
    ll_backend__fact_table__init_fact_arg_infos_2_p_0(Types_25, &FactArgInfos0_26);
    ll_backend__fact_table__infer_determinism_pass_1_12_p_0(STATE_VARIABLE_PredInfo_0_62, &STATE_VARIABLE_PredInfo_66_66, Context_18, ModuleInfo_19, &CheckProcs_27, &ExistsAllInMode_28, &WriteHashTables_29, &WriteDataTable_30, FactArgInfos0_26, &FactArgInfos_31, (MR_Word) ((MR_Unsigned) 0U), &Pass1Errors_32);
    ll_backend__fact_table__create_fact_table_header_7_p_0(PredName_14, STATE_VARIABLE_PredInfo_66_66, FactArgInfos_31, &C_HeaderCode0_33, &StructName_34, Pass1Errors_32, &Pass1HeaderErrors_35);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_19, &Globals_36);
    if ((Pass1HeaderErrors_35 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ProcStreams_37;
      MR_Word OpenErrors_38;
      MR_Word MaybeOutput_39;
      MR_Integer NumFacts_43;
      MR_Word CompileErrors_44;
      MR_String C_HeaderCode2_47;
      MR_Word ProcFiles_48;
      MR_Word OpenCompileErrors_49;
      MR_String Var_69;

      Var_69 = ll_backend__fact_table__fact_table_file_header_1_f_0(FileName_16);
      mercury__io__write_string_4_p_0(OutputStream_23, Var_69);
      mercury__io__write_string_4_p_0(OutputStream_23, C_HeaderCode0_33);
      ll_backend__fact_table__open_sort_files_6_p_0(CheckProcs_27, &ProcStreams_37, (MR_Word) ((MR_Unsigned) 0U), &OpenErrors_38);
      switch (WriteDataTable_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MaybeOutput_39 = (MR_Word) ((MR_Unsigned) 0U);
            WriteDataAfterSorting_40 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          if ((CheckProcs_27 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_74;

            {
              Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (OutputStream_23));
              MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (StructName_34));
            }
            {
              MaybeOutput_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeOutput_39, 0) = ((MR_Box) (Var_74));
            }
            ll_backend__fact_table__write_new_data_array_5_p_0(OutputStream_23, StructName_34, (MR_Integer) 0);
            WriteDataAfterSorting_40 = (MR_Integer) 0;
          }
          else
          {
            MaybeOutput_39 = (MR_Word) ((MR_Unsigned) 0U);
            WriteDataAfterSorting_40 = (MR_Integer) 1;
          }
          break;
      }
      ll_backend__fact_table__compile_facts_13_p_0(PredName_14, Arity_15, STATE_VARIABLE_PredInfo_66_66, ModuleInfo_19, FactArgInfos_31, ProcStreams_37, MaybeOutput_39, (MR_Integer) 0, &NumFacts_43, (MR_Word) ((MR_Unsigned) 0U), &CompileErrors_44);
      mercury__io__seen_2_p_0();
      if ((MaybeOutput_39 == (MR_Word) ((MR_Unsigned) 0U)))
        C_HeaderCode2_47 = (MR_String) "";
      else
      {
        MR_Integer FactTableSize_46;

        ll_backend__fact_table__write_closing_brace_3_p_0(OutputStream_23);
        ll_backend__fact_table__fact_table_size_2_p_0(Globals_36, &FactTableSize_46);
        ll_backend__fact_table__write_fact_table_pointer_array_7_p_0(NumFacts_43, FactTableSize_46, StructName_34, OutputStream_23, &C_HeaderCode2_47);
      }
      ll_backend__fact_table__close_sort_files_4_p_0(ProcStreams_37, &ProcFiles_48);
      OpenCompileErrors_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__fact_table_scalar_common_2[0]), OpenErrors_38, CompileErrors_44);
      if ((OpenCompileErrors_49 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ProcTable0_50;
        MR_Word ProcTable_51;
        MR_Word DataFileNameResult_52;

        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_66_66, &ProcTable0_50);
        ll_backend__fact_table__infer_determinism_pass_2_7_p_0(ProcFiles_48, Globals_36, ExistsAllInMode_28, ProcTable0_50, &ProcTable_51);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_51, STATE_VARIABLE_PredInfo_66_66, STATE_VARIABLE_PredInfo_63);
        mercury__io__make_temp_file_3_p_0(&DataFileNameResult_52);
        if (((MR_tag((MR_Word) DataFileNameResult_52)) == (MR_Integer) 1))
        {
          MR_Word Error_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DataFileNameResult_52, (MR_Integer) 0))));
          MR_Word ErrorReport_57;
          MR_Word Var_89;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_String Var_94;

          Var_94 = mercury__io__error_message_1_f_0(Error_56);
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (Var_94));
          }
          {
            Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
            MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[18])));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[89])));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_92));
          }
          {
            ErrorReport_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ErrorReport_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), ErrorReport_57, 1) = ((MR_Box) (Var_89));
          }
          ll_backend__fact_table__print_error_report_4_p_0(Globals_36, ErrorReport_57);
          *C_HeaderCode_20 = C_HeaderCode0_33;
          *PrimaryProcID_21 = hlds__hlds_pred__invalid_proc_id_0_f_0();
          DataFileName_53 = (MR_String) "";
        }
        else
        {
          MR_String C_HeaderCode1_54;
          MR_String C_HeaderCode3_55;
          MR_Word Var_101;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_104;

          DataFileName_53 = ((MR_String) ((MR_hl_field(MR_mktag(0), DataFileNameResult_52, (MR_Integer) 0))));
          ll_backend__fact_table__write_fact_table_arrays_14_p_0(ProcFiles_48, DataFileName_53, StructName_34, ProcTable_51, ModuleInfo_19, NumFacts_43, FactArgInfos_31, WriteHashTables_29, WriteDataAfterSorting_40, OutputStream_23, &C_HeaderCode1_54, PrimaryProcID_21);
          ll_backend__fact_table__write_fact_table_numfacts_6_p_0(OutputStream_23, PredName_14, NumFacts_43, &C_HeaderCode3_55);
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (C_HeaderCode3_55));
            MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (C_HeaderCode2_47));
            MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_104));
          }
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (C_HeaderCode1_54));
            MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_103));
          }
          {
            Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (C_HeaderCode0_33));
            MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_102));
          }
          mercury__string__append_list_2_p_0(Var_101, C_HeaderCode_20);
        }
      }
      else
      {
        ll_backend__fact_table__print_error_reports_4_p_0(Globals_36, OpenCompileErrors_49);
        *C_HeaderCode_20 = C_HeaderCode0_33;
        *PrimaryProcID_21 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        DataFileName_53 = (MR_String) "";
        *STATE_VARIABLE_PredInfo_63 = STATE_VARIABLE_PredInfo_66_66;
      }
    }
    else
    {
      ll_backend__fact_table__print_error_reports_4_p_0(Globals_36, Pass1HeaderErrors_35);
      *C_HeaderCode_20 = C_HeaderCode0_33;
      *PrimaryProcID_21 = hlds__hlds_pred__invalid_proc_id_0_f_0();
      WriteDataAfterSorting_40 = (MR_Integer) 0;
      DataFileName_53 = (MR_String) "";
      *STATE_VARIABLE_PredInfo_63 = STATE_VARIABLE_PredInfo_66_66;
    }
    mercury__io__close_output_3_p_0(OutputStream_23);
    ll_backend__fact_table__maybe_append_data_table_6_p_0(Globals_36, WriteDataAfterSorting_40, OutputFileName_22, DataFileName_53);
  }
}

static void MR_CALL 
ll_backend__fact_table__print_error_reports_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__fact_table__print_error_report_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__fact_table__print_error_reports_4_p_0(
  MR_Word Globals_5,
  MR_Word RevErrors_6)
{
  {
    MR_Word Errors_8;
    MR_Word Var_11;
    MR_Box conv0_STATE_VARIABLE_IO_10;

    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_2[0]), RevErrors_6, &Errors_8);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&ll_backend__fact_table_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (ll_backend__fact_table__print_error_reports_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Globals_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__fact_table_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_11, Errors_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_10);
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_table_numfacts_6_p_0(
  MR_Word OutputStream_7,
  MR_Word PredName_8,
  MR_Integer NumFacts_9,
  MR_String * C_HeaderCode_10)
{
  {
    MR_Word OldOutputStream_12;
    MR_String Identifier_13;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_String Var_29;
    MR_Word Var_14;

    mercury__io__set_output_stream_4_p_0(OutputStream_7, &OldOutputStream_12);
    Identifier_13 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(PredName_8);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Identifier_13));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[88])));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) ((MR_String) "const MR_Integer mercury__"));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    mercury__io__write_strings_3_p_0(Var_18);
    mercury__io__write_int_3_p_0(NumFacts_9);
    mercury__io__write_string_3_p_0((MR_String) ";\n\n");
    Var_29 = mercury__string__f_43_43_2_f_0(Identifier_13, (MR_String) "_fact_table_num_facts;\n");
    *C_HeaderCode_10 = mercury__string__f_43_43_2_f_0((MR_String) "extern const MR_Integer mercury__", Var_29);
    mercury__io__set_output_stream_4_p_0(OldOutputStream_12, &Var_14);
  }
}

static void MR_CALL 
ll_backend__fact_table__maybe_append_data_table_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String OutputFileName_3,
  MR_String DataFileName_4)
{
  {
    MR_bool succeeded;

    switch (HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Command_17;
          MR_Word Verbose_18;
          MR_Word Result_19;
          MR_String Var_26;
          MR_String Var_68;
          MR_String Var_69;

          Var_68 = mercury__string__f_43_43_2_f_0((MR_String) " >>", OutputFileName_3);
          Var_69 = mercury__string__f_43_43_2_f_0(DataFileName_4, Var_68);
          Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "cat ", Var_69);
          parse_tree__module_cmds__make_command_string_3_p_0(Var_26, (MR_Integer) 0, &Command_17);
          libs__globals__lookup_bool_option_3_p_0(HeadVar__1_1, (MR_Integer) 65, &Verbose_18);
          libs__file_util__maybe_write_string_4_p_0(Verbose_18, (MR_String) "% Invoking system command \140");
          libs__file_util__maybe_write_string_4_p_0(Verbose_18, Command_17);
          libs__file_util__maybe_write_string_4_p_0(Verbose_18, (MR_String) ", ...");
          mercury__io__call_system_4_p_0(Command_17, &Result_19);
          libs__file_util__maybe_write_string_4_p_0(Verbose_18, (MR_String) "done.\n");
          if (((MR_tag((MR_Word) Result_19)) == (MR_Integer) 1))
          {
            MR_Word ErrorCode_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_19, (MR_Integer) 0))));

            ll_backend__fact_table__write_call_system_error_msg_5_p_0(HeadVar__1_1, (MR_String) "cat", ErrorCode_23);
          }
          else
          {
            MR_Integer ExitStatus_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Result_19, (MR_Integer) 0))));

            succeeded = (ExitStatus_20 == (MR_Integer) 0);
            if (!(succeeded))
              parse_tree__error_util__write_error_spec_ignore_4_p_0(HeadVar__1_1, (MR_Word) (&ll_backend__fact_table_scalar_common_5[1]));
          }
          ll_backend__fact_table__delete_temporary_file_4_p_0(HeadVar__1_1, DataFileName_4);
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_table_arrays_14_p_0(
  MR_Word ProcFiles0_15,
  MR_String DataFileName_16,
  MR_String StructName_17,
  MR_Word ProcTable_18,
  MR_Word ModuleInfo_19,
  MR_Integer NumFacts_20,
  MR_Word FactArgInfos_21,
  MR_Word WriteHashTables_22,
  MR_Word WriteDataTable_23,
  MR_Word OutputStream_24,
  MR_String * C_HeaderCode_25,
  MR_Integer * PrimaryProcID_26)
{
  if ((ProcFiles0_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *C_HeaderCode_25 = (MR_String) "";
    *PrimaryProcID_26 = hlds__hlds_pred__initial_proc_id_0_f_0();
  }
  else
  {
    MR_String FileName_28;
    MR_Word ProcFiles1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcFiles0_15, (MR_Integer) 1))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcFiles0_15, (MR_Integer) 0))));

    *PrimaryProcID_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
    FileName_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1))));
    switch (WriteHashTables_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *C_HeaderCode_25 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_Word CreateFactMap_32;
          MR_Word Result0_33;
          MR_Word FactMap_34;
          MR_String C_HeaderCode0_35;

          if ((ProcFiles1_29 == (MR_Word) ((MR_Unsigned) 0U)))
            CreateFactMap_32 = (MR_Integer) 0;
          else
            CreateFactMap_32 = (MR_Integer) 1;
          ll_backend__fact_table__write_primary_hash_table_16_p_0(*PrimaryProcID_26, FileName_28, DataFileName_16, StructName_17, ProcTable_18, ModuleInfo_19, OutputStream_24, FactArgInfos_21, WriteDataTable_23, NumFacts_20, CreateFactMap_32, &Result0_33, &FactMap_34, &C_HeaderCode0_35);
          switch (Result0_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *C_HeaderCode_25 = C_HeaderCode0_35;
              break;
            case (MR_Integer) 0:
              {
                MR_String C_HeaderCode1_36;

                ll_backend__fact_table__write_secondary_hash_tables_11_p_0(ProcFiles1_29, StructName_17, ProcTable_18, ModuleInfo_19, OutputStream_24, FactMap_34, FactArgInfos_21, (MR_String) "", &C_HeaderCode1_36);
                *C_HeaderCode_25 = mercury__string__f_43_43_2_f_0(C_HeaderCode0_35, C_HeaderCode1_36);
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_secondary_hash_tables_11_p_0(
  MR_Word HeadVar__1_1,
  MR_String StructName_2,
  MR_Word ProcTable_3,
  MR_Word ModuleInfo_4,
  MR_Word OutputStream_5,
  MR_Word FactMap_6,
  MR_Word FactArgInfos_7,
  MR_String STATE_VARIABLE_C_HeaderCode_0_8,
  MR_String * STATE_VARIABLE_C_HeaderCode_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_C_HeaderCode_9 = STATE_VARIABLE_C_HeaderCode_0_8;
    else
    {
      MR_Integer ProcID_24;
      MR_String FileName_25;
      MR_Word ProcFiles_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Globals_35;
      MR_Word SeeResult_36;
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      ProcID_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0))));
      FileName_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 1))));
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_35);
      mercury__io__see_4_p_0(FileName_25, &SeeResult_36);
      if ((SeeResult_36 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer ProcInt_37;
        MR_String HashTableName_38;
        MR_String New_C_HeaderCode_39;
        MR_Word ProcInfo_40;
        MR_Word ArgModes_41;
        MR_Word MaybeFirstFact_42;
        MR_String STATE_VARIABLE_C_HeaderCode_65_65;
        MR_String Var_82;
        MR_String Var_89;
        MR_String Var_91;
        MR_String Var_93;
        MR_Box conv0_ProcInfo_40;

        hlds__hlds_pred__proc_id_to_int_2_p_0(ProcID_24, &ProcInt_37);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcInt_37, &Var_82);
        Var_89 = mercury__string__f_43_43_2_f_0(Var_82, (MR_String) "_");
        Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "_hash_table_", Var_89);
        HashTableName_38 = mercury__string__f_43_43_2_f_0(StructName_2, Var_91);
        Var_93 = mercury__string__f_43_43_2_f_0(HashTableName_38, (MR_String) "0;\n");
        New_C_HeaderCode_39 = mercury__string__f_43_43_2_f_0((MR_String) "extern struct MR_fact_table_hash_table_i ", Var_93);
        mercury__string__append_3_p_2(New_C_HeaderCode_39, STATE_VARIABLE_C_HeaderCode_0_8, &STATE_VARIABLE_C_HeaderCode_65_65);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_3, ((MR_Box) (ProcID_24)), &conv0_ProcInfo_40);
        ProcInfo_40 = ((MR_Word) (conv0_ProcInfo_40));
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_40, &ArgModes_41);
        ll_backend__fact_table__read_sort_file_line_6_p_0(FactArgInfos_7, ArgModes_41, ModuleInfo_4, &MaybeFirstFact_42);
        if ((MaybeFirstFact_42 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__io__seen_2_p_0();
          *STATE_VARIABLE_C_HeaderCode_9 = STATE_VARIABLE_C_HeaderCode_65_65;
        }
        else
        {
          MR_Word FirstFact_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFirstFact_42, (MR_Integer) 0))));
          MR_Word Var_44;
          MR_Word next_value_of_HeadVar__1_1;
          MR_String next_value_of_STATE_VARIABLE_C_HeaderCode_0_8;

          ll_backend__fact_table__build_hash_table_17_p_0((MR_Integer) 0, (MR_Integer) 0, HashTableName_38, StructName_2, (MR_Integer) 0, ArgModes_41, ModuleInfo_4, FactArgInfos_7, (MR_Integer) 0, OutputStream_5, FirstFact_43, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, FactMap_6, &Var_44);
          mercury__io__seen_2_p_0();
          ll_backend__fact_table__delete_temporary_file_4_p_0(Globals_35, FileName_25);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = ProcFiles_26;
          next_value_of_STATE_VARIABLE_C_HeaderCode_0_8 = STATE_VARIABLE_C_HeaderCode_65_65;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_C_HeaderCode_0_8 = next_value_of_STATE_VARIABLE_C_HeaderCode_0_8;
          continue;
        }
      }
      else
      {
        MR_Word Error_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SeeResult_36, (MR_Integer) 0))));

        ll_backend__fact_table__print_file_open_error_7_p_0(Globals_35, (MR_Word) ((MR_Unsigned) 0U), FileName_25, (MR_String) "input", Error_45);
        *STATE_VARIABLE_C_HeaderCode_9 = STATE_VARIABLE_C_HeaderCode_0_8;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__write_primary_hash_table_16_p_0(
  MR_Integer ProcID_17,
  MR_String FileName_18,
  MR_String DataFileName_19,
  MR_String StructName_20,
  MR_Word ProcTable_21,
  MR_Word ModuleInfo_22,
  MR_Word OutputStream_23,
  MR_Word FactArgInfos_24,
  MR_Word WriteDataTable_25,
  MR_Integer NumFacts_26,
  MR_Word CreateFactMap_27,
  MR_Word * Result_28,
  MR_Word * FactMap_29,
  MR_String * C_HeaderCode_30)
{
  {
    MR_Word FactMap0_32;
    MR_Word Globals_33;
    MR_Word SeeResult_34;

    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &FactMap0_32);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_22, &Globals_33);
    mercury__io__see_4_p_0(FileName_18, &SeeResult_34);
    if ((SeeResult_34 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      switch (WriteDataTable_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Result_28 = (MR_Integer) 1;
            *FactMap_29 = FactMap0_32;
            *C_HeaderCode_30 = (MR_String) "";
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OpenResult_35;
            MR_Word MaybeDataStream_103;
            MR_String C_HeaderCode0_104;

            mercury__io__open_output_4_p_0(DataFileName_19, &OpenResult_35);
            if (((MR_tag((MR_Word) OpenResult_35)) == (MR_Integer) 1))
            {
              MR_Word Error_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_35, (MR_Integer) 0))));

              ll_backend__fact_table__print_file_open_error_7_p_0(Globals_33, (MR_Word) ((MR_Unsigned) 0U), DataFileName_19, (MR_String) "output", Error_38);
              MaybeDataStream_103 = (MR_Word) ((MR_Unsigned) 0U);
              *Result_28 = (MR_Integer) 1;
              *FactMap_29 = FactMap0_32;
              C_HeaderCode0_104 = (MR_String) "";
            }
            else
            {
              MR_Word DataStream_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_35, (MR_Integer) 0))));
              MR_Integer ProcInt_40;
              MR_String HashTableName_41;
              MR_Word ProcInfo_43;
              MR_Word ArgModes_44;
              MR_Word MaybeFirstFact_45;
              MR_String Var_88;
              MR_String Var_95;
              MR_String Var_97;
              MR_String Var_99;
              MR_Box conv0_ProcInfo_43;

              {
                MaybeDataStream_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeDataStream_103, 0) = ((MR_Box) (DataStream_36));
              }
              ll_backend__fact_table__write_new_data_array_5_p_0(DataStream_36, StructName_20, (MR_Integer) 0);
              hlds__hlds_pred__proc_id_to_int_2_p_0(ProcID_17, &ProcInt_40);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcInt_40, &Var_88);
              Var_95 = mercury__string__f_43_43_2_f_0(Var_88, (MR_String) "_");
              Var_97 = mercury__string__f_43_43_2_f_0((MR_String) "_hash_table_", Var_95);
              HashTableName_41 = mercury__string__f_43_43_2_f_0(StructName_20, Var_97);
              Var_99 = mercury__string__f_43_43_2_f_0(HashTableName_41, (MR_String) "0;\n");
              C_HeaderCode0_104 = mercury__string__f_43_43_2_f_0((MR_String) "extern struct MR_fact_table_hash_table_i ", Var_99);
              mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_21, ((MR_Box) (ProcID_17)), &conv0_ProcInfo_43);
              ProcInfo_43 = ((MR_Word) (conv0_ProcInfo_43));
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_43, &ArgModes_44);
              ll_backend__fact_table__read_sort_file_line_6_p_0(FactArgInfos_24, ArgModes_44, ModuleInfo_22, &MaybeFirstFact_45);
              if ((MaybeFirstFact_45 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *Result_28 = (MR_Integer) 1;
                *FactMap_29 = FactMap0_32;
              }
              else
              {
                MR_Word FirstFact_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFirstFact_45, (MR_Integer) 0))));

                ll_backend__fact_table__build_hash_table_17_p_0((MR_Integer) 0, (MR_Integer) 0, HashTableName_41, StructName_20, (MR_Integer) 0, ArgModes_44, ModuleInfo_22, FactArgInfos_24, (MR_Integer) 1, OutputStream_23, FirstFact_46, MaybeDataStream_103, CreateFactMap_27, FactMap0_32, FactMap_29);
                *Result_28 = (MR_Integer) 0;
              }
            }
            if ((MaybeDataStream_103 == (MR_Word) ((MR_Unsigned) 0U)))
              *C_HeaderCode_30 = C_HeaderCode0_104;
            else
            {
              MR_Word DataStream1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDataStream_103, (MR_Integer) 0))));
              MR_Integer FactTableSize_48;
              MR_String C_HeaderCode1_49;

              ll_backend__fact_table__write_closing_brace_3_p_0(DataStream1_47);
              ll_backend__fact_table__fact_table_size_2_p_0(Globals_33, &FactTableSize_48);
              ll_backend__fact_table__write_fact_table_pointer_array_7_p_0(NumFacts_26, FactTableSize_48, StructName_20, DataStream1_47, &C_HeaderCode1_49);
              mercury__io__close_output_3_p_0(DataStream1_47);
              *C_HeaderCode_30 = mercury__string__f_43_43_2_f_0(C_HeaderCode0_104, C_HeaderCode1_49);
            }
          }
          break;
      }
      mercury__io__seen_2_p_0();
      ll_backend__fact_table__delete_temporary_file_4_p_0(Globals_33, FileName_18);
    }
    else
    {
      MR_Word Error_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SeeResult_34, (MR_Integer) 0))));

      ll_backend__fact_table__print_file_open_error_7_p_0(Globals_33, (MR_Word) ((MR_Unsigned) 0U), FileName_18, (MR_String) "input", Error_83);
      *Result_28 = (MR_Integer) 1;
      *FactMap_29 = FactMap0_32;
      *C_HeaderCode_30 = (MR_String) "";
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__print_file_open_error_7_p_0(
  MR_Word Globals_8,
  MR_Word MaybeContext_9,
  MR_String FileName_10,
  MR_String InOrOut_11,
  MR_Word Error_12)
{
  {
    MR_String ErrorMsg_14;
    MR_String Msg_15;
    MR_Word Pieces_16;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_33;
    MR_String Var_36;
    MR_String Var_38;
    MR_String Var_39;

    mercury__io__error_message_2_p_0(Error_12, &ErrorMsg_14);
    Var_36 = mercury__string__f_43_43_2_f_0(InOrOut_11, (MR_String) ":");
    Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "\' for ", Var_36);
    Var_39 = mercury__string__f_43_43_2_f_0(FileName_10, Var_38);
    Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "Error opening file \140", Var_39);
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (Msg_15));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (ErrorMsg_14));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[18])));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Pieces_16, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (MaybeContext_9));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (Pieces_16));
    }
    ll_backend__fact_table__print_error_report_4_p_0(Globals_8, Var_33);
  }
}

static void MR_CALL 
ll_backend__fact_table__print_error_report_4_p_0(
  MR_Word Globals_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word MaybeContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Pieces_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Spec_9;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (Pieces_7));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_16, 0) = ((MR_Box) (MaybeContext_6));
      MR_hl_field(MR_mktag(2), Var_16, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_16, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_16, 3) = ((MR_Box) (Var_19));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.print_error_report\'/4"));
      MR_hl_field(MR_mktag(0), Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(MR_mktag(0), Spec_9, 3) = ((MR_Box) (Var_15));
    }
    parse_tree__error_util__write_error_spec_ignore_4_p_0(Globals_5, Spec_9);
  }
}

static void MR_CALL 
ll_backend__fact_table__delete_temporary_file_4_p_0(
  MR_Word Globals_5,
  MR_String FileName_6)
{
  {
    MR_Word Result_8;

    mercury__io__remove_file_4_p_0(FileName_6, &Result_8);
    if (!((Result_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ErrorCode_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_8, (MR_Integer) 0))));
      MR_String ErrorMsg_10;
      MR_String ProgName_11;
      MR_Word Pieces_12;
      MR_Word Spec_13;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_23;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_31;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_49;
      MR_Word Var_50;

      mercury__io__error_message_2_p_0(ErrorCode_9, &ErrorMsg_10);
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_11);
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_19, 0) = ((MR_Box) (ProgName_11));
      }
      Var_21 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[81]));
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (FileName_6));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (ErrorMsg_10));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[68])));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[85])));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
      }
      {
        Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_20));
      }
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (Pieces_12));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(2), Var_45, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(2), Var_45, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(2), Var_45, 3) = ((MR_Box) (Var_49));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.delete_temporary_file\'/4"));
        MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(MR_mktag(0), Spec_13, 3) = ((MR_Box) (Var_44));
      }
      parse_tree__error_util__write_error_spec_ignore_4_p_0(Globals_5, Spec_13);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_table_pointer_array_7_p_0(
  MR_Integer NumFacts_8,
  MR_Integer FactTableSize_9,
  MR_String StructName_10,
  MR_Word OutputStream_11,
  MR_String * C_HeaderCode_12)
{
  {
    MR_String PointerArrayName_14;
    MR_String Var_18;
    MR_String Var_19;
    MR_String Var_21;
    MR_String Var_24;
    MR_Word Var_26;

    Var_21 = mercury__string__f_43_43_2_f_0(StructName_10, (MR_String) "[]");
    Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "_struct *", Var_21);
    Var_18 = mercury__string__f_43_43_2_f_0(StructName_10, Var_19);
    PointerArrayName_14 = mercury__string__f_43_43_2_f_0((MR_String) "const struct ", Var_18);
    Var_24 = mercury__string__f_43_43_2_f_0(PointerArrayName_14, (MR_String) ";\n");
    *C_HeaderCode_12 = mercury__string__f_43_43_2_f_0((MR_String) "extern ", Var_24);
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (PointerArrayName_14));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[84])));
    }
    mercury__io__write_strings_4_p_0(OutputStream_11, Var_26);
    ll_backend__fact_table__write_fact_table_pointer_array_2_7_p_0((MR_Integer) 0, NumFacts_8, FactTableSize_9, StructName_10, OutputStream_11);
    mercury__io__write_string_4_p_0(OutputStream_11, (MR_String) "};\n");
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_table_pointer_array_2_7_p_0(
  MR_Integer CurrFact_8,
  MR_Integer NumFacts_9,
  MR_Integer FactTableSize_10,
  MR_String StructName_11,
  MR_Word OutputStream_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurrFact_8 >= NumFacts_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!(succeeded))
    {
      MR_Integer NextFact_14;
      MR_String Var_29;
      MR_Integer next_value_of_CurrFact_8;

      mercury__io__write_string_4_p_0(OutputStream_12, (MR_String) "\t");
      mercury__io__write_string_4_p_0(OutputStream_12, StructName_11);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), CurrFact_8, &Var_29);
      mercury__io__write_string_4_p_0(OutputStream_12, Var_29);
      mercury__io__write_string_4_p_0(OutputStream_12, (MR_String) ",\n");
      NextFact_14 = (MR_Integer) ((MR_Unsigned) CurrFact_8 + (MR_Unsigned) FactTableSize_10);
      // direct tailcall eliminated
      ;
      next_value_of_CurrFact_8 = NextFact_14;
      CurrFact_8 = next_value_of_CurrFact_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__build_hash_table_17_p_0(
  MR_Integer FactNum_18,
  MR_Integer InputArgNum_19,
  MR_String HashTableName_20,
  MR_String StructName_21,
  MR_Integer TableNum_22,
  MR_Word ArgModes_23,
  MR_Word ModuleInfo_24,
  MR_Word Infos_25,
  MR_Word IsPrimaryTable_26,
  MR_Word OutputStream_27,
  MR_Word FirstFact_28,
  MR_Word MaybeDataStream_29,
  MR_Word CreateFactMap_30,
  MR_Word STATE_VARIABLE_FactMap_0_39,
  MR_Word * STATE_VARIABLE_FactMap_40)
{
  {
    MR_Word HashList_33;
    MR_Integer Len_34;
    MR_Word Globals_35;
    MR_Integer HashSize_36;
    MR_Word HashTable0_37;
    MR_Word HashTable_38;
    MR_Word Var_43;
    MR_Word Map_51;

    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (FirstFact_28));
    }
    ll_backend__fact_table__build_hash_table_2_19_p_0(FactNum_18, InputArgNum_19, HashTableName_20, StructName_21, TableNum_22, ArgModes_23, ModuleInfo_24, Infos_25, IsPrimaryTable_26, OutputStream_27, Var_43, MaybeDataStream_29, CreateFactMap_30, STATE_VARIABLE_FactMap_0_39, STATE_VARIABLE_FactMap_40, (MR_Word) ((MR_Unsigned) 0U), &HashList_33);
    mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), HashList_33, &Len_34);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_24, &Globals_35);
    ll_backend__fact_table__calculate_hash_table_size_3_p_0(Globals_35, Len_34, &HashSize_36);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), &Map_51);
    {
      HashTable0_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HashTable0_37, 0) = ((MR_Box) (HashSize_36));
      MR_hl_field(MR_mktag(0), HashTable0_37, 1) = ((MR_Box) (Map_51));
    }
    ll_backend__fact_table__hash_table_from_list_4_p_0(HashList_33, HashSize_36, HashTable0_37, &HashTable_38);
    ll_backend__fact_table__write_hash_table_6_p_0(OutputStream_27, HashTableName_20, TableNum_22, HashTable_38);
  }
}

static void MR_CALL 
ll_backend__fact_table__build_hash_table_2_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_81;

    ll_backend__fact_table__IntroducedFrom__pred__build_hash_table_2__1628__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_81);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_81));
  }
}

static void MR_CALL 
ll_backend__fact_table__build_hash_table_2_19_p_0(
  MR_Integer FactNum_1,
  MR_Integer InputArgNum_2,
  MR_String HashTableName_3,
  MR_String StructName_4,
  MR_Integer STATE_VARIABLE_TableNum_0_5,
  MR_Word ArgModes_6,
  MR_Word ModuleInfo_7,
  MR_Word Infos_8,
  MR_Word IsPrimaryTable_9,
  MR_Word OutputStream_10,
  MR_Word HeadVar__11_11,
  MR_Word MaybeDataStream_12,
  MR_Word CreateFactMap_13,
  MR_Word STATE_VARIABLE_FactMap_0_14,
  MR_Word * STATE_VARIABLE_FactMap_15,
  MR_Word STATE_VARIABLE_HashList_0_16,
  MR_Word * STATE_VARIABLE_HashList_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__11_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HashList_17 = STATE_VARIABLE_HashList_0_16;
      *STATE_VARIABLE_FactMap_15 = STATE_VARIABLE_FactMap_0_14;
    }
    else
    {
      MR_Word FirstFact_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__11_11, (MR_Integer) 0))));
      MR_Word MatchingFacts_57;
      MR_Word MaybeNextFact_58;
      MR_Word Globals_59;
      MR_Integer Len_68;
      MR_Integer NextFactNum_69;
      MR_Word STATE_VARIABLE_FactMap_78_78;
      MR_Integer STATE_VARIABLE_TableNum_84_84;
      MR_Word STATE_VARIABLE_HashList_85_85;
      MR_Integer next_value_of_FactNum_1;
      MR_Integer next_value_of_STATE_VARIABLE_TableNum_0_5;
      MR_Word next_value_of_HeadVar__11_11;
      MR_Word next_value_of_STATE_VARIABLE_FactMap_0_14;
      MR_Word next_value_of_STATE_VARIABLE_HashList_0_16;

      ll_backend__fact_table__top_level_collect_matching_facts_8_p_0(FirstFact_51, &MatchingFacts_57, &MaybeNextFact_58, Infos_8, ArgModes_6, ModuleInfo_7);
      switch (CreateFactMap_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_FactMap_78_78 = STATE_VARIABLE_FactMap_0_14;
          break;
        case (MR_Integer) 1:
          ll_backend__fact_table__update_fact_map_4_p_0(FactNum_1, MatchingFacts_57, STATE_VARIABLE_FactMap_0_14, &STATE_VARIABLE_FactMap_78_78);
          break;
      }
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_59);
      if (!((MaybeDataStream_12 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word DataStream_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDataStream_12, (MR_Integer) 0))));
        MR_Word OutputData_65;
        MR_Word VeryVerbose_66;
        MR_Integer FactTableSize_67;

        mercury__list__map_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0), (MR_Word) (&ll_backend__fact_table_scalar_common_1[3]), (MR_Word) (&ll_backend__fact_table_scalar_common_2[4]), MatchingFacts_57, &OutputData_65);
        libs__globals__lookup_bool_option_3_p_0(Globals_59, (MR_Integer) 66, &VeryVerbose_66);
        libs__globals__lookup_int_option_3_p_0(Globals_59, (MR_Integer) 345, &FactTableSize_67);
        ll_backend__fact_table__write_fact_table_data_8_p_0(VeryVerbose_66, FactNum_1, FactTableSize_67, OutputData_65, StructName_4, DataStream_60);
      }
      ll_backend__fact_table__do_build_hash_table_14_p_0(Globals_59, FactNum_1, InputArgNum_2, HashTableName_3, STATE_VARIABLE_TableNum_0_5, &STATE_VARIABLE_TableNum_84_84, IsPrimaryTable_9, OutputStream_10, MatchingFacts_57, STATE_VARIABLE_FactMap_78_78, STATE_VARIABLE_HashList_0_16, &STATE_VARIABLE_HashList_85_85);
      mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0), MatchingFacts_57, &Len_68);
      NextFactNum_69 = (MR_Integer) ((MR_Unsigned) FactNum_1 + (MR_Unsigned) Len_68);
      // direct tailcall eliminated
      ;
      next_value_of_FactNum_1 = NextFactNum_69;
      next_value_of_STATE_VARIABLE_TableNum_0_5 = STATE_VARIABLE_TableNum_84_84;
      next_value_of_HeadVar__11_11 = MaybeNextFact_58;
      next_value_of_STATE_VARIABLE_FactMap_0_14 = STATE_VARIABLE_FactMap_78_78;
      next_value_of_STATE_VARIABLE_HashList_0_16 = STATE_VARIABLE_HashList_85_85;
      FactNum_1 = next_value_of_FactNum_1;
      STATE_VARIABLE_TableNum_0_5 = next_value_of_STATE_VARIABLE_TableNum_0_5;
      HeadVar__11_11 = next_value_of_HeadVar__11_11;
      STATE_VARIABLE_FactMap_0_14 = next_value_of_STATE_VARIABLE_FactMap_0_14;
      STATE_VARIABLE_HashList_0_16 = next_value_of_STATE_VARIABLE_HashList_0_16;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__update_fact_map_4_p_0(
  MR_Integer FactNum_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FactMap_0_3,
  MR_Word * STATE_VARIABLE_FactMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_FactMap_4 = STATE_VARIABLE_FactMap_0_3;
    else
    {
      MR_Word Fact_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Facts_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Index_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Fact_10, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_FactMap_18_18;
      MR_Integer Var_19;
      MR_Integer next_value_of_FactNum_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_FactMap_0_3;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Index_14, ((MR_Box) (FactNum_1)), STATE_VARIABLE_FactMap_0_3, &STATE_VARIABLE_FactMap_18_18);
      Var_19 = (MR_Integer) ((MR_Unsigned) FactNum_1 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_FactNum_1 = Var_19;
      next_value_of_HeadVar__2_2 = Facts_11;
      next_value_of_STATE_VARIABLE_FactMap_0_3 = STATE_VARIABLE_FactMap_18_18;
      FactNum_1 = next_value_of_FactNum_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_FactMap_0_3 = next_value_of_STATE_VARIABLE_FactMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__top_level_collect_matching_facts_8_p_0(
  MR_Word Fact_9,
  MR_Word * MatchingFacts_10,
  MR_Word * MaybeNextFact_11,
  MR_Word Infos_12,
  MR_Word ArgModes_13,
  MR_Word ModuleInfo_14)
{
  {
    MR_Word MatchingFacts0_16;
    MR_Word MatchingFacts1_17;

    ll_backend__fact_table__top_level_collect_matching_facts_2_9_p_0(Fact_9, (MR_Word) ((MR_Unsigned) 0U), &MatchingFacts0_16, MaybeNextFact_11, Infos_12, ArgModes_13, ModuleInfo_14);
    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0), MatchingFacts0_16, &MatchingFacts1_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MatchingFacts_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Fact_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MatchingFacts1_17));
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__top_level_collect_matching_facts_2_9_p_0(
  MR_Word Fact_10,
  MR_Word STATE_VARIABLE_MatchingFacts_0_27,
  MR_Word * STATE_VARIABLE_MatchingFacts_28,
  MR_Word * MaybeNextFact_12,
  MR_Word Infos_13,
  MR_Word ArgModes_14,
  MR_Word ModuleInfo_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeSortFileLine_17;

    // setup for model_det tailcalls optimized into a loop
    ;
    ll_backend__fact_table__read_sort_file_line_6_p_0(Infos_13, ArgModes_14, ModuleInfo_15, &MaybeSortFileLine_17);
    if ((MaybeSortFileLine_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeNextFact_12 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_MatchingFacts_28 = STATE_VARIABLE_MatchingFacts_0_27;
    }
    else
    {
      MR_Word Fact1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSortFileLine_17, (MR_Integer) 0))));
      MR_Word Arg1_19;
      MR_Word Arg_23;
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Fact1_18, (MR_Integer) 0))));
      MR_Word Var_33;

      succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Arg1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
        Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Fact_10, (MR_Integer) 0))));
        succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          Arg_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        succeeded = mercury__term____Unify____const_0_0(Arg_23, Arg1_19);
        if (succeeded)
        {
          MR_Word Var_34;
          MR_Word next_value_of_STATE_VARIABLE_MatchingFacts_0_27;

          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Fact1_18));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (STATE_VARIABLE_MatchingFacts_0_27));
          }
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_MatchingFacts_0_27 = Var_34;
          STATE_VARIABLE_MatchingFacts_0_27 = next_value_of_STATE_VARIABLE_MatchingFacts_0_27;
          continue;
        }
        else
        {
          *MaybeNextFact_12 = MaybeSortFileLine_17;
          *STATE_VARIABLE_MatchingFacts_28 = STATE_VARIABLE_MatchingFacts_0_27;
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.top_level_collect_matching_facts_2\'/9", (MR_String) "no input args");
          return;
        }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__build_hash_table_lower_levels_2_14_p_0(
  MR_Word Globals_1,
  MR_Integer FactNum_2,
  MR_Integer InputArgNum_3,
  MR_String HashTableName_4,
  MR_Integer STATE_VARIABLE_TableNum_0_5,
  MR_Integer * STATE_VARIABLE_TableNum_6,
  MR_Word IsPrimaryTable_7,
  MR_Word OutputStream_8,
  MR_Word HeadVar__9_9,
  MR_Word FactMap_10,
  MR_Word STATE_VARIABLE_HashList_0_11,
  MR_Word * STATE_VARIABLE_HashList_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__9_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HashList_12 = STATE_VARIABLE_HashList_0_11;
      *STATE_VARIABLE_TableNum_6 = STATE_VARIABLE_TableNum_0_5;
    }
    else
    {
      MR_Word Fact_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 0))));
      MR_Word Facts0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 1))));
      MR_Word MatchingFacts_43;
      MR_Word Facts1_44;
      MR_Integer Len_45;
      MR_Integer NextFactNum_46;
      MR_Integer STATE_VARIABLE_TableNum_53_53;
      MR_Word STATE_VARIABLE_HashList_54_54;
      MR_Word Matching0_65;
      MR_Word Matching1_66;
      MR_Integer next_value_of_FactNum_2;
      MR_Integer next_value_of_STATE_VARIABLE_TableNum_0_5;
      MR_Word next_value_of_HeadVar__9_9;
      MR_Word next_value_of_STATE_VARIABLE_HashList_0_11;

      ll_backend__fact_table__lower_level_collect_matching_facts_2_6_p_0(Fact_38, Facts0_39, (MR_Word) ((MR_Unsigned) 0U), &Matching0_65, &Facts1_44, InputArgNum_3);
      mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0), Matching0_65, &Matching1_66);
      {
        MatchingFacts_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MatchingFacts_43, 0) = ((MR_Box) (Fact_38));
        MR_hl_field(MR_mktag(1), MatchingFacts_43, 1) = ((MR_Box) (Matching1_66));
      }
      ll_backend__fact_table__do_build_hash_table_14_p_0(Globals_1, FactNum_2, InputArgNum_3, HashTableName_4, STATE_VARIABLE_TableNum_0_5, &STATE_VARIABLE_TableNum_53_53, IsPrimaryTable_7, OutputStream_8, MatchingFacts_43, FactMap_10, STATE_VARIABLE_HashList_0_11, &STATE_VARIABLE_HashList_54_54);
      mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0), MatchingFacts_43, &Len_45);
      NextFactNum_46 = (MR_Integer) ((MR_Unsigned) FactNum_2 + (MR_Unsigned) Len_45);
      // direct tailcall eliminated
      ;
      next_value_of_FactNum_2 = NextFactNum_46;
      next_value_of_STATE_VARIABLE_TableNum_0_5 = STATE_VARIABLE_TableNum_53_53;
      next_value_of_HeadVar__9_9 = Facts1_44;
      next_value_of_STATE_VARIABLE_HashList_0_11 = STATE_VARIABLE_HashList_54_54;
      FactNum_2 = next_value_of_FactNum_2;
      STATE_VARIABLE_TableNum_0_5 = next_value_of_STATE_VARIABLE_TableNum_0_5;
      HeadVar__9_9 = next_value_of_HeadVar__9_9;
      STATE_VARIABLE_HashList_0_11 = next_value_of_STATE_VARIABLE_HashList_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__do_build_hash_table_14_p_0(
  MR_Word Globals_15,
  MR_Integer FactNum_16,
  MR_Integer InputArgNum_17,
  MR_String HashTableName_18,
  MR_Integer STATE_VARIABLE_TableNum_0_38,
  MR_Integer * STATE_VARIABLE_TableNum_39,
  MR_Word IsPrimaryTable_20,
  MR_Word OutputStream_21,
  MR_Word Facts_22,
  MR_Word FactMap_23,
  MR_Word STATE_VARIABLE_HashList_0_40,
  MR_Word * STATE_VARIABLE_HashList_41)
{
  {
    MR_bool succeeded;

    if ((Facts_22 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.do_build_hash_table\'/14", (MR_String) "no facts");
        return;
      }
    else
    {
      MR_Word Fact_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Facts_22, (MR_Integer) 0))));
      MR_Word Facts1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Facts_22, (MR_Integer) 1))));
      MR_Word Arg_28;
      MR_Integer Index_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Fact_26, (MR_Integer) 1))));
      MR_Integer HashIndex_30;
      MR_Word InputArgs_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Fact_26, (MR_Integer) 0))));
      MR_Word ArgPrime_73;
      MR_Word Var_75;

      succeeded = mercury__list__drop_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_const_0), InputArgNum_17, InputArgs_71, &Var_75);
      if (succeeded)
      {
        succeeded = (Var_75 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          ArgPrime_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_75, (MR_Integer) 0))));
      }
      if (succeeded)
        Arg_28 = ArgPrime_73;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.fact_get_arg_and_index\'/4", (MR_String) "not enough input args");
          return;
        }
      switch (IsPrimaryTable_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box conv0_HashIndex_30;

            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FactMap_23, Index_29, &conv0_HashIndex_30);
            HashIndex_30 = ((MR_Integer) (conv0_HashIndex_30));
          }
          break;
        case (MR_Integer) 1:
          HashIndex_30 = FactNum_16;
          break;
      }
      succeeded = (Facts1_27 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word Var_45;
        MR_Word Var_46;

        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (HashIndex_30));
        }
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Arg_28));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) -1));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_HashList_41 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_HashList_0_40));
        }
        *STATE_VARIABLE_TableNum_39 = STATE_VARIABLE_TableNum_0_38;
      }
      else
      {
        MR_Integer NextInputArgNum_31 = (MR_Integer) ((MR_Unsigned) InputArgNum_17 + (MR_Unsigned) 1);
        MR_Word InputArgs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Fact_26, (MR_Integer) 0))));
        MR_Integer N_35 = (MR_Integer) ((MR_Unsigned) NextInputArgNum_31 + (MR_Unsigned) 1);
        MR_Word Var_36;

        succeeded = mercury__list__drop_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_const_0), N_35, InputArgs_32, &Var_36);
        if (succeeded)
        {
          MR_Integer ThisTableNum_37 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TableNum_0_38 + (MR_Unsigned) 1);
          MR_Word Var_55;
          MR_Word Var_56;

          ll_backend__fact_table__build_hash_table_lower_levels_12_p_0(Globals_15, FactNum_16, NextInputArgNum_31, HashTableName_18, ThisTableNum_37, STATE_VARIABLE_TableNum_39, IsPrimaryTable_20, OutputStream_21, Facts_22, FactMap_23);
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (ThisTableNum_37));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (HashTableName_18));
          }
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Arg_28));
            MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) -1));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_HashList_41 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_HashList_0_40));
          }
        }
        else
        {
          succeeded = (IsPrimaryTable_20 == (MR_Integer) 0);
          if (succeeded)
            ll_backend__fact_table__hash_list_insert_many_7_p_0(Facts_22, IsPrimaryTable_20, FactMap_23, FactNum_16, InputArgNum_17, STATE_VARIABLE_HashList_0_40, STATE_VARIABLE_HashList_41);
          else
          {
            MR_Word Var_60;
            MR_Word Var_61;

            {
              Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (HashIndex_30));
            }
            {
              Var_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Arg_28));
              MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (Var_61));
              MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) -1));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_HashList_41 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_60));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_HashList_0_40));
            }
          }
          *STATE_VARIABLE_TableNum_39 = STATE_VARIABLE_TableNum_0_38;
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__build_hash_table_lower_levels_12_p_0(
  MR_Word Globals_13,
  MR_Integer FactNum_14,
  MR_Integer InputArgNum_15,
  MR_String HashTableName_16,
  MR_Integer TableNum0_17,
  MR_Integer * TableNum_18,
  MR_Word IsPrimaryTable_19,
  MR_Word OutputStream_20,
  MR_Word Facts_21,
  MR_Word FactMap_22)
{
  {
    MR_Word HashList_24;
    MR_Integer Len_25;
    MR_Integer HashSize_26;
    MR_Word HashTable0_27;
    MR_Word HashTable_28;
    MR_Word Map_37;

    ll_backend__fact_table__build_hash_table_lower_levels_2_14_p_0(Globals_13, FactNum_14, InputArgNum_15, HashTableName_16, TableNum0_17, TableNum_18, IsPrimaryTable_19, OutputStream_20, Facts_21, FactMap_22, (MR_Word) ((MR_Unsigned) 0U), &HashList_24);
    mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), HashList_24, &Len_25);
    ll_backend__fact_table__calculate_hash_table_size_3_p_0(Globals_13, Len_25, &HashSize_26);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), &Map_37);
    {
      HashTable0_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HashTable0_27, 0) = ((MR_Box) (HashSize_26));
      MR_hl_field(MR_mktag(0), HashTable0_27, 1) = ((MR_Box) (Map_37));
    }
    ll_backend__fact_table__hash_table_from_list_4_p_0(HashList_24, HashSize_26, HashTable0_27, &HashTable_28);
    ll_backend__fact_table__write_hash_table_6_p_0(OutputStream_20, HashTableName_16, TableNum0_17, HashTable_28);
  }
}

static void MR_CALL 
ll_backend__fact_table__hash_list_insert_many_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word IsPrimaryTable_2,
  MR_Word FactMap_3,
  MR_Integer FactNum_4,
  MR_Integer InputArgNum_5,
  MR_Word STATE_VARIABLE_HashList_0_6,
  MR_Word * STATE_VARIABLE_HashList_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_HashList_7 = STATE_VARIABLE_HashList_0_6;
    else
    {
      MR_Word Fact_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Facts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Arg_22;
      MR_Integer Index_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Fact_15, (MR_Integer) 1))));
      MR_Integer HashIndex_24;
      MR_Word STATE_VARIABLE_HashList_27_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word InputArgs_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Fact_15, (MR_Integer) 0))));
      MR_Word ArgPrime_39;
      MR_Word Var_41;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_HashList_0_6;

      succeeded = mercury__list__drop_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_const_0), InputArgNum_5, InputArgs_37, &Var_41);
      if (succeeded)
      {
        succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          ArgPrime_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
      }
      if (succeeded)
        Arg_22 = ArgPrime_39;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.fact_get_arg_and_index\'/4", (MR_String) "not enough input args");
          return;
        }
      switch (IsPrimaryTable_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box conv0_HashIndex_24;

            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FactMap_3, Index_23, &conv0_HashIndex_24);
            HashIndex_24 = ((MR_Integer) (conv0_HashIndex_24));
          }
          break;
        case (MR_Integer) 1:
          HashIndex_24 = FactNum_4;
          break;
      }
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (HashIndex_24));
      }
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Arg_22));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) -1));
      }
      {
        STATE_VARIABLE_HashList_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_HashList_27_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_HashList_27_27, 1) = ((MR_Box) (STATE_VARIABLE_HashList_0_6));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Facts_16;
      next_value_of_STATE_VARIABLE_HashList_0_6 = STATE_VARIABLE_HashList_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_HashList_0_6 = next_value_of_STATE_VARIABLE_HashList_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__write_hash_table_6_p_0(
  MR_Word OutputStream_7,
  MR_String BaseName_8,
  MR_Integer TableNum_9,
  MR_Word HashTable_10)
{
  {
    MR_Char TableType_12;
    MR_String HashTableDataName_13;
    MR_Integer Size_14;
    MR_Integer MaxIndex_16;
    MR_Word Var_27;
    MR_String Var_53;
    MR_String Var_60;
    MR_String Var_61;
    MR_String Var_63;
    MR_String Var_64;
    MR_String Var_71;
    MR_String Var_76;
    MR_String Var_87;
    MR_String Var_97;
    MR_String Var_108;

    ll_backend__fact_table__get_hash_table_type_2_p_0(HashTable_10, &TableType_12);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), TableNum_9, &Var_53);
    Var_60 = mercury__string__f_43_43_2_f_0(Var_53, (MR_String) "_data[]");
    Var_61 = mercury__string__f_43_43_2_f_0(BaseName_8, Var_60);
    Var_63 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_61);
    mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), TableType_12, &Var_64);
    Var_71 = mercury__string__f_43_43_2_f_0(Var_64, Var_63);
    HashTableDataName_13 = mercury__string__f_43_43_2_f_0((MR_String) "struct MR_fact_table_hash_entry_", Var_71);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (HashTableDataName_13));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[84])));
    }
    mercury__io__write_strings_4_p_0(OutputStream_7, Var_27);
    Size_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HashTable_10, (MR_Integer) 0))));
    MaxIndex_16 = (MR_Integer) ((MR_Unsigned) Size_14 - (MR_Unsigned) 1);
    ll_backend__fact_table__write_hash_table_loop_6_p_0(OutputStream_7, HashTable_10, (MR_Integer) 0, MaxIndex_16);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "};\n\n");
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n\nstruct MR_fact_table_hash_table_");
    mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), TableType_12, &Var_76);
    mercury__io__write_string_4_p_0(OutputStream_7, Var_76);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) " ");
    mercury__io__write_string_4_p_0(OutputStream_7, BaseName_8);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), TableNum_9, &Var_87);
    mercury__io__write_string_4_p_0(OutputStream_7, Var_87);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) " = {\n    ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), Size_14, &Var_97);
    mercury__io__write_string_4_p_0(OutputStream_7, Var_97);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ",\n    ");
    mercury__io__write_string_4_p_0(OutputStream_7, BaseName_8);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), TableNum_9, &Var_108);
    mercury__io__write_string_4_p_0(OutputStream_7, Var_108);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "_data\n};\n");
  }
}

static void MR_CALL 
ll_backend__fact_table__get_hash_table_type_2_p_0(
  MR_Word HashTable_3,
  MR_Char * TableType_4)
{
  {
    MR_bool succeeded;
    MR_Word Map_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashTable_3, (MR_Integer) 1))));

    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), Map_6);
    if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.get_hash_table_type\'/2", (MR_String) "empty hash table");
        return;
      }
    else
      ll_backend__fact_table__get_hash_table_type_2_3_p_0(Map_6, (MR_Integer) 0, TableType_4);
  }
}

static void MR_CALL 
ll_backend__fact_table__get_hash_table_type_2_3_p_0(
  MR_Word Map_4,
  MR_Integer Index_5,
  MR_Char * TableType_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Entry_7;
    MR_Box conv0_Entry_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), Map_4, Index_5, &conv0_Entry_7);
    if (succeeded)
    {
      Entry_7 = ((MR_Word) (conv0_Entry_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Key_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_7, (MR_Integer) 0))));

      succeeded = ((MR_tag((MR_Word) Key_8)) == (MR_Integer) 2);
      if (succeeded)
        *TableType_6 = (MR_Char) 115;
      else
      {
        succeeded = ((MR_tag((MR_Word) Key_8)) == (MR_Integer) 1);
        if (succeeded)
          *TableType_6 = (MR_Char) 105;
        else
        {
          succeeded = ((((MR_tag((MR_Word) Key_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Key_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
            *TableType_6 = (MR_Char) 102;
          else
          {
            succeeded = ((MR_tag((MR_Word) Key_8)) == (MR_Integer) 0);
            if (succeeded)
              *TableType_6 = (MR_Char) 97;
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.get_hash_table_type_2\'/3", (MR_String) "invalid term");
                return;
              }
          }
        }
      }
    }
    else
    {
      MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) Index_5 + (MR_Unsigned) 1);
      MR_Integer next_value_of_Index_5 = Var_20;

      // direct tailcall eliminated
      ;
      Index_5 = next_value_of_Index_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__write_hash_table_loop_6_p_0(
  MR_Word Stream_7,
  MR_Word HashTable_8,
  MR_Integer CurrIndex_9,
  MR_Integer MaxIndex_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurrIndex_9 > MaxIndex_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!(succeeded))
    {
      MR_Integer Var_59;
      MR_Word HashEntry_12;
      MR_Word Map_90;
      MR_Box conv0_HashEntry_12;
      MR_Integer next_value_of_CurrIndex_9;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\t{ ");
      Map_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashTable_8, (MR_Integer) 1))));
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), Map_90, CurrIndex_9, &conv0_HashEntry_12);
      if (succeeded)
      {
        HashEntry_12 = ((MR_Word) (conv0_HashEntry_12));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Key_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashEntry_12, (MR_Integer) 0))));
        MR_Word Index_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashEntry_12, (MR_Integer) 1))));
        MR_Integer Next_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HashEntry_12, (MR_Integer) 2))));

        switch (MR_tag((MR_Word) Key_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.write_hash_table_loop\'/6", (MR_String) "unsupported type");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Integer_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Key_13, (MR_Integer) 1))));
              MR_Word Signedness_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Key_13, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);

              switch (Signedness_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer Int_21;

                    Int_21 = mercury__integer__det_to_int_1_f_0(Integer_18);
                    mercury__io__write_int_4_p_0(Stream_7, Int_21);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.write_hash_table_loop\'/6", (MR_String) "NYI uints in fact tables");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String String_16 = ((MR_String) ((MR_hl_field(MR_mktag(2), Key_13, (MR_Integer) 0))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\"");
              backend_libs__c_util__output_quoted_string_4_p_0(Stream_7, String_16);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\"");
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Key_13, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Float Float_22 = MR_unbox_float((MR_hl_field(MR_mktag(3), Key_13, (MR_Integer) 1)));

                  mercury__io__write_float_4_p_0(Stream_7, Float_22);
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.write_hash_table_loop\'/6", (MR_String) "unsupported type");
                  return;
                }
                break;
            }
            break;
        }
        if (((MR_tag((MR_Word) Index_14)) == (MR_Integer) 0))
        {
          MR_Integer I_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Index_14, (MR_Integer) 0))));
          MR_String Var_78;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", MR_FACT_TABLE_MAKE_TAGGED_INDEX(");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), I_25, &Var_78);
          mercury__io__write_string_4_p_0(Stream_7, Var_78);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", 1), ");
        }
        else
        {
          MR_String H_26 = ((MR_String) ((MR_hl_field(MR_mktag(1), Index_14, (MR_Integer) 1))));
          MR_Integer I_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Index_14, (MR_Integer) 0))));
          MR_String Var_67;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", MR_FACT_TABLE_MAKE_TAGGED_POINTER(&");
          mercury__io__write_string_4_p_0(Stream_7, H_26);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), I_62, &Var_67);
          mercury__io__write_string_4_p_0(Stream_7, Var_67);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", 2), ");
        }
        mercury__io__write_int_4_p_0(Stream_7, Next_15);
      }
      else
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "0, MR_FACT_TABLE_MAKE_TAGGED_POINTER(NULL, 0), -1 ");
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n");
      Var_59 = (MR_Integer) ((MR_Unsigned) CurrIndex_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurrIndex_9 = Var_59;
      CurrIndex_9 = next_value_of_CurrIndex_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__hash_table_from_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    mercury__char__to_int_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ll_backend__fact_table__hash_table_from_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HashSize_2,
  MR_Word STATE_VARIABLE_HashTable_0_3,
  MR_Word * STATE_VARIABLE_HashTable_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_HashTable_4 = STATE_VARIABLE_HashTable_0_3;
    else
    {
      MR_Word Entry_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Entrys_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HashTable_15_15;
      MR_Word Key_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_9, (MR_Integer) 0))));
      MR_Word Index_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_9, (MR_Integer) 1))));
      MR_Integer HashVal_25;
      MR_Word Ns_39;
      MR_String String_35;
      MR_Word Map_66;
      MR_Box conv1_Var_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_HashTable_0_3;

      succeeded = ((MR_tag((MR_Word) Key_22)) == (MR_Integer) 2);
      if (succeeded)
      {
        String_35 = ((MR_String) ((MR_hl_field(MR_mktag(2), Key_22, (MR_Integer) 0))));
        {
          MR_Word Cs_36;

          mercury__string__to_char_list_2_p_0(String_35, &Cs_36);
          mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__fact_table_scalar_common_2[3]), Cs_36, &Ns_39);
        }
      }
      else
      {
        MR_Integer Int_42;
        MR_Word Integer_41;
        MR_Word Var_48;
        MR_Word Var_49;

        succeeded = ((MR_tag((MR_Word) Key_22)) == (MR_Integer) 1);
        if (succeeded)
        {
          Integer_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Key_22, (MR_Integer) 1))));
          Var_48 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Key_22, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Var_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Key_22, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (Var_48 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_49 == (MR_Integer) 0);
            if (succeeded)
              succeeded = mercury__integer__to_int_2_p_0(Integer_41, &Int_42);
          }
        }
        if (succeeded)
        {
          MR_Integer N_43;

          mercury__int__abs_2_p_0(Int_42, &N_43);
          {
            Ns_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Ns_39, 0) = ((MR_Box) (N_43));
            MR_hl_field(MR_mktag(1), Ns_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          MR_Float Float_44;

          succeeded = ((((MR_tag((MR_Word) Key_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Key_22, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Float_44 = MR_unbox_float((MR_hl_field(MR_mktag(3), Key_22, (MR_Integer) 1)));
            {
              MR_Integer Var_51;
              MR_Integer N_58;

              Var_51 = mercury__float__hash_1_f_0(Float_44);
              mercury__int__abs_2_p_0(Var_51, &N_58);
              {
                Ns_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Ns_39, 0) = ((MR_Box) (N_58));
                MR_hl_field(MR_mktag(1), Ns_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.fact_table_hash\'/3", (MR_String) "unsupported type in key");
              return;
            }
        }
      }
      ll_backend__fact_table__fact_table_hash_2_4_p_0(HashSize_2, Ns_39, (MR_Integer) 0, &HashVal_25);
      Map_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HashTable_0_3, (MR_Integer) 1))));
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), Map_66, HashVal_25, &conv1_Var_26);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Integer Var_27;

        ll_backend__fact_table__hash_table_insert_2_6_p_0(HashVal_25, &Var_27, Index_23, Key_22, STATE_VARIABLE_HashTable_0_3, &STATE_VARIABLE_HashTable_15_15);
      }
      else
      {
        MR_Word Var_29;
        MR_Integer Size_73;
        MR_Word Map0_74;
        MR_Word Map_75;

        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Key_22));
          MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (Index_23));
          MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) -1));
        }
        Size_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HashTable_0_3, (MR_Integer) 0))));
        Map0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HashTable_0_3, (MR_Integer) 1))));
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), HashVal_25, ((MR_Box) (Var_29)), Map0_74, &Map_75);
        {
          STATE_VARIABLE_HashTable_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_HashTable_15_15, 0) = ((MR_Box) (Size_73));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_HashTable_15_15, 1) = ((MR_Box) (Map_75));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Entrys_10;
      next_value_of_STATE_VARIABLE_HashTable_0_3 = STATE_VARIABLE_HashTable_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_HashTable_0_3 = next_value_of_STATE_VARIABLE_HashTable_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__fact_table_hash_2_4_p_0(
  MR_Integer HashSize_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_HashVal_0_3,
  MR_Integer * STATE_VARIABLE_HashVal_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_HashVal_4 = STATE_VARIABLE_HashVal_0_3;
    else
    {
      MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Ns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_HashVal_15_15;
      MR_Integer Var_16;
      MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) 31 * (MR_Unsigned) STATE_VARIABLE_HashVal_0_3);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_HashVal_0_3;

      Var_16 = (MR_Integer) ((MR_Unsigned) N_10 + (MR_Unsigned) Var_17);
      STATE_VARIABLE_HashVal_15_15 = mercury__int__mod_2_f_0(Var_16, HashSize_1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Ns_11;
      next_value_of_STATE_VARIABLE_HashVal_0_3 = STATE_VARIABLE_HashVal_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_HashVal_0_3 = next_value_of_STATE_VARIABLE_HashVal_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__hash_table_insert_2_6_p_0(
  MR_Integer HashVal_7,
  MR_Integer * FreeVal_8,
  MR_Word Index0_9,
  MR_Word Key0_10,
  MR_Word STATE_VARIABLE_HashTable_0_15,
  MR_Word * STATE_VARIABLE_HashTable_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Key1_12;
    MR_Word Index1_13;
    MR_Integer Next_14;
    MR_Word Var_17;
    MR_Word Map_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HashTable_0_15, (MR_Integer) 1))));
    MR_Box conv0_Var_17;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), Map_30, HashVal_7, &conv0_Var_17);
    if (succeeded)
    {
      Var_17 = ((MR_Word) (conv0_Var_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Key1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
      Index1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
      Next_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 2))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (Next_14 == (MR_Integer) -1);
      if (succeeded)
      {
        MR_Word Var_18;
        MR_Word Var_21;
        MR_Integer Size_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HashTable_0_15, (MR_Integer) 0))));
        MR_Integer Max_38 = (MR_Integer) ((MR_Unsigned) Size_36 - (MR_Unsigned) 1);
        MR_Word Map0_45;
        MR_Integer Size_53;
        MR_Word Map0_54;
        MR_Word Map_55;

        ll_backend__fact_table__get_free_hash_slot_2_4_p_0(STATE_VARIABLE_HashTable_0_15, HashVal_7, Max_38, FreeVal_8);
        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Key0_10));
          MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Index0_9));
          MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) -1));
        }
        Size_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HashTable_0_15, (MR_Integer) 0))));
        Map0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HashTable_0_15, (MR_Integer) 1))));
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), *FreeVal_8, ((MR_Box) (Var_18)), Map0_45, &Map0_54);
        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (Key1_12));
          MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (Index1_13));
          MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (*FreeVal_8));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), HashVal_7, ((MR_Box) (Var_21)), Map0_54, &Map_55);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_HashTable_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Size_53));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Map_55));
        }
      }
      else
      {
        MR_Integer next_value_of_HashVal_7 = Next_14;

        // direct tailcall eliminated
        ;
        HashVal_7 = next_value_of_HashVal_7;
        continue;
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.hash_table_insert_2\'/6", (MR_String) "hash table entry empty");
        return;
      }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__get_free_hash_slot_2_4_p_0(
  MR_Word HashTable_5,
  MR_Integer Start_6,
  MR_Integer Max_7,
  MR_Integer * Free_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Next_9;
    MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) Start_6 + (MR_Unsigned) 1);
    MR_Word Map_17;
    MR_Box conv0_Var_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    Next_9 = mercury__int__mod_2_f_0(Var_11, Max_7);
    Map_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HashTable_5, (MR_Integer) 1))));
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), Map_17, Next_9, &conv0_Var_10);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      MR_Integer next_value_of_Start_6 = Next_9;

      // direct tailcall eliminated
      ;
      Start_6 = next_value_of_Start_6;
      continue;
    }
    else
      *Free_8 = Next_9;
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__calculate_hash_table_size_3_p_0(
  MR_Word Globals_4,
  MR_Integer NumEntries_5,
  MR_Integer * HashTableSize_6)
{
  {
    MR_bool succeeded;
    MR_Integer PercentFull_7;
    MR_Word Primes_8;
    MR_Integer N_9;
    MR_Integer Var_75;
    MR_Integer P_82;
    MR_Word Ps_83;

    libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 346, &PercentFull_7);
    Primes_8 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[66]));
    Var_75 = (MR_Integer) ((MR_Unsigned) NumEntries_5 * (MR_Unsigned) 100);
    N_9 = mercury__int__f_47_47_2_f_0(Var_75, PercentFull_7);
    P_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Primes_8, (MR_Integer) 0))));
    Ps_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Primes_8, (MR_Integer) 1))));
    succeeded = (P_82 > N_9);
    if (succeeded)
      *HashTableSize_6 = P_82;
    else
    {
      MR_Integer P_90 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ps_83, (MR_Integer) 0))));
      MR_Word Ps_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ps_83, (MR_Integer) 1))));

      succeeded = (P_90 > N_9);
      if (succeeded)
        *HashTableSize_6 = P_90;
      else
      {
        MR_Integer P_98 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ps_91, (MR_Integer) 0))));
        MR_Word Ps_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ps_91, (MR_Integer) 1))));

        succeeded = (P_98 > N_9);
        if (succeeded)
          *HashTableSize_6 = P_98;
        else
        {
          MR_Integer P_106 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ps_99, (MR_Integer) 0))));
          MR_Word Ps_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ps_99, (MR_Integer) 1))));

          succeeded = (P_106 > N_9);
          if (succeeded)
            *HashTableSize_6 = P_106;
          else
          {
            MR_Integer P_114 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ps_107, (MR_Integer) 0))));
            MR_Word Ps_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ps_107, (MR_Integer) 1))));

            succeeded = (P_114 > N_9);
            if (succeeded)
              *HashTableSize_6 = P_114;
            else
            {
              MR_Integer P_122 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ps_115, (MR_Integer) 0))));
              MR_Word Ps_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ps_115, (MR_Integer) 1))));

              succeeded = (P_122 > N_9);
              if (succeeded)
                *HashTableSize_6 = P_122;
              else
              {
                MR_Integer P_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ps_123, (MR_Integer) 0))));
                MR_Word Ps_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ps_123, (MR_Integer) 1))));

                succeeded = (P_130 > N_9);
                if (succeeded)
                  *HashTableSize_6 = P_130;
                else
                {
                  MR_Integer P_138 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ps_131, (MR_Integer) 0))));
                  MR_Word Ps_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ps_131, (MR_Integer) 1))));

                  succeeded = (P_138 > N_9);
                  if (succeeded)
                    *HashTableSize_6 = P_138;
                  else
                  {
                    MR_Integer P_146 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ps_139, (MR_Integer) 0))));
                    MR_Word Ps_147 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ps_139, (MR_Integer) 1))));

                    succeeded = (P_146 > N_9);
                    if (succeeded)
                      *HashTableSize_6 = P_146;
                    else
                    {
                      MR_Integer P_154 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ps_147, (MR_Integer) 0))));
                      MR_Word Ps_155 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ps_147, (MR_Integer) 1))));

                      succeeded = (P_154 > N_9);
                      if (succeeded)
                        *HashTableSize_6 = P_154;
                      else
                      {
                        MR_Integer P_162 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ps_155, (MR_Integer) 0))));
                        MR_Word Ps_163 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ps_155, (MR_Integer) 1))));

                        succeeded = (P_162 > N_9);
                        if (succeeded)
                          *HashTableSize_6 = P_162;
                        else
                        {
                          MR_Integer P_170 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ps_163, (MR_Integer) 0))));
                          MR_Word Ps_171 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ps_163, (MR_Integer) 1))));

                          succeeded = (P_170 > N_9);
                          if (succeeded)
                            *HashTableSize_6 = P_170;
                          else
                          {
                            MR_Integer P_178 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ps_171, (MR_Integer) 0))));
                            MR_Word Ps_179 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ps_171, (MR_Integer) 1))));

                            succeeded = (P_178 > N_9);
                            if (succeeded)
                              *HashTableSize_6 = P_178;
                            else
                            {
                              MR_Integer P_186 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ps_179, (MR_Integer) 0))));
                              MR_Word Ps_187 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ps_179, (MR_Integer) 1))));

                              succeeded = (P_186 > N_9);
                              if (succeeded)
                                *HashTableSize_6 = P_186;
                              else
                              {
                                MR_Integer P_194 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ps_187, (MR_Integer) 0))));
                                MR_Word Ps_195 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ps_187, (MR_Integer) 1))));

                                succeeded = (P_194 > N_9);
                                if (succeeded)
                                  *HashTableSize_6 = P_194;
                                else
                                {
                                  MR_Integer P_202 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ps_195, (MR_Integer) 0))));
                                  MR_Word Ps_203 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ps_195, (MR_Integer) 1))));

                                  succeeded = (P_202 > N_9);
                                  if (succeeded)
                                    *HashTableSize_6 = P_202;
                                  else
                                    ll_backend__fact_table__calculate_hash_table_size_2_3_p_0(N_9, Ps_203, HashTableSize_6);
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

static void MR_CALL 
ll_backend__fact_table__calculate_hash_table_size_2_3_p_0(
  MR_Integer N_1,
  MR_Word HeadVar__2_2,
  MR_Integer * H_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.calculate_hash_table_size_2\'/3", (MR_String) "hash table too large (max size 2147483647)");
        return;
      }
    else
    {
      MR_Integer P_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Ps_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (P_9 > N_1);
      if (succeeded)
        *H_3 = P_9;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Ps_10;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__lower_level_collect_matching_facts_2_6_p_0(
  MR_Word Fact_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * Matching_4,
  MR_Word * HeadVar__5_5,
  MR_Integer InputArgNum_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Matching_4 = HeadVar__3_3;
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Fact0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Facts0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word InputArgs0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Fact0_11, (MR_Integer) 0))));
      MR_Word InputArgs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Fact_1, (MR_Integer) 0))));
      MR_Word Arg0_23;
      MR_Word Arg_25;
      MR_Word Var_27;
      MR_Word Var_28;

      succeeded = mercury__list__drop_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_const_0), InputArgNum_6, InputArgs0_17, &Var_27);
      if (succeeded)
      {
        succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Arg0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
          succeeded = mercury__list__drop_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_const_0), InputArgNum_6, InputArgs_20, &Var_28);
          if (succeeded)
          {
            succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              Arg_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
          }
        }
      }
      if (succeeded)
      {
        succeeded = mercury__term____Unify____const_0_0(Arg_25, Arg0_23);
        if (succeeded)
        {
          MR_Word Var_29;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Fact0_11));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (HeadVar__3_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Facts0_12;
          next_value_of_HeadVar__3_3 = Var_29;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        else
        {
          *Matching_4 = HeadVar__3_3;
          *HeadVar__5_5 = HeadVar__2_2;
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.lower_level_collect_matching_facts_2\'/6", (MR_String) "not enough input args");
          return;
        }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_table_data_8_p_0(
  MR_Word VeryVerbose_1,
  MR_Integer FactNum_2,
  MR_Integer FactTableSize_3,
  MR_Word HeadVar__4_4,
  MR_String StructName_5,
  MR_Word OutputStream_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Fact_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Facts_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Integer Var_28;
      MR_Integer next_value_of_FactNum_2;
      MR_Word next_value_of_HeadVar__4_4;

      ll_backend__fact_table__write_fact_data_8_p_0(VeryVerbose_1, FactNum_2, FactTableSize_3, Fact_20, StructName_5, OutputStream_6);
      Var_28 = (MR_Integer) ((MR_Unsigned) FactNum_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_FactNum_2 = Var_28;
      next_value_of_HeadVar__4_4 = Facts_21;
      FactNum_2 = next_value_of_FactNum_2;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__read_sort_file_line_6_p_0(
  MR_Word FactArgInfos_7,
  MR_Word ArgModes_8,
  MR_Word ModuleInfo_9,
  MR_Word * MaybeSortFileLine_10)
{
  {
    MR_bool succeeded;
    MR_Word Result_12;

    mercury__io__read_line_3_p_0(&Result_12);
    switch (MR_tag((MR_Word) Result_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeSortFileLine_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word LineChars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_12, (MR_Integer) 0))));
          MR_String LineString_14;
          MR_Word SortFileLine_15;
          MR_String InputArgsString_59;
          MR_String OutputArgsString_68;
          MR_Integer Index0_69;
          MR_Integer Pos0_58;
          MR_String Line1_60;
          MR_String Line2_62;
          MR_Integer Pos1_63;
          MR_String IndexString_64;
          MR_String Line3_65;
          MR_String Line4_67;
          MR_String Var_77;
          MR_String Var_78;
          MR_Char Var_61;
          MR_Char Var_66;

          mercury__string__from_char_list_2_p_0(LineChars_13, &LineString_14);
          succeeded = mercury__string__sub_string_search_3_p_0(LineString_14, (MR_String) "~", &Pos0_58);
          if (succeeded)
          {
            mercury__string__split_4_p_0(LineString_14, Pos0_58, &InputArgsString_59, &Line1_60);
            succeeded = mercury__string__first_char_3_p_3(Line1_60, &Var_61, &Line2_62);
            if (succeeded)
            {
              Var_77 = (MR_String) "~";
              succeeded = mercury__string__sub_string_search_3_p_0(Line2_62, Var_77, &Pos1_63);
              if (succeeded)
              {
                mercury__string__split_4_p_0(Line2_62, Pos1_63, &IndexString_64, &Line3_65);
                succeeded = mercury__string__first_char_3_p_3(Line3_65, &Var_66, &Line4_67);
                if (succeeded)
                {
                  Var_78 = (MR_String) "\n";
                  succeeded = mercury__string__remove_suffix_3_p_0(Line4_67, Var_78, &OutputArgsString_68);
                  if (succeeded)
                    succeeded = mercury__string__to_int_2_p_0(IndexString_64, &Index0_69);
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word InputArgStrings_70;
            MR_Word InputArgs_71;
            MR_Word OutputArgStrings_72;
            MR_Word OutputArgs_75;

            ll_backend__fact_table__split_key_to_arg_strings_2_p_0(InputArgsString_59, &InputArgStrings_70);
            ll_backend__fact_table__get_input_args_list_5_p_0(FactArgInfos_7, ArgModes_8, ModuleInfo_9, InputArgStrings_70, &InputArgs_71);
            ll_backend__fact_table__split_key_to_arg_strings_2_p_0(OutputArgsString_68, &OutputArgStrings_72);
            if ((OutputArgStrings_72 == (MR_Word) ((MR_Unsigned) 0U)))
              OutputArgs_75 = (MR_Word) ((MR_Unsigned) 0U);
            else
              ll_backend__fact_table__get_output_args_list_3_p_0(FactArgInfos_7, OutputArgStrings_72, &OutputArgs_75);
            {
              SortFileLine_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SortFileLine_15, 0) = ((MR_Box) (InputArgs_71));
              MR_hl_field(MR_mktag(0), SortFileLine_15, 1) = ((MR_Box) (Index0_69));
              MR_hl_field(MR_mktag(0), SortFileLine_15, 2) = ((MR_Box) (OutputArgs_75));
            }
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.split_sort_file_line\'/5", (MR_String) "sort file format incorrect");
              return;
            }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSortFileLine_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SortFileLine_15));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ErrorCode_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_12, (MR_Integer) 0))));
          MR_String ErrorMessage_17;
          MR_String FileName_18;
          MR_Word Pieces_19;
          MR_Word Spec_20;
          MR_Word Globals_21;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_33;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_48;
          MR_Word Var_49;

          mercury__io__error_message_2_p_0(ErrorCode_16, &ErrorMessage_17);
          mercury__io__input_stream_name_3_p_0(&FileName_18);
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (FileName_18));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (ErrorMessage_17));
          }
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[18])));
          }
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[81])));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
          }
          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
          }
          {
            Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[83])));
            MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_28));
          }
          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Pieces_19));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), Var_44, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(2), Var_44, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(2), Var_44, 3) = ((MR_Box) (Var_48));
          }
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.read_sort_file_line\'/6"));
            MR_hl_field(MR_mktag(0), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(MR_mktag(0), Spec_20, 3) = ((MR_Box) (Var_43));
          }
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_21);
          parse_tree__error_util__write_error_spec_ignore_4_p_0(Globals_21, Spec_20);
          *MaybeSortFileLine_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__get_output_args_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgStrings0_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Info_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Infos_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
      MR_Word IsOutput_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))) & (MR_Integer) 1);

      switch (IsOutput_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Infos_6;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          if ((ArgStrings0_2 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.get_output_args_list\'/3", (MR_String) "not enough ArgStrings");
              return;
            }
          else
          {
            MR_String ArgString_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), ArgStrings0_2, (MR_Integer) 0))));
            MR_Word ArgStrings_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgStrings0_2, (MR_Integer) 1))));
            MR_Word Arg_14;
            MR_Word Args0_15;
            MR_Word Var_27;
            MR_Word Var_28;

            succeeded = ((MR_tag((MR_Word) Type_9)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_9, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))) & (MR_Integer) 15);
                succeeded = (Var_28 == (MR_Integer) 0);
              }
            }
            if (succeeded)
            {
              MR_Integer I_21;

              succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 36, ArgString_12, &I_21);
              if (succeeded)
              {
                MR_Word Var_31;

                Var_31 = mercury__integer__integer_1_f_0(I_21);
                {
                  Arg_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Arg_14, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(1), Arg_14, 1) = ((MR_Box) (Var_31));
                  MR_hl_field(MR_mktag(1), Arg_14, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
                }
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.convert_key_string_to_arg\'/3", (MR_String) "could not convert string to int");
                  return;
                }
            }
            else
            {
              MR_Word Var_36;

              succeeded = ((MR_tag((MR_Word) Type_9)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_9, (MR_Integer) 0))));
                succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 4U));
              }
              if (succeeded)
              {
                MR_Word Cs0_22;
                MR_Word Cs1_23;
                MR_Word Cs_24;
                MR_String S_25;

                mercury__string__to_char_list_2_p_0(ArgString_12, &Cs0_22);
                ll_backend__fact_table__remove_sort_file_escapes_3_p_0(Cs0_22, (MR_Word) ((MR_Unsigned) 0U), &Cs1_23);
                mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Cs1_23, &Cs_24);
                mercury__string__from_char_list_2_p_0(Cs_24, &S_25);
                {
                  Arg_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Arg_14, 0) = ((MR_Box) (S_25));
                }
              }
              else
              {
                MR_Word Var_38;

                succeeded = ((MR_tag((MR_Word) Type_9)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_9, (MR_Integer) 0))));
                  succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
                }
                if (succeeded)
                {
                  MR_Float F_26;

                  succeeded = mercury__string__to_float_2_p_0(ArgString_12, &F_26);
                  if (succeeded)
                    {
                      Arg_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Arg_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Arg_14, 1) = MR_box_float(F_26);
                    }
                  else
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.convert_key_string_to_arg\'/3", (MR_String) "could not convert string to float");
                      return;
                    }
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.convert_key_string_to_arg\'/3", (MR_String) "unsupported type");
                    return;
                  }
              }
            }
            ll_backend__fact_table__get_output_args_list_3_p_0(Infos_6, ArgStrings_13, &Args0_15);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args0_15));
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__get_input_args_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3,
  MR_Word ArgStrings0_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.get_input_args_list\'/5", (MR_String) "too many argmodes");
          return;
        }
    else
    {
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.get_input_args_list\'/5", (MR_String) "too many fact_arg_infos");
          return;
        }
      else
      {
        MR_Word Mode_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Modes_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

        succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(ModuleInfo_3, Mode_24);
        if (succeeded)
          if ((ArgStrings0_4 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.get_input_args_list\'/5", (MR_String) "not enough ArgStrings");
              return;
            }
          else
          {
            MR_String ArgString_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), ArgStrings0_4, (MR_Integer) 0))));
            MR_Word ArgStrings_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgStrings0_4, (MR_Integer) 1))));
            MR_Word Type_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
            MR_Word Arg_34;
            MR_Word Args0_35;
            MR_Word Var_49;
            MR_Word Var_50;

            succeeded = ((MR_tag((MR_Word) Type_31)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_31, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 0))) & (MR_Integer) 15);
                succeeded = (Var_50 == (MR_Integer) 0);
              }
            }
            if (succeeded)
            {
              MR_Integer I_43;

              succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 36, ArgString_29, &I_43);
              if (succeeded)
              {
                MR_Word Var_53;

                Var_53 = mercury__integer__integer_1_f_0(I_43);
                {
                  Arg_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Arg_34, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(1), Arg_34, 1) = ((MR_Box) (Var_53));
                  MR_hl_field(MR_mktag(1), Arg_34, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
                }
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.convert_key_string_to_arg\'/3", (MR_String) "could not convert string to int");
                  return;
                }
            }
            else
            {
              MR_Word Var_58;

              succeeded = ((MR_tag((MR_Word) Type_31)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_31, (MR_Integer) 0))));
                succeeded = (Var_58 == (MR_Word) ((MR_Unsigned) 4U));
              }
              if (succeeded)
              {
                MR_Word Cs0_44;
                MR_Word Cs1_45;
                MR_Word Cs_46;
                MR_String S_47;

                mercury__string__to_char_list_2_p_0(ArgString_29, &Cs0_44);
                ll_backend__fact_table__remove_sort_file_escapes_3_p_0(Cs0_44, (MR_Word) ((MR_Unsigned) 0U), &Cs1_45);
                mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Cs1_45, &Cs_46);
                mercury__string__from_char_list_2_p_0(Cs_46, &S_47);
                {
                  Arg_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Arg_34, 0) = ((MR_Box) (S_47));
                }
              }
              else
              {
                MR_Word Var_60;

                succeeded = ((MR_tag((MR_Word) Type_31)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_31, (MR_Integer) 0))));
                  succeeded = (Var_60 == (MR_Word) ((MR_Unsigned) 0U));
                }
                if (succeeded)
                {
                  MR_Float F_48;

                  succeeded = mercury__string__to_float_2_p_0(ArgString_29, &F_48);
                  if (succeeded)
                    {
                      Arg_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Arg_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Arg_34, 1) = MR_box_float(F_48);
                    }
                  else
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.convert_key_string_to_arg\'/3", (MR_String) "could not convert string to float");
                      return;
                    }
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.convert_key_string_to_arg\'/3", (MR_String) "unsupported type");
                    return;
                  }
              }
            }
            ll_backend__fact_table__get_input_args_list_5_p_0(Var_38, Modes_25, ModuleInfo_3, ArgStrings_30, &Args0_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_34));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args0_35));
            }
          }
        else
        {
          MR_Word next_value_of_HeadVar__1_1 = Var_38;
          MR_Word next_value_of_HeadVar__2_2 = Modes_25;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__remove_sort_file_escapes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = HeadVar__2_2;
    else
    {
      MR_Char C0_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Cs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = (C0_5 == (MR_Char) 92);
      if (succeeded)
        if ((Cs0_6 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.remove_sort_file_escapes\'/3", (MR_String) "something went wrong");
            return;
          }
        else
        {
          MR_Char C1_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Cs0_6, (MR_Integer) 0)));
          MR_Word Cs1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs0_6, (MR_Integer) 1))));
          MR_Char C_11;
          MR_Word Var_16;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_HeadVar__2_2;

          succeeded = (C1_9 == (MR_Char) 92);
          if (succeeded)
            C_11 = (MR_Char) 92;
          else
          {
            succeeded = (C1_9 == (MR_Char) 99);
            if (succeeded)
              C_11 = (MR_Char) 58;
            else
            {
              succeeded = (C1_9 == (MR_Char) 116);
              if (succeeded)
                C_11 = (MR_Char) 126;
              else
              {
                succeeded = (C1_9 == (MR_Char) 110);
                if (succeeded)
                  C_11 = (MR_Char) 10;
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.remove_sort_file_escapes\'/3", (MR_String) "something went wrong");
                    return;
                  }
              }
            }
          }
          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_Word) (C_11));
            MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (HeadVar__2_2));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Cs1_10;
          next_value_of_HeadVar__2_2 = Var_16;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      else
      {
        MR_Word Var_17;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;

        {
          Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_Word) (C0_5));
          MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (HeadVar__2_2));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Cs0_6;
        next_value_of_HeadVar__2_2 = Var_17;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__split_key_to_arg_strings_2_p_0(
  MR_String Key0_3,
  MR_Word * ArgStrings_4)
{
  {
    MR_bool succeeded = (strcmp(Key0_3, (MR_String) "") == 0);

    if (succeeded)
      *ArgStrings_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String ArgString_6;
      MR_String Key2_9;
      MR_Integer Pos_5;
      MR_String Key1_7;
      MR_Char Var_8;

      succeeded = mercury__string__sub_string_search_3_p_0(Key0_3, (MR_String) ":", &Pos_5);
      if (succeeded)
      {
        mercury__string__split_4_p_0(Key0_3, Pos_5, &ArgString_6, &Key1_7);
        succeeded = mercury__string__first_char_3_p_3(Key1_7, &Var_8, &Key2_9);
      }
      if (succeeded)
      {
        MR_Word ArgStrings0_10;

        ll_backend__fact_table__split_key_to_arg_strings_2_p_0(Key2_9, &ArgStrings0_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ArgStrings_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgString_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgStrings0_10));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.split_key_to_arg_strings\'/2", (MR_String) "sort file key format is incorrect");
          return;
        }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_closing_brace_3_p_0(
  MR_Word OutputStream_4)
{
  mercury__io__write_string_4_p_0(OutputStream_4, (MR_String) "};\n\n");
}

static void MR_CALL 
ll_backend__fact_table__write_new_data_array_5_p_0(
  MR_Word OutputStream_6,
  MR_String StructName_7,
  MR_Integer FactNum_8)
{
  {
    MR_String Var_28;

    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "const struct ");
    mercury__io__write_string_4_p_0(OutputStream_6, StructName_7);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "_struct ");
    mercury__io__write_string_4_p_0(OutputStream_6, StructName_7);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactNum_8, &Var_28);
    mercury__io__write_string_4_p_0(OutputStream_6, Var_28);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "[] = {\n");
  }
}

static void MR_CALL 
ll_backend__fact_table__infer_determinism_pass_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Globals_2,
  MR_Word ExistsAllInMode_3,
  MR_Word STATE_VARIABLE_ProcTable_0_4,
  MR_Word * STATE_VARIABLE_ProcTable_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcTable_5 = STATE_VARIABLE_ProcTable_0_4;
    else
    {
      MR_Integer ProcID_16;
      MR_String FileName_17;
      MR_Word ProcFiles_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ProcInfo0_23;
      MR_String Command_24;
      MR_Word Verbose_25;
      MR_Word Result_26;
      MR_Word Determinism_28;
      MR_Word ProcInfo_34;
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String Var_40;
      MR_Word STATE_VARIABLE_ProcTable_103_103;
      MR_String Var_110;
      MR_String Var_112;
      MR_String Var_113;
      MR_String Var_115;
      MR_String Var_116;
      MR_Box conv0_ProcInfo0_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_4;

      ProcID_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
      FileName_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_4, ((MR_Box) (ProcID_16)), &conv0_ProcInfo0_23);
      ProcInfo0_23 = ((MR_Word) (conv0_ProcInfo0_23));
      Var_110 = mercury__string__f_43_43_2_f_0(FileName_17, (MR_String) " | LC_ALL=C sort -cu >/dev/null 2>&1");
      Var_112 = mercury__string__f_43_43_2_f_0((MR_String) " && cut -d\'~\' -f1 ", Var_110);
      Var_113 = mercury__string__f_43_43_2_f_0(FileName_17, Var_112);
      Var_115 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_113);
      Var_116 = mercury__string__f_43_43_2_f_0(FileName_17, Var_115);
      Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "LC_ALL=C sort -o ", Var_116);
      parse_tree__module_cmds__make_command_string_3_p_0(Var_40, (MR_Integer) 1, &Command_24);
      libs__globals__lookup_bool_option_3_p_0(Globals_2, (MR_Integer) 65, &Verbose_25);
      libs__file_util__maybe_write_string_4_p_0(Verbose_25, (MR_String) "% Invoking system command \140");
      libs__file_util__maybe_write_string_4_p_0(Verbose_25, Command_24);
      libs__file_util__maybe_write_string_4_p_0(Verbose_25, (MR_String) "\'...");
      mercury__io__call_system_4_p_0(Command_24, &Result_26);
      libs__file_util__maybe_write_string_4_p_0(Verbose_25, (MR_String) "done.\n");
      if (((MR_tag((MR_Word) Result_26)) == (MR_Integer) 1))
      {
        MR_Word ErrorCode_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_26, (MR_Integer) 0))));

        ll_backend__fact_table__write_call_system_error_msg_5_p_0(Globals_2, (MR_String) "sort", ErrorCode_33);
        Determinism_28 = (MR_Integer) 6;
      }
      else
      {
        MR_Integer ExitStatus_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Result_26, (MR_Integer) 0))));

        succeeded = (ExitStatus_27 == (MR_Integer) 0);
        if (!(succeeded))
        {
          succeeded = (ExistsAllInMode_3 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (ProcFiles_18 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
          Determinism_28 = (MR_Integer) 1;
        else
        {
          succeeded = (ExitStatus_27 >= (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word MaybeDet_29;
            MR_Word Var_108;

            hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_23, &MaybeDet_29);
            succeeded = (MaybeDet_29 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_29, (MR_Integer) 0))));
              switch (Var_108) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 4:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 5:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            if (succeeded)
              Determinism_28 = (MR_Integer) 5;
            else
              Determinism_28 = (MR_Integer) 3;
          }
          else
          {
            MR_String ProgName_30;
            MR_Word Pieces_31;
            MR_Word Spec_32;
            MR_Word Var_68;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_98;
            MR_Word Var_99;

            mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_30);
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_68, 0) = ((MR_Box) (ProgName_30));
            }
            {
              Pieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_31, 0) = ((MR_Box) (Var_68));
              MR_hl_field(MR_mktag(1), Pieces_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[30])));
            }
            {
              Var_99 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (Pieces_31));
            }
            {
              Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
              MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(2), Var_94, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_94, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_94, 3) = ((MR_Box) (Var_98));
            }
            {
              Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
              MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.infer_determinism_pass_2\'/7"));
              MR_hl_field(MR_mktag(0), Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(MR_mktag(0), Spec_32, 3) = ((MR_Box) (Var_93));
            }
            parse_tree__error_util__write_error_spec_ignore_4_p_0(Globals_2, Spec_32);
            Determinism_28 = (MR_Integer) 6;
          }
        }
      }
      hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(Determinism_28, ProcInfo0_23, &ProcInfo_34);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcID_16)), ((MR_Box) (ProcInfo_34)), STATE_VARIABLE_ProcTable_0_4, &STATE_VARIABLE_ProcTable_103_103);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ProcFiles_18;
      next_value_of_STATE_VARIABLE_ProcTable_0_4 = STATE_VARIABLE_ProcTable_103_103;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcTable_0_4 = next_value_of_STATE_VARIABLE_ProcTable_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__write_call_system_error_msg_5_p_0(
  MR_Word Globals_6,
  MR_String Cmd_7,
  MR_Word ErrorCode_8)
{
  {
    MR_String ErrorMsg_10;
    MR_String ProgName_11;
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_48;
    MR_Word Var_49;

    mercury__io__error_message_2_p_0(ErrorCode_8, &ErrorMsg_10);
    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_11);
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_18, 0) = ((MR_Box) (ProgName_11));
    }
    Var_20 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[81]));
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Cmd_7));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (ErrorMsg_10));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[68])));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[82])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Pieces_12));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), Var_44, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_44, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_44, 3) = ((MR_Box) (Var_48));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.write_call_system_error_msg\'/5"));
      MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(MR_mktag(0), Spec_13, 3) = ((MR_Box) (Var_43));
    }
    parse_tree__error_util__write_error_spec_ignore_4_p_0(Globals_6, Spec_13);
  }
}

static void MR_CALL 
ll_backend__fact_table__close_sort_files_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer ProcID_8;
    MR_Word Stream_9;
    MR_Word ProcStreams_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_String FileName_11;
    MR_Word ProcFiles_12;
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_17;

    ProcID_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
    Stream_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));
    mercury__io__output_stream_name_4_p_0(Stream_9, &FileName_11);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (ProcID_8));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (FileName_11));
    }
    mercury__io__close_output_3_p_0(Stream_9);
    ll_backend__fact_table__close_sort_files_4_p_0(ProcStreams_10, &ProcFiles_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ProcFiles_12));
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__open_sort_files_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Errors_0_3,
  MR_Word * STATE_VARIABLE_Errors_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Errors_4 = STATE_VARIABLE_Errors_0_3;
  }
  else
  {
    MR_Integer ProcID_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ProcIDs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word SortFileNameResult_18;

    libs__file_util__open_temp_output_3_p_0(&SortFileNameResult_18);
    if (((MR_tag((MR_Word) SortFileNameResult_18)) == (MR_Integer) 1))
    {
      MR_String ErrorMessage_22 = ((MR_String) ((MR_hl_field(MR_mktag(1), SortFileNameResult_18, (MR_Integer) 0))));
      MR_Word Var_28;
      MR_Word Var_30;
      MR_Word Var_41;

      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (ErrorMessage_22));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (Var_28));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Errors_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Errors_0_3));
      }
    }
    else
    {
      MR_Word Stream_20;
      MR_Word ProcStreams0_21;
      MR_Tuple Var_32 = ((MR_Tuple) ((MR_hl_field(MR_mktag(0), SortFileNameResult_18, (MR_Integer) 0))));
      MR_Word Var_35;

      Stream_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1))));
      ll_backend__fact_table__open_sort_files_6_p_0(ProcIDs_14, &ProcStreams0_21, STATE_VARIABLE_Errors_0_3, STATE_VARIABLE_Errors_4);
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (ProcID_13));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (Stream_20));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ProcStreams0_21));
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__infer_determinism_pass_1_12_p_0(
  MR_Word STATE_VARIABLE_PredInfo_0_34,
  MR_Word * STATE_VARIABLE_PredInfo_35,
  MR_Word Context_14,
  MR_Word ModuleInfo_15,
  MR_Word * CheckProcs_16,
  MR_Word * ExistsAllInMode_17,
  MR_Word * WriteHashTables_18,
  MR_Word * WriteDataTable_19,
  MR_Word STATE_VARIABLE_FactArgInfos_0_36,
  MR_Word * STATE_VARIABLE_FactArgInfos_37,
  MR_Word STATE_VARIABLE_Errors_0_38,
  MR_Word * STATE_VARIABLE_Errors_39)
{
  {
    MR_Word ProcTable0_22;
    MR_Word ProcIDs_23;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_34, &ProcTable0_22);
    ProcIDs_23 = hlds__hlds_pred__pred_info_procids_1_f_0(STATE_VARIABLE_PredInfo_0_34);
    if ((ProcIDs_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String PredString_24;
      MR_Integer Arity_25;
      MR_String Msg_26;
      MR_Word Var_50;
      MR_Word Var_52;
      MR_String Var_56;
      MR_String Var_63;
      MR_String Var_65;
      MR_String Var_66;
      MR_Word Var_74;
      MR_Word Var_75;

      PredString_24 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_0_34);
      Arity_25 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(STATE_VARIABLE_PredInfo_0_34);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), Arity_25, &Var_56);
      Var_63 = mercury__string__f_43_43_2_f_0(Var_56, (MR_String) "\'.\n");
      Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_63);
      Var_66 = mercury__string__f_43_43_2_f_0(PredString_24, Var_65);
      Msg_26 = mercury__string__f_43_43_2_f_0((MR_String) "Error: no modes declared for fact table \140", Var_66);
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Msg_26));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Context_14));
      }
      {
        Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (Var_50));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Errors_39 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Errors_0_38));
      }
      *CheckProcs_16 = (MR_Word) ((MR_Unsigned) 0U);
      *ExistsAllInMode_17 = (MR_Integer) 0;
      *WriteHashTables_18 = (MR_Integer) 0;
      *WriteDataTable_19 = (MR_Integer) 0;
      *STATE_VARIABLE_PredInfo_35 = STATE_VARIABLE_PredInfo_0_34;
      *STATE_VARIABLE_FactArgInfos_37 = STATE_VARIABLE_FactArgInfos_0_36;
    }
    else
    {
      MR_Word ProcTable_29;
      MR_Word CheckProcs0_30;
      MR_Word MaybeAllInProc_31;
      MR_Word CheckProcs1_33;

      ll_backend__fact_table__infer_proc_determinism_pass_1_13_p_0(ProcIDs_23, ModuleInfo_15, ProcTable0_22, &ProcTable_29, (MR_Word) ((MR_Unsigned) 0U), &CheckProcs0_30, STATE_VARIABLE_FactArgInfos_0_36, STATE_VARIABLE_FactArgInfos_37, &MaybeAllInProc_31, WriteHashTables_18, WriteDataTable_19, STATE_VARIABLE_Errors_0_38, STATE_VARIABLE_Errors_39);
      if ((MaybeAllInProc_31 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        CheckProcs1_33 = CheckProcs0_30;
        *ExistsAllInMode_17 = (MR_Integer) 0;
      }
      else
      {
        MR_Integer ProcID_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeAllInProc_31, (MR_Integer) 0))));

        {
          CheckProcs1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CheckProcs1_33, 0) = ((MR_Box) (ProcID_32));
          MR_hl_field(MR_mktag(1), CheckProcs1_33, 1) = ((MR_Box) (CheckProcs0_30));
        }
        *ExistsAllInMode_17 = (MR_Integer) 1;
      }
      mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), CheckProcs1_33, CheckProcs_16);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_29, STATE_VARIABLE_PredInfo_0_34, STATE_VARIABLE_PredInfo_35);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__infer_proc_determinism_pass_1_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_ProcTable_0_3,
  MR_Word * STATE_VARIABLE_ProcTable_4,
  MR_Word STATE_VARIABLE_CheckProcs_0_5,
  MR_Word * STATE_VARIABLE_CheckProcs_6,
  MR_Word STATE_VARIABLE_FactArgInfos_0_7,
  MR_Word * STATE_VARIABLE_FactArgInfos_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word STATE_VARIABLE_Errors_0_12,
  MR_Word * STATE_VARIABLE_Errors_13)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__10_10 = (MR_Integer) 0;
      *HeadVar__11_11 = (MR_Integer) 0;
      *STATE_VARIABLE_Errors_13 = STATE_VARIABLE_Errors_0_12;
      *STATE_VARIABLE_FactArgInfos_8 = STATE_VARIABLE_FactArgInfos_0_7;
      *STATE_VARIABLE_CheckProcs_6 = STATE_VARIABLE_CheckProcs_0_5;
      *STATE_VARIABLE_ProcTable_4 = STATE_VARIABLE_ProcTable_0_3;
    }
    else
    {
      MR_Integer ProcID_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ProcIDs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ProcInfo0_37;
      MR_Word ArgModes_38;
      MR_Word ModeType_39;
      MR_Word InferredDetism_40;
      MR_Word WriteHashTables0_41;
      MR_Word WriteDataTable0_42;
      MR_Word MaybeAllInProc0_43;
      MR_Word MaybeAllInProc1_49;
      MR_Word WriteHashTables1_50;
      MR_Word WriteDataTable1_51;
      MR_Word STATE_VARIABLE_FactArgInfos_61_61;
      MR_Word STATE_VARIABLE_Errors_69_69;
      MR_Word STATE_VARIABLE_CheckProcs_72_72;
      MR_Word STATE_VARIABLE_ProcTable_78_78;
      MR_Box conv0_ProcInfo0_37;
      MR_Word Determinism_47;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_3, ((MR_Box) (ProcID_27)), &conv0_ProcInfo0_37);
      ProcInfo0_37 = ((MR_Word) (conv0_ProcInfo0_37));
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_37, &ArgModes_38);
      ll_backend__fact_table__fill_in_fact_arg_infos_4_p_0(ArgModes_38, ModuleInfo_2, STATE_VARIABLE_FactArgInfos_0_7, &STATE_VARIABLE_FactArgInfos_61_61);
      ll_backend__fact_table__fact_table_mode_type_3_p_0(ArgModes_38, ModuleInfo_2, &ModeType_39);
      switch (ModeType_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            InferredDetism_40 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_3[4]));
            WriteHashTables0_41 = (MR_Integer) 1;
            WriteDataTable0_42 = (MR_Integer) 0;
            {
              MaybeAllInProc0_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeAllInProc0_43, 0) = ((MR_Box) (ProcID_27));
            }
            STATE_VARIABLE_CheckProcs_72_72 = STATE_VARIABLE_CheckProcs_0_5;
            STATE_VARIABLE_Errors_69_69 = STATE_VARIABLE_Errors_0_12;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MaybeDet_44;
            MR_Word Var_87;

            hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_37, &MaybeDet_44);
            succeeded = (MaybeDet_44 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_44, (MR_Integer) 0))));
              switch (Var_87) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 4:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 5:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            if (succeeded)
              InferredDetism_40 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_3[7]));
            else
              InferredDetism_40 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_3[8]));
            WriteHashTables0_41 = (MR_Integer) 0;
            WriteDataTable0_42 = (MR_Integer) 1;
            MaybeAllInProc0_43 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_CheckProcs_72_72 = STATE_VARIABLE_CheckProcs_0_5;
            STATE_VARIABLE_Errors_69_69 = STATE_VARIABLE_Errors_0_12;
          }
          break;
        case (MR_Integer) 2:
          {
            InferredDetism_40 = (MR_Word) ((MR_Unsigned) 0U);
            {
              STATE_VARIABLE_CheckProcs_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_CheckProcs_72_72, 0) = ((MR_Box) (ProcID_27));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_CheckProcs_72_72, 1) = ((MR_Box) (STATE_VARIABLE_CheckProcs_0_5));
            }
            WriteHashTables0_41 = (MR_Integer) 1;
            WriteDataTable0_42 = (MR_Integer) 1;
            MaybeAllInProc0_43 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_Errors_69_69 = STATE_VARIABLE_Errors_0_12;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Context_45;
            MR_Word Var_94;
            MR_Word Var_95;

            InferredDetism_40 = (MR_Word) ((MR_Unsigned) 4U);
            hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo0_37, &Context_45);
            {
              Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Context_45));
            }
            {
              Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (Var_95));
              MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[78])));
            }
            {
              STATE_VARIABLE_Errors_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Errors_69_69, 0) = ((MR_Box) (Var_94));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Errors_69_69, 1) = ((MR_Box) (STATE_VARIABLE_Errors_0_12));
            }
            WriteHashTables0_41 = (MR_Integer) 0;
            WriteDataTable0_42 = (MR_Integer) 0;
            MaybeAllInProc0_43 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_CheckProcs_72_72 = STATE_VARIABLE_CheckProcs_0_5;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Context_83;

            InferredDetism_40 = (MR_Word) ((MR_Unsigned) 4U);
            hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo0_37, &Context_83);
            ll_backend__fact_table__add_error_report_4_p_0(Context_83, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[80])), STATE_VARIABLE_Errors_0_12, &STATE_VARIABLE_Errors_69_69);
            WriteHashTables0_41 = (MR_Integer) 0;
            WriteDataTable0_42 = (MR_Integer) 0;
            MaybeAllInProc0_43 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_CheckProcs_72_72 = STATE_VARIABLE_CheckProcs_0_5;
          }
          break;
      }
      succeeded = ((MR_tag((MR_Word) InferredDetism_40)) == (MR_Integer) 1);
      if (succeeded)
      {
        Determinism_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InferredDetism_40, (MR_Integer) 0))) & (MR_Integer) 7);
        {
          MR_Word ProcInfo_48;

          hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(Determinism_47, ProcInfo0_37, &ProcInfo_48);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcID_27)), ((MR_Box) (ProcInfo_48)), STATE_VARIABLE_ProcTable_0_3, &STATE_VARIABLE_ProcTable_78_78);
        }
      }
      else
        STATE_VARIABLE_ProcTable_78_78 = STATE_VARIABLE_ProcTable_0_3;
      ll_backend__fact_table__infer_proc_determinism_pass_1_13_p_0(ProcIDs_28, ModuleInfo_2, STATE_VARIABLE_ProcTable_78_78, STATE_VARIABLE_ProcTable_4, STATE_VARIABLE_CheckProcs_72_72, STATE_VARIABLE_CheckProcs_6, STATE_VARIABLE_FactArgInfos_61_61, STATE_VARIABLE_FactArgInfos_8, &MaybeAllInProc1_49, &WriteHashTables1_50, &WriteDataTable1_51, STATE_VARIABLE_Errors_69_69, STATE_VARIABLE_Errors_13);
      if ((MaybeAllInProc0_43 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__9_9 = MaybeAllInProc1_49;
      else
        *HeadVar__9_9 = MaybeAllInProc0_43;
      mercury__bool__or_3_p_0(WriteHashTables0_41, WriteHashTables1_50, HeadVar__10_10);
      mercury__bool__or_3_p_0(WriteDataTable0_42, WriteDataTable1_51, HeadVar__11_11);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__fact_table_mode_type_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Integer) 4;
    else
    {
      MR_Word Mode_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Modes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModeType0_9;

      succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(ModuleInfo_2, Mode_5);
      if (succeeded)
        ModeType0_9 = (MR_Integer) 0;
      else
      {
        succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(ModuleInfo_2, Mode_5);
        if (succeeded)
          ModeType0_9 = (MR_Integer) 1;
        else
          ModeType0_9 = (MR_Integer) 3;
      }
      succeeded = (ModeType0_9 == (MR_Integer) 3);
      if (succeeded)
        *HeadVar__3_3 = (MR_Integer) 3;
      else
      {
        MR_Word ModeType1_10;

        ll_backend__fact_table__fact_table_mode_type_3_p_0(Modes_6, ModuleInfo_2, &ModeType1_10);
        succeeded = (ModeType1_10 == (MR_Integer) 4);
        if (succeeded)
          *HeadVar__3_3 = ModeType0_9;
        else
        {
          succeeded = (ModeType1_10 == (MR_Integer) 3);
          if (succeeded)
            *HeadVar__3_3 = (MR_Integer) 3;
          else
          {
            succeeded = (ModeType1_10 == ModeType0_9);
            if (succeeded)
              *HeadVar__3_3 = ModeType0_9;
            else
              *HeadVar__3_3 = (MR_Integer) 2;
          }
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__fill_in_fact_arg_infos_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.fill_in_fact_arg_infos\'/4", (MR_String) "too many fact_arg_infos");
          return;
        }
    else
    {
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.fill_in_fact_arg_infos\'/4", (MR_String) "too many argmodes");
          return;
        }
      else
      {
        MR_Word Info0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Infos0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Info_23;
        MR_Word Infos_24;
        MR_Word Type_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_21, (MR_Integer) 0))));
        MR_Word IsInput_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_21, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

        succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(ModuleInfo_2, Var_32);
        if (succeeded)
          {
            Info_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Info_23, 0) = ((MR_Box) (Type_25));
            MR_hl_field(MR_mktag(0), Info_23, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          }
        else
        {
          succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(ModuleInfo_2, Var_32);
          if (succeeded)
            {
              Info_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Info_23, 0) = ((MR_Box) (Type_25));
              MR_hl_field(MR_mktag(0), Info_23, 1) = (MR_Box) (((((MR_Unsigned) (IsInput_26) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
            }
          else
            Info_23 = Info0_21;
        }
        ll_backend__fact_table__fill_in_fact_arg_infos_4_p_0(Var_31, ModuleInfo_2, Infos0_22, &Infos_24);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Info_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Infos_24));
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__init_fact_arg_infos_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Type_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Types_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Info_5;
    MR_Word Infos_6;

    {
      Info_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_5, 0) = ((MR_Box) (Type_3));
      MR_hl_field(MR_mktag(0), Info_5, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    }
    ll_backend__fact_table__init_fact_arg_infos_2_p_0(Types_4, &Infos_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Info_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Infos_6));
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__create_fact_table_header_7_p_0(
  MR_Word PredName_8,
  MR_Word PredInfo_9,
  MR_Word FactArgInfos_10,
  MR_String * C_HeaderCode_11,
  MR_String * StructName_12,
  MR_Word STATE_VARIABLE_Errors_0_19,
  MR_Word * STATE_VARIABLE_Errors_20)
{
  {
    MR_bool succeeded;
    MR_String Identifier_14;
    MR_Word Context_15;
    MR_String StructContents_16;
    MR_String StructDef_17;
    MR_String Var_22;

    Identifier_14 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(PredName_8);
    Var_22 = mercury__string__f_43_43_2_f_0(Identifier_14, (MR_String) "_fact_table");
    *StructName_12 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_22);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_9, &Context_15);
    ll_backend__fact_table__create_fact_table_struct_6_p_0(FactArgInfos_10, (MR_Integer) 1, Context_15, &StructContents_16, STATE_VARIABLE_Errors_0_19, STATE_VARIABLE_Errors_20);
    succeeded = (strcmp(StructContents_16, (MR_String) "") == 0);
    if (succeeded)
      StructDef_17 = (MR_String) "";
    else
    {
      MR_String Var_27;
      MR_String Var_28;
      MR_String Var_30;

      Var_30 = mercury__string__f_43_43_2_f_0(StructContents_16, (MR_String) "};\n\n");
      Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "_struct {\n", Var_30);
      Var_27 = mercury__string__f_43_43_2_f_0(*StructName_12, Var_28);
      StructDef_17 = mercury__string__f_43_43_2_f_0((MR_String) "struct ", Var_27);
    }
    mercury__string__append_3_p_2(StructDef_17, (MR_String) "\n#ifndef MERCURY_FACT_TABLE_HASH_TABLES\n#define MERCURY_FACT_TABLE_HASH_TABLES\n\nstruct MR_fact_table_hash_table_s {\n    MR_Integer size;                        " "    /* size of the hash table */\n    struct MR_fact_table_hash_entry_s *table;   /* the actual table */\n};\n\nstruct MR_fact_table_hash_table_f {\n    MR_Integer s" "ize;                            /* size of the hash table */\n    struct MR_fact_table_hash_entry_f *table;   /* the actual table */\n};\n\nstruct MR_fact_table_has" "h_table_i {\n    MR_Integer size;                            /* size of the hash table */\n    struct MR_fact_table_hash_entry_i *table;   /* the actual table */\n" "};\n\n/* hash table for string keys */\nstruct MR_fact_table_hash_entry_s {\n    MR_ConstString  key;        /* lookup key */\n    const MR_Word   *index;     /* ind" "ex into fact table data array or       */\n                                /* pointer to hash table for next argument   */\n#if TAGBITS < 2\n    short type;       " "          /* 0 if entry empty,                         */\n                                /* 1 if entry is a pointer to the data table */\n                      " "          /* 2 if entry is a pointer to another        */\n                                /*   hash table                              */\n#endif\n    int next;  " "                 /* location of next entry with the same hash */\n                                /* value */\n};\n\n/* hash table for float keys */\nstruct MR_fact_" "table_hash_entry_f {\n    MR_Float        key;\n    const MR_Word   *index;\n#if TAGBITS < 2\n    short           type;\n#endif\n    int             next;\n};\n\n/* hash" " table for int keys */\nstruct MR_fact_table_hash_entry_i {\n    MR_Integer      key;\n    const MR_Word   *index;\n#if TAGBITS < 2\n    short           type;\n#endif" "\n    int             next;\n};\n\n#if TAGBITS >= 2\n    #define MR_FACT_TABLE_MAKE_TAGGED_INDEX(i, t)           MR_mkword(MR_mktag(t), MR_mkbody(i))\n    #define MR_" "FACT_TABLE_MAKE_TAGGED_POINTER(p, t)         MR_mkword(MR_mktag(t), p)\n    #define MR_FACT_TABLE_HASH_ENTRY_TYPE(p)                MR_tag((MR_Word)((p).index))\n" "    #define MR_FACT_TABLE_HASH_INDEX(w)                     MR_unmkbody(w)\n    #define MR_FACT_TABLE_HASH_POINTER(w)                   MR_body(w, MR_tag(w))\n#el" "se\n    #define MR_FACT_TABLE_MAKE_TAGGED_INDEX(i, t)           ((const MR_Word *) i), (t)\n    #define MR_FACT_TABLE_MAKE_TAGGED_POINTER(p, t)         ((const MR" "_Word *) p), (t)\n    #define MR_FACT_TABLE_HASH_ENTRY_TYPE(p)       ((p).type)\n    #define MR_FACT_TABLE_HASH_INDEX(w)            (w)\n    #define MR_FACT_TABLE_" "HASH_POINTER(w)          (w)\n#endif\n\n#endif /* not MERCURY_FACT_TABLE_HASH_TABLES */\n", C_HeaderCode_11);
  }
}

static void MR_CALL 
ll_backend__fact_table__create_fact_table_struct_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer I_2,
  MR_Word Context_3,
  MR_String * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Errors_0_5,
  MR_Word * STATE_VARIABLE_Errors_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_String) "";
      *STATE_VARIABLE_Errors_6 = STATE_VARIABLE_Errors_0_5;
    }
    else
    {
      MR_Word Info_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Infos_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String StructContentsTail_18;
      MR_Word Type_19;
      MR_Word IsOutput_21;
      MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) I_2 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_Errors_28_28;
      MR_String TypeStr_22;
      MR_Word Var_48;

      ll_backend__fact_table__create_fact_table_struct_6_p_0(Infos_13, Var_27, Context_3, &StructContentsTail_18, STATE_VARIABLE_Errors_0_5, &STATE_VARIABLE_Errors_28_28);
      Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 0))));
      IsOutput_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1))) & (MR_Integer) 1);
      succeeded = ((MR_tag((MR_Word) Type_19)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_19, (MR_Integer) 0))));
        switch (MR_tag((MR_Word) Var_48)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(Var_48)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  TypeStr_22 = (MR_String) "MR_Float";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  TypeStr_22 = (MR_String) "MR_ConstString";
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0))) & (MR_Integer) 15);

              succeeded = (Var_32 == (MR_Integer) 0);
              if (succeeded)
              {
                TypeStr_22 = (MR_String) "MR_Integer";
                succeeded = MR_TRUE;
              }
            }
            break;
        }
      }
      if (succeeded)
      {
        switch (IsOutput_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__4_4 = StructContentsTail_18;
            break;
          case (MR_Integer) 1:
            {
              MR_String StructField_23;
              MR_String Var_50;
              MR_String Var_57;
              MR_String Var_59;
              MR_String Var_60;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), I_2, &Var_50);
              Var_57 = mercury__string__f_43_43_2_f_0(Var_50, (MR_String) ";\n");
              Var_59 = mercury__string__f_43_43_2_f_0((MR_String) " V_", Var_57);
              Var_60 = mercury__string__f_43_43_2_f_0(TypeStr_22, Var_59);
              StructField_23 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_60);
              mercury__string__append_3_p_2(StructField_23, StructContentsTail_18, HeadVar__4_4);
            }
            break;
        }
        *STATE_VARIABLE_Errors_6 = STATE_VARIABLE_Errors_28_28;
      }
      else
      {
        MR_Word Var_68;
        MR_Word Var_69;

        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Context_3));
        }
        {
          Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[76])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Errors_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Errors_28_28));
        }
        *HeadVar__4_4 = StructContentsTail_18;
      }
    }
  }
}

static MR_String MR_CALL 
ll_backend__fact_table__fact_table_file_header_1_f_0(
  MR_String FileName_3)
{
  {
    MR_String FileHeader_4;
    MR_String Version_5;
    MR_String Fullarch_6;
    MR_Word Var_7;
    MR_Word Var_9;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_21;

    mercury__library__version_2_p_0(&Version_5, &Fullarch_6);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Fullarch_6));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[9])));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) ((MR_String) "** configured for "));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) ((MR_String) ",\n"));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Version_5));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) ((MR_String) "** by the Mercury compiler, version "));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) ((MR_String) "\'\n"));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (FileName_3));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) ((MR_String) "** Automatically generated from \140"));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_11));
    }
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) ((MR_String) "/*\n"));
      MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) (Var_9));
    }
    mercury__string__append_list_2_p_0(Var_7, &FileHeader_4);
    return FileHeader_4;
  }
}

static void MR_CALL 
ll_backend__fact_table__compile_facts_13_p_0(
  MR_Word PredName_14,
  MR_Integer Arity_15,
  MR_Word PredInfo_16,
  MR_Word ModuleInfo_17,
  MR_Word FactArgInfos_18,
  MR_Word ProcStreams_19,
  MR_Word MaybeOutput_20,
  MR_Integer STATE_VARIABLE_NumFacts_0_35,
  MR_Integer * STATE_VARIABLE_NumFacts_36,
  MR_Word STATE_VARIABLE_Errors_0_37,
  MR_Word * STATE_VARIABLE_Errors_38)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Result0_24;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__parser__read_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Result0_24);
    switch (MR_tag((MR_Word) Result0_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_NumFacts_36 = STATE_VARIABLE_NumFacts_0_35;
          *STATE_VARIABLE_Errors_38 = STATE_VARIABLE_Errors_0_37;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Message_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result0_24, (MR_Integer) 0))));
          MR_Integer LineNum_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Result0_24, (MR_Integer) 1))));
          MR_String FileName_27;
          MR_Word Context_28;
          MR_Word Var_57;
          MR_Word Var_59;
          MR_Word Var_80;
          MR_Word Var_81;

          mercury__io__input_stream_name_3_p_0(&FileName_27);
          mercury__term__context_init_3_p_0(FileName_27, LineNum_26, &Context_28);
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Message_25));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Context_28));
          }
          {
            Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Var_57));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Errors_38 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Errors_0_37));
          }
          *STATE_VARIABLE_NumFacts_36 = STATE_VARIABLE_NumFacts_0_35;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Term_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result0_24, (MR_Integer) 1))));
          MR_Word Globals_31;
          MR_Integer FactTableSize_32;
          MR_Word Result_34;
          MR_Word STATE_VARIABLE_Errors_49_49;
          MR_Integer STATE_VARIABLE_NumFacts_51_51;
          MR_Integer Var_62;
          MR_Integer next_value_of_STATE_VARIABLE_NumFacts_0_35;
          MR_Word next_value_of_STATE_VARIABLE_Errors_0_37;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_17, &Globals_31);
          libs__globals__lookup_int_option_3_p_0(Globals_31, (MR_Integer) 345, &FactTableSize_32);
          Var_62 = mercury__int__mod_2_f_0(STATE_VARIABLE_NumFacts_0_35, FactTableSize_32);
          succeeded = ((MR_Integer) 0 == Var_62);
          if (succeeded)
          {
            MR_Word VeryVerbose_33;

            libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 66, &VeryVerbose_33);
            switch (VeryVerbose_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Var_66;

                  mercury__io__write_string_3_p_0((MR_String) "% Read fact ");
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), STATE_VARIABLE_NumFacts_0_35, &Var_66);
                  mercury__io__write_string_3_p_0(Var_66);
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
                break;
            }
          }
          ll_backend__fact_table__check_fact_term_14_p_0(PredName_14, Arity_15, PredInfo_16, ModuleInfo_17, Term_30, FactArgInfos_18, ProcStreams_19, MaybeOutput_20, STATE_VARIABLE_NumFacts_0_35, &Result_34, STATE_VARIABLE_Errors_0_37, &STATE_VARIABLE_Errors_49_49);
          switch (Result_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              STATE_VARIABLE_NumFacts_51_51 = STATE_VARIABLE_NumFacts_0_35;
              break;
            case (MR_Integer) 0:
              STATE_VARIABLE_NumFacts_51_51 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumFacts_0_35 + (MR_Unsigned) 1);
              break;
          }
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_NumFacts_0_35 = STATE_VARIABLE_NumFacts_51_51;
          next_value_of_STATE_VARIABLE_Errors_0_37 = STATE_VARIABLE_Errors_49_49;
          STATE_VARIABLE_NumFacts_0_35 = next_value_of_STATE_VARIABLE_NumFacts_0_35;
          STATE_VARIABLE_Errors_0_37 = next_value_of_STATE_VARIABLE_Errors_0_37;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__check_fact_term_14_p_0(
  MR_Word PredName_1,
  MR_Integer Arity0_2,
  MR_Word PredInfo_3,
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word FactArgInfos_6,
  MR_Word ProcStreams_7,
  MR_Word MaybeOutput_8,
  MR_Integer FactNum_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_Errors_0_11,
  MR_Word * STATE_VARIABLE_Errors_12)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__5_5)) == (MR_Integer) 0))
    {
      MR_Word Const_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Terms0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Context_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 2))));
      MR_Word PredOrFunc_55;
      MR_String PredString_56;
      MR_String TopLevel_57;

      PredOrFunc_55 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_3);
      PredString_56 = mdbcomp__sym_name__unqualify_name_1_f_0(PredName_1);
      succeeded = ((MR_tag((MR_Word) Const_45)) == (MR_Integer) 0);
      if (succeeded)
      {
        TopLevel_57 = ((MR_String) ((MR_hl_field(MR_mktag(0), Const_45, (MR_Integer) 0))));
        {
          MR_Word Terms_58;
          MR_Integer Arity_59;

          switch (PredOrFunc_55) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_95_95;
                MR_Word FuncHeadTerm_60;
                MR_Word Terms1_62;
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word Var_72;
                MR_Integer Var_75;
                MR_String Var_96;

                succeeded = (strcmp(TopLevel_57, (MR_String) "=") == 0);
                if (succeeded)
                {
                  succeeded = (Terms0_46 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    FuncHeadTerm_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Terms0_46, (MR_Integer) 0))));
                    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Terms0_46, (MR_Integer) 1))));
                    succeeded = (Var_70 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 1))));
                      succeeded = (Var_71 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) FuncHeadTerm_60)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncHeadTerm_60, (MR_Integer) 0))));
                          Terms1_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncHeadTerm_60, (MR_Integer) 1))));
                          succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Var_96 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 0))));
                            succeeded = (strcmp(PredString_56, Var_96) == 0);
                            if (succeeded)
                            {
                              TypeInfo_95_95 = (MR_Word) (&ll_backend__fact_table_scalar_common_1[2]);
                              mercury__list__append_3_p_1(TypeInfo_95_95, Terms1_62, Var_70, &Terms_58);
                              Var_75 = (MR_Integer) 1;
                              Arity_59 = (MR_Integer) ((MR_Unsigned) Arity0_2 + (MR_Unsigned) Var_75);
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 0:
              {
                succeeded = (strcmp(TopLevel_57, PredString_56) == 0);
                if (succeeded)
                {
                  Terms_58 = Terms0_46;
                  Arity_59 = Arity0_2;
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          if (succeeded)
            ll_backend__fact_table__check_fact_term_2_15_p_0(PredOrFunc_55, Arity_59, PredInfo_3, ModuleInfo_4, Terms_58, Context_47, FactArgInfos_6, ProcStreams_7, MaybeOutput_8, FactNum_9, HeadVar__10_10, STATE_VARIABLE_Errors_0_11, STATE_VARIABLE_Errors_12);
          else
          {
            MR_String PFStr_64;
            MR_String Msg_65;
            MR_Word Var_86;
            MR_Word Var_88;
            MR_String Var_98;
            MR_String Var_105;
            MR_String Var_107;
            MR_String Var_108;
            MR_String Var_110;
            MR_String Var_111;

            PFStr_64 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_55);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), Arity0_2, &Var_98);
            Var_105 = mercury__string__f_43_43_2_f_0(Var_98, (MR_String) "\'.");
            Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_105);
            Var_108 = mercury__string__f_43_43_2_f_0(PredString_56, Var_107);
            Var_110 = mercury__string__f_43_43_2_f_0((MR_String) " \140", Var_108);
            Var_111 = mercury__string__f_43_43_2_f_0(PFStr_64, Var_110);
            Msg_65 = mercury__string__f_43_43_2_f_0((MR_String) "Error: invalid clause for ", Var_111);
            {
              Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (Msg_65));
            }
            {
              Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_88));
              MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ll_backend__fact_table__add_error_report_4_p_0(Context_47, Var_86, STATE_VARIABLE_Errors_0_11, STATE_VARIABLE_Errors_12);
            *HeadVar__10_10 = (MR_Integer) 1;
          }
        }
      }
      else
      {
        ll_backend__fact_table__add_error_report_4_p_0(Context_47, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[74])), STATE_VARIABLE_Errors_0_11, STATE_VARIABLE_Errors_12);
        *HeadVar__10_10 = (MR_Integer) 1;
      }
    }
    else
    {
      MR_Integer LineNum_27;
      MR_String FileName_28;
      MR_Word Context_29;

      *HeadVar__10_10 = (MR_Integer) 1;
      mercury__io__get_line_number_3_p_0(&LineNum_27);
      mercury__io__input_stream_name_3_p_0(&FileName_28);
      {
        Context_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Context_29, 0) = ((MR_Box) (FileName_28));
        MR_hl_field(MR_mktag(0), Context_29, 1) = ((MR_Box) (LineNum_27));
      }
      ll_backend__fact_table__add_error_report_4_p_0(Context_29, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[74])), STATE_VARIABLE_Errors_0_11, STATE_VARIABLE_Errors_12);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table__check_fact_term_2_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_56;

    succeeded = ll_backend__fact_table__IntroducedFrom__pred__check_fact_term_2__488__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_56);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_56));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table__check_fact_term_2_15_p_0(
  MR_Word PredOrFunc_16,
  MR_Integer Arity_17,
  MR_Word PredInfo_18,
  MR_Word ModuleInfo_19,
  MR_Word Terms_20,
  MR_Word Context_21,
  MR_Word FactArgInfos_22,
  MR_Word ProcStreams_23,
  MR_Word MaybeOutput_24,
  MR_Integer FactNum_25,
  MR_Word * Result_26,
  MR_Word STATE_VARIABLE_Errors_0_46,
  MR_Word * STATE_VARIABLE_Errors_47)
{
  {
    MR_bool succeeded;
    MR_Integer Len_29;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[2]), Terms_20, &Len_29);
    succeeded = (Len_29 == Arity_17);
    if (succeeded)
    {
      MR_Word Types_30;
      MR_Word ProcTable_31;
      MR_String FactNumStr_32;
      MR_Word OutputStream_33;
      MR_String StructName_34;
      MR_Word FactArgs_40;
      MR_Word TypeCtorInfo_74_74;
      MR_Word TermToArg_35;
      MR_Word Var_54;

      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_18, &Types_30);
      ll_backend__fact_table__check_fact_type_and_mode_8_p_0(Types_30, Terms_20, (MR_Integer) 0, PredOrFunc_16, Context_21, Result_26, STATE_VARIABLE_Errors_0_46, STATE_VARIABLE_Errors_47);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_18, &ProcTable_31);
      mercury__string__int_to_string_2_p_0(FactNum_25, &FactNumStr_32);
      ll_backend__fact_table__write_sort_file_lines_9_p_0(ProcStreams_23, ProcTable_31, Terms_20, ModuleInfo_19, FactNumStr_32, FactArgInfos_22, (MR_Integer) 1);
      succeeded = (MaybeOutput_24 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutput_24, (MR_Integer) 0))));
        OutputStream_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 0))));
        StructName_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 1))));
        TermToArg_35 = (MR_Word) (&ll_backend__fact_table_scalar_common_2[2]);
        TypeCtorInfo_74_74 = (MR_Word) (&mercury__term__term__type_ctor_info_const_0);
        succeeded = mercury__list__map_3_p_2((MR_Word) (&ll_backend__fact_table_scalar_common_1[2]), TypeCtorInfo_74_74, TermToArg_35, Terms_20, &FactArgs_40);
      }
      if (succeeded)
      {
        MR_Word Globals_41;
        MR_Word VeryVerbose_42;
        MR_Integer FactTableSize_43;

        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_19, &Globals_41);
        libs__globals__lookup_bool_option_3_p_0(Globals_41, (MR_Integer) 66, &VeryVerbose_42);
        libs__globals__lookup_int_option_3_p_0(Globals_41, (MR_Integer) 345, &FactTableSize_43);
        ll_backend__fact_table__write_fact_data_8_p_0(VeryVerbose_42, FactNum_25, FactTableSize_43, FactArgs_40, StructName_34, OutputStream_33);
      }
    }
    else
    {
      MR_String Msg2_45;
      MR_Word Var_65;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_String Var_76;
      MR_String Var_83;
      MR_String Var_85;
      MR_String Var_86;
      MR_String Var_93;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), Len_29, &Var_76);
      Var_83 = mercury__string__f_43_43_2_f_0(Var_76, (MR_String) " arguments.");
      Var_85 = mercury__string__f_43_43_2_f_0((MR_String) " arguments, but fact has ", Var_83);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), Arity_17, &Var_86);
      Var_93 = mercury__string__f_43_43_2_f_0(Var_86, Var_85);
      Msg2_45 = mercury__string__f_43_43_2_f_0((MR_String) "Expecting ", Var_93);
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Msg2_45));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[72])));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
      }
      ll_backend__fact_table__add_error_report_4_p_0(Context_21, Var_65, STATE_VARIABLE_Errors_0_46, STATE_VARIABLE_Errors_47);
      *Result_26 = (MR_Integer) 1;
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__add_error_report_4_p_0(
  MR_Word Context_5,
  MR_Word Pieces_6,
  MR_Word STATE_VARIABLE_Errors_0_8,
  MR_Word * STATE_VARIABLE_Errors_9)
{
  {
    MR_Word Var_11;
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Context_5));
    }
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Pieces_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Errors_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Errors_0_8));
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_data_8_p_0(
  MR_Word VeryVerbose_9,
  MR_Integer FactNum_10,
  MR_Integer FactTableSize_11,
  MR_Word Args_12,
  MR_String StructName_13,
  MR_Word OutputStream_14)
{
  {
    MR_bool succeeded;
    MR_Integer Var_31;

    Var_31 = mercury__int__mod_2_f_0(FactNum_10, FactTableSize_11);
    succeeded = ((MR_Integer) 0 == Var_31);
    if (succeeded)
    {
      succeeded = (FactNum_10 == (MR_Integer) 0);
      if (!(succeeded))
      {
        MR_String Var_71;

        mercury__io__write_string_4_p_0(OutputStream_14, (MR_String) "};\n\n");
        mercury__io__write_string_4_p_0(OutputStream_14, (MR_String) "const struct ");
        mercury__io__write_string_4_p_0(OutputStream_14, StructName_13);
        mercury__io__write_string_4_p_0(OutputStream_14, (MR_String) "_struct ");
        mercury__io__write_string_4_p_0(OutputStream_14, StructName_13);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactNum_10, &Var_71);
        mercury__io__write_string_4_p_0(OutputStream_14, Var_71);
        mercury__io__write_string_4_p_0(OutputStream_14, (MR_String) "[] = {\n");
      }
      switch (VeryVerbose_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_35;

            mercury__io__write_string_3_p_0((MR_String) "% Writing fact ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactNum_10, &Var_35);
            mercury__io__write_string_3_p_0(Var_35);
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          break;
      }
    }
    mercury__io__write_string_4_p_0(OutputStream_14, (MR_String) "\t{");
    ll_backend__fact_table__write_fact_args_4_p_0(OutputStream_14, Args_12);
    mercury__io__write_string_4_p_0(OutputStream_14, (MR_String) " },\n");
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_args_4_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Arg_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      switch (MR_tag((MR_Word) Arg_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.write_fact_args\'/4", (MR_String) "unsupported type");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Base_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Arg_10, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word Integer_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Arg_10, (MR_Integer) 1))));
            MR_Word Signedness_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Arg_10, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);

            switch (Signedness_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_18;

                  succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(Base_14, Integer_15, &Int_18);
                  if (succeeded)
                  {
                    mercury__io__write_int_4_p_0(OutputStream_1, Int_18);
                    mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) ", ");
                  }
                  else
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.write_fact_args\'/4", (MR_String) "integer too big");
                      return;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.write_fact_args\'/4", (MR_String) "NYI uints in fact tables");
                  return;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String String_13 = ((MR_String) ((MR_hl_field(MR_mktag(2), Arg_10, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "\"");
            backend_libs__c_util__output_quoted_string_4_p_0(OutputStream_1, String_13);
            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "\", ");
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Arg_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Float Float_19 = MR_unbox_float((MR_hl_field(MR_mktag(3), Arg_10, (MR_Integer) 1)));

                mercury__io__write_float_4_p_0(OutputStream_1, Float_19);
                mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) ", ");
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.write_fact_args\'/4", (MR_String) "implementation-defined literal");
                return;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Args_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__write_sort_file_lines_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProcTable_2,
  MR_Word Terms_3,
  MR_Word ModuleInfo_4,
  MR_String FactNumStr_5,
  MR_Word FactArgInfos_6,
  MR_Word IsPrimary_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer ProcID_19;
      MR_Word Stream_20;
      MR_Word ProcStreams_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ProcInfo_29;
      MR_Word ArgModes_30;
      MR_Word ModeTerms_31;
      MR_String Key_32;
      MR_String DataString_34;
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_38;
      MR_Word Var_40;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_45;
      MR_Box conv0_ProcInfo_29;
      MR_Word next_value_of_HeadVar__1_1;

      ProcID_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0))));
      Stream_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_2, ((MR_Box) (ProcID_19)), &conv0_ProcInfo_29);
      ProcInfo_29 = ((MR_Word) (conv0_ProcInfo_29));
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_29, &ArgModes_30);
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&ll_backend__fact_table_scalar_common_1[2]), ArgModes_30, Terms_3, &ModeTerms_31);
      ll_backend__fact_table__make_sort_file_key_3_p_0(ModeTerms_31, ModuleInfo_4, &Key_32);
      switch (IsPrimary_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          DataString_34 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          {
            MR_Word InfoTerms_33;

            mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_info_0), (MR_Word) (&ll_backend__fact_table_scalar_common_1[2]), FactArgInfos_6, Terms_3, &InfoTerms_33);
            DataString_34 = ll_backend__fact_table__make_fact_data_string_1_f_0(InfoTerms_33);
          }
          break;
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (DataString_34));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[71])));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) ((MR_String) "~"));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (FactNumStr_5));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) ((MR_String) "~"));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Key_32));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
      }
      mercury__io__write_strings_4_p_0(Stream_20, Var_38);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ProcStreams_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      FactArgInfos_6 = (MR_Word) ((MR_Unsigned) 0U);
      IsPrimary_7 = (MR_Integer) 0;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
ll_backend__fact_table__make_fact_data_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_String HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_String) "";
    else
    {
      MR_Word IsOutput_5;
      MR_Word Term_6;
      MR_Word InfoTerms_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      MR_Word Const_9;
      MR_Word Var_15;

      Term_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
      IsOutput_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))) & (MR_Integer) 1);
      succeeded = (IsOutput_5 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
        if (succeeded)
        {
          Const_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
          succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
      {
        MR_String KeyPart_11;
        MR_String String0_12;
        MR_Word Var_16;
        MR_Word Var_17;
        MR_Word Var_19;

        switch (MR_tag((MR_Word) Const_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.fact_table.make_key_part\'/1", (MR_String) "enumerated types are not supported yet.");
            break;
          case (MR_Integer) 1:
            {
              MR_Word Base_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_9, (MR_Integer) 0))) & (MR_Integer) 3);
              MR_Word Integer_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_9, (MR_Integer) 1))));
              MR_Word Signedness_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_9, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);

              switch (Signedness_26) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer I_28;

                    succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(Base_24, Integer_25, &I_28);
                    if (succeeded)
                      KeyPart_11 = mercury__string__int_to_base_string_2_f_0(I_28, (MR_Integer) 36);
                    else
                      mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.fact_table.make_key_part\'/1", (MR_String) "integer too big");
                  }
                  break;
                case (MR_Integer) 1:
                  mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.fact_table.make_key_part\'/1", (MR_String) "NYI uints and fact tables");
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Str_30 = ((MR_String) ((MR_hl_field(MR_mktag(2), Const_9, (MR_Integer) 0))));
              MR_Word Chars_31;
              MR_Word EscapedChars_32;
              MR_Word EscapedCharsCord_45;
              MR_Word Var_46;

              mercury__string__to_char_list_2_p_0(Str_30, &Chars_31);
              Var_46 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0));
              ll_backend__fact_table__key_from_chars_loop_3_p_0(Chars_31, Var_46, &EscapedCharsCord_45);
              EscapedChars_32 = mercury__cord__to_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), EscapedCharsCord_45);
              mercury__string__from_char_list_2_p_0(EscapedChars_32, &KeyPart_11);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_9, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Float F_29 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_9, (MR_Integer) 1)));

                  KeyPart_11 = mercury__string__float_to_string_1_f_0(F_29);
                }
                break;
              case (MR_Integer) 1:
                mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.fact_table.make_key_part\'/1", (MR_String) "implementation-defined literal");
                break;
            }
            break;
        }
        String0_12 = ll_backend__fact_table__make_fact_data_string_1_f_0(InfoTerms_7);
        {
          Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (String0_12));
          MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) ((MR_String) ":"));
          MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
        }
        {
          Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (KeyPart_11));
          MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_17));
        }
        mercury__string__append_list_2_p_0(Var_16, &HeadVar__2_2);
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = InfoTerms_7;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__make_sort_file_key_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_String * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_Word Mode_5;
      MR_Word Term_6;
      MR_Word ModeTerms_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Const_10;
      MR_Word Var_16;

      Mode_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
      Term_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1))));
      succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(ModuleInfo_2, Mode_5);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
        if (succeeded)
        {
          Const_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
          succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
      {
        MR_String KeyPart_12;
        MR_String Key0_13;
        MR_String Key1_14;

        switch (MR_tag((MR_Word) Const_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.fact_table.make_key_part\'/1", (MR_String) "enumerated types are not supported yet.");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Base_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_10, (MR_Integer) 0))) & (MR_Integer) 3);
              MR_Word Integer_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_10, (MR_Integer) 1))));
              MR_Word Signedness_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_10, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);

              switch (Signedness_23) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer I_25;

                    succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(Base_21, Integer_22, &I_25);
                    if (succeeded)
                      KeyPart_12 = mercury__string__int_to_base_string_2_f_0(I_25, (MR_Integer) 36);
                    else
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.fact_table.make_key_part\'/1", (MR_String) "integer too big");
                        return;
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.fact_table.make_key_part\'/1", (MR_String) "NYI uints and fact tables");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Str_27 = ((MR_String) ((MR_hl_field(MR_mktag(2), Const_10, (MR_Integer) 0))));
              MR_Word Chars_28;
              MR_Word EscapedChars_29;
              MR_Word EscapedCharsCord_42;
              MR_Word Var_43;

              mercury__string__to_char_list_2_p_0(Str_27, &Chars_28);
              Var_43 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0));
              ll_backend__fact_table__key_from_chars_loop_3_p_0(Chars_28, Var_43, &EscapedCharsCord_42);
              EscapedChars_29 = mercury__cord__to_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), EscapedCharsCord_42);
              mercury__string__from_char_list_2_p_0(EscapedChars_29, &KeyPart_12);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_10, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Float F_26 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_10, (MR_Integer) 1)));

                  KeyPart_12 = mercury__string__float_to_string_1_f_0(F_26);
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.fact_table.make_key_part\'/1", (MR_String) "implementation-defined literal");
                  return;
                }
                break;
            }
            break;
        }
        ll_backend__fact_table__make_sort_file_key_3_p_0(ModeTerms_7, ModuleInfo_2, &Key0_13);
        mercury__string__append_3_p_2((MR_String) ":", Key0_13, &Key1_14);
        mercury__string__append_3_p_2(KeyPart_12, Key1_14, HeadVar__3_3);
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = ModeTerms_7;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__key_from_chars_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_EscapedCharsCord_0_2,
  MR_Word * STATE_VARIABLE_EscapedCharsCord_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_EscapedCharsCord_3 = STATE_VARIABLE_EscapedCharsCord_0_2;
    else
    {
      MR_Char Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Chars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_EscapedCharsCord_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_EscapedCharsCord_0_2;

      succeeded = (Char_7 == (MR_Char) 92);
      if (succeeded)
      {
        MR_Word Var_13;

        Var_13 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[11])));
        STATE_VARIABLE_EscapedCharsCord_12_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_EscapedCharsCord_0_2, Var_13);
      }
      else
      {
        succeeded = (Char_7 == (MR_Char) 10);
        if (succeeded)
        {
          MR_Word Var_20;

          Var_20 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[13])));
          STATE_VARIABLE_EscapedCharsCord_12_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_EscapedCharsCord_0_2, Var_20);
        }
        else
        {
          succeeded = (Char_7 == (MR_Char) 58);
          if (succeeded)
          {
            MR_Word Var_27;

            Var_27 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[15])));
            STATE_VARIABLE_EscapedCharsCord_12_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_EscapedCharsCord_0_2, Var_27);
          }
          else
          {
            succeeded = (Char_7 == (MR_Char) 126);
            if (succeeded)
            {
              MR_Word Var_34;

              Var_34 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[17])));
              STATE_VARIABLE_EscapedCharsCord_12_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_EscapedCharsCord_0_2, Var_34);
            }
            else
              STATE_VARIABLE_EscapedCharsCord_12_12 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_EscapedCharsCord_0_2, ((MR_Box) (MR_Word) (Char_7)));
          }
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Chars_8;
      next_value_of_STATE_VARIABLE_EscapedCharsCord_0_2 = STATE_VARIABLE_EscapedCharsCord_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_EscapedCharsCord_0_2 = next_value_of_STATE_VARIABLE_EscapedCharsCord_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__check_fact_type_and_mode_8_p_0(
  MR_Word Types0_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum0_3,
  MR_Word PredOrFunc_4,
  MR_Word Context0_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Errors_0_7,
  MR_Word * STATE_VARIABLE_Errors_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Integer) 0;
      *STATE_VARIABLE_Errors_8 = STATE_VARIABLE_Errors_0_7;
    }
    else
    {
      MR_Word Term_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Terms_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgNum_24 = (MR_Integer) ((MR_Unsigned) ArgNum0_3 + (MR_Unsigned) 1);

      if (((MR_tag((MR_Word) Term_17)) == (MR_Integer) 0))
      {
        MR_Word Functor_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_17, (MR_Integer) 0))));
        MR_Word Items_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_17, (MR_Integer) 1))));
        MR_Word Context_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_17, (MR_Integer) 2))));
        MR_Word RequiredType_32;

        switch (MR_tag((MR_Word) Functor_28)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            RequiredType_32 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Signedness_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Functor_28, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);

              switch (Signedness_35) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  RequiredType_32 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_3[3]));
                  break;
                case (MR_Integer) 1:
                  RequiredType_32 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_3[5]));
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            RequiredType_32 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_3[6]));
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_28, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                RequiredType_32 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_3[1]));
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.check_fact_type_and_mode\'/8", (MR_String) "implementation-defined literal");
                  return;
                }
                break;
            }
            break;
        }
        if ((RequiredType_32 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_60;
          MR_Word Var_62;
          MR_String Msg_68;
          MR_Word Var_79;
          MR_Word Var_80;

          if ((Items_29 == (MR_Word) ((MR_Unsigned) 0U)))
            Msg_68 = (MR_String) "Error: enumeration types are not yet supported in fact tables.";
          else
            Msg_68 = (MR_String) "Error: compound types are not supported in fact tables.";
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (Msg_68));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Context_30));
          }
          {
            Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (Var_60));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Errors_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_79));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Errors_0_7));
          }
          *HeadVar__6_6 = (MR_Integer) 1;
        }
        else
        {
          MR_Word BuiltinType_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RequiredType_32, (MR_Integer) 0))));
          MR_Word Types_44;
          MR_Word Type_43;
          MR_Word Var_71;

          succeeded = (Types0_1 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Type_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Types0_1, (MR_Integer) 0))));
            Types_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Types0_1, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Type_43)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_43, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_42, Var_71);
            }
          }
          if (succeeded)
          {
            MR_Word next_value_of_Types0_1 = Types_44;
            MR_Word next_value_of_HeadVar__2_2 = Terms_18;
            MR_Integer next_value_of_ArgNum0_3 = ArgNum_24;

            // direct tailcall eliminated
            ;
            Types0_1 = next_value_of_Types0_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            ArgNum0_3 = next_value_of_ArgNum0_3;
            continue;
          }
          else
          {
            ll_backend__fact_table__report_type_error_6_p_0(Context_30, ArgNum_24, Terms_18, PredOrFunc_4, STATE_VARIABLE_Errors_0_7, STATE_VARIABLE_Errors_8);
            *HeadVar__6_6 = (MR_Integer) 1;
          }
        }
      }
      else
      {
        MR_Word Var_87;
        MR_Word Var_88;

        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Context0_5));
        }
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (Var_88));
          MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[70])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Errors_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_87));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Errors_0_7));
        }
        *HeadVar__6_6 = (MR_Integer) 1;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__report_type_error_6_p_0(
  MR_Word Context_7,
  MR_Integer ArgNum_8,
  MR_Word RemainingTerms_9,
  MR_Word PredOrFunc_10,
  MR_Word STATE_VARIABLE_Errors_0_13,
  MR_Word * STATE_VARIABLE_Errors_14)
{
  {
    MR_bool succeeded = (PredOrFunc_10 == (MR_Integer) 1);
    MR_String Msg_12;
    MR_Word Var_19;
    MR_Word Var_21;
    MR_Word Var_39;
    MR_Word Var_40;

    if (succeeded)
      succeeded = (RemainingTerms_9 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      Msg_12 = (MR_String) "Type error in return value of function.";
    else
    {
      MR_String Var_24;
      MR_String Var_31;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ArgNum_8, &Var_24);
      Var_31 = mercury__string__f_43_43_2_f_0(Var_24, (MR_String) ".");
      Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "Type error in argument ", Var_31);
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (Msg_12));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Context_7));
    }
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (Var_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Errors_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Errors_0_13));
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__fact_table_size_2_p_0(
  MR_Word Globals_3,
  MR_Integer * FactTableSize_4)
{
  libs__globals__lookup_int_option_3_p_0(Globals_3, (MR_Integer) 345, FactTableSize_4);
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____comparison_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__fact_table____Unify____comparison_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____comparison_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__fact_table____Compare____comparison_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____error_report_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__fact_table____Unify____error_report_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____error_report_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__fact_table____Compare____error_report_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____error_reports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__fact_table____Unify____error_reports_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____error_reports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__fact_table____Compare____error_reports_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__fact_table____Unify____fact_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__fact_table____Compare____fact_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__fact_table____Unify____fact_arg_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__fact_table____Compare____fact_arg_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__fact_table____Unify____fact_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__fact_table____Compare____fact_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_mode_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__fact_table____Unify____fact_table_mode_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_mode_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__fact_table____Compare____fact_table_mode_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__fact_table____Unify____hash_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__fact_table____Compare____hash_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__fact_table____Unify____hash_index_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__fact_table____Compare____hash_index_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__fact_table____Unify____hash_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__fact_table____Compare____hash_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____inferred_determinism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__fact_table____Unify____inferred_determinism_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____inferred_determinism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__fact_table____Compare____inferred_determinism_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____proc_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__fact_table____Unify____proc_stream_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____proc_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__fact_table____Compare____proc_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____sort_file_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__fact_table____Unify____sort_file_line_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____sort_file_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__fact_table____Compare____sort_file_line_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__fact_table__init(void)
{
}

void mercury__ll_backend__fact_table__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_comparison_kind_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_error_report_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_error_reports_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_info_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_result_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_mode_type_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_index_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_table_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_inferred_determinism_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_proc_stream_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0);
}

void mercury__ll_backend__fact_table__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__fact_table__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.fact_table.
